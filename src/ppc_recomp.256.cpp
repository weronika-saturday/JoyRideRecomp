#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8275DA18"))) PPC_WEAK_FUNC(sub_8275DA18);
PPC_FUNC_IMPL(__imp__sub_8275DA18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,524(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
}

__attribute__((alias("__imp__sub_8275DA1C"))) PPC_WEAK_FUNC(sub_8275DA1C);
PPC_FUNC_IMPL(__imp__sub_8275DA1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8275DA20"))) PPC_WEAK_FUNC(sub_8275DA20);
PPC_FUNC_IMPL(__imp__sub_8275DA20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,424(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,524(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// slw r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r7,528(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// subf r6,r8,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subf r3,r7,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r7.s64;
}

__attribute__((alias("__imp__sub_8275DA3C"))) PPC_WEAK_FUNC(sub_8275DA3C);
PPC_FUNC_IMPL(__imp__sub_8275DA3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8275DA40"))) PPC_WEAK_FUNC(sub_8275DA40);
PPC_FUNC_IMPL(__imp__sub_8275DA40) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 544);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8275dab4
	if (cr6.eq) goto loc_8275DAB4;
	// lwz r10,524(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// add r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// ble cr6,0x8275dab4
	if (!cr6.gt) goto loc_8275DAB4;
	// lwz r3,548(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 548);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8275dab4
	if (cr6.eq) goto loc_8275DAB4;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r5,r11,r5
	ctx.r5.u64 = r11.u64 + ctx.r5.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r3,0(r24)
	PPC_STORE_U8(r24.u32 + 0, ctx.r3.u8);
loc_8275DAA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_8275DAB4:
	// li r26,0
	r26.s64 = 0;
	// addi r11,r7,47
	r11.s64 = ctx.r7.s64 + 47;
	// stb r26,0(r24)
	PPC_STORE_U8(r24.u32 + 0, r26.u8);
	// rlwinm r25,r11,0,0,27
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8275d6d0
	sub_8275D6D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8275daa8
	if (cr6.eq) goto loc_8275DAA8;
	// rlwinm r10,r29,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFF0000;
	// stw r25,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r25.u32);
	// sth r28,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, r28.u16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8275db24
	if (cr6.eq) goto loc_8275DB24;
	// rlwinm r11,r29,0,0,7
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFF000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r9,r11,-16824
	ctx.r9.s64 = r11.s64 + -16824;
	// beq cr6,0x8275db14
	if (cr6.eq) goto loc_8275DB14;
	// rlwinm r10,r29,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFF;
	// lbzx r11,r10,r9
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// b 0x8275db50
	goto loc_8275DB50;
loc_8275DB14:
	// rlwinm r10,r29,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFF;
	// lbzx r11,r10,r9
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8275db50
	goto loc_8275DB50;
loc_8275DB24:
	// rlwinm r11,r29,0,16,23
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r9,r11,-16824
	ctx.r9.s64 = r11.s64 + -16824;
	// beq cr6,0x8275db48
	if (cr6.eq) goto loc_8275DB48;
	// rlwinm r10,r29,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 24) & 0xFF;
	// lbzx r11,r10,r9
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// b 0x8275db50
	goto loc_8275DB50;
loc_8275DB48:
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// lbzx r11,r10,r9
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
loc_8275DB50:
	// stw r26,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r26.u32);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// sth r11,14(r31)
	PPC_STORE_U16(r31.u32 + 14, r11.u16);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r27.u32);
	// stw r26,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r26.u32);
	// beq cr6,0x8275dc18
	if (cr6.eq) goto loc_8275DC18;
	// cmplwi cr6,r29,4096
	cr6.compare<uint32_t>(r29.u32, 4096, xer);
	// bge cr6,0x8275db84
	if (!cr6.lt) goto loc_8275DB84;
	// li r29,4096
	r29.s64 = 4096;
loc_8275DB84:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8275dbec
	if (cr6.eq) goto loc_8275DBEC;
	// lis r28,-31932
	r28.s64 = -2092695552;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r3,-5220(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -5220);
	// bl 0x8275ff20
	sub_8275FF20(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8275dc08
	if (!cr6.eq) goto loc_8275DC08;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8275DBEC:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8275d7b8
	sub_8275D7B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_8275DC08:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r3,-5220(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -5220);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x827600a8
	sub_827600A8(ctx, base);
loc_8275DC18:
	// lwz r10,432(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 432);
	// addi r11,r30,428
	r11.s64 = r30.s64 + 428;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r8,432(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 432);
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r31.u32);
	// stw r31,432(r30)
	PPC_STORE_U32(r30.u32 + 432, r31.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,524(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 524);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// stw r7,524(r30)
	PPC_STORE_U32(r30.u32 + 524, ctx.r7.u32);
	// stb r9,0(r24)
	PPC_STORE_U8(r24.u32 + 0, ctx.r9.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8275DC54"))) PPC_WEAK_FUNC(sub_8275DC54);
PPC_FUNC_IMPL(__imp__sub_8275DC54) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8275DC58"))) PPC_WEAK_FUNC(sub_8275DC58);
PPC_FUNC_IMPL(__imp__sub_8275DC58) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lwz r11,27504(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 27504);
	// addi r26,r11,708
	r26.s64 = r11.s64 + 708;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,544(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 544);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8275dce4
	if (cr6.eq) goto loc_8275DCE4;
	// lwz r10,524(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 524);
	// add r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 + r27.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// ble cr6,0x8275dce4
	if (!cr6.gt) goto loc_8275DCE4;
	// lwz r3,548(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 548);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8275dce4
	if (cr6.eq) goto loc_8275DCE4;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r5,r11,r27
	ctx.r5.u64 = r11.u64 + r27.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r3,0(r24)
	PPC_STORE_U8(r24.u32 + 0, ctx.r3.u8);
loc_8275DCD0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_8275DCE4:
	// li r29,0
	r29.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// stb r29,0(r24)
	PPC_STORE_U8(r24.u32 + 0, r29.u8);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x8275d6d0
	sub_8275D6D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8275dcd0
	if (cr6.eq) goto loc_8275DCD0;
	// li r11,32
	r11.s64 = 32;
	// sth r29,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, r29.u16);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// sth r10,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r10.u16);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r29.u32);
	// stw r29,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r29.u32);
	// beq cr6,0x8275dec0
	if (cr6.eq) goto loc_8275DEC0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8275de88
	if (cr6.eq) goto loc_8275DE88;
	// cmplwi cr6,r25,4096
	cr6.compare<uint32_t>(r25.u32, 4096, xer);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// bgt cr6,0x8275dd74
	if (cr6.gt) goto loc_8275DD74;
	// li r10,4096
	ctx.r10.s64 = 4096;
loc_8275DD74:
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r8,r11,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF0000;
	// andc r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// subf r29,r3,r7
	r29.s64 = ctx.r7.s64 - ctx.r3.s64;
	// beq cr6,0x8275ddcc
	if (cr6.eq) goto loc_8275DDCC;
	// rlwinm r10,r11,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFF000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r8,r10,-16824
	ctx.r8.s64 = ctx.r10.s64 + -16824;
	// beq cr6,0x8275ddbc
	if (cr6.eq) goto loc_8275DDBC;
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFF;
	// lbzx r11,r9,r8
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// b 0x8275ddf8
	goto loc_8275DDF8;
loc_8275DDBC:
	// rlwinm r9,r11,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFF;
	// lbzx r11,r9,r8
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8275ddf8
	goto loc_8275DDF8;
loc_8275DDCC:
	// rlwinm r10,r11,0,16,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r8,r10,-16824
	ctx.r8.s64 = ctx.r10.s64 + -16824;
	// beq cr6,0x8275ddf0
	if (cr6.eq) goto loc_8275DDF0;
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFF;
	// lbzx r11,r9,r8
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// b 0x8275ddf8
	goto loc_8275DDF8;
loc_8275DDF0:
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// lbzx r11,r9,r8
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
loc_8275DDF8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + r29.u64;
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// subf r5,r29,r10
	ctx.r5.s64 = ctx.r10.s64 - r29.s64;
	// stw r4,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// oris r8,r29,32768
	ctx.r8.u64 = r29.u64 | 2147483648;
	// sth r9,14(r31)
	PPC_STORE_U16(r31.u32 + 14, ctx.r9.u16);
	// stw r5,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// lis r28,-31932
	r28.s64 = -2092695552;
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// lwz r3,-5220(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -5220);
	// bl 0x8275ff20
	sub_8275FF20(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8275deac
	if (!cr6.eq) goto loc_8275DEAC;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lhz r9,14(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 14);
	// add r5,r11,r29
	ctx.r5.u64 = r11.u64 + r29.u64;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// slw r6,r10,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r4,r29,r8
	ctx.r4.s64 = ctx.r8.s64 - r29.s64;
	// lwz r11,20(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8275DE88:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x8275d7b8
	sub_8275D7B8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_8275DEAC:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r3,-5220(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -5220);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x827600a8
	sub_827600A8(ctx, base);
loc_8275DEC0:
	// addi r11,r30,428
	r11.s64 = r30.s64 + 428;
	// lwz r10,432(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 432);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r7,432(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 432);
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r31.u32);
	// stw r31,432(r30)
	PPC_STORE_U32(r30.u32 + 432, r31.u32);
	// lwz r9,524(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 524);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// clrlwi r10,r6,1
	ctx.r10.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r5,r11,r9
	ctx.r5.u64 = r11.u64 + ctx.r9.u64;
	// stw r5,524(r30)
	PPC_STORE_U32(r30.u32 + 524, ctx.r5.u32);
	// stb r8,0(r24)
	PPC_STORE_U8(r24.u32 + 0, ctx.r8.u8);
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8275DF10"))) PPC_WEAK_FUNC(sub_8275DF10);
PPC_FUNC_IMPL(__imp__sub_8275DF10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8275DF14"))) PPC_WEAK_FUNC(sub_8275DF14);
PPC_FUNC_IMPL(__imp__sub_8275DF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8275DF18"))) PPC_WEAK_FUNC(sub_8275DF18);
PPC_FUNC_IMPL(__imp__sub_8275DF18) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r11,27504(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 27504);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// addi r31,r11,708
	r31.s64 = r11.s64 + 708;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8275da40
	sub_8275DA40(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8275DF80"))) PPC_WEAK_FUNC(sub_8275DF80);
PPC_FUNC_IMPL(__imp__sub_8275DF80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8275DF84"))) PPC_WEAK_FUNC(sub_8275DF84);
PPC_FUNC_IMPL(__imp__sub_8275DF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8275DF88"))) PPC_WEAK_FUNC(sub_8275DF88);
PPC_FUNC_IMPL(__imp__sub_8275DF88) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r11,27504(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 27504);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// addi r26,r11,708
	r26.s64 = r11.s64 + 708;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x8275dfd0
	if (!cr6.gt) goto loc_8275DFD0;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8275DFD0:
	// subfic r10,r11,4096
	xer.ca = r11.u32 <= 4096;
	ctx.r10.s64 = 4096 - r11.s64;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// subfe r4,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r3,1
	ctx.r3.s64 = 1;
	// and r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 & r11.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// slw r11,r3,r7
	r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r7.u8 & 0x3F));
	// andc r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// addi r29,r30,20
	r29.s64 = r30.s64 + 20;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// divwu r5,r9,r31
	ctx.r5.u32 = ctx.r9.u32 / r31.u32;
	// mullw r5,r5,r31
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r31.s32);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// srw r11,r11,r7
	r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r7.u8 & 0x3F));
	// addi r10,r11,15
	ctx.r10.s64 = r11.s64 + 15;
	// rlwinm r7,r10,30,2,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFC;
	// bl 0x8275da40
	sub_8275DA40(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8275e050
	if (cr6.eq) goto loc_8275E050;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827971b0
	sub_827971B0(ctx, base);
loc_8275E050:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8275E060"))) PPC_WEAK_FUNC(sub_8275E060);
PPC_FUNC_IMPL(__imp__sub_8275E060) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8275E064"))) PPC_WEAK_FUNC(sub_8275E064);
PPC_FUNC_IMPL(__imp__sub_8275E064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8275E068"))) PPC_WEAK_FUNC(sub_8275E068);
PPC_FUNC_IMPL(__imp__sub_8275E068) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,548(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 548);
	// lwz r29,24(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8275e0a4
	if (cr6.eq) goto loc_8275E0A4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8275E0A4:
	// lwz r11,524(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 524);
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// subf r9,r29,r11
	ctx.r9.s64 = r11.s64 - r29.s64;
	// stw r9,524(r30)
	PPC_STORE_U32(r30.u32 + 524, ctx.r9.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r3,-5220(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5220);
	// bl 0x82760028
	sub_82760028(ctx, base);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lhz r6,14(r31)
	ctx.r6.u64 = PPC_LOAD_U16(r31.u32 + 14);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r5,r7,0,0,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	// slw r6,r8,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8275e118
	if (cr6.eq) goto loc_8275E118;
	// rotlwi r11,r7,0
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r10,524(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 524);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r9,r11,1
	ctx.r9.u64 = r11.u32 & 0x7FFFFFFF;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r8,524(r30)
	PPC_STORE_U32(r30.u32 + 524, ctx.r8.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// clrlwi r11,r4,1
	r11.u64 = ctx.r4.u32 & 0x7FFFFFFF;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,20(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// add r5,r11,r29
	ctx.r5.u64 = r11.u64 + r29.u64;
	// subf r4,r11,r7
	ctx.r4.s64 = ctx.r7.s64 - r11.s64;
	// b 0x8275e138
	goto loc_8275E138;
loc_8275E118:
	// cmplwi cr6,r6,4096
	cr6.compare<uint32_t>(ctx.r6.u32, 4096, xer);
	// bgt cr6,0x8275e124
	if (cr6.gt) goto loc_8275E124;
	// li r6,4096
	ctx.r6.s64 = 4096;
loc_8275E124:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_8275E138:
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x8275d7b8
	sub_8275D7B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8275E16C"))) PPC_WEAK_FUNC(sub_8275E16C);
PPC_FUNC_IMPL(__imp__sub_8275E16C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8275E170"))) PPC_WEAK_FUNC(sub_8275E170);
PPC_FUNC_IMPL(__imp__sub_8275E170) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,27504(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 27504);
	// addi r31,r11,708
	r31.s64 = r11.s64 + 708;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8275e068
	sub_8275E068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8275E1B0"))) PPC_WEAK_FUNC(sub_8275E1B0);
PPC_FUNC_IMPL(__imp__sub_8275E1B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8275E1B4"))) PPC_WEAK_FUNC(sub_8275E1B4);
PPC_FUNC_IMPL(__imp__sub_8275E1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8275E1B8"))) PPC_WEAK_FUNC(sub_8275E1B8);
PPC_FUNC_IMPL(__imp__sub_8275E1B8) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,27504(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 27504);
	// addi r29,r11,708
	r29.s64 = r11.s64 + 708;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r4,536(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 536);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8275e214
	if (cr6.eq) goto loc_8275E214;
	// cmplw cr6,r4,r30
	cr6.compare<uint32_t>(ctx.r4.u32, r30.u32, xer);
	// beq cr6,0x8275e214
	if (cr6.eq) goto loc_8275E214;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8275e214
	if (!cr6.eq) goto loc_8275E214;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82797240
	sub_82797240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,536(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 536);
	// bl 0x8275e068
	sub_8275E068(ctx, base);
loc_8275E214:
	// li r11,0
	r11.s64 = 0;
	// lwz r9,524(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 524);
	// lwz r10,528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 528);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// stw r11,536(r31)
	PPC_STORE_U32(r31.u32 + 536, r11.u32);
	// lwz r8,424(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// slw r6,r8,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// subf r5,r6,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r6.s64;
	// subf. r4,r10,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8275e268
	if (cr0.eq) goto loc_8275E268;
	// lwz r11,508(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bgt cr6,0x8275e268
	if (cr6.gt) goto loc_8275E268;
	// stw r30,536(r31)
	PPC_STORE_U32(r31.u32 + 536, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8275E268:
	// lwz r11,512(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 512);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x8275e290
	if (cr6.lt) goto loc_8275E290;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82797240
	sub_82797240(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275e068
	sub_8275E068(ctx, base);
loc_8275E290:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8275E29C"))) PPC_WEAK_FUNC(sub_8275E29C);
PPC_FUNC_IMPL(__imp__sub_8275E29C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8275E2A0"))) PPC_WEAK_FUNC(sub_8275E2A0);
PPC_FUNC_IMPL(__imp__sub_8275E2A0) {
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
	// lwz r11,520(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8275e2fc
	if (cr6.eq) goto loc_8275E2FC;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x8275e2fc
	if (cr6.lt) goto loc_8275E2FC;
loc_8275E2D4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275dc58
	sub_8275DC58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8275e380
	if (!cr6.eq) goto loc_8275E380;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8275e2d4
	if (!cr6.eq) goto loc_8275E2D4;
loc_8275E2FC:
	// add r10,r30,r29
	ctx.r10.u64 = r30.u64 + r29.u64;
	// lwz r11,504(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 504);
	// addi r9,r29,-1
	ctx.r9.s64 = r29.s64 + -1;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lis r26,-31933
	r26.s64 = -2092761088;
	// andc r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// divwu r6,r7,r11
	ctx.r6.u32 = ctx.r7.u32 / r11.u32;
	// mullw r27,r6,r11
	r27.s64 = int64_t(ctx.r6.s32) * int64_t(r11.s32);
loc_8275E328:
	// lwz r11,27504(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 27504);
	// addi r30,r11,708
	r30.s64 = r11.s64 + 708;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275da40
	sub_8275DA40(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8275e39c
	if (!cr6.eq) goto loc_8275E39C;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8275e328
	if (!cr6.eq) goto loc_8275E328;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8275E380:
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,532(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,532(r31)
	PPC_STORE_U32(r31.u32 + 532, r11.u32);
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8275E39C:
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r10,532(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,532(r31)
	PPC_STORE_U32(r31.u32 + 532, r11.u32);
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8275E3B4"))) PPC_WEAK_FUNC(sub_8275E3B4);
PPC_FUNC_IMPL(__imp__sub_8275E3B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8275E3B8"))) PPC_WEAK_FUNC(sub_8275E3B8);
PPC_FUNC_IMPL(__imp__sub_8275E3B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,501(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 501);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8275e49c
	if (cr6.eq) goto loc_8275E49C;
	// lwz r11,424(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,524(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// slw r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r7,528(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// subf r6,r8,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r8.s64;
	// lwz r11,508(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// subf r10,r7,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r7.s64;
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// rlwinm r10,r5,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// divwu r10,r4,r11
	ctx.r10.u32 = ctx.r4.u32 / r11.u32;
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// rlwinm r9,r11,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8275e43c
	if (cr6.eq) goto loc_8275E43C;
	// rlwinm r10,r11,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFF000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r8,r10,-16824
	ctx.r8.s64 = ctx.r10.s64 + -16824;
	// beq cr6,0x8275e42c
	if (cr6.eq) goto loc_8275E42C;
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFF;
	// lbzx r11,r9,r8
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// b 0x8275e468
	goto loc_8275E468;
loc_8275E42C:
	// rlwinm r9,r11,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFF;
	// lbzx r11,r9,r8
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8275e468
	goto loc_8275E468;
loc_8275E43C:
	// rlwinm r10,r11,0,16,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r8,r10,-16824
	ctx.r8.s64 = ctx.r10.s64 + -16824;
	// beq cr6,0x8275e460
	if (cr6.eq) goto loc_8275E460;
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFF;
	// lbzx r11,r9,r8
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// b 0x8275e468
	goto loc_8275E468;
loc_8275E460:
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// lbzx r11,r9,r8
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
loc_8275E468:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// lwz r11,508(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// slw r3,r9,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bge cr6,0x8275e488
	if (!cr6.lt) goto loc_8275E488;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_8275E488:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
loc_8275E49C:
	// lwz r3,508(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
}

__attribute__((alias("__imp__sub_8275E4A0"))) PPC_WEAK_FUNC(sub_8275E4A0);
PPC_FUNC_IMPL(__imp__sub_8275E4A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8275E4A4"))) PPC_WEAK_FUNC(sub_8275E4A4);
PPC_FUNC_IMPL(__imp__sub_8275E4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8275E4A8"))) PPC_WEAK_FUNC(sub_8275E4A8);
PPC_FUNC_IMPL(__imp__sub_8275E4A8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x8275e3b8
	sub_8275E3B8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8275df88
	sub_8275DF88(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8275e518
	if (!cr6.eq) goto loc_8275E518;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8275e514
	if (cr6.eq) goto loc_8275E514;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r6,508(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275df88
	sub_8275DF88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8275E514:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8275E518:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8275E51C"))) PPC_WEAK_FUNC(sub_8275E51C);
PPC_FUNC_IMPL(__imp__sub_8275E51C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8275E520"))) PPC_WEAK_FUNC(sub_8275E520);
PPC_FUNC_IMPL(__imp__sub_8275E520) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// addi r28,r3,20
	r28.s64 = ctx.r3.s64 + 20;
loc_8275E540:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82797250
	sub_82797250(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8275e5c4
	if (!cr6.eq) goto loc_8275E5C4;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// bl 0x8275e3b8
	sub_8275E3B8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x8275df88
	sub_8275DF88(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8275e5ac
	if (!cr6.eq) goto loc_8275E5AC;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8275e5ac
	if (cr6.eq) goto loc_8275E5AC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,508(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275df88
	sub_8275DF88(ctx, base);
loc_8275E5AC:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8275e540
	if (!cr6.eq) goto loc_8275E540;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8275E5C4:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8275E5D8"))) PPC_WEAK_FUNC(sub_8275E5D8);
PPC_FUNC_IMPL(__imp__sub_8275E5D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8275E5DC"))) PPC_WEAK_FUNC(sub_8275E5DC);
PPC_FUNC_IMPL(__imp__sub_8275E5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8275E5E0"))) PPC_WEAK_FUNC(sub_8275E5E0);
PPC_FUNC_IMPL(__imp__sub_8275E5E0) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r28,r3,20
	r28.s64 = ctx.r3.s64 + 20;
loc_8275E604:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82797378
	sub_82797378(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8275e684
	if (!cr6.eq) goto loc_8275E684;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275e3b8
	sub_8275E3B8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x8275df88
	sub_8275DF88(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8275e66c
	if (!cr6.eq) goto loc_8275E66C;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8275e66c
	if (cr6.eq) goto loc_8275E66C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,508(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275df88
	sub_8275DF88(ctx, base);
loc_8275E66C:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8275e604
	if (!cr6.eq) goto loc_8275E604;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8275E684:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8275E698"))) PPC_WEAK_FUNC(sub_8275E698);
PPC_FUNC_IMPL(__imp__sub_8275E698) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8275E69C"))) PPC_WEAK_FUNC(sub_8275E69C);
PPC_FUNC_IMPL(__imp__sub_8275E69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8275E6A0"))) PPC_WEAK_FUNC(sub_8275E6A0);
PPC_FUNC_IMPL(__imp__sub_8275E6A0) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,27504(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 27504);
	// addi r28,r11,708
	r28.s64 = r11.s64 + 708;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// slw r29,r10,r9
	r29.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,4096
	cr6.compare<uint32_t>(r11.u32, 4096, xer);
	// bgt cr6,0x8275e6e4
	if (cr6.gt) goto loc_8275E6E4;
	// li r11,4096
	r11.s64 = 4096;
loc_8275E6E4:
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// rlwinm r5,r11,0,0,19
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275da40
	sub_8275DA40(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8275e77c
	if (cr6.eq) goto loc_8275E77C;
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// divwu. r8,r8,r29
	ctx.r8.u32 = ctx.r8.u32 / r29.u32;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r9,r9,436
	ctx.r9.s64 = ctx.r9.s64 + 436;
	// beq 0x8275e754
	if (cr0.eq) goto loc_8275E754;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8275E730:
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r11.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// bdnz 0x8275e730
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8275E730;
loc_8275E754:
	// lwz r9,528(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 528);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,24(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stw r11,528(r31)
	PPC_STORE_U32(r31.u32 + 528, r11.u32);
	// lwz r31,28(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8275E77C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8275E78C"))) PPC_WEAK_FUNC(sub_8275E78C);
PPC_FUNC_IMPL(__imp__sub_8275E78C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8275E790"))) PPC_WEAK_FUNC(sub_8275E790);
PPC_FUNC_IMPL(__imp__sub_8275E790) {
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
	// lhz r11,12(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// lwz r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// divwu. r9,r8,r10
	ctx.r9.u32 = ctx.r8.u32 / ctx.r10.u32;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8275e7e8
	if (cr0.eq) goto loc_8275E7E8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8275E7C8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// bdnz 0x8275e7c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8275E7C8;
loc_8275E7E8:
	// lwz r11,528(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 528);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r3,548(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 548);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r9,528(r30)
	PPC_STORE_U32(r30.u32 + 528, ctx.r9.u32);
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// beq cr6,0x8275e820
	if (cr6.eq) goto loc_8275E820;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8275E820:
	// lwz r11,524(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 524);
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// subf r9,r29,r11
	ctx.r9.s64 = r11.s64 - r29.s64;
	// stw r9,524(r30)
	PPC_STORE_U32(r30.u32 + 524, ctx.r9.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r3,-5220(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5220);
	// bl 0x82760028
	sub_82760028(ctx, base);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lhz r6,14(r31)
	ctx.r6.u64 = PPC_LOAD_U16(r31.u32 + 14);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r5,r7,0,0,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	// slw r6,r8,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8275e894
	if (cr6.eq) goto loc_8275E894;
	// rotlwi r11,r7,0
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r10,524(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 524);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r9,r11,1
	ctx.r9.u64 = r11.u32 & 0x7FFFFFFF;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r8,524(r30)
	PPC_STORE_U32(r30.u32 + 524, ctx.r8.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// clrlwi r11,r4,1
	r11.u64 = ctx.r4.u32 & 0x7FFFFFFF;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,20(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// add r5,r11,r29
	ctx.r5.u64 = r11.u64 + r29.u64;
	// subf r4,r11,r7
	ctx.r4.s64 = ctx.r7.s64 - r11.s64;
	// b 0x8275e8b4
	goto loc_8275E8B4;
loc_8275E894:
	// cmplwi cr6,r6,4096
	cr6.compare<uint32_t>(ctx.r6.u32, 4096, xer);
	// bgt cr6,0x8275e8a0
	if (cr6.gt) goto loc_8275E8A0;
	// li r6,4096
	ctx.r6.s64 = 4096;
loc_8275E8A0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_8275E8B4:
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x8275d7b8
	sub_8275D7B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8275E8E8"))) PPC_WEAK_FUNC(sub_8275E8E8);
PPC_FUNC_IMPL(__imp__sub_8275E8E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8275E8EC"))) PPC_WEAK_FUNC(sub_8275E8EC);
PPC_FUNC_IMPL(__imp__sub_8275E8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8275E8F0"))) PPC_WEAK_FUNC(sub_8275E8F0);
PPC_FUNC_IMPL(__imp__sub_8275E8F0) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,27504(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 27504);
	// addi r29,r11,708
	r29.s64 = r11.s64 + 708;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r4,540(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 540);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8275e940
	if (cr6.eq) goto loc_8275E940;
	// cmplw cr6,r4,r30
	cr6.compare<uint32_t>(ctx.r4.u32, r30.u32, xer);
	// beq cr6,0x8275e940
	if (cr6.eq) goto loc_8275E940;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8275e940
	if (!cr6.eq) goto loc_8275E940;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275e790
	sub_8275E790(ctx, base);
loc_8275E940:
	// li r11,0
	r11.s64 = 0;
	// lwz r9,524(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 524);
	// lwz r10,528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 528);
	// stw r11,540(r31)
	PPC_STORE_U32(r31.u32 + 540, r11.u32);
	// lwz r8,424(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// slw r6,r8,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// subf r5,r6,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r6.s64;
	// subf. r4,r10,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8275e97c
	if (cr0.eq) goto loc_8275E97C;
	// stw r30,540(r31)
	PPC_STORE_U32(r31.u32 + 540, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8275E97C:
	// lwz r11,512(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 512);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x8275e99c
	if (cr6.lt) goto loc_8275E99C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275e790
	sub_8275E790(ctx, base);
loc_8275E99C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8275E9A8"))) PPC_WEAK_FUNC(sub_8275E9A8);
PPC_FUNC_IMPL(__imp__sub_8275E9A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8275E9AC"))) PPC_WEAK_FUNC(sub_8275E9AC);
PPC_FUNC_IMPL(__imp__sub_8275E9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8275E9B0"))) PPC_WEAK_FUNC(sub_8275E9B0);
PPC_FUNC_IMPL(__imp__sub_8275E9B0) {
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
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// bge cr6,0x8275e9cc
	if (!cr6.lt) goto loc_8275E9CC;
	// li r4,16
	ctx.r4.s64 = 16;
loc_8275E9CC:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lbz r10,500(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 500);
	// add r9,r11,r4
	ctx.r9.u64 = r11.u64 + ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// andc r28,r9,r11
	r28.u64 = ctx.r9.u64 & ~r11.u64;
	// beq cr6,0x8275eb00
	if (cr6.eq) goto loc_8275EB00;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r10,8
	ctx.r10.s64 = 8;
	// slw r9,r10,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// cmplw cr6,r28,r9
	cr6.compare<uint32_t>(r28.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8275eb00
	if (cr6.gt) goto loc_8275EB00;
	// addi r29,r28,-1
	r29.s64 = r28.s64 + -1;
	// srw r30,r29,r11
	r30.u64 = r11.u8 & 0x20 ? 0 : (r29.u32 >> (r11.u8 & 0x3F));
	// addi r10,r30,55
	ctx.r10.s64 = r30.s64 + 55;
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r8,r11,436
	ctx.r8.s64 = r11.s64 + 436;
	// lwzx r3,r9,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// bne cr6,0x8275ea34
	if (!cr6.eq) goto loc_8275EA34;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275e6a0
	sub_8275E6A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8275ea7c
	if (cr6.eq) goto loc_8275EA7C;
loc_8275EA34:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r30,1
	ctx.r9.s64 = r30.s64 + 1;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r5,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r5.u32);
	// lwz r4,528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 528);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// slw r10,r9,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// stw r9,528(r31)
	PPC_STORE_U32(r31.u32 + 528, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8275EA7C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// srw r30,r29,r11
	r30.u64 = r11.u8 & 0x20 ? 0 : (r29.u32 >> (r11.u8 & 0x3F));
	// addi r10,r30,55
	ctx.r10.s64 = r30.s64 + 55;
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r8,r11,436
	ctx.r8.s64 = r11.s64 + 436;
	// lwzx r3,r9,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// bne cr6,0x8275eab8
	if (!cr6.eq) goto loc_8275EAB8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275e6a0
	sub_8275E6A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8275eb00
	if (cr6.eq) goto loc_8275EB00;
loc_8275EAB8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r30,1
	ctx.r9.s64 = r30.s64 + 1;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r5,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r5.u32);
	// lwz r11,528(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 528);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// slw r10,r9,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r4.u8 & 0x3F));
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// stw r9,528(r31)
	PPC_STORE_U32(r31.u32 + 528, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8275EB00:
	// lwz r11,516(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 516);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x8275eb20
	if (!cr6.lt) goto loc_8275EB20;
	// bl 0x8275e520
	sub_8275E520(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8275EB20:
	// li r5,4096
	ctx.r5.s64 = 4096;
	// bl 0x8275e2a0
	sub_8275E2A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8275EB2C"))) PPC_WEAK_FUNC(sub_8275EB2C);
PPC_FUNC_IMPL(__imp__sub_8275EB2C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8275EB30"))) PPC_WEAK_FUNC(sub_8275EB30);
PPC_FUNC_IMPL(__imp__sub_8275EB30) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x8275eb60
	if (cr6.gt) goto loc_8275EB60;
	// bl 0x8275e9b0
	sub_8275E9B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8275EB60:
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// bge cr6,0x8275eb6c
	if (!cr6.lt) goto loc_8275EB6C;
	// li r4,16
	ctx.r4.s64 = 16;
loc_8275EB6C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bge cr6,0x8275eb7c
	if (!cr6.lt) goto loc_8275EB7C;
	// mr r26,r11
	r26.u64 = r11.u64;
loc_8275EB7C:
	// cmplw cr6,r4,r26
	cr6.compare<uint32_t>(ctx.r4.u32, r26.u32, xer);
	// bge cr6,0x8275eb88
	if (!cr6.lt) goto loc_8275EB88;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_8275EB88:
	// add r11,r4,r26
	r11.u64 = ctx.r4.u64 + r26.u64;
	// lbz r10,500(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 500);
	// addi r9,r26,-1
	ctx.r9.s64 = r26.s64 + -1;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// andc r27,r8,r9
	r27.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// beq cr6,0x8275ecd8
	if (cr6.eq) goto loc_8275ECD8;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r11,8
	r11.s64 = 8;
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(r27.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8275ecd8
	if (cr6.gt) goto loc_8275ECD8;
	// addi r29,r27,-1
	r29.s64 = r27.s64 + -1;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// srw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r10.u8 & 0x3F));
	// addi r28,r11,-26400
	r28.s64 = r11.s64 + -26400;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r28
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + r28.u32);
	// addi r8,r30,55
	ctx.r8.s64 = r30.s64 + 55;
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r6,r11,436
	ctx.r6.s64 = r11.s64 + 436;
	// lwzx r3,r7,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + r31.u32);
	// cmplw cr6,r3,r6
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, xer);
	// bne cr6,0x8275ec04
	if (!cr6.eq) goto loc_8275EC04;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275e6a0
	sub_8275E6A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8275ec4c
	if (cr6.eq) goto loc_8275EC4C;
loc_8275EC04:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r30,1
	ctx.r9.s64 = r30.s64 + 1;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r5,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r5.u32);
	// lwz r4,528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 528);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// slw r10,r9,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// stw r9,528(r31)
	PPC_STORE_U32(r31.u32 + 528, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8275EC4C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// srw r10,r29,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (r29.u32 >> (r11.u8 & 0x3F));
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r28
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + r28.u32);
	// addi r8,r30,55
	ctx.r8.s64 = r30.s64 + 55;
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r6,r11,436
	ctx.r6.s64 = r11.s64 + 436;
	// lwzx r3,r7,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + r31.u32);
	// cmplw cr6,r3,r6
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, xer);
	// bne cr6,0x8275ec90
	if (!cr6.eq) goto loc_8275EC90;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275e6a0
	sub_8275E6A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8275ecd8
	if (cr6.eq) goto loc_8275ECD8;
loc_8275EC90:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r30,1
	ctx.r9.s64 = r30.s64 + 1;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r5,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r5.u32);
	// lwz r11,528(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 528);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// slw r10,r9,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r4.u8 & 0x3F));
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// stw r9,528(r31)
	PPC_STORE_U32(r31.u32 + 528, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8275ECD8:
	// lwz r11,516(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 516);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bge cr6,0x8275ecfc
	if (!cr6.lt) goto loc_8275ECFC;
	// bl 0x8275e5e0
	sub_8275E5E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8275ECFC:
	// bl 0x8275e2a0
	sub_8275E2A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8275ED04"))) PPC_WEAK_FUNC(sub_8275ED04);
PPC_FUNC_IMPL(__imp__sub_8275ED04) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8275ED08"))) PPC_WEAK_FUNC(sub_8275ED08);
PPC_FUNC_IMPL(__imp__sub_8275ED08) {
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
	// lhz r11,12(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bgt cr6,0x8275ed90
	if (cr6.gt) goto loc_8275ED90;
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// lhz r11,12(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// rotlwi r11,r11,3
	r11.u64 = __builtin_rotateleft32(r11.u32, 3);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r10,r11,436
	ctx.r10.s64 = r11.s64 + 436;
	// lwz r9,440(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 440);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r8,440(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 440);
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// stw r5,440(r11)
	PPC_STORE_U32(r11.u32 + 440, ctx.r5.u32);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,528(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// lhz r11,12(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// slw r11,r6,r7
	r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// stw r5,528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 528, ctx.r5.u32);
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addic. r11,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	r11.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bne 0x8275ee00
	if (!cr0.eq) goto loc_8275EE00;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8275e8f0
	sub_8275E8F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8275ED90:
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bne cr6,0x8275edc8
	if (!cr6.eq) goto loc_8275EDC8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// bl 0x827975d0
	sub_827975D0(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bne 0x8275ee00
	if (!cr0.eq) goto loc_8275EE00;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8275e1b8
	sub_8275E1B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8275EDC8:
	// lwz r11,532(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// subf r8,r9,r11
	ctx.r8.s64 = r11.s64 - ctx.r9.s64;
	// stw r8,532(r30)
	PPC_STORE_U32(r30.u32 + 532, ctx.r8.u32);
	// lwz r11,27504(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27504);
	// addi r29,r11,708
	r29.s64 = r11.s64 + 708;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8275e068
	sub_8275E068(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8275EE00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8275EE04"))) PPC_WEAK_FUNC(sub_8275EE04);
PPC_FUNC_IMPL(__imp__sub_8275EE04) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8275EE08"))) PPC_WEAK_FUNC(sub_8275EE08);
PPC_FUNC_IMPL(__imp__sub_8275EE08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31932
	r11.s64 = -2092695552;
	// rlwinm r10,r4,15,17,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 15) & 0x7FF8;
	// rlwinm r9,r4,22,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 22) & 0x3FC;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,-5220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -5220);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// b 0x8275ed08
	sub_8275ED08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8275EE2C"))) PPC_WEAK_FUNC(sub_8275EE2C);
PPC_FUNC_IMPL(__imp__sub_8275EE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8275EE30"))) PPC_WEAK_FUNC(sub_8275EE30);
PPC_FUNC_IMPL(__imp__sub_8275EE30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31932
	r11.s64 = -2092695552;
	// rlwinm r10,r4,15,17,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 15) & 0x7FF8;
	// rlwinm r9,r4,22,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 22) & 0x3FC;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,-5220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -5220);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lhz r11,12(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bgt cr6,0x8275ee6c
	if (cr6.gt) goto loc_8275EE6C;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// slw r3,r9,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// blr 
	return;
loc_8275EE6C:
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bne cr6,0x8275ee7c
	if (!cr6.eq) goto loc_8275EE7C;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// b 0x82797a10
	sub_82797A10(ctx, base);
	return;
loc_8275EE7C:
	// lwz r3,24(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8275EE84"))) PPC_WEAK_FUNC(sub_8275EE84);
PPC_FUNC_IMPL(__imp__sub_8275EE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8275EE88"))) PPC_WEAK_FUNC(sub_8275EE88);
PPC_FUNC_IMPL(__imp__sub_8275EE88) {
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
	// lwz r4,536(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8275eec8
	if (cr6.eq) goto loc_8275EEC8;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8275eec8
	if (!cr6.eq) goto loc_8275EEC8;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// bl 0x82797240
	sub_82797240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,536(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 536);
	// bl 0x8275e068
	sub_8275E068(ctx, base);
loc_8275EEC8:
	// lwz r4,540(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 540);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8275eee8
	if (cr6.eq) goto loc_8275EEE8;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8275eee8
	if (!cr6.eq) goto loc_8275EEE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275e8f0
	sub_8275E8F0(ctx, base);
loc_8275EEE8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,536(r31)
	PPC_STORE_U32(r31.u32 + 536, r11.u32);
	// stw r11,540(r31)
	PPC_STORE_U32(r31.u32 + 540, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8275EF04"))) PPC_WEAK_FUNC(sub_8275EF04);
PPC_FUNC_IMPL(__imp__sub_8275EF04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8275EF08"))) PPC_WEAK_FUNC(sub_8275EF08);
PPC_FUNC_IMPL(__imp__sub_8275EF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r19{};
	PPCRegister r21{};
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
	// clrlwi r11,r5,31
	r11.u64 = ctx.r5.u32 & 0x1;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8275ef40
	if (cr6.eq) goto loc_8275EF40;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8275EF40:
	// rlwinm r11,r28,0,30,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8275ef60
	if (cr6.eq) goto loc_8275EF60;
	// lis r11,-31932
	r11.s64 = -2092695552;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,-5220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -5220);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8275d9b8
	sub_8275D9B8(ctx, base);
loc_8275EF60:
	// rlwinm r11,r28,0,29,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8275ef7c
	if (cr6.eq) goto loc_8275EF7C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8275d860
	sub_8275D860(ctx, base);
loc_8275EF7C:
	// rlwinm r11,r28,0,27,27
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8275f10c
	if (cr6.eq) goto loc_8275F10C;
	// lwz r31,432(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 432);
	// addi r29,r27,428
	r29.s64 = r27.s64 + 428;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// beq cr6,0x8275f08c
	if (cr6.eq) goto loc_8275F08C;
loc_8275EF98:
	// lhz r11,12(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 12);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bgt cr6,0x8275f080
	if (cr6.gt) goto loc_8275F080;
	// lis r12,-32138
	r12.s64 = -2106195968;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-4164
	r12.s64 = r12.s64 + -4164;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_8275EFE8;
	case 1:
		goto loc_8275EFE8;
	case 2:
		goto loc_8275EFE8;
	case 3:
		goto loc_8275EFE8;
	case 4:
		goto loc_8275EFE8;
	case 5:
		goto loc_8275EFE8;
	case 6:
		goto loc_8275EFE8;
	case 7:
		goto loc_8275EFE8;
	case 8:
		goto loc_8275F080;
	case 9:
		goto loc_8275F054;
	case 10:
		goto loc_8275F05C;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-4120(r21)
	r19.u64 = PPC_LOAD_U32(r21.u32 + -4120);
	// lwz r19,-4120(r21)
	r19.u64 = PPC_LOAD_U32(r21.u32 + -4120);
	// lwz r19,-4120(r21)
	r19.u64 = PPC_LOAD_U32(r21.u32 + -4120);
	// lwz r19,-4120(r21)
	r19.u64 = PPC_LOAD_U32(r21.u32 + -4120);
	// lwz r19,-4120(r21)
	r19.u64 = PPC_LOAD_U32(r21.u32 + -4120);
	// lwz r19,-4120(r21)
	r19.u64 = PPC_LOAD_U32(r21.u32 + -4120);
	// lwz r19,-4120(r21)
	r19.u64 = PPC_LOAD_U32(r21.u32 + -4120);
	// lwz r19,-4120(r21)
	r19.u64 = PPC_LOAD_U32(r21.u32 + -4120);
	// lwz r19,-3968(r21)
	r19.u64 = PPC_LOAD_U32(r21.u32 + -3968);
	// lwz r19,-4012(r21)
	r19.u64 = PPC_LOAD_U32(r21.u32 + -4012);
	// lwz r19,-4004(r21)
	r19.u64 = PPC_LOAD_U32(r21.u32 + -4004);
loc_8275EFE8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r7,9
	ctx.r7.s64 = 9;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz r11,12(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 12);
	// lwz r8,12(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// slw r11,r9,r8
	r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// divwu r7,r10,r11
	ctx.r7.u32 = ctx.r10.u32 / r11.u32;
	// mullw r6,r7,r11
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(r11.s32);
	// subf. r6,r6,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x8275f080
	if (cr0.eq) goto loc_8275F080;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// divwu r8,r10,r11
	ctx.r8.u32 = ctx.r10.u32 / r11.u32;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// li r7,10
	ctx.r7.s64 = 10;
	// mullw r11,r8,r11
	r11.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8275f074
	goto loc_8275F074;
loc_8275F054:
	// li r7,6
	ctx.r7.s64 = 6;
	// b 0x8275f060
	goto loc_8275F060;
loc_8275F05C:
	// li r7,7
	ctx.r7.s64 = 7;
loc_8275F060:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8275F074:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8275F080:
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x8275ef98
	if (!cr6.eq) goto loc_8275EF98;
loc_8275F08C:
	// rlwinm r11,r28,0,26,26
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8275f10c
	if (cr6.eq) goto loc_8275F10C;
	// addi r11,r27,20
	r11.s64 = r27.s64 + 20;
	// lwz r5,20(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x8275d240
	sub_8275D240(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// addi r29,r27,436
	r29.s64 = r27.s64 + 436;
loc_8275F0B8:
	// lwz r31,4(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// beq cr6,0x8275f0fc
	if (cr6.eq) goto loc_8275F0FC;
	// addi r28,r26,1
	r28.s64 = r26.s64 + 1;
loc_8275F0C8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r7,10
	ctx.r7.s64 = 10;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// slw r6,r28,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x8275f0c8
	if (!cr6.eq) goto loc_8275F0C8;
loc_8275F0FC:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplwi cr6,r26,8
	cr6.compare<uint32_t>(r26.u32, 8, xer);
	// blt cr6,0x8275f0b8
	if (cr6.lt) goto loc_8275F0B8;
loc_8275F10C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8275F110"))) PPC_WEAK_FUNC(sub_8275F110);
PPC_FUNC_IMPL(__imp__sub_8275F110) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8275F114"))) PPC_WEAK_FUNC(sub_8275F114);
PPC_FUNC_IMPL(__imp__sub_8275F114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8275F118"))) PPC_WEAK_FUNC(sub_8275F118);
PPC_FUNC_IMPL(__imp__sub_8275F118) {
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
	// lwz r31,432(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// addi r29,r3,428
	r29.s64 = ctx.r3.s64 + 428;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// beq cr6,0x8275f174
	if (cr6.eq) goto loc_8275F174;
loc_8275F13C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r9,r11,4095
	ctx.r9.s64 = r11.s64 + 4095;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r7,r9,0,0,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x8275f13c
	if (!cr6.eq) goto loc_8275F13C;
loc_8275F174:
	// addi r11,r28,20
	r11.s64 = r28.s64 + 20;
	// lwz r5,20(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// li r6,133
	ctx.r6.s64 = 133;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x8275d048
	sub_8275D048(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8275F190"))) PPC_WEAK_FUNC(sub_8275F190);
PPC_FUNC_IMPL(__imp__sub_8275F190) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8275F194"))) PPC_WEAK_FUNC(sub_8275F194);
PPC_FUNC_IMPL(__imp__sub_8275F194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8275F198"))) PPC_WEAK_FUNC(sub_8275F198);
PPC_FUNC_IMPL(__imp__sub_8275F198) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// bl 0x8275e3b8
	sub_8275E3B8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lwz r11,532(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// addi r8,r30,428
	ctx.r8.s64 = r30.s64 + 428;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,432(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 432);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x8275f208
	if (cr6.eq) goto loc_8275F208;
loc_8275F1E0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x8275f1e0
	if (!cr6.eq) goto loc_8275F1E0;
loc_8275F208:
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

__attribute__((alias("__imp__sub_8275F21C"))) PPC_WEAK_FUNC(sub_8275F21C);
PPC_FUNC_IMPL(__imp__sub_8275F21C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8275F220"))) PPC_WEAK_FUNC(sub_8275F220);
PPC_FUNC_IMPL(__imp__sub_8275F220) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// lwz r8,24192(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// rlwinm r9,r7,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF0000;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,27504(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27504);
	// addi r7,r11,280
	ctx.r7.s64 = r11.s64 + 280;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// beq cr6,0x8275f2a8
	if (cr6.eq) goto loc_8275F2A8;
	// rlwinm r11,r25,0,0,7
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFF000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r9,r11,-16824
	ctx.r9.s64 = r11.s64 + -16824;
	// beq cr6,0x8275f298
	if (cr6.eq) goto loc_8275F298;
	// rlwinm r10,r25,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 8) & 0xFF;
	// lbzx r11,r10,r9
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// b 0x8275f2d4
	goto loc_8275F2D4;
loc_8275F298:
	// rlwinm r10,r25,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 16) & 0xFF;
	// lbzx r11,r10,r9
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x8275f2d4
	goto loc_8275F2D4;
loc_8275F2A8:
	// rlwinm r11,r25,0,16,23
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r9,r11,-16824
	ctx.r9.s64 = r11.s64 + -16824;
	// beq cr6,0x8275f2cc
	if (cr6.eq) goto loc_8275F2CC;
	// rlwinm r10,r25,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 24) & 0xFF;
	// lbzx r11,r10,r9
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// b 0x8275f2d4
	goto loc_8275F2D4;
loc_8275F2CC:
	// clrlwi r10,r25,24
	ctx.r10.u64 = r25.u32 & 0xFF;
	// lbzx r11,r10,r9
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
loc_8275F2D4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// clrlwi r4,r11,24
	ctx.r4.u64 = r11.u32 & 0xFF;
	// li r11,1
	r11.s64 = 1;
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// slw r11,r11,r4
	r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r4.u8 & 0x3F));
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// bl 0x82797168
	sub_82797168(ctx, base);
	// addi r9,r30,4095
	ctx.r9.s64 = r30.s64 + 4095;
	// addi r11,r31,436
	r11.s64 = r31.s64 + 436;
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r10,r9,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + r28.u64;
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// addi r28,r9,-1
	r28.s64 = ctx.r9.s64 + -1;
	// addi r9,r31,428
	ctx.r9.s64 = r31.s64 + 428;
	// addi r7,r11,16
	ctx.r7.s64 = r11.s64 + 16;
	// stw r9,428(r31)
	PPC_STORE_U32(r31.u32 + 428, ctx.r9.u32);
	// addi r6,r11,24
	ctx.r6.s64 = r11.s64 + 24;
	// stw r9,432(r31)
	PPC_STORE_U32(r31.u32 + 432, ctx.r9.u32);
	// addi r5,r11,40
	ctx.r5.s64 = r11.s64 + 40;
	// stw r11,436(r31)
	PPC_STORE_U32(r31.u32 + 436, r11.u32);
	// addi r9,r11,32
	ctx.r9.s64 = r11.s64 + 32;
	// stw r11,440(r31)
	PPC_STORE_U32(r31.u32 + 440, r11.u32);
	// addi r11,r11,56
	r11.s64 = r11.s64 + 56;
	// addi r24,r1,96
	r24.s64 = ctx.r1.s64 + 96;
	// stw r4,484(r31)
	PPC_STORE_U32(r31.u32 + 484, ctx.r4.u32);
	// stw r4,488(r31)
	PPC_STORE_U32(r31.u32 + 488, ctx.r4.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r8,444(r31)
	PPC_STORE_U32(r31.u32 + 444, ctx.r8.u32);
	// divwu r4,r28,r10
	ctx.r4.u32 = r28.u32 / ctx.r10.u32;
	// stw r8,448(r31)
	PPC_STORE_U32(r31.u32 + 448, ctx.r8.u32);
	// li r26,4096
	r26.s64 = 4096;
	// stw r7,452(r31)
	PPC_STORE_U32(r31.u32 + 452, ctx.r7.u32);
	// mullw r8,r4,r10
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// stw r7,456(r31)
	PPC_STORE_U32(r31.u32 + 456, ctx.r7.u32);
	// stw r6,460(r31)
	PPC_STORE_U32(r31.u32 + 460, ctx.r6.u32);
	// stw r6,464(r31)
	PPC_STORE_U32(r31.u32 + 464, ctx.r6.u32);
	// stw r11,492(r31)
	PPC_STORE_U32(r31.u32 + 492, r11.u32);
	// stw r11,496(r31)
	PPC_STORE_U32(r31.u32 + 496, r11.u32);
	// stw r9,468(r31)
	PPC_STORE_U32(r31.u32 + 468, ctx.r9.u32);
	// stw r9,472(r31)
	PPC_STORE_U32(r31.u32 + 472, ctx.r9.u32);
	// stw r5,476(r31)
	PPC_STORE_U32(r31.u32 + 476, ctx.r5.u32);
	// stw r5,480(r31)
	PPC_STORE_U32(r31.u32 + 480, ctx.r5.u32);
	// std r30,0(r24)
	PPC_STORE_U64(r24.u32 + 0, r30.u64);
	// rlwinm r7,r29,28,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 28) & 0x1;
	// std r30,8(r24)
	PPC_STORE_U64(r24.u32 + 8, r30.u64);
	// rlwinm r6,r29,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x1;
	// std r30,16(r24)
	PPC_STORE_U64(r24.u32 + 16, r30.u64);
	// stw r3,544(r31)
	PPC_STORE_U32(r31.u32 + 544, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r7,500(r31)
	PPC_STORE_U8(r31.u32 + 500, ctx.r7.u8);
	// stb r6,501(r31)
	PPC_STORE_U8(r31.u32 + 501, ctx.r6.u8);
	// stb r30,502(r31)
	PPC_STORE_U8(r31.u32 + 502, r30.u8);
	// stb r30,503(r31)
	PPC_STORE_U8(r31.u32 + 503, r30.u8);
	// stw r26,504(r31)
	PPC_STORE_U32(r31.u32 + 504, r26.u32);
	// stw r10,508(r31)
	PPC_STORE_U32(r31.u32 + 508, ctx.r10.u32);
	// stw r8,512(r31)
	PPC_STORE_U32(r31.u32 + 512, ctx.r8.u32);
	// stw r27,516(r31)
	PPC_STORE_U32(r31.u32 + 516, r27.u32);
	// stw r30,520(r31)
	PPC_STORE_U32(r31.u32 + 520, r30.u32);
	// stw r30,524(r31)
	PPC_STORE_U32(r31.u32 + 524, r30.u32);
	// stw r30,528(r31)
	PPC_STORE_U32(r31.u32 + 528, r30.u32);
	// stw r30,532(r31)
	PPC_STORE_U32(r31.u32 + 532, r30.u32);
	// stw r30,536(r31)
	PPC_STORE_U32(r31.u32 + 536, r30.u32);
	// stw r30,540(r31)
	PPC_STORE_U32(r31.u32 + 540, r30.u32);
	// stw r30,548(r31)
	PPC_STORE_U32(r31.u32 + 548, r30.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stb r10,503(r31)
	PPC_STORE_U8(r31.u32 + 503, ctx.r10.u8);
	// cmplwi cr6,r11,4096
	cr6.compare<uint32_t>(r11.u32, 4096, xer);
	// bge cr6,0x8275f414
	if (!cr6.lt) goto loc_8275F414;
	// mr r11,r26
	r11.u64 = r26.u64;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r26.u32);
loc_8275F414:
	// lwz r10,508(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,504(r31)
	PPC_STORE_U32(r31.u32 + 504, r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// divwu r7,r10,r11
	ctx.r7.u32 = ctx.r10.u32 / r11.u32;
	// stw r8,520(r31)
	PPC_STORE_U32(r31.u32 + 520, ctx.r8.u32);
	// mullw r10,r7,r11
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(r11.s32);
	// stw r10,508(r31)
	PPC_STORE_U32(r31.u32 + 508, ctx.r10.u32);
	// beq cr6,0x8275f464
	if (cr6.eq) goto loc_8275F464;
	// addi r9,r9,4095
	ctx.r9.s64 = ctx.r9.s64 + 4095;
	// rlwinm r9,r9,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x8275f464
	if (!cr6.gt) goto loc_8275F464;
	// stw r9,508(r31)
	PPC_STORE_U32(r31.u32 + 508, ctx.r9.u32);
	// stb r30,500(r31)
	PPC_STORE_U8(r31.u32 + 500, r30.u8);
	// stb r30,501(r31)
	PPC_STORE_U8(r31.u32 + 501, r30.u8);
loc_8275F464:
	// lwz r10,516(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 516);
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8275f480
	if (!cr6.lt) goto loc_8275F480;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8275f480
	if (cr6.eq) goto loc_8275F480;
	// stw r9,516(r31)
	PPC_STORE_U32(r31.u32 + 516, ctx.r9.u32);
loc_8275F480:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8275f4f0
	if (cr6.eq) goto loc_8275F4F0;
	// lwz r10,516(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 516);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// ble cr6,0x8275f498
	if (!cr6.gt) goto loc_8275F498;
	// stw r8,516(r31)
	PPC_STORE_U32(r31.u32 + 516, ctx.r8.u32);
loc_8275F498:
	// lwz r10,516(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 516);
	// cmplwi cr6,r10,4096
	cr6.compare<uint32_t>(ctx.r10.u32, 4096, xer);
	// bge cr6,0x8275f4b0
	if (!cr6.lt) goto loc_8275F4B0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8275f4b0
	if (cr6.eq) goto loc_8275F4B0;
	// stw r26,516(r31)
	PPC_STORE_U32(r31.u32 + 516, r26.u32);
loc_8275F4B0:
	// lwz r10,508(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// ble cr6,0x8275f4c8
	if (!cr6.gt) goto loc_8275F4C8;
	// addi r10,r8,4095
	ctx.r10.s64 = ctx.r8.s64 + 4095;
	// rlwinm r9,r10,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// stw r9,508(r31)
	PPC_STORE_U32(r31.u32 + 508, ctx.r9.u32);
loc_8275F4C8:
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// ble cr6,0x8275f4dc
	if (!cr6.gt) goto loc_8275F4DC;
	// addi r11,r8,4095
	r11.s64 = ctx.r8.s64 + 4095;
	// rlwinm r10,r11,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// stw r10,504(r31)
	PPC_STORE_U32(r31.u32 + 504, ctx.r10.u32);
loc_8275F4DC:
	// lwz r11,512(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 512);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// ble cr6,0x8275f4ec
	if (!cr6.gt) goto loc_8275F4EC;
	// stw r8,512(r31)
	PPC_STORE_U32(r31.u32 + 512, ctx.r8.u32);
loc_8275F4EC:
	// stb r30,501(r31)
	PPC_STORE_U8(r31.u32 + 501, r30.u8);
loc_8275F4F0:
	// lwz r4,512(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 512);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8275f51c
	if (cr6.eq) goto loc_8275F51C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,508(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275df88
	sub_8275DF88(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r3
	temp.u8 = (~r11.u32 + ctx.r3.u32 < ~r11.u32) | (~r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8275f520
	goto loc_8275F520;
loc_8275F51C:
	// li r11,1
	r11.s64 = 1;
loc_8275F520:
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stb r11,502(r31)
	PPC_STORE_U8(r31.u32 + 502, r11.u8);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8275F534"))) PPC_WEAK_FUNC(sub_8275F534);
PPC_FUNC_IMPL(__imp__sub_8275F534) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8275F538"))) PPC_WEAK_FUNC(sub_8275F538);
PPC_FUNC_IMPL(__imp__sub_8275F538) {
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
	// lwz r31,432(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// addi r26,r3,428
	r26.s64 = ctx.r3.s64 + 428;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// beq cr6,0x8275f650
	if (cr6.eq) goto loc_8275F650;
	// li r27,1
	r27.s64 = 1;
	// lis r28,-31932
	r28.s64 = -2092695552;
loc_8275F560:
	// lwz r3,548(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 548);
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8275f588
	if (cr6.eq) goto loc_8275F588;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8275F588:
	// lwz r11,524(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 524);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// subf r10,r29,r11
	ctx.r10.s64 = r11.s64 - r29.s64;
	// stw r10,524(r30)
	PPC_STORE_U32(r30.u32 + 524, ctx.r10.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r3,-5220(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -5220);
	// bl 0x82760028
	sub_82760028(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lhz r8,14(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 14);
	// rlwinm r7,r9,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// slw r6,r27,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r8.u8 & 0x3F));
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8275f5f4
	if (cr6.eq) goto loc_8275F5F4;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,524(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 524);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r9,r11,1
	ctx.r9.u64 = r11.u32 & 0x7FFFFFFF;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r8,524(r30)
	PPC_STORE_U32(r30.u32 + 524, ctx.r8.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// clrlwi r11,r4,1
	r11.u64 = ctx.r4.u32 & 0x7FFFFFFF;
	// lwz r10,20(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// add r5,r11,r29
	ctx.r5.u64 = r11.u64 + r29.u64;
	// subf r4,r11,r7
	ctx.r4.s64 = ctx.r7.s64 - r11.s64;
	// b 0x8275f614
	goto loc_8275F614;
loc_8275F5F4:
	// cmplwi cr6,r6,4096
	cr6.compare<uint32_t>(ctx.r6.u32, 4096, xer);
	// bgt cr6,0x8275f600
	if (cr6.gt) goto loc_8275F600;
	// li r6,4096
	ctx.r6.s64 = 4096;
loc_8275F600:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_8275F614:
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x8275d7b8
	sub_8275D7B8(ctx, base);
	// lwz r31,432(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 432);
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// bne cr6,0x8275f560
	if (!cr6.eq) goto loc_8275F560;
loc_8275F650:
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x8275c7a0
	sub_8275C7A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8275F65C"))) PPC_WEAK_FUNC(sub_8275F65C);
PPC_FUNC_IMPL(__imp__sub_8275F65C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8275F660"))) PPC_WEAK_FUNC(sub_8275F660);
PPC_FUNC_IMPL(__imp__sub_8275F660) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8275e3b8
	sub_8275E3B8(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// divwu r10,r11,r3
	ctx.r10.u32 = r11.u32 / ctx.r3.u32;
	// mullw r3,r10,r3
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// stw r3,544(r30)
	PPC_STORE_U32(r30.u32 + 544, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8275F6A8"))) PPC_WEAK_FUNC(sub_8275F6A8);
PPC_FUNC_IMPL(__imp__sub_8275F6A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8275F6AC"))) PPC_WEAK_FUNC(sub_8275F6AC);
PPC_FUNC_IMPL(__imp__sub_8275F6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8275F6B0"))) PPC_WEAK_FUNC(sub_8275F6B0);
PPC_FUNC_IMPL(__imp__sub_8275F6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8275f738
	if (cr6.eq) goto loc_8275F738;
	// lhz r11,14(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r27,24(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// slw r5,r10,r11
	ctx.r5.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// bl 0x8275eb30
	sub_8275EB30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8275f72c
	if (cr6.eq) goto loc_8275F72C;
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(r27.u32, r31.u32, xer);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// blt cr6,0x8275f710
	if (cr6.lt) goto loc_8275F710;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_8275F710:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8275ed08
	sub_8275ED08(ctx, base);
loc_8275F72C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9454
	return;
loc_8275F738:
	// lhz r10,14(r28)
	ctx.r10.u64 = PPC_LOAD_U16(r28.u32 + 14);
	// li r25,1
	r25.s64 = 1;
	// lwz r11,504(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 504);
	// slw r26,r25,r10
	r26.u64 = ctx.r10.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r29,24(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// add r10,r26,r31
	ctx.r10.u64 = r26.u64 + r31.u64;
	// addi r9,r26,-1
	ctx.r9.s64 = r26.s64 + -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// andc r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// divwu r6,r7,r11
	ctx.r6.u32 = ctx.r7.u32 / r11.u32;
	// mullw r31,r6,r11
	r31.s64 = int64_t(ctx.r6.s32) * int64_t(r11.s32);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x8275f780
	if (!cr6.eq) goto loc_8275F780;
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9454
	return;
loc_8275F780:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,27504(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 27504);
	// addi r23,r11,708
	r23.s64 = r11.s64 + 708;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r27,24(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// bge cr6,0x8275f810
	if (!cr6.lt) goto loc_8275F810;
	// lwz r11,516(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 516);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x8275f810
	if (!cr6.lt) goto loc_8275F810;
	// lhz r11,14(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 14);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// slw r5,r25,r11
	ctx.r5.u64 = r11.u8 & 0x20 ? 0 : (r25.u32 << (r11.u8 & 0x3F));
	// bl 0x8275eb30
	sub_8275EB30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8275f7fc
	if (cr6.eq) goto loc_8275F7FC;
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(r27.u32, r31.u32, xer);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// blt cr6,0x8275f7e0
	if (cr6.lt) goto loc_8275F7E0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_8275F7E0:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8275ed08
	sub_8275ED08(ctx, base);
loc_8275F7FC:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9454
	return;
loc_8275F810:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// ble cr6,0x8275f888
	if (!cr6.gt) goto loc_8275F888;
	// lwz r10,544(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 544);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8275f888
	if (cr6.eq) goto loc_8275F888;
	// lwz r11,524(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 524);
	// subf r9,r29,r11
	ctx.r9.s64 = r11.s64 - r29.s64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x8275f888
	if (!cr6.gt) goto loc_8275F888;
	// lwz r3,548(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 548);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8275f888
	if (cr6.eq) goto loc_8275F888;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r29,r8
	r11.s64 = ctx.r8.s64 - r29.s64;
	// add r5,r11,r31
	ctx.r5.u64 = r11.u64 + r31.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8275f968
	if (cr6.eq) goto loc_8275F968;
	// lwz r11,524(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 524);
	// lwz r10,544(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 544);
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8275f968
	if (cr6.gt) goto loc_8275F968;
loc_8275F888:
	// lbz r11,503(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 503);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8275f968
	if (cr6.eq) goto loc_8275F968;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8275f968
	if (cr6.eq) goto loc_8275F968;
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,-5220(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -5220);
	// ble cr6,0x8275f928
	if (!cr6.gt) goto loc_8275F928;
	// bl 0x82760148
	sub_82760148(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8275f92c
	if (!cr6.eq) goto loc_8275F92C;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9454
	return;
loc_8275F928:
	// bl 0x82760148
	sub_82760148(ctx, base);
loc_8275F92C:
	// lwz r11,532(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r10,524(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 524);
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// subf r11,r29,r10
	r11.s64 = ctx.r10.s64 - r29.s64;
	// stw r9,532(r30)
	PPC_STORE_U32(r30.u32 + 532, ctx.r9.u32);
	// add r8,r11,r31
	ctx.r8.u64 = r11.u64 + r31.u64;
	// stw r8,524(r30)
	PPC_STORE_U32(r30.u32 + 524, ctx.r8.u32);
	// stw r31,24(r28)
	PPC_STORE_U32(r28.u32 + 24, r31.u32);
	// lwz r31,28(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9454
	return;
loc_8275F968:
	// lhz r11,14(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 14);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// slw r5,r25,r11
	ctx.r5.u64 = r11.u8 & 0x20 ? 0 : (r25.u32 << (r11.u8 & 0x3F));
	// bl 0x8275eb30
	sub_8275EB30(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8275f9b4
	if (cr6.eq) goto loc_8275F9B4;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// blt cr6,0x8275f998
	if (cr6.lt) goto loc_8275F998;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_8275F998:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8275ed08
	sub_8275ED08(ctx, base);
loc_8275F9B4:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8275F9C4"))) PPC_WEAK_FUNC(sub_8275F9C4);
PPC_FUNC_IMPL(__imp__sub_8275F9C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8275F9C8"))) PPC_WEAK_FUNC(sub_8275F9C8);
PPC_FUNC_IMPL(__imp__sub_8275F9C8) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// bge cr6,0x8275f9f4
	if (!cr6.lt) goto loc_8275F9F4;
	// li r6,16
	ctx.r6.s64 = 16;
loc_8275F9F4:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lhz r11,12(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 12);
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// andc r31,r9,r10
	r31.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// bgt cr6,0x8275faa0
	if (cr6.gt) goto loc_8275FAA0;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8275fa30
	if (cr6.gt) goto loc_8275FA30;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8275FA30:
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r8,-26400
	ctx.r6.s64 = ctx.r8.s64 + -26400;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// lwzx r11,r7,r6
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// slw r5,r5,r11
	ctx.r5.u64 = r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (r11.u8 & 0x3F));
	// bl 0x8275eb30
	sub_8275EB30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8275fa94
	if (cr6.eq) goto loc_8275FA94;
	// cmplw cr6,r28,r31
	cr6.compare<uint32_t>(r28.u32, r31.u32, xer);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// blt cr6,0x8275fa78
	if (cr6.lt) goto loc_8275FA78;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_8275FA78:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8275ed08
	sub_8275ED08(ctx, base);
loc_8275FA94:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8275FAA0:
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bne cr6,0x8275fb3c
	if (!cr6.eq) goto loc_8275FB3C;
	// addi r29,r30,20
	r29.s64 = r30.s64 + 20;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82797738
	sub_82797738(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8275fb44
	if (!cr6.eq) goto loc_8275FB44;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82797a58
	sub_82797A58(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// slw r5,r11,r3
	ctx.r5.u64 = ctx.r3.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r3.u8 & 0x3F));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8275eb30
	sub_8275EB30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8275fa94
	if (cr6.eq) goto loc_8275FA94;
	// cmplw cr6,r28,r31
	cr6.compare<uint32_t>(r28.u32, r31.u32, xer);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// blt cr6,0x8275fb14
	if (cr6.lt) goto loc_8275FB14;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_8275FB14:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8275ed08
	sub_8275ED08(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8275FB3C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8275f6b0
	sub_8275F6B0(ctx, base);
loc_8275FB44:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8275FB48"))) PPC_WEAK_FUNC(sub_8275FB48);
PPC_FUNC_IMPL(__imp__sub_8275FB48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8275FB4C"))) PPC_WEAK_FUNC(sub_8275FB4C);
PPC_FUNC_IMPL(__imp__sub_8275FB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8275FB50"))) PPC_WEAK_FUNC(sub_8275FB50);
PPC_FUNC_IMPL(__imp__sub_8275FB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31932
	r11.s64 = -2092695552;
	// rlwinm r10,r4,15,17,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 15) & 0x7FF8;
	// rlwinm r9,r4,22,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 22) & 0x3FC;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,-5220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -5220);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// b 0x8275f9c8
	sub_8275F9C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8275FB78"))) PPC_WEAK_FUNC(sub_8275FB78);
PPC_FUNC_IMPL(__imp__sub_8275FB78) {
	PPC_FUNC_PROLOGUE();
	// b 0x8275f538
	sub_8275F538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8275FB7C"))) PPC_WEAK_FUNC(sub_8275FB7C);
PPC_FUNC_IMPL(__imp__sub_8275FB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8275FB80"))) PPC_WEAK_FUNC(sub_8275FB80);
PPC_FUNC_IMPL(__imp__sub_8275FB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-26364
	ctx.r9.s64 = ctx.r10.s64 + -26364;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
}

__attribute__((alias("__imp__sub_8275FBA4"))) PPC_WEAK_FUNC(sub_8275FBA4);
PPC_FUNC_IMPL(__imp__sub_8275FBA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8275FBA8"))) PPC_WEAK_FUNC(sub_8275FBA8);
PPC_FUNC_IMPL(__imp__sub_8275FBA8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addic. r3,r3,28
	xer.ca = ctx.r3.u32 > 4294967267;
	ctx.r3.s64 = ctx.r3.s64 + 28;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// beq 0x8275fbec
	if (cr0.eq) goto loc_8275FBEC;
	// li r7,4096
	ctx.r7.s64 = 4096;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// bl 0x82796050
	sub_82796050(ctx, base);
	// b 0x8275fbf0
	goto loc_8275FBF0;
loc_8275FBEC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8275FBF0:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r30,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r30.u64);
	// std r30,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r30.u64);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// bne cr6,0x8275fc4c
	if (!cr6.eq) goto loc_8275FC4C;
	// li r11,1
	r11.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_8275FC4C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8275fc5c
	if (!cr6.eq) goto loc_8275FC5C;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8275FC5C:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
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

__attribute__((alias("__imp__sub_8275FC78"))) PPC_WEAK_FUNC(sub_8275FC78);
PPC_FUNC_IMPL(__imp__sub_8275FC78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8275FC7C"))) PPC_WEAK_FUNC(sub_8275FC7C);
PPC_FUNC_IMPL(__imp__sub_8275FC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8275FC80"))) PPC_WEAK_FUNC(sub_8275FC80);
PPC_FUNC_IMPL(__imp__sub_8275FC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r8,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r8.u32);
	// stb r10,20(r4)
	PPC_STORE_U8(ctx.r4.u32 + 20, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8275FCAC"))) PPC_WEAK_FUNC(sub_8275FCAC);
PPC_FUNC_IMPL(__imp__sub_8275FCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8275FCB0"))) PPC_WEAK_FUNC(sub_8275FCB0);
PPC_FUNC_IMPL(__imp__sub_8275FCB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x827966b0
	sub_827966B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8275FCB8"))) PPC_WEAK_FUNC(sub_8275FCB8);
PPC_FUNC_IMPL(__imp__sub_8275FCB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x827967e8
	sub_827967E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8275FCC0"))) PPC_WEAK_FUNC(sub_8275FCC0);
PPC_FUNC_IMPL(__imp__sub_8275FCC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82796778
	sub_82796778(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8275FCC8"))) PPC_WEAK_FUNC(sub_8275FCC8);
PPC_FUNC_IMPL(__imp__sub_8275FCC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,4096
	cr6.compare<uint32_t>(ctx.r5.u32, 4096, xer);
	// bge cr6,0x8275fcd8
	if (!cr6.lt) goto loc_8275FCD8;
	// li r10,4096
	ctx.r10.s64 = 4096;
loc_8275FCD8:
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bge cr6,0x8275fce8
	if (!cr6.lt) goto loc_8275FCE8;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
loc_8275FCE8:
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// ble cr6,0x8275fcf8
	if (!cr6.gt) goto loc_8275FCF8;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
loc_8275FCF8:
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x8275fd04
	if (!cr6.lt) goto loc_8275FD04;
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
loc_8275FD04:
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r9,r11,r4
	ctx.r9.u64 = r11.u64 + ctx.r4.u64;
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8275FD30"))) PPC_WEAK_FUNC(sub_8275FD30);
PPC_FUNC_IMPL(__imp__sub_8275FD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r5,r11
	ctx.r9.s64 = r11.s64 - ctx.r5.s64;
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8275FD54"))) PPC_WEAK_FUNC(sub_8275FD54);
PPC_FUNC_IMPL(__imp__sub_8275FD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8275FD58"))) PPC_WEAK_FUNC(sub_8275FD58);
PPC_FUNC_IMPL(__imp__sub_8275FD58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_8275FD64"))) PPC_WEAK_FUNC(sub_8275FD64);
PPC_FUNC_IMPL(__imp__sub_8275FD64) {
	PPC_FUNC_PROLOGUE();
	// b 0x82795f58
	sub_82795F58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8275FD68"))) PPC_WEAK_FUNC(sub_8275FD68);
PPC_FUNC_IMPL(__imp__sub_8275FD68) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82796008
	sub_82796008(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8275FD70"))) PPC_WEAK_FUNC(sub_8275FD70);
PPC_FUNC_IMPL(__imp__sub_8275FD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8275FD84"))) PPC_WEAK_FUNC(sub_8275FD84);
PPC_FUNC_IMPL(__imp__sub_8275FD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8275FD88"))) PPC_WEAK_FUNC(sub_8275FD88);
PPC_FUNC_IMPL(__imp__sub_8275FD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r8,76(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r7,72(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// slw r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// subf r10,r6,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r6.s64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8275FDAC"))) PPC_WEAK_FUNC(sub_8275FDAC);
PPC_FUNC_IMPL(__imp__sub_8275FDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8275FDB0"))) PPC_WEAK_FUNC(sub_8275FDB0);
PPC_FUNC_IMPL(__imp__sub_8275FDB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8275FDC8"))) PPC_WEAK_FUNC(sub_8275FDC8);
PPC_FUNC_IMPL(__imp__sub_8275FDC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8275FDE0"))) PPC_WEAK_FUNC(sub_8275FDE0);
PPC_FUNC_IMPL(__imp__sub_8275FDE0) {
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-26364
	ctx.r9.s64 = ctx.r10.s64 + -26364;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
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
	// bl 0x8275fba8
	sub_8275FBA8(ctx, base);
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

__attribute__((alias("__imp__sub_8275FE34"))) PPC_WEAK_FUNC(sub_8275FE34);
PPC_FUNC_IMPL(__imp__sub_8275FE34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8275FE38"))) PPC_WEAK_FUNC(sub_8275FE38);
PPC_FUNC_IMPL(__imp__sub_8275FE38) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8275fe94
	if (!cr6.eq) goto loc_8275FE94;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x8275d9a8
	sub_8275D9A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8275fe88
	if (!cr6.eq) goto loc_8275FE88;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8275FE88:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
loc_8275FE94:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8275FEB4"))) PPC_WEAK_FUNC(sub_8275FEB4);
PPC_FUNC_IMPL(__imp__sub_8275FEB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8275FEB8"))) PPC_WEAK_FUNC(sub_8275FEB8);
PPC_FUNC_IMPL(__imp__sub_8275FEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	uint32_t ea{};
	// li r9,4096
	ctx.r9.s64 = 4096;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8275FECC:
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stwu r10,8(r11)
	ea = 8 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x8275fecc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8275FECC;
	// lis r11,-31932
	r11.s64 = -2092695552;
	// stw r3,-5220(r11)
	PPC_STORE_U32(r11.u32 + -5220, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8275FEE4"))) PPC_WEAK_FUNC(sub_8275FEE4);
PPC_FUNC_IMPL(__imp__sub_8275FEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8275FEE8"))) PPC_WEAK_FUNC(sub_8275FEE8);
PPC_FUNC_IMPL(__imp__sub_8275FEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// addi r10,r11,27544
	ctx.r10.s64 = r11.s64 + 27544;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_8275FF04:
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stwu r8,8(r11)
	ea = 8 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// bdnz 0x8275ff04
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8275FF04;
	// lis r11,-31932
	r11.s64 = -2092695552;
	// stw r10,-5220(r11)
	PPC_STORE_U32(r11.u32 + -5220, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8275FF18"))) PPC_WEAK_FUNC(sub_8275FF18);
PPC_FUNC_IMPL(__imp__sub_8275FF18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8275FF1C"))) PPC_WEAK_FUNC(sub_8275FF1C);
PPC_FUNC_IMPL(__imp__sub_8275FF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8275FF20"))) PPC_WEAK_FUNC(sub_8275FF20);
PPC_FUNC_IMPL(__imp__sub_8275FF20) {
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
	// add r11,r4,r5
	r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r29,r4,12,20,31
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFF;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r27,r11,12,20,31
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// bgt cr6,0x8275ffc4
	if (cr6.gt) goto loc_8275FFC4;
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// li r26,0
	r26.s64 = 0;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
loc_8275FF5C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8275ff98
	if (!cr6.eq) goto loc_8275FF98;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x8275d9a8
	sub_8275D9A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8275ff8c
	if (!cr6.eq) goto loc_8275FF8C;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// b 0x8275ffa8
	goto loc_8275FFA8;
loc_8275FF8C:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
loc_8275FF98:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_8275FFA8:
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8275ffd0
	if (cr6.eq) goto loc_8275FFD0;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// ble cr6,0x8275ff5c
	if (!cr6.gt) goto loc_8275FF5C;
loc_8275FFC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8275FFD0:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// ble cr6,0x8276001c
	if (!cr6.gt) goto loc_8276001C;
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r30,r29,r30
	r30.s64 = r30.s64 - r29.s64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
loc_8275FFE8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne 0x82760010
	if (!cr0.eq) goto loc_82760010;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x8275d9b0
	sub_8275D9B0(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
loc_82760010:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// bne 0x8275ffe8
	if (!cr0.eq) goto loc_8275FFE8;
loc_8276001C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82760024"))) PPC_WEAK_FUNC(sub_82760024);
PPC_FUNC_IMPL(__imp__sub_82760024) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82760028"))) PPC_WEAK_FUNC(sub_82760028);
PPC_FUNC_IMPL(__imp__sub_82760028) {
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
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r11,r4,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r10,r10,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8276009c
	if (cr6.gt) goto loc_8276009C;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// add r11,r9,r3
	r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r29,r10,1
	r29.s64 = ctx.r10.s64 + 1;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// li r28,0
	r28.s64 = 0;
loc_82760068:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne 0x82760090
	if (!cr0.eq) goto loc_82760090;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x8275d9b0
	sub_8275D9B0(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
loc_82760090:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bne 0x82760068
	if (!cr0.eq) goto loc_82760068;
loc_8276009C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827600A0"))) PPC_WEAK_FUNC(sub_827600A0);
PPC_FUNC_IMPL(__imp__sub_827600A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827600A4"))) PPC_WEAK_FUNC(sub_827600A4);
PPC_FUNC_IMPL(__imp__sub_827600A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827600A8"))) PPC_WEAK_FUNC(sub_827600A8);
PPC_FUNC_IMPL(__imp__sub_827600A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// add r11,r4,r5
	r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r5,r4,12,20,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFF;
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// rlwinm r31,r30,12,20,31
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// cmplw cr6,r5,r31
	cr6.compare<uint32_t>(ctx.r5.u32, r31.u32, xer);
	// bgt cr6,0x82760138
	if (cr6.gt) goto loc_82760138;
	// rlwinm r11,r5,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_827600D8:
	// li r11,0
	r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bne cr6,0x827600ec
	if (!cr6.eq) goto loc_827600EC;
	// rlwinm r11,r4,20,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFF;
loc_827600EC:
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, r31.u32, xer);
	// bne cr6,0x827600f8
	if (!cr6.eq) goto loc_827600F8;
	// rlwinm r10,r30,20,24,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 20) & 0xFF;
loc_827600F8:
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82760128
	if (cr6.gt) goto loc_82760128;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r11,r10,1
	xer.ca = ctx.r10.u32 > 4294967294;
	r11.s64 = ctx.r10.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// beq 0x82760128
	if (cr0.eq) goto loc_82760128;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82760120:
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82760120
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82760120;
loc_82760128:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, r31.u32, xer);
	// ble cr6,0x827600d8
	if (!cr6.gt) goto loc_827600D8;
loc_82760138:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_82760140"))) PPC_WEAK_FUNC(sub_82760140);
PPC_FUNC_IMPL(__imp__sub_82760140) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82760144"))) PPC_WEAK_FUNC(sub_82760144);
PPC_FUNC_IMPL(__imp__sub_82760144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82760148"))) PPC_WEAK_FUNC(sub_82760148);
PPC_FUNC_IMPL(__imp__sub_82760148) {
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
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// beq cr6,0x827602c4
	if (cr6.eq) goto loc_827602C4;
	// add r11,r4,r5
	r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// ble cr6,0x82760258
	if (!cr6.gt) goto loc_82760258;
	// add r24,r4,r6
	r24.u64 = ctx.r4.u64 + ctx.r6.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// addi r10,r24,-1
	ctx.r10.s64 = r24.s64 + -1;
	// rlwinm r26,r9,12,20,31
	r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// rlwinm r25,r10,12,20,31
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// addi r31,r25,1
	r31.s64 = r25.s64 + 1;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// bgt cr6,0x827601c8
	if (cr6.gt) goto loc_827601C8;
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r29,r11,4
	r29.s64 = r11.s64 + 4;
loc_827601A0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// bl 0x8275fe38
	sub_8275FE38(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827601f8
	if (cr6.eq) goto loc_827601F8;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// ble cr6,0x827601a0
	if (!cr6.gt) goto loc_827601A0;
loc_827601C8:
	// rlwinm r11,r30,15,17,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0x7FF8;
	// rlwinm r10,r30,22,22,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 22) & 0x3FC;
	// add r9,r11,r23
	ctx.r9.u64 = r11.u64 + r23.u64;
	// subf r5,r27,r28
	ctx.r5.s64 = r28.s64 - r27.s64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x827600a8
	sub_827600A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9454
	return;
loc_827601F8:
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// ble cr6,0x8276024c
	if (!cr6.gt) goto loc_8276024C;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r30,r25,r11
	r30.s64 = r11.s64 - r25.s64;
	// add r11,r10,r23
	r11.u64 = ctx.r10.u64 + r23.u64;
	// li r29,0
	r29.s64 = 0;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
loc_82760218:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne 0x82760240
	if (!cr0.eq) goto loc_82760240;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x8275d9b0
	sub_8275D9B0(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_82760240:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// bne 0x82760218
	if (!cr0.eq) goto loc_82760218;
loc_8276024C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9454
	return;
loc_82760258:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// add r10,r30,r27
	ctx.r10.u64 = r30.u64 + r27.u64;
	// rlwinm r11,r11,12,20,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r10,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x827602c4
	if (cr6.gt) goto loc_827602C4;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// add r11,r9,r23
	r11.u64 = ctx.r9.u64 + r23.u64;
	// addi r30,r10,1
	r30.s64 = ctx.r10.s64 + 1;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// li r29,0
	r29.s64 = 0;
loc_82760290:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne 0x827602b8
	if (!cr0.eq) goto loc_827602B8;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x8275d9b0
	sub_8275D9B0(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_827602B8:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bne 0x82760290
	if (!cr0.eq) goto loc_82760290;
loc_827602C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_827602CC"))) PPC_WEAK_FUNC(sub_827602CC);
PPC_FUNC_IMPL(__imp__sub_827602CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_827602D0"))) PPC_WEAK_FUNC(sub_827602D0);
PPC_FUNC_IMPL(__imp__sub_827602D0) {
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
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mulli r3,r11,1000
	ctx.r3.s64 = r11.s64 * 1000;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_827602F4"))) PPC_WEAK_FUNC(sub_827602F4);
PPC_FUNC_IMPL(__imp__sub_827602F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827602F8"))) PPC_WEAK_FUNC(sub_827602F8);
PPC_FUNC_IMPL(__imp__sub_827602F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// lfd f0,16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 16);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lfd f0,-26304(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -26304);
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82760314"))) PPC_WEAK_FUNC(sub_82760314);
PPC_FUNC_IMPL(__imp__sub_82760314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82760318"))) PPC_WEAK_FUNC(sub_82760318);
PPC_FUNC_IMPL(__imp__sub_82760318) {
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
	// lis r30,-31932
	r30.s64 = -2092695552;
	// lis r11,-31932
	r11.s64 = -2092695552;
	// addi r31,r11,-5216
	r31.s64 = r11.s64 + -5216;
	// lbz r11,-5208(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + -5208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82760374
	if (!cr6.eq) goto loc_82760374;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82605a60
	sub_82605A60(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r10,7812
	ctx.r10.s64 = 7812;
	// stb r11,-5208(r30)
	PPC_STORE_U8(r30.u32 + -5208, r11.u8);
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// divd r11,r11,r10
	r11.s64 = r11.s64 / ctx.r10.s64;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// bne cr6,0x82760374
	if (!cr6.eq) goto loc_82760374;
	// li r11,1
	r11.s64 = 1;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
loc_82760374:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82605a40
	sub_82605A40(ctx, base);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// rldicr r9,r10,7,56
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 7) & 0xFFFFFFFFFFFFFF80;
	// divd r3,r9,r11
	ctx.r3.s64 = ctx.r9.s64 / r11.s64;
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

__attribute__((alias("__imp__sub_827603A0"))) PPC_WEAK_FUNC(sub_827603A0);
PPC_FUNC_IMPL(__imp__sub_827603A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827603A4"))) PPC_WEAK_FUNC(sub_827603A4);
PPC_FUNC_IMPL(__imp__sub_827603A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827603A8"))) PPC_WEAK_FUNC(sub_827603A8);
PPC_FUNC_IMPL(__imp__sub_827603A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// lfd f0,16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 16);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lfd f0,-26304(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -26304);
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827603C4"))) PPC_WEAK_FUNC(sub_827603C4);
PPC_FUNC_IMPL(__imp__sub_827603C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827603C8"))) PPC_WEAK_FUNC(sub_827603C8);
PPC_FUNC_IMPL(__imp__sub_827603C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827603DC"))) PPC_WEAK_FUNC(sub_827603DC);
PPC_FUNC_IMPL(__imp__sub_827603DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827603E0"))) PPC_WEAK_FUNC(sub_827603E0);
PPC_FUNC_IMPL(__imp__sub_827603E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827603fc
	if (cr6.eq) goto loc_827603FC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_827603FC:
	// li r3,4097
	ctx.r3.s64 = 4097;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82760404"))) PPC_WEAK_FUNC(sub_82760404);
PPC_FUNC_IMPL(__imp__sub_82760404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82760408"))) PPC_WEAK_FUNC(sub_82760408);
PPC_FUNC_IMPL(__imp__sub_82760408) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82760440
	if (cr6.eq) goto loc_82760440;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82760444
	if (!cr6.eq) goto loc_82760444;
loc_82760440:
	// li r11,0
	r11.s64 = 0;
loc_82760444:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82760458"))) PPC_WEAK_FUNC(sub_82760458);
PPC_FUNC_IMPL(__imp__sub_82760458) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r30,1
	r30.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-26124
	ctx.r9.s64 = r11.s64 + -26124;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,27508(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27508);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827604c0
	if (cr6.eq) goto loc_827604C0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r10,r11,-26212
	ctx.r10.s64 = r11.s64 + -26212;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x827604c4
	goto loc_827604C4;
loc_827604C0:
	// li r30,0
	r30.s64 = 0;
loc_827604C4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827604d4
	if (cr6.eq) goto loc_827604D4;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827604D4:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
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

__attribute__((alias("__imp__sub_827604F4"))) PPC_WEAK_FUNC(sub_827604F4);
PPC_FUNC_IMPL(__imp__sub_827604F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827604F8"))) PPC_WEAK_FUNC(sub_827604F8);
PPC_FUNC_IMPL(__imp__sub_827604F8) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82799300
	sub_82799300(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82760530
	if (cr6.eq) goto loc_82760530;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_82760530:
	// rotlwi r3,r30,0
	ctx.r3.u64 = __builtin_rotateleft32(r30.u32, 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x827605b8
	if (cr6.eq) goto loc_827605B8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827605b8
	if (cr6.eq) goto loc_827605B8;
	// rlwinm r11,r29,0,26,26
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827605ac
	if (cr6.eq) goto loc_827605AC;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r3,27508(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 27508);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82760594
	if (cr6.eq) goto loc_82760594;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x827987f8
	sub_827987F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82760598
	goto loc_82760598;
loc_82760594:
	// li r30,0
	r30.s64 = 0;
loc_82760598:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827605a8
	if (cr6.eq) goto loc_827605A8;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827605A8:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_827605AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_827605B8:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,27508(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 27508);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827605f0
	if (cr6.eq) goto loc_827605F0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-26212
	ctx.r9.s64 = r11.s64 + -26212;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x827605f4
	goto loc_827605F4;
loc_827605F0:
	// li r30,0
	r30.s64 = 0;
loc_827605F4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82760604
	if (cr6.eq) goto loc_82760604;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_82760604:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82760614"))) PPC_WEAK_FUNC(sub_82760614);
PPC_FUNC_IMPL(__imp__sub_82760614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82760618"))) PPC_WEAK_FUNC(sub_82760618);
PPC_FUNC_IMPL(__imp__sub_82760618) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827606b8
	if (cr6.eq) goto loc_827606B8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,27508(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27508);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82760698
	if (cr6.eq) goto loc_82760698;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-26212
	ctx.r9.s64 = r11.s64 + -26212;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x8276069c
	goto loc_8276069C;
loc_82760698:
	// li r30,0
	r30.s64 = 0;
loc_8276069C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827606ac
	if (cr6.eq) goto loc_827606AC;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827606AC:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827606bc
	goto loc_827606BC;
loc_827606B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827606BC:
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

__attribute__((alias("__imp__sub_827606D4"))) PPC_WEAK_FUNC(sub_827606D4);
PPC_FUNC_IMPL(__imp__sub_827606D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827606D8"))) PPC_WEAK_FUNC(sub_827606D8);
PPC_FUNC_IMPL(__imp__sub_827606D8) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-26124
	ctx.r8.s64 = r11.s64 + -26124;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// bl 0x827604f8
	sub_827604F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82760724"))) PPC_WEAK_FUNC(sub_82760724);
PPC_FUNC_IMPL(__imp__sub_82760724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82760728"))) PPC_WEAK_FUNC(sub_82760728);
PPC_FUNC_IMPL(__imp__sub_82760728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8276073C"))) PPC_WEAK_FUNC(sub_8276073C);
PPC_FUNC_IMPL(__imp__sub_8276073C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82760740"))) PPC_WEAK_FUNC(sub_82760740);
PPC_FUNC_IMPL(__imp__sub_82760740) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82760778
	if (cr6.eq) goto loc_82760778;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8276077c
	if (!cr6.eq) goto loc_8276077C;
loc_82760778:
	// li r11,0
	r11.s64 = 0;
loc_8276077C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8276078C"))) PPC_WEAK_FUNC(sub_8276078C);
PPC_FUNC_IMPL(__imp__sub_8276078C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82760790"))) PPC_WEAK_FUNC(sub_82760790);
PPC_FUNC_IMPL(__imp__sub_82760790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827607A4"))) PPC_WEAK_FUNC(sub_827607A4);
PPC_FUNC_IMPL(__imp__sub_827607A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827607A8"))) PPC_WEAK_FUNC(sub_827607A8);
PPC_FUNC_IMPL(__imp__sub_827607A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827607BC"))) PPC_WEAK_FUNC(sub_827607BC);
PPC_FUNC_IMPL(__imp__sub_827607BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827607C0"))) PPC_WEAK_FUNC(sub_827607C0);
PPC_FUNC_IMPL(__imp__sub_827607C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827607D4"))) PPC_WEAK_FUNC(sub_827607D4);
PPC_FUNC_IMPL(__imp__sub_827607D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827607D8"))) PPC_WEAK_FUNC(sub_827607D8);
PPC_FUNC_IMPL(__imp__sub_827607D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827607EC"))) PPC_WEAK_FUNC(sub_827607EC);
PPC_FUNC_IMPL(__imp__sub_827607EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827607F0"))) PPC_WEAK_FUNC(sub_827607F0);
PPC_FUNC_IMPL(__imp__sub_827607F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82760804"))) PPC_WEAK_FUNC(sub_82760804);
PPC_FUNC_IMPL(__imp__sub_82760804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82760808"))) PPC_WEAK_FUNC(sub_82760808);
PPC_FUNC_IMPL(__imp__sub_82760808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8276081C"))) PPC_WEAK_FUNC(sub_8276081C);
PPC_FUNC_IMPL(__imp__sub_8276081C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82760820"))) PPC_WEAK_FUNC(sub_82760820);
PPC_FUNC_IMPL(__imp__sub_82760820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82760834"))) PPC_WEAK_FUNC(sub_82760834);
PPC_FUNC_IMPL(__imp__sub_82760834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82760838"))) PPC_WEAK_FUNC(sub_82760838);
PPC_FUNC_IMPL(__imp__sub_82760838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8276084C"))) PPC_WEAK_FUNC(sub_8276084C);
PPC_FUNC_IMPL(__imp__sub_8276084C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82760850"))) PPC_WEAK_FUNC(sub_82760850);
PPC_FUNC_IMPL(__imp__sub_82760850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82760864"))) PPC_WEAK_FUNC(sub_82760864);
PPC_FUNC_IMPL(__imp__sub_82760864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82760868"))) PPC_WEAK_FUNC(sub_82760868);
PPC_FUNC_IMPL(__imp__sub_82760868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8276087C"))) PPC_WEAK_FUNC(sub_8276087C);
PPC_FUNC_IMPL(__imp__sub_8276087C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82760880"))) PPC_WEAK_FUNC(sub_82760880);
PPC_FUNC_IMPL(__imp__sub_82760880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82760894"))) PPC_WEAK_FUNC(sub_82760894);
PPC_FUNC_IMPL(__imp__sub_82760894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82760898"))) PPC_WEAK_FUNC(sub_82760898);
PPC_FUNC_IMPL(__imp__sub_82760898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827608AC"))) PPC_WEAK_FUNC(sub_827608AC);
PPC_FUNC_IMPL(__imp__sub_827608AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827608B0"))) PPC_WEAK_FUNC(sub_827608B0);
PPC_FUNC_IMPL(__imp__sub_827608B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827608C4"))) PPC_WEAK_FUNC(sub_827608C4);
PPC_FUNC_IMPL(__imp__sub_827608C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827608C8"))) PPC_WEAK_FUNC(sub_827608C8);
PPC_FUNC_IMPL(__imp__sub_827608C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827608DC"))) PPC_WEAK_FUNC(sub_827608DC);
PPC_FUNC_IMPL(__imp__sub_827608DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827608E0"))) PPC_WEAK_FUNC(sub_827608E0);
PPC_FUNC_IMPL(__imp__sub_827608E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827608F4"))) PPC_WEAK_FUNC(sub_827608F4);
PPC_FUNC_IMPL(__imp__sub_827608F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827608F8"))) PPC_WEAK_FUNC(sub_827608F8);
PPC_FUNC_IMPL(__imp__sub_827608F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,4097
	ctx.r3.s64 = 4097;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82760900"))) PPC_WEAK_FUNC(sub_82760900);
PPC_FUNC_IMPL(__imp__sub_82760900) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-26212
	ctx.r10.s64 = r11.s64 + -26212;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8274edf8
	sub_8274EDF8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82760944
	if (cr6.eq) goto loc_82760944;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82760944:
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

__attribute__((alias("__imp__sub_82760958"))) PPC_WEAK_FUNC(sub_82760958);
PPC_FUNC_IMPL(__imp__sub_82760958) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8276095C"))) PPC_WEAK_FUNC(sub_8276095C);
PPC_FUNC_IMPL(__imp__sub_8276095C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82760960"))) PPC_WEAK_FUNC(sub_82760960);
PPC_FUNC_IMPL(__imp__sub_82760960) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8276098c
	if (cr6.eq) goto loc_8276098C;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8276098C:
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
	// beq cr6,0x827609ac
	if (cr6.eq) goto loc_827609AC;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_827609AC:
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

__attribute__((alias("__imp__sub_827609C0"))) PPC_WEAK_FUNC(sub_827609C0);
PPC_FUNC_IMPL(__imp__sub_827609C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827609C4"))) PPC_WEAK_FUNC(sub_827609C4);
PPC_FUNC_IMPL(__imp__sub_827609C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827609C8"))) PPC_WEAK_FUNC(sub_827609C8);
PPC_FUNC_IMPL(__imp__sub_827609C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x827609f4
	if (cr6.lt) goto loc_827609F4;
	// beq cr6,0x827609f0
	if (cr6.eq) goto loc_827609F0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x82760a00
	if (!cr6.lt) goto loc_82760A00;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
loc_827609F0:
	// b 0x8274e3a0
	sub_8274E3A0(ctx, base);
	return;
loc_827609F4:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r3,27508(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 27508);
	// blr 
	return;
loc_82760A00:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82760A08"))) PPC_WEAK_FUNC(sub_82760A08);
PPC_FUNC_IMPL(__imp__sub_82760A08) {
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
	// rlwinm r31,r11,0,0,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// clrlwi r30,r10,1
	r30.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82760a40
	if (cr6.eq) goto loc_82760A40;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82760a60
	goto loc_82760A60;
loc_82760A40:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82795988
	sub_82795988(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// bne cr6,0x82760a60
	if (!cr6.eq) goto loc_82760A60;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// oris r10,r11,32768
	ctx.r10.u64 = r11.u64 | 2147483648;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82760A60:
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

__attribute__((alias("__imp__sub_82760A74"))) PPC_WEAK_FUNC(sub_82760A74);
PPC_FUNC_IMPL(__imp__sub_82760A74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82760A78"))) PPC_WEAK_FUNC(sub_82760A78);
PPC_FUNC_IMPL(__imp__sub_82760A78) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82760ad0
	if (cr6.eq) goto loc_82760AD0;
	// add r11,r10,r4
	r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82794ee8
	sub_82794EE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82760AD0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82794ee8
	sub_82794EE8(ctx, base);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82760b00
	if (cr6.eq) goto loc_82760B00;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x82760ad0
	if (!cr6.lt) goto loc_82760AD0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82760B00:
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

__attribute__((alias("__imp__sub_82760B14"))) PPC_WEAK_FUNC(sub_82760B14);
PPC_FUNC_IMPL(__imp__sub_82760B14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82760B18"))) PPC_WEAK_FUNC(sub_82760B18);
PPC_FUNC_IMPL(__imp__sub_82760B18) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82760B44:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82794ee8
	sub_82794EE8(ctx, base);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82760b80
	if (cr6.eq) goto loc_82760B80;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x82760b44
	if (!cr6.lt) goto loc_82760B44;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
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
loc_82760B80:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_82760B84"))) PPC_WEAK_FUNC(sub_82760B84);
PPC_FUNC_IMPL(__imp__sub_82760B84) {
	PPC_FUNC_PROLOGUE();
	// b 0x82760b68
	// ERROR 82760B68
	return;
}

__attribute__((alias("__imp__sub_82760B88"))) PPC_WEAK_FUNC(sub_82760B88);
PPC_FUNC_IMPL(__imp__sub_82760B88) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82794ee8
	sub_82794EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82760B90"))) PPC_WEAK_FUNC(sub_82760B90);
PPC_FUNC_IMPL(__imp__sub_82760B90) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82760B90"))) PPC_WEAK_FUNC(sub_82760B90);
PPC_FUNC_IMPL(__imp__sub_82760B90) {
	PPC_FUNC_PROLOGUE();
	// b 0x82799450
	sub_82799450(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82760B94"))) PPC_WEAK_FUNC(sub_82760B94);
PPC_FUNC_IMPL(__imp__sub_82760B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82760B98"))) PPC_WEAK_FUNC(sub_82760B98);
PPC_FUNC_IMPL(__imp__sub_82760B98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82760c5c
	if (cr6.eq) goto loc_82760C5C;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_82760BA8:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82760bc4
	if (cr6.lt) goto loc_82760BC4;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// addi r10,r11,32
	ctx.r10.s64 = r11.s64 + 32;
	// ble cr6,0x82760bc8
	if (!cr6.gt) goto loc_82760BC8;
loc_82760BC4:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82760BC8:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82760be8
	if (cr6.lt) goto loc_82760BE8;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x82760be8
	if (cr6.gt) goto loc_82760BE8;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
loc_82760BE8:
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// beq 0x82760c10
	if (cr0.eq) goto loc_82760C10;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82760c10
	if (cr6.eq) goto loc_82760C10;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82760c54
	if (!cr6.eq) goto loc_82760C54;
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82760ba8
	if (!cr6.eq) goto loc_82760BA8;
loc_82760C10:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82760c54
	if (!cr6.eq) goto loc_82760C54;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82760c2c
	if (!cr6.eq) goto loc_82760C2C;
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82760c54
	if (cr6.eq) goto loc_82760C54;
loc_82760C2C:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82760C30:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82760c30
	if (!cr6.eq) goto loc_82760C30;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r3,r10,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r10.s64;
	// blr 
	return;
loc_82760C54:
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - r11.s64;
	// blr 
	return;
loc_82760C5C:
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_82760C60:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82760c60
	if (!cr6.eq) goto loc_82760C60;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// neg r3,r10
	ctx.r3.s64 = -ctx.r10.s64;
}

__attribute__((alias("__imp__sub_82760C80"))) PPC_WEAK_FUNC(sub_82760C80);
PPC_FUNC_IMPL(__imp__sub_82760C80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82760C84"))) PPC_WEAK_FUNC(sub_82760C84);
PPC_FUNC_IMPL(__imp__sub_82760C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82760C88"))) PPC_WEAK_FUNC(sub_82760C88);
PPC_FUNC_IMPL(__imp__sub_82760C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82760cac
	if (cr6.eq) goto loc_82760CAC;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
loc_82760C94:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// rlwinm r11,r5,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// lbzx r10,r3,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// xor r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 ^ r11.u64;
	// bdnz 0x82760c94
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82760C94;
loc_82760CAC:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
}

__attribute__((alias("__imp__sub_82760CB0"))) PPC_WEAK_FUNC(sub_82760CB0);
PPC_FUNC_IMPL(__imp__sub_82760CB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82760CB4"))) PPC_WEAK_FUNC(sub_82760CB4);
PPC_FUNC_IMPL(__imp__sub_82760CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82760CB8"))) PPC_WEAK_FUNC(sub_82760CB8);
PPC_FUNC_IMPL(__imp__sub_82760CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82760cf0
	if (cr6.eq) goto loc_82760CF0;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
loc_82760CC4:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// lbzx r11,r3,r4
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82760ce0
	if (cr6.lt) goto loc_82760CE0;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x82760ce0
	if (cr6.gt) goto loc_82760CE0;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
loc_82760CE0:
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// xor r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 ^ r11.u64;
	// bdnz 0x82760cc4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82760CC4;
loc_82760CF0:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
}

__attribute__((alias("__imp__sub_82760CF4"))) PPC_WEAK_FUNC(sub_82760CF4);
PPC_FUNC_IMPL(__imp__sub_82760CF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82760CF8"))) PPC_WEAK_FUNC(sub_82760CF8);
PPC_FUNC_IMPL(__imp__sub_82760CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// li r10,512
	ctx.r10.s64 = 512;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r11.u8);
}

__attribute__((alias("__imp__sub_82760D18"))) PPC_WEAK_FUNC(sub_82760D18);
PPC_FUNC_IMPL(__imp__sub_82760D18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82760D1C"))) PPC_WEAK_FUNC(sub_82760D1C);
PPC_FUNC_IMPL(__imp__sub_82760D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82760D20"))) PPC_WEAK_FUNC(sub_82760D20);
PPC_FUNC_IMPL(__imp__sub_82760D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
}

__attribute__((alias("__imp__sub_82760D2C"))) PPC_WEAK_FUNC(sub_82760D2C);
PPC_FUNC_IMPL(__imp__sub_82760D2C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8274e1f8
	sub_8274E1F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82760D30"))) PPC_WEAK_FUNC(sub_82760D30);
PPC_FUNC_IMPL(__imp__sub_82760D30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82760D34"))) PPC_WEAK_FUNC(sub_82760D34);
PPC_FUNC_IMPL(__imp__sub_82760D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82760D38"))) PPC_WEAK_FUNC(sub_82760D38);
PPC_FUNC_IMPL(__imp__sub_82760D38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// bgt cr6,0x82760d4c
	if (cr6.gt) goto loc_82760D4C;
	// li r11,16
	r11.s64 = 16;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// blr 
	return;
loc_82760D4C:
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(r11.u32, 32768, xer);
	// bge cr6,0x82760e30
	if (!cr6.lt) goto loc_82760E30;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x82760dc8
	if (!cr6.lt) goto loc_82760DC8;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bge cr6,0x82760d98
	if (!cr6.lt) goto loc_82760D98;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bge cr6,0x82760d84
	if (!cr6.lt) goto loc_82760D84;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfze r11,r9
	temp.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u64 < xer.ca;
	r11.u64 = temp.u64;
	// b 0x82760f34
	goto loc_82760F34;
loc_82760D84:
	// li r9,4
	ctx.r9.s64 = 4;
	// subfc r8,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = r11.s64 - ctx.r9.s64;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// b 0x82760f34
	goto loc_82760F34;
loc_82760D98:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// bge cr6,0x82760db4
	if (!cr6.lt) goto loc_82760DB4;
	// li r9,16
	ctx.r9.s64 = 16;
	// subfc r8,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = r11.s64 - ctx.r9.s64;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// b 0x82760f34
	goto loc_82760F34;
loc_82760DB4:
	// li r9,64
	ctx.r9.s64 = 64;
	// subfc r8,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = r11.s64 - ctx.r9.s64;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// b 0x82760f34
	goto loc_82760F34;
loc_82760DC8:
	// cmplwi cr6,r11,2048
	cr6.compare<uint32_t>(r11.u32, 2048, xer);
	// bge cr6,0x82760e00
	if (!cr6.lt) goto loc_82760E00;
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(r11.u32, 512, xer);
	// bge cr6,0x82760dec
	if (!cr6.lt) goto loc_82760DEC;
	// li r9,256
	ctx.r9.s64 = 256;
	// subfc r8,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = r11.s64 - ctx.r9.s64;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,9
	r11.s64 = r11.s64 + 9;
	// b 0x82760f34
	goto loc_82760F34;
loc_82760DEC:
	// li r9,1024
	ctx.r9.s64 = 1024;
	// subfc r8,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = r11.s64 - ctx.r9.s64;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,11
	r11.s64 = r11.s64 + 11;
	// b 0x82760f34
	goto loc_82760F34;
loc_82760E00:
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(r11.u32, 8192, xer);
	// bge cr6,0x82760e1c
	if (!cr6.lt) goto loc_82760E1C;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// subfc r8,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = r11.s64 - ctx.r9.s64;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,13
	r11.s64 = r11.s64 + 13;
	// b 0x82760f34
	goto loc_82760F34;
loc_82760E1C:
	// li r9,16384
	ctx.r9.s64 = 16384;
	// subfc r8,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = r11.s64 - ctx.r9.s64;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,15
	r11.s64 = r11.s64 + 15;
	// b 0x82760f34
	goto loc_82760F34;
loc_82760E30:
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82760eb0
	if (!cr6.lt) goto loc_82760EB0;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82760e7c
	if (!cr6.lt) goto loc_82760E7C;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82760e68
	if (!cr6.lt) goto loc_82760E68;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// subfc r8,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = r11.s64 - ctx.r9.s64;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,17
	r11.s64 = r11.s64 + 17;
	// b 0x82760f34
	goto loc_82760F34;
loc_82760E68:
	// lis r9,4
	ctx.r9.s64 = 262144;
	// subfc r8,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = r11.s64 - ctx.r9.s64;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,19
	r11.s64 = r11.s64 + 19;
	// b 0x82760f34
	goto loc_82760F34;
loc_82760E7C:
	// lis r9,32
	ctx.r9.s64 = 2097152;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82760e9c
	if (!cr6.lt) goto loc_82760E9C;
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// subfc r8,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = r11.s64 - ctx.r9.s64;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,21
	r11.s64 = r11.s64 + 21;
	// b 0x82760f34
	goto loc_82760F34;
loc_82760E9C:
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// subfc r8,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = r11.s64 - ctx.r9.s64;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,23
	r11.s64 = r11.s64 + 23;
	// b 0x82760f34
	goto loc_82760F34;
loc_82760EB0:
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82760ef0
	if (!cr6.lt) goto loc_82760EF0;
	// lis r9,512
	ctx.r9.s64 = 33554432;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82760edc
	if (!cr6.lt) goto loc_82760EDC;
	// lis r9,256
	ctx.r9.s64 = 16777216;
	// subfc r8,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = r11.s64 - ctx.r9.s64;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,25
	r11.s64 = r11.s64 + 25;
	// b 0x82760f34
	goto loc_82760F34;
loc_82760EDC:
	// lis r9,1024
	ctx.r9.s64 = 67108864;
	// subfc r8,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = r11.s64 - ctx.r9.s64;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,27
	r11.s64 = r11.s64 + 27;
	// b 0x82760f34
	goto loc_82760F34;
loc_82760EF0:
	// lis r9,8192
	ctx.r9.s64 = 536870912;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82760f10
	if (!cr6.lt) goto loc_82760F10;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// subfc r8,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = r11.s64 - ctx.r9.s64;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,29
	r11.s64 = r11.s64 + 29;
	// b 0x82760f34
	goto loc_82760F34;
loc_82760F10:
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82760f24
	if (!cr6.lt) goto loc_82760F24;
	// li r11,30
	r11.s64 = 30;
	// b 0x82760f34
	goto loc_82760F34;
loc_82760F24:
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subfc r8,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = r11.s64 - ctx.r9.s64;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
loc_82760F34:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82760f48
	if (!cr6.eq) goto loc_82760F48;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_82760F48:
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
}

__attribute__((alias("__imp__sub_82760F4C"))) PPC_WEAK_FUNC(sub_82760F4C);
PPC_FUNC_IMPL(__imp__sub_82760F4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82760F50"))) PPC_WEAK_FUNC(sub_82760F50);
PPC_FUNC_IMPL(__imp__sub_82760F50) {
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
	// lbz r11,16(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82760f88
	if (cr6.eq) goto loc_82760F88;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82760F88:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82795988
	sub_82795988(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82760fa8
	if (!cr6.eq) goto loc_82760FA8;
	// li r11,1
	r11.s64 = 1;
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
loc_82760FA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82760FB8"))) PPC_WEAK_FUNC(sub_82760FB8);
PPC_FUNC_IMPL(__imp__sub_82760FB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82760FBC"))) PPC_WEAK_FUNC(sub_82760FBC);
PPC_FUNC_IMPL(__imp__sub_82760FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82760FC0"))) PPC_WEAK_FUNC(sub_82760FC0);
PPC_FUNC_IMPL(__imp__sub_82760FC0) {
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
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x82761018
	if (cr6.lt) goto loc_82761018;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// andc r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// stw r4,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r4.u32);
	// bne cr6,0x82761010
	if (!cr6.eq) goto loc_82761010;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// b 0x82761014
	goto loc_82761014;
loc_82761010:
	// bl 0x8274e160
	sub_8274E160(ctx, base);
loc_82761014:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82761018:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82761028"))) PPC_WEAK_FUNC(sub_82761028);
PPC_FUNC_IMPL(__imp__sub_82761028) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8276102C"))) PPC_WEAK_FUNC(sub_8276102C);
PPC_FUNC_IMPL(__imp__sub_8276102C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82761030"))) PPC_WEAK_FUNC(sub_82761030);
PPC_FUNC_IMPL(__imp__sub_82761030) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x82761090
	if (cr6.lt) goto loc_82761090;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// andc r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// stw r4,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r4.u32);
	// bne cr6,0x82761088
	if (!cr6.eq) goto loc_82761088;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// b 0x8276108c
	goto loc_8276108C;
loc_82761088:
	// bl 0x8274e160
	sub_8274E160(ctx, base);
loc_8276108C:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82761090:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827610ac
	if (cr6.eq) goto loc_827610AC;
	// stbx r10,r11,r30
	PPC_STORE_U8(r11.u32 + r30.u32, ctx.r10.u8);
loc_827610AC:
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

__attribute__((alias("__imp__sub_827610C0"))) PPC_WEAK_FUNC(sub_827610C0);
PPC_FUNC_IMPL(__imp__sub_827610C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827610C4"))) PPC_WEAK_FUNC(sub_827610C4);
PPC_FUNC_IMPL(__imp__sub_827610C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827610C8"))) PPC_WEAK_FUNC(sub_827610C8);
PPC_FUNC_IMPL(__imp__sub_827610C8) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
}

__attribute__((alias("__imp__sub_827610CC"))) PPC_WEAK_FUNC(sub_827610CC);
PPC_FUNC_IMPL(__imp__sub_827610CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x82761030
	sub_82761030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827610D0"))) PPC_WEAK_FUNC(sub_827610D0);
PPC_FUNC_IMPL(__imp__sub_827610D0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x82795280
	sub_82795280(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r4,r11,r31
	ctx.r4.u64 = r11.u64 + r31.u64;
	// bl 0x82761030
	sub_82761030(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
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

__attribute__((alias("__imp__sub_82761150"))) PPC_WEAK_FUNC(sub_82761150);
PPC_FUNC_IMPL(__imp__sub_82761150) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82761154"))) PPC_WEAK_FUNC(sub_82761154);
PPC_FUNC_IMPL(__imp__sub_82761154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82761158"))) PPC_WEAK_FUNC(sub_82761158);
PPC_FUNC_IMPL(__imp__sub_82761158) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827611ac
	if (cr6.eq) goto loc_827611AC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827954f0
	sub_827954F0(ctx, base);
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r29,r11
	ctx.r4.u64 = r29.u64 + r11.u64;
	// bl 0x82761030
	sub_82761030(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// bl 0x82795668
	sub_82795668(ctx, base);
loc_827611AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827611B0"))) PPC_WEAK_FUNC(sub_827611B0);
PPC_FUNC_IMPL(__imp__sub_827611B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827611B4"))) PPC_WEAK_FUNC(sub_827611B4);
PPC_FUNC_IMPL(__imp__sub_827611B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827611B8"))) PPC_WEAK_FUNC(sub_827611B8);
PPC_FUNC_IMPL(__imp__sub_827611B8) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8276122c
	if (cr6.eq) goto loc_8276122C;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x8276122c
	if (cr6.eq) goto loc_8276122C;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bne cr6,0x82761208
	if (!cr6.eq) goto loc_82761208;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_827611EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827611ec
	if (!cr6.eq) goto loc_827611EC;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r31,r11,0
	r31.u64 = __builtin_rotateleft32(r11.u32, 0);
loc_82761208:
	// lwz r30,4(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r4,r30,r31
	ctx.r4.u64 = r30.u64 + r31.u64;
	// bl 0x82761030
	sub_82761030(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_8276122C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82761230"))) PPC_WEAK_FUNC(sub_82761230);
PPC_FUNC_IMPL(__imp__sub_82761230) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82761234"))) PPC_WEAK_FUNC(sub_82761234);
PPC_FUNC_IMPL(__imp__sub_82761234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82761238"))) PPC_WEAK_FUNC(sub_82761238);
PPC_FUNC_IMPL(__imp__sub_82761238) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8276125c
	if (!cr6.eq) goto loc_8276125C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r31,r11,13435
	r31.s64 = r11.s64 + 13435;
loc_8276125C:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82761260:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82761260
	if (!cr6.eq) goto loc_82761260;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r29,r11,0
	r29.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82761030
	sub_82761030(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8276129C"))) PPC_WEAK_FUNC(sub_8276129C);
PPC_FUNC_IMPL(__imp__sub_8276129C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827612A0"))) PPC_WEAK_FUNC(sub_827612A0);
PPC_FUNC_IMPL(__imp__sub_827612A0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x827612cc
	if (!cr6.eq) goto loc_827612CC;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r31,r11,5388
	r31.s64 = r11.s64 + 5388;
loc_827612CC:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827954f0
	sub_827954F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82761030
	sub_82761030(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82795668
	sub_82795668(ctx, base);
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

__attribute__((alias("__imp__sub_82761308"))) PPC_WEAK_FUNC(sub_82761308);
PPC_FUNC_IMPL(__imp__sub_82761308) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8276130C"))) PPC_WEAK_FUNC(sub_8276130C);
PPC_FUNC_IMPL(__imp__sub_8276130C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82761310"))) PPC_WEAK_FUNC(sub_82761310);
PPC_FUNC_IMPL(__imp__sub_82761310) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r4,r9,1
	ctx.r4.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// bl 0x82761030
	sub_82761030(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r8,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r5,r7,1
	ctx.r5.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
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

__attribute__((alias("__imp__sub_82761370"))) PPC_WEAK_FUNC(sub_82761370);
PPC_FUNC_IMPL(__imp__sub_82761370) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82761374"))) PPC_WEAK_FUNC(sub_82761374);
PPC_FUNC_IMPL(__imp__sub_82761374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82761378"))) PPC_WEAK_FUNC(sub_82761378);
PPC_FUNC_IMPL(__imp__sub_82761378) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// lwz r26,4(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bge cr6,0x827613c0
	if (!cr6.lt) goto loc_827613C0;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_827613A0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827613a0
	if (!cr6.eq) goto loc_827613A0;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r28,r11,0
	r28.u64 = __builtin_rotateleft32(r11.u32, 0);
	// b 0x827613c4
	goto loc_827613C4;
loc_827613C0:
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
loc_827613C4:
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827613dc
	if (!cr6.eq) goto loc_827613DC;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82795ac8
	sub_82795AC8(ctx, base);
loc_827613DC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r30,r28,r26
	r30.u64 = r28.u64 + r26.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82761428
	if (cr6.lt) goto loc_82761428;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// andc r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// stw r4,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r4.u32);
	// bne cr6,0x82761420
	if (!cr6.eq) goto loc_82761420;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// b 0x82761424
	goto loc_82761424;
loc_82761420:
	// bl 0x8274e160
	sub_8274E160(ctx, base);
loc_82761424:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82761428:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r29,r26
	r11.s64 = r26.s64 - r29.s64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + r29.u64;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// add r3,r4,r28
	ctx.r3.u64 = ctx.r4.u64 + r28.u64;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
	// stbx r11,r30,r10
	PPC_STORE_U8(r30.u32 + ctx.r10.u32, r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8276146C"))) PPC_WEAK_FUNC(sub_8276146C);
PPC_FUNC_IMPL(__imp__sub_8276146C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82761470"))) PPC_WEAK_FUNC(sub_82761470);
PPC_FUNC_IMPL(__imp__sub_82761470) {
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
	// li r31,0
	r31.s64 = 0;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x82795280
	sub_82795280(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stbx r31,r6,r9
	PPC_STORE_U8(ctx.r6.u32 + ctx.r9.u32, r31.u8);
	// bl 0x82761378
	sub_82761378(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_827614D4"))) PPC_WEAK_FUNC(sub_827614D4);
PPC_FUNC_IMPL(__imp__sub_827614D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827614D8"))) PPC_WEAK_FUNC(sub_827614D8);
PPC_FUNC_IMPL(__imp__sub_827614D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-31962
	r11.s64 = -2094661632;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,636
	r11.s64 = r11.s64 + 636;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r6,r11,4
	ctx.r6.s64 = r11.s64 + 4;
loc_827614EC:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stwcx. r9,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x827614ec
	if (!cr0.eq) goto loc_827614EC;
}

__attribute__((alias("__imp__sub_82761508"))) PPC_WEAK_FUNC(sub_82761508);
PPC_FUNC_IMPL(__imp__sub_82761508) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8276150C"))) PPC_WEAK_FUNC(sub_8276150C);
PPC_FUNC_IMPL(__imp__sub_8276150C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82761510"))) PPC_WEAK_FUNC(sub_82761510);
PPC_FUNC_IMPL(__imp__sub_82761510) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82761568
	if (!cr6.eq) goto loc_82761568;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r3,r11,636
	ctx.r3.s64 = r11.s64 + 636;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
loc_82761548:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r10,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82761548
	if (!cr0.eq) goto loc_82761548;
	// b 0x82761590
	goto loc_82761590;
loc_82761568:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + r31.u64;
	// li r11,0
	r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// or r8,r31,r30
	ctx.r8.u64 = r31.u64 | r30.u64;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
loc_82761590:
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

__attribute__((alias("__imp__sub_827615A4"))) PPC_WEAK_FUNC(sub_827615A4);
PPC_FUNC_IMPL(__imp__sub_827615A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827615A8"))) PPC_WEAK_FUNC(sub_827615A8);
PPC_FUNC_IMPL(__imp__sub_827615A8) {
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
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// bl 0x82761510
	sub_82761510(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827615DC"))) PPC_WEAK_FUNC(sub_827615DC);
PPC_FUNC_IMPL(__imp__sub_827615DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827615E0"))) PPC_WEAK_FUNC(sub_827615E0);
PPC_FUNC_IMPL(__imp__sub_827615E0) {
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
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// bl 0x82761510
	sub_82761510(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// add r11,r31,r30
	r11.u64 = r31.u64 + r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82761630"))) PPC_WEAK_FUNC(sub_82761630);
PPC_FUNC_IMPL(__imp__sub_82761630) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82761634"))) PPC_WEAK_FUNC(sub_82761634);
PPC_FUNC_IMPL(__imp__sub_82761634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82761638"))) PPC_WEAK_FUNC(sub_82761638);
PPC_FUNC_IMPL(__imp__sub_82761638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r28,r11,0,0,29
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r8,24192(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// clrlwi r29,r7,1
	r29.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bl 0x82795280
	sub_82795280(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// clrlwi r11,r6,30
	r11.u64 = ctx.r6.u32 & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x827616b4
	if (cr6.lt) goto loc_827616B4;
	// beq cr6,0x827616a4
	if (cr6.eq) goto loc_827616A4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x827616bc
	if (!cr6.lt) goto loc_827616BC;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x827616bc
	goto loc_827616BC;
loc_827616A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e3a0
	sub_8274E3A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827616bc
	goto loc_827616BC;
loc_827616B4:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r4,27508(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 27508);
loc_827616BC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r5,r11,r29
	ctx.r5.u64 = r11.u64 + r29.u64;
	// mr r27,r11
	r27.u64 = r11.u64;
	// bl 0x82761510
	sub_82761510(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r28,8
	ctx.r4.s64 = r28.s64 + 8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,-1
	r11.s64 = -1;
	// clrlwi r5,r6,30
	ctx.r5.u64 = ctx.r6.u32 & 0x3;
	// addi r8,r28,4
	ctx.r8.s64 = r28.s64 + 4;
	// or r4,r30,r5
	ctx.r4.u64 = r30.u64 | ctx.r5.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
loc_82761714:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82761714
	if (!cr0.eq) goto loc_82761714;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r3,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r3.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82761744
	if (!cr0.eq) goto loc_82761744;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_82761744:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82761750"))) PPC_WEAK_FUNC(sub_82761750);
PPC_FUNC_IMPL(__imp__sub_82761750) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82761754"))) PPC_WEAK_FUNC(sub_82761754);
PPC_FUNC_IMPL(__imp__sub_82761754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82761758"))) PPC_WEAK_FUNC(sub_82761758);
PPC_FUNC_IMPL(__imp__sub_82761758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82761858
	if (cr6.eq) goto loc_82761858;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rlwinm r28,r11,0,0,29
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// clrlwi r29,r10,1
	r29.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// bl 0x827954f0
	sub_827954F0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// clrlwi r11,r9,30
	r11.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x827617d0
	if (cr6.lt) goto loc_827617D0;
	// beq cr6,0x827617c0
	if (cr6.eq) goto loc_827617C0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x827617d8
	if (!cr6.lt) goto loc_827617D8;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x827617d8
	goto loc_827617D8;
loc_827617C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e3a0
	sub_8274E3A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827617d8
	goto loc_827617D8;
loc_827617D0:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r4,27508(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 27508);
loc_827617D8:
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r30,r29
	ctx.r5.u64 = r30.u64 + r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82761510
	sub_82761510(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r28,8
	ctx.r4.s64 = r28.s64 + 8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82795668
	sub_82795668(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,-1
	r11.s64 = -1;
	// clrlwi r5,r6,30
	ctx.r5.u64 = ctx.r6.u32 & 0x3;
	// addi r8,r28,4
	ctx.r8.s64 = r28.s64 + 4;
	// or r4,r30,r5
	ctx.r4.u64 = r30.u64 | ctx.r5.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
loc_82761828:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82761828
	if (!cr0.eq) goto loc_82761828;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r3,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r3.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82761858
	if (!cr0.eq) goto loc_82761858;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_82761858:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

