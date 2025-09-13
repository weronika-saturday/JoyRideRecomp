#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_827F8FD4"))) PPC_WEAK_FUNC(sub_827F8FD4);
PPC_FUNC_IMPL(__imp__sub_827F8FD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F8FD8"))) PPC_WEAK_FUNC(sub_827F8FD8);
PPC_FUNC_IMPL(__imp__sub_827F8FD8) {
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
	// lis r11,-32128
	r11.s64 = -2105540608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r11,-28768
	ctx.r5.s64 = r11.s64 + -28768;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x8279f2b8
	sub_8279F2B8(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r8,r10,16988
	ctx.r8.s64 = ctx.r10.s64 + 16988;
	// addi r7,r9,16900
	ctx.r7.s64 = ctx.r9.s64 + 16900;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r5,16880
	ctx.r5.s64 = ctx.r5.s64 + 16880;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82788c60
	sub_82788C60(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r5,r4,16716
	ctx.r5.s64 = ctx.r4.s64 + 16716;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8277f218
	sub_8277F218(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827F905C"))) PPC_WEAK_FUNC(sub_827F905C);
PPC_FUNC_IMPL(__imp__sub_827F905C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827F9060"))) PPC_WEAK_FUNC(sub_827F9060);
PPC_FUNC_IMPL(__imp__sub_827F9060) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,124(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 124);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lwz r11,120(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// subfic r8,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	ctx.r8.s64 = 6 - ctx.r10.s64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// subfe r10,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r9,16880
	ctx.r4.s64 = ctx.r9.s64 + 16880;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// clrlwi r26,r10,31
	r26.u64 = ctx.r10.u32 & 0x1;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// bl 0x827ea238
	sub_827EA238(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addic. r11,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	r11.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bne 0x827f90ec
	if (!cr0.eq) goto loc_827F90EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F90EC:
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f9130
	if (cr6.eq) goto loc_827F9130;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827793b8
	sub_827793B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r31,272(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 272);
	// bl 0x82766830
	sub_82766830(ctx, base);
	// addic r10,r31,-1
	xer.ca = r31.u32 > 0;
	ctx.r10.s64 = r31.s64 + -1;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfe r8,r10,r31
	temp.u8 = (~ctx.r10.u32 + r31.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r31.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r9.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r8,4(r28)
	PPC_STORE_U8(r28.u32 + 4, ctx.r8.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_827F9130:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8278f308
	sub_8278F308(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_827F9148"))) PPC_WEAK_FUNC(sub_827F9148);
PPC_FUNC_IMPL(__imp__sub_827F9148) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_827F914C"))) PPC_WEAK_FUNC(sub_827F914C);
PPC_FUNC_IMPL(__imp__sub_827F914C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9150"))) PPC_WEAK_FUNC(sub_827F9150);
PPC_FUNC_IMPL(__imp__sub_827F9150) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x827793b8
	sub_827793B8(ctx, base);
	// lwz r11,272(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827f9368
	if (cr6.eq) goto loc_827F9368;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r24,0
	r24.s64 = 0;
	// mr r28,r24
	r28.u64 = r24.u64;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// lwz r26,8(r10)
	r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,8(r26)
	PPC_STORE_U32(r26.u32 + 8, ctx.r9.u32);
	// lwz r8,28(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// blt cr6,0x827f9248
	if (cr6.lt) goto loc_827F9248;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,24(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r11
	r31.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r26)
	PPC_STORE_U32(r26.u32 + 8, r11.u32);
	// bne 0x827f91f8
	if (!cr0.eq) goto loc_827F91F8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F91F8:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r26,r31
	r26.u64 = r31.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f9218
	if (!cr0.eq) goto loc_827F9218;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F9218:
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// addi r28,r11,-1
	r28.s64 = r11.s64 + -1;
	// cmplwi cr6,r28,10
	cr6.compare<uint32_t>(r28.u32, 10, xer);
	// ble cr6,0x827f9248
	if (!cr6.gt) goto loc_827F9248;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r28,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// lwz r3,648(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// b 0x827f924c
	goto loc_827F924C;
loc_827F9248:
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
loc_827F924C:
	// mr r11,r24
	r11.u64 = r24.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x827f92a8
	if (cr6.eq) goto loc_827F92A8;
	// mr r31,r25
	r31.u64 = r25.u64;
loc_827F925C:
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827f9288
	if (cr6.eq) goto loc_827F9288;
	// stw r24,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r24.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r24,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r24.u32);
	// b 0x827f928c
	goto loc_827F928C;
loc_827F9288:
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
loc_827F928C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x82757a40
	sub_82757A40(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// blt cr6,0x827f925c
	if (cr6.lt) goto loc_827F925C;
loc_827F92A8:
	// addi r31,r27,2520
	r31.s64 = r27.s64 + 2520;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r24,2520(r27)
	PPC_STORE_U8(r27.u32 + 2520, r24.u8);
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// beq cr6,0x827f92cc
	if (cr6.eq) goto loc_827F92CC;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 0);
loc_827F92CC:
	// lwz r3,272(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 272);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x827f9338
	if (cr6.eq) goto loc_827F9338;
	// mr r31,r25
	r31.u64 = r25.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_827F9308:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827f932c
	if (cr6.eq) goto loc_827F932C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r24,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r24.u32);
loc_827F932C:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x827f9308
	if (!cr0.eq) goto loc_827F9308;
loc_827F9338:
	// cmplwi cr6,r28,40
	cr6.compare<uint32_t>(r28.u32, 40, xer);
	// ble cr6,0x827f9348
	if (!cr6.gt) goto loc_827F9348;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827F9348:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r26)
	PPC_STORE_U32(r26.u32 + 8, r11.u32);
	// bne 0x827f938c
	if (!cr0.eq) goto loc_827F938C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x828e9458
	return;
loc_827F9368:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,17056
	ctx.r4.s64 = r11.s64 + 17056;
	// bl 0x827f9910
	sub_827F9910(ctx, base);
	// lwz r31,4(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
loc_827F938C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_827F9390"))) PPC_WEAK_FUNC(sub_827F9390);
PPC_FUNC_IMPL(__imp__sub_827F9390) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_827F9394"))) PPC_WEAK_FUNC(sub_827F9394);
PPC_FUNC_IMPL(__imp__sub_827F9394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9398"))) PPC_WEAK_FUNC(sub_827F9398);
PPC_FUNC_IMPL(__imp__sub_827F9398) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82790b40
	sub_82790B40(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r11,17212
	ctx.r9.s64 = r11.s64 + 17212;
	// addi r8,r10,17124
	ctx.r8.s64 = ctx.r10.s64 + 17124;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// addi r30,r30,120
	r30.s64 = r30.s64 + 120;
	// bl 0x8277f048
	sub_8277F048(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82776b78
	sub_82776B78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827F93F4"))) PPC_WEAK_FUNC(sub_827F93F4);
PPC_FUNC_IMPL(__imp__sub_827F93F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827F93F8"))) PPC_WEAK_FUNC(sub_827F93F8);
PPC_FUNC_IMPL(__imp__sub_827F93F8) {
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
	// lwz r30,4(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// stb r26,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r26.u8);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// blt cr6,0x827f95fc
	if (cr6.lt) goto loc_827F95FC;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x827793b8
	sub_827793B8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x827678d8
	sub_827678D8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// mr r28,r26
	r28.u64 = r26.u64;
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bne cr6,0x827f9504
	if (!cr6.eq) goto loc_827F9504;
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x827662f0
	sub_827662F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f952c
	if (cr6.eq) goto loc_827F952C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,128(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x827f94e0
	if (!cr6.eq) goto loc_827F94E0;
	// bl 0x8276eb80
	sub_8276EB80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_827F94E0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f94f4
	if (cr6.eq) goto loc_827F94F4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_827F94F4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r11
	r29.u64 = r11.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
	// b 0x827f952c
	goto loc_827F952C;
loc_827F9504:
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f9528
	if (cr6.eq) goto loc_827F9528;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,4,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_827F9528:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_827F952C:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827b0958
	sub_827B0958(ctx, base);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stb r10,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r10.u8);
	// beq cr6,0x827f9570
	if (cr6.eq) goto loc_827F9570;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827F9570:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827f9598
	if (cr6.eq) goto loc_827F9598;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bgt 0x827f9598
	if (cr0.gt) goto loc_827F9598;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8276aa30
	sub_8276AA30(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827F9598:
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827f95b8
	if (!cr6.eq) goto loc_827F95B8;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f95b8
	if (cr6.eq) goto loc_827F95B8;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827F95B8:
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827f95dc
	if (!cr6.eq) goto loc_827F95DC;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f95dc
	if (cr6.eq) goto loc_827F95DC;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827F95DC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827f95fc
	if (!cr0.eq) goto loc_827F95FC;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827F95FC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_827F9600"))) PPC_WEAK_FUNC(sub_827F9600);
PPC_FUNC_IMPL(__imp__sub_827F9600) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_827F9604"))) PPC_WEAK_FUNC(sub_827F9604);
PPC_FUNC_IMPL(__imp__sub_827F9604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9608"))) PPC_WEAK_FUNC(sub_827F9608);
PPC_FUNC_IMPL(__imp__sub_827F9608) {
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
	// lwz r11,120(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r4,120
	r30.s64 = ctx.r4.s64 + 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,648(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f9688
	if (cr6.eq) goto loc_827F9688;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82790b40
	sub_82790B40(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r11,17212
	ctx.r9.s64 = r11.s64 + 17212;
	// addi r8,r10,17124
	ctx.r8.s64 = ctx.r10.s64 + 17124;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8277f048
	sub_8277F048(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82776b78
	sub_82776B78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_827F9688:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827F9690"))) PPC_WEAK_FUNC(sub_827F9690);
PPC_FUNC_IMPL(__imp__sub_827F9690) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827F9694"))) PPC_WEAK_FUNC(sub_827F9694);
PPC_FUNC_IMPL(__imp__sub_827F9694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9698"))) PPC_WEAK_FUNC(sub_827F9698);
PPC_FUNC_IMPL(__imp__sub_827F9698) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x827f9c60
	sub_827F9C60(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r8,r11,17348
	ctx.r8.s64 = r11.s64 + 17348;
	// addi r7,r10,17260
	ctx.r7.s64 = ctx.r10.s64 + 17260;
	// addi r6,r9,17252
	ctx.r6.s64 = ctx.r9.s64 + 17252;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// stw r6,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r6.u32);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stb r5,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r6,r11,16708
	ctx.r6.s64 = r11.s64 + 16708;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8278fb78
	sub_8278FB78(ctx, base);
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

__attribute__((alias("__imp__sub_827F9718"))) PPC_WEAK_FUNC(sub_827F9718);
PPC_FUNC_IMPL(__imp__sub_827F9718) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F971C"))) PPC_WEAK_FUNC(sub_827F971C);
PPC_FUNC_IMPL(__imp__sub_827F971C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9720"))) PPC_WEAK_FUNC(sub_827F9720);
PPC_FUNC_IMPL(__imp__sub_827F9720) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,8
	r11.s64 = 8;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,648(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 648);
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, r11.u8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f9768
	if (cr6.eq) goto loc_827F9768;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x827f8fd8
	sub_827F8FD8(ctx, base);
	// b 0x827f976c
	goto loc_827F976C;
loc_827F9768:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_827F976C:
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r28,8(r29)
	PPC_STORE_U8(r29.u32 + 8, r28.u8);
	// li r4,80
	ctx.r4.s64 = 80;
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// lwz r3,648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f985c
	if (cr6.eq) goto loc_827F985C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8277f048
	sub_8277F048(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x827f9698
	sub_827F9698(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f97d0
	if (cr6.eq) goto loc_827F97D0;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,4,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_827F97D0:
	// li r11,28
	r11.s64 = 28;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,632
	ctx.r3.s64 = r31.s64 + 632;
	// bl 0x827783e8
	sub_827783E8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f97fc
	if (cr6.eq) goto loc_827F97FC;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827F97FC:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r28,16(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82766758
	sub_82766758(ctx, base);
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lwz r11,660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r31,120
	ctx.r5.s64 = r31.s64 + 120;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827f9850
	if (cr6.eq) goto loc_827F9850;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827F9850:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9468
	return;
loc_827F985C:
	// mr r30,r28
	r30.u64 = r28.u64;
}

__attribute__((alias("__imp__sub_827F9860"))) PPC_WEAK_FUNC(sub_827F9860);
PPC_FUNC_IMPL(__imp__sub_827F9860) {
	PPC_FUNC_PROLOGUE();
	// b 0x827f97d0
	// ERROR 827F97D0
	return;
}

__attribute__((alias("__imp__sub_827F9864"))) PPC_WEAK_FUNC(sub_827F9864);
PPC_FUNC_IMPL(__imp__sub_827F9864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9868"))) PPC_WEAK_FUNC(sub_827F9868);
PPC_FUNC_IMPL(__imp__sub_827F9868) {
	PPC_FUNC_PROLOGUE();
	// li r3,24
	ctx.r3.s64 = 24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9870"))) PPC_WEAK_FUNC(sub_827F9870);
PPC_FUNC_IMPL(__imp__sub_827F9870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r4,120
	ctx.r4.s64 = ctx.r4.s64 + 120;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827F9884"))) PPC_WEAK_FUNC(sub_827F9884);
PPC_FUNC_IMPL(__imp__sub_827F9884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9888"))) PPC_WEAK_FUNC(sub_827F9888);
PPC_FUNC_IMPL(__imp__sub_827F9888) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r8,r11,16844
	ctx.r8.s64 = r11.s64 + 16844;
	// addi r7,r10,16756
	ctx.r7.s64 = ctx.r10.s64 + 16756;
	// addi r6,r9,16744
	ctx.r6.s64 = ctx.r9.s64 + 16744;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// stw r6,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r6.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82792000
	sub_82792000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827915b0
	sub_827915B0(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x827f98f0
	if (cr6.eq) goto loc_827F98F0;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_827F98F0:
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

__attribute__((alias("__imp__sub_827F9904"))) PPC_WEAK_FUNC(sub_827F9904);
PPC_FUNC_IMPL(__imp__sub_827F9904) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9908"))) PPC_WEAK_FUNC(sub_827F9908);
PPC_FUNC_IMPL(__imp__sub_827F9908) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
}

__attribute__((alias("__imp__sub_827F990C"))) PPC_WEAK_FUNC(sub_827F990C);
PPC_FUNC_IMPL(__imp__sub_827F990C) {
	PPC_FUNC_PROLOGUE();
	// b 0x827f9888
	sub_827F9888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F9910"))) PPC_WEAK_FUNC(sub_827F9910);
PPC_FUNC_IMPL(__imp__sub_827F9910) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x827663e0
	sub_827663E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827f996c
	if (cr6.eq) goto loc_827F996C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,33
	ctx.r4.s64 = 33;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827F996C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_827F9978"))) PPC_WEAK_FUNC(sub_827F9978);
PPC_FUNC_IMPL(__imp__sub_827F9978) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F997C"))) PPC_WEAK_FUNC(sub_827F997C);
PPC_FUNC_IMPL(__imp__sub_827F997C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9980"))) PPC_WEAK_FUNC(sub_827F9980);
PPC_FUNC_IMPL(__imp__sub_827F9980) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82792b60
	sub_82792B60(ctx, base);
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x827a0d48
	sub_827A0D48(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x827a0d48
	sub_827A0D48(ctx, base);
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f9a20
	if (cr6.eq) goto loc_827F9A20;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f9a20
	if (cr6.eq) goto loc_827F9A20;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r11
	r29.u64 = r11.u64;
	// lis r28,4096
	r28.s64 = 268435456;
	// li r27,1
	r27.s64 = 1;
loc_827F99CC:
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f9a14
	if (cr6.eq) goto loc_827F9A14;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r10,r11,0,1,3
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x70000000;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// beq cr6,0x827f9a14
	if (cr6.eq) goto loc_827F9A14;
	// rlwimi r11,r27,28,1,3
	r11.u64 = (__builtin_rotateleft32(r27.u32, 28) & 0x70000000) | (r11.u64 & 0xFFFFFFFF8FFFFFFF);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827F9A14:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x827f99cc
	if (!cr0.eq) goto loc_827F99CC;
loc_827F9A20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827F9A24"))) PPC_WEAK_FUNC(sub_827F9A24);
PPC_FUNC_IMPL(__imp__sub_827F9A24) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827F9A28"))) PPC_WEAK_FUNC(sub_827F9A28);
PPC_FUNC_IMPL(__imp__sub_827F9A28) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82792d08
	sub_82792D08(ctx, base);
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x827a0ca0
	sub_827A0CA0(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x827a0ca0
	sub_827A0CA0(ctx, base);
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f9ac0
	if (cr6.eq) goto loc_827F9AC0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f9ac0
	if (cr6.eq) goto loc_827F9AC0;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_827F9A6C:
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f9ab4
	if (cr6.eq) goto loc_827F9AB4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,1,3
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x70000000;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827f9ab4
	if (cr6.eq) goto loc_827F9AB4;
	// rlwinm r11,r11,0,4,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827F9AB4:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x827f9a6c
	if (!cr0.eq) goto loc_827F9A6C;
loc_827F9AC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827F9AC4"))) PPC_WEAK_FUNC(sub_827F9AC4);
PPC_FUNC_IMPL(__imp__sub_827F9AC4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827F9AC8"))) PPC_WEAK_FUNC(sub_827F9AC8);
PPC_FUNC_IMPL(__imp__sub_827F9AC8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82792ea8
	sub_82792EA8(ctx, base);
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x827a0de8
	sub_827A0DE8(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x827a0de8
	sub_827A0DE8(ctx, base);
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f9b78
	if (cr6.eq) goto loc_827F9B78;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f9b78
	if (cr6.eq) goto loc_827F9B78;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r11
	r29.u64 = r11.u64;
	// lis r27,4096
	r27.s64 = 268435456;
	// li r28,1
	r28.s64 = 1;
loc_827F9B14:
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f9b6c
	if (cr6.eq) goto loc_827F9B6C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,1,3
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x70000000;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bne cr6,0x827f9b6c
	if (!cr6.eq) goto loc_827F9B6C;
	// clrlwi r10,r11,4
	ctx.r10.u64 = r11.u32 & 0xFFFFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// beq cr6,0x827f9b5c
	if (cr6.eq) goto loc_827F9B5C;
	// rlwinm r11,r11,0,4,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x827f9b64
	goto loc_827F9B64;
loc_827F9B5C:
	// rlwimi r11,r28,29,1,3
	r11.u64 = (__builtin_rotateleft32(r28.u32, 29) & 0x70000000) | (r11.u64 & 0xFFFFFFFF8FFFFFFF);
	// li r4,4
	ctx.r4.s64 = 4;
loc_827F9B64:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827F9B6C:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x827f9b14
	if (!cr0.eq) goto loc_827F9B14;
loc_827F9B78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827F9B7C"))) PPC_WEAK_FUNC(sub_827F9B7C);
PPC_FUNC_IMPL(__imp__sub_827F9B7C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827F9B80"))) PPC_WEAK_FUNC(sub_827F9B80);
PPC_FUNC_IMPL(__imp__sub_827F9B80) {
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
	// bl 0x82793468
	sub_82793468(ctx, base);
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x827a0fa0
	sub_827A0FA0(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x827a0fa0
	sub_827A0FA0(ctx, base);
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f9be8
	if (cr6.eq) goto loc_827F9BE8;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f9be8
	if (cr6.eq) goto loc_827F9BE8;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_827F9BC4:
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f9bdc
	if (cr6.eq) goto loc_827F9BDC;
	// bl 0x82759098
	sub_82759098(ctx, base);
loc_827F9BDC:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x827f9bc4
	if (!cr0.eq) goto loc_827F9BC4;
loc_827F9BE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827F9BEC"))) PPC_WEAK_FUNC(sub_827F9BEC);
PPC_FUNC_IMPL(__imp__sub_827F9BEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827F9BF0"))) PPC_WEAK_FUNC(sub_827F9BF0);
PPC_FUNC_IMPL(__imp__sub_827F9BF0) {
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
	// bl 0x827932f8
	sub_827932F8(ctx, base);
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x827a0f58
	sub_827A0F58(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x827a0f58
	sub_827A0F58(ctx, base);
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f9c58
	if (cr6.eq) goto loc_827F9C58;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827f9c58
	if (cr6.eq) goto loc_827F9C58;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_827F9C34:
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827f9c4c
	if (cr6.eq) goto loc_827F9C4C;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827F9C4C:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x827f9c34
	if (!cr0.eq) goto loc_827F9C34;
loc_827F9C58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827F9C5C"))) PPC_WEAK_FUNC(sub_827F9C5C);
PPC_FUNC_IMPL(__imp__sub_827F9C5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827F9C60"))) PPC_WEAK_FUNC(sub_827F9C60);
PPC_FUNC_IMPL(__imp__sub_827F9C60) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x827909e8
	sub_827909E8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r11,17212
	ctx.r9.s64 = r11.s64 + 17212;
	// addi r8,r10,17124
	ctx.r8.s64 = ctx.r10.s64 + 17124;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82776b78
	sub_82776B78(ctx, base);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// li r11,0
	r11.s64 = 0;
	// addi r6,r7,-22540
	ctx.r6.s64 = ctx.r7.s64 + -22540;
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// stw r6,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r6.u32);
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// stb r11,60(r31)
	PPC_STORE_U8(r31.u32 + 60, r11.u8);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// addi r10,r5,16844
	ctx.r10.s64 = ctx.r5.s64 + 16844;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// addi r9,r4,16756
	ctx.r9.s64 = ctx.r4.s64 + 16756;
	// addi r8,r3,16744
	ctx.r8.s64 = ctx.r3.s64 + 16744;
	// stb r11,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r11.u8);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r8,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r8.u32);
	// bl 0x827908b0
	sub_827908B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827F9D14"))) PPC_WEAK_FUNC(sub_827F9D14);
PPC_FUNC_IMPL(__imp__sub_827F9D14) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827F9D18"))) PPC_WEAK_FUNC(sub_827F9D18);
PPC_FUNC_IMPL(__imp__sub_827F9D18) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
}

__attribute__((alias("__imp__sub_827F9D1C"))) PPC_WEAK_FUNC(sub_827F9D1C);
PPC_FUNC_IMPL(__imp__sub_827F9D1C) {
	PPC_FUNC_PROLOGUE();
	// b 0x827f9888
	sub_827F9888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F9D20"))) PPC_WEAK_FUNC(sub_827F9D20);
PPC_FUNC_IMPL(__imp__sub_827F9D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x827f9d44
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827F9D44;
	// bdzf 4*cr6+eq,0x827f9d48
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827F9D48;
	// bdzf 4*cr6+eq,0x827f9d4c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827F9D4C;
	// bne cr6,0x827f9d50
	if (!cr6.eq) goto loc_827F9D50;
	// b 0x827f9bf0
	sub_827F9BF0(ctx, base);
	return;
loc_827F9D44:
	// b 0x827f9980
	sub_827F9980(ctx, base);
	return;
loc_827F9D48:
	// b 0x827f9a28
	sub_827F9A28(ctx, base);
	return;
loc_827F9D4C:
	// b 0x827f9b80
	sub_827F9B80(ctx, base);
	return;
loc_827F9D50:
	// b 0x827f9ac8
	sub_827F9AC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F9D54"))) PPC_WEAK_FUNC(sub_827F9D54);
PPC_FUNC_IMPL(__imp__sub_827F9D54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9D58"))) PPC_WEAK_FUNC(sub_827F9D58);
PPC_FUNC_IMPL(__imp__sub_827F9D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9D64"))) PPC_WEAK_FUNC(sub_827F9D64);
PPC_FUNC_IMPL(__imp__sub_827F9D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9D68"))) PPC_WEAK_FUNC(sub_827F9D68);
PPC_FUNC_IMPL(__imp__sub_827F9D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r9,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9D84"))) PPC_WEAK_FUNC(sub_827F9D84);
PPC_FUNC_IMPL(__imp__sub_827F9D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9D88"))) PPC_WEAK_FUNC(sub_827F9D88);
PPC_FUNC_IMPL(__imp__sub_827F9D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r9,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// lbz r8,3(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// stb r8,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9DAC"))) PPC_WEAK_FUNC(sub_827F9DAC);
PPC_FUNC_IMPL(__imp__sub_827F9DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9DB0"))) PPC_WEAK_FUNC(sub_827F9DB0);
PPC_FUNC_IMPL(__imp__sub_827F9DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r10,255
	ctx.r10.s64 = 255;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// stb r9,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r9.u8);
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r8,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r8.u8);
	// stb r10,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9DD4"))) PPC_WEAK_FUNC(sub_827F9DD4);
PPC_FUNC_IMPL(__imp__sub_827F9DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9DD8"))) PPC_WEAK_FUNC(sub_827F9DD8);
PPC_FUNC_IMPL(__imp__sub_827F9DD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mflr r12
	// bl 0x828e93e0
	// subfic r10,r8,256
	xer.ca = ctx.r8.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r8.s64;
	// lbz r28,2(r4)
	r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// lbz r22,0(r6)
	r22.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// subfic r9,r9,256
	xer.ca = ctx.r9.u32 <= 256;
	ctx.r9.s64 = 256 - ctx.r9.s64;
	// lbz r20,2(r6)
	r20.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r11,0
	r11.s64 = 0;
	// lbz r19,3(r6)
	r19.u64 = PPC_LOAD_U8(ctx.r6.u32 + 3);
	// mullw r27,r9,r10
	r27.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lbz r21,1(r6)
	r21.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// lbz r26,0(r5)
	r26.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lbz r17,1(r7)
	r17.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// lbz r16,2(r7)
	r16.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// lbz r25,1(r5)
	r25.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// lbz r23,3(r5)
	r23.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// lbz r18,0(r7)
	r18.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r15,3(r7)
	r15.u64 = PPC_LOAD_U8(ctx.r7.u32 + 3);
	// lbz r24,2(r5)
	r24.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r3,1(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// lbz r4,3(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// mullw r8,r8,r27
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r27.s32);
	// mullw r14,r9,r30
	r14.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// mullw r6,r3,r27
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(r27.s32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + r11.u64;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mullw r28,r28,r27
	r28.s64 = int64_t(r28.s32) * int64_t(r27.s32);
	// mullw r4,r4,r27
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(r27.s32);
	// mullw r11,r26,r14
	r11.s64 = int64_t(r26.s32) * int64_t(r14.s32);
	// add r8,r6,r3
	ctx.r8.u64 = ctx.r6.u64 + ctx.r3.u64;
	// mullw r7,r25,r14
	ctx.r7.s64 = int64_t(r25.s32) * int64_t(r14.s32);
	// mullw r27,r10,r29
	r27.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// add r6,r28,r3
	ctx.r6.u64 = r28.u64 + ctx.r3.u64;
	// mullw r5,r24,r14
	ctx.r5.s64 = int64_t(r24.s32) * int64_t(r14.s32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r3,r23,r14
	ctx.r3.s64 = int64_t(r23.s32) * int64_t(r14.s32);
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mullw r10,r22,r27
	ctx.r10.s64 = int64_t(r22.s32) * int64_t(r27.s32);
	// mullw r6,r21,r27
	ctx.r6.s64 = int64_t(r21.s32) * int64_t(r27.s32);
	// add r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mullw r5,r20,r27
	ctx.r5.s64 = int64_t(r20.s32) * int64_t(r27.s32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mullw r4,r19,r27
	ctx.r4.s64 = int64_t(r19.s32) * int64_t(r27.s32);
	// add r10,r6,r9
	ctx.r10.u64 = ctx.r6.u64 + ctx.r9.u64;
	// mullw r3,r30,r29
	ctx.r3.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// add r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r8,r4,r7
	ctx.r8.u64 = ctx.r4.u64 + ctx.r7.u64;
	// mullw r7,r18,r3
	ctx.r7.s64 = int64_t(r18.s32) * int64_t(ctx.r3.s32);
	// mullw r6,r17,r3
	ctx.r6.s64 = int64_t(r17.s32) * int64_t(ctx.r3.s32);
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// mullw r5,r16,r3
	ctx.r5.s64 = int64_t(r16.s32) * int64_t(ctx.r3.s32);
	// mullw r7,r15,r3
	ctx.r7.s64 = int64_t(r15.s32) * int64_t(ctx.r3.s32);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// srawi r11,r11,16
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFF) != 0);
	r11.s64 = r11.s32 >> 16;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r10,r10,16
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// srawi r9,r9,16
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 16;
	// srawi r8,r8,16
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// stb r10,1(r31)
	PPC_STORE_U8(r31.u32 + 1, ctx.r10.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(r31.u32 + 2, ctx.r9.u8);
	// stb r8,3(r31)
	PPC_STORE_U8(r31.u32 + 3, ctx.r8.u8);
}

__attribute__((alias("__imp__sub_827F9EF8"))) PPC_WEAK_FUNC(sub_827F9EF8);
PPC_FUNC_IMPL(__imp__sub_827F9EF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_827F9EFC"))) PPC_WEAK_FUNC(sub_827F9EFC);
PPC_FUNC_IMPL(__imp__sub_827F9EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9F00"))) PPC_WEAK_FUNC(sub_827F9F00);
PPC_FUNC_IMPL(__imp__sub_827F9F00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mflr r12
	// bl 0x828e93f4
	// subfic r10,r8,256
	xer.ca = ctx.r8.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r8.s64;
	// lbz r29,1(r4)
	r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// lbz r22,0(r7)
	r22.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// subfic r9,r9,256
	xer.ca = ctx.r9.u32 <= 256;
	ctx.r9.s64 = 256 - ctx.r9.s64;
	// lbz r20,2(r7)
	r20.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// lis r11,0
	r11.s64 = 0;
	// lbz r21,1(r7)
	r21.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mullw r28,r9,r10
	r28.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lbz r4,2(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r25,0(r6)
	r25.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// lbz r24,1(r6)
	r24.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// lbz r27,0(r5)
	r27.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lbz r23,2(r6)
	r23.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// lbz r26,1(r5)
	r26.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// lbz r5,2(r5)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// mullw r19,r9,r31
	r19.s64 = int64_t(ctx.r9.s32) * int64_t(r31.s32);
	// mullw r9,r8,r28
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(r28.s32);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// mullw r7,r29,r28
	ctx.r7.s64 = int64_t(r29.s32) * int64_t(r28.s32);
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// mullw r4,r4,r28
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(r28.s32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r9,r27,r19
	ctx.r9.s64 = int64_t(r27.s32) * int64_t(r19.s32);
	// mullw r29,r10,r30
	r29.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// mullw r7,r26,r19
	ctx.r7.s64 = int64_t(r26.s32) * int64_t(r19.s32);
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// mullw r5,r5,r19
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r19.s32);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r10,r25,r29
	ctx.r10.s64 = int64_t(r25.s32) * int64_t(r29.s32);
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mullw r7,r24,r29
	ctx.r7.s64 = int64_t(r24.s32) * int64_t(r29.s32);
	// mullw r6,r23,r29
	ctx.r6.s64 = int64_t(r23.s32) * int64_t(r29.s32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mullw r5,r31,r30
	ctx.r5.s64 = int64_t(r31.s32) * int64_t(r30.s32);
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mullw r8,r22,r5
	ctx.r8.s64 = int64_t(r22.s32) * int64_t(ctx.r5.s32);
	// mullw r7,r21,r5
	ctx.r7.s64 = int64_t(r21.s32) * int64_t(ctx.r5.s32);
	// mullw r6,r20,r5
	ctx.r6.s64 = int64_t(r20.s32) * int64_t(ctx.r5.s32);
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// srawi r4,r11,16
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = r11.s32 >> 16;
	// srawi r11,r10,16
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	r11.s64 = ctx.r10.s32 >> 16;
	// srawi r10,r9,16
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 16;
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, r11.u8);
	// stb r10,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r10.u8);
}

__attribute__((alias("__imp__sub_827F9FE0"))) PPC_WEAK_FUNC(sub_827F9FE0);
PPC_FUNC_IMPL(__imp__sub_827F9FE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_827F9FE4"))) PPC_WEAK_FUNC(sub_827F9FE4);
PPC_FUNC_IMPL(__imp__sub_827F9FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F9FE8"))) PPC_WEAK_FUNC(sub_827F9FE8);
PPC_FUNC_IMPL(__imp__sub_827F9FE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mflr r12
	// bl 0x828e93f4
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// lbz r29,1(r4)
	r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// subfic r10,r8,256
	xer.ca = ctx.r8.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r8.s64;
	// lbz r22,0(r7)
	r22.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// subfic r9,r9,256
	xer.ca = ctx.r9.u32 <= 256;
	ctx.r9.s64 = 256 - ctx.r9.s64;
	// lbz r20,2(r7)
	r20.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// lis r11,0
	r11.s64 = 0;
	// lbz r21,1(r7)
	r21.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mullw r28,r9,r10
	r28.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lbz r4,2(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r25,0(r6)
	r25.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// lbz r24,1(r6)
	r24.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// lbz r27,0(r5)
	r27.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lbz r23,2(r6)
	r23.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// lbz r26,1(r5)
	r26.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// lbz r5,2(r5)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// mullw r19,r9,r31
	r19.s64 = int64_t(ctx.r9.s32) * int64_t(r31.s32);
	// mullw r9,r8,r28
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(r28.s32);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// mullw r7,r29,r28
	ctx.r7.s64 = int64_t(r29.s32) * int64_t(r28.s32);
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// mullw r4,r4,r28
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(r28.s32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r9,r27,r19
	ctx.r9.s64 = int64_t(r27.s32) * int64_t(r19.s32);
	// mullw r29,r10,r30
	r29.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// mullw r7,r26,r19
	ctx.r7.s64 = int64_t(r26.s32) * int64_t(r19.s32);
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// mullw r5,r5,r19
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r19.s32);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r10,r25,r29
	ctx.r10.s64 = int64_t(r25.s32) * int64_t(r29.s32);
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mullw r7,r24,r29
	ctx.r7.s64 = int64_t(r24.s32) * int64_t(r29.s32);
	// mullw r6,r23,r29
	ctx.r6.s64 = int64_t(r23.s32) * int64_t(r29.s32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mullw r5,r31,r30
	ctx.r5.s64 = int64_t(r31.s32) * int64_t(r30.s32);
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mullw r8,r22,r5
	ctx.r8.s64 = int64_t(r22.s32) * int64_t(ctx.r5.s32);
	// mullw r7,r21,r5
	ctx.r7.s64 = int64_t(r21.s32) * int64_t(ctx.r5.s32);
	// mullw r6,r20,r5
	ctx.r6.s64 = int64_t(r20.s32) * int64_t(ctx.r5.s32);
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// srawi r4,r11,16
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = r11.s32 >> 16;
	// srawi r11,r10,16
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	r11.s64 = ctx.r10.s32 >> 16;
	// srawi r10,r9,16
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 16;
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// li r9,255
	ctx.r9.s64 = 255;
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, r11.u8);
	// stb r10,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r10.u8);
	// stb r9,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r9.u8);
}

__attribute__((alias("__imp__sub_827FA0D0"))) PPC_WEAK_FUNC(sub_827FA0D0);
PPC_FUNC_IMPL(__imp__sub_827FA0D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_827FA0D4"))) PPC_WEAK_FUNC(sub_827FA0D4);
PPC_FUNC_IMPL(__imp__sub_827FA0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FA0D8"))) PPC_WEAK_FUNC(sub_827FA0D8);
PPC_FUNC_IMPL(__imp__sub_827FA0D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// subfic r11,r8,256
	xer.ca = ctx.r8.u32 <= 256;
	r11.s64 = 256 - ctx.r8.s64;
	// subfic r10,r30,256
	xer.ca = r30.u32 <= 256;
	ctx.r10.s64 = 256 - r30.s64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// lbz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// mullw r5,r9,r10
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lbz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// mullw r9,r8,r11
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// mullw r7,r6,r10
	ctx.r7.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// mullw r8,r5,r31
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(r31.s32);
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// mullw r11,r7,r11
	r11.s64 = int64_t(ctx.r7.s32) * int64_t(r11.s32);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r6,r4,r31
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(r31.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// mullw r11,r6,r30
	r11.s64 = int64_t(ctx.r6.s32) * int64_t(r30.s32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
	// addis r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 65536;
	// addi r4,r4,-32768
	ctx.r4.s64 = ctx.r4.s64 + -32768;
	// srawi r11,r4,16
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	r11.s64 = ctx.r4.s32 >> 16;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_827FA144"))) PPC_WEAK_FUNC(sub_827FA144);
PPC_FUNC_IMPL(__imp__sub_827FA144) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FA148"))) PPC_WEAK_FUNC(sub_827FA148);
PPC_FUNC_IMPL(__imp__sub_827FA148) {
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
	// mflr r12
	// bl 0x828e9410
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r27,1
	r27.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// lfs f13,3792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,17384(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17384);
	ctx.f12.f64 = double(temp.f32);
loc_827FA16C:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// blt cr6,0x827fa1c4
	if (cr6.lt) goto loc_827FA1C4;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r31,r9,-1
	r31.s64 = ctx.r9.s64 + -1;
	// mr r11,r28
	r11.u64 = r28.u64;
	// add r7,r28,r8
	ctx.r7.u64 = r28.u64 + ctx.r8.u64;
loc_827FA198:
	// lhzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U16(r11.u32 + ctx.r8.u32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lhz r26,512(r7)
	r26.u64 = PPC_LOAD_U16(ctx.r7.u32 + 512);
	// addi r11,r11,1024
	r11.s64 = r11.s64 + 1024;
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// extsh r6,r26
	ctx.r6.s64 = r26.s16;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// add r7,r11,r8
	ctx.r7.u64 = r11.u64 + ctx.r8.u64;
	// blt cr6,0x827fa198
	if (cr6.lt) goto loc_827FA198;
loc_827FA1C4:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x827fa1e4
	if (!cr6.lt) goto loc_827FA1E4;
	// rlwinm r11,r10,8,0,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r8,r11,r29
	ctx.r8.u64 = r11.u64 + r29.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r10.u32);
	// extsh r30,r6
	r30.s64 = ctx.r6.s16;
loc_827FA1E4:
	// add r11,r5,r4
	r11.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmpwi cr6,r11,16384
	cr6.compare<int32_t>(r11.s32, 16384, xer);
	// beq cr6,0x827fa300
	if (cr6.eq) goto loc_827FA300;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// li r8,0
	ctx.r8.s64 = 0;
	// std r11,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, r11.u64);
	// lfd f0,-80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// fcfid f11,f0
	ctx.f11.f64 = double(f0.s64);
	// li r11,0
	r11.s64 = 0;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// fdivs f0,f12,f10
	f0.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// beq cr6,0x827fa274
	if (cr6.eq) goto loc_827FA274;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_827FA220:
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// lhz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r5.u64);
	// lfd f11,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f9,f0,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * f0.f64 + ctx.f13.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f7.u64);
	// lwz r4,-60(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// blt cr6,0x827fa220
	if (cr6.lt) goto loc_827FA220;
loc_827FA274:
	// addic. r7,r8,-16384
	xer.ca = ctx.r8.u32 > 16383;
	ctx.r7.s64 = ctx.r8.s64 + -16384;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// li r6,-1
	ctx.r6.s64 = -1;
	// bgt 0x827fa284
	if (cr0.gt) goto loc_827FA284;
	// li r6,1
	ctx.r6.s64 = 1;
loc_827FA284:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827fa16c
	if (cr6.eq) goto loc_827FA16C;
loc_827FA290:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x827fa16c
	if (cr6.eq) goto loc_827FA16C;
	// xori r27,r27,1
	r27.u64 = r27.u64 ^ 1;
	// rlwinm r11,r9,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// rlwinm r10,r8,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// beq cr6,0x827fa2b4
	if (cr6.eq) goto loc_827FA2B4;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x827fa2b8
	goto loc_827FA2B8;
loc_827FA2B4:
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_827FA2B8:
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r9,r11,r29
	ctx.r9.u64 = r11.u64 + r29.u64;
	// rlwinm r11,r9,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + ctx.r10.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// cmpwi cr6,r4,16384
	cr6.compare<int32_t>(ctx.r4.s32, 16384, xer);
	// bge cr6,0x827fa2ec
	if (!cr6.lt) goto loc_827FA2EC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + ctx.r10.u32);
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
	// sthx r5,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, ctx.r5.u16);
loc_827FA2EC:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x827fa290
	if (cr6.lt) goto loc_827FA290;
	// b 0x827fa16c
	goto loc_827FA16C;
loc_827FA300:
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r28,512
	cr6.compare<uint32_t>(r28.u32, 512, xer);
	// blt cr6,0x827fa16c
	if (cr6.lt) goto loc_827FA16C;
	// rlwinm r10,r9,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827fa340
	if (cr6.eq) goto loc_827FA340;
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_827FA328:
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lhzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + ctx.r9.u32);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// sthx r8,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x827fa328
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FA328;
loc_827FA340:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r10,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lhz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + -2);
	// sth r8,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r8.u16);
}

__attribute__((alias("__imp__sub_827FA358"))) PPC_WEAK_FUNC(sub_827FA358);
PPC_FUNC_IMPL(__imp__sub_827FA358) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_827FA35C"))) PPC_WEAK_FUNC(sub_827FA35C);
PPC_FUNC_IMPL(__imp__sub_827FA35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FA360"))) PPC_WEAK_FUNC(sub_827FA360);
PPC_FUNC_IMPL(__imp__sub_827FA360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r24,4(r9)
	r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r22,8(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// li r25,0
	r25.s64 = 0;
	// lwz r23,12(r9)
	r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// beq cr6,0x827fa7b8
	if (cr6.eq) goto loc_827FA7B8;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
loc_827FA394:
	// lwz r29,0(r26)
	r29.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// srawi r11,r29,8
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xFF) != 0);
	r11.s64 = r29.s32 >> 8;
	// add. r30,r11,r22
	r30.u64 = r11.u64 + r22.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x827fa504
	if (!cr0.lt) goto loc_827FA504;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x827fa3f4
	if (cr6.eq) goto loc_827FA3F4;
	// addi r11,r1,79
	r11.s64 = ctx.r1.s64 + 79;
	// mtctr r24
	ctr.u64 = r24.u64;
loc_827FA3B8:
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + r30.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r31,r10,1,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// and r10,r31,r10
	ctx.r10.u64 = r31.u64 & ctx.r10.u64;
	// rlwinm r31,r10,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbz r31,0(r10)
	r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r28,1(r10)
	r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r31,1(r11)
	PPC_STORE_U8(r11.u32 + 1, r31.u8);
	// stb r28,2(r11)
	PPC_STORE_U8(r11.u32 + 2, r28.u8);
	// stbu r10,3(r11)
	ea = 3 + r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	r11.u32 = ea;
	// bdnz 0x827fa3b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FA3B8;
loc_827FA3F4:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// subfic r11,r11,255
	xer.ca = r11.u32 <= 255;
	r11.s64 = 255 - r11.s64;
	// lbz r31,82(r1)
	r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addic. r29,r24,-1
	xer.ca = r24.u32 > 0;
	r29.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r23
	r30.u64 = r11.u64 + r23.u64;
	// lhzx r11,r11,r23
	r11.u64 = PPC_LOAD_U16(r11.u32 + r23.u32);
	// extsh r28,r11
	r28.s64 = r11.s16;
	// mullw r11,r10,r28
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// mullw r9,r9,r28
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r28.s32);
	// mullw r31,r31,r28
	r31.s64 = int64_t(r31.s32) * int64_t(r28.s32);
	// addi r10,r11,8192
	ctx.r10.s64 = r11.s64 + 8192;
	// addi r9,r9,8192
	ctx.r9.s64 = ctx.r9.s64 + 8192;
	// addi r31,r31,8192
	r31.s64 = r31.s64 + 8192;
	// beq 0x827fa474
	if (cr0.eq) goto loc_827FA474;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// mtctr r29
	ctr.u64 = r29.u64;
loc_827FA440:
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// lhzu r29,512(r30)
	ea = 512 + r30.u32;
	r29.u64 = PPC_LOAD_U16(ea);
	r30.u32 = ea;
	// extsh r27,r29
	r27.s64 = r29.s16;
	// lbz r29,-2(r11)
	r29.u64 = PPC_LOAD_U8(r11.u32 + -2);
	// lbz r28,-1(r11)
	r28.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// lbz r21,0(r11)
	r21.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// mullw r29,r29,r27
	r29.s64 = int64_t(r29.s32) * int64_t(r27.s32);
	// mullw r28,r28,r27
	r28.s64 = int64_t(r28.s32) * int64_t(r27.s32);
	// mullw r27,r21,r27
	r27.s64 = int64_t(r21.s32) * int64_t(r27.s32);
	// add r10,r29,r10
	ctx.r10.u64 = r29.u64 + ctx.r10.u64;
	// add r9,r28,r9
	ctx.r9.u64 = r28.u64 + ctx.r9.u64;
	// add r31,r27,r31
	r31.u64 = r27.u64 + r31.u64;
	// bdnz 0x827fa440
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FA440;
loc_827FA474:
	// srawi r11,r10,14
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFF) != 0);
	r11.s64 = ctx.r10.s32 >> 14;
	// srawi r10,r9,14
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 14;
	// srawi r9,r31,14
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3FFF) != 0);
	ctx.r9.s64 = r31.s32 >> 14;
	// rlwinm r31,r11,1,31,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// rlwinm r30,r10,1,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r29,r31,-1
	r29.s64 = r31.s64 + -1;
	// rlwinm r31,r9,1,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r28,r31,-1
	r28.s64 = r31.s64 + -1;
	// and r11,r29,r11
	r11.u64 = r29.u64 & r11.u64;
	// and r31,r30,r10
	r31.u64 = r30.u64 & ctx.r10.u64;
	// and r10,r28,r9
	ctx.r10.u64 = r28.u64 & ctx.r9.u64;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// ble cr6,0x827fa4b0
	if (!cr6.gt) goto loc_827FA4B0;
	// li r11,255
	r11.s64 = 255;
loc_827FA4B0:
	// cmpwi cr6,r31,255
	cr6.compare<int32_t>(r31.s32, 255, xer);
	// ble cr6,0x827fa4bc
	if (!cr6.gt) goto loc_827FA4BC;
	// li r31,255
	r31.s64 = 255;
loc_827FA4BC:
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// ble cr6,0x827fa4c8
	if (!cr6.gt) goto loc_827FA4C8;
	// li r10,255
	ctx.r10.s64 = 255;
loc_827FA4C8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// clrlwi r9,r31,24
	ctx.r9.u64 = r31.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// stb r9,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r9.u8);
	// stb r10,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r10.u8);
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r25,r4
	cr6.compare<uint32_t>(r25.u32, ctx.r4.u32, xer);
	// blt cr6,0x827fa394
	if (cr6.lt) goto loc_827FA394;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e944c
	return;
loc_827FA504:
	// cmplw cr6,r25,r4
	cr6.compare<uint32_t>(r25.u32, ctx.r4.u32, xer);
	// bge cr6,0x827fa7b8
	if (!cr6.lt) goto loc_827FA7B8;
	// rlwinm r11,r25,2,0,29
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r11,r8
	r26.u64 = r11.u64 + ctx.r8.u64;
loc_827FA514:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// srawi r11,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	r11.s64 = ctx.r10.s32 >> 8;
	// add r11,r11,r22
	r11.u64 = r11.u64 + r22.u64;
	// add r9,r11,r24
	ctx.r9.u64 = r11.u64 + r24.u64;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bgt cr6,0x827fa640
	if (cr6.gt) goto loc_827FA640;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r10,r10,255
	xer.ca = ctx.r10.u32 <= 255;
	ctx.r10.s64 = 255 - ctx.r10.s64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// add r30,r10,r23
	r30.u64 = ctx.r10.u64 + r23.u64;
	// addic. r29,r24,-1
	xer.ca = r24.u32 > 0;
	r29.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// lhzx r9,r10,r23
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + r23.u32);
	// lbz r31,1(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// extsh r28,r9
	r28.s64 = ctx.r9.s16;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r27,2(r11)
	r27.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// mullw r9,r31,r28
	ctx.r9.s64 = int64_t(r31.s32) * int64_t(r28.s32);
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// mullw r31,r27,r28
	r31.s64 = int64_t(r27.s32) * int64_t(r28.s32);
	// addi r10,r10,8192
	ctx.r10.s64 = ctx.r10.s64 + 8192;
	// addi r9,r9,8192
	ctx.r9.s64 = ctx.r9.s64 + 8192;
	// addi r31,r31,8192
	r31.s64 = r31.s64 + 8192;
	// beq 0x827fa5b0
	if (cr0.eq) goto loc_827FA5B0;
	// mtctr r29
	ctr.u64 = r29.u64;
loc_827FA580:
	// lbzu r29,3(r11)
	ea = 3 + r11.u32;
	r29.u64 = PPC_LOAD_U8(ea);
	r11.u32 = ea;
	// lhzu r28,512(r30)
	ea = 512 + r30.u32;
	r28.u64 = PPC_LOAD_U16(ea);
	r30.u32 = ea;
	// extsh r27,r28
	r27.s64 = r28.s16;
	// lbz r28,1(r11)
	r28.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// mullw r29,r29,r27
	r29.s64 = int64_t(r29.s32) * int64_t(r27.s32);
	// lbz r21,2(r11)
	r21.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// mullw r28,r28,r27
	r28.s64 = int64_t(r28.s32) * int64_t(r27.s32);
	// mullw r27,r21,r27
	r27.s64 = int64_t(r21.s32) * int64_t(r27.s32);
	// add r10,r29,r10
	ctx.r10.u64 = r29.u64 + ctx.r10.u64;
	// add r9,r28,r9
	ctx.r9.u64 = r28.u64 + ctx.r9.u64;
	// add r31,r27,r31
	r31.u64 = r27.u64 + r31.u64;
	// bdnz 0x827fa580
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FA580;
loc_827FA5B0:
	// srawi r11,r10,14
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFF) != 0);
	r11.s64 = ctx.r10.s32 >> 14;
	// srawi r10,r9,14
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 14;
	// srawi r9,r31,14
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3FFF) != 0);
	ctx.r9.s64 = r31.s32 >> 14;
	// rlwinm r31,r11,1,31,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// rlwinm r30,r10,1,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r29,r31,-1
	r29.s64 = r31.s64 + -1;
	// rlwinm r31,r9,1,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r28,r31,-1
	r28.s64 = r31.s64 + -1;
	// and r11,r29,r11
	r11.u64 = r29.u64 & r11.u64;
	// and r31,r30,r10
	r31.u64 = r30.u64 & ctx.r10.u64;
	// and r10,r28,r9
	ctx.r10.u64 = r28.u64 & ctx.r9.u64;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// ble cr6,0x827fa5ec
	if (!cr6.gt) goto loc_827FA5EC;
	// li r11,255
	r11.s64 = 255;
loc_827FA5EC:
	// cmpwi cr6,r31,255
	cr6.compare<int32_t>(r31.s32, 255, xer);
	// ble cr6,0x827fa5f8
	if (!cr6.gt) goto loc_827FA5F8;
	// li r31,255
	r31.s64 = 255;
loc_827FA5F8:
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// ble cr6,0x827fa604
	if (!cr6.gt) goto loc_827FA604;
	// li r10,255
	ctx.r10.s64 = 255;
loc_827FA604:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// clrlwi r9,r31,24
	ctx.r9.u64 = r31.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// stb r9,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r9.u8);
	// stb r10,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r10.u8);
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r25,r4
	cr6.compare<uint32_t>(r25.u32, ctx.r4.u32, xer);
	// blt cr6,0x827fa514
	if (cr6.lt) goto loc_827FA514;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e944c
	return;
loc_827FA640:
	// cmplw cr6,r25,r4
	cr6.compare<uint32_t>(r25.u32, ctx.r4.u32, xer);
	// bge cr6,0x827fa7b8
	if (!cr6.lt) goto loc_827FA7B8;
	// rlwinm r11,r25,2,0,29
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r24,-1
	r28.s64 = r24.s64 + -1;
	// addi r29,r3,2
	r29.s64 = ctx.r3.s64 + 2;
	// add r27,r11,r8
	r27.u64 = r11.u64 + ctx.r8.u64;
	// subf r26,r25,r4
	r26.s64 = ctx.r4.s64 - r25.s64;
loc_827FA65C:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// srawi r11,r4,8
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	r11.s64 = ctx.r4.s32 >> 8;
	// add r3,r11,r22
	ctx.r3.u64 = r11.u64 + r22.u64;
	// beq cr6,0x827fa6bc
	if (cr6.eq) goto loc_827FA6BC;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// mtctr r24
	ctr.u64 = r24.u64;
	// addi r10,r11,-3
	ctx.r10.s64 = r11.s64 + -3;
loc_827FA680:
	// add r11,r9,r3
	r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x827fa690
	if (cr6.lt) goto loc_827FA690;
	// addi r11,r7,-1
	r11.s64 = ctx.r7.s64 + -1;
loc_827FA690:
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r31,1(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r11,2(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r31,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, r31.u8);
	// stbu r11,3(r10)
	ea = 3 + ctx.r10.u32;
	PPC_STORE_U8(ea, r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x827fa680
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FA680;
loc_827FA6BC:
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// subfic r11,r11,255
	xer.ca = r11.u32 <= 255;
	r11.s64 = 255 - r11.s64;
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r23
	ctx.r4.u64 = r11.u64 + r23.u64;
	// lhzx r11,r11,r23
	r11.u64 = PPC_LOAD_U16(r11.u32 + r23.u32);
	// extsh r11,r11
	r11.s64 = r11.s16;
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(r11.s32);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// mullw r11,r8,r11
	r11.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// addi r10,r10,8192
	ctx.r10.s64 = ctx.r10.s64 + 8192;
	// addi r9,r9,8192
	ctx.r9.s64 = ctx.r9.s64 + 8192;
	// addi r8,r11,8192
	ctx.r8.s64 = r11.s64 + 8192;
	// beq cr6,0x827fa73c
	if (cr6.eq) goto loc_827FA73C;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// mtctr r28
	ctr.u64 = r28.u64;
loc_827FA708:
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// lhzu r3,512(r4)
	ea = 512 + ctx.r4.u32;
	ctx.r3.u64 = PPC_LOAD_U16(ea);
	ctx.r4.u32 = ea;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lbz r31,-2(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + -2);
	// lbz r21,-1(r11)
	r21.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// lbz r25,0(r11)
	r25.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// mullw r30,r31,r3
	r30.s64 = int64_t(r31.s32) * int64_t(ctx.r3.s32);
	// mullw r31,r21,r3
	r31.s64 = int64_t(r21.s32) * int64_t(ctx.r3.s32);
	// mullw r3,r25,r3
	ctx.r3.s64 = int64_t(r25.s32) * int64_t(ctx.r3.s32);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// add r9,r31,r9
	ctx.r9.u64 = r31.u64 + ctx.r9.u64;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// bdnz 0x827fa708
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FA708;
loc_827FA73C:
	// srawi r11,r10,14
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFF) != 0);
	r11.s64 = ctx.r10.s32 >> 14;
	// srawi r10,r9,14
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 14;
	// srawi r9,r8,14
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 14;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// rlwinm r4,r10,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r3,r8,-1
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// addi r31,r8,-1
	r31.s64 = ctx.r8.s64 + -1;
	// and r11,r3,r11
	r11.u64 = ctx.r3.u64 & r11.u64;
	// and r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 & ctx.r10.u64;
	// and r10,r31,r9
	ctx.r10.u64 = r31.u64 & ctx.r9.u64;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// ble cr6,0x827fa778
	if (!cr6.gt) goto loc_827FA778;
	// li r11,255
	r11.s64 = 255;
loc_827FA778:
	// cmpwi cr6,r8,255
	cr6.compare<int32_t>(ctx.r8.s32, 255, xer);
	// ble cr6,0x827fa784
	if (!cr6.gt) goto loc_827FA784;
	// li r8,255
	ctx.r8.s64 = 255;
loc_827FA784:
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// ble cr6,0x827fa790
	if (!cr6.gt) goto loc_827FA790;
	// li r10,255
	ctx.r10.s64 = 255;
loc_827FA790:
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stb r9,-1(r29)
	PPC_STORE_U8(r29.u32 + -1, ctx.r9.u8);
	// stb r11,-2(r29)
	PPC_STORE_U8(r29.u32 + -2, r11.u8);
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// stb r8,0(r29)
	PPC_STORE_U8(r29.u32 + 0, ctx.r8.u8);
	// add r29,r29,r5
	r29.u64 = r29.u64 + ctx.r5.u64;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bne 0x827fa65c
	if (!cr0.eq) goto loc_827FA65C;
loc_827FA7B8:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_827FA7C4"))) PPC_WEAK_FUNC(sub_827FA7C4);
PPC_FUNC_IMPL(__imp__sub_827FA7C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_827FA7C8"))) PPC_WEAK_FUNC(sub_827FA7C8);
PPC_FUNC_IMPL(__imp__sub_827FA7C8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f4
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r22,4(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r20,8(r9)
	r20.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// li r23,0
	r23.s64 = 0;
	// lwz r21,12(r9)
	r21.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// beq cr6,0x827facd0
	if (cr6.eq) goto loc_827FACD0;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
loc_827FA7FC:
	// lwz r29,0(r24)
	r29.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// srawi r11,r29,8
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xFF) != 0);
	r11.s64 = r29.s32 >> 8;
	// add. r30,r11,r20
	r30.u64 = r11.u64 + r20.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x827fa9a8
	if (!cr0.lt) goto loc_827FA9A8;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x827fa860
	if (cr6.eq) goto loc_827FA860;
	// addi r11,r1,79
	r11.s64 = ctx.r1.s64 + 79;
	// mtctr r22
	ctr.u64 = r22.u64;
loc_827FA820:
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + r30.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r31,r10,1,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// and r10,r31,r10
	ctx.r10.u64 = r31.u64 & ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbz r31,0(r10)
	r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r28,1(r10)
	r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r27,2(r10)
	r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r31,1(r11)
	PPC_STORE_U8(r11.u32 + 1, r31.u8);
	// stb r28,2(r11)
	PPC_STORE_U8(r11.u32 + 2, r28.u8);
	// stb r27,3(r11)
	PPC_STORE_U8(r11.u32 + 3, r27.u8);
	// stbu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	r11.u32 = ea;
	// bdnz 0x827fa820
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FA820;
loc_827FA860:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// subfic r11,r11,255
	xer.ca = r11.u32 <= 255;
	r11.s64 = 255 - r11.s64;
	// lbz r31,82(r1)
	r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r30,83(r1)
	r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// addic. r28,r22,-1
	xer.ca = r22.u32 > 0;
	r28.s64 = r22.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r11,r21
	r29.u64 = r11.u64 + r21.u64;
	// lhzx r11,r11,r21
	r11.u64 = PPC_LOAD_U16(r11.u32 + r21.u32);
	// extsh r27,r11
	r27.s64 = r11.s16;
	// mullw r11,r10,r27
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
	// mullw r9,r9,r27
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r27.s32);
	// mullw r31,r31,r27
	r31.s64 = int64_t(r31.s32) * int64_t(r27.s32);
	// mullw r30,r30,r27
	r30.s64 = int64_t(r30.s32) * int64_t(r27.s32);
	// addi r10,r11,8192
	ctx.r10.s64 = r11.s64 + 8192;
	// addi r9,r9,8192
	ctx.r9.s64 = ctx.r9.s64 + 8192;
	// addi r31,r31,8192
	r31.s64 = r31.s64 + 8192;
	// addi r30,r30,8192
	r30.s64 = r30.s64 + 8192;
	// beq 0x827fa8f8
	if (cr0.eq) goto loc_827FA8F8;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// mtctr r28
	ctr.u64 = r28.u64;
loc_827FA8B8:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lhzu r28,512(r29)
	ea = 512 + r29.u32;
	r28.u64 = PPC_LOAD_U16(ea);
	r29.u32 = ea;
	// extsh r25,r28
	r25.s64 = r28.s16;
	// lbz r28,-2(r11)
	r28.u64 = PPC_LOAD_U8(r11.u32 + -2);
	// lbz r27,-1(r11)
	r27.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// lbz r26,0(r11)
	r26.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// mullw r28,r28,r25
	r28.s64 = int64_t(r28.s32) * int64_t(r25.s32);
	// lbz r19,1(r11)
	r19.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// mullw r27,r27,r25
	r27.s64 = int64_t(r27.s32) * int64_t(r25.s32);
	// mullw r26,r26,r25
	r26.s64 = int64_t(r26.s32) * int64_t(r25.s32);
	// mullw r25,r19,r25
	r25.s64 = int64_t(r19.s32) * int64_t(r25.s32);
	// add r10,r28,r10
	ctx.r10.u64 = r28.u64 + ctx.r10.u64;
	// add r9,r27,r9
	ctx.r9.u64 = r27.u64 + ctx.r9.u64;
	// add r31,r26,r31
	r31.u64 = r26.u64 + r31.u64;
	// add r30,r25,r30
	r30.u64 = r25.u64 + r30.u64;
	// bdnz 0x827fa8b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FA8B8;
loc_827FA8F8:
	// srawi r11,r10,14
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFF) != 0);
	r11.s64 = ctx.r10.s32 >> 14;
	// srawi r10,r9,14
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 14;
	// srawi r9,r31,14
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3FFF) != 0);
	ctx.r9.s64 = r31.s32 >> 14;
	// srawi r31,r30,14
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3FFF) != 0);
	r31.s64 = r30.s32 >> 14;
	// rlwinm r30,r11,1,31,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// rlwinm r29,r10,1,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r27,r30,-1
	r27.s64 = r30.s64 + -1;
	// rlwinm r30,r9,1,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r28,r31,1,31,31
	r28.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0x1;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r26,r30,-1
	r26.s64 = r30.s64 + -1;
	// and r11,r27,r11
	r11.u64 = r27.u64 & r11.u64;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// and r30,r29,r10
	r30.u64 = r29.u64 & ctx.r10.u64;
	// and r9,r26,r9
	ctx.r9.u64 = r26.u64 & ctx.r9.u64;
	// and r10,r28,r31
	ctx.r10.u64 = r28.u64 & r31.u64;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// ble cr6,0x827fa944
	if (!cr6.gt) goto loc_827FA944;
	// li r11,255
	r11.s64 = 255;
loc_827FA944:
	// cmpwi cr6,r30,255
	cr6.compare<int32_t>(r30.s32, 255, xer);
	// ble cr6,0x827fa950
	if (!cr6.gt) goto loc_827FA950;
	// li r30,255
	r30.s64 = 255;
loc_827FA950:
	// cmpwi cr6,r9,255
	cr6.compare<int32_t>(ctx.r9.s32, 255, xer);
	// ble cr6,0x827fa95c
	if (!cr6.gt) goto loc_827FA95C;
	// li r9,255
	ctx.r9.s64 = 255;
loc_827FA95C:
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// ble cr6,0x827fa968
	if (!cr6.gt) goto loc_827FA968;
	// li r10,255
	ctx.r10.s64 = 255;
loc_827FA968:
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// clrlwi r31,r30,24
	r31.u64 = r30.u32 & 0xFF;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// stb r31,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, r31.u8);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// stb r9,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, r11.u8);
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// cmplw cr6,r23,r4
	cr6.compare<uint32_t>(r23.u32, ctx.r4.u32, xer);
	// blt cr6,0x827fa7fc
	if (cr6.lt) goto loc_827FA7FC;
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x828e9444
	return;
loc_827FA9A8:
	// cmplw cr6,r23,r4
	cr6.compare<uint32_t>(r23.u32, ctx.r4.u32, xer);
	// bge cr6,0x827facd0
	if (!cr6.lt) goto loc_827FACD0;
	// rlwinm r11,r23,2,0,29
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r11,r8
	r24.u64 = r11.u64 + ctx.r8.u64;
loc_827FA9B8:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// srawi r10,r11,8
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = r11.s32 >> 8;
	// add r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 + r20.u64;
	// add r9,r10,r22
	ctx.r9.u64 = ctx.r10.u64 + r22.u64;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bgt cr6,0x827fab18
	if (cr6.gt) goto loc_827FAB18;
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r10,r9,255
	xer.ca = ctx.r9.u32 <= 255;
	ctx.r10.s64 = 255 - ctx.r9.s64;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r28,r22,-1
	xer.ca = r22.u32 > 0;
	r28.s64 = r22.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// add r29,r10,r21
	r29.u64 = ctx.r10.u64 + r21.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lhzx r10,r10,r21
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + r21.u32);
	// lbz r31,1(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// extsh r27,r10
	r27.s64 = ctx.r10.s16;
	// lbz r30,2(r11)
	r30.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// lbz r26,3(r11)
	r26.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// mullw r10,r9,r27
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(r27.s32);
	// mullw r9,r31,r27
	ctx.r9.s64 = int64_t(r31.s32) * int64_t(r27.s32);
	// mullw r31,r30,r27
	r31.s64 = int64_t(r30.s32) * int64_t(r27.s32);
	// mullw r30,r26,r27
	r30.s64 = int64_t(r26.s32) * int64_t(r27.s32);
	// addi r10,r10,8192
	ctx.r10.s64 = ctx.r10.s64 + 8192;
	// addi r9,r9,8192
	ctx.r9.s64 = ctx.r9.s64 + 8192;
	// addi r31,r31,8192
	r31.s64 = r31.s64 + 8192;
	// addi r30,r30,8192
	r30.s64 = r30.s64 + 8192;
	// beq 0x827faa68
	if (cr0.eq) goto loc_827FAA68;
	// mtctr r28
	ctr.u64 = r28.u64;
loc_827FAA2C:
	// lbzu r28,4(r11)
	ea = 4 + r11.u32;
	r28.u64 = PPC_LOAD_U8(ea);
	r11.u32 = ea;
	// lhzu r27,512(r29)
	ea = 512 + r29.u32;
	r27.u64 = PPC_LOAD_U16(ea);
	r29.u32 = ea;
	// extsh r25,r27
	r25.s64 = r27.s16;
	// lbz r27,1(r11)
	r27.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// mullw r28,r28,r25
	r28.s64 = int64_t(r28.s32) * int64_t(r25.s32);
	// lbz r26,2(r11)
	r26.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// lbz r19,3(r11)
	r19.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// mullw r27,r27,r25
	r27.s64 = int64_t(r27.s32) * int64_t(r25.s32);
	// mullw r26,r26,r25
	r26.s64 = int64_t(r26.s32) * int64_t(r25.s32);
	// mullw r25,r19,r25
	r25.s64 = int64_t(r19.s32) * int64_t(r25.s32);
	// add r10,r28,r10
	ctx.r10.u64 = r28.u64 + ctx.r10.u64;
	// add r9,r27,r9
	ctx.r9.u64 = r27.u64 + ctx.r9.u64;
	// add r31,r26,r31
	r31.u64 = r26.u64 + r31.u64;
	// add r30,r25,r30
	r30.u64 = r25.u64 + r30.u64;
	// bdnz 0x827faa2c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FAA2C;
loc_827FAA68:
	// srawi r11,r10,14
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFF) != 0);
	r11.s64 = ctx.r10.s32 >> 14;
	// srawi r10,r9,14
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 14;
	// srawi r9,r31,14
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3FFF) != 0);
	ctx.r9.s64 = r31.s32 >> 14;
	// srawi r31,r30,14
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3FFF) != 0);
	r31.s64 = r30.s32 >> 14;
	// rlwinm r30,r11,1,31,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// rlwinm r29,r10,1,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r27,r30,-1
	r27.s64 = r30.s64 + -1;
	// rlwinm r30,r9,1,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r28,r31,1,31,31
	r28.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0x1;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r26,r30,-1
	r26.s64 = r30.s64 + -1;
	// and r11,r27,r11
	r11.u64 = r27.u64 & r11.u64;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// and r30,r29,r10
	r30.u64 = r29.u64 & ctx.r10.u64;
	// and r9,r26,r9
	ctx.r9.u64 = r26.u64 & ctx.r9.u64;
	// and r10,r28,r31
	ctx.r10.u64 = r28.u64 & r31.u64;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// ble cr6,0x827faab4
	if (!cr6.gt) goto loc_827FAAB4;
	// li r11,255
	r11.s64 = 255;
loc_827FAAB4:
	// cmpwi cr6,r30,255
	cr6.compare<int32_t>(r30.s32, 255, xer);
	// ble cr6,0x827faac0
	if (!cr6.gt) goto loc_827FAAC0;
	// li r30,255
	r30.s64 = 255;
loc_827FAAC0:
	// cmpwi cr6,r9,255
	cr6.compare<int32_t>(ctx.r9.s32, 255, xer);
	// ble cr6,0x827faacc
	if (!cr6.gt) goto loc_827FAACC;
	// li r9,255
	ctx.r9.s64 = 255;
loc_827FAACC:
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// ble cr6,0x827faad8
	if (!cr6.gt) goto loc_827FAAD8;
	// li r10,255
	ctx.r10.s64 = 255;
loc_827FAAD8:
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// clrlwi r31,r30,24
	r31.u64 = r30.u32 & 0xFF;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// stb r31,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, r31.u8);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// stb r9,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, r11.u8);
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// cmplw cr6,r23,r4
	cr6.compare<uint32_t>(r23.u32, ctx.r4.u32, xer);
	// blt cr6,0x827fa9b8
	if (cr6.lt) goto loc_827FA9B8;
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x828e9444
	return;
loc_827FAB18:
	// cmplw cr6,r23,r4
	cr6.compare<uint32_t>(r23.u32, ctx.r4.u32, xer);
	// bge cr6,0x827facd0
	if (!cr6.lt) goto loc_827FACD0;
	// rlwinm r11,r23,2,0,29
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r22,-1
	r26.s64 = r22.s64 + -1;
	// addi r27,r3,2
	r27.s64 = ctx.r3.s64 + 2;
	// add r25,r11,r8
	r25.u64 = r11.u64 + ctx.r8.u64;
	// subf r24,r23,r4
	r24.s64 = ctx.r4.s64 - r23.s64;
loc_827FAB34:
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// srawi r11,r8,8
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	r11.s64 = ctx.r8.s32 >> 8;
	// add r4,r11,r20
	ctx.r4.u64 = r11.u64 + r20.u64;
	// beq cr6,0x827fab98
	if (cr6.eq) goto loc_827FAB98;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// mtctr r22
	ctr.u64 = r22.u64;
	// addi r10,r11,-3
	ctx.r10.s64 = r11.s64 + -3;
loc_827FAB58:
	// add r11,r9,r4
	r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x827fab68
	if (cr6.lt) goto loc_827FAB68;
	// addi r11,r7,-1
	r11.s64 = ctx.r7.s64 + -1;
loc_827FAB68:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r31,1(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r30,2(r11)
	r30.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r3,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r3.u8);
	// stb r31,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, r31.u8);
	// stb r30,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, r30.u8);
	// stbu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U8(ea, r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x827fab58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FAB58;
loc_827FAB98:
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// subfic r11,r11,255
	xer.ca = r11.u32 <= 255;
	r11.s64 = 255 - r11.s64;
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r4,83(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r21
	ctx.r3.u64 = r11.u64 + r21.u64;
	// lhzx r11,r11,r21
	r11.u64 = PPC_LOAD_U16(r11.u32 + r21.u32);
	// extsh r11,r11
	r11.s64 = r11.s16;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// mullw r11,r4,r11
	r11.s64 = int64_t(ctx.r4.s32) * int64_t(r11.s32);
	// addi r10,r10,8192
	ctx.r10.s64 = ctx.r10.s64 + 8192;
	// addi r9,r9,8192
	ctx.r9.s64 = ctx.r9.s64 + 8192;
	// addi r8,r8,8192
	ctx.r8.s64 = ctx.r8.s64 + 8192;
	// addi r4,r11,8192
	ctx.r4.s64 = r11.s64 + 8192;
	// beq cr6,0x827fac30
	if (cr6.eq) goto loc_827FAC30;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// mtctr r26
	ctr.u64 = r26.u64;
loc_827FABF0:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lhzu r31,512(r3)
	ea = 512 + ctx.r3.u32;
	r31.u64 = PPC_LOAD_U16(ea);
	ctx.r3.u32 = ea;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// lbz r30,-2(r11)
	r30.u64 = PPC_LOAD_U8(r11.u32 + -2);
	// lbz r29,-1(r11)
	r29.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// lbz r19,0(r11)
	r19.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// mullw r28,r30,r31
	r28.s64 = int64_t(r30.s32) * int64_t(r31.s32);
	// lbz r23,1(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// mullw r29,r29,r31
	r29.s64 = int64_t(r29.s32) * int64_t(r31.s32);
	// mullw r30,r19,r31
	r30.s64 = int64_t(r19.s32) * int64_t(r31.s32);
	// mullw r31,r23,r31
	r31.s64 = int64_t(r23.s32) * int64_t(r31.s32);
	// add r10,r28,r10
	ctx.r10.u64 = r28.u64 + ctx.r10.u64;
	// add r9,r29,r9
	ctx.r9.u64 = r29.u64 + ctx.r9.u64;
	// add r8,r30,r8
	ctx.r8.u64 = r30.u64 + ctx.r8.u64;
	// add r4,r31,r4
	ctx.r4.u64 = r31.u64 + ctx.r4.u64;
	// bdnz 0x827fabf0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FABF0;
loc_827FAC30:
	// srawi r11,r10,14
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFF) != 0);
	r11.s64 = ctx.r10.s32 >> 14;
	// srawi r10,r9,14
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 14;
	// srawi r9,r8,14
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 14;
	// srawi r8,r4,14
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 14;
	// rlwinm r4,r11,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// rlwinm r31,r10,1,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r30,r4,-1
	r30.s64 = ctx.r4.s64 + -1;
	// rlwinm r3,r9,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r4,r8,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r29,r4,-1
	r29.s64 = ctx.r4.s64 + -1;
	// and r11,r30,r11
	r11.u64 = r30.u64 & r11.u64;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// and r4,r31,r10
	ctx.r4.u64 = r31.u64 & ctx.r10.u64;
	// and r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 & ctx.r9.u64;
	// and r10,r29,r8
	ctx.r10.u64 = r29.u64 & ctx.r8.u64;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// ble cr6,0x827fac7c
	if (!cr6.gt) goto loc_827FAC7C;
	// li r11,255
	r11.s64 = 255;
loc_827FAC7C:
	// cmpwi cr6,r4,255
	cr6.compare<int32_t>(ctx.r4.s32, 255, xer);
	// ble cr6,0x827fac88
	if (!cr6.gt) goto loc_827FAC88;
	// li r4,255
	ctx.r4.s64 = 255;
loc_827FAC88:
	// cmpwi cr6,r9,255
	cr6.compare<int32_t>(ctx.r9.s32, 255, xer);
	// ble cr6,0x827fac94
	if (!cr6.gt) goto loc_827FAC94;
	// li r9,255
	ctx.r9.s64 = 255;
loc_827FAC94:
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// ble cr6,0x827faca0
	if (!cr6.gt) goto loc_827FACA0;
	// li r10,255
	ctx.r10.s64 = 255;
loc_827FACA0:
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,-1(r27)
	PPC_STORE_U8(r27.u32 + -1, ctx.r8.u8);
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// stb r11,-2(r27)
	PPC_STORE_U8(r27.u32 + -2, r11.u8);
	// stb r4,0(r27)
	PPC_STORE_U8(r27.u32 + 0, ctx.r4.u8);
	// addic. r24,r24,-1
	xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// stb r3,1(r27)
	PPC_STORE_U8(r27.u32 + 1, ctx.r3.u8);
	// add r27,r27,r5
	r27.u64 = r27.u64 + ctx.r5.u64;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// bne 0x827fab34
	if (!cr0.eq) goto loc_827FAB34;
loc_827FACD0:
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_827FACDC"))) PPC_WEAK_FUNC(sub_827FACDC);
PPC_FUNC_IMPL(__imp__sub_827FACDC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_827FACE0"))) PPC_WEAK_FUNC(sub_827FACE0);
PPC_FUNC_IMPL(__imp__sub_827FACE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r24,4(r9)
	r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r21,8(r9)
	r21.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// li r25,0
	r25.s64 = 0;
	// lwz r23,12(r9)
	r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// beq cr6,0x827fb148
	if (cr6.eq) goto loc_827FB148;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// li r22,255
	r22.s64 = 255;
loc_827FAD18:
	// lwz r29,0(r26)
	r29.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// srawi r11,r29,8
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xFF) != 0);
	r11.s64 = r29.s32 >> 8;
	// add. r30,r11,r21
	r30.u64 = r11.u64 + r21.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x827fae8c
	if (!cr0.lt) goto loc_827FAE8C;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x827fad78
	if (cr6.eq) goto loc_827FAD78;
	// addi r11,r1,79
	r11.s64 = ctx.r1.s64 + 79;
	// mtctr r24
	ctr.u64 = r24.u64;
loc_827FAD3C:
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + r30.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r31,r10,1,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// and r10,r31,r10
	ctx.r10.u64 = r31.u64 & ctx.r10.u64;
	// rlwinm r31,r10,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbz r31,0(r10)
	r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r28,1(r10)
	r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r31,1(r11)
	PPC_STORE_U8(r11.u32 + 1, r31.u8);
	// stb r28,2(r11)
	PPC_STORE_U8(r11.u32 + 2, r28.u8);
	// stbu r10,3(r11)
	ea = 3 + r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	r11.u32 = ea;
	// bdnz 0x827fad3c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FAD3C;
loc_827FAD78:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// subfic r11,r11,255
	xer.ca = r11.u32 <= 255;
	r11.s64 = 255 - r11.s64;
	// lbz r31,82(r1)
	r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addic. r29,r24,-1
	xer.ca = r24.u32 > 0;
	r29.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r23
	r30.u64 = r11.u64 + r23.u64;
	// lhzx r11,r11,r23
	r11.u64 = PPC_LOAD_U16(r11.u32 + r23.u32);
	// extsh r28,r11
	r28.s64 = r11.s16;
	// mullw r11,r10,r28
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// mullw r9,r9,r28
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r28.s32);
	// mullw r31,r31,r28
	r31.s64 = int64_t(r31.s32) * int64_t(r28.s32);
	// addi r10,r11,8192
	ctx.r10.s64 = r11.s64 + 8192;
	// addi r9,r9,8192
	ctx.r9.s64 = ctx.r9.s64 + 8192;
	// addi r31,r31,8192
	r31.s64 = r31.s64 + 8192;
	// beq 0x827fadf8
	if (cr0.eq) goto loc_827FADF8;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// mtctr r29
	ctr.u64 = r29.u64;
loc_827FADC4:
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// lhzu r29,512(r30)
	ea = 512 + r30.u32;
	r29.u64 = PPC_LOAD_U16(ea);
	r30.u32 = ea;
	// extsh r27,r29
	r27.s64 = r29.s16;
	// lbz r29,-2(r11)
	r29.u64 = PPC_LOAD_U8(r11.u32 + -2);
	// lbz r28,-1(r11)
	r28.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// lbz r20,0(r11)
	r20.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// mullw r29,r29,r27
	r29.s64 = int64_t(r29.s32) * int64_t(r27.s32);
	// mullw r28,r28,r27
	r28.s64 = int64_t(r28.s32) * int64_t(r27.s32);
	// mullw r27,r20,r27
	r27.s64 = int64_t(r20.s32) * int64_t(r27.s32);
	// add r10,r29,r10
	ctx.r10.u64 = r29.u64 + ctx.r10.u64;
	// add r9,r28,r9
	ctx.r9.u64 = r28.u64 + ctx.r9.u64;
	// add r31,r27,r31
	r31.u64 = r27.u64 + r31.u64;
	// bdnz 0x827fadc4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FADC4;
loc_827FADF8:
	// srawi r11,r10,14
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFF) != 0);
	r11.s64 = ctx.r10.s32 >> 14;
	// srawi r10,r9,14
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 14;
	// srawi r9,r31,14
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3FFF) != 0);
	ctx.r9.s64 = r31.s32 >> 14;
	// rlwinm r31,r11,1,31,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// rlwinm r30,r10,1,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r29,r31,-1
	r29.s64 = r31.s64 + -1;
	// rlwinm r31,r9,1,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r28,r31,-1
	r28.s64 = r31.s64 + -1;
	// and r11,r29,r11
	r11.u64 = r29.u64 & r11.u64;
	// and r31,r30,r10
	r31.u64 = r30.u64 & ctx.r10.u64;
	// and r10,r28,r9
	ctx.r10.u64 = r28.u64 & ctx.r9.u64;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// ble cr6,0x827fae34
	if (!cr6.gt) goto loc_827FAE34;
	// mr r11,r22
	r11.u64 = r22.u64;
loc_827FAE34:
	// cmpwi cr6,r31,255
	cr6.compare<int32_t>(r31.s32, 255, xer);
	// ble cr6,0x827fae40
	if (!cr6.gt) goto loc_827FAE40;
	// mr r31,r22
	r31.u64 = r22.u64;
loc_827FAE40:
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// ble cr6,0x827fae4c
	if (!cr6.gt) goto loc_827FAE4C;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_827FAE4C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// stb r22,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, r22.u8);
	// clrlwi r9,r31,24
	ctx.r9.u64 = r31.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// stb r9,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r9.u8);
	// stb r10,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r10.u8);
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r25,r4
	cr6.compare<uint32_t>(r25.u32, ctx.r4.u32, xer);
	// blt cr6,0x827fad18
	if (cr6.lt) goto loc_827FAD18;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x828e9448
	return;
loc_827FAE8C:
	// cmplw cr6,r25,r4
	cr6.compare<uint32_t>(r25.u32, ctx.r4.u32, xer);
	// bge cr6,0x827fb148
	if (!cr6.lt) goto loc_827FB148;
	// rlwinm r11,r25,2,0,29
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r11,r8
	r26.u64 = r11.u64 + ctx.r8.u64;
loc_827FAE9C:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// srawi r11,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	r11.s64 = ctx.r10.s32 >> 8;
	// add r11,r11,r21
	r11.u64 = r11.u64 + r21.u64;
	// add r9,r11,r24
	ctx.r9.u64 = r11.u64 + r24.u64;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bgt cr6,0x827fafcc
	if (cr6.gt) goto loc_827FAFCC;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r10,r10,255
	xer.ca = ctx.r10.u32 <= 255;
	ctx.r10.s64 = 255 - ctx.r10.s64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// add r30,r10,r23
	r30.u64 = ctx.r10.u64 + r23.u64;
	// addic. r29,r24,-1
	xer.ca = r24.u32 > 0;
	r29.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// lhzx r9,r10,r23
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + r23.u32);
	// lbz r31,1(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// extsh r28,r9
	r28.s64 = ctx.r9.s16;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r27,2(r11)
	r27.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// mullw r9,r31,r28
	ctx.r9.s64 = int64_t(r31.s32) * int64_t(r28.s32);
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// mullw r31,r27,r28
	r31.s64 = int64_t(r27.s32) * int64_t(r28.s32);
	// addi r10,r10,8192
	ctx.r10.s64 = ctx.r10.s64 + 8192;
	// addi r9,r9,8192
	ctx.r9.s64 = ctx.r9.s64 + 8192;
	// addi r31,r31,8192
	r31.s64 = r31.s64 + 8192;
	// beq 0x827faf38
	if (cr0.eq) goto loc_827FAF38;
	// mtctr r29
	ctr.u64 = r29.u64;
loc_827FAF08:
	// lbzu r29,3(r11)
	ea = 3 + r11.u32;
	r29.u64 = PPC_LOAD_U8(ea);
	r11.u32 = ea;
	// lhzu r28,512(r30)
	ea = 512 + r30.u32;
	r28.u64 = PPC_LOAD_U16(ea);
	r30.u32 = ea;
	// extsh r27,r28
	r27.s64 = r28.s16;
	// lbz r28,1(r11)
	r28.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// mullw r29,r29,r27
	r29.s64 = int64_t(r29.s32) * int64_t(r27.s32);
	// lbz r20,2(r11)
	r20.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// mullw r28,r28,r27
	r28.s64 = int64_t(r28.s32) * int64_t(r27.s32);
	// mullw r27,r20,r27
	r27.s64 = int64_t(r20.s32) * int64_t(r27.s32);
	// add r10,r29,r10
	ctx.r10.u64 = r29.u64 + ctx.r10.u64;
	// add r9,r28,r9
	ctx.r9.u64 = r28.u64 + ctx.r9.u64;
	// add r31,r27,r31
	r31.u64 = r27.u64 + r31.u64;
	// bdnz 0x827faf08
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FAF08;
loc_827FAF38:
	// srawi r11,r10,14
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFF) != 0);
	r11.s64 = ctx.r10.s32 >> 14;
	// srawi r10,r9,14
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 14;
	// srawi r9,r31,14
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3FFF) != 0);
	ctx.r9.s64 = r31.s32 >> 14;
	// rlwinm r31,r11,1,31,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// rlwinm r30,r10,1,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r29,r31,-1
	r29.s64 = r31.s64 + -1;
	// rlwinm r31,r9,1,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r28,r31,-1
	r28.s64 = r31.s64 + -1;
	// and r11,r29,r11
	r11.u64 = r29.u64 & r11.u64;
	// and r31,r30,r10
	r31.u64 = r30.u64 & ctx.r10.u64;
	// and r10,r28,r9
	ctx.r10.u64 = r28.u64 & ctx.r9.u64;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// ble cr6,0x827faf74
	if (!cr6.gt) goto loc_827FAF74;
	// mr r11,r22
	r11.u64 = r22.u64;
loc_827FAF74:
	// cmpwi cr6,r31,255
	cr6.compare<int32_t>(r31.s32, 255, xer);
	// ble cr6,0x827faf80
	if (!cr6.gt) goto loc_827FAF80;
	// mr r31,r22
	r31.u64 = r22.u64;
loc_827FAF80:
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// ble cr6,0x827faf8c
	if (!cr6.gt) goto loc_827FAF8C;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_827FAF8C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// stb r22,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, r22.u8);
	// clrlwi r9,r31,24
	ctx.r9.u64 = r31.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// stb r9,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r9.u8);
	// stb r10,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r10.u8);
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r25,r4
	cr6.compare<uint32_t>(r25.u32, ctx.r4.u32, xer);
	// blt cr6,0x827fae9c
	if (cr6.lt) goto loc_827FAE9C;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x828e9448
	return;
loc_827FAFCC:
	// cmplw cr6,r25,r4
	cr6.compare<uint32_t>(r25.u32, ctx.r4.u32, xer);
	// bge cr6,0x827fb148
	if (!cr6.lt) goto loc_827FB148;
	// rlwinm r11,r25,2,0,29
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r24,-1
	r27.s64 = r24.s64 + -1;
	// addi r29,r3,2
	r29.s64 = ctx.r3.s64 + 2;
	// add r28,r11,r8
	r28.u64 = r11.u64 + ctx.r8.u64;
	// subf r26,r25,r4
	r26.s64 = ctx.r4.s64 - r25.s64;
loc_827FAFE8:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// srawi r11,r4,8
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	r11.s64 = ctx.r4.s32 >> 8;
	// add r3,r11,r21
	ctx.r3.u64 = r11.u64 + r21.u64;
	// beq cr6,0x827fb048
	if (cr6.eq) goto loc_827FB048;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// mtctr r24
	ctr.u64 = r24.u64;
	// addi r10,r11,-3
	ctx.r10.s64 = r11.s64 + -3;
loc_827FB00C:
	// add r11,r9,r3
	r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x827fb01c
	if (cr6.lt) goto loc_827FB01C;
	// addi r11,r7,-1
	r11.s64 = ctx.r7.s64 + -1;
loc_827FB01C:
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r31,1(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r11,2(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r31,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, r31.u8);
	// stbu r11,3(r10)
	ea = 3 + ctx.r10.u32;
	PPC_STORE_U8(ea, r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x827fb00c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FB00C;
loc_827FB048:
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// subfic r11,r11,255
	xer.ca = r11.u32 <= 255;
	r11.s64 = 255 - r11.s64;
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r23
	ctx.r4.u64 = r11.u64 + r23.u64;
	// lhzx r11,r11,r23
	r11.u64 = PPC_LOAD_U16(r11.u32 + r23.u32);
	// extsh r11,r11
	r11.s64 = r11.s16;
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(r11.s32);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// mullw r11,r8,r11
	r11.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// addi r10,r10,8192
	ctx.r10.s64 = ctx.r10.s64 + 8192;
	// addi r9,r9,8192
	ctx.r9.s64 = ctx.r9.s64 + 8192;
	// addi r8,r11,8192
	ctx.r8.s64 = r11.s64 + 8192;
	// beq cr6,0x827fb0c8
	if (cr6.eq) goto loc_827FB0C8;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// mtctr r27
	ctr.u64 = r27.u64;
loc_827FB094:
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// lhzu r3,512(r4)
	ea = 512 + ctx.r4.u32;
	ctx.r3.u64 = PPC_LOAD_U16(ea);
	ctx.r4.u32 = ea;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lbz r31,-2(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + -2);
	// lbz r20,-1(r11)
	r20.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// lbz r25,0(r11)
	r25.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// mullw r30,r31,r3
	r30.s64 = int64_t(r31.s32) * int64_t(ctx.r3.s32);
	// mullw r31,r20,r3
	r31.s64 = int64_t(r20.s32) * int64_t(ctx.r3.s32);
	// mullw r3,r25,r3
	ctx.r3.s64 = int64_t(r25.s32) * int64_t(ctx.r3.s32);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// add r9,r31,r9
	ctx.r9.u64 = r31.u64 + ctx.r9.u64;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// bdnz 0x827fb094
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FB094;
loc_827FB0C8:
	// srawi r11,r10,14
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFF) != 0);
	r11.s64 = ctx.r10.s32 >> 14;
	// srawi r10,r9,14
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 14;
	// srawi r9,r8,14
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 14;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// rlwinm r4,r10,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r3,r8,-1
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// addi r31,r8,-1
	r31.s64 = ctx.r8.s64 + -1;
	// and r11,r3,r11
	r11.u64 = ctx.r3.u64 & r11.u64;
	// and r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 & ctx.r10.u64;
	// and r10,r31,r9
	ctx.r10.u64 = r31.u64 & ctx.r9.u64;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// ble cr6,0x827fb104
	if (!cr6.gt) goto loc_827FB104;
	// mr r11,r22
	r11.u64 = r22.u64;
loc_827FB104:
	// cmpwi cr6,r8,255
	cr6.compare<int32_t>(ctx.r8.s32, 255, xer);
	// ble cr6,0x827fb110
	if (!cr6.gt) goto loc_827FB110;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
loc_827FB110:
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// ble cr6,0x827fb11c
	if (!cr6.gt) goto loc_827FB11C;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_827FB11C:
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// stb r22,1(r29)
	PPC_STORE_U8(r29.u32 + 1, r22.u8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stb r9,-1(r29)
	PPC_STORE_U8(r29.u32 + -1, ctx.r9.u8);
	// stb r11,-2(r29)
	PPC_STORE_U8(r29.u32 + -2, r11.u8);
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// stb r8,0(r29)
	PPC_STORE_U8(r29.u32 + 0, ctx.r8.u8);
	// add r29,r29,r5
	r29.u64 = r29.u64 + ctx.r5.u64;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x827fafe8
	if (!cr0.eq) goto loc_827FAFE8;
loc_827FB148:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_827FB154"))) PPC_WEAK_FUNC(sub_827FB154);
PPC_FUNC_IMPL(__imp__sub_827FB154) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_827FB158"))) PPC_WEAK_FUNC(sub_827FB158);
PPC_FUNC_IMPL(__imp__sub_827FB158) {
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
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r27,4(r9)
	r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r25,8(r9)
	r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// lwz r26,12(r9)
	r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// beq cr6,0x827fb404
	if (cr6.eq) goto loc_827FB404;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
loc_827FB18C:
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// srawi r11,r31,8
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r11.s64 = r31.s32 >> 8;
	// add. r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x827fb264
	if (!cr0.lt) goto loc_827FB264;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x827fb1cc
	if (cr6.eq) goto loc_827FB1CC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mtctr r27
	ctr.u64 = r27.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
loc_827FB1B0:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & r11.u64;
	// lbzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x827fb1b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FB1B0;
loc_827FB1CC:
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// lbz r30,80(r1)
	r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r31,r1,81
	r31.s64 = ctx.r1.s64 + 81;
	// subfic r11,r11,255
	xer.ca = r11.u32 <= 255;
	r11.s64 = 255 - r11.s64;
	// addic. r10,r27,-1
	xer.ca = r27.u32 > 0;
	ctx.r10.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r26
	ctx.r9.u64 = r11.u64 + r26.u64;
	// lhzx r11,r11,r26
	r11.u64 = PPC_LOAD_U16(r11.u32 + r26.u32);
	// extsh r11,r11
	r11.s64 = r11.s16;
	// mullw r11,r11,r30
	r11.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// addi r11,r11,8192
	r11.s64 = r11.s64 + 8192;
	// beq 0x827fb21c
	if (cr0.eq) goto loc_827FB21C;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r10,r31,-1
	ctx.r10.s64 = r31.s64 + -1;
loc_827FB204:
	// lhzu r31,512(r9)
	ea = 512 + ctx.r9.u32;
	r31.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// lbzu r30,1(r10)
	ea = 1 + ctx.r10.u32;
	r30.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// mullw r31,r31,r30
	r31.s64 = int64_t(r31.s32) * int64_t(r30.s32);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// bdnz 0x827fb204
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FB204;
loc_827FB21C:
	// srawi. r11,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	r11.s64 = r11.s32 >> 14;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x827fb22c
	if (!cr0.lt) goto loc_827FB22C;
	// li r11,0
	r11.s64 = 0;
	// b 0x827fb238
	goto loc_827FB238;
loc_827FB22C:
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// ble cr6,0x827fb238
	if (!cr6.gt) goto loc_827FB238;
	// li r11,255
	r11.s64 = 255;
loc_827FB238:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r4
	cr6.compare<uint32_t>(r28.u32, ctx.r4.u32, xer);
	// blt cr6,0x827fb18c
	if (cr6.lt) goto loc_827FB18C;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e945c
	return;
loc_827FB264:
	// cmplw cr6,r28,r4
	cr6.compare<uint32_t>(r28.u32, ctx.r4.u32, xer);
	// bge cr6,0x827fb404
	if (!cr6.lt) goto loc_827FB404;
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r8
	r29.u64 = r11.u64 + ctx.r8.u64;
loc_827FB274:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// srawi r10,r11,8
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = r11.s32 >> 8;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// add r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 + r27.u64;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bgt cr6,0x827fb328
	if (cr6.gt) goto loc_827FB328;
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// add r11,r10,r6
	r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// subfic r9,r9,255
	xer.ca = ctx.r9.u32 <= 255;
	ctx.r9.s64 = 255 - ctx.r9.s64;
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r10,r27,-1
	xer.ca = r27.u32 > 0;
	ctx.r10.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lhz r30,0(r9)
	r30.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r30,r30
	r30.s64 = r30.s16;
	// mullw r11,r30,r11
	r11.s64 = int64_t(r30.s32) * int64_t(r11.s32);
	// addi r11,r11,8192
	r11.s64 = r11.s64 + 8192;
	// beq 0x827fb2e0
	if (cr0.eq) goto loc_827FB2E0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r10,r31,-1
	ctx.r10.s64 = r31.s64 + -1;
loc_827FB2C8:
	// lhzu r31,512(r9)
	ea = 512 + ctx.r9.u32;
	r31.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// lbzu r30,1(r10)
	ea = 1 + ctx.r10.u32;
	r30.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// mullw r31,r31,r30
	r31.s64 = int64_t(r31.s32) * int64_t(r30.s32);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// bdnz 0x827fb2c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FB2C8;
loc_827FB2E0:
	// srawi. r11,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	r11.s64 = r11.s32 >> 14;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x827fb2f0
	if (!cr0.lt) goto loc_827FB2F0;
	// li r11,0
	r11.s64 = 0;
	// b 0x827fb2fc
	goto loc_827FB2FC;
loc_827FB2F0:
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// ble cr6,0x827fb2fc
	if (!cr6.gt) goto loc_827FB2FC;
	// li r11,255
	r11.s64 = 255;
loc_827FB2FC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r4
	cr6.compare<uint32_t>(r28.u32, ctx.r4.u32, xer);
	// blt cr6,0x827fb274
	if (cr6.lt) goto loc_827FB274;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e945c
	return;
loc_827FB328:
	// cmplw cr6,r28,r4
	cr6.compare<uint32_t>(r28.u32, ctx.r4.u32, xer);
	// bge cr6,0x827fb404
	if (!cr6.lt) goto loc_827FB404;
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r27,-1
	r31.s64 = r27.s64 + -1;
	// add r30,r11,r8
	r30.u64 = r11.u64 + ctx.r8.u64;
	// subf r29,r28,r4
	r29.s64 = ctx.r4.s64 - r28.s64;
	// subf r3,r5,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_827FB344:
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// srawi r11,r8,8
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	r11.s64 = ctx.r8.s32 >> 8;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// beq cr6,0x827fb384
	if (cr6.eq) goto loc_827FB384;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mtctr r27
	ctr.u64 = r27.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
loc_827FB364:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x827fb374
	if (cr6.lt) goto loc_827FB374;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
loc_827FB374:
	// lbzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// stbx r10,r11,r9
	PPC_STORE_U8(r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x827fb364
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FB364;
loc_827FB384:
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// subfic r11,r11,255
	xer.ca = r11.u32 <= 255;
	r11.s64 = 255 - r11.s64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r26
	ctx.r10.u64 = r11.u64 + r26.u64;
	// lhzx r4,r11,r26
	ctx.r4.u64 = PPC_LOAD_U16(r11.u32 + r26.u32);
	// extsh r11,r4
	r11.s64 = ctx.r4.s16;
	// mullw r11,r11,r8
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,8192
	r11.s64 = r11.s64 + 8192;
	// beq cr6,0x827fb3d4
	if (cr6.eq) goto loc_827FB3D4;
	// mtctr r31
	ctr.u64 = r31.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_827FB3BC:
	// lhzu r8,512(r10)
	ea = 512 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// lbzu r4,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// bdnz 0x827fb3bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FB3BC;
loc_827FB3D4:
	// srawi. r11,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	r11.s64 = r11.s32 >> 14;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x827fb3e4
	if (!cr0.lt) goto loc_827FB3E4;
	// li r11,0
	r11.s64 = 0;
	// b 0x827fb3f0
	goto loc_827FB3F0;
loc_827FB3E4:
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// ble cr6,0x827fb3f0
	if (!cr6.gt) goto loc_827FB3F0;
	// li r11,255
	r11.s64 = 255;
loc_827FB3F0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stbux r11,r3,r5
	ea = ctx.r3.u32 + ctx.r5.u32;
	PPC_STORE_U8(ea, r11.u8);
	ctx.r3.u32 = ea;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x827fb344
	if (!cr0.eq) goto loc_827FB344;
loc_827FB404:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_827FB410"))) PPC_WEAK_FUNC(sub_827FB410);
PPC_FUNC_IMPL(__imp__sub_827FB410) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_827FB414"))) PPC_WEAK_FUNC(sub_827FB414);
PPC_FUNC_IMPL(__imp__sub_827FB414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FB418"))) PPC_WEAK_FUNC(sub_827FB418);
PPC_FUNC_IMPL(__imp__sub_827FB418) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// stw r6,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r6.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r8,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r10,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r10.u32);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// bl 0x827fc2e8
	sub_827FC2E8(ctx, base);
	// rlwinm r11,r31,7,0,24
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r31,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xFFFFFF00;
	// divw r11,r11,r29
	r11.s32 = r11.s32 / r29.s32;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// divw r7,r9,r29
	ctx.r7.s32 = ctx.r9.s32 / r29.s32;
	// divw r8,r9,r29
	ctx.r8.s32 = ctx.r9.s32 / r29.s32;
	// mullw r6,r7,r29
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(r29.s32);
	// subf. r11,r6,r9
	r11.s64 = ctx.r9.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// bgt 0x827fb4a0
	if (cr0.gt) goto loc_827FB4A0;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_827FB4A0:
	// subf r9,r29,r9
	ctx.r9.s64 = ctx.r9.s64 - r29.s64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x827fb4d4
	if (!cr6.gt) goto loc_827FB4D4;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r29
	ctr.u64 = r29.u64;
loc_827FB4B4:
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// add. r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// ble 0x827fb4cc
	if (!cr0.gt) goto loc_827FB4CC;
	// subf r9,r29,r9
	ctx.r9.s64 = ctx.r9.s64 - r29.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_827FB4CC:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x827fb4b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FB4B4;
loc_827FB4D4:
	// rlwinm r11,r28,7,0,24
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r28,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0xFFFFFF00;
	// divw r11,r11,r21
	r11.s32 = r11.s32 / r21.s32;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// mr r22,r11
	r22.u64 = r11.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r9,r10,r21
	ctx.r9.s32 = ctx.r10.s32 / r21.s32;
	// divw r14,r10,r21
	r14.s32 = ctx.r10.s32 / r21.s32;
	// mullw r8,r9,r21
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r21.s32);
	// subf. r18,r8,r10
	r18.s64 = ctx.r10.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(r18.s32, 0, xer);
	// mr r11,r18
	r11.u64 = r18.u64;
	// bgt 0x827fb510
	if (cr0.gt) goto loc_827FB510;
	// add r11,r18,r21
	r11.u64 = r18.u64 + r21.u64;
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// mr r18,r11
	r18.u64 = r11.u64;
loc_827FB510:
	// subf r20,r21,r11
	r20.s64 = r11.s64 - r21.s64;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// ble cr6,0x827fb64c
	if (!cr6.gt) goto loc_827FB64C;
	// lwz r24,348(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// addi r17,r31,-1
	r17.s64 = r31.s64 + -1;
	// lwz r26,356(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// mr r23,r30
	r23.u64 = r30.u64;
	// lwz r19,340(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mullw r15,r17,r24
	r15.s64 = int64_t(r17.s32) * int64_t(r24.s32);
	// mr r16,r21
	r16.u64 = r21.u64;
	// b 0x827fb540
	goto loc_827FB540;
loc_827FB53C:
	// lwz r28,332(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
loc_827FB540:
	// srawi r11,r22,8
	xer.ca = (r22.s32 < 0) & ((r22.u32 & 0xFF) != 0);
	r11.s64 = r22.s32 >> 8;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// blt cr6,0x827fb55c
	if (cr6.lt) goto loc_827FB55C;
	// addi r11,r28,-1
	r11.s64 = r28.s64 + -1;
loc_827FB55C:
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mullw r11,r11,r19
	r11.s64 = int64_t(r11.s32) * int64_t(r19.s32);
	// add r27,r11,r10
	r27.u64 = r11.u64 + ctx.r10.u64;
	// mr r31,r23
	r31.u64 = r23.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x827fb5b0
	if (!cr6.gt) goto loc_827FB5B0;
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827FB57C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x827fb5b0
	if (!cr6.lt) goto loc_827FB5B0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r31,r31,r25
	r31.u64 = r31.u64 + r25.u64;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// blt cr6,0x827fb57c
	if (cr6.lt) goto loc_827FB57C;
loc_827FB5B0:
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// bge cr6,0x827fb5fc
	if (!cr6.lt) goto loc_827FB5FC;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
loc_827FB5C4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// srawi r11,r11,8
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFF) != 0);
	r11.s64 = r11.s32 >> 8;
	// cmpw cr6,r11,r17
	cr6.compare<int32_t>(r11.s32, r17.s32, xer);
	// bge cr6,0x827fb5fc
	if (!cr6.lt) goto loc_827FB5FC;
	// mullw r11,r11,r24
	r11.s64 = int64_t(r11.s32) * int64_t(r24.s32);
	// mtctr r26
	ctr.u64 = r26.u64;
	// add r4,r11,r27
	ctx.r4.u64 = r11.u64 + r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r31,r31,r25
	r31.u64 = r31.u64 + r25.u64;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// blt cr6,0x827fb5c4
	if (cr6.lt) goto loc_827FB5C4;
loc_827FB5FC:
	// add r28,r15,r27
	r28.u64 = r15.u64 + r27.u64;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// bge cr6,0x827fb628
	if (!cr6.lt) goto loc_827FB628;
	// subf r30,r30,r29
	r30.s64 = r29.s64 - r30.s64;
loc_827FB60C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r31,r31,r25
	r31.u64 = r31.u64 + r25.u64;
	// bne 0x827fb60c
	if (!cr0.eq) goto loc_827FB60C;
loc_827FB628:
	// add. r20,r20,r18
	r20.u64 = r20.u64 + r18.u64;
	cr0.compare<int32_t>(r20.s32, 0, xer);
	// add r22,r22,r14
	r22.u64 = r22.u64 + r14.u64;
	// ble 0x827fb63c
	if (!cr0.gt) goto loc_827FB63C;
	// subf r20,r21,r20
	r20.s64 = r20.s64 - r21.s64;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
loc_827FB63C:
	// lwz r11,300(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// addic. r16,r16,-1
	xer.ca = r16.u32 > 0;
	r16.s64 = r16.s64 + -1;
	cr0.compare<int32_t>(r16.s32, 0, xer);
	// add r23,r23,r11
	r23.u64 = r23.u64 + r11.u64;
	// bne 0x827fb53c
	if (!cr0.eq) goto loc_827FB53C;
loc_827FB64C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_827FB658"))) PPC_WEAK_FUNC(sub_827FB658);
PPC_FUNC_IMPL(__imp__sub_827FB658) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_827FB65C"))) PPC_WEAK_FUNC(sub_827FB65C);
PPC_FUNC_IMPL(__imp__sub_827FB65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FB660"))) PPC_WEAK_FUNC(sub_827FB660);
PPC_FUNC_IMPL(__imp__sub_827FB660) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// stw r6,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r8,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r8.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r10,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r10.u32);
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// bl 0x827fc2e8
	sub_827FC2E8(ctx, base);
	// rlwinm r10,r31,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r11,r31,8,0,23
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xFFFFFF00;
	// divw r10,r10,r26
	ctx.r10.s32 = ctx.r10.s32 / r26.s32;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// divw r7,r9,r26
	ctx.r7.s32 = ctx.r9.s32 / r26.s32;
	// divw r8,r9,r26
	ctx.r8.s32 = ctx.r9.s32 / r26.s32;
	// mullw r6,r7,r26
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(r26.s32);
	// subf. r11,r6,r9
	r11.s64 = ctx.r9.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// bgt 0x827fb6e8
	if (cr0.gt) goto loc_827FB6E8;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_827FB6E8:
	// subf r9,r26,r9
	ctx.r9.s64 = ctx.r9.s64 - r26.s64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x827fb720
	if (!cr6.gt) goto loc_827FB720;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// mtctr r26
	ctr.u64 = r26.u64;
loc_827FB700:
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// add. r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// ble 0x827fb718
	if (!cr0.gt) goto loc_827FB718;
	// subf r9,r26,r9
	ctx.r9.s64 = ctx.r9.s64 - r26.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_827FB718:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x827fb700
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FB700;
loc_827FB720:
	// rlwinm r11,r27,7,0,24
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r27,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 8) & 0xFFFFFF00;
	// divw r11,r11,r17
	r11.s32 = r11.s32 / r17.s32;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r8,r10,r17
	ctx.r8.s32 = ctx.r10.s32 / r17.s32;
	// divw r9,r10,r17
	ctx.r9.s32 = ctx.r10.s32 / r17.s32;
	// mullw r7,r8,r17
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(r17.s32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// subf. r14,r7,r10
	r14.s64 = ctx.r10.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(r14.s32, 0, xer);
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// bgt 0x827fb760
	if (cr0.gt) goto loc_827FB760;
	// add r10,r14,r17
	ctx.r10.u64 = r14.u64 + r17.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mr r14,r10
	r14.u64 = ctx.r10.u64;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
loc_827FB760:
	// subf r15,r17,r10
	r15.s64 = ctx.r10.s64 - r17.s64;
	// mr r19,r30
	r19.u64 = r30.u64;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// ble cr6,0x827fb918
	if (!cr6.gt) goto loc_827FB918;
	// lwz r22,380(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// addi r16,r31,-1
	r16.s64 = r31.s64 + -1;
	// lwz r24,388(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// addi r21,r11,-128
	r21.s64 = r11.s64 + -128;
	// lwz r20,372(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mullw r18,r16,r22
	r18.s64 = int64_t(r16.s32) * int64_t(r22.s32);
	// stw r17,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r17.u32);
	// b 0x827fb798
	goto loc_827FB798;
loc_827FB790:
	// lwz r27,364(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r29,348(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
loc_827FB798:
	// srawi. r11,r21,8
	xer.ca = (r21.s32 < 0) & ((r21.u32 & 0xFF) != 0);
	r11.s64 = r21.s32 >> 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// clrlwi r25,r21,24
	r25.u64 = r21.u32 & 0xFF;
	// bge 0x827fb7ac
	if (!cr0.lt) goto loc_827FB7AC;
	// mr r28,r29
	r28.u64 = r29.u64;
	// b 0x827fb7b4
	goto loc_827FB7B4;
loc_827FB7AC:
	// mullw r10,r11,r20
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(r20.s32);
	// add r28,r10,r29
	r28.u64 = ctx.r10.u64 + r29.u64;
loc_827FB7B4:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// blt cr6,0x827fb7c4
	if (cr6.lt) goto loc_827FB7C4;
	// addi r11,r27,-1
	r11.s64 = r27.s64 + -1;
loc_827FB7C4:
	// mullw r11,r11,r20
	r11.s64 = int64_t(r11.s32) * int64_t(r20.s32);
	// add r29,r11,r29
	r29.u64 = r11.u64 + r29.u64;
	// mr r31,r19
	r31.u64 = r19.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x827fb828
	if (!cr6.gt) goto loc_827FB828;
	// lwz r27,88(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_827FB7E0:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x827fb828
	if (!cr6.lt) goto loc_827FB828;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mtctr r24
	ctr.u64 = r24.u64;
	// clrlwi r8,r11,24
	ctx.r8.u64 = r11.u32 & 0xFF;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r31,r31,r23
	r31.u64 = r31.u64 + r23.u64;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(r30.s32, r26.s32, xer);
	// blt cr6,0x827fb7e0
	if (cr6.lt) goto loc_827FB7E0;
loc_827FB828:
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(r30.s32, r26.s32, xer);
	// bge cr6,0x827fb890
	if (!cr6.lt) goto loc_827FB890;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r10
	r27.u64 = r11.u64 + ctx.r10.u64;
loc_827FB83C:
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// srawi r11,r8,8
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	r11.s64 = ctx.r8.s32 >> 8;
	// cmpw cr6,r11,r16
	cr6.compare<int32_t>(r11.s32, r16.s32, xer);
	// bge cr6,0x827fb890
	if (!cr6.lt) goto loc_827FB890;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// mtctr r24
	ctr.u64 = r24.u64;
	// mullw r11,r11,r22
	r11.s64 = int64_t(r11.s32) * int64_t(r22.s32);
	// mullw r10,r10,r22
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r22.s32);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// add r7,r10,r29
	ctx.r7.u64 = ctx.r10.u64 + r29.u64;
	// add r6,r11,r29
	ctx.r6.u64 = r11.u64 + r29.u64;
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + r28.u64;
	// add r4,r11,r28
	ctx.r4.u64 = r11.u64 + r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r31,r31,r23
	r31.u64 = r31.u64 + r23.u64;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(r30.s32, r26.s32, xer);
	// blt cr6,0x827fb83c
	if (cr6.lt) goto loc_827FB83C;
loc_827FB890:
	// add r28,r18,r28
	r28.u64 = r18.u64 + r28.u64;
	// add r27,r18,r29
	r27.u64 = r18.u64 + r29.u64;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(r30.s32, r26.s32, xer);
	// bge cr6,0x827fb8e8
	if (!cr6.lt) goto loc_827FB8E8;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r30,r26
	r30.s64 = r26.s64 - r30.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r29,r11,-4
	r29.s64 = r11.s64 + -4;
loc_827FB8B4:
	// lwzu r11,4(r29)
	ea = 4 + r29.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	r29.u32 = ea;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mtctr r24
	ctr.u64 = r24.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// clrlwi r8,r11,24
	ctx.r8.u64 = r11.u32 & 0xFF;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r31,r31,r23
	r31.u64 = r31.u64 + r23.u64;
	// bne 0x827fb8b4
	if (!cr0.eq) goto loc_827FB8B4;
loc_827FB8E8:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add. r15,r15,r14
	r15.u64 = r15.u64 + r14.u64;
	cr0.compare<int32_t>(r15.s32, 0, xer);
	// add r21,r21,r11
	r21.u64 = r21.u64 + r11.u64;
	// ble 0x827fb900
	if (!cr0.gt) goto loc_827FB900;
	// subf r15,r17,r15
	r15.s64 = r15.s64 - r17.s64;
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
loc_827FB900:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// add r19,r19,r10
	r19.u64 = r19.u64 + ctx.r10.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bne 0x827fb790
	if (!cr0.eq) goto loc_827FB790;
loc_827FB918:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_827FB924"))) PPC_WEAK_FUNC(sub_827FB924);
PPC_FUNC_IMPL(__imp__sub_827FB924) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_827FB928"))) PPC_WEAK_FUNC(sub_827FB928);
PPC_FUNC_IMPL(__imp__sub_827FB928) {
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
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x828ebf90
	sub_828EBF90(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// fctidz f13,f0
	ctx.f13.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// rlwinm r30,r9,8,0,23
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// subfic r7,r8,1
	xer.ca = ctx.r8.u32 <= 1;
	ctx.r7.s64 = 1 - ctx.r8.s64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// ble cr6,0x827fb990
	if (!cr6.gt) goto loc_827FB990;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x827fc268
	sub_827FC268(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
loc_827FB990:
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

__attribute__((alias("__imp__sub_827FB9A4"))) PPC_WEAK_FUNC(sub_827FB9A4);
PPC_FUNC_IMPL(__imp__sub_827FB9A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FB9A8"))) PPC_WEAK_FUNC(sub_827FB9A8);
PPC_FUNC_IMPL(__imp__sub_827FB9A8) {
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
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x827fbae4
	if (!cr6.gt) goto loc_827FBAE4;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x827fbae4
	if (!cr6.gt) goto loc_827FBAE4;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x827fbae4
	if (!cr6.gt) goto loc_827FBAE4;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x827fbae4
	if (!cr6.gt) goto loc_827FBAE4;
	// lwz r11,212(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x827fbae4
	if (cr6.gt) goto loc_827FBAE4;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x827fba38
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827FBA38;
	// bdzf 4*cr6+eq,0x827fba78
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827FBA78;
	// bne cr6,0x827fbab8
	if (!cr6.eq) goto loc_827FBAB8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r11,-32128
	r11.s64 = -2105540608;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r11,r11,-25240
	r11.s64 = r11.s64 + -25240;
	// li r31,3
	r31.s64 = 3;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x827fb418
	sub_827FB418(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827FBA38:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r11,-32128
	r11.s64 = -2105540608;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r11,r11,-25208
	r11.s64 = r11.s64 + -25208;
	// li r31,4
	r31.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x827fb418
	sub_827FB418(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827FBA78:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// lis r11,-32128
	r11.s64 = -2105540608;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// addi r11,r11,-25168
	r11.s64 = r11.s64 + -25168;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x827fb418
	sub_827FB418(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827FBAB8:
	// lis r11,-32128
	r11.s64 = -2105540608;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-25256
	r11.s64 = r11.s64 + -25256;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x827fb418
	sub_827FB418(ctx, base);
loc_827FBAE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827FBAF4"))) PPC_WEAK_FUNC(sub_827FBAF4);
PPC_FUNC_IMPL(__imp__sub_827FBAF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FBAF8"))) PPC_WEAK_FUNC(sub_827FBAF8);
PPC_FUNC_IMPL(__imp__sub_827FBAF8) {
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
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x827fbc34
	if (!cr6.gt) goto loc_827FBC34;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x827fbc34
	if (!cr6.gt) goto loc_827FBC34;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x827fbc34
	if (!cr6.gt) goto loc_827FBC34;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x827fbc34
	if (!cr6.gt) goto loc_827FBC34;
	// lwz r11,212(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x827fbc34
	if (cr6.gt) goto loc_827FBC34;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x827fbb88
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827FBB88;
	// bdzf 4*cr6+eq,0x827fbbc8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827FBBC8;
	// bne cr6,0x827fbc08
	if (!cr6.eq) goto loc_827FBC08;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r11,-32128
	r11.s64 = -2105540608;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r11,r11,-24832
	r11.s64 = r11.s64 + -24832;
	// li r31,3
	r31.s64 = 3;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x827fb660
	sub_827FB660(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827FBB88:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r11,-32128
	r11.s64 = -2105540608;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r11,r11,-25128
	r11.s64 = r11.s64 + -25128;
	// li r31,4
	r31.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x827fb660
	sub_827FB660(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827FBBC8:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// lis r11,-32128
	r11.s64 = -2105540608;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// addi r11,r11,-24600
	r11.s64 = r11.s64 + -24600;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x827fb660
	sub_827FB660(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827FBC08:
	// lis r11,-32128
	r11.s64 = -2105540608;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-24360
	r11.s64 = r11.s64 + -24360;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x827fb660
	sub_827FB660(ctx, base);
loc_827FBC34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827FBC44"))) PPC_WEAK_FUNC(sub_827FBC44);
PPC_FUNC_IMPL(__imp__sub_827FBC44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FBC48"))) PPC_WEAK_FUNC(sub_827FBC48);
PPC_FUNC_IMPL(__imp__sub_827FBC48) {
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
	// rlwinm r10,r5,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r11,r5,8,0,23
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// divw r28,r10,r4
	r28.s32 = ctx.r10.s32 / ctx.r4.s32;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// subf r9,r28,r11
	ctx.r9.s64 = r11.s64 - r28.s64;
	// divw r8,r9,r4
	ctx.r8.s32 = ctx.r9.s32 / ctx.r4.s32;
	// divw r27,r9,r4
	r27.s32 = ctx.r9.s32 / ctx.r4.s32;
	// mullw r7,r8,r4
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// subf. r29,r7,r9
	r29.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// bgt 0x827fbc94
	if (cr0.gt) goto loc_827FBC94;
	// add r11,r29,r4
	r11.u64 = r29.u64 + ctx.r4.u64;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_827FBC94:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// subf r30,r31,r11
	r30.s64 = r11.s64 - r31.s64;
	// bl 0x827fc2e8
	sub_827FC2E8(ctx, base);
	// stw r31,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r31.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x827fbce4
	if (!cr6.gt) goto loc_827FBCE4;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r31
	ctr.u64 = r31.u64;
	// addi r11,r28,-128
	r11.s64 = r28.s64 + -128;
loc_827FBCC0:
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// add. r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r11.u32);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// ble 0x827fbcdc
	if (!cr0.gt) goto loc_827FBCDC;
	// subf r30,r31,r30
	r30.s64 = r30.s64 - r31.s64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_827FBCDC:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x827fbcc0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FBCC0;
loc_827FBCE4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_827FBCE8"))) PPC_WEAK_FUNC(sub_827FBCE8);
PPC_FUNC_IMPL(__imp__sub_827FBCE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_827FBCEC"))) PPC_WEAK_FUNC(sub_827FBCEC);
PPC_FUNC_IMPL(__imp__sub_827FBCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FBCF0"))) PPC_WEAK_FUNC(sub_827FBCF0);
PPC_FUNC_IMPL(__imp__sub_827FBCF0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f0
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mullw r10,r4,r9
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x82829d38
	sub_82829D38(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r18,96(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r28,r18
	r28.u64 = r18.u64;
	// bl 0x827fbc48
	sub_827FBC48(ctx, base);
	// lwz r22,324(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x827fbdb4
	if (!cr6.gt) goto loc_827FBDB4;
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r21,80(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r27,r31
	r27.u64 = r31.u64;
	// add r23,r31,r11
	r23.u64 = r31.u64 + r11.u64;
loc_827FBD84:
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827fa360
	sub_827FA360(ctx, base);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// add r29,r29,r24
	r29.u64 = r29.u64 + r24.u64;
	// addi r28,r28,3
	r28.s64 = r28.s64 + 3;
	// bne 0x827fbd84
	if (!cr0.eq) goto loc_827FBD84;
loc_827FBDB4:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r18
	r29.u64 = r18.u64;
	// bl 0x827fbc48
	sub_827FBC48(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// lwz r27,80(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ble cr6,0x827fbe0c
	if (!cr6.gt) goto loc_827FBE0C;
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r31,r11
	r28.u64 = r31.u64 + r11.u64;
loc_827FBDDC:
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827fa360
	sub_827FA360(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r29,r28,r29
	r29.u64 = r28.u64 + r29.u64;
	// addi r25,r25,3
	r25.s64 = r25.s64 + 3;
	// bne 0x827fbddc
	if (!cr0.eq) goto loc_827FBDDC;
loc_827FBE0C:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_827FBE20"))) PPC_WEAK_FUNC(sub_827FBE20);
PPC_FUNC_IMPL(__imp__sub_827FBE20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_827FBE24"))) PPC_WEAK_FUNC(sub_827FBE24);
PPC_FUNC_IMPL(__imp__sub_827FBE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FBE28"))) PPC_WEAK_FUNC(sub_827FBE28);
PPC_FUNC_IMPL(__imp__sub_827FBE28) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f0
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mullw r10,r4,r9
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// bl 0x82829d38
	sub_82829D38(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r18,96(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r30,r18
	r30.u64 = r18.u64;
	// bl 0x827fbc48
	sub_827FBC48(ctx, base);
	// lwz r23,324(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x827fbee4
	if (!cr6.gt) goto loc_827FBEE4;
	// lwz r21,80(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r22,r27,2,0,29
	r22.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r27
	r28.u64 = r27.u64;
loc_827FBEB4:
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827fa7c8
	sub_827FA7C8(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// add r31,r31,r24
	r31.u64 = r31.u64 + r24.u64;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x827fbeb4
	if (!cr0.eq) goto loc_827FBEB4;
loc_827FBEE4:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r18
	r31.u64 = r18.u64;
	// bl 0x827fbc48
	sub_827FBC48(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ble cr6,0x827fbf38
	if (!cr6.gt) goto loc_827FBF38;
	// rlwinm r30,r27,2,0,29
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_827FBF08:
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827fa7c8
	sub_827FA7C8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// bne 0x827fbf08
	if (!cr0.eq) goto loc_827FBF08;
loc_827FBF38:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_827FBF4C"))) PPC_WEAK_FUNC(sub_827FBF4C);
PPC_FUNC_IMPL(__imp__sub_827FBF4C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_827FBF50"))) PPC_WEAK_FUNC(sub_827FBF50);
PPC_FUNC_IMPL(__imp__sub_827FBF50) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f0
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mullw r10,r4,r9
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x82829d38
	sub_82829D38(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r18,96(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r28,r18
	r28.u64 = r18.u64;
	// bl 0x827fbc48
	sub_827FBC48(ctx, base);
	// lwz r22,324(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x827fc014
	if (!cr6.gt) goto loc_827FC014;
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r21,80(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r27,r31
	r27.u64 = r31.u64;
	// add r23,r31,r11
	r23.u64 = r31.u64 + r11.u64;
loc_827FBFE4:
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827fa360
	sub_827FA360(ctx, base);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// add r29,r29,r24
	r29.u64 = r29.u64 + r24.u64;
	// addi r28,r28,3
	r28.s64 = r28.s64 + 3;
	// bne 0x827fbfe4
	if (!cr0.eq) goto loc_827FBFE4;
loc_827FC014:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r18
	r29.u64 = r18.u64;
	// bl 0x827fbc48
	sub_827FBC48(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// lwz r27,80(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ble cr6,0x827fc06c
	if (!cr6.gt) goto loc_827FC06C;
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r31,r11
	r28.u64 = r31.u64 + r11.u64;
loc_827FC03C:
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827face0
	sub_827FACE0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r29,r28,r29
	r29.u64 = r28.u64 + r29.u64;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// bne 0x827fc03c
	if (!cr0.eq) goto loc_827FC03C;
loc_827FC06C:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_827FC080"))) PPC_WEAK_FUNC(sub_827FC080);
PPC_FUNC_IMPL(__imp__sub_827FC080) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_827FC084"))) PPC_WEAK_FUNC(sub_827FC084);
PPC_FUNC_IMPL(__imp__sub_827FC084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FC088"))) PPC_WEAK_FUNC(sub_827FC088);
PPC_FUNC_IMPL(__imp__sub_827FC088) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// bl 0x82829d38
	sub_82829D38(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r19,96(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r29,r19
	r29.u64 = r19.u64;
	// bl 0x827fbc48
	sub_827FBC48(ctx, base);
	// lwz r23,308(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x827fc13c
	if (!cr6.gt) goto loc_827FC13C;
	// lwz r22,80(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r27,r31
	r27.u64 = r31.u64;
loc_827FC10C:
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827fb158
	sub_827FB158(ctx, base);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// add r30,r30,r24
	r30.u64 = r30.u64 + r24.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bne 0x827fc10c
	if (!cr0.eq) goto loc_827FC10C;
loc_827FC13C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r19
	r30.u64 = r19.u64;
	// bl 0x827fbc48
	sub_827FBC48(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ble cr6,0x827fc18c
	if (!cr6.gt) goto loc_827FC18C;
loc_827FC15C:
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827fb158
	sub_827FB158(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// add r30,r30,r31
	r30.u64 = r30.u64 + r31.u64;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// bne 0x827fc15c
	if (!cr0.eq) goto loc_827FC15C;
loc_827FC18C:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_827FC1A0"))) PPC_WEAK_FUNC(sub_827FC1A0);
PPC_FUNC_IMPL(__imp__sub_827FC1A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_827FC1A4"))) PPC_WEAK_FUNC(sub_827FC1A4);
PPC_FUNC_IMPL(__imp__sub_827FC1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FC1A8"))) PPC_WEAK_FUNC(sub_827FC1A8);
PPC_FUNC_IMPL(__imp__sub_827FC1A8) {
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
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x827fc254
	if (!cr6.gt) goto loc_827FC254;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x827fc254
	if (!cr6.gt) goto loc_827FC254;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x827fc254
	if (!cr6.gt) goto loc_827FC254;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x827fc254
	if (!cr6.gt) goto loc_827FC254;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x827fc254
	if (cr6.gt) goto loc_827FC254;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x827fc210
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827FC210;
	// bdzf 4*cr6+eq,0x827fc22c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827FC22C;
	// bne cr6,0x827fc248
	if (!cr6.eq) goto loc_827FC248;
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x827fbcf0
	sub_827FBCF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_827FC210:
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x827fbe28
	sub_827FBE28(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_827FC22C:
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x827fbf50
	sub_827FBF50(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_827FC248:
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x827fc088
	sub_827FC088(ctx, base);
loc_827FC254:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_827FC260"))) PPC_WEAK_FUNC(sub_827FC260);
PPC_FUNC_IMPL(__imp__sub_827FC260) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FC264"))) PPC_WEAK_FUNC(sub_827FC264);
PPC_FUNC_IMPL(__imp__sub_827FC264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FC268"))) PPC_WEAK_FUNC(sub_827FC268);
PPC_FUNC_IMPL(__imp__sub_827FC268) {
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
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x827fc2d8
	if (!cr6.gt) goto loc_827FC2D8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// add. r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// beq 0x827fc2d0
	if (cr0.eq) goto loc_827FC2D0;
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,27508(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27508);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_827FC2D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_827FC2D8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827FC2E4"))) PPC_WEAK_FUNC(sub_827FC2E4);
PPC_FUNC_IMPL(__imp__sub_827FC2E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827FC2E8"))) PPC_WEAK_FUNC(sub_827FC2E8);
PPC_FUNC_IMPL(__imp__sub_827FC2E8) {
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
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x827fc358
	if (!cr6.gt) goto loc_827FC358;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// add. r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// beq 0x827fc350
	if (cr0.eq) goto loc_827FC350;
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,27508(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27508);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_827FC350:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_827FC358:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827FC364"))) PPC_WEAK_FUNC(sub_827FC364);
PPC_FUNC_IMPL(__imp__sub_827FC364) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827FC368"))) PPC_WEAK_FUNC(sub_827FC368);
PPC_FUNC_IMPL(__imp__sub_827FC368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fc428
	if (cr6.eq) goto loc_827FC428;
	// rlwinm r11,r3,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// clrlwi r11,r3,30
	r11.u64 = ctx.r3.u32 & 0x3;
	// beq cr6,0x827fc3d8
	if (cr6.eq) goto loc_827FC3D8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x827fc398
	if (!cr6.eq) goto loc_827FC398;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r10,r11,12852
	ctx.r10.s64 = r11.s64 + 12852;
	// lwz r3,28(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// blr 
	return;
loc_827FC398:
	// rlwinm r11,r3,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827fc3b4
	if (cr6.eq) goto loc_827FC3B4;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r10,r11,12852
	ctx.r10.s64 = r11.s64 + 12852;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// blr 
	return;
loc_827FC3B4:
	// clrlwi r11,r3,31
	r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r10,r11,12852
	ctx.r10.s64 = r11.s64 + 12852;
	// beq cr6,0x827fc3d0
	if (cr6.eq) goto loc_827FC3D0;
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// blr 
	return;
loc_827FC3D0:
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// blr 
	return;
loc_827FC3D8:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x827fc3f0
	if (!cr6.eq) goto loc_827FC3F0;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r10,r11,12852
	ctx.r10.s64 = r11.s64 + 12852;
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// blr 
	return;
loc_827FC3F0:
	// rlwinm r11,r3,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827fc40c
	if (cr6.eq) goto loc_827FC40C;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r10,r11,12852
	ctx.r10.s64 = r11.s64 + 12852;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// blr 
	return;
loc_827FC40C:
	// clrlwi r11,r3,31
	r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827fc428
	if (cr6.eq) goto loc_827FC428;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r10,r11,12852
	ctx.r10.s64 = r11.s64 + 12852;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// blr 
	return;
loc_827FC428:
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r3,12852(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12852);
}

__attribute__((alias("__imp__sub_827FC430"))) PPC_WEAK_FUNC(sub_827FC430);
PPC_FUNC_IMPL(__imp__sub_827FC430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FC434"))) PPC_WEAK_FUNC(sub_827FC434);
PPC_FUNC_IMPL(__imp__sub_827FC434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FC438"))) PPC_WEAK_FUNC(sub_827FC438);
PPC_FUNC_IMPL(__imp__sub_827FC438) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,19
	cr6.compare<int32_t>(ctx.r4.s32, 19, xer);
	// bne cr6,0x827fc47c
	if (!cr6.eq) goto loc_827FC47C;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827fc464
	if (cr6.eq) goto loc_827FC464;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_827FC464:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827FC47C:
	// cmpwi cr6,r4,21
	cr6.compare<int32_t>(ctx.r4.s32, 21, xer);
	// bne cr6,0x827fc4ac
	if (!cr6.eq) goto loc_827FC4AC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827fc494
	if (cr6.eq) goto loc_827FC494;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_827FC494:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827FC4AC:
	// cmpwi cr6,r4,20
	cr6.compare<int32_t>(ctx.r4.s32, 20, xer);
	// bne cr6,0x827fc4dc
	if (!cr6.eq) goto loc_827FC4DC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827fc4c4
	if (cr6.eq) goto loc_827FC4C4;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_827FC4C4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827FC4DC:
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bne cr6,0x827fc50c
	if (!cr6.eq) goto loc_827FC50C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827fc4f4
	if (cr6.eq) goto loc_827FC4F4;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_827FC4F4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827FC50C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
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

__attribute__((alias("__imp__sub_827FC530"))) PPC_WEAK_FUNC(sub_827FC530);
PPC_FUNC_IMPL(__imp__sub_827FC530) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FC534"))) PPC_WEAK_FUNC(sub_827FC534);
PPC_FUNC_IMPL(__imp__sub_827FC534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FC538"))) PPC_WEAK_FUNC(sub_827FC538);
PPC_FUNC_IMPL(__imp__sub_827FC538) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// li r27,0
	r27.s64 = 0;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x827fc58c
	if (cr6.eq) goto loc_827FC58C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827fc578
	if (cr6.eq) goto loc_827FC578;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_827FC578:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fc588
	if (cr6.eq) goto loc_827FC588;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827FC588:
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
loc_827FC58C:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x827fc5c0
	if (cr6.eq) goto loc_827FC5C0;
	// li r27,1
	r27.s64 = 1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827fc5ac
	if (cr6.eq) goto loc_827FC5AC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_827FC5AC:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fc5bc
	if (cr6.eq) goto loc_827FC5BC;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827FC5BC:
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
loc_827FC5C0:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x827fc5f8
	if (cr6.eq) goto loc_827FC5F8;
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// ori r27,r11,2
	r27.u64 = r11.u64 | 2;
	// beq cr6,0x827fc5e4
	if (cr6.eq) goto loc_827FC5E4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_827FC5E4:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fc5f4
	if (cr6.eq) goto loc_827FC5F4;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827FC5F4:
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
loc_827FC5F8:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// beq cr6,0x827fc63c
	if (cr6.eq) goto loc_827FC63C;
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// ori r30,r11,3
	r30.u64 = r11.u64 | 3;
	// beq cr6,0x827fc61c
	if (cr6.eq) goto loc_827FC61C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_827FC61C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fc62c
	if (cr6.eq) goto loc_827FC62C;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827FC62C:
	// stw r26,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r26.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_827FC63C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_827FC644"))) PPC_WEAK_FUNC(sub_827FC644);
PPC_FUNC_IMPL(__imp__sub_827FC644) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_827FC648"))) PPC_WEAK_FUNC(sub_827FC648);
PPC_FUNC_IMPL(__imp__sub_827FC648) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fc718
	if (cr6.eq) goto loc_827FC718;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,17492
	ctx.r4.s64 = r11.s64 + 17492;
	// bl 0x82763090
	sub_82763090(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x827fc6b4
	if (!cr6.gt) goto loc_827FC6B4;
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
loc_827FC688:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
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
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(r31.s32, ctx.r9.s32, xer);
	// blt cr6,0x827fc688
	if (cr6.lt) goto loc_827FC688;
loc_827FC6B4:
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,992
	ctx.r4.s64 = r11.s64 + 992;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r3,r6,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
loc_827FC6EC:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r9,0,r5
	reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r5
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x827fc6ec
	if (!cr0.eq) goto loc_827FC6EC;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addic. r4,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r4.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x827fc718
	if (!cr0.eq) goto loc_827FC718;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827FC718:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827FC71C"))) PPC_WEAK_FUNC(sub_827FC71C);
PPC_FUNC_IMPL(__imp__sub_827FC71C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827FC720"))) PPC_WEAK_FUNC(sub_827FC720);
PPC_FUNC_IMPL(__imp__sub_827FC720) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fc7ac
	if (cr6.eq) goto loc_827FC7AC;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,27508(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 27508);
	// bl 0x82760cf8
	sub_82760CF8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827fc798
	if (!cr6.eq) goto loc_827FC798;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,13435
	r11.s64 = r11.s64 + 13435;
loc_827FC798:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827fc648
	sub_827FC648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82760d20
	sub_82760D20(ctx, base);
loc_827FC7AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_827FC7B0"))) PPC_WEAK_FUNC(sub_827FC7B0);
PPC_FUNC_IMPL(__imp__sub_827FC7B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827FC7B4"))) PPC_WEAK_FUNC(sub_827FC7B4);
PPC_FUNC_IMPL(__imp__sub_827FC7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FC7B8"))) PPC_WEAK_FUNC(sub_827FC7B8);
PPC_FUNC_IMPL(__imp__sub_827FC7B8) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fc874
	if (cr6.eq) goto loc_827FC874;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,27508(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 27508);
	// bl 0x82760cf8
	sub_82760CF8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827fc368
	sub_827FC368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827fc860
	if (!cr6.eq) goto loc_827FC860;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,13435
	r11.s64 = r11.s64 + 13435;
loc_827FC860:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827fc648
	sub_827FC648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82760d20
	sub_82760D20(ctx, base);
loc_827FC874:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_827FC878"))) PPC_WEAK_FUNC(sub_827FC878);
PPC_FUNC_IMPL(__imp__sub_827FC878) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_827FC87C"))) PPC_WEAK_FUNC(sub_827FC87C);
PPC_FUNC_IMPL(__imp__sub_827FC87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FC880"))) PPC_WEAK_FUNC(sub_827FC880);
PPC_FUNC_IMPL(__imp__sub_827FC880) {
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
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fc97c
	if (cr6.eq) goto loc_827FC97C;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,27508(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 27508);
	// bl 0x82760cf8
	sub_82760CF8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827fc368
	sub_827FC368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lwz r3,260(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// bl 0x827fc368
	sub_827FC368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827fc968
	if (!cr6.eq) goto loc_827FC968;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,13435
	r11.s64 = r11.s64 + 13435;
loc_827FC968:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x827fc648
	sub_827FC648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82760d20
	sub_82760D20(ctx, base);
loc_827FC97C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_827FC980"))) PPC_WEAK_FUNC(sub_827FC980);
PPC_FUNC_IMPL(__imp__sub_827FC980) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_827FC984"))) PPC_WEAK_FUNC(sub_827FC984);
PPC_FUNC_IMPL(__imp__sub_827FC984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FC988"))) PPC_WEAK_FUNC(sub_827FC988);
PPC_FUNC_IMPL(__imp__sub_827FC988) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fca58
	if (cr6.eq) goto loc_827FCA58;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,27508(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 27508);
	// bl 0x82760cf8
	sub_82760CF8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827fc368
	sub_827FC368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827fca44
	if (!cr6.eq) goto loc_827FCA44;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,13435
	r11.s64 = r11.s64 + 13435;
loc_827FCA44:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827fc648
	sub_827FC648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82760d20
	sub_82760D20(ctx, base);
loc_827FCA58:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_827FCA5C"))) PPC_WEAK_FUNC(sub_827FCA5C);
PPC_FUNC_IMPL(__imp__sub_827FCA5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_827FCA60"))) PPC_WEAK_FUNC(sub_827FCA60);
PPC_FUNC_IMPL(__imp__sub_827FCA60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
}

__attribute__((alias("__imp__sub_827FCA74"))) PPC_WEAK_FUNC(sub_827FCA74);
PPC_FUNC_IMPL(__imp__sub_827FCA74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FCA78"))) PPC_WEAK_FUNC(sub_827FCA78);
PPC_FUNC_IMPL(__imp__sub_827FCA78) {
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
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x827fcaa0
	if (cr6.eq) goto loc_827FCAA0;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x827fe2e8
	sub_827FE2E8(ctx, base);
loc_827FCAA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_827FCAAC"))) PPC_WEAK_FUNC(sub_827FCAAC);
PPC_FUNC_IMPL(__imp__sub_827FCAAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FCAB0"))) PPC_WEAK_FUNC(sub_827FCAB0);
PPC_FUNC_IMPL(__imp__sub_827FCAB0) {
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
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x827fe598
	sub_827FE598(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bl 0x827e87a8
	sub_827E87A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827fcb44
	if (!cr6.eq) goto loc_827FCB44;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
loc_827FCB00:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// stw r31,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r31.u32);
	// bl 0x82809cc0
	sub_82809CC0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x827e87a8
	sub_827E87A8(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x827fcb00
	if (cr6.eq) goto loc_827FCB00;
loc_827FCB44:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827d3668
	sub_827D3668(ctx, base);
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

__attribute__((alias("__imp__sub_827FCB60"))) PPC_WEAK_FUNC(sub_827FCB60);
PPC_FUNC_IMPL(__imp__sub_827FCB60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FCB64"))) PPC_WEAK_FUNC(sub_827FCB64);
PPC_FUNC_IMPL(__imp__sub_827FCB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FCB68"))) PPC_WEAK_FUNC(sub_827FCB68);
PPC_FUNC_IMPL(__imp__sub_827FCB68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-1424(r1)
	ea = -1424 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// stw r4,1452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1452, ctx.r4.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,1328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1328, ctx.r10.u32);
	// beq cr6,0x827fd05c
	if (cr6.eq) goto loc_827FD05C;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x827fcbe8
	if (!cr6.eq) goto loc_827FCBE8;
	// bl 0x827fc368
	sub_827FC368(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r9,1024
	ctx.r9.s64 = 1024;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r11.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,17900
	ctx.r4.s64 = ctx.r8.s64 + 17900;
	// addi r5,r1,1452
	ctx.r5.s64 = ctx.r1.s64 + 1452;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827fea08
	sub_827FEA08(ctx, base);
	// b 0x827fd050
	goto loc_827FD050;
loc_827FCBE8:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x827fcc2c
	if (!cr6.eq) goto loc_827FCC2C;
	// bl 0x827fc368
	sub_827FC368(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r9,1024
	ctx.r9.s64 = 1024;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,17852
	ctx.r4.s64 = ctx.r8.s64 + 17852;
	// addi r5,r1,1452
	ctx.r5.s64 = ctx.r1.s64 + 1452;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827fea08
	sub_827FEA08(ctx, base);
	// b 0x827fd050
	goto loc_827FD050;
loc_827FCC2C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x827fcc70
	if (!cr6.eq) goto loc_827FCC70;
	// bl 0x827fc368
	sub_827FC368(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r9,1024
	ctx.r9.s64 = 1024;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r11.u32);
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,17784
	ctx.r4.s64 = ctx.r8.s64 + 17784;
	// addi r5,r1,1452
	ctx.r5.s64 = ctx.r1.s64 + 1452;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827fea08
	sub_827FEA08(ctx, base);
	// b 0x827fd050
	goto loc_827FD050;
loc_827FCC70:
	// bl 0x827fc368
	sub_827FC368(ctx, base);
	// addi r11,r1,304
	r11.s64 = ctx.r1.s64 + 304;
	// li r26,2
	r26.s64 = 2;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r27,1024
	r27.s64 = 1024;
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, r11.u32);
	// stw r26,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r26.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r27,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,17740
	ctx.r4.s64 = ctx.r10.s64 + 17740;
	// addi r5,r1,1452
	ctx.r5.s64 = ctx.r1.s64 + 1452;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x827fea08
	sub_827FEA08(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827fc648
	sub_827FC648(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x827fd018
	if (cr6.eq) goto loc_827FD018;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x827fcd0c
	if (!cr6.eq) goto loc_827FCD0C;
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827fd018
	if (cr6.eq) goto loc_827FD018;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827fc368
	sub_827FC368(ctx, base);
	// addi r11,r1,304
	r11.s64 = ctx.r1.s64 + 304;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r26,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r26.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r11.u32);
	// addi r4,r10,17680
	ctx.r4.s64 = ctx.r10.s64 + 17680;
	// stw r27,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r27.u32);
	// addi r5,r1,1452
	ctx.r5.s64 = ctx.r1.s64 + 1452;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x827fea08
	sub_827FEA08(ctx, base);
	// b 0x827fd050
	goto loc_827FD050;
loc_827FCD0C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827fc368
	sub_827FC368(ctx, base);
	// addi r11,r1,304
	r11.s64 = ctx.r1.s64 + 304;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r26.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// addi r4,r10,17640
	ctx.r4.s64 = ctx.r10.s64 + 17640;
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r27.u32);
	// addi r5,r1,1452
	ctx.r5.s64 = ctx.r1.s64 + 1452;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827fea08
	sub_827FEA08(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827fc648
	sub_827FC648(ctx, base);
	// lwz r11,4(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// addi r24,r22,4
	r24.s64 = r22.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827fcfa0
	if (cr6.eq) goto loc_827FCFA0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827fcfa0
	if (cr6.eq) goto loc_827FCFA0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x827614d8
	sub_827614D8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x827fe598
	sub_827FE598(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x827e87a8
	sub_827E87A8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// li r30,-1
	r30.s64 = -1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x827fcf38
	if (!cr6.eq) goto loc_827FCF38;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// ld r11,96(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r23,r10,21212
	r23.s64 = ctx.r10.s64 + 21212;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,3696
	r29.s64 = r11.s64 + 3696;
loc_827FCDD8:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x827fe598
	sub_827FE598(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// bl 0x827e87a8
	sub_827E87A8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827fce18
	if (!cr6.eq) goto loc_827FCE18;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82761860
	sub_82761860(ctx, base);
loc_827FCE18:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r31,r11,16
	r31.s64 = r11.s64 + 16;
	// bl 0x82763090
	sub_82763090(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x827634d0
	sub_827634D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82763470
	sub_82763470(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82761ea0
	sub_82761EA0(ctx, base);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r3,r4,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_827FCE7C:
	// mfmsr r5
	// mtmsrd r13,1
	// lwarx r7,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r7.u64 = __builtin_bswap32(reserved.u32);
	// add r6,r30,r7
	ctx.r6.u64 = r30.u64 + ctx.r7.u64;
	// stwcx. r6,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r6.s32));
	cr0.so = xer.so;
	// mtmsrd r5,1
	// bne 0x827fce7c
	if (!cr0.eq) goto loc_827FCE7C;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// addic. r10,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r10.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x827fcea8
	if (!cr0.eq) goto loc_827FCEA8;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827FCEA8:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_827FCEB4:
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
	// bne 0x827fceb4
	if (!cr0.eq) goto loc_827FCEB4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r6,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x827fcee0
	if (!cr0.eq) goto loc_827FCEE0;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827FCEE0:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_827FCEEC:
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
	// bne 0x827fceec
	if (!cr0.eq) goto loc_827FCEEC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r6,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x827fcf18
	if (!cr0.eq) goto loc_827FCF18;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827FCF18:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82809cc0
	sub_82809CC0(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e87a8
	sub_827E87A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827fcdd8
	if (cr6.eq) goto loc_827FCDD8;
loc_827FCF38:
	// addi r11,r1,304
	r11.s64 = ctx.r1.s64 + 304;
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r26.u32);
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r27.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r11.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r10,17616
	ctx.r4.s64 = ctx.r10.s64 + 17616;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827feb18
	sub_827FEB18(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827fc648
	sub_827FC648(ctx, base);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r3,r6,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
loc_827FCF74:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r9,0,r5
	reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r30,r9
	ctx.r8.u64 = r30.u64 + ctx.r9.u64;
	// stwcx. r8,0,r5
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x827fcf74
	if (!cr0.eq) goto loc_827FCF74;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addic. r4,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r4.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x827fcfa0
	if (!cr0.eq) goto loc_827FCFA0;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827FCFA0:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x827fcfe4
	if (!cr6.eq) goto loc_827FCFE4;
	// bl 0x827fc368
	sub_827FC368(ctx, base);
	// addi r11,r1,304
	r11.s64 = ctx.r1.s64 + 304;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r26.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r11.u32);
	// addi r4,r10,17580
	ctx.r4.s64 = ctx.r10.s64 + 17580;
	// stw r27,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r27.u32);
	// addi r5,r1,1452
	ctx.r5.s64 = ctx.r1.s64 + 1452;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x827fea08
	sub_827FEA08(ctx, base);
	// b 0x827fd050
	goto loc_827FD050;
loc_827FCFE4:
	// bl 0x827fc368
	sub_827FC368(ctx, base);
	// addi r11,r1,304
	r11.s64 = ctx.r1.s64 + 304;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r26,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r26.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, r11.u32);
	// addi r4,r10,17540
	ctx.r4.s64 = ctx.r10.s64 + 17540;
	// stw r27,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, r27.u32);
	// addi r5,r1,1452
	ctx.r5.s64 = ctx.r1.s64 + 1452;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x827fea08
	sub_827FEA08(ctx, base);
	// b 0x827fd050
	goto loc_827FD050;
loc_827FD018:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827fc368
	sub_827FC368(ctx, base);
	// addi r11,r1,304
	r11.s64 = ctx.r1.s64 + 304;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r26,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r26.u32);
	// addi r7,r22,8
	ctx.r7.s64 = r22.s64 + 8;
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r11.u32);
	// addi r4,r10,17496
	ctx.r4.s64 = ctx.r10.s64 + 17496;
	// stw r27,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,1452
	ctx.r5.s64 = ctx.r1.s64 + 1452;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x827fea88
	sub_827FEA88(ctx, base);
loc_827FD050:
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827fc648
	sub_827FC648(ctx, base);
loc_827FD05C:
	// lwz r3,1328(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1328);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1424
	ctx.r1.s64 = ctx.r1.s64 + 1424;
}

__attribute__((alias("__imp__sub_827FD068"))) PPC_WEAK_FUNC(sub_827FD068);
PPC_FUNC_IMPL(__imp__sub_827FD068) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_827FD06C"))) PPC_WEAK_FUNC(sub_827FD06C);
PPC_FUNC_IMPL(__imp__sub_827FD06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FD070"))) PPC_WEAK_FUNC(sub_827FD070);
PPC_FUNC_IMPL(__imp__sub_827FD070) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,261
	r11.s64 = 261;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8274e290
	sub_8274E290(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fd0ac
	if (cr6.eq) goto loc_827FD0AC;
	// bl 0x82828538
	sub_82828538(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// b 0x827fd0b0
	goto loc_827FD0B0;
loc_827FD0AC:
	// mr r26,r28
	r26.u64 = r28.u64;
loc_827FD0B0:
	// li r11,2
	r11.s64 = 2;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8274e290
	sub_8274E290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fd0e4
	if (cr6.eq) goto loc_827FD0E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82825580
	sub_82825580(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x827fd0e8
	goto loc_827FD0E8;
loc_827FD0E4:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_827FD0E8:
	// li r11,326
	r11.s64 = 326;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8274e290
	sub_8274E290(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fd150
	if (cr6.eq) goto loc_827FD150;
	// li r11,1
	r11.s64 = 1;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x827627e8
	sub_827627E8(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// lfs f0,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// beq cr6,0x827fd140
	if (cr6.eq) goto loc_827FD140;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827c65e8
	sub_827C65E8(ctx, base);
loc_827FD140:
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// mr r29,r31
	r29.u64 = r31.u64;
	// stw r28,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r28.u32);
	// b 0x827fd154
	goto loc_827FD154;
loc_827FD150:
	// mr r29,r28
	r29.u64 = r28.u64;
loc_827FD154:
	// lwz r31,24(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827fd180
	if (cr6.eq) goto loc_827FD180;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bne 0x827fd180
	if (!cr0.eq) goto loc_827FD180;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827b14a8
	sub_827B14A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827FD180:
	// stw r29,24(r27)
	PPC_STORE_U32(r27.u32 + 24, r29.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827fd194
	if (cr6.eq) goto loc_827FD194;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827c6878
	sub_827C6878(ctx, base);
loc_827FD194:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x827fd1a4
	if (cr6.eq) goto loc_827FD1A4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827FD1A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_827FD1A8"))) PPC_WEAK_FUNC(sub_827FD1A8);
PPC_FUNC_IMPL(__imp__sub_827FD1A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_827FD1AC"))) PPC_WEAK_FUNC(sub_827FD1AC);
PPC_FUNC_IMPL(__imp__sub_827FD1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FD1B0"))) PPC_WEAK_FUNC(sub_827FD1B0);
PPC_FUNC_IMPL(__imp__sub_827FD1B0) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r5,r10,17940
	ctx.r5.s64 = ctx.r10.s64 + 17940;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
loc_827FD1E4:
	// mfmsr r6
	// mtmsrd r13,1
	// lwarx r9,0,r4
	reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stwcx. r8,0,r4
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
	// bne 0x827fd1e4
	if (!cr0.eq) goto loc_827FD1E4;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827fd210
	if (!cr0.eq) goto loc_827FD210;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827FD210:
	// lwz r31,24(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827fd23c
	if (cr6.eq) goto loc_827FD23C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bne 0x827fd23c
	if (!cr0.eq) goto loc_827FD23C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827b14a8
	sub_827B14A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827FD23C:
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x827d3668
	sub_827D3668(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_827FD260"))) PPC_WEAK_FUNC(sub_827FD260);
PPC_FUNC_IMPL(__imp__sub_827FD260) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FD264"))) PPC_WEAK_FUNC(sub_827FD264);
PPC_FUNC_IMPL(__imp__sub_827FD264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FD268"))) PPC_WEAK_FUNC(sub_827FD268);
PPC_FUNC_IMPL(__imp__sub_827FD268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r18,0
	r18.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r6,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r6.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// stw r4,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r4.u32);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// stw r5,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r5.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r20,12(r11)
	r20.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lwz r19,20(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mr r31,r18
	r31.u64 = r18.u64;
	// stw r18,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r18.u32);
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r18.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x827614d8
	sub_827614D8(ctx, base);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r18.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r11,r11,18172
	r11.s64 = r11.s64 + 18172;
	// addi r10,r10,18124
	ctx.r10.s64 = ctx.r10.s64 + 18124;
	// lfs f30,-25600(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f30.f64 = double(temp.f32);
	// addi r9,r9,18092
	ctx.r9.s64 = ctx.r9.s64 + 18092;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// lis r30,-32248
	r30.s64 = -2113404928;
	// lis r29,-32248
	r29.s64 = -2113404928;
	// lis r28,-32248
	r28.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// addi r7,r7,18064
	ctx.r7.s64 = ctx.r7.s64 + 18064;
	// addi r5,r5,18040
	ctx.r5.s64 = ctx.r5.s64 + 18040;
	// addi r11,r30,18016
	r11.s64 = r30.s64 + 18016;
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// addi r10,r29,18000
	ctx.r10.s64 = r29.s64 + 18000;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r9,r28,3696
	ctx.r9.s64 = r28.s64 + 3696;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// mr r22,r18
	r22.u64 = r18.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r15,326
	r15.s64 = 326;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// addi r14,r8,17968
	r14.s64 = ctx.r8.s64 + 17968;
	// addi r16,r6,17956
	r16.s64 = ctx.r6.s64 + 17956;
	// addi r21,r4,17952
	r21.s64 = ctx.r4.s64 + 17952;
	// addi r17,r3,17944
	r17.s64 = ctx.r3.s64 + 17944;
loc_827FD360:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x827fd38c
	if (cr6.eq) goto loc_827FD38C;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r8,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// b 0x827fd410
	goto loc_827FD410;
loc_827FD38C:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// addi r30,r26,8
	r30.s64 = r26.s64 + 8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827fd410
	if (cr6.eq) goto loc_827FD410;
	// mr r11,r24
	r11.u64 = r24.u64;
loc_827FD3A0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827fd3a0
	if (!cr6.eq) goto loc_827FD3A0;
	// subf r11,r24,r11
	r11.s64 = r11.s64 - r24.s64;
	// li r5,5381
	ctx.r5.s64 = 5381;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x82760cb8
	sub_82760CB8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi r9,r23,30
	ctx.r9.u64 = r23.u32 & 0x3;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// xor r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// and r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 & ctx.r7.u64;
	// bl 0x827fe450
	sub_827FE450(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x827fd410
	if (cr6.lt) goto loc_827FD410;
	// rlwinm r11,r3,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827fda5c
	if (!cr6.eq) goto loc_827FDA5C;
loc_827FD410:
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827fd444
	if (cr6.eq) goto loc_827FD444;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x827fd448
	goto loc_827FD448;
loc_827FD444:
	// mr r30,r18
	r30.u64 = r18.u64;
loc_827FD448:
	// lwz r11,20(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r6,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x827fcb68
	sub_827FCB68(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827fd554
	if (cr6.eq) goto loc_827FD554;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// not r10,r11
	ctx.r10.u64 = ~r11.u64;
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827fd554
	if (cr6.eq) goto loc_827FD554;
	// clrlwi r11,r23,30
	r11.u64 = r23.u32 & 0x3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827fd4b4
	if (cr6.eq) goto loc_827FD4B4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827fda8c
	if (cr6.eq) goto loc_827FDA8C;
loc_827FD4B4:
	// stw r15,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r15.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8274e290
	sub_8274E290(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fd54c
	if (cr6.eq) goto loc_827FD54C;
	// addic r11,r25,-1
	xer.ca = r25.u32 > 0;
	r11.s64 = r25.s64 + -1;
	// stw r18,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r18.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// and r7,r8,r26
	ctx.r7.u64 = ctx.r8.u64 & r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// bl 0x827627e8
	sub_827627E8(ctx, base);
	// stfs f30,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827c65e8
	sub_827C65E8(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// stw r18,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r18.u32);
	// beq cr6,0x827fd550
	if (cr6.eq) goto loc_827FD550;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82760b90
	sub_82760B90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827fd550
	if (cr6.eq) goto loc_827FD550;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82761b38
	sub_82761B38(ctx, base);
	// b 0x827fd550
	goto loc_827FD550;
loc_827FD54C:
	// mr r31,r18
	r31.u64 = r18.u64;
loc_827FD550:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_827FD554:
	// mr r27,r24
	r27.u64 = r24.u64;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
	// mr r28,r23
	r28.u64 = r23.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x827fd7e4
	if (!cr6.eq) goto loc_827FD7E4;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fd704
	if (cr6.eq) goto loc_827FD704;
	// addi r30,r26,28
	r30.s64 = r26.s64 + 28;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8284be10
	sub_8284BE10(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827fd704
	if (cr6.eq) goto loc_827FD704;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// addi r27,r10,8
	r27.s64 = ctx.r10.s64 + 8;
	// bne cr6,0x827fd5ac
	if (!cr6.eq) goto loc_827FD5AC;
	// b 0x827fd5b4
	goto loc_827FD5B4;
loc_827FD5AC:
	// rlwinm r10,r23,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFC;
	// or r28,r10,r11
	r28.u64 = ctx.r10.u64 | r11.u64;
loc_827FD5B4:
	// lfs f31,32(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 32);
	f31.f64 = double(temp.f32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x827fd5e4
	if (cr6.eq) goto loc_827FD5E4;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827fc988
	sub_827FC988(ctx, base);
	// b 0x827fd704
	goto loc_827FD704;
loc_827FD5E4:
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r27.u32);
	// addi r29,r26,8
	r29.s64 = r26.s64 + 8;
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r28.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827fe5f0
	sub_827FE5F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x827fd680
	if (cr6.lt) goto loc_827FD680;
	// rlwinm r11,r3,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r30,r11,16
	r30.s64 = r11.s64 + 16;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827fd680
	if (cr6.eq) goto loc_827FD680;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// beq cr6,0x827fda9c
	if (cr6.eq) goto loc_827FDA9C;
	// stw r15,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r15.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8274e290
	sub_8274E290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fd674
	if (cr6.eq) goto loc_827FD674;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// bl 0x827e8500
	sub_827E8500(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827fd678
	goto loc_827FD678;
loc_827FD674:
	// mr r31,r18
	r31.u64 = r18.u64;
loc_827FD678:
	// stfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_827FD680:
	// stw r24,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r24.u32);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827fe7f8
	sub_827FE7F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fd6fc
	if (cr6.eq) goto loc_827FD6FC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// beq cr6,0x827fda9c
	if (cr6.eq) goto loc_827FDA9C;
	// stw r15,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r15.u32);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8274e290
	sub_8274E290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fd6f0
	if (cr6.eq) goto loc_827FD6F0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// bl 0x827e8500
	sub_827E8500(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827fd6f4
	goto loc_827FD6F4;
loc_827FD6F0:
	// mr r31,r18
	r31.u64 = r18.u64;
loc_827FD6F4:
	// stfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_827FD6FC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x827fd7e4
	if (!cr6.eq) goto loc_827FD7E4;
loc_827FD704:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x827fd7e4
	if (cr6.eq) goto loc_827FD7E4;
	// lwz r11,20(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// stw r18,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r18.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r18,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r18.u32);
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// bne cr6,0x827fd728
	if (!cr6.eq) goto loc_827FD728;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
loc_827FD728:
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r9,16(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// lwz r7,12(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827fd7c0
	if (cr6.eq) goto loc_827FD7C0;
	// stw r15,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r15.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8274e290
	sub_8274E290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fd7ac
	if (cr6.eq) goto loc_827FD7AC;
	// addic r11,r25,-1
	xer.ca = r25.u32 > 0;
	r11.s64 = r25.s64 + -1;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// and r4,r9,r26
	ctx.r4.u64 = ctx.r9.u64 & r26.u64;
	// bl 0x827e8500
	sub_827E8500(ctx, base);
	// stfs f31,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// b 0x827fd7c4
	goto loc_827FD7C4;
loc_827FD7AC:
	// stfs f31,16(r18)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r18.u32 + 16, temp.u32);
	// mr r31,r18
	r31.u64 = r18.u64;
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r18.u32);
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// b 0x827fd7c4
	goto loc_827FD7C4;
loc_827FD7C0:
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
loc_827FD7C4:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827fc7b8
	sub_827FC7B8(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8284b250
	sub_8284B250(ctx, base);
loc_827FD7E4:
	// clrlwi r29,r22,24
	r29.u64 = r22.u32 & 0xFF;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x827fd824
	if (!cr6.eq) goto loc_827FD824;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x827fd824
	if (cr6.eq) goto loc_827FD824;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x827fd8e0
	if (!cr6.eq) goto loc_827FD8E0;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x827fd82c
	if (!cr6.eq) goto loc_827FD82C;
	// lwz r11,192(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x827fd82c
	if (!cr6.eq) goto loc_827FD82C;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x827fc648
	sub_827FC648(ctx, base);
	// b 0x827fd82c
	goto loc_827FD82C;
loc_827FD824:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x827fd8e0
	if (!cr6.eq) goto loc_827FD8E0;
loc_827FD82C:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x827fd8e0
	if (cr6.eq) goto loc_827FD8E0;
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827fd84c
	if (cr6.eq) goto loc_827FD84C;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// b 0x827fd850
	goto loc_827FD850;
loc_827FD84C:
	// lwz r6,16(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 16);
loc_827FD850:
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82826038
	sub_82826038(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// beq cr6,0x827fd91c
	if (cr6.eq) goto loc_827FD91C;
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// bl 0x827fc7b8
	sub_827FC7B8(ctx, base);
	// stw r15,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r15.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8274e290
	sub_8274E290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fd8cc
	if (cr6.eq) goto loc_827FD8CC;
	// addic r11,r25,-1
	xer.ca = r25.u32 > 0;
	r11.s64 = r25.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r7,0
	ctx.r7.s64 = 0;
	// and r4,r9,r26
	ctx.r4.u64 = ctx.r9.u64 & r26.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x827e8500
	sub_827E8500(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827fd8d0
	goto loc_827FD8D0;
loc_827FD8CC:
	// mr r31,r18
	r31.u64 = r18.u64;
loc_827FD8D0:
	// stfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x827c6878
	sub_827C6878(ctx, base);
loc_827FD8E0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x827fd928
	if (!cr6.eq) goto loc_827FD928;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x827fd928
	if (cr6.eq) goto loc_827FD928;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x827fdac8
	if (!cr6.eq) goto loc_827FDAC8;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// bne cr6,0x827fd930
	if (!cr6.eq) goto loc_827FD930;
	// lwz r11,192(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x827fd930
	if (!cr6.eq) goto loc_827FD930;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x827fc648
	sub_827FC648(ctx, base);
	// b 0x827fd930
	goto loc_827FD930;
loc_827FD91C:
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// bl 0x827fc7b8
	sub_827FC7B8(ctx, base);
	// b 0x827fd8e0
	goto loc_827FD8E0;
loc_827FD928:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x827fdac8
	if (!cr6.eq) goto loc_827FDAC8;
loc_827FD930:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x827fda28
	if (cr6.eq) goto loc_827FDA28;
	// rlwinm r11,r28,0,27,27
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827fda28
	if (cr6.eq) goto loc_827FDA28;
	// lwz r11,20(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// rlwinm r30,r28,0,28,26
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r18,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r18.u32);
	// stw r18,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r18.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// bne cr6,0x827fd964
	if (!cr6.eq) goto loc_827FD964;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
loc_827FD964:
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r7,12(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827fd9fc
	if (cr6.eq) goto loc_827FD9FC;
	// stw r15,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r15.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8274e290
	sub_8274E290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fd9e8
	if (cr6.eq) goto loc_827FD9E8;
	// addic r11,r25,-1
	xer.ca = r25.u32 > 0;
	r11.s64 = r25.s64 + -1;
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// and r4,r9,r26
	ctx.r4.u64 = ctx.r9.u64 & r26.u64;
	// bl 0x827e8500
	sub_827E8500(ctx, base);
	// stfs f31,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// b 0x827fda00
	goto loc_827FDA00;
loc_827FD9E8:
	// stfs f31,16(r18)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r18.u32 + 16, temp.u32);
	// mr r31,r18
	r31.u64 = r18.u64;
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r18.u32);
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// b 0x827fda00
	goto loc_827FDA00;
loc_827FD9FC:
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
loc_827FDA00:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827fc7b8
	sub_827FC7B8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8284b250
	sub_8284B250(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x827fdac8
	if (!cr6.eq) goto loc_827FDAC8;
loc_827FDA28:
	// rlwinm r11,r23,0,27,27
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827fdb24
	if (cr6.eq) goto loc_827FDB24;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x827fc648
	sub_827FC648(ctx, base);
	// rlwinm r23,r23,0,28,26
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lwz r27,428(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// mr r19,r18
	r19.u64 = r18.u64;
	// stw r23,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r23.u32);
	// mr r20,r18
	r20.u64 = r18.u64;
	// li r22,1
	r22.s64 = 1;
	// b 0x827fd360
	goto loc_827FD360;
loc_827FDA5C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x827fed48
	sub_827FED48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x828e9430
	return;
loc_827FDA8C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x827fdb3c
	if (cr6.eq) goto loc_827FDB3C;
	// stw r30,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r30.u32);
	// b 0x827fdb3c
	goto loc_827FDB3C;
loc_827FDA9C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827fed48
	sub_827FED48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x828e9430
	return;
loc_827FDAC8:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x827fdafc
	if (cr6.eq) goto loc_827FDAFC;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// stw r9,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// bl 0x827fed48
	sub_827FED48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x828e9430
	return;
loc_827FDAFC:
	// addi r3,r26,8
	ctx.r3.s64 = r26.s64 + 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827fedb8
	sub_827FEDB8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827fed48
	sub_827FED48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x828e9430
	return;
loc_827FDB24:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x827fdb3c
	if (cr6.eq) goto loc_827FDB3C;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// stw r9,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r9.u32);
loc_827FDB3C:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827fed48
	sub_827FED48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
}

__attribute__((alias("__imp__sub_827FDB54"))) PPC_WEAK_FUNC(sub_827FDB54);
PPC_FUNC_IMPL(__imp__sub_827FDB54) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_827FDB58"))) PPC_WEAK_FUNC(sub_827FDB58);
PPC_FUNC_IMPL(__imp__sub_827FDB58) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// li r21,0
	r21.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// addi r29,r11,18296
	r29.s64 = r11.s64 + 18296;
	// addi r24,r10,17952
	r24.s64 = ctx.r10.s64 + 17952;
	// addi r28,r9,13435
	r28.s64 = ctx.r9.s64 + 13435;
	// beq cr6,0x827fdbb8
	if (cr6.eq) goto loc_827FDBB8;
	// lwz r21,0(r6)
	r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827fc7b8
	sub_827FC7B8(ctx, base);
loc_827FDBB8:
	// li r11,0
	r11.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x827fd268
	sub_827FD268(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r20,326
	r20.s64 = 326;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x827fdcf8
	if (!cr6.eq) goto loc_827FDCF8;
	// clrlwi r22,r27,30
	r22.u64 = r27.u32 & 0x3;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x827fdcf8
	if (cr6.eq) goto loc_827FDCF8;
	// rlwinm r26,r27,0,0,29
	r26.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827fdc28
	if (cr6.eq) goto loc_827FDC28;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827fc7b8
	sub_827FC7B8(ctx, base);
loc_827FDC28:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x827fd268
	sub_827FD268(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fdcf8
	if (cr6.eq) goto loc_827FDCF8;
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r20.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8274e290
	sub_8274E290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fdc78
	if (cr6.eq) goto loc_827FDC78;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x827fe500
	sub_827FE500(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// b 0x827fdc7c
	goto loc_827FDC7C;
loc_827FDC78:
	// li r25,0
	r25.s64 = 0;
loc_827FDC7C:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// or r10,r11,r22
	ctx.r10.u64 = r11.u64 | r22.u64;
	// stw r10,8(r25)
	PPC_STORE_U32(r25.u32 + 8, ctx.r10.u32);
	// bne cr6,0x827fdca4
	if (!cr6.eq) goto loc_827FDCA4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r23,8
	ctx.r3.s64 = r23.s64 + 8;
	// bl 0x827fedb8
	sub_827FEDB8(ctx, base);
	// b 0x827fdcd8
	goto loc_827FDCD8;
loc_827FDCA4:
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r8,r9,18268
	ctx.r8.s64 = ctx.r9.s64 + 18268;
	// addi r4,r7,18260
	ctx.r4.s64 = ctx.r7.s64 + 18260;
	// addi r10,r11,3696
	ctx.r10.s64 = r11.s64 + 3696;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827fc880
	sub_827FC880(ctx, base);
loc_827FDCD8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bne 0x827fdcf8
	if (!cr0.eq) goto loc_827FDCF8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827b14a8
	sub_827B14A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827FDCF8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827fdd04
	if (cr6.eq) goto loc_827FDD04;
	// stw r21,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r21.u32);
loc_827FDD04:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x827fddac
	if (!cr6.eq) goto loc_827FDDAC;
	// lwz r29,100(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827fdd9c
	if (cr6.eq) goto loc_827FDD9C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r6,r11,18244
	ctx.r6.s64 = r11.s64 + 18244;
	// addi r4,r10,18228
	ctx.r4.s64 = ctx.r10.s64 + 18228;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827fc720
	sub_827FC720(ctx, base);
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r20.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8274e290
	sub_8274E290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fdd78
	if (cr6.eq) goto loc_827FDD78;
	// addic r11,r31,-1
	xer.ca = r31.u32 > 0;
	r11.s64 = r31.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r7,0
	ctx.r7.s64 = 0;
	// and r4,r9,r23
	ctx.r4.u64 = ctx.r9.u64 & r23.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x827e8500
	sub_827E8500(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// b 0x827fdd7c
	goto loc_827FDD7C;
loc_827FDD78:
	// li r25,0
	r25.s64 = 0;
loc_827FDD7C:
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x827fdd94
	if (!cr6.eq) goto loc_827FDD94;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r23,8
	ctx.r3.s64 = r23.s64 + 8;
	// bl 0x827fedb8
	sub_827FEDB8(ctx, base);
loc_827FDD94:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x827fddac
	if (!cr6.eq) goto loc_827FDDAC;
loc_827FDD9C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18212
	ctx.r4.s64 = r11.s64 + 18212;
	// bl 0x827fc648
	sub_827FC648(ctx, base);
loc_827FDDAC:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_827FDDB4"))) PPC_WEAK_FUNC(sub_827FDDB4);
PPC_FUNC_IMPL(__imp__sub_827FDDB4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_827FDDB8"))) PPC_WEAK_FUNC(sub_827FDDB8);
PPC_FUNC_IMPL(__imp__sub_827FDDB8) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,17940
	ctx.r9.s64 = r11.s64 + 17940;
	// li r30,0
	r30.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x827614d8
	sub_827614D8(ctx, base);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r7.u32);
	// lfs f0,-25600(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// bl 0x827fd070
	sub_827FD070(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827FDE28"))) PPC_WEAK_FUNC(sub_827FDE28);
PPC_FUNC_IMPL(__imp__sub_827FDE28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827FDE2C"))) PPC_WEAK_FUNC(sub_827FDE2C);
PPC_FUNC_IMPL(__imp__sub_827FDE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FDE30"))) PPC_WEAK_FUNC(sub_827FDE30);
PPC_FUNC_IMPL(__imp__sub_827FDE30) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,17940
	ctx.r9.s64 = r11.s64 + 17940;
	// li r30,0
	r30.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x827614d8
	sub_827614D8(ctx, base);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r7.u32);
	// lfs f0,-25600(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// bl 0x827fd070
	sub_827FD070(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827FDEA0"))) PPC_WEAK_FUNC(sub_827FDEA0);
PPC_FUNC_IMPL(__imp__sub_827FDEA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827FDEA4"))) PPC_WEAK_FUNC(sub_827FDEA4);
PPC_FUNC_IMPL(__imp__sub_827FDEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FDEA8"))) PPC_WEAK_FUNC(sub_827FDEA8);
PPC_FUNC_IMPL(__imp__sub_827FDEA8) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// bne cr6,0x827fdefc
	if (!cr6.eq) goto loc_827FDEFC;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x827fdb58
	sub_827FDB58(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x828e9458
	return;
loc_827FDEFC:
	// li r24,0
	r24.s64 = 0;
	// mr r29,r24
	r29.u64 = r24.u64;
loc_827FDF04:
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828eb800
	sub_828EB800(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fdf54
	if (cr6.eq) goto loc_827FDF54;
	// subf r31,r30,r3
	r31.s64 = ctx.r3.s64 - r30.s64;
	// cmplwi cr6,r31,127
	cr6.compare<uint32_t>(r31.u32, 127, xer);
	// bgt cr6,0x827fdf74
	if (cr6.gt) goto loc_827FDF74;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,127
	ctx.r4.s64 = 127;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r11,r31,r30
	r11.u64 = r31.u64 + r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// stbx r24,r31,r10
	PPC_STORE_U8(r31.u32 + ctx.r10.u32, r24.u8);
	// b 0x827fdf58
	goto loc_827FDF58;
loc_827FDF54:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_827FDF58:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827fdb58
	sub_827FDB58(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x827fdf7c
	if (!cr6.eq) goto loc_827FDF7C;
loc_827FDF74:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x827fdf04
	if (!cr6.eq) goto loc_827FDF04;
loc_827FDF7C:
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_827FDF8C"))) PPC_WEAK_FUNC(sub_827FDF8C);
PPC_FUNC_IMPL(__imp__sub_827FDF8C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_827FDF90"))) PPC_WEAK_FUNC(sub_827FDF90);
PPC_FUNC_IMPL(__imp__sub_827FDF90) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x827fdfc0
	if (!cr6.eq) goto loc_827FDFC0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827fe090
	goto loc_827FE090;
loc_827FDFC0:
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// li r12,787
	r12.s64 = 787;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r4,12(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r3,20(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// or r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 | ctx.r6.u64;
	// or r9,r3,r7
	ctx.r9.u64 = ctx.r3.u64 | ctx.r7.u64;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// and r6,r7,r12
	ctx.r6.u64 = ctx.r7.u64 & r12.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x827fe088
	if (!cr6.eq) goto loc_827FE088;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x827fe034
	if (!cr6.eq) goto loc_827FE034;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x827fe038
	goto loc_827FE038;
loc_827FE034:
	// addi r30,r10,8
	r30.s64 = ctx.r10.s64 + 8;
loc_827FE038:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x827fe070
	if (!cr6.eq) goto loc_827FE070;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x827fe074
	goto loc_827FE074;
loc_827FE070:
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
loc_827FE074:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82760b90
	sub_82760B90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x827fe08c
	if (cr6.eq) goto loc_827FE08C;
loc_827FE088:
	// li r11,0
	r11.s64 = 0;
loc_827FE08C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
loc_827FE090:
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

__attribute__((alias("__imp__sub_827FE0A4"))) PPC_WEAK_FUNC(sub_827FE0A4);
PPC_FUNC_IMPL(__imp__sub_827FE0A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FE0A8"))) PPC_WEAK_FUNC(sub_827FE0A8);
PPC_FUNC_IMPL(__imp__sub_827FE0A8) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,768
	ctx.r10.s64 = 768;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r12,787
	r12.s64 = 787;
	// rlwinm r8,r9,0,22,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x300;
	// rlwinm r7,r9,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// subfic r5,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r8.s64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & r12.u64;
	// subfe r8,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 & ctx.r10.u64;
	// lwz r4,12(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// or r10,r5,r7
	ctx.r10.u64 = ctx.r5.u64 | ctx.r7.u64;
	// ori r8,r10,3
	ctx.r8.u64 = ctx.r10.u64 | 3;
	// lwz r7,20(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// or r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 | ctx.r3.u64;
	// and r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 & ctx.r6.u64;
	// cmplw cr6,r5,r9
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, xer);
	// bne cr6,0x827fe158
	if (!cr6.eq) goto loc_827FE158;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x827fe140
	if (!cr6.eq) goto loc_827FE140;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x827fe144
	goto loc_827FE144;
loc_827FE140:
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
loc_827FE144:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82760b90
	sub_82760B90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x827fe15c
	if (cr6.eq) goto loc_827FE15C;
loc_827FE158:
	// li r11,0
	r11.s64 = 0;
loc_827FE15C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827FE170"))) PPC_WEAK_FUNC(sub_827FE170);
PPC_FUNC_IMPL(__imp__sub_827FE170) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FE174"))) PPC_WEAK_FUNC(sub_827FE174);
PPC_FUNC_IMPL(__imp__sub_827FE174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FE178"))) PPC_WEAK_FUNC(sub_827FE178);
PPC_FUNC_IMPL(__imp__sub_827FE178) {
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
	// lwz r31,0(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827fe1c4
	if (!cr6.eq) goto loc_827FE1C4;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x827fe1c8
	goto loc_827FE1C8;
loc_827FE1C4:
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
loc_827FE1C8:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r31,20(r8)
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// or r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 | r31.u64;
	// clrlwi r30,r7,30
	r30.u64 = ctx.r7.u32 & 0x3;
loc_827FE1E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827fe1e4
	if (!cr6.eq) goto loc_827FE1E4;
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// li r5,5381
	ctx.r5.s64 = 5381;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x82760cb8
	sub_82760CB8(ctx, base);
	// or r10,r31,r30
	ctx.r10.u64 = r31.u64 | r30.u64;
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// xor r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r9.u64;
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

__attribute__((alias("__imp__sub_827FE228"))) PPC_WEAK_FUNC(sub_827FE228);
PPC_FUNC_IMPL(__imp__sub_827FE228) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FE22C"))) PPC_WEAK_FUNC(sub_827FE22C);
PPC_FUNC_IMPL(__imp__sub_827FE22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FE230"))) PPC_WEAK_FUNC(sub_827FE230);
PPC_FUNC_IMPL(__imp__sub_827FE230) {
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
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827fe27c
	if (!cr6.eq) goto loc_827FE27C;
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x827fe280
	goto loc_827FE280;
loc_827FE27C:
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
loc_827FE280:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r31,20(r8)
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// or r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 | r31.u64;
	// clrlwi r30,r7,30
	r30.u64 = ctx.r7.u32 & 0x3;
loc_827FE29C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827fe29c
	if (!cr6.eq) goto loc_827FE29C;
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// li r5,5381
	ctx.r5.s64 = 5381;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x82760cb8
	sub_82760CB8(ctx, base);
	// or r10,r31,r30
	ctx.r10.u64 = r31.u64 | r30.u64;
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// xor r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r9.u64;
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

__attribute__((alias("__imp__sub_827FE2E0"))) PPC_WEAK_FUNC(sub_827FE2E0);
PPC_FUNC_IMPL(__imp__sub_827FE2E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FE2E4"))) PPC_WEAK_FUNC(sub_827FE2E4);
PPC_FUNC_IMPL(__imp__sub_827FE2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FE2E8"))) PPC_WEAK_FUNC(sub_827FE2E8);
PPC_FUNC_IMPL(__imp__sub_827FE2E8) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827fe444
	if (cr6.eq) goto loc_827FE444;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// bl 0x827fe230
	sub_827FE230(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// and r30,r9,r3
	r30.u64 = ctx.r9.u64 & ctx.r3.u64;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r30,r10
	ctx.r8.u64 = r30.u64 + ctx.r10.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r7,-2
	cr6.compare<int32_t>(ctx.r7.s32, -2, xer);
	// beq cr6,0x827fe444
	if (cr6.eq) goto loc_827FE444;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x827fe444
	if (!cr6.eq) goto loc_827FE444;
	// mr r25,r30
	r25.u64 = r30.u64;
	// li r26,-1
	r26.s64 = -1;
loc_827FE360:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r27,r31,4
	r27.s64 = r31.s64 + 4;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// bne cr6,0x827fe394
	if (!cr6.eq) goto loc_827FE394;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x827fdf90
	sub_827FDF90(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827fe3c0
	if (!cr6.eq) goto loc_827FE3C0;
loc_827FE394:
	// mr r26,r30
	r26.u64 = r30.u64;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x827fe444
	if (cr6.eq) goto loc_827FE444;
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// b 0x827fe360
	goto loc_827FE360;
loc_827FE3C0:
	// li r8,-2
	ctx.r8.s64 = -2;
	// cmpw cr6,r25,r30
	cr6.compare<int32_t>(r25.s32, r30.s32, xer);
	// bne cr6,0x827fe414
	if (!cr6.eq) goto loc_827FE414;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x827fe430
	if (cr6.eq) goto loc_827FE430;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r7,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r7.u32);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r6,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r6.u32);
	// b 0x827fe430
	goto loc_827FE430;
loc_827FE414:
	// rlwinm r11,r26,1,0,30
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r7,r26,r11
	ctx.r7.u64 = r26.u64 + r11.u64;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
loc_827FE430:
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_827FE444:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_827FE448"))) PPC_WEAK_FUNC(sub_827FE448);
PPC_FUNC_IMPL(__imp__sub_827FE448) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_827FE44C"))) PPC_WEAK_FUNC(sub_827FE44C);
PPC_FUNC_IMPL(__imp__sub_827FE44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FE450"))) PPC_WEAK_FUNC(sub_827FE450);
PPC_FUNC_IMPL(__imp__sub_827FE450) {
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
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// add r11,r5,r11
	r11.u64 = ctx.r5.u64 + r11.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,-2
	cr6.compare<int32_t>(ctx.r10.s32, -2, xer);
	// beq cr6,0x827fe4f4
	if (cr6.eq) goto loc_827FE4F4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x827fe4f4
	if (!cr6.eq) goto loc_827FE4F4;
loc_827FE49C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x827fe4c0
	if (!cr6.eq) goto loc_827FE4C0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x827fe0a8
	sub_827FE0A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827fe4e8
	if (!cr6.eq) goto loc_827FE4E8;
loc_827FE4C0:
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x827fe4f4
	if (cr6.eq) goto loc_827FE4F4;
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// b 0x827fe49c
	goto loc_827FE49C;
loc_827FE4E8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_827FE4F4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827FE4FC"))) PPC_WEAK_FUNC(sub_827FE4FC);
PPC_FUNC_IMPL(__imp__sub_827FE4FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827FE500"))) PPC_WEAK_FUNC(sub_827FE500);
PPC_FUNC_IMPL(__imp__sub_827FE500) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// bl 0x82762968
	sub_82762968(ctx, base);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fe558
	if (cr6.eq) goto loc_827FE558;
	// bl 0x827c65e8
	sub_827C65E8(ctx, base);
loc_827FE558:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827fe570
	if (cr6.eq) goto loc_827FE570;
	// bl 0x827c65e8
	sub_827C65E8(ctx, base);
loc_827FE570:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
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

__attribute__((alias("__imp__sub_827FE590"))) PPC_WEAK_FUNC(sub_827FE590);
PPC_FUNC_IMPL(__imp__sub_827FE590) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FE594"))) PPC_WEAK_FUNC(sub_827FE594);
PPC_FUNC_IMPL(__imp__sub_827FE594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FE598"))) PPC_WEAK_FUNC(sub_827FE598);
PPC_FUNC_IMPL(__imp__sub_827FE598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827fe5b4
	if (!cr6.eq) goto loc_827FE5B4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_827FE5B4:
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_827FE5C0:
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r8,-2
	cr6.compare<int32_t>(ctx.r8.s32, -2, xer);
	// bne cr6,0x827fe5e0
	if (!cr6.eq) goto loc_827FE5E0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// add r8,r11,r9
	ctx.r8.u64 = r11.u64 + ctx.r9.u64;
	// ble cr6,0x827fe5c0
	if (!cr6.gt) goto loc_827FE5C0;
loc_827FE5E0:
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_827FE5E8"))) PPC_WEAK_FUNC(sub_827FE5E8);
PPC_FUNC_IMPL(__imp__sub_827FE5E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FE5EC"))) PPC_WEAK_FUNC(sub_827FE5EC);
PPC_FUNC_IMPL(__imp__sub_827FE5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FE5F0"))) PPC_WEAK_FUNC(sub_827FE5F0);
PPC_FUNC_IMPL(__imp__sub_827FE5F0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827fe61c
	if (!cr6.eq) goto loc_827FE61C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_827FE61C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_827FE624:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827fe624
	if (!cr6.eq) goto loc_827FE624;
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,5381
	ctx.r5.s64 = 5381;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x82760cb8
	sub_82760CB8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi r9,r29,30
	ctx.r9.u64 = r29.u32 & 0x3;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// xor r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// and r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 & ctx.r7.u64;
	// bl 0x827fe450
	sub_827FE450(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827FE670"))) PPC_WEAK_FUNC(sub_827FE670);
PPC_FUNC_IMPL(__imp__sub_827FE670) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827FE674"))) PPC_WEAK_FUNC(sub_827FE674);
PPC_FUNC_IMPL(__imp__sub_827FE674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FE678"))) PPC_WEAK_FUNC(sub_827FE678);
PPC_FUNC_IMPL(__imp__sub_827FE678) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x827fe6a0
	if (!cr6.eq) goto loc_827FE6A0;
	// bl 0x827d3668
	sub_827D3668(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9458
	return;
loc_827FE6A0:
	// cmplwi cr6,r5,8
	cr6.compare<uint32_t>(ctx.r5.u32, 8, xer);
	// bge cr6,0x827fe6b0
	if (!cr6.lt) goto loc_827FE6B0;
	// li r31,8
	r31.s64 = 8;
	// b 0x827fe6f8
	goto loc_827FE6F8;
loc_827FE6B0:
	// addi r11,r5,-1
	r11.s64 = ctx.r5.s64 + -1;
	// clrldi r10,r11,32
	ctx.r10.u64 = r11.u64 & 0xFFFFFFFF;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x828f2070
	sub_828F2070(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f0,-26684(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26684);
	f0.f64 = double(temp.f32);
	// lfs f13,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// slw r31,r7,r6
	r31.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
loc_827FE6F8:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r28,0
	r28.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// add r9,r31,r11
	ctx.r9.u64 = r31.u64 + r11.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x8274e290
	sub_8274E290(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r8,r31,-1
	ctx.r8.s64 = r31.s64 + -1;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r26,-2
	r26.s64 = -2;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// beq cr6,0x827fe768
	if (cr6.eq) goto loc_827FE768;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r11,r28
	r11.u64 = r28.u64;
	// mtctr r31
	ctr.u64 = r31.u64;
	// add r10,r28,r10
	ctx.r10.u64 = r28.u64 + ctx.r10.u64;
loc_827FE754:
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// stw r26,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r26.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// bdnz 0x827fe754
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FE754;
loc_827FE768:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827fe7dc
	if (cr6.eq) goto loc_827FE7DC;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r29,r28
	r29.u64 = r28.u64;
	// addi r27,r11,1
	r27.s64 = r11.s64 + 1;
loc_827FE780:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// beq cr6,0x827fe7c8
	if (cr6.eq) goto loc_827FE7C8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r28,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r28.u8);
	// bl 0x827fe178
	sub_827FE178(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x827fe860
	sub_827FE860(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
loc_827FE7C8:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// bne 0x827fe780
	if (!cr0.eq) goto loc_827FE780;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827FE7DC:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// bl 0x827d3668
	sub_827D3668(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_827FE7F4"))) PPC_WEAK_FUNC(sub_827FE7F4);
PPC_FUNC_IMPL(__imp__sub_827FE7F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_827FE7F8"))) PPC_WEAK_FUNC(sub_827FE7F8);
PPC_FUNC_IMPL(__imp__sub_827FE7F8) {
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
	// bl 0x827fe5f0
	sub_827FE5F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x827fe844
	if (cr6.lt) goto loc_827FE844;
	// rlwinm r11,r3,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827FE844:
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

__attribute__((alias("__imp__sub_827FE858"))) PPC_WEAK_FUNC(sub_827FE858);
PPC_FUNC_IMPL(__imp__sub_827FE858) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FE85C"))) PPC_WEAK_FUNC(sub_827FE85C);
PPC_FUNC_IMPL(__imp__sub_827FE85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FE860"))) PPC_WEAK_FUNC(sub_827FE860);
PPC_FUNC_IMPL(__imp__sub_827FE860) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827fe88c
	if (!cr6.eq) goto loc_827FE88C;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x827fe8b8
	goto loc_827FE8B8;
loc_827FE88C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// ble cr6,0x827fe8c0
	if (!cr6.gt) goto loc_827FE8C0;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_827FE8B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827fe678
	sub_827FE678(ctx, base);
loc_827FE8C0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// and r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 & r30.u64;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r11,r9,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + r11.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// bne cr6,0x827fe918
	if (!cr6.eq) goto loc_827FE918;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_827FE918:
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_827FE91C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
	// and r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 & ctx.r7.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// bne cr6,0x827fe91c
	if (!cr6.eq) goto loc_827FE91C;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x827fe988
	if (!cr6.eq) goto loc_827FE988;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x827fe970
	if (cr6.eq) goto loc_827FE970;
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
loc_827FE970:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_827FE988:
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// beq cr6,0x827fe9cc
	if (cr6.eq) goto loc_827FE9CC;
loc_827FE9A8:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bne cr6,0x827fe9a8
	if (!cr6.eq) goto loc_827FE9A8;
loc_827FE9CC:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x827fe9e8
	if (cr6.eq) goto loc_827FE9E8;
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
loc_827FE9E8:
	// li r11,-1
	r11.s64 = -1;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827FEA04"))) PPC_WEAK_FUNC(sub_827FEA04);
PPC_FUNC_IMPL(__imp__sub_827FEA04) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827FEA08"))) PPC_WEAK_FUNC(sub_827FEA08);
PPC_FUNC_IMPL(__imp__sub_827FEA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r10,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r10.u32);
	// bl 0x8279d530
	sub_8279D530(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8279d640
	sub_8279D640(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8278a468
	sub_8278A468(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8278a468
	sub_8278A468(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8279c9e0
	sub_8279C9E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x8279d3d8
	sub_8279D3D8(ctx, base);
	// lwz r3,848(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
}

__attribute__((alias("__imp__sub_827FEA80"))) PPC_WEAK_FUNC(sub_827FEA80);
PPC_FUNC_IMPL(__imp__sub_827FEA80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827FEA84"))) PPC_WEAK_FUNC(sub_827FEA84);
PPC_FUNC_IMPL(__imp__sub_827FEA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FEA88"))) PPC_WEAK_FUNC(sub_827FEA88);
PPC_FUNC_IMPL(__imp__sub_827FEA88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// stw r10,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r10.u32);
	// bl 0x8279d530
	sub_8279D530(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8279d640
	sub_8279D640(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8278a468
	sub_8278A468(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8278a468
	sub_8278A468(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82843470
	sub_82843470(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8279c9e0
	sub_8279C9E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x8279d3d8
	sub_8279D3D8(ctx, base);
	// lwz r3,848(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
}

__attribute__((alias("__imp__sub_827FEB10"))) PPC_WEAK_FUNC(sub_827FEB10);
PPC_FUNC_IMPL(__imp__sub_827FEB10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827FEB14"))) PPC_WEAK_FUNC(sub_827FEB14);
PPC_FUNC_IMPL(__imp__sub_827FEB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FEB18"))) PPC_WEAK_FUNC(sub_827FEB18);
PPC_FUNC_IMPL(__imp__sub_827FEB18) {
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
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r10.u32);
	// bl 0x8279d530
	sub_8279D530(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8279d640
	sub_8279D640(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82843470
	sub_82843470(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8279c9e0
	sub_8279C9E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x8279d3d8
	sub_8279D3D8(ctx, base);
	// lwz r3,848(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827FEB98"))) PPC_WEAK_FUNC(sub_827FEB98);
PPC_FUNC_IMPL(__imp__sub_827FEB98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FEB9C"))) PPC_WEAK_FUNC(sub_827FEB9C);
PPC_FUNC_IMPL(__imp__sub_827FEB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FEBA0"))) PPC_WEAK_FUNC(sub_827FEBA0);
PPC_FUNC_IMPL(__imp__sub_827FEBA0) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827febcc
	if (!cr6.eq) goto loc_827FEBCC;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x827febf8
	goto loc_827FEBF8;
loc_827FEBCC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// ble cr6,0x827fec00
	if (!cr6.gt) goto loc_827FEC00;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_827FEBF8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827fe678
	sub_827FE678(ctx, base);
loc_827FEC00:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// and r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 & r30.u64;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r11,r9,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + r11.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// bne cr6,0x827fec58
	if (!cr6.eq) goto loc_827FEC58;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r11.u32);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_827FEC58:
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_827FEC5C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
	// and r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 & ctx.r7.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// bne cr6,0x827fec5c
	if (!cr6.eq) goto loc_827FEC5C;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x827fecc8
	if (!cr6.eq) goto loc_827FECC8;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x827fecb0
	if (cr6.eq) goto loc_827FECB0;
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
loc_827FECB0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_827FECC8:
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// beq cr6,0x827fed0c
	if (cr6.eq) goto loc_827FED0C;
loc_827FECE8:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bne cr6,0x827fece8
	if (!cr6.eq) goto loc_827FECE8;
loc_827FED0C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x827fed28
	if (cr6.eq) goto loc_827FED28;
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
loc_827FED28:
	// li r11,-1
	r11.s64 = -1;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827FED44"))) PPC_WEAK_FUNC(sub_827FED44);
PPC_FUNC_IMPL(__imp__sub_827FED44) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827FED48"))) PPC_WEAK_FUNC(sub_827FED48);
PPC_FUNC_IMPL(__imp__sub_827FED48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
loc_827FED6C:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r9,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x827fed6c
	if (!cr0.eq) goto loc_827FED6C;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addic. r5,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x827fed98
	if (!cr0.eq) goto loc_827FED98;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_827FED98:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x827d4280
	sub_827D4280(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827FEDB0"))) PPC_WEAK_FUNC(sub_827FEDB0);
PPC_FUNC_IMPL(__imp__sub_827FEDB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FEDB4"))) PPC_WEAK_FUNC(sub_827FEDB4);
PPC_FUNC_IMPL(__imp__sub_827FEDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FEDB8"))) PPC_WEAK_FUNC(sub_827FEDB8);
PPC_FUNC_IMPL(__imp__sub_827FEDB8) {
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// bl 0x827fe230
	sub_827FE230(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827feba0
	sub_827FEBA0(ctx, base);
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

__attribute__((alias("__imp__sub_827FEE14"))) PPC_WEAK_FUNC(sub_827FEE14);
PPC_FUNC_IMPL(__imp__sub_827FEE14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FEE18"))) PPC_WEAK_FUNC(sub_827FEE18);
PPC_FUNC_IMPL(__imp__sub_827FEE18) {
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
	// bl 0x827fd1b0
	sub_827FD1B0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827fee50
	if (cr6.eq) goto loc_827FEE50;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_827FEE50:
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

__attribute__((alias("__imp__sub_827FEE64"))) PPC_WEAK_FUNC(sub_827FEE64);
PPC_FUNC_IMPL(__imp__sub_827FEE64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FEE68"))) PPC_WEAK_FUNC(sub_827FEE68);
PPC_FUNC_IMPL(__imp__sub_827FEE68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,56(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r9,r10,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// addi r11,r9,8
	r11.s64 = ctx.r9.s64 + 8;
loc_827FEE80:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x827feea4
	if (cr6.eq) goto loc_827FEEA4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827fee80
	if (cr6.eq) goto loc_827FEE80;
loc_827FEEA4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827fef34
	if (!cr6.eq) goto loc_827FEF34;
	// lwz r11,60(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r9,r10,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// addi r11,r9,8
	r11.s64 = ctx.r9.s64 + 8;
loc_827FEEC4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x827feee8
	if (cr6.eq) goto loc_827FEEE8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x827feec4
	if (cr6.eq) goto loc_827FEEC4;
loc_827FEEE8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x827fef34
	if (!cr6.eq) goto loc_827FEF34;
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x827fef34
	if (!cr6.eq) goto loc_827FEF34;
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r10,68(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x827fef34
	if (!cr6.eq) goto loc_827FEF34;
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x827fef34
	if (!cr6.eq) goto loc_827FEF34;
	// lbz r11,76(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 76);
	// lbz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 76);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x827fef38
	if (cr6.eq) goto loc_827FEF38;
loc_827FEF34:
	// li r11,0
	r11.s64 = 0;
loc_827FEF38:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
}

__attribute__((alias("__imp__sub_827FEF3C"))) PPC_WEAK_FUNC(sub_827FEF3C);
PPC_FUNC_IMPL(__imp__sub_827FEF3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FEF40"))) PPC_WEAK_FUNC(sub_827FEF40);
PPC_FUNC_IMPL(__imp__sub_827FEF40) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bne cr6,0x827fef80
	if (!cr6.eq) goto loc_827FEF80;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_827FEF64:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827fef64
	if (!cr6.eq) goto loc_827FEF64;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r31,r11,0
	r31.u64 = __builtin_rotateleft32(r11.u32, 0);
loc_827FEF80:
	// addi r30,r28,16
	r30.s64 = r28.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827620f8
	sub_827620F8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82761860
	sub_82761860(ctx, base);
	// lhz r11,42(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 42);
	// ori r10,r11,256
	ctx.r10.u64 = r11.u64 | 256;
	// sth r10,42(r28)
	PPC_STORE_U16(r28.u32 + 42, ctx.r10.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827FEFAC"))) PPC_WEAK_FUNC(sub_827FEFAC);
PPC_FUNC_IMPL(__imp__sub_827FEFAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827FEFB0"))) PPC_WEAK_FUNC(sub_827FEFB0);
PPC_FUNC_IMPL(__imp__sub_827FEFB0) {
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
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bne cr6,0x827fefdc
	if (!cr6.eq) goto loc_827FEFDC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x827994f0
	sub_827994F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_827FEFDC:
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827620f8
	sub_827620F8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82761758
	sub_82761758(ctx, base);
	// lhz r11,42(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 42);
	// ori r10,r11,256
	ctx.r10.u64 = r11.u64 | 256;
	// sth r10,42(r31)
	PPC_STORE_U16(r31.u32 + 42, ctx.r10.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827FF008"))) PPC_WEAK_FUNC(sub_827FF008);
PPC_FUNC_IMPL(__imp__sub_827FF008) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827FF00C"))) PPC_WEAK_FUNC(sub_827FF00C);
PPC_FUNC_IMPL(__imp__sub_827FF00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FF010"))) PPC_WEAK_FUNC(sub_827FF010);
PPC_FUNC_IMPL(__imp__sub_827FF010) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82761c60
	sub_82761C60(ctx, base);
	// lhz r11,42(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 42);
	// ori r10,r11,256
	ctx.r10.u64 = r11.u64 | 256;
	// sth r10,42(r31)
	PPC_STORE_U16(r31.u32 + 42, ctx.r10.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827FF048"))) PPC_WEAK_FUNC(sub_827FF048);
PPC_FUNC_IMPL(__imp__sub_827FF048) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF04C"))) PPC_WEAK_FUNC(sub_827FF04C);
PPC_FUNC_IMPL(__imp__sub_827FF04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FF050"))) PPC_WEAK_FUNC(sub_827FF050);
PPC_FUNC_IMPL(__imp__sub_827FF050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ff078
	if (cr6.eq) goto loc_827FF078;
	// lbz r11,40(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// ori r10,r11,4
	ctx.r10.u64 = r11.u64 | 4;
	// lhz r11,42(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 42);
	// stb r10,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r10.u8);
	// ori r10,r11,64
	ctx.r10.u64 = r11.u64 | 64;
	// sth r10,42(r3)
	PPC_STORE_U16(ctx.r3.u32 + 42, ctx.r10.u16);
	// blr 
	return;
loc_827FF078:
	// lbz r11,40(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// lhz r11,42(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 42);
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r10,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r10.u8);
	// ori r10,r11,64
	ctx.r10.u64 = r11.u64 | 64;
	// sth r10,42(r3)
	PPC_STORE_U16(ctx.r3.u32 + 42, ctx.r10.u16);
}

__attribute__((alias("__imp__sub_827FF094"))) PPC_WEAK_FUNC(sub_827FF094);
PPC_FUNC_IMPL(__imp__sub_827FF094) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF098"))) PPC_WEAK_FUNC(sub_827FF098);
PPC_FUNC_IMPL(__imp__sub_827FF098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ff0c0
	if (cr6.eq) goto loc_827FF0C0;
	// lbz r11,40(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// ori r10,r11,8
	ctx.r10.u64 = r11.u64 | 8;
	// lhz r11,42(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 42);
	// stb r10,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r10.u8);
	// ori r10,r11,128
	ctx.r10.u64 = r11.u64 | 128;
	// sth r10,42(r3)
	PPC_STORE_U16(ctx.r3.u32 + 42, ctx.r10.u16);
	// blr 
	return;
loc_827FF0C0:
	// lbz r11,40(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// lhz r11,42(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 42);
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stb r10,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r10.u8);
	// ori r10,r11,128
	ctx.r10.u64 = r11.u64 | 128;
	// sth r10,42(r3)
	PPC_STORE_U16(ctx.r3.u32 + 42, ctx.r10.u16);
}

__attribute__((alias("__imp__sub_827FF0DC"))) PPC_WEAK_FUNC(sub_827FF0DC);
PPC_FUNC_IMPL(__imp__sub_827FF0DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF0E0"))) PPC_WEAK_FUNC(sub_827FF0E0);
PPC_FUNC_IMPL(__imp__sub_827FF0E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ff108
	if (cr6.eq) goto loc_827FF108;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827ff0fc
	if (cr6.eq) goto loc_827FF0FC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_827FF0FC:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// blr 
	return;
loc_827FF108:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_827FF10C"))) PPC_WEAK_FUNC(sub_827FF10C);
PPC_FUNC_IMPL(__imp__sub_827FF10C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF110"))) PPC_WEAK_FUNC(sub_827FF110);
PPC_FUNC_IMPL(__imp__sub_827FF110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r5.u32);
}

__attribute__((alias("__imp__sub_827FF134"))) PPC_WEAK_FUNC(sub_827FF134);
PPC_FUNC_IMPL(__imp__sub_827FF134) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF138"))) PPC_WEAK_FUNC(sub_827FF138);
PPC_FUNC_IMPL(__imp__sub_827FF138) {
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
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// li r11,0
	r11.s64 = 0;
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

__attribute__((alias("__imp__sub_827FF16C"))) PPC_WEAK_FUNC(sub_827FF16C);
PPC_FUNC_IMPL(__imp__sub_827FF16C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF170"))) PPC_WEAK_FUNC(sub_827FF170);
PPC_FUNC_IMPL(__imp__sub_827FF170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x827ff184
	if (!cr6.eq) goto loc_827FF184;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_827FF184:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ff1ec
	if (cr6.eq) goto loc_827FF1EC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827ff1ec
	if (cr6.eq) goto loc_827FF1EC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x827ff1ec
	if (!cr6.eq) goto loc_827FF1EC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ff1e0
	if (cr6.eq) goto loc_827FF1E0;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
loc_827FF1C0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x827ff1e0
	if (!cr0.eq) goto loc_827FF1E0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x827ff1c0
	if (!cr6.eq) goto loc_827FF1C0;
loc_827FF1E0:
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_827FF1EC:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_827FF1F0"))) PPC_WEAK_FUNC(sub_827FF1F0);
PPC_FUNC_IMPL(__imp__sub_827FF1F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF1F4"))) PPC_WEAK_FUNC(sub_827FF1F4);
PPC_FUNC_IMPL(__imp__sub_827FF1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FF1F8"))) PPC_WEAK_FUNC(sub_827FF1F8);
PPC_FUNC_IMPL(__imp__sub_827FF1F8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// lwz r8,64(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r6,68(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r5,72(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r4,76(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 76);
	// li r11,16
	r11.s64 = 16;
	// li r31,5381
	r31.s64 = 5381;
	// lwz r3,24192(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24192);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// ori r8,r10,63
	ctx.r8.u64 = ctx.r10.u64 | 63;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
loc_827FF258:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mullw r10,r31,r8
	ctx.r10.s64 = int64_t(r31.s32) * int64_t(ctx.r8.s32);
	// lbzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + ctx.r7.u32);
	// add r31,r9,r10
	r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bdnz 0x827ff258
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FF258;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// li r5,5381
	ctx.r5.s64 = 5381;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r4,r9,1
	ctx.r4.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// bl 0x82760cb8
	sub_82760CB8(ctx, base);
	// lwz r8,60(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// xor r31,r3,r31
	r31.u64 = ctx.r3.u64 ^ r31.u64;
	// rlwinm r7,r8,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r8,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// li r5,5381
	ctx.r5.s64 = 5381;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// clrlwi r4,r6,1
	ctx.r4.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// bl 0x82760cb8
	sub_82760CB8(ctx, base);
	// xor r31,r3,r31
	r31.u64 = ctx.r3.u64 ^ r31.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_827FF2D4"))) PPC_WEAK_FUNC(sub_827FF2D4);
PPC_FUNC_IMPL(__imp__sub_827FF2D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF2D8"))) PPC_WEAK_FUNC(sub_827FF2D8);
PPC_FUNC_IMPL(__imp__sub_827FF2D8) {
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
	// lhz r11,42(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 42);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ff340
	if (cr6.eq) goto loc_827FF340;
	// lhz r11,42(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 42);
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ff340
	if (cr6.eq) goto loc_827FF340;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// bl 0x82760b90
	sub_82760B90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827ff378
	if (cr6.eq) goto loc_827FF378;
loc_827FF340:
	// lhz r11,42(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 42);
	// rlwinm r10,r11,21,11,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x1FFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ff3a4
	if (cr6.eq) goto loc_827FF3A4;
	// lhz r11,42(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 42);
	// rlwinm r10,r11,21,11,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x1FFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ff3a4
	if (cr6.eq) goto loc_827FF3A4;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x827ff3a4
	if (!cr6.eq) goto loc_827FF3A4;
loc_827FF378:
	// lbz r11,40(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 40);
	// lbz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 40);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ r11.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x827ff3a4
	if (!cr6.eq) goto loc_827FF3A4;
	// xor r11,r10,r11
	r11.u64 = ctx.r10.u64 ^ r11.u64;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827ff3a8
	if (cr6.eq) goto loc_827FF3A8;
loc_827FF3A4:
	// li r11,0
	r11.s64 = 0;
loc_827FF3A8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_827FF3C0"))) PPC_WEAK_FUNC(sub_827FF3C0);
PPC_FUNC_IMPL(__imp__sub_827FF3C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF3C4"))) PPC_WEAK_FUNC(sub_827FF3C4);
PPC_FUNC_IMPL(__imp__sub_827FF3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FF3C8"))) PPC_WEAK_FUNC(sub_827FF3C8);
PPC_FUNC_IMPL(__imp__sub_827FF3C8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lhz r11,42(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 42);
	// li r29,0
	r29.s64 = 0;
	// clrlwi r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r7,24192(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// bne cr6,0x827ff418
	if (!cr6.eq) goto loc_827FF418;
	// rlwinm r8,r11,22,26,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0x3F;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x827ff41c
	if (cr6.eq) goto loc_827FF41C;
loc_827FF418:
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 32);
loc_827FF41C:
	// rlwinm r8,r11,31,17,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFF;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x827ff434
	if (cr6.eq) goto loc_827FF434;
	// lhz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 36);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
loc_827FF434:
	// rlwinm r8,r11,29,19,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFF;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x827ff450
	if (cr6.eq) goto loc_827FF450;
	// lhz r8,38(r30)
	ctx.r8.u64 = PPC_LOAD_U16(r30.u32 + 38);
	// rotlwi r7,r8,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
loc_827FF450:
	// lbz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 40);
	// rlwinm r7,r11,24,0,7
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFF000000;
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// rotlwi r5,r8,24
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 24);
	// or r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 | ctx.r9.u64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x827ff480
	if (cr6.eq) goto loc_827FF480;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_827FF480:
	// rlwinm r11,r11,23,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x7F;
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827ff4a4
	if (cr6.eq) goto loc_827FF4A4;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827ff4a4
	if (cr6.eq) goto loc_827FF4A4;
	// bl 0x827ff1f8
	sub_827FF1F8(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
loc_827FF4A4:
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,16
	r11.s64 = 16;
	// li r31,5381
	r31.s64 = 5381;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r8,r10,63
	ctx.r8.u64 = ctx.r10.u64 | 63;
loc_827FF4C0:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mullw r10,r31,r8
	ctx.r10.s64 = int64_t(r31.s32) * int64_t(ctx.r8.s32);
	// lbzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + ctx.r7.u32);
	// add r31,r9,r10
	r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bdnz 0x827ff4c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FF4C0;
	// lhz r11,42(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 42);
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ff50c
	if (cr6.eq) goto loc_827FF50C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r5,5381
	ctx.r5.s64 = 5381;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r4,r9,1
	ctx.r4.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// bl 0x82760cb8
	sub_82760CB8(ctx, base);
	// xor r31,r3,r31
	r31.u64 = ctx.r3.u64 ^ r31.u64;
loc_827FF50C:
	// lhz r11,42(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 42);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827ff530
	if (cr6.eq) goto loc_827FF530;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x82760a08
	sub_82760A08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x827ff534
	if (!cr6.eq) goto loc_827FF534;
loc_827FF530:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_827FF534:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ff564
	if (cr6.eq) goto loc_827FF564;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r5,5381
	ctx.r5.s64 = 5381;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r4,r9,1
	ctx.r4.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// bl 0x82760cb8
	sub_82760CB8(ctx, base);
	// xor r31,r3,r31
	r31.u64 = ctx.r3.u64 ^ r31.u64;
loc_827FF564:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_827FF574"))) PPC_WEAK_FUNC(sub_827FF574);
PPC_FUNC_IMPL(__imp__sub_827FF574) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827FF578"))) PPC_WEAK_FUNC(sub_827FF578);
PPC_FUNC_IMPL(__imp__sub_827FF578) {
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
	// lhz r11,22(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 22);
	// li r12,31040
	r12.s64 = 31040;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// and r10,r11,r12
	ctx.r10.u64 = r11.u64 & r12.u64;
	// li r31,0
	r31.s64 = 0;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// sth r31,12(r30)
	PPC_STORE_U16(r30.u32 + 12, r31.u16);
	// sth r31,14(r30)
	PPC_STORE_U16(r30.u32 + 14, r31.u16);
	// sth r31,16(r30)
	PPC_STORE_U16(r30.u32 + 16, r31.u16);
	// sth r31,18(r30)
	PPC_STORE_U16(r30.u32 + 18, r31.u16);
	// sth r31,20(r30)
	PPC_STORE_U16(r30.u32 + 20, r31.u16);
	// sth r9,22(r30)
	PPC_STORE_U16(r30.u32 + 22, ctx.r9.u16);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// lhz r8,22(r30)
	ctx.r8.u64 = PPC_LOAD_U16(r30.u32 + 22);
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwinm r7,r7,0,26,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// sth r7,22(r30)
	PPC_STORE_U16(r30.u32 + 22, ctx.r7.u16);
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

__attribute__((alias("__imp__sub_827FF5EC"))) PPC_WEAK_FUNC(sub_827FF5EC);
PPC_FUNC_IMPL(__imp__sub_827FF5EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF5F0"))) PPC_WEAK_FUNC(sub_827FF5F0);
PPC_FUNC_IMPL(__imp__sub_827FF5F0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r9,r31,1
	ctx.r9.s64 = r31.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,27508(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27508);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
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

__attribute__((alias("__imp__sub_827FF650"))) PPC_WEAK_FUNC(sub_827FF650);
PPC_FUNC_IMPL(__imp__sub_827FF650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF654"))) PPC_WEAK_FUNC(sub_827FF654);
PPC_FUNC_IMPL(__imp__sub_827FF654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FF658"))) PPC_WEAK_FUNC(sub_827FF658);
PPC_FUNC_IMPL(__imp__sub_827FF658) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827ff6b8
	if (cr6.eq) goto loc_827FF6B8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r31,0(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ff690
	if (cr6.eq) goto loc_827FF690;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x827ff69c
	if (cr6.eq) goto loc_827FF69C;
loc_827FF690:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827ff5f0
	sub_827FF5F0(ctx, base);
loc_827FF69C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_827FF6B8:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827FF6CC"))) PPC_WEAK_FUNC(sub_827FF6CC);
PPC_FUNC_IMPL(__imp__sub_827FF6CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827FF6D0"))) PPC_WEAK_FUNC(sub_827FF6D0);
PPC_FUNC_IMPL(__imp__sub_827FF6D0) {
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
	// lhz r11,12(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, r11.u16);
	// lhz r10,14(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// sth r10,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r10.u16);
	// lhz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// sth r9,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r9.u16);
	// lhz r8,18(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// sth r8,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r8.u16);
	// lhz r7,20(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 20);
	// sth r7,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r7.u16);
	// lhz r6,22(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 22);
	// sth r6,22(r3)
	PPC_STORE_U16(ctx.r3.u32 + 22, ctx.r6.u16);
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x827ff658
	sub_827FF658(ctx, base);
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

__attribute__((alias("__imp__sub_827FF730"))) PPC_WEAK_FUNC(sub_827FF730);
PPC_FUNC_IMPL(__imp__sub_827FF730) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF734"))) PPC_WEAK_FUNC(sub_827FF734);
PPC_FUNC_IMPL(__imp__sub_827FF734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FF738"))) PPC_WEAK_FUNC(sub_827FF738);
PPC_FUNC_IMPL(__imp__sub_827FF738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r6,22(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 22);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r6,26,6,31
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ff798
	if (cr6.eq) goto loc_827FF798;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ff798
	if (cr6.eq) goto loc_827FF798;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(r11.u32, 0);
	// li r10,5381
	ctx.r10.s64 = 5381;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ff798
	if (cr6.eq) goto loc_827FF798;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// mtctr r11
	ctr.u64 = r11.u64;
	// ori r8,r9,63
	ctx.r8.u64 = ctx.r9.u64 | 63;
loc_827FF784:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mullw r9,r10,r8
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// lbzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + r11.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bdnz 0x827ff784
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827FF784;
loc_827FF798:
	// rlwinm r11,r6,31,17,31
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFF;
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ff7b0
	if (cr6.eq) goto loc_827FF7B0;
	// lhz r11,12(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// xor r10,r11,r10
	ctx.r10.u64 = r11.u64 ^ ctx.r10.u64;
loc_827FF7B0:
	// rlwinm r11,r6,30,18,31
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFF;
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ff7d0
	if (cr6.eq) goto loc_827FF7D0;
	// lhz r11,14(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// extsh r9,r11
	ctx.r9.s64 = r11.s16;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// xor r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r10.u64;
loc_827FF7D0:
	// rlwinm r11,r6,29,19,31
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFF;
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ff7f0
	if (cr6.eq) goto loc_827FF7F0;
	// lhz r11,16(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// extsh r9,r11
	ctx.r9.s64 = r11.s16;
	// rlwinm r8,r9,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// xor r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r10.u64;
loc_827FF7F0:
	// rlwinm r11,r6,28,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFF;
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ff80c
	if (cr6.eq) goto loc_827FF80C;
	// lhz r11,18(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 16);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
loc_827FF80C:
	// rlwinm r11,r6,27,21,31
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FF;
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ff828
	if (cr6.eq) goto loc_827FF828;
	// lhz r11,20(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 20);
	// rlwinm r9,r11,18,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0xFFFFFFFC;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
loc_827FF828:
	// rlwinm r11,r6,25,23,31
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 25) & 0x1FF;
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827ff848
	if (cr6.eq) goto loc_827FF848;
	// rlwinm r11,r6,0,16,16
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x827ff84c
	if (!cr6.eq) goto loc_827FF84C;
loc_827FF848:
	// li r11,0
	r11.s64 = 0;
loc_827FF84C:
	// lhz r9,22(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 22);
	// clrlwi r8,r11,24
	ctx.r8.u64 = r11.u32 & 0xFF;
	// rlwinm r7,r9,24,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x6;
	// rotlwi r6,r9,9
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 9);
	// rlwinm r5,r9,31,20,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0xC00;
	// or r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 | ctx.r6.u64;
	// or r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 | ctx.r8.u64;
	// xor r11,r3,r5
	r11.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// xor r3,r11,r10
	ctx.r3.u64 = r11.u64 ^ ctx.r10.u64;
}

__attribute__((alias("__imp__sub_827FF870"))) PPC_WEAK_FUNC(sub_827FF870);
PPC_FUNC_IMPL(__imp__sub_827FF870) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF874"))) PPC_WEAK_FUNC(sub_827FF874);
PPC_FUNC_IMPL(__imp__sub_827FF874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FF878"))) PPC_WEAK_FUNC(sub_827FF878);
PPC_FUNC_IMPL(__imp__sub_827FF878) {
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
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lis r11,-31932
	r11.s64 = -2092695552;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-5128
	r31.s64 = r11.s64 + -5128;
	// lwz r11,-5124(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5124);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827ff8c8
	if (!cr6.eq) goto loc_827FF8C8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-5124(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5124, r11.u32);
	// bl 0x827614d8
	sub_827614D8(ctx, base);
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-15136
	ctx.r3.s64 = r11.s64 + -15136;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_827FF8C8:
	// lhz r11,42(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 42);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827ff8e4
	if (!cr6.eq) goto loc_827FF8E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_827FF8E4:
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

__attribute__((alias("__imp__sub_827FF8F8"))) PPC_WEAK_FUNC(sub_827FF8F8);
PPC_FUNC_IMPL(__imp__sub_827FF8F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

