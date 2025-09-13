#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82533138"))) PPC_WEAK_FUNC(sub_82533138);
PPC_FUNC_IMPL(__imp__sub_82533138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r5,-20768(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -20768);
	// b 0x8251fdb0
	sub_8251FDB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82533144"))) PPC_WEAK_FUNC(sub_82533144);
PPC_FUNC_IMPL(__imp__sub_82533144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82533148"))) PPC_WEAK_FUNC(sub_82533148);
PPC_FUNC_IMPL(__imp__sub_82533148) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251ffe8
	sub_8251FFE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253314C"))) PPC_WEAK_FUNC(sub_8253314C);
PPC_FUNC_IMPL(__imp__sub_8253314C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82533150"))) PPC_WEAK_FUNC(sub_82533150);
PPC_FUNC_IMPL(__imp__sub_82533150) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251f9d8
	sub_8251F9D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82533154"))) PPC_WEAK_FUNC(sub_82533154);
PPC_FUNC_IMPL(__imp__sub_82533154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82533158"))) PPC_WEAK_FUNC(sub_82533158);
PPC_FUNC_IMPL(__imp__sub_82533158) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r9,r11,29116
	ctx.r9.s64 = r11.s64 + 29116;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82533194
	if (cr6.eq) goto loc_82533194;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82533198
	if (!cr6.eq) goto loc_82533198;
loc_82533194:
	// li r11,0
	r11.s64 = 0;
loc_82533198:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19644(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19644);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r28,r27,160
	r28.s64 = r27.s64 + 160;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825331f0
	if (!cr6.eq) goto loc_825331F0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825331f0
	if (!cr6.eq) goto loc_825331F0;
	// lwz r11,19644(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19644);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825331F0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82520060
	sub_82520060(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82533204"))) PPC_WEAK_FUNC(sub_82533204);
PPC_FUNC_IMPL(__imp__sub_82533204) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82533208"))) PPC_WEAK_FUNC(sub_82533208);
PPC_FUNC_IMPL(__imp__sub_82533208) {
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
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r21,0
	r21.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825333d0
	if (!cr6.gt) goto loc_825333D0;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// li r22,0
	r22.s64 = 0;
	// lis r24,-31965
	r24.s64 = -2094858240;
	// addi r23,r11,-20760
	r23.s64 = r11.s64 + -20760;
loc_82533238:
	// lwz r11,124(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 124);
	// add r31,r22,r11
	r31.u64 = r22.u64 + r11.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82533254
	if (cr6.lt) goto loc_82533254;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x82533258
	goto loc_82533258;
loc_82533254:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_82533258:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82533288
	if (cr6.eq) goto loc_82533288;
loc_8253326C:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8253326c
	if (!cr6.eq) goto loc_8253326C;
loc_82533288:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r27,r31,28
	r27.s64 = r31.s64 + 28;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x8251ebd0
	sub_8251EBD0(ctx, base);
	// lwz r10,-20764(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + -20764);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x825332e4
	if (cr6.eq) goto loc_825332E4;
loc_825332C8:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x825332c8
	if (!cr6.eq) goto loc_825332C8;
loc_825332E4:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-20764(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + -20764);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// mr r30,r23
	r30.u64 = r23.u64;
	// li r28,4
	r28.s64 = 4;
loc_8253332C:
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82533364
	if (cr6.eq) goto loc_82533364;
loc_82533348:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82533348
	if (!cr6.eq) goto loc_82533348;
loc_82533364:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8253332c
	if (!cr0.eq) goto loc_8253332C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8251ec68
	sub_8251EC68(ctx, base);
	// lwz r11,132(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 132);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r22,r22,48
	r22.s64 = r22.s64 + 48;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// blt cr6,0x82533238
	if (cr6.lt) goto loc_82533238;
loc_825333D0:
	// lwz r11,132(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 132);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82533600
	if (cr6.eq) goto loc_82533600;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82533508
	if (cr6.eq) goto loc_82533508;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x82533674
	if (!cr6.eq) goto loc_82533674;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r25,56
	r30.s64 = r25.s64 + 56;
	// lfd f0,17968(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 17968);
	// lfd f13,18696(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 18696);
	// stfd f0,88(r25)
	PPC_STORE_U64(r25.u32 + 88, f0.u64);
	// stfd f13,64(r25)
	PPC_STORE_U64(r25.u32 + 64, ctx.f13.u64);
	// stfd f0,96(r25)
	PPC_STORE_U64(r25.u32 + 96, f0.u64);
	// stfd f13,72(r25)
	PPC_STORE_U64(r25.u32 + 72, ctx.f13.u64);
	// stfd f13,56(r25)
	PPC_STORE_U64(r25.u32 + 56, ctx.f13.u64);
	// stfd f0,104(r25)
	PPC_STORE_U64(r25.u32 + 104, f0.u64);
	// stfd f13,80(r25)
	PPC_STORE_U64(r25.u32 + 80, ctx.f13.u64);
	// stfd f0,112(r25)
	PPC_STORE_U64(r25.u32 + 112, f0.u64);
	// lwz r11,124(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 124);
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8253343c
	if (cr6.lt) goto loc_8253343C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82533440
	goto loc_82533440;
loc_8253343C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82533440:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 124);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82533468
	if (cr6.lt) goto loc_82533468;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8253346c
	goto loc_8253346C;
loc_82533468:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8253346C:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82533494
	if (cr6.lt) goto loc_82533494;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82533498
	goto loc_82533498;
loc_82533494:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82533498:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825334bc
	if (cr6.lt) goto loc_825334BC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825334c0
	goto loc_825334C0;
loc_825334BC:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825334C0:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r30,24
	ctx.r4.s64 = r30.s64 + 24;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 16);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8251efd8
	sub_8251EFD8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e944c
	return;
loc_82533508:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,124(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 124);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lfd f12,16944(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16944);
	// addi r31,r25,8
	r31.s64 = r25.s64 + 8;
	// lfd f0,17968(r9)
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 17968);
	// lfd f13,18696(r8)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + 18696);
	// lfd f11,29176(r7)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 29176);
	// stfd f12,32(r25)
	PPC_STORE_U64(r25.u32 + 32, ctx.f12.u64);
	// stfd f0,48(r25)
	PPC_STORE_U64(r25.u32 + 48, f0.u64);
	// stfd f13,16(r25)
	PPC_STORE_U64(r25.u32 + 16, ctx.f13.u64);
	// stfd f0,40(r25)
	PPC_STORE_U64(r25.u32 + 40, f0.u64);
	// stfd f13,24(r25)
	PPC_STORE_U64(r25.u32 + 24, ctx.f13.u64);
	// stfd f11,8(r25)
	PPC_STORE_U64(r25.u32 + 8, ctx.f11.u64);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x82533560
	if (cr6.lt) goto loc_82533560;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82533564
	goto loc_82533564;
loc_82533560:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82533564:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8253358c
	if (cr6.lt) goto loc_8253358C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82533590
	goto loc_82533590;
loc_8253358C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82533590:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825335b4
	if (cr6.lt) goto loc_825335B4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825335b8
	goto loc_825335B8;
loc_825335B4:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825335B8:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// ld r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// ld r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// bl 0x8251ee58
	sub_8251EE58(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e944c
	return;
loc_82533600:
	// lwz r11,124(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 124);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8253361c
	if (cr6.lt) goto loc_8253361C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82533620
	goto loc_82533620;
loc_8253361C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82533620:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82533644
	if (cr6.lt) goto loc_82533644;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82533648
	goto loc_82533648;
loc_82533644:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82533648:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfd f1,18272(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 18272);
	// lfd f2,16944(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16944);
	// bl 0x8251ed08
	sub_8251ED08(ctx, base);
loc_82533674:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_82533678"))) PPC_WEAK_FUNC(sub_82533678);
PPC_FUNC_IMPL(__imp__sub_82533678) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_8253367C"))) PPC_WEAK_FUNC(sub_8253367C);
PPC_FUNC_IMPL(__imp__sub_8253367C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82533680"))) PPC_WEAK_FUNC(sub_82533680);
PPC_FUNC_IMPL(__imp__sub_82533680) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r24,0
	r24.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825337ac
	if (!cr6.gt) goto loc_825337AC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r24
	r31.u64 = r24.u64;
	// li r29,4
	r29.s64 = 4;
	// lis r25,-31965
	r25.s64 = -2094858240;
	// lis r26,-31965
	r26.s64 = -2094858240;
	// addi r27,r11,17016
	r27.s64 = r11.s64 + 17016;
loc_825336C0:
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// add r6,r31,r11
	ctx.r6.u64 = r31.u64 + r11.u64;
	// lwz r11,20(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x825336dc
	if (cr6.lt) goto loc_825336DC;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x825336e0
	goto loc_825336E0;
loc_825336DC:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_825336E0:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82533710
	if (cr6.eq) goto loc_82533710;
loc_825336F4:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825336f4
	if (!cr6.eq) goto loc_825336F4;
loc_82533710:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r6,28
	ctx.r3.s64 = ctx.r6.s64 + 28;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// bne cr6,0x82533738
	if (!cr6.eq) goto loc_82533738;
	// lwz r11,-20736(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -20736);
	// b 0x8253373c
	goto loc_8253373C;
loc_82533738:
	// lwz r11,-20732(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -20732);
loc_8253373C:
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82533798
	if (cr6.eq) goto loc_82533798;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r24.u32);
loc_82533798:
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x825336c0
	if (cr6.lt) goto loc_825336C0;
loc_825337AC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_825337B0"))) PPC_WEAK_FUNC(sub_825337B0);
PPC_FUNC_IMPL(__imp__sub_825337B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_825337B4"))) PPC_WEAK_FUNC(sub_825337B4);
PPC_FUNC_IMPL(__imp__sub_825337B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825337B8"))) PPC_WEAK_FUNC(sub_825337B8);
PPC_FUNC_IMPL(__imp__sub_825337B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r9.u32);
	// beq cr6,0x82533b3c
	if (cr6.eq) goto loc_82533B3C;
	// lwz r28,4(r4)
	r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bge cr6,0x82533b3c
	if (!cr6.lt) goto loc_82533B3C;
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82533828
	if (cr6.lt) goto loc_82533828;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8253382c
	goto loc_8253382C;
loc_82533828:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8253382C:
	// addi r31,r11,28
	r31.s64 = r11.s64 + 28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lbz r11,28(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 28);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82533b3c
	if (!cr6.eq) goto loc_82533B3C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f30,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bgt cr6,0x82533868
	if (cr6.gt) goto loc_82533868;
	// lfs f0,20(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 20);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// ble cr6,0x82533b3c
	if (!cr6.gt) goto loc_82533B3C;
loc_82533868:
	// lis r26,-31970
	r26.s64 = -2095185920;
	// lwz r3,-14756(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82533888
	if (cr6.eq) goto loc_82533888;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253388c
	if (!cr6.eq) goto loc_8253388C;
loc_82533888:
	// li r11,0
	r11.s64 = 0;
loc_8253388C:
	// lis r24,-31965
	r24.s64 = -2094858240;
	// lwz r23,80(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r22,r24,-20760
	r22.s64 = r24.s64 + -20760;
	// lwz r4,8(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 8);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lwz r4,12(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r19,r10,17012
	r19.s64 = ctx.r10.s64 + 17012;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// lwz r6,-20744(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + -20744);
	// addi r18,r11,-20744
	r18.s64 = r11.s64 + -20744;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8250c5f8
	sub_8250C5F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r6,4(r18)
	ctx.r6.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8250c5f8
	sub_8250C5F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-20760(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + -20760);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	f0.f64 = double(temp.f32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r22,r8,17300
	r22.s64 = ctx.r8.s64 + 17300;
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f31,6196(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6196);
	f31.f64 = double(temp.f32);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 * f31.f64));
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8250c918
	sub_8250C918(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8250c758
	sub_8250C758(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lfs f11,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * f31.f64));
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8250c918
	sub_8250C918(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8250c758
	sub_8250C758(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f13,20(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82533a7c
	if (!cr6.eq) goto loc_82533A7C;
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// ble cr6,0x82533a7c
	if (!cr6.gt) goto loc_82533A7C;
	// addi r11,r28,47
	r11.s64 = r28.s64 + 47;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfd f13,24216(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24216);
	// lfsx f12,r11,r30
	temp.u32 = PPC_LOAD_U32(r11.u32 + r30.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// beq cr6,0x82533aa4
	if (cr6.eq) goto loc_82533AA4;
	// stfsx f0,r11,r30
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + r30.u32, temp.u32);
	// li r25,1
	r25.s64 = 1;
	// b 0x82533aa4
	goto loc_82533AA4;
loc_82533A7C:
	// li r10,3
	ctx.r10.s64 = 3;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f13.f64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ble cr6,0x82533a98
	if (!cr6.gt) goto loc_82533A98;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfd f0,27392(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 27392);
	// b 0x82533aa0
	goto loc_82533AA0;
loc_82533A98:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,16944(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 16944);
loc_82533AA0:
	// stfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
loc_82533AA4:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r6,r10,29200
	ctx.r6.s64 = ctx.r10.s64 + 29200;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r11,r9
	r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// clrlwi r10,r25,24
	ctx.r10.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82533b34
	if (cr6.eq) goto loc_82533B34;
	// lwz r3,-14756(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82533b04
	if (cr6.eq) goto loc_82533B04;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82533b08
	if (!cr6.eq) goto loc_82533B08;
loc_82533B04:
	// li r11,0
	r11.s64 = 0;
loc_82533B08:
	// lwz r31,52(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82533b34
	if (cr6.eq) goto loc_82533B34;
	// lwz r4,132(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x825c6180
	sub_825C6180(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,29184
	ctx.r5.s64 = r11.s64 + 29184;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e1940
	sub_822E1940(ctx, base);
loc_82533B34:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_82533B3C:
	// lwz r3,368(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
}

__attribute__((alias("__imp__sub_82533B50"))) PPC_WEAK_FUNC(sub_82533B50);
PPC_FUNC_IMPL(__imp__sub_82533B50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_82533B54"))) PPC_WEAK_FUNC(sub_82533B54);
PPC_FUNC_IMPL(__imp__sub_82533B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82533B58"))) PPC_WEAK_FUNC(sub_82533B58);
PPC_FUNC_IMPL(__imp__sub_82533B58) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825200d8
	sub_825200D8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r30,r31,160
	r30.s64 = r31.s64 + 160;
	// addi r10,r11,29116
	ctx.r10.s64 = r11.s64 + 29116;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lis r11,-32173
	r11.s64 = -2108489728;
	// addi r29,r11,14264
	r29.s64 = r11.s64 + 14264;
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82533bac
	if (cr6.eq) goto loc_82533BAC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82533bb0
	if (!cr6.eq) goto loc_82533BB0;
loc_82533BAC:
	// li r11,0
	r11.s64 = 0;
loc_82533BB0:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,-1216
	ctx.r3.s64 = ctx.r9.s64 + -1216;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,19644(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19644);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r11,-16512
	r11.s64 = -1082130432;
	// addi r10,r31,188
	ctx.r10.s64 = r31.s64 + 188;
	// stw r11,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82533C1C"))) PPC_WEAK_FUNC(sub_82533C1C);
PPC_FUNC_IMPL(__imp__sub_82533C1C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82533C20"))) PPC_WEAK_FUNC(sub_82533C20);
PPC_FUNC_IMPL(__imp__sub_82533C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-20768(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -20768);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82533C2C"))) PPC_WEAK_FUNC(sub_82533C2C);
PPC_FUNC_IMPL(__imp__sub_82533C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82533C30"))) PPC_WEAK_FUNC(sub_82533C30);
PPC_FUNC_IMPL(__imp__sub_82533C30) {
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
	// bl 0x82533158
	sub_82533158(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82533c68
	if (cr6.eq) goto loc_82533C68;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82533C68:
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

__attribute__((alias("__imp__sub_82533C7C"))) PPC_WEAK_FUNC(sub_82533C7C);
PPC_FUNC_IMPL(__imp__sub_82533C7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82533C80"))) PPC_WEAK_FUNC(sub_82533C80);
PPC_FUNC_IMPL(__imp__sub_82533C80) {
	PPC_FUNC_PROLOGUE();
	// b 0x82534b98
	sub_82534B98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82533C80"))) PPC_WEAK_FUNC(sub_82533C80);
PPC_FUNC_IMPL(__imp__sub_82533C80) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82533C84"))) PPC_WEAK_FUNC(sub_82533C84);
PPC_FUNC_IMPL(__imp__sub_82533C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82533C88"))) PPC_WEAK_FUNC(sub_82533C88);
PPC_FUNC_IMPL(__imp__sub_82533C88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,200(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82533CA4:
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// stb r9,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r9.u8);
	// stw r6,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r6.u32);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// stw r9,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r9.u32);
	// blt cr6,0x82533ccc
	if (cr6.lt) goto loc_82533CCC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82533CCC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lwz r11,200(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// addi r8,r8,40
	ctx.r8.s64 = ctx.r8.s64 + 40;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// blt cr6,0x82533ca4
	if (cr6.lt) goto loc_82533CA4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82533CE8"))) PPC_WEAK_FUNC(sub_82533CE8);
PPC_FUNC_IMPL(__imp__sub_82533CE8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r9,r11,29388
	ctx.r9.s64 = r11.s64 + 29388;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82533d24
	if (cr6.eq) goto loc_82533D24;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82533d28
	if (!cr6.eq) goto loc_82533D28;
loc_82533D24:
	// li r11,0
	r11.s64 = 0;
loc_82533D28:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19600(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19600);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r27,r28,160
	r27.s64 = r28.s64 + 160;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82533d80
	if (!cr6.eq) goto loc_82533D80;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82533d80
	if (!cr6.eq) goto loc_82533D80;
	// lwz r11,19600(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19600);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82533D80:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r31,r28,188
	r31.s64 = r28.s64 + 188;
	// addi r10,r11,29372
	ctx.r10.s64 = r11.s64 + 29372;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,188(r28)
	PPC_STORE_U32(r28.u32 + 188, ctx.r10.u32);
	// bl 0x82534690
	sub_82534690(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82534b98
	sub_82534B98(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,29360
	ctx.r8.s64 = ctx.r9.s64 + 29360;
	// stw r8,188(r28)
	PPC_STORE_U32(r28.u32 + 188, ctx.r8.u32);
	// bl 0x82534690
	sub_82534690(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82520060
	sub_82520060(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82533DCC"))) PPC_WEAK_FUNC(sub_82533DCC);
PPC_FUNC_IMPL(__imp__sub_82533DCC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82533DD0"))) PPC_WEAK_FUNC(sub_82533DD0);
PPC_FUNC_IMPL(__imp__sub_82533DD0) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,200(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// li r25,0
	r25.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r21,r25
	r21.u64 = r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82533f5c
	if (!cr6.gt) goto loc_82533F5C;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r28,r25
	r28.u64 = r25.u64;
	// mr r24,r25
	r24.u64 = r25.u64;
	// lfs f31,-31496(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31496);
	f31.f64 = double(temp.f32);
	// li r22,4
	r22.s64 = 4;
	// lis r26,-31965
	r26.s64 = -2094858240;
	// lis r20,-32254
	r20.s64 = -2113798144;
	// addi r27,r10,17016
	r27.s64 = ctx.r10.s64 + 17016;
	// addi r23,r11,16508
	r23.s64 = r11.s64 + 16508;
loc_82533E24:
	// lwz r11,192(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 192);
	// add r30,r24,r11
	r30.u64 = r24.u64 + r11.u64;
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82533f44
	if (cr6.eq) goto loc_82533F44;
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x82533e50
	if (cr6.lt) goto loc_82533E50;
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82533e5c
	goto loc_82533E5C;
loc_82533E50:
	// not r11,r11
	r11.u64 = ~r11.u64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82533E5C:
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// lfs f0,29352(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r20.u32 + 29352);
	f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * f31.f64));
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, f0.f64);
	// ble cr6,0x82533f44
	if (!cr6.gt) goto loc_82533F44;
	// lwz r11,124(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 124);
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r23.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r22.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82533ea8
	if (cr6.lt) goto loc_82533EA8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82533eac
	goto loc_82533EAC;
loc_82533EA8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82533EAC:
	// addi r31,r11,28
	r31.s64 = r11.s64 + 28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-20672(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + -20672);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r11,r30,12
	r11.s64 = r30.s64 + 12;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82533f10
	if (cr6.lt) goto loc_82533F10;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82533F10:
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
	// stb r25,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r25.u8);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82533f44
	if (cr6.eq) goto loc_82533F44;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r25.u32);
loc_82533F44:
	// lwz r11,200(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 200);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r24,r24,40
	r24.s64 = r24.s64 + 40;
	// addi r28,r28,48
	r28.s64 = r28.s64 + 48;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// blt cr6,0x82533e24
	if (cr6.lt) goto loc_82533E24;
loc_82533F5C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
}

__attribute__((alias("__imp__sub_82533F64"))) PPC_WEAK_FUNC(sub_82533F64);
PPC_FUNC_IMPL(__imp__sub_82533F64) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_82533F68"))) PPC_WEAK_FUNC(sub_82533F68);
PPC_FUNC_IMPL(__imp__sub_82533F68) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// beq cr6,0x82534104
	if (cr6.eq) goto loc_82534104;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x82534104
	if (!cr6.lt) goto loc_82534104;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,192(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,124(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// add r4,r11,r9
	ctx.r4.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r8
	r30.u64 = r11.u64 + ctx.r8.u64;
	// add r31,r10,r7
	r31.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r3,r6
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, xer);
	// bge cr6,0x82534104
	if (!cr6.lt) goto loc_82534104;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,212(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 212);
	// lwz r4,-20668(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -20668);
	// bl 0x8250c5f8
	sub_8250C5F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r6,8(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8253400C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8253400c
	if (!cr6.eq) goto loc_8253400C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r29,r30,12
	r29.s64 = r30.s64 + 12;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,16512
	ctx.r8.s64 = ctx.r10.s64 + 16512;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x82534068
	if (cr6.lt) goto loc_82534068;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8253406c
	goto loc_8253406C;
loc_82534068:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_8253406C:
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r6,r11,17016
	ctx.r6.s64 = r11.s64 + 17016;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// cntlzw r11,r9
	r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-20672(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20672);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x825340d8
	if (cr6.lt) goto loc_825340D8;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x825340dc
	goto loc_825340DC;
loc_825340D8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_825340DC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r11.u8);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_82534104:
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_82534110"))) PPC_WEAK_FUNC(sub_82534110);
PPC_FUNC_IMPL(__imp__sub_82534110) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82534114"))) PPC_WEAK_FUNC(sub_82534114);
PPC_FUNC_IMPL(__imp__sub_82534114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82534118"))) PPC_WEAK_FUNC(sub_82534118);
PPC_FUNC_IMPL(__imp__sub_82534118) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825200d8
	sub_825200D8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r26,r30,160
	r26.s64 = r30.s64 + 160;
	// addi r10,r11,29388
	ctx.r10.s64 = r11.s64 + 29388;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r29,0
	r29.s64 = 0;
	// addi r8,r9,29372
	ctx.r8.s64 = ctx.r9.s64 + 29372;
	// stw r29,192(r30)
	PPC_STORE_U32(r30.u32 + 192, r29.u32);
	// addi r31,r30,188
	r31.s64 = r30.s64 + 188;
	// stw r8,188(r30)
	PPC_STORE_U32(r30.u32 + 188, ctx.r8.u32);
	// stw r29,200(r30)
	PPC_STORE_U32(r30.u32 + 200, r29.u32);
	// stw r29,196(r30)
	PPC_STORE_U32(r30.u32 + 196, r29.u32);
	// stw r29,204(r30)
	PPC_STORE_U32(r30.u32 + 204, r29.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r7,204(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r28,-31970
	r28.s64 = -2095185920;
	// or r5,r7,r3
	ctx.r5.u64 = ctx.r7.u64 | ctx.r3.u64;
	// addi r4,r6,29452
	ctx.r4.s64 = ctx.r6.s64 + 29452;
	// stw r5,204(r30)
	PPC_STORE_U32(r30.u32 + 204, ctx.r5.u32);
	// stw r4,188(r30)
	PPC_STORE_U32(r30.u32 + 188, ctx.r4.u32);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825341a4
	if (cr6.eq) goto loc_825341A4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825341a8
	if (!cr6.eq) goto loc_825341A8;
loc_825341A4:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_825341A8:
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// stw r11,212(r30)
	PPC_STORE_U32(r30.u32 + 212, r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bge cr6,0x825341d4
	if (!cr6.lt) goto loc_825341D4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825341D4:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lis r11,-32173
	r11.s64 = -2108489728;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// addi r27,r11,16232
	r27.s64 = r11.s64 + 16232;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82534204
	if (cr6.eq) goto loc_82534204;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82534208
	if (!cr6.eq) goto loc_82534208;
loc_82534204:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82534208:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r31,12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,-692
	ctx.r3.s64 = ctx.r9.s64 + -692;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,19600(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19600);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8253425C"))) PPC_WEAK_FUNC(sub_8253425C);
PPC_FUNC_IMPL(__imp__sub_8253425C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82534260"))) PPC_WEAK_FUNC(sub_82534260);
PPC_FUNC_IMPL(__imp__sub_82534260) {
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
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r3,r3,188
	ctx.r3.s64 = ctx.r3.s64 + 188;
	// lwz r4,132(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 132);
	// bl 0x82534b20
	sub_82534B20(ctx, base);
	// lwz r11,132(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 132);
	// addi r27,r24,120
	r27.s64 = r24.s64 + 120;
	// lwz r9,124(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 124);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r28,r9
	r28.s64 = ctx.r9.s32;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x82534428
	if (cr6.eq) goto loc_82534428;
	// addi r29,r28,28
	r29.s64 = r28.s64 + 28;
	// lis r26,-31965
	r26.s64 = -2094858240;
	// lis r25,-31965
	r25.s64 = -2094858240;
loc_825342B0:
	// lwz r11,-8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -8);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x825342c4
	if (cr6.lt) goto loc_825342C4;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x825342c8
	goto loc_825342C8;
loc_825342C4:
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
loc_825342C8:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825342f8
	if (cr6.eq) goto loc_825342F8;
loc_825342DC:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825342dc
	if (!cr6.eq) goto loc_825342DC;
loc_825342F8:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8251ebd0
	sub_8251EBD0(ctx, base);
	// lwz r10,-20676(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + -20676);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82534350
	if (cr6.eq) goto loc_82534350;
loc_82534334:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82534334
	if (!cr6.eq) goto loc_82534334;
loc_82534350:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-20676(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + -20676);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lwz r10,-20672(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + -20672);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x825343c4
	if (cr6.eq) goto loc_825343C4;
loc_825343A8:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x825343a8
	if (!cr6.eq) goto loc_825343A8;
loc_825343C4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-20672(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + -20672);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r28,r28,48
	r28.s64 = r28.s64 + 48;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// add r8,r11,r9
	ctx.r8.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r8,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r28,r7
	cr6.compare<uint32_t>(r28.u32, ctx.r7.u32, xer);
	// bne cr6,0x825342b0
	if (!cr6.eq) goto loc_825342B0;
loc_82534428:
	// lwz r11,132(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 132);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x825345a4
	if (cr6.eq) goto loc_825345A4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x8253450c
	if (cr6.eq) goto loc_8253450C;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x82534618
	if (!cr6.eq) goto loc_82534618;
	// lwz r11,124(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 124);
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82534460
	if (cr6.lt) goto loc_82534460;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82534464
	goto loc_82534464;
loc_82534460:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82534464:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8253448c
	if (cr6.lt) goto loc_8253448C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82534490
	goto loc_82534490;
loc_8253448C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82534490:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825344b8
	if (cr6.lt) goto loc_825344B8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825344bc
	goto loc_825344BC;
loc_825344B8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825344BC:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825344e0
	if (cr6.lt) goto loc_825344E0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825344e4
	goto loc_825344E4;
loc_825344E0:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825344E4:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x8251f450
	sub_8251F450(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_8253450C:
	// lwz r11,124(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 124);
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82534528
	if (cr6.lt) goto loc_82534528;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8253452c
	goto loc_8253452C;
loc_82534528:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8253452C:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82534554
	if (cr6.lt) goto loc_82534554;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82534558
	goto loc_82534558;
loc_82534554:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82534558:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8253457c
	if (cr6.lt) goto loc_8253457C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82534580
	goto loc_82534580;
loc_8253457C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82534580:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x8251f3c0
	sub_8251F3C0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_825345A4:
	// lwz r11,124(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 124);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825345c0
	if (cr6.lt) goto loc_825345C0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825345c4
	goto loc_825345C4;
loc_825345C0:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825345C4:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825345e8
	if (cr6.lt) goto loc_825345E8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825345ec
	goto loc_825345EC;
loc_825345E8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825345EC:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfd f1,18248(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 18248);
	// lfd f2,16944(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16944);
	// bl 0x8251ed08
	sub_8251ED08(ctx, base);
loc_82534618:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8253461C"))) PPC_WEAK_FUNC(sub_8253461C);
PPC_FUNC_IMPL(__imp__sub_8253461C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82534620"))) PPC_WEAK_FUNC(sub_82534620);
PPC_FUNC_IMPL(__imp__sub_82534620) {
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
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r11,15
	r11.s64 = 15;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// addi r11,r31,12
	r11.s64 = r31.s64 + 12;
	// stb r10,12(r31)
	PPC_STORE_U8(r31.u32 + 12, ctx.r10.u8);
	// stb r10,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r10.u8);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// blt cr6,0x82534674
	if (cr6.lt) goto loc_82534674;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82534674:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8253468C"))) PPC_WEAK_FUNC(sub_8253468C);
PPC_FUNC_IMPL(__imp__sub_8253468C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82534690"))) PPC_WEAK_FUNC(sub_82534690);
PPC_FUNC_IMPL(__imp__sub_82534690) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82534708
	if (!cr6.gt) goto loc_82534708;
	// li r28,15
	r28.s64 = 15;
	// li r29,0
	r29.s64 = 0;
loc_825346B4:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r31,r11,-28
	r31.s64 = r11.s64 + -28;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825346e4
	if (cr6.lt) goto loc_825346E4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_825346E4:
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r29.u8);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x825346b4
	if (cr6.gt) goto loc_825346B4;
loc_82534708:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8253470C"))) PPC_WEAK_FUNC(sub_8253470C);
PPC_FUNC_IMPL(__imp__sub_8253470C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82534710"))) PPC_WEAK_FUNC(sub_82534710);
PPC_FUNC_IMPL(__imp__sub_82534710) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,29360
	ctx.r10.s64 = r11.s64 + 29360;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82534690
	sub_82534690(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82534754
	if (cr6.eq) goto loc_82534754;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82534754:
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

__attribute__((alias("__imp__sub_82534768"))) PPC_WEAK_FUNC(sub_82534768);
PPC_FUNC_IMPL(__imp__sub_82534768) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253476C"))) PPC_WEAK_FUNC(sub_8253476C);
PPC_FUNC_IMPL(__imp__sub_8253476C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82534770"))) PPC_WEAK_FUNC(sub_82534770);
PPC_FUNC_IMPL(__imp__sub_82534770) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,29372
	ctx.r9.s64 = ctx.r10.s64 + 29372;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// or r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 | ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825347C8"))) PPC_WEAK_FUNC(sub_825347C8);
PPC_FUNC_IMPL(__imp__sub_825347C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825347CC"))) PPC_WEAK_FUNC(sub_825347CC);
PPC_FUNC_IMPL(__imp__sub_825347CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825347D0"))) PPC_WEAK_FUNC(sub_825347D0);
PPC_FUNC_IMPL(__imp__sub_825347D0) {
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
	// bl 0x82534690
	sub_82534690(ctx, base);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8253480c
	if (!cr6.gt) goto loc_8253480C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8253480C:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x825348e8
	if (cr6.eq) goto loc_825348E8;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// li r26,15
	r26.s64 = 15;
	// li r28,0
	r28.s64 = 0;
	// li r27,-1
	r27.s64 = -1;
loc_8253483C:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82534864
	if (!cr6.gt) goto loc_82534864;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82534864:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// stw r8,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r8.u32);
	// rlwinm r11,r7,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825348c0
	if (cr0.eq) goto loc_825348C0;
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + -8);
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lbz r9,-4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + -4);
	// stb r9,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r9.u8);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// stw r26,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r26.u32);
	// stw r28,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r28.u32);
	// stb r28,12(r11)
	PPC_STORE_U8(r11.u32 + 12, r28.u8);
	// bl 0x822f08e0
	sub_822F08E0(ctx, base);
loc_825348C0:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r31,-8
	ctx.r8.s64 = r31.s64 + -8;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// bne cr6,0x8253483c
	if (!cr6.eq) goto loc_8253483C;
loc_825348E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825348EC"))) PPC_WEAK_FUNC(sub_825348EC);
PPC_FUNC_IMPL(__imp__sub_825348EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825348F0"))) PPC_WEAK_FUNC(sub_825348F0);
PPC_FUNC_IMPL(__imp__sub_825348F0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,29372
	ctx.r10.s64 = r11.s64 + 29372;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82534690
	sub_82534690(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82534b98
	sub_82534B98(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,29360
	ctx.r8.s64 = ctx.r9.s64 + 29360;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x82534690
	sub_82534690(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82534944"))) PPC_WEAK_FUNC(sub_82534944);
PPC_FUNC_IMPL(__imp__sub_82534944) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82534948"))) PPC_WEAK_FUNC(sub_82534948);
PPC_FUNC_IMPL(__imp__sub_82534948) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,29372
	ctx.r10.s64 = r11.s64 + 29372;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82534690
	sub_82534690(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82534b98
	sub_82534B98(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,29360
	ctx.r8.s64 = ctx.r9.s64 + 29360;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x82534690
	sub_82534690(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825349ac
	if (cr6.eq) goto loc_825349AC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825349AC:
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

__attribute__((alias("__imp__sub_825349C0"))) PPC_WEAK_FUNC(sub_825349C0);
PPC_FUNC_IMPL(__imp__sub_825349C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825349C4"))) PPC_WEAK_FUNC(sub_825349C4);
PPC_FUNC_IMPL(__imp__sub_825349C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825349C8"))) PPC_WEAK_FUNC(sub_825349C8);
PPC_FUNC_IMPL(__imp__sub_825349C8) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x825349fc
	if (!cr6.gt) goto loc_825349FC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825349FC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r26,15
	r26.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bge cr6,0x82534aa4
	if (!cr6.lt) goto loc_82534AA4;
	// li r28,-1
	r28.s64 = -1;
loc_82534A14:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82534a3c
	if (!cr6.gt) goto loc_82534A3C;
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
loc_82534A3C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// rlwinm r11,r7,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82534a98
	if (cr0.eq) goto loc_82534A98;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lbz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// stb r9,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r9.u8);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// stw r26,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r26.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r29.u32);
	// stb r29,12(r11)
	PPC_STORE_U8(r11.u32 + 12, r29.u8);
	// bl 0x822f08e0
	sub_822F08E0(ctx, base);
loc_82534A98:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// blt cr6,0x82534a14
	if (cr6.lt) goto loc_82534A14;
loc_82534AA4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// ble cr6,0x82534b04
	if (!cr6.gt) goto loc_82534B04;
loc_82534AB0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r30,r11,-28
	r30.s64 = r11.s64 + -28;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82534ae0
	if (cr6.lt) goto loc_82534AE0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82534AE0:
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// stw r26,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r26.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r29.u8);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bgt cr6,0x82534ab0
	if (cr6.gt) goto loc_82534AB0;
loc_82534B04:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82534B08"))) PPC_WEAK_FUNC(sub_82534B08);
PPC_FUNC_IMPL(__imp__sub_82534B08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82534B0C"))) PPC_WEAK_FUNC(sub_82534B0C);
PPC_FUNC_IMPL(__imp__sub_82534B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82534B10"))) PPC_WEAK_FUNC(sub_82534B10);
PPC_FUNC_IMPL(__imp__sub_82534B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-20680(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -20680);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82534B1C"))) PPC_WEAK_FUNC(sub_82534B1C);
PPC_FUNC_IMPL(__imp__sub_82534B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82534B20"))) PPC_WEAK_FUNC(sub_82534B20);
PPC_FUNC_IMPL(__imp__sub_82534B20) {
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
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x82534620
	sub_82534620(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825349c8
	sub_825349C8(ctx, base);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82534b74
	if (cr6.lt) goto loc_82534B74;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82534B74:
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
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

__attribute__((alias("__imp__sub_82534B90"))) PPC_WEAK_FUNC(sub_82534B90);
PPC_FUNC_IMPL(__imp__sub_82534B90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82534B94"))) PPC_WEAK_FUNC(sub_82534B94);
PPC_FUNC_IMPL(__imp__sub_82534B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82534B98"))) PPC_WEAK_FUNC(sub_82534B98);
PPC_FUNC_IMPL(__imp__sub_82534B98) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// beq cr6,0x82534c7c
	if (cr6.eq) goto loc_82534C7C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82534c0c
	if (!cr6.eq) goto loc_82534C0C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// beq cr6,0x82534c7c
	if (cr6.eq) goto loc_82534C7C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82749640
	sub_82749640(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x82534c7c
	goto loc_82534C7C;
loc_82534C0C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82534770
	sub_82534770(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x82534c38
	if (!cr6.gt) goto loc_82534C38;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82534C38:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825347d0
	sub_825347D0(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bl 0x825348f0
	sub_825348F0(ctx, base);
loc_82534C7C:
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

__attribute__((alias("__imp__sub_82534C90"))) PPC_WEAK_FUNC(sub_82534C90);
PPC_FUNC_IMPL(__imp__sub_82534C90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82534C94"))) PPC_WEAK_FUNC(sub_82534C94);
PPC_FUNC_IMPL(__imp__sub_82534C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82534C98"))) PPC_WEAK_FUNC(sub_82534C98);
PPC_FUNC_IMPL(__imp__sub_82534C98) {
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
	// bl 0x82533ce8
	sub_82533CE8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82534cd0
	if (cr6.eq) goto loc_82534CD0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82534CD0:
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

__attribute__((alias("__imp__sub_82534CE4"))) PPC_WEAK_FUNC(sub_82534CE4);
PPC_FUNC_IMPL(__imp__sub_82534CE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82534CE8"))) PPC_WEAK_FUNC(sub_82534CE8);
PPC_FUNC_IMPL(__imp__sub_82534CE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,188(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// b 0x8251fdb0
	sub_8251FDB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82534CF0"))) PPC_WEAK_FUNC(sub_82534CF0);
PPC_FUNC_IMPL(__imp__sub_82534CF0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r9,r11,29564
	ctx.r9.s64 = r11.s64 + 29564;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82534d2c
	if (cr6.eq) goto loc_82534D2C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82534d30
	if (!cr6.eq) goto loc_82534D30;
loc_82534D2C:
	// li r11,0
	r11.s64 = 0;
loc_82534D30:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19612(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19612);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r28,r27,160
	r28.s64 = r27.s64 + 160;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82534d88
	if (!cr6.eq) goto loc_82534D88;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82534d88
	if (!cr6.eq) goto loc_82534D88;
	// lwz r11,19612(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19612);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82534D88:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82520060
	sub_82520060(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82534D9C"))) PPC_WEAK_FUNC(sub_82534D9C);
PPC_FUNC_IMPL(__imp__sub_82534D9C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82534DA0"))) PPC_WEAK_FUNC(sub_82534DA0);
PPC_FUNC_IMPL(__imp__sub_82534DA0) {
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
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// addi r30,r3,120
	r30.s64 = ctx.r3.s64 + 120;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r31,r9
	r31.s64 = ctx.r9.s32;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82534e64
	if (cr6.eq) goto loc_82534E64;
loc_82534DD8:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82534dec
	if (cr6.lt) goto loc_82534DEC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x82534df0
	goto loc_82534DF0;
loc_82534DEC:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_82534DF0:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82534e20
	if (cr6.eq) goto loc_82534E20;
loc_82534E04:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82534e04
	if (!cr6.eq) goto loc_82534E04;
loc_82534E20:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x8251ebd0
	sub_8251EBD0(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82534dd8
	if (!cr6.eq) goto loc_82534DD8;
loc_82534E64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82534E68"))) PPC_WEAK_FUNC(sub_82534E68);
PPC_FUNC_IMPL(__imp__sub_82534E68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82534E6C"))) PPC_WEAK_FUNC(sub_82534E6C);
PPC_FUNC_IMPL(__imp__sub_82534E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82534E70"))) PPC_WEAK_FUNC(sub_82534E70);
PPC_FUNC_IMPL(__imp__sub_82534E70) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// beq cr6,0x82534f94
	if (cr6.eq) goto loc_82534F94;
	// lwz r11,124(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82534eb4
	if (cr6.lt) goto loc_82534EB4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82534eb8
	goto loc_82534EB8;
loc_82534EB4:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82534EB8:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lbz r30,8(r28)
	r30.u64 = PPC_LOAD_U8(r28.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8251eaf8
	sub_8251EAF8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82534ef4
	if (cr6.eq) goto loc_82534EF4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8251ec68
	sub_8251EC68(ctx, base);
loc_82534EF4:
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cmpwi cr6,r6,8
	cr6.compare<int32_t>(ctx.r6.s32, 8, xer);
	// bne cr6,0x82534f18
	if (!cr6.eq) goto loc_82534F18;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r5,r11,29624
	ctx.r5.s64 = r11.s64 + 29624;
	// bl 0x828eb318
	sub_828EB318(ctx, base);
	// b 0x82534f24
	goto loc_82534F24;
loc_82534F18:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r5,r11,27768
	ctx.r5.s64 = r11.s64 + 27768;
	// bl 0x828eb318
	sub_828EB318(ctx, base);
loc_82534F24:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82534f94
	if (cr6.eq) goto loc_82534F94;
	// li r11,0
	r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r6,r7,17016
	ctx.r6.s64 = ctx.r7.s64 + 17016;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_82534F94:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82534FA0"))) PPC_WEAK_FUNC(sub_82534FA0);
PPC_FUNC_IMPL(__imp__sub_82534FA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82534FA4"))) PPC_WEAK_FUNC(sub_82534FA4);
PPC_FUNC_IMPL(__imp__sub_82534FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82534FA8"))) PPC_WEAK_FUNC(sub_82534FA8);
PPC_FUNC_IMPL(__imp__sub_82534FA8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825200d8
	sub_825200D8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r29,r31,160
	r29.s64 = r31.s64 + 160;
	// addi r10,r11,29564
	ctx.r10.s64 = r11.s64 + 29564;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r30,-31970
	r30.s64 = -2095185920;
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82534ff0
	if (cr6.eq) goto loc_82534FF0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82534ff4
	if (!cr6.eq) goto loc_82534FF4;
loc_82534FF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82534FF4:
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// bl 0x82517d10
	sub_82517D10(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82535014
	if (cr6.eq) goto loc_82535014;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,29508
	ctx.r10.s64 = r11.s64 + 29508;
	// b 0x8253501c
	goto loc_8253501C;
loc_82535014:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,29460
	ctx.r10.s64 = r11.s64 + 29460;
loc_8253501C:
	// lis r11,-32173
	r11.s64 = -2108489728;
	// stw r10,188(r31)
	PPC_STORE_U32(r31.u32 + 188, ctx.r10.u32);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r30,r11,20080
	r30.s64 = r11.s64 + 20080;
	// beq cr6,0x82535044
	if (cr6.eq) goto loc_82535044;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82535048
	if (!cr6.eq) goto loc_82535048;
loc_82535044:
	// li r11,0
	r11.s64 = 0;
loc_82535048:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,-848
	ctx.r3.s64 = ctx.r9.s64 + -848;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,19612(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19612);
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
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8253509C"))) PPC_WEAK_FUNC(sub_8253509C);
PPC_FUNC_IMPL(__imp__sub_8253509C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825350A0"))) PPC_WEAK_FUNC(sub_825350A0);
PPC_FUNC_IMPL(__imp__sub_825350A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825350A8"))) PPC_WEAK_FUNC(sub_825350A8);
PPC_FUNC_IMPL(__imp__sub_825350A8) {
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
	// bl 0x82534cf0
	sub_82534CF0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825350e0
	if (cr6.eq) goto loc_825350E0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825350E0:
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

__attribute__((alias("__imp__sub_825350F4"))) PPC_WEAK_FUNC(sub_825350F4);
PPC_FUNC_IMPL(__imp__sub_825350F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825350F8"))) PPC_WEAK_FUNC(sub_825350F8);
PPC_FUNC_IMPL(__imp__sub_825350F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r5,-20076(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -20076);
	// b 0x8251fdb0
	sub_8251FDB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82535104"))) PPC_WEAK_FUNC(sub_82535104);
PPC_FUNC_IMPL(__imp__sub_82535104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82535108"))) PPC_WEAK_FUNC(sub_82535108);
PPC_FUNC_IMPL(__imp__sub_82535108) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251ffe8
	sub_8251FFE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253510C"))) PPC_WEAK_FUNC(sub_8253510C);
PPC_FUNC_IMPL(__imp__sub_8253510C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82535110"))) PPC_WEAK_FUNC(sub_82535110);
PPC_FUNC_IMPL(__imp__sub_82535110) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251f9d8
	sub_8251F9D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82535114"))) PPC_WEAK_FUNC(sub_82535114);
PPC_FUNC_IMPL(__imp__sub_82535114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82535118"))) PPC_WEAK_FUNC(sub_82535118);
PPC_FUNC_IMPL(__imp__sub_82535118) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r9,r11,29748
	ctx.r9.s64 = r11.s64 + 29748;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82535154
	if (cr6.eq) goto loc_82535154;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82535158
	if (!cr6.eq) goto loc_82535158;
loc_82535154:
	// li r11,0
	r11.s64 = 0;
loc_82535158:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19524(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19524);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r28,r27,160
	r28.s64 = r27.s64 + 160;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825351b0
	if (!cr6.eq) goto loc_825351B0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825351b0
	if (!cr6.eq) goto loc_825351B0;
	// lwz r11,19524(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19524);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825351B0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82520060
	sub_82520060(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825351C4"))) PPC_WEAK_FUNC(sub_825351C4);
PPC_FUNC_IMPL(__imp__sub_825351C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825351C8"))) PPC_WEAK_FUNC(sub_825351C8);
PPC_FUNC_IMPL(__imp__sub_825351C8) {
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
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82535364
	if (cr6.eq) goto loc_82535364;
	// li r24,0
	r24.s64 = 0;
	// lis r27,-31965
	r27.s64 = -2094858240;
	// lis r26,-31965
	r26.s64 = -2094858240;
loc_825351F4:
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// add r30,r24,r11
	r30.u64 = r24.u64 + r11.u64;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82535210
	if (cr6.lt) goto loc_82535210;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82535214
	goto loc_82535214;
loc_82535210:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_82535214:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82535244
	if (cr6.eq) goto loc_82535244;
loc_82535228:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82535228
	if (!cr6.eq) goto loc_82535228;
loc_82535244:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r29,r30,28
	r29.s64 = r30.s64 + 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8251ebd0
	sub_8251EBD0(ctx, base);
	// lwz r10,-20072(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + -20072);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x825352a0
	if (cr6.eq) goto loc_825352A0;
loc_82535284:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82535284
	if (!cr6.eq) goto loc_82535284;
loc_825352A0:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-20072(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + -20072);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lwz r10,-20068(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + -20068);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82535314
	if (cr6.eq) goto loc_82535314;
loc_825352F8:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x825352f8
	if (!cr6.eq) goto loc_825352F8;
loc_82535314:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-20068(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + -20068);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lwz r11,132(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r24,r24,48
	r24.s64 = r24.s64 + 48;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x825351f4
	if (cr6.lt) goto loc_825351F4;
loc_82535364:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x825354dc
	if (cr6.eq) goto loc_825354DC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82535444
	if (cr6.eq) goto loc_82535444;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x82535550
	if (!cr6.eq) goto loc_82535550;
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82535398
	if (cr6.lt) goto loc_82535398;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8253539c
	goto loc_8253539C;
loc_82535398:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8253539C:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825353c4
	if (cr6.lt) goto loc_825353C4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825353c8
	goto loc_825353C8;
loc_825353C4:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825353C8:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825353f0
	if (cr6.lt) goto loc_825353F0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825353f4
	goto loc_825353F4;
loc_825353F0:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825353F4:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82535418
	if (cr6.lt) goto loc_82535418;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8253541c
	goto loc_8253541C;
loc_82535418:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8253541C:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x8251f450
	sub_8251F450(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_82535444:
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82535460
	if (cr6.lt) goto loc_82535460;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82535464
	goto loc_82535464;
loc_82535460:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82535464:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8253548c
	if (cr6.lt) goto loc_8253548C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82535490
	goto loc_82535490;
loc_8253548C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82535490:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825354b4
	if (cr6.lt) goto loc_825354B4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825354b8
	goto loc_825354B8;
loc_825354B4:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825354B8:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x8251f3c0
	sub_8251F3C0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_825354DC:
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825354f8
	if (cr6.lt) goto loc_825354F8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825354fc
	goto loc_825354FC;
loc_825354F8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825354FC:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82535520
	if (cr6.lt) goto loc_82535520;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82535524
	goto loc_82535524;
loc_82535520:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82535524:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfd f1,18248(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 18248);
	// lfd f2,16944(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16944);
	// bl 0x8251ed08
	sub_8251ED08(ctx, base);
loc_82535550:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82535554"))) PPC_WEAK_FUNC(sub_82535554);
PPC_FUNC_IMPL(__imp__sub_82535554) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82535558"))) PPC_WEAK_FUNC(sub_82535558);
PPC_FUNC_IMPL(__imp__sub_82535558) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x82535660
	if (!cr6.eq) goto loc_82535660;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r24,0
	r24.s64 = 0;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r29,r24
	r29.u64 = r24.u64;
	// ble cr6,0x82535640
	if (!cr6.gt) goto loc_82535640;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r24
	r30.u64 = r24.u64;
	// li r25,4
	r25.s64 = 4;
	// addi r27,r11,17016
	r27.s64 = r11.s64 + 17016;
	// addi r26,r10,16508
	r26.s64 = ctx.r10.s64 + 16508;
loc_825355A4:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// add r31,r30,r11
	r31.u64 = r30.u64 + r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825355d0
	if (cr6.eq) goto loc_825355D0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
loc_825355D0:
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x825355ec
	if (cr6.lt) goto loc_825355EC;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x825355f0
	goto loc_825355F0;
loc_825355EC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_825355F0:
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// lwz r8,132(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(r29.u32, ctx.r8.u32, xer);
	// blt cr6,0x825355a4
	if (cr6.lt) goto loc_825355A4;
loc_82535640:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82535660
	if (cr6.eq) goto loc_82535660;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
loc_82535660:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82535664"))) PPC_WEAK_FUNC(sub_82535664);
PPC_FUNC_IMPL(__imp__sub_82535664) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82535668"))) PPC_WEAK_FUNC(sub_82535668);
PPC_FUNC_IMPL(__imp__sub_82535668) {
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
	// lbz r11,148(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82535740
	if (cr6.eq) goto loc_82535740;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82535740
	if (!cr6.lt) goto loc_82535740;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82535740
	if (cr6.lt) goto loc_82535740;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825356c8
	if (cr6.lt) goto loc_825356C8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825356cc
	goto loc_825356CC;
loc_825356C8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825356CC:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lbz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82535740
	if (cr6.eq) goto loc_82535740;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,16512
	ctx.r8.s64 = ctx.r10.s64 + 16512;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r6,r6,17016
	ctx.r6.s64 = ctx.r6.s64 + 17016;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_82535740:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82535750"))) PPC_WEAK_FUNC(sub_82535750);
PPC_FUNC_IMPL(__imp__sub_82535750) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82535754"))) PPC_WEAK_FUNC(sub_82535754);
PPC_FUNC_IMPL(__imp__sub_82535754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82535758"))) PPC_WEAK_FUNC(sub_82535758);
PPC_FUNC_IMPL(__imp__sub_82535758) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825200d8
	sub_825200D8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r30,r31,160
	r30.s64 = r31.s64 + 160;
	// addi r10,r11,29748
	ctx.r10.s64 = r11.s64 + 29748;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lis r11,-32173
	r11.s64 = -2108489728;
	// addi r29,r11,22120
	r29.s64 = r11.s64 + 22120;
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825357ac
	if (cr6.eq) goto loc_825357AC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825357b0
	if (!cr6.eq) goto loc_825357B0;
loc_825357AC:
	// li r11,0
	r11.s64 = 0;
loc_825357B0:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,264
	ctx.r3.s64 = ctx.r9.s64 + 264;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,19524(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19524);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82535804"))) PPC_WEAK_FUNC(sub_82535804);
PPC_FUNC_IMPL(__imp__sub_82535804) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82535808"))) PPC_WEAK_FUNC(sub_82535808);
PPC_FUNC_IMPL(__imp__sub_82535808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-20076(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -20076);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82535814"))) PPC_WEAK_FUNC(sub_82535814);
PPC_FUNC_IMPL(__imp__sub_82535814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82535818"))) PPC_WEAK_FUNC(sub_82535818);
PPC_FUNC_IMPL(__imp__sub_82535818) {
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
	// bl 0x82535118
	sub_82535118(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82535850
	if (cr6.eq) goto loc_82535850;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82535850:
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

__attribute__((alias("__imp__sub_82535864"))) PPC_WEAK_FUNC(sub_82535864);
PPC_FUNC_IMPL(__imp__sub_82535864) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82535868"))) PPC_WEAK_FUNC(sub_82535868);
PPC_FUNC_IMPL(__imp__sub_82535868) {
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
	// stw r4,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// bl 0x8251fdb0
	sub_8251FDB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825358B0"))) PPC_WEAK_FUNC(sub_825358B0);
PPC_FUNC_IMPL(__imp__sub_825358B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825358B4"))) PPC_WEAK_FUNC(sub_825358B4);
PPC_FUNC_IMPL(__imp__sub_825358B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825358B8"))) PPC_WEAK_FUNC(sub_825358B8);
PPC_FUNC_IMPL(__imp__sub_825358B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251ffe8
	sub_8251FFE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825358BC"))) PPC_WEAK_FUNC(sub_825358BC);
PPC_FUNC_IMPL(__imp__sub_825358BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825358C0"))) PPC_WEAK_FUNC(sub_825358C0);
PPC_FUNC_IMPL(__imp__sub_825358C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r11,21892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21892);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825358e0
	if (cr6.eq) goto loc_825358E0;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-20004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -20004);
	// blr 
	return;
loc_825358E0:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-20008(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -20008);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825358EC"))) PPC_WEAK_FUNC(sub_825358EC);
PPC_FUNC_IMPL(__imp__sub_825358EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825358F0"))) PPC_WEAK_FUNC(sub_825358F0);
PPC_FUNC_IMPL(__imp__sub_825358F0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r28,-31970
	r28.s64 = -2095185920;
	// addi r10,r11,29916
	ctx.r10.s64 = r11.s64 + 29916;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8253592c
	if (cr6.eq) goto loc_8253592C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82535930
	if (!cr6.eq) goto loc_82535930;
loc_8253592C:
	// li r11,0
	r11.s64 = 0;
loc_82535930:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19460(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19460);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r26,r27,160
	r26.s64 = r27.s64 + 160;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82535988
	if (!cr6.eq) goto loc_82535988;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82535988
	if (!cr6.eq) goto loc_82535988;
	// lwz r11,19460(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19460);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82535988:
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825359a4
	if (cr6.eq) goto loc_825359A4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825359a8
	if (!cr6.eq) goto loc_825359A8;
loc_825359A4:
	// li r11,0
	r11.s64 = 0;
loc_825359A8:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19456(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19456);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r28,r27,188
	r28.s64 = r27.s64 + 188;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82535a00
	if (!cr6.eq) goto loc_82535A00;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82535a00
	if (!cr6.eq) goto loc_82535A00;
	// lwz r11,19456(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19456);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82535A00:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82520060
	sub_82520060(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82535A1C"))) PPC_WEAK_FUNC(sub_82535A1C);
PPC_FUNC_IMPL(__imp__sub_82535A1C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82535A20"))) PPC_WEAK_FUNC(sub_82535A20);
PPC_FUNC_IMPL(__imp__sub_82535A20) {
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
	// lwz r31,124(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82535a50
	if (cr6.lt) goto loc_82535A50;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x82535a54
	goto loc_82535A54;
loc_82535A50:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_82535A54:
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x8251ebd0
	sub_8251EBD0(ctx, base);
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82535ac0
	if (!cr6.eq) goto loc_82535AC0;
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82535a90
	if (cr6.lt) goto loc_82535A90;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82535a94
	goto loc_82535A94;
loc_82535A90:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82535A94:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfd f1,18264(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 18264);
	// lfd f2,16952(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16952);
	// lfd f3,23192(r9)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 23192);
	// bl 0x8251f1c0
	sub_8251F1C0(ctx, base);
loc_82535AC0:
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

__attribute__((alias("__imp__sub_82535AD4"))) PPC_WEAK_FUNC(sub_82535AD4);
PPC_FUNC_IMPL(__imp__sub_82535AD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82535AD8"))) PPC_WEAK_FUNC(sub_82535AD8);
PPC_FUNC_IMPL(__imp__sub_82535AD8) {
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
	// lwz r11,124(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82535b04
	if (cr6.lt) goto loc_82535B04;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82535b08
	goto loc_82535B08;
loc_82535B04:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82535B08:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r11,16512
	ctx.r9.s64 = r11.s64 + 16512;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r6,17016
	ctx.r6.s64 = ctx.r6.s64 + 17016;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// stb r9,216(r31)
	PPC_STORE_U8(r31.u32 + 216, ctx.r9.u8);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82535b90
	if (cr6.eq) goto loc_82535B90;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
loc_82535B90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82535BA0"))) PPC_WEAK_FUNC(sub_82535BA0);
PPC_FUNC_IMPL(__imp__sub_82535BA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82535BA4"))) PPC_WEAK_FUNC(sub_82535BA4);
PPC_FUNC_IMPL(__imp__sub_82535BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82535BA8"))) PPC_WEAK_FUNC(sub_82535BA8);
PPC_FUNC_IMPL(__imp__sub_82535BA8) {
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
	// lwz r11,124(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82535bd8
	if (cr6.lt) goto loc_82535BD8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82535bdc
	goto loc_82535BDC;
loc_82535BD8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82535BDC:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r9,r11,16508
	ctx.r9.s64 = r11.s64 + 16508;
	// li r31,0
	r31.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r7,17016
	ctx.r6.s64 = ctx.r7.s64 + 17016;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,216(r30)
	PPC_STORE_U8(r30.u32 + 216, r31.u8);
	// rlwinm r8,r9,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82535c60
	if (cr6.eq) goto loc_82535C60;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
loc_82535C60:
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

__attribute__((alias("__imp__sub_82535C74"))) PPC_WEAK_FUNC(sub_82535C74);
PPC_FUNC_IMPL(__imp__sub_82535C74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82535C78"))) PPC_WEAK_FUNC(sub_82535C78);
PPC_FUNC_IMPL(__imp__sub_82535C78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,148(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
}

__attribute__((alias("__imp__sub_82535C84"))) PPC_WEAK_FUNC(sub_82535C84);
PPC_FUNC_IMPL(__imp__sub_82535C84) {
	PPC_FUNC_PROLOGUE();
	// b 0x82535ad8
	sub_82535AD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82535C88"))) PPC_WEAK_FUNC(sub_82535C88);
PPC_FUNC_IMPL(__imp__sub_82535C88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82535C8C"))) PPC_WEAK_FUNC(sub_82535C8C);
PPC_FUNC_IMPL(__imp__sub_82535C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82535C90"))) PPC_WEAK_FUNC(sub_82535C90);
PPC_FUNC_IMPL(__imp__sub_82535C90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,148(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
}

__attribute__((alias("__imp__sub_82535C9C"))) PPC_WEAK_FUNC(sub_82535C9C);
PPC_FUNC_IMPL(__imp__sub_82535C9C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82535ba8
	sub_82535BA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82535CA0"))) PPC_WEAK_FUNC(sub_82535CA0);
PPC_FUNC_IMPL(__imp__sub_82535CA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82535CA4"))) PPC_WEAK_FUNC(sub_82535CA4);
PPC_FUNC_IMPL(__imp__sub_82535CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82535CA8"))) PPC_WEAK_FUNC(sub_82535CA8);
PPC_FUNC_IMPL(__imp__sub_82535CA8) {
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
	// bl 0x825200d8
	sub_825200D8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r29,r31,160
	r29.s64 = r31.s64 + 160;
	// addi r10,r11,29916
	ctx.r10.s64 = r11.s64 + 29916;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r26,r31,188
	r26.s64 = r31.s64 + 188;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r28,-31970
	r28.s64 = -2095185920;
	// li r25,0
	r25.s64 = 0;
	// lis r11,-32173
	r11.s64 = -2108489728;
	// stb r25,216(r31)
	PPC_STORE_U8(r31.u32 + 216, r25.u8);
	// stw r25,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r25.u32);
	// addi r27,r11,23672
	r27.s64 = r11.s64 + 23672;
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82535d14
	if (cr6.eq) goto loc_82535D14;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82535d18
	if (!cr6.eq) goto loc_82535D18;
loc_82535D14:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_82535D18:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r24,12(r10)
	r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r30,r11,-3784
	r30.s64 = r11.s64 + -3784;
	// addi r3,r10,1084
	ctx.r3.s64 = ctx.r10.s64 + 1084;
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
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,19460(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19460);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32173
	r11.s64 = -2108489728;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r29,r11,23696
	r29.s64 = r11.s64 + 23696;
	// beq cr6,0x82535d8c
	if (cr6.eq) goto loc_82535D8C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82535d90
	if (!cr6.eq) goto loc_82535D90;
loc_82535D8C:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_82535D90:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,1136
	ctx.r3.s64 = ctx.r10.s64 + 1136;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,19456(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19456);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82535DE0"))) PPC_WEAK_FUNC(sub_82535DE0);
PPC_FUNC_IMPL(__imp__sub_82535DE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82535DE4"))) PPC_WEAK_FUNC(sub_82535DE4);
PPC_FUNC_IMPL(__imp__sub_82535DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82535DE8"))) PPC_WEAK_FUNC(sub_82535DE8);
PPC_FUNC_IMPL(__imp__sub_82535DE8) {
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
	// bl 0x825358f0
	sub_825358F0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82535e20
	if (cr6.eq) goto loc_82535E20;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82535E20:
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

__attribute__((alias("__imp__sub_82535E34"))) PPC_WEAK_FUNC(sub_82535E34);
PPC_FUNC_IMPL(__imp__sub_82535E34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82535E38"))) PPC_WEAK_FUNC(sub_82535E38);
PPC_FUNC_IMPL(__imp__sub_82535E38) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251f9d8
	sub_8251F9D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82535E74"))) PPC_WEAK_FUNC(sub_82535E74);
PPC_FUNC_IMPL(__imp__sub_82535E74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82535E78"))) PPC_WEAK_FUNC(sub_82535E78);
PPC_FUNC_IMPL(__imp__sub_82535E78) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r9,r11,30028
	ctx.r9.s64 = r11.s64 + 30028;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82535eb4
	if (cr6.eq) goto loc_82535EB4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82535eb8
	if (!cr6.eq) goto loc_82535EB8;
loc_82535EB4:
	// li r11,0
	r11.s64 = 0;
loc_82535EB8:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19664(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19664);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r28,r27,160
	r28.s64 = r27.s64 + 160;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82535f10
	if (!cr6.eq) goto loc_82535F10;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82535f10
	if (!cr6.eq) goto loc_82535F10;
	// lwz r11,19664(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19664);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82535F10:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82520060
	sub_82520060(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82535F24"))) PPC_WEAK_FUNC(sub_82535F24);
PPC_FUNC_IMPL(__imp__sub_82535F24) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82535F28"))) PPC_WEAK_FUNC(sub_82535F28);
PPC_FUNC_IMPL(__imp__sub_82535F28) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r23,0
	r23.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r23
	r26.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825360c8
	if (!cr6.gt) goto loc_825360C8;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r22,r23
	r22.u64 = r23.u64;
	// li r24,3
	r24.s64 = 3;
	// lis r27,-31965
	r27.s64 = -2094858240;
	// addi r25,r11,28616
	r25.s64 = r11.s64 + 28616;
loc_82535F60:
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// add r30,r22,r11
	r30.u64 = r22.u64 + r11.u64;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82535f7c
	if (cr6.lt) goto loc_82535F7C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82535f80
	goto loc_82535F80;
loc_82535F7C:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_82535F80:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82535fb0
	if (cr6.eq) goto loc_82535FB0;
loc_82535F94:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82535f94
	if (!cr6.eq) goto loc_82535F94;
loc_82535FB0:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r29,r30,28
	r29.s64 = r30.s64 + 28;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8251ebd0
	sub_8251EBD0(ctx, base);
	// clrldi r11,r26,32
	r11.u64 = r26.u64 & 0xFFFFFFFF;
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r23.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, r11.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stfd f13,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f13.u64);
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r24.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r10,-19944(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + -19944);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82536054
	if (cr6.eq) goto loc_82536054;
loc_82536038:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82536038
	if (!cr6.eq) goto loc_82536038;
loc_82536054:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-19944(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + -19944);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825360b4
	if (cr6.eq) goto loc_825360B4;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r23.u32);
loc_825360B4:
	// lwz r11,132(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r22,r22,48
	r22.s64 = r22.s64 + 48;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x82535f60
	if (cr6.lt) goto loc_82535F60;
loc_825360C8:
	// lwz r11,132(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x825362f0
	if (cr6.eq) goto loc_825362F0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x825361fc
	if (cr6.eq) goto loc_825361FC;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x82536364
	if (!cr6.eq) goto loc_82536364;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r28,56
	r30.s64 = r28.s64 + 56;
	// lfd f13,16944(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + 16944);
	// lfd f0,17968(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 17968);
	// stfd f13,64(r28)
	PPC_STORE_U64(r28.u32 + 64, ctx.f13.u64);
	// stfd f0,88(r28)
	PPC_STORE_U64(r28.u32 + 88, f0.u64);
	// stfd f13,80(r28)
	PPC_STORE_U64(r28.u32 + 80, ctx.f13.u64);
	// stfd f0,104(r28)
	PPC_STORE_U64(r28.u32 + 104, f0.u64);
	// stfd f0,96(r28)
	PPC_STORE_U64(r28.u32 + 96, f0.u64);
	// stfd f13,72(r28)
	PPC_STORE_U64(r28.u32 + 72, ctx.f13.u64);
	// stfd f13,56(r28)
	PPC_STORE_U64(r28.u32 + 56, ctx.f13.u64);
	// stfd f0,112(r28)
	PPC_STORE_U64(r28.u32 + 112, f0.u64);
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82536134
	if (cr6.lt) goto loc_82536134;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82536138
	goto loc_82536138;
loc_82536134:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82536138:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82536160
	if (cr6.lt) goto loc_82536160;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82536164
	goto loc_82536164;
loc_82536160:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82536164:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8253618c
	if (cr6.lt) goto loc_8253618C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82536190
	goto loc_82536190;
loc_8253618C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82536190:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825361b4
	if (cr6.lt) goto loc_825361B4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825361b8
	goto loc_825361B8;
loc_825361B4:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825361B8:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r30,24
	ctx.r4.s64 = r30.s64 + 24;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8251efd8
	sub_8251EFD8(ctx, base);
	// b 0x82536364
	goto loc_82536364;
loc_825361FC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lfd f12,18264(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + 18264);
	// addi r31,r28,8
	r31.s64 = r28.s64 + 8;
	// lfd f0,17968(r9)
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 17968);
	// lfd f13,16944(r8)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16944);
	// lfd f11,28216(r7)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 28216);
	// stfd f12,32(r28)
	PPC_STORE_U64(r28.u32 + 32, ctx.f12.u64);
	// stfd f0,48(r28)
	PPC_STORE_U64(r28.u32 + 48, f0.u64);
	// stfd f13,16(r28)
	PPC_STORE_U64(r28.u32 + 16, ctx.f13.u64);
	// stfd f0,40(r28)
	PPC_STORE_U64(r28.u32 + 40, f0.u64);
	// stfd f13,24(r28)
	PPC_STORE_U64(r28.u32 + 24, ctx.f13.u64);
	// stfd f11,8(r28)
	PPC_STORE_U64(r28.u32 + 8, ctx.f11.u64);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x82536254
	if (cr6.lt) goto loc_82536254;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82536258
	goto loc_82536258;
loc_82536254:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82536258:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82536280
	if (cr6.lt) goto loc_82536280;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82536284
	goto loc_82536284;
loc_82536280:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82536284:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825362a8
	if (cr6.lt) goto loc_825362A8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825362ac
	goto loc_825362AC;
loc_825362A8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825362AC:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// ld r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// ld r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// bl 0x8251ee58
	sub_8251EE58(ctx, base);
	// b 0x82536364
	goto loc_82536364;
loc_825362F0:
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8253630c
	if (cr6.lt) goto loc_8253630C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82536310
	goto loc_82536310;
loc_8253630C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82536310:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82536334
	if (cr6.lt) goto loc_82536334;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82536338
	goto loc_82536338;
loc_82536334:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82536338:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfd f1,30088(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 30088);
	// lfd f2,16944(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16944);
	// bl 0x8251ed08
	sub_8251ED08(ctx, base);
loc_82536364:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_8253637C"))) PPC_WEAK_FUNC(sub_8253637C);
PPC_FUNC_IMPL(__imp__sub_8253637C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_82536380"))) PPC_WEAK_FUNC(sub_82536380);
PPC_FUNC_IMPL(__imp__sub_82536380) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,148(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82536544
	if (cr6.eq) goto loc_82536544;
	// lwz r31,4(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bge cr6,0x82536544
	if (!cr6.lt) goto loc_82536544;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82536544
	if (cr6.lt) goto loc_82536544;
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825363e0
	if (cr6.lt) goto loc_825363E0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825363e4
	goto loc_825363E4;
loc_825363E0:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825363E4:
	// addi r30,r11,28
	r30.s64 = r11.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// add r31,r31,r26
	r31.u64 = r31.u64 + r26.u64;
	// li r29,0
	r29.s64 = 0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r25,4
	r25.s64 = 4;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// lis r27,-31965
	r27.s64 = -2094858240;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// lbz r10,188(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 188);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r28,r11,17016
	r28.s64 = r11.s64 + 17016;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82536480
	if (cr6.eq) goto loc_82536480;
	// lbz r11,8(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82536480
	if (!cr6.eq) goto loc_82536480;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,-19944(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + -19944);
	// addi r10,r11,16508
	ctx.r10.s64 = r11.s64 + 16508;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// stb r29,188(r31)
	PPC_STORE_U8(r31.u32 + 188, r29.u8);
loc_82536480:
	// lbz r11,8(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253653c
	if (cr6.eq) goto loc_8253653C;
	// lbz r11,188(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 188);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8253653c
	if (!cr6.eq) goto loc_8253653C;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8251eaf8
	sub_8251EAF8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825364c0
	if (!cr6.eq) goto loc_825364C0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8251ec68
	sub_8251EC68(ctx, base);
loc_825364C0:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825364e4
	if (cr6.eq) goto loc_825364E4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
loc_825364E4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,-19944(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + -19944);
	// addi r10,r11,16512
	ctx.r10.s64 = r11.s64 + 16512;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,188(r31)
	PPC_STORE_U8(r31.u32 + 188, ctx.r9.u8);
loc_8253653C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_82536544:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82536548"))) PPC_WEAK_FUNC(sub_82536548);
PPC_FUNC_IMPL(__imp__sub_82536548) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8253654C"))) PPC_WEAK_FUNC(sub_8253654C);
PPC_FUNC_IMPL(__imp__sub_8253654C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82536550"))) PPC_WEAK_FUNC(sub_82536550);
PPC_FUNC_IMPL(__imp__sub_82536550) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825200d8
	sub_825200D8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r29,r31,160
	r29.s64 = r31.s64 + 160;
	// addi r10,r11,30028
	ctx.r10.s64 = r11.s64 + 30028;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r28,0
	r28.s64 = 0;
	// addi r9,r31,188
	ctx.r9.s64 = r31.s64 + 188;
	// mr r11,r28
	r11.u64 = r28.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82536590:
	// stbx r28,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, r28.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x82536590
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82536590;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r11,-32173
	r11.s64 = -2108489728;
	// addi r30,r11,25472
	r30.s64 = r11.s64 + 25472;
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825365c4
	if (cr6.eq) goto loc_825365C4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825365c8
	if (!cr6.eq) goto loc_825365C8;
loc_825365C4:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_825365C8:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,-1444
	ctx.r3.s64 = ctx.r9.s64 + -1444;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,19664(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19664);
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
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8253661C"))) PPC_WEAK_FUNC(sub_8253661C);
PPC_FUNC_IMPL(__imp__sub_8253661C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82536620"))) PPC_WEAK_FUNC(sub_82536620);
PPC_FUNC_IMPL(__imp__sub_82536620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-19948(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -19948);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253662C"))) PPC_WEAK_FUNC(sub_8253662C);
PPC_FUNC_IMPL(__imp__sub_8253662C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82536630"))) PPC_WEAK_FUNC(sub_82536630);
PPC_FUNC_IMPL(__imp__sub_82536630) {
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
	// bl 0x82535e78
	sub_82535E78(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82536668
	if (cr6.eq) goto loc_82536668;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82536668:
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

__attribute__((alias("__imp__sub_8253667C"))) PPC_WEAK_FUNC(sub_8253667C);
PPC_FUNC_IMPL(__imp__sub_8253667C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82536680"))) PPC_WEAK_FUNC(sub_82536680);
PPC_FUNC_IMPL(__imp__sub_82536680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,4(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// stb r11,244(r3)
	PPC_STORE_U8(ctx.r3.u32 + 244, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253668C"))) PPC_WEAK_FUNC(sub_8253668C);
PPC_FUNC_IMPL(__imp__sub_8253668C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82536690"))) PPC_WEAK_FUNC(sub_82536690);
PPC_FUNC_IMPL(__imp__sub_82536690) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82536694"))) PPC_WEAK_FUNC(sub_82536694);
PPC_FUNC_IMPL(__imp__sub_82536694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82536698"))) PPC_WEAK_FUNC(sub_82536698);
PPC_FUNC_IMPL(__imp__sub_82536698) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825366d0
	if (cr6.eq) goto loc_825366D0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825366d4
	if (!cr6.eq) goto loc_825366D4;
loc_825366D0:
	// li r11,0
	r11.s64 = 0;
loc_825366D4:
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x826e53d0
	sub_826E53D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82536760
	if (cr6.eq) goto loc_82536760;
	// lwz r11,100(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,23640
	ctx.r4.s64 = ctx.r9.s64 + 23640;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82536760
	if (cr6.eq) goto loc_82536760;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82536760:
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

__attribute__((alias("__imp__sub_82536774"))) PPC_WEAK_FUNC(sub_82536774);
PPC_FUNC_IMPL(__imp__sub_82536774) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82536778"))) PPC_WEAK_FUNC(sub_82536778);
PPC_FUNC_IMPL(__imp__sub_82536778) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r29,0
	r29.s64 = 0;
	// addi r10,r11,30196
	ctx.r10.s64 = r11.s64 + 30196;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825367b8
	if (cr6.eq) goto loc_825367B8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
loc_825367B8:
	// addi r31,r30,32
	r31.s64 = r30.s64 + 32;
	// li r28,4
	r28.s64 = 4;
loc_825367C0:
	// lwz r3,-16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825367d4
	if (cr6.eq) goto loc_825367D4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r29,-16(r31)
	PPC_STORE_U32(r31.u32 + -16, r29.u32);
loc_825367D4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825367e8
	if (cr6.eq) goto loc_825367E8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_825367E8:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x825367c0
	if (!cr0.eq) goto loc_825367C0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82536818
	if (cr6.eq) goto loc_82536818;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
loc_82536818:
	// addi r3,r30,304
	ctx.r3.s64 = r30.s64 + 304;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,276
	ctx.r3.s64 = r30.s64 + 276;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,248
	ctx.r3.s64 = r30.s64 + 248;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,216
	ctx.r3.s64 = r30.s64 + 216;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,188
	ctx.r3.s64 = r30.s64 + 188;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,160
	ctx.r3.s64 = r30.s64 + 160;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,132
	ctx.r3.s64 = r30.s64 + 132;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,104
	ctx.r3.s64 = r30.s64 + 104;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,76
	ctx.r3.s64 = r30.s64 + 76;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,48
	ctx.r3.s64 = r30.s64 + 48;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8253686C"))) PPC_WEAK_FUNC(sub_8253686C);
PPC_FUNC_IMPL(__imp__sub_8253686C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82536870"))) PPC_WEAK_FUNC(sub_82536870);
PPC_FUNC_IMPL(__imp__sub_82536870) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8253699c
	if (cr6.eq) goto loc_8253699C;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,19404(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19404);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8253699c
	if (!cr6.eq) goto loc_8253699C;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r6,r11,1800
	ctx.r6.s64 = r11.s64 + 1800;
	// addi r5,r10,7000
	ctx.r5.s64 = ctx.r10.s64 + 7000;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x8242c518
	sub_8242C518(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8253699c
	if (cr6.eq) goto loc_8253699C;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14368(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82536918
	if (cr6.eq) goto loc_82536918;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253691c
	if (!cr6.eq) goto loc_8253691C;
loc_82536918:
	// li r11,0
	r11.s64 = 0;
loc_8253691C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// bl 0x825cb620
	sub_825CB620(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253699c
	if (cr6.eq) goto loc_8253699C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825ca190
	sub_825CA190(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253699c
	if (cr6.eq) goto loc_8253699C;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x822bf0c0
	sub_822BF0C0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8253699c
	if (cr6.eq) goto loc_8253699C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8253699c
	if (cr6.lt) goto loc_8253699C;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bge cr6,0x8253699c
	if (!cr6.lt) goto loc_8253699C;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,18436(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18436);
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// bl 0x82537c40
	sub_82537C40(ctx, base);
loc_8253699C:
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

__attribute__((alias("__imp__sub_825369B0"))) PPC_WEAK_FUNC(sub_825369B0);
PPC_FUNC_IMPL(__imp__sub_825369B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825369B4"))) PPC_WEAK_FUNC(sub_825369B4);
PPC_FUNC_IMPL(__imp__sub_825369B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825369B8"))) PPC_WEAK_FUNC(sub_825369B8);
PPC_FUNC_IMPL(__imp__sub_825369B8) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lbz r29,84(r4)
	r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 84);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r28,80(r4)
	r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,144
	ctx.r4.s64 = 144;
	// lwz r11,18436(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18436);
	// lwz r27,76(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r26,72(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwz r25,4(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r30,100(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82536a24
	if (cr6.eq) goto loc_82536A24;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r31,8
	ctx.r5.s64 = r31.s64 + 8;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82537bc8
	sub_82537BC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_82536A24:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82536A28"))) PPC_WEAK_FUNC(sub_82536A28);
PPC_FUNC_IMPL(__imp__sub_82536A28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82536A2C"))) PPC_WEAK_FUNC(sub_82536A2C);
PPC_FUNC_IMPL(__imp__sub_82536A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82536A30"))) PPC_WEAK_FUNC(sub_82536A30);
PPC_FUNC_IMPL(__imp__sub_82536A30) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,18436(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18436);
	// lwz r31,100(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82536a7c
	if (cr6.eq) goto loc_82536A7C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,30160
	ctx.r9.s64 = ctx.r10.s64 + 30160;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_82536A7C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82536A8C"))) PPC_WEAK_FUNC(sub_82536A8C);
PPC_FUNC_IMPL(__imp__sub_82536A8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82536A90"))) PPC_WEAK_FUNC(sub_82536A90);
PPC_FUNC_IMPL(__imp__sub_82536A90) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,18436(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18436);
	// lwz r31,100(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82536adc
	if (cr6.eq) goto loc_82536ADC;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,30136
	ctx.r9.s64 = ctx.r10.s64 + 30136;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_82536ADC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82536AEC"))) PPC_WEAK_FUNC(sub_82536AEC);
PPC_FUNC_IMPL(__imp__sub_82536AEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82536AF0"))) PPC_WEAK_FUNC(sub_82536AF0);
PPC_FUNC_IMPL(__imp__sub_82536AF0) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,18436(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18436);
	// lwz r31,100(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82536b3c
	if (cr6.eq) goto loc_82536B3C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,30148
	ctx.r9.s64 = ctx.r10.s64 + 30148;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_82536B3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82536B4C"))) PPC_WEAK_FUNC(sub_82536B4C);
PPC_FUNC_IMPL(__imp__sub_82536B4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82536B50"))) PPC_WEAK_FUNC(sub_82536B50);
PPC_FUNC_IMPL(__imp__sub_82536B50) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,18436(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18436);
	// lwz r31,100(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82536b9c
	if (cr6.eq) goto loc_82536B9C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,30172
	ctx.r9.s64 = ctx.r10.s64 + 30172;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_82536B9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82536BAC"))) PPC_WEAK_FUNC(sub_82536BAC);
PPC_FUNC_IMPL(__imp__sub_82536BAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82536BB0"))) PPC_WEAK_FUNC(sub_82536BB0);
PPC_FUNC_IMPL(__imp__sub_82536BB0) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r30,16(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r8,24192(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r11,r30,0
	r11.u64 = __builtin_rotateleft32(r30.u32, 0);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// stw r8,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r8.u32);
	// cmplw cr6,r30,r7
	cr6.compare<uint32_t>(r30.u32, ctx.r7.u32, xer);
	// beq cr6,0x82536cc0
	if (cr6.eq) goto loc_82536CC0;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r27,r11,17676
	r27.s64 = r11.s64 + 17676;
loc_82536BF4:
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825ca238
	sub_825CA238(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825ca0c8
	sub_825CA0C8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82536ca0
	if (!cr6.eq) goto loc_82536CA0;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// beq cr6,0x82536ca0
	if (cr6.eq) goto loc_82536CA0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825ca170
	sub_825CA170(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82536ca0
	if (cr6.eq) goto loc_82536CA0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r9,r28,4
	ctx.r9.s64 = r28.s64 + 4;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r8,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + r31.u32);
	// bl 0x8242c7e0
	sub_8242C7E0(ctx, base);
	// addi r7,r28,8
	ctx.r7.s64 = r28.s64 + 8;
	// lfs f0,52(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 52);
	f0.f64 = double(temp.f32);
	// lfs f13,56(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,60(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,64(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// lwzx r11,r6,r31
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + r31.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f11,24(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
loc_82536CA0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, xer);
	// bne cr6,0x82536bf4
	if (!cr6.eq) goto loc_82536BF4;
loc_82536CC0:
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lis r30,-31970
	r30.s64 = -2095185920;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,-31140(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31140);
	// lwz r11,-31144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -31144);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r3,-14368(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14368);
	// lwz r29,28(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lbz r11,12(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stb r11,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, r11.u8);
	// lbz r9,13(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// stb r9,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r9.u8);
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// lwz r11,8(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r11.u32);
	// lfs f12,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,196(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lfs f11,16(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,200(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lfs f10,20(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,204(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// lfs f9,24(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,208(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f8,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f7,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,120(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lbz r7,12(r6)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r6.u32 + 12);
	// stb r7,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, ctx.r7.u8);
	// lbz r6,13(r6)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + 13);
	// stb r6,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r6.u8);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r7,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r7.u32);
	// lfs f6,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,212(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lfs f5,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,216(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lfs f4,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,220(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lfs f3,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,224(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,108(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f1,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,124(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lbz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// stb r5,134(r1)
	PPC_STORE_U8(ctx.r1.u32 + 134, ctx.r5.u8);
	// lbz r4,13(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// stb r4,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r4.u8);
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r7,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r7.u32);
	// lfs f0,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,228(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// lfs f13,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,232(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// lfs f12,20(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,236(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// lfs f11,24(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,240(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lbz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U8(r29.u32 + 12);
	// stb r5,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r5.u8);
	// lbz r4,13(r29)
	ctx.r4.u64 = PPC_LOAD_U8(r29.u32 + 13);
	// stb r4,139(r1)
	PPC_STORE_U8(ctx.r1.u32 + 139, ctx.r4.u8);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// lfs f8,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,244(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// lfs f7,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,248(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// lfs f6,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,252(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// lfs f5,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,256(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// beq cr6,0x82536e9c
	if (cr6.eq) goto loc_82536E9C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,-14368(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14368);
	// bne cr6,0x82536ea0
	if (!cr6.eq) goto loc_82536EA0;
loc_82536E9C:
	// li r11,0
	r11.s64 = 0;
loc_82536EA0:
	// lwz r11,104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82536ed0
	if (cr6.eq) goto loc_82536ED0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r5,60
	ctx.r5.s64 = 60;
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
	// lwz r3,-14368(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14368);
loc_82536ED0:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82536ee8
	if (cr6.eq) goto loc_82536EE8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82536eec
	if (!cr6.eq) goto loc_82536EEC;
loc_82536EE8:
	// li r11,0
	r11.s64 = 0;
loc_82536EEC:
	// lwz r11,104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82536f18
	if (cr6.eq) goto loc_82536F18;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r5,116
	ctx.r5.s64 = 116;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82536F18:
	// lwz r3,260(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
}

__attribute__((alias("__imp__sub_82536F24"))) PPC_WEAK_FUNC(sub_82536F24);
PPC_FUNC_IMPL(__imp__sub_82536F24) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82536F28"))) PPC_WEAK_FUNC(sub_82536F28);
PPC_FUNC_IMPL(__imp__sub_82536F28) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,244(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 244);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82536f90
	if (cr6.eq) goto loc_82536F90;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	f0.f64 = double(temp.f32);
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lbz r7,24(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,19568(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19568);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stb r7,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r7.u8);
	// lwz r11,18436(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 18436);
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// bl 0x82537dc8
	sub_82537DC8(ctx, base);
loc_82536F90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82536F9C"))) PPC_WEAK_FUNC(sub_82536F9C);
PPC_FUNC_IMPL(__imp__sub_82536F9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82536FA0"))) PPC_WEAK_FUNC(sub_82536FA0);
PPC_FUNC_IMPL(__imp__sub_82536FA0) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x826e6440
	sub_826E6440(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x825cbc98
	sub_825CBC98(ctx, base);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82536fe0
	if (cr6.eq) goto loc_82536FE0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82536fe4
	if (!cr6.eq) goto loc_82536FE4;
loc_82536FE0:
	// li r11,0
	r11.s64 = 0;
loc_82536FE4:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r31,12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,19668(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19668);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r29,248
	ctx.r4.s64 = r29.s64 + 248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82537038
	if (!cr6.eq) goto loc_82537038;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82537038
	if (!cr6.eq) goto loc_82537038;
	// lwz r11,19668(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19668);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82537038:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,19856(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19856);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r29,276
	ctx.r4.s64 = r29.s64 + 276;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82537088
	if (!cr6.eq) goto loc_82537088;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82537088
	if (!cr6.eq) goto loc_82537088;
	// lwz r11,19856(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19856);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82537088:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,19844(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19844);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r29,304
	ctx.r4.s64 = r29.s64 + 304;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825370d8
	if (!cr6.eq) goto loc_825370D8;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825370d8
	if (!cr6.eq) goto loc_825370D8;
	// lwz r11,19844(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19844);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825370D8:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,17856(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 17856);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82537128
	if (!cr6.eq) goto loc_82537128;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82537128
	if (!cr6.eq) goto loc_82537128;
	// lwz r11,17856(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 17856);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82537128:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,19120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19120);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r29,76
	ctx.r4.s64 = r29.s64 + 76;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82537178
	if (!cr6.eq) goto loc_82537178;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82537178
	if (!cr6.eq) goto loc_82537178;
	// lwz r11,19120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19120);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82537178:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,19876(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19876);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r29,104
	ctx.r4.s64 = r29.s64 + 104;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825371c8
	if (!cr6.eq) goto loc_825371C8;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825371c8
	if (!cr6.eq) goto loc_825371C8;
	// lwz r11,19876(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19876);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825371C8:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,19872(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19872);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r29,132
	ctx.r4.s64 = r29.s64 + 132;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82537218
	if (!cr6.eq) goto loc_82537218;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82537218
	if (!cr6.eq) goto loc_82537218;
	// lwz r11,19872(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19872);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82537218:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,19868(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19868);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r29,160
	ctx.r4.s64 = r29.s64 + 160;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82537268
	if (!cr6.eq) goto loc_82537268;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82537268
	if (!cr6.eq) goto loc_82537268;
	// lwz r11,19868(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19868);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82537268:
	// lis r28,-31933
	r28.s64 = -2092761088;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-27976(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -27976);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r29,188
	ctx.r4.s64 = r29.s64 + 188;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825372b8
	if (!cr6.eq) goto loc_825372B8;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825372b8
	if (!cr6.eq) goto loc_825372B8;
	// lwz r11,-27976(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -27976);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825372B8:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20404(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20404);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r29,216
	ctx.r4.s64 = r29.s64 + 216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82537308
	if (!cr6.eq) goto loc_82537308;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82537308
	if (!cr6.eq) goto loc_82537308;
	// lwz r11,20404(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20404);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82537308:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8253730C"))) PPC_WEAK_FUNC(sub_8253730C);
PPC_FUNC_IMPL(__imp__sub_8253730C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82537310"))) PPC_WEAK_FUNC(sub_82537310);
PPC_FUNC_IMPL(__imp__sub_82537310) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825cbd58
	sub_825CBD58(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x826e66a0
	sub_826E66A0(ctx, base);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82537350
	if (cr6.eq) goto loc_82537350;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82537354
	if (!cr6.eq) goto loc_82537354;
loc_82537350:
	// li r11,0
	r11.s64 = 0;
loc_82537354:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r28,r10,-3784
	r28.s64 = ctx.r10.s64 + -3784;
	// lis r11,-32173
	r11.s64 = -2108489728;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r9,-11696
	ctx.r3.s64 = ctx.r9.s64 + -11696;
	// addi r30,r11,26736
	r30.s64 = r11.s64 + 26736;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,17856(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17856);
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
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// lis r11,-32173
	r11.s64 = -2108489728;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r7,5388
	ctx.r3.s64 = ctx.r7.s64 + 5388;
	// addi r30,r11,27064
	r30.s64 = r11.s64 + 27064;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,19120(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 19120);
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
	// addi r4,r31,76
	ctx.r4.s64 = r31.s64 + 76;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r5,-31970
	ctx.r5.s64 = -2095185920;
	// lis r11,-32173
	r11.s64 = -2108489728;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r5,-3972
	ctx.r3.s64 = ctx.r5.s64 + -3972;
	// addi r30,r11,27184
	r30.s64 = r11.s64 + 27184;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,19876(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19876);
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
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r11,-32173
	r11.s64 = -2108489728;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r10,-3924
	ctx.r3.s64 = ctx.r10.s64 + -3924;
	// addi r30,r11,27280
	r30.s64 = r11.s64 + 27280;
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
	// lwz r11,19872(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19872);
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
	// addi r4,r31,132
	ctx.r4.s64 = r31.s64 + 132;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// lis r11,-32173
	r11.s64 = -2108489728;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r8,-3868
	ctx.r3.s64 = ctx.r8.s64 + -3868;
	// addi r30,r11,27376
	r30.s64 = r11.s64 + 27376;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,19868(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19868);
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
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r6,-31967
	ctx.r6.s64 = -2094989312;
	// lis r11,-32173
	r11.s64 = -2108489728;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r6,23952
	ctx.r3.s64 = ctx.r6.s64 + 23952;
	// addi r30,r11,27472
	r30.s64 = r11.s64 + 27472;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,-27976(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -27976);
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
	// addi r4,r31,188
	ctx.r4.s64 = r31.s64 + 188;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r11,-32173
	r11.s64 = -2108489728;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r10,12476
	ctx.r3.s64 = ctx.r10.s64 + 12476;
	// addi r30,r11,26264
	r30.s64 = r11.s64 + 26264;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,20404(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20404);
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
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// lis r11,-32173
	r11.s64 = -2108489728;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r8,-1488
	ctx.r3.s64 = ctx.r8.s64 + -1488;
	// addi r30,r11,26240
	r30.s64 = r11.s64 + 26240;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19668(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19668);
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
	// addi r4,r31,248
	ctx.r4.s64 = r31.s64 + 248;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r6,-31970
	ctx.r6.s64 = -2095185920;
	// lis r11,-32173
	r11.s64 = -2108489728;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r6,-3708
	ctx.r3.s64 = ctx.r6.s64 + -3708;
	// addi r30,r11,28456
	r30.s64 = r11.s64 + 28456;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r11,19856(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19856);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
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
	// addi r4,r31,276
	ctx.r4.s64 = r31.s64 + 276;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r11,-32173
	r11.s64 = -2108489728;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r10,-3560
	ctx.r3.s64 = ctx.r10.s64 + -3560;
	// addi r30,r11,26256
	r30.s64 = r11.s64 + 26256;
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
	// lwz r11,19844(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19844);
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
	// addi r4,r31,304
	ctx.r4.s64 = r31.s64 + 304;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8253765C"))) PPC_WEAK_FUNC(sub_8253765C);
PPC_FUNC_IMPL(__imp__sub_8253765C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82537660"))) PPC_WEAK_FUNC(sub_82537660);
PPC_FUNC_IMPL(__imp__sub_82537660) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f4
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// addi r10,r11,30196
	ctx.r10.s64 = r11.s64 + 30196;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r30,76
	ctx.r3.s64 = r30.s64 + 76;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r30,104
	ctx.r3.s64 = r30.s64 + 104;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r30,132
	ctx.r3.s64 = r30.s64 + 132;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r30,160
	ctx.r3.s64 = r30.s64 + 160;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r30,188
	ctx.r3.s64 = r30.s64 + 188;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r30,216
	ctx.r3.s64 = r30.s64 + 216;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r30,248
	ctx.r3.s64 = r30.s64 + 248;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r30,276
	ctx.r3.s64 = r30.s64 + 276;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r30,304
	ctx.r3.s64 = r30.s64 + 304;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r31,244(r30)
	PPC_STORE_U8(r30.u32 + 244, r31.u8);
	// li r20,17
	r20.s64 = 17;
	// addi r28,r10,30440
	r28.s64 = ctx.r10.s64 + 30440;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// li r8,50
	ctx.r8.s64 = 50;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// li r3,92
	ctx.r3.s64 = 92;
	// stw r20,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r20.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r19,-31970
	r19.s64 = -2095185920;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82537754
	if (cr6.eq) goto loc_82537754;
	// lwz r3,-14368(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82537738
	if (cr6.eq) goto loc_82537738;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253773c
	if (!cr6.eq) goto loc_8253773C;
loc_82537738:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8253773C:
	// li r6,12
	ctx.r6.s64 = 12;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825382c0
	sub_825382C0(ctx, base);
	// b 0x82537758
	goto loc_82537758;
loc_82537754:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82537758:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// addi r29,r30,28
	r29.s64 = r30.s64 + 28;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// li r21,4
	r21.s64 = 4;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// mr r26,r31
	r26.u64 = r31.u64;
	// stw r20,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r20.u32);
	// addi r27,r11,-23000
	r27.s64 = r11.s64 + -23000;
	// stw r20,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r20.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r31.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r31.u32);
	// ld r25,120(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r24,112(r1)
	r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r23,152(r1)
	r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// ld r22,144(r1)
	r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
loc_825377A0:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r8,54
	ctx.r8.s64 = 54;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// stw r3,-12(r29)
	PPC_STORE_U32(r29.u32 + -12, ctx.r3.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r8,55
	ctx.r8.s64 = 55;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// rldicr r6,r26,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r26.u64, 32) & 0xFFFFFFFF00000000;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82537818
	if (cr6.eq) goto loc_82537818;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,4(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,8(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,12(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// b 0x8253781c
	goto loc_8253781C;
loc_82537818:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8253781C:
	// addic. r21,r21,-1
	xer.ca = r21.u32 > 0;
	r21.s64 = r21.s64 + -1;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// stwu r11,4(r29)
	ea = 4 + r29.u32;
	PPC_STORE_U32(ea, r11.u32);
	r29.u32 = ea;
	// bne 0x825377a0
	if (!cr0.eq) goto loc_825377A0;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r8,59
	ctx.r8.s64 = 59;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r31.u32);
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r20,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r20.u32);
	// ld r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82537884
	if (cr6.eq) goto loc_82537884;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,30428
	ctx.r3.s64 = r11.s64 + 30428;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826cb420
	sub_826CB420(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82537888
	goto loc_82537888;
loc_82537884:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_82537888:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r28,r11,-32208
	r28.s64 = r11.s64 + -32208;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb2a8
	sub_826CB2A8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r5,r10,30392
	ctx.r5.s64 = ctx.r10.s64 + 30392;
	// bl 0x825383f0
	sub_825383F0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r27,r9,-32104
	r27.s64 = ctx.r9.s64 + -32104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb2a8
	sub_826CB2A8(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r5,r8,30352
	ctx.r5.s64 = ctx.r8.s64 + 30352;
	// bl 0x82538530
	sub_82538530(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r7,-19628
	ctx.r3.s64 = ctx.r7.s64 + -19628;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// addi r3,r6,30336
	ctx.r3.s64 = ctx.r6.s64 + 30336;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb2a8
	sub_826CB2A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r5,r5,30292
	ctx.r5.s64 = ctx.r5.s64 + 30292;
	// bl 0x82320b90
	sub_82320B90(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r3,r4,-19140
	ctx.r3.s64 = ctx.r4.s64 + -19140;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,30276
	ctx.r3.s64 = r11.s64 + 30276;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb2a8
	sub_826CB2A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r5,r10,30232
	ctx.r5.s64 = ctx.r10.s64 + 30232;
	// bl 0x82320b90
	sub_82320B90(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r7,-31536
	ctx.r4.s64 = ctx.r7.s64 + -31536;
	// li r7,6
	ctx.r7.s64 = 6;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,18088(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18088);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x826e5b38
	sub_826E5B38(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,-14368(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r6,36(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// beq cr6,0x82537a74
	if (cr6.eq) goto loc_82537A74;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82537a74
	if (cr6.eq) goto loc_82537A74;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82537A74:
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x826e7338
	sub_826E7338(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e77f0
	sub_826E77F0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
}

__attribute__((alias("__imp__sub_82537AA4"))) PPC_WEAK_FUNC(sub_82537AA4);
PPC_FUNC_IMPL(__imp__sub_82537AA4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_82537AA8"))) PPC_WEAK_FUNC(sub_82537AA8);
PPC_FUNC_IMPL(__imp__sub_82537AA8) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-19212
	ctx.r3.s64 = ctx.r10.s64 + -19212;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_82537AF4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82537b18
	if (cr6.eq) goto loc_82537B18;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82537af4
	if (cr6.eq) goto loc_82537AF4;
loc_82537B18:
	// cntlzw r11,r9
	r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82537B34"))) PPC_WEAK_FUNC(sub_82537B34);
PPC_FUNC_IMPL(__imp__sub_82537B34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82537B38"))) PPC_WEAK_FUNC(sub_82537B38);
PPC_FUNC_IMPL(__imp__sub_82537B38) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-19188
	ctx.r3.s64 = ctx.r10.s64 + -19188;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_82537B84:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82537ba8
	if (cr6.eq) goto loc_82537BA8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82537b84
	if (cr6.eq) goto loc_82537B84;
loc_82537BA8:
	// cntlzw r11,r9
	r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82537BC4"))) PPC_WEAK_FUNC(sub_82537BC4);
PPC_FUNC_IMPL(__imp__sub_82537BC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82537BC8"))) PPC_WEAK_FUNC(sub_82537BC8);
PPC_FUNC_IMPL(__imp__sub_82537BC8) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// addi r9,r10,30124
	ctx.r9.s64 = ctx.r10.s64 + 30124;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_82537BFC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82537bfc
	if (!cr6.eq) goto loc_82537BFC;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// stw r30,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r30.u32);
	// stw r29,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r28.u32);
	// stb r27,132(r31)
	PPC_STORE_U8(r31.u32 + 132, r27.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82537C3C"))) PPC_WEAK_FUNC(sub_82537C3C);
PPC_FUNC_IMPL(__imp__sub_82537C3C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82537C40"))) PPC_WEAK_FUNC(sub_82537C40);
PPC_FUNC_IMPL(__imp__sub_82537C40) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82537c8c
	if (cr6.eq) goto loc_82537C8C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,30112
	ctx.r9.s64 = ctx.r10.s64 + 30112;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_82537C8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82537C90"))) PPC_WEAK_FUNC(sub_82537C90);
PPC_FUNC_IMPL(__imp__sub_82537C90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82537C94"))) PPC_WEAK_FUNC(sub_82537C94);
PPC_FUNC_IMPL(__imp__sub_82537C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82537C98"))) PPC_WEAK_FUNC(sub_82537C98);
PPC_FUNC_IMPL(__imp__sub_82537C98) {
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
	// bl 0x82537aa8
	sub_82537AA8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82537ce4
	if (cr6.eq) goto loc_82537CE4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
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
	// blr 
	return;
loc_82537CE4:
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

__attribute__((alias("__imp__sub_82537CF8"))) PPC_WEAK_FUNC(sub_82537CF8);
PPC_FUNC_IMPL(__imp__sub_82537CF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82537CFC"))) PPC_WEAK_FUNC(sub_82537CFC);
PPC_FUNC_IMPL(__imp__sub_82537CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82537D00"))) PPC_WEAK_FUNC(sub_82537D00);
PPC_FUNC_IMPL(__imp__sub_82537D00) {
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
	// bl 0x82537b38
	sub_82537B38(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82537d4c
	if (cr6.eq) goto loc_82537D4C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
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
	// blr 
	return;
loc_82537D4C:
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

__attribute__((alias("__imp__sub_82537D60"))) PPC_WEAK_FUNC(sub_82537D60);
PPC_FUNC_IMPL(__imp__sub_82537D60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82537D64"))) PPC_WEAK_FUNC(sub_82537D64);
PPC_FUNC_IMPL(__imp__sub_82537D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82537D68"))) PPC_WEAK_FUNC(sub_82537D68);
PPC_FUNC_IMPL(__imp__sub_82537D68) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,30204
	ctx.r9.s64 = ctx.r10.s64 + 30204;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// or r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 | ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82537DC0"))) PPC_WEAK_FUNC(sub_82537DC0);
PPC_FUNC_IMPL(__imp__sub_82537DC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82537DC4"))) PPC_WEAK_FUNC(sub_82537DC4);
PPC_FUNC_IMPL(__imp__sub_82537DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82537DC8"))) PPC_WEAK_FUNC(sub_82537DC8);
PPC_FUNC_IMPL(__imp__sub_82537DC8) {
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
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82537e54
	if (cr6.eq) goto loc_82537E54;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,30184
	ctx.r8.s64 = ctx.r9.s64 + 30184;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r6,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r6.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r5,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r5.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r4,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r4.u32);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r9,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r9.u32);
	// lbz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// stb r8,40(r11)
	PPC_STORE_U8(r11.u32 + 40, ctx.r8.u8);
	// stw r10,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r10.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_82537E54:
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

__attribute__((alias("__imp__sub_82537E68"))) PPC_WEAK_FUNC(sub_82537E68);
PPC_FUNC_IMPL(__imp__sub_82537E68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82537E6C"))) PPC_WEAK_FUNC(sub_82537E6C);
PPC_FUNC_IMPL(__imp__sub_82537E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82537E70"))) PPC_WEAK_FUNC(sub_82537E70);
PPC_FUNC_IMPL(__imp__sub_82537E70) {
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
	// bl 0x82536778
	sub_82536778(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82537ea8
	if (cr6.eq) goto loc_82537EA8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82537EA8:
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

__attribute__((alias("__imp__sub_82537EBC"))) PPC_WEAK_FUNC(sub_82537EBC);
PPC_FUNC_IMPL(__imp__sub_82537EBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82537EC0"))) PPC_WEAK_FUNC(sub_82537EC0);
PPC_FUNC_IMPL(__imp__sub_82537EC0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// beq cr6,0x82537fa4
	if (cr6.eq) goto loc_82537FA4;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82537f34
	if (!cr6.eq) goto loc_82537F34;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// beq cr6,0x82537fa4
	if (cr6.eq) goto loc_82537FA4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x826fa838
	sub_826FA838(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x82537fa4
	goto loc_82537FA4;
loc_82537F34:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82537d68
	sub_82537D68(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x82537f60
	if (!cr6.gt) goto loc_82537F60;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82537F60:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824b28c8
	sub_824B28C8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bl 0x825381d8
	sub_825381D8(ctx, base);
loc_82537FA4:
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

__attribute__((alias("__imp__sub_82537FB8"))) PPC_WEAK_FUNC(sub_82537FB8);
PPC_FUNC_IMPL(__imp__sub_82537FB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82537FBC"))) PPC_WEAK_FUNC(sub_82537FBC);
PPC_FUNC_IMPL(__imp__sub_82537FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82537FC0"))) PPC_WEAK_FUNC(sub_82537FC0);
PPC_FUNC_IMPL(__imp__sub_82537FC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82538000
	if (cr6.eq) goto loc_82538000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// bl 0x82537c98
	sub_82537C98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82538000:
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

__attribute__((alias("__imp__sub_82538014"))) PPC_WEAK_FUNC(sub_82538014);
PPC_FUNC_IMPL(__imp__sub_82538014) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82538018"))) PPC_WEAK_FUNC(sub_82538018);
PPC_FUNC_IMPL(__imp__sub_82538018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82538058
	if (cr6.eq) goto loc_82538058;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// bl 0x82537d00
	sub_82537D00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82538058:
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

__attribute__((alias("__imp__sub_8253806C"))) PPC_WEAK_FUNC(sub_8253806C);
PPC_FUNC_IMPL(__imp__sub_8253806C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82538070"))) PPC_WEAK_FUNC(sub_82538070);
PPC_FUNC_IMPL(__imp__sub_82538070) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82538070"))) PPC_WEAK_FUNC(sub_82538070);
PPC_FUNC_IMPL(__imp__sub_82538070) {
	PPC_FUNC_PROLOGUE();
	// b 0x82537ec0
	sub_82537EC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82538074"))) PPC_WEAK_FUNC(sub_82538074);
PPC_FUNC_IMPL(__imp__sub_82538074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82538078"))) PPC_WEAK_FUNC(sub_82538078);
PPC_FUNC_IMPL(__imp__sub_82538078) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r30,r11,-13220
	r30.s64 = r11.s64 + -13220;
	// addi r6,r10,-4068
	ctx.r6.s64 = ctx.r10.s64 + -4068;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825380dc
	if (cr6.eq) goto loc_825380DC;
	// lwz r9,80(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r10,r3,60
	ctx.r10.s64 = ctx.r3.s64 + 60;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x825380d0
	if (cr6.lt) goto loc_825380D0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_825380D0:
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
	// stw r10,88(r11)
	PPC_STORE_U32(r11.u32 + 88, ctx.r10.u32);
	// b 0x82538110
	goto loc_82538110;
loc_825380DC:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-13328
	ctx.r6.s64 = r11.s64 + -13328;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253810c
	if (cr6.eq) goto loc_8253810C;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x82537fc0
	sub_82537FC0(ctx, base);
	// b 0x82538110
	goto loc_82538110;
loc_8253810C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82538110:
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

__attribute__((alias("__imp__sub_82538124"))) PPC_WEAK_FUNC(sub_82538124);
PPC_FUNC_IMPL(__imp__sub_82538124) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82538128"))) PPC_WEAK_FUNC(sub_82538128);
PPC_FUNC_IMPL(__imp__sub_82538128) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r30,r11,-13220
	r30.s64 = r11.s64 + -13220;
	// addi r6,r10,-4068
	ctx.r6.s64 = ctx.r10.s64 + -4068;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253818c
	if (cr6.eq) goto loc_8253818C;
	// lwz r9,80(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r10,r3,60
	ctx.r10.s64 = ctx.r3.s64 + 60;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82538180
	if (cr6.lt) goto loc_82538180;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82538180:
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
	// stw r10,88(r11)
	PPC_STORE_U32(r11.u32 + 88, ctx.r10.u32);
	// b 0x825381c0
	goto loc_825381C0;
loc_8253818C:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-13328
	ctx.r6.s64 = r11.s64 + -13328;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825381bc
	if (cr6.eq) goto loc_825381BC;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x82538018
	sub_82538018(ctx, base);
	// b 0x825381c0
	goto loc_825381C0;
loc_825381BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825381C0:
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

__attribute__((alias("__imp__sub_825381D4"))) PPC_WEAK_FUNC(sub_825381D4);
PPC_FUNC_IMPL(__imp__sub_825381D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825381D8"))) PPC_WEAK_FUNC(sub_825381D8);
PPC_FUNC_IMPL(__imp__sub_825381D8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,30204
	ctx.r9.s64 = r11.s64 + 30204;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8253821c
	if (!cr6.gt) goto loc_8253821C;
loc_82538204:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x82538204
	if (cr6.gt) goto loc_82538204;
loc_8253821C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82537ec0
	sub_82537EC0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,-20192
	ctx.r10.s64 = r11.s64 + -20192;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x82538258
	if (!cr6.gt) goto loc_82538258;
loc_82538240:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x82538240
	if (cr6.gt) goto loc_82538240;
loc_82538258:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82538268"))) PPC_WEAK_FUNC(sub_82538268);
PPC_FUNC_IMPL(__imp__sub_82538268) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253826C"))) PPC_WEAK_FUNC(sub_8253826C);
PPC_FUNC_IMPL(__imp__sub_8253826C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82538270"))) PPC_WEAK_FUNC(sub_82538270);
PPC_FUNC_IMPL(__imp__sub_82538270) {
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
	// bl 0x825381d8
	sub_825381D8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825382a8
	if (cr6.eq) goto loc_825382A8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825382A8:
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

__attribute__((alias("__imp__sub_825382BC"))) PPC_WEAK_FUNC(sub_825382BC);
PPC_FUNC_IMPL(__imp__sub_825382BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825382C0"))) PPC_WEAK_FUNC(sub_825382C0);
PPC_FUNC_IMPL(__imp__sub_825382C0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,30228
	ctx.r9.s64 = r11.s64 + 30228;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,30204
	ctx.r8.s64 = ctx.r10.s64 + 30204;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// addi r31,r3,12
	r31.s64 = ctx.r3.s64 + 12;
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// or r5,r7,r3
	ctx.r5.u64 = ctx.r7.u64 | ctx.r3.u64;
	// addi r4,r6,30216
	ctx.r4.s64 = ctx.r6.s64 + 30216;
	// stw r5,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r5.u32);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// stw r4,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r4.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r27.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, xer);
	// ble cr6,0x82538364
	if (!cr6.gt) goto loc_82538364;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82538364:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82538378"))) PPC_WEAK_FUNC(sub_82538378);
PPC_FUNC_IMPL(__imp__sub_82538378) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8253837C"))) PPC_WEAK_FUNC(sub_8253837C);
PPC_FUNC_IMPL(__imp__sub_8253837C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82538380"))) PPC_WEAK_FUNC(sub_82538380);
PPC_FUNC_IMPL(__imp__sub_82538380) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// addi r10,r11,30228
	ctx.r10.s64 = r11.s64 + 30228;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x825381d8
	sub_825381D8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825383d8
	if (cr6.eq) goto loc_825383D8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825383D8:
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

__attribute__((alias("__imp__sub_825383EC"))) PPC_WEAK_FUNC(sub_825383EC);
PPC_FUNC_IMPL(__imp__sub_825383EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825383F0"))) PPC_WEAK_FUNC(sub_825383F0);
PPC_FUNC_IMPL(__imp__sub_825383F0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r27,r26
	r27.u64 = r26.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82538468
	if (cr6.eq) goto loc_82538468;
	// bl 0x82538078
	sub_82538078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82538468
	if (cr6.eq) goto loc_82538468;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823209d8
	sub_823209D8(ctx, base);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x828e9460
	return;
loc_82538468:
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r26.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r7,r10,13296
	ctx.r7.s64 = ctx.r10.s64 + 13296;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// li r8,249
	ctx.r8.s64 = 249;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r3,92
	ctx.r3.s64 = 92;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r6,r26,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r26.u64, 32) & 0xFFFFFFFF00000000;
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825384dc
	if (cr6.eq) goto loc_825384DC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822f1278
	sub_822F1278(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r27,1
	r27.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82320880
	sub_82320880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x825384e0
	goto loc_825384E0;
loc_825384DC:
	// mr r31,r26
	r31.u64 = r26.u64;
loc_825384E0:
	// clrlwi r11,r27,31
	r11.u64 = r27.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82538510
	if (cr6.eq) goto loc_82538510;
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82538500
	if (cr6.lt) goto loc_82538500;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82538500:
	// li r11,15
	r11.s64 = 15;
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r26.u32);
	// stb r26,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r26.u8);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
loc_82538510:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826cb9b0
	sub_826CB9B0(ctx, base);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_82538528"))) PPC_WEAK_FUNC(sub_82538528);
PPC_FUNC_IMPL(__imp__sub_82538528) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8253852C"))) PPC_WEAK_FUNC(sub_8253852C);
PPC_FUNC_IMPL(__imp__sub_8253852C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82538530"))) PPC_WEAK_FUNC(sub_82538530);
PPC_FUNC_IMPL(__imp__sub_82538530) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r27,r26
	r27.u64 = r26.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825385a8
	if (cr6.eq) goto loc_825385A8;
	// bl 0x82538128
	sub_82538128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825385a8
	if (cr6.eq) goto loc_825385A8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823209d8
	sub_823209D8(ctx, base);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x828e9460
	return;
loc_825385A8:
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r26.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r7,r10,13296
	ctx.r7.s64 = ctx.r10.s64 + 13296;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// li r8,249
	ctx.r8.s64 = 249;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r3,92
	ctx.r3.s64 = 92;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r6,r26,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r26.u64, 32) & 0xFFFFFFFF00000000;
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253861c
	if (cr6.eq) goto loc_8253861C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822f1278
	sub_822F1278(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r27,1
	r27.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82320880
	sub_82320880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82538620
	goto loc_82538620;
loc_8253861C:
	// mr r31,r26
	r31.u64 = r26.u64;
loc_82538620:
	// clrlwi r11,r27,31
	r11.u64 = r27.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82538650
	if (cr6.eq) goto loc_82538650;
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82538640
	if (cr6.lt) goto loc_82538640;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82538640:
	// li r11,15
	r11.s64 = 15;
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r26.u32);
	// stb r26,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r26.u8);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
loc_82538650:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826cb9b0
	sub_826CB9B0(ctx, base);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_82538668"))) PPC_WEAK_FUNC(sub_82538668);
PPC_FUNC_IMPL(__imp__sub_82538668) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8253866C"))) PPC_WEAK_FUNC(sub_8253866C);
PPC_FUNC_IMPL(__imp__sub_8253866C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82538670"))) PPC_WEAK_FUNC(sub_82538670);
PPC_FUNC_IMPL(__imp__sub_82538670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subfc r9,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82538690"))) PPC_WEAK_FUNC(sub_82538690);
PPC_FUNC_IMPL(__imp__sub_82538690) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82538694"))) PPC_WEAK_FUNC(sub_82538694);
PPC_FUNC_IMPL(__imp__sub_82538694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82538698"))) PPC_WEAK_FUNC(sub_82538698);
PPC_FUNC_IMPL(__imp__sub_82538698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x825386b8
	if (cr6.lt) goto loc_825386B8;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bge cr6,0x825386b8
	if (!cr6.lt) goto loc_825386B8;
	// addi r11,r4,72
	r11.s64 = ctx.r4.s64 + 72;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_825386B8:
	// li r3,-1
	ctx.r3.s64 = -1;
}

__attribute__((alias("__imp__sub_825386BC"))) PPC_WEAK_FUNC(sub_825386BC);
PPC_FUNC_IMPL(__imp__sub_825386BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825386C0"))) PPC_WEAK_FUNC(sub_825386C0);
PPC_FUNC_IMPL(__imp__sub_825386C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r4,72
	r11.s64 = ctx.r4.s64 + 72;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	r11.s64 = 0;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
loc_825386D0:
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// beq cr6,0x825386ec
	if (cr6.eq) goto loc_825386EC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x825386d0
	if (cr6.lt) goto loc_825386D0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_825386EC:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825386F4"))) PPC_WEAK_FUNC(sub_825386F4);
PPC_FUNC_IMPL(__imp__sub_825386F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825386F8"))) PPC_WEAK_FUNC(sub_825386F8);
PPC_FUNC_IMPL(__imp__sub_825386F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,4
	r11.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r10,r3,288
	ctx.r10.s64 = ctx.r3.s64 + 288;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r8,r4,4
	ctx.r8.s64 = ctx.r4.s64 + 4;
	// mtctr r11
	ctr.u64 = r11.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
loc_82538714:
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x82538744
	if (!cr6.eq) goto loc_82538744;
	// add r11,r9,r3
	r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lbz r5,284(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 284);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82538744
	if (cr6.eq) goto loc_82538744;
	// stb r6,284(r11)
	PPC_STORE_U8(r11.u32 + 284, ctx.r6.u8);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r11,280(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, r11.u32);
loc_82538744:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82538714
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82538714;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82538758"))) PPC_WEAK_FUNC(sub_82538758);
PPC_FUNC_IMPL(__imp__sub_82538758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,1752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1752, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82538764"))) PPC_WEAK_FUNC(sub_82538764);
PPC_FUNC_IMPL(__imp__sub_82538764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82538768"))) PPC_WEAK_FUNC(sub_82538768);
PPC_FUNC_IMPL(__imp__sub_82538768) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253876C"))) PPC_WEAK_FUNC(sub_8253876C);
PPC_FUNC_IMPL(__imp__sub_8253876C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82538770"))) PPC_WEAK_FUNC(sub_82538770);
PPC_FUNC_IMPL(__imp__sub_82538770) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82538774"))) PPC_WEAK_FUNC(sub_82538774);
PPC_FUNC_IMPL(__imp__sub_82538774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82538778"))) PPC_WEAK_FUNC(sub_82538778);
PPC_FUNC_IMPL(__imp__sub_82538778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// bl 0x82881c18
	sub_82881C18(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// lis r30,-31934
	r30.s64 = -2092826624;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,136(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 136);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x82538820
	if (!cr6.gt) goto loc_82538820;
loc_825387D4:
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82538810
	if (cr6.eq) goto loc_82538810;
	// extsw r11,r31
	r11.s64 = r31.s32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82881ad0
	sub_82881AD0(ctx, base);
loc_82538810:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x825387d4
	if (cr6.lt) goto loc_825387D4;
loc_82538820:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8254da90
	sub_8254DA90(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82881cc8
	sub_82881CC8(ctx, base);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8253884C"))) PPC_WEAK_FUNC(sub_8253884C);
PPC_FUNC_IMPL(__imp__sub_8253884C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82538850"))) PPC_WEAK_FUNC(sub_82538850);
PPC_FUNC_IMPL(__imp__sub_82538850) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82538884
	if (cr6.eq) goto loc_82538884;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82538888
	if (!cr6.eq) goto loc_82538888;
loc_82538884:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82538888:
	// lwz r29,16(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x824fad98
	sub_824FAD98(ctx, base);
	// lwz r4,368(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 368);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x824fb238
	sub_824FB238(ctx, base);
	// lwz r4,372(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 372);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x824fb878
	sub_824FB878(ctx, base);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r30,280(r31)
	PPC_STORE_U32(r31.u32 + 280, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r9,r31,284
	ctx.r9.s64 = r31.s64 + 284;
	// addi r10,r31,284
	ctx.r10.s64 = r31.s64 + 284;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_825388CC:
	// stbx r30,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, r30.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825388cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825388CC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825388E0"))) PPC_WEAK_FUNC(sub_825388E0);
PPC_FUNC_IMPL(__imp__sub_825388E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825388E4"))) PPC_WEAK_FUNC(sub_825388E4);
PPC_FUNC_IMPL(__imp__sub_825388E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825388E8"))) PPC_WEAK_FUNC(sub_825388E8);
PPC_FUNC_IMPL(__imp__sub_825388E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r30,-31970
	r30.s64 = -2095185920;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82538918
	if (cr6.eq) goto loc_82538918;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253891c
	if (!cr6.eq) goto loc_8253891C;
loc_82538918:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8253891C:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r3,148(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// li r31,5381
	r31.s64 = 5381;
	// addi r10,r11,22920
	ctx.r10.s64 = r11.s64 + 22920;
	// li r11,71
	r11.s64 = 71;
loc_82538930:
	// rlwinm r8,r31,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// add r31,r8,r11
	r31.u64 = ctx.r8.u64 + r11.u64;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82538930
	if (!cr6.eq) goto loc_82538930;
	// bl 0x82517c10
	sub_82517C10(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// bne cr6,0x82538a0c
	if (!cr6.eq) goto loc_82538A0C;
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82538970
	if (cr6.eq) goto loc_82538970;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82538974
	if (!cr6.eq) goto loc_82538974;
loc_82538970:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82538974:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r4,r11,14000
	ctx.r4.s64 = r11.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r10,30512
	ctx.r5.s64 = ctx.r10.s64 + 30512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825389fc
	if (!cr6.eq) goto loc_825389FC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,13852
	ctx.r5.s64 = r11.s64 + 13852;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r9,r10,-22972
	ctx.r9.s64 = ctx.r10.s64 + -22972;
	// lfs f0,-22972(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22972);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 8, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 12, temp.u32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 16, temp.u32);
loc_825389FC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
loc_82538A0C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82538A10"))) PPC_WEAK_FUNC(sub_82538A10);
PPC_FUNC_IMPL(__imp__sub_82538A10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82538A14"))) PPC_WEAK_FUNC(sub_82538A14);
PPC_FUNC_IMPL(__imp__sub_82538A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82538A18"))) PPC_WEAK_FUNC(sub_82538A18);
PPC_FUNC_IMPL(__imp__sub_82538A18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r7,396(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x82538a54
	if (!cr6.gt) goto loc_82538A54;
	// lwz r8,388(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// li r11,0
	r11.s64 = 0;
	// add r9,r11,r8
	ctx.r9.u64 = r11.u64 + ctx.r8.u64;
loc_82538A34:
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// beq cr6,0x82538a5c
	if (cr6.eq) goto loc_82538A5C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,112
	r11.s64 = r11.s64 + 112;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// add r9,r11,r8
	ctx.r9.u64 = r11.u64 + ctx.r8.u64;
	// blt cr6,0x82538a34
	if (cr6.lt) goto loc_82538A34;
loc_82538A54:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82538A5C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
}

__attribute__((alias("__imp__sub_82538A60"))) PPC_WEAK_FUNC(sub_82538A60);
PPC_FUNC_IMPL(__imp__sub_82538A60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

