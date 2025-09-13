#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8264DB90"))) PPC_WEAK_FUNC(sub_8264DB90);
PPC_FUNC_IMPL(__imp__sub_8264DB90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8264DB94"))) PPC_WEAK_FUNC(sub_8264DB94);
PPC_FUNC_IMPL(__imp__sub_8264DB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264DB98"))) PPC_WEAK_FUNC(sub_8264DB98);
PPC_FUNC_IMPL(__imp__sub_8264DB98) {
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
	// li r11,0
	r11.s64 = 0;
	// lwz r31,204(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82664d40
	sub_82664D40(ctx, base);
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x8264dc0c
	if (cr6.eq) goto loc_8264DC0C;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8264dc0c
	if (!cr6.eq) goto loc_8264DC0C;
	// lbz r11,200(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264dc0c
	if (cr6.eq) goto loc_8264DC0C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8264d300
	sub_8264D300(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8264DC0C:
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

__attribute__((alias("__imp__sub_8264DC20"))) PPC_WEAK_FUNC(sub_8264DC20);
PPC_FUNC_IMPL(__imp__sub_8264DC20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264DC24"))) PPC_WEAK_FUNC(sub_8264DC24);
PPC_FUNC_IMPL(__imp__sub_8264DC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264DC28"))) PPC_WEAK_FUNC(sub_8264DC28);
PPC_FUNC_IMPL(__imp__sub_8264DC28) {
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
	// lhz r11,524(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 524);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264dd50
	if (cr6.eq) goto loc_8264DD50;
	// li r27,0
	r27.s64 = 0;
loc_8264DC54:
	// lwz r11,520(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 520);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwzx r31,r27,r11
	r31.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x8264dd3c
	if (!cr6.eq) goto loc_8264DD3C;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x8264dc94
	if (!cr6.eq) goto loc_8264DC94;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8264DC94:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r31.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// bl 0x82628558
	sub_82628558(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x82664c90
	sub_82664C90(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lbz r9,37(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r8,r8,0,30,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// ori r7,r8,4
	ctx.r7.u64 = ctx.r8.u64 | 4;
	// stb r7,37(r11)
	PPC_STORE_U8(r11.u32 + 37, ctx.r7.u8);
	// lwz r29,32(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lhz r6,34(r29)
	ctx.r6.u64 = PPC_LOAD_U16(r29.u32 + 34);
	// cmplwi cr6,r6,65535
	cr6.compare<uint32_t>(ctx.r6.u32, 65535, xer);
	// bne cr6,0x8264dd3c
	if (!cr6.eq) goto loc_8264DD3C;
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// addi r31,r30,64
	r31.s64 = r30.s64 + 64;
	// sth r11,34(r29)
	PPC_STORE_U16(r29.u32 + 34, r11.u16);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// lwz r8,68(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// clrlwi r7,r9,2
	ctx.r7.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bne cr6,0x8264dd20
	if (!cr6.eq) goto loc_8264DD20;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8264DD20:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r29.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_8264DD3C:
	// lhz r11,524(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 524);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x8264dc54
	if (cr6.lt) goto loc_8264DC54;
loc_8264DD50:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8264DD54"))) PPC_WEAK_FUNC(sub_8264DD54);
PPC_FUNC_IMPL(__imp__sub_8264DD54) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8264DD58"))) PPC_WEAK_FUNC(sub_8264DD58);
PPC_FUNC_IMPL(__imp__sub_8264DD58) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r6)
	r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r28,0
	r28.s64 = 0;
	// addi r10,r11,127
	ctx.r10.s64 = r11.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// ble cr6,0x8264ddc0
	if (!cr6.gt) goto loc_8264DDC0;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mtctr r29
	ctr.u64 = r29.u64;
loc_8264DDB0:
	// stwx r28,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r28.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bdnz 0x8264ddb0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8264DDB0;
loc_8264DDC0:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r6,r31,773
	ctx.r6.s64 = r31.s64 + 773;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8264de64
	if (!cr6.gt) goto loc_8264DE64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
loc_8264DDDC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lbz r8,1(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// lwzx r9,r10,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lhz r10,236(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 236);
	// srawi r3,r10,14
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 14;
	// cmpw cr6,r8,r3
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, xer);
	// bne cr6,0x8264ddfc
	if (!cr6.eq) goto loc_8264DDFC;
	// srawi r10,r10,7
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 7;
loc_8264DDFC:
	// clrlwi r8,r10,25
	ctx.r8.u64 = ctx.r10.u32 & 0x7F;
	// lhz r10,234(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 234);
	// lbz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// srawi r3,r10,14
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 14;
	// cmpw cr6,r9,r3
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, xer);
	// bne cr6,0x8264de18
	if (!cr6.eq) goto loc_8264DE18;
	// srawi r10,r10,7
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 7;
loc_8264DE18:
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// clrlwi r10,r8,25
	ctx.r10.u64 = ctx.r8.u32 & 0x7F;
	// clrlwi r9,r9,25
	ctx.r9.u64 = ctx.r9.u32 & 0x7F;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// ble cr6,0x8264de30
	if (!cr6.gt) goto loc_8264DE30;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8264DE30:
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bgt cr6,0x8264de50
	if (cr6.gt) goto loc_8264DE50;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r8,r9,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + r11.u32, ctx.r5.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8264DE50:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// blt cr6,0x8264dddc
	if (cr6.lt) goto loc_8264DDDC;
loc_8264DE64:
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// stb r5,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r5.u8);
	// ble cr6,0x8264deb0
	if (!cr6.gt) goto loc_8264DEB0;
	// mr r11,r28
	r11.u64 = r28.u64;
	// mtctr r29
	ctr.u64 = r29.u64;
loc_8264DE80:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8264de98
	if (cr6.eq) goto loc_8264DE98;
	// stwx r28,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r28.u32);
	// b 0x8264dea8
	goto loc_8264DEA8;
loc_8264DE98:
	// stwx r5,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r5.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stbx r28,r9,r5
	PPC_STORE_U8(ctx.r9.u32 + ctx.r5.u32, r28.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_8264DEA8:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8264de80
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8264DE80;
loc_8264DEB0:
	// cmpw cr6,r5,r29
	cr6.compare<int32_t>(ctx.r5.s32, r29.s32, xer);
	// ble cr6,0x8264ded4
	if (!cr6.gt) goto loc_8264DED4;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stb r28,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r28.u8);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_8264DED4:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82bfb7a0
	sub_82BFB7A0(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8264DEF4"))) PPC_WEAK_FUNC(sub_8264DEF4);
PPC_FUNC_IMPL(__imp__sub_8264DEF4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8264DEF8"))) PPC_WEAK_FUNC(sub_8264DEF8);
PPC_FUNC_IMPL(__imp__sub_8264DEF8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,4(r6)
	r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r25,2,0,29
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r27,0(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,127
	r11.s64 = r11.s64 + 127;
	// rlwinm r31,r11,0,0,24
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// add r10,r31,r27
	ctx.r10.u64 = r31.u64 + r27.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r22,0
	r22.s64 = 0;
	// add r9,r31,r11
	ctx.r9.u64 = r31.u64 + r11.u64;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// ble cr6,0x8264df78
	if (!cr6.gt) goto loc_8264DF78;
	// mr r11,r22
	r11.u64 = r22.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
loc_8264DF64:
	// stwx r22,r11,r4
	PPC_STORE_U32(r11.u32 + ctx.r4.u32, r22.u32);
	// stwx r22,r11,r27
	PPC_STORE_U32(r11.u32 + r27.u32, r22.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bdnz 0x8264df64
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8264DF64;
loc_8264DF78:
	// lbz r11,213(r21)
	r11.u64 = PPC_LOAD_U8(r21.u32 + 213);
	// li r26,1
	r26.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// beq cr6,0x8264e04c
	if (cr6.eq) goto loc_8264E04C;
	// addi r3,r21,773
	ctx.r3.s64 = r21.s64 + 773;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8264e0ac
	if (!cr6.gt) goto loc_8264E0AC;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
loc_8264DFA0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r11,236(r7)
	r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 236);
	// lwzx r6,r6,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// srawi r10,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = r11.s32 >> 14;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x8264dfcc
	if (!cr6.eq) goto loc_8264DFCC;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
loc_8264DFCC:
	// clrlwi r9,r11,25
	ctx.r9.u64 = r11.u32 & 0x7F;
	// lhz r11,234(r7)
	r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 234);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// srawi r31,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	r31.s64 = r11.s32 >> 14;
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, r31.s32, xer);
	// bne cr6,0x8264dfe8
	if (!cr6.eq) goto loc_8264DFE8;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
loc_8264DFE8:
	// clrlwi r10,r11,25
	ctx.r10.u64 = r11.u32 & 0x7F;
	// clrlwi r11,r9,25
	r11.u64 = ctx.r9.u32 & 0x7F;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x8264e000
	if (!cr6.gt) goto loc_8264E000;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8264E000:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bgt cr6,0x8264e010
	if (cr6.gt) goto loc_8264E010;
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r11,r4
	PPC_STORE_U32(r11.u32 + ctx.r4.u32, r26.u32);
loc_8264E010:
	// lhz r9,176(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 176);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bge cr6,0x8264e020
	if (!cr6.lt) goto loc_8264E020;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_8264E020:
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r11,r27
	PPC_STORE_U32(r11.u32 + r27.u32, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r5,r9
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, xer);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// blt cr6,0x8264dfa0
	if (cr6.lt) goto loc_8264DFA0;
	// b 0x8264e0ac
	goto loc_8264E0AC;
loc_8264E04C:
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8264e0ac
	if (!cr6.gt) goto loc_8264E0AC;
	// mr r11,r22
	r11.u64 = r22.u64;
loc_8264E05C:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// lwzx r5,r8,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, r26.u32);
	// lhz r9,176(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 176);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bge cr6,0x8264e088
	if (!cr6.lt) goto loc_8264E088;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_8264E088:
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stwx r9,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r9.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// blt cr6,0x8264e05c
	if (cr6.lt) goto loc_8264E05C;
loc_8264E0AC:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// ble cr6,0x8264e0dc
	if (!cr6.gt) goto loc_8264E0DC;
	// mr r11,r22
	r11.u64 = r22.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_8264E0C0:
	// lwzx r9,r11,r4
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8264e0d4
	if (!cr6.eq) goto loc_8264E0D4;
	// stwx r10,r11,r27
	PPC_STORE_U32(r11.u32 + r27.u32, ctx.r10.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8264E0D4:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8264e0c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8264E0C0;
loc_8264E0DC:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// ble cr6,0x8264e194
	if (!cr6.gt) goto loc_8264E194;
	// mr r29,r26
	r29.u64 = r26.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// mr r30,r27
	r30.u64 = r27.u64;
	// li r31,-2
	r31.s64 = -2;
loc_8264E0FC:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r9,-2
	cr6.compare<int32_t>(ctx.r9.s32, -2, xer);
	// beq cr6,0x8264e184
	if (cr6.eq) goto loc_8264E184;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stbx r22,r11,r8
	PPC_STORE_U8(r11.u32 + ctx.r8.u32, r22.u8);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blt cr6,0x8264e184
	if (cr6.lt) goto loc_8264E184;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmpw cr6,r29,r25
	cr6.compare<int32_t>(r29.s32, r25.s32, xer);
	// bge cr6,0x8264e184
	if (!cr6.lt) goto loc_8264E184;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// subf r6,r27,r28
	ctx.r6.s64 = r28.s64 - r27.s64;
loc_8264E138:
	// lwz r7,180(r21)
	ctx.r7.u64 = PPC_LOAD_U32(r21.u32 + 180);
	// addi r10,r9,10
	ctx.r10.s64 = ctx.r9.s64 + 10;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// bge cr6,0x8264e184
	if (!cr6.lt) goto loc_8264E184;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x8264e174
	if (cr6.lt) goto loc_8264E174;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// bge cr6,0x8264e174
	if (!cr6.lt) goto loc_8264E174;
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stbx r26,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r26.u8);
	// stwx r8,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + r11.u32, ctx.r8.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
loc_8264E174:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r3,r25
	cr6.compare<int32_t>(ctx.r3.s32, r25.s32, xer);
	// blt cr6,0x8264e138
	if (cr6.lt) goto loc_8264E138;
loc_8264E184:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bdnz 0x8264e0fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8264E0FC;
loc_8264E194:
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82bfb7a0
	sub_82BFB7A0(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8264E1BC"))) PPC_WEAK_FUNC(sub_8264E1BC);
PPC_FUNC_IMPL(__imp__sub_8264E1BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_8264E1C0"))) PPC_WEAK_FUNC(sub_8264E1C0);
PPC_FUNC_IMPL(__imp__sub_8264E1C0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r10,76(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8264e208
	if (cr6.gt) goto loc_8264E208;
	// blt cr6,0x8264e1fc
	if (cr6.lt) goto loc_8264E1FC;
	// lhz r11,32(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 32);
	// lhz r10,32(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8264e208
	if (!cr6.gt) goto loc_8264E208;
loc_8264E1FC:
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
	// mr r31,r11
	r31.u64 = r11.u64;
loc_8264E208:
	// lwz r11,148(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 148);
	// li r25,0
	r25.s64 = 0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,148(r26)
	PPC_STORE_U32(r26.u32 + 148, r11.u32);
	// lbz r11,38(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 38);
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8264e23c
	if (!cr6.eq) goto loc_8264E23C;
	// lbz r9,38(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 38);
	// rlwinm r8,r9,0,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFC0;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8264e240
	if (cr6.eq) goto loc_8264E240;
loc_8264E23C:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8264E240:
	// rlwinm r8,r11,0,26,27
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8264e260
	if (!cr6.eq) goto loc_8264E260;
	// lbz r8,38(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 38);
	// mr r24,r25
	r24.u64 = r25.u64;
	// rlwinm r7,r8,0,26,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8264e264
	if (cr6.eq) goto loc_8264E264;
loc_8264E260:
	// li r24,1
	r24.s64 = 1;
loc_8264E264:
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8264e2c8
	if (cr6.eq) goto loc_8264E2C8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8264e290
	if (!cr6.eq) goto loc_8264E290;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwinm r11,r11,0,28,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// ori r9,r11,16
	ctx.r9.u64 = r11.u64 | 16;
	// stb r9,38(r30)
	PPC_STORE_U8(r30.u32 + 38, ctx.r9.u8);
	// b 0x8264e2b4
	goto loc_8264E2B4;
loc_8264E290:
	// lbz r11,38(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 38);
	// rlwinm r10,r11,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8264e2c8
	if (!cr6.eq) goto loc_8264E2C8;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rlwinm r11,r11,0,28,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// ori r9,r11,16
	ctx.r9.u64 = r11.u64 | 16;
	// stb r9,38(r31)
	PPC_STORE_U8(r31.u32 + 38, ctx.r9.u8);
loc_8264E2B4:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r25.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x8264e958
	sub_8264E958(ctx, base);
loc_8264E2C8:
	// lbz r11,37(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 37);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r10,37(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 37);
	// rlwinm r9,r11,0,26,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x30;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stb r8,37(r30)
	PPC_STORE_U8(r30.u32 + 37, ctx.r8.u8);
	// bl 0x82664c88
	sub_82664C88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82664c88
	sub_82664C88(ctx, base);
	// lwz r3,32(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 32);
	// bl 0x82664c88
	sub_82664C88(ctx, base);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r30,88
	ctx.r3.s64 = r30.s64 + 88;
	// bl 0x82c59fa8
	sub_82C59FA8(ctx, base);
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// addi r28,r30,72
	r28.s64 = r30.s64 + 72;
	// clrlwi r29,r11,16
	r29.u64 = r11.u32 & 0xFFFF;
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r7,80(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r7,2
	r11.u64 = ctx.r7.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// bge cr6,0x8264e34c
	if (!cr6.lt) goto loc_8264E34C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x8264e33c
	if (cr6.lt) goto loc_8264E33C;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_8264E33C:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8264E34C:
	// stw r27,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r27.u32);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8264e3b4
	if (!cr6.gt) goto loc_8264E3B4;
	// mr r11,r25
	r11.u64 = r25.u64;
	// rlwinm r9,r29,2,14,29
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x3FFFC;
loc_8264E368:
	// lwz r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// clrlwi r8,r29,16
	ctx.r8.u64 = r29.u32 & 0xFFFF;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// lwzx r4,r11,r7
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// stwx r4,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r4.u32);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// stw r30,204(r9)
	PPC_STORE_U32(ctx.r9.u32 + 204, r30.u32);
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// sth r29,168(r7)
	PPC_STORE_U16(ctx.r7.u32 + 168, r29.u16);
	// clrlwi r29,r5,16
	r29.u64 = ctx.r5.u32 & 0xFFFF;
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// rlwinm r9,r29,2,14,29
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x3FFFC;
	// blt cr6,0x8264e368
	if (cr6.lt) goto loc_8264E368;
loc_8264E3B4:
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// addi r29,r30,56
	r29.s64 = r30.s64 + 56;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// mr r27,r11
	r27.u64 = r11.u64;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bge cr6,0x8264e400
	if (!cr6.lt) goto loc_8264E400;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x8264e3f0
	if (cr6.lt) goto loc_8264E3F0;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8264E3F0:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8264E400:
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8264e460
	if (!cr6.gt) goto loc_8264E460;
	// rlwinm r11,r27,2,0,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_8264E41C:
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8264e44c
	if (cr6.eq) goto loc_8264E44C;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stwx r6,r11,r7
	PPC_STORE_U32(r11.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r4,r11,r5
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r5.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r30,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r30.u32);
loc_8264E44C:
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// blt cr6,0x8264e41c
	if (cr6.lt) goto loc_8264E41C;
loc_8264E460:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// bge cr6,0x8264e498
	if (!cr6.lt) goto loc_8264E498;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x8264e488
	if (cr6.lt) goto loc_8264E488;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_8264E488:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8264E498:
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8264e4f4
	if (!cr6.gt) goto loc_8264E4F4;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
loc_8264E4B0:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lhz r6,176(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 176);
	// lwz r9,172(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// addic. r11,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	r11.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x8264e4e0
	if (cr0.lt) goto loc_8264E4E0;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// addi r11,r9,-48
	r11.s64 = ctx.r9.s64 + -48;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8264E4D4:
	// lwzu r10,48(r11)
	ea = 48 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r30.u32);
	// bdnz 0x8264e4d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8264E4D4;
loc_8264E4E0:
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, r11.s32, xer);
	// blt cr6,0x8264e4b0
	if (cr6.lt) goto loc_8264E4B0;
loc_8264E4F4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82664cf0
	sub_82664CF0(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// addi r11,r26,40
	r11.s64 = r26.s64 + 40;
	// stw r25,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r25.u32);
	// lbz r10,38(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 38);
	// rlwinm r9,r10,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8264e530
	if (!cr6.eq) goto loc_8264E530;
	// addi r11,r26,52
	r11.s64 = r26.s64 + 52;
loc_8264E530:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bge cr6,0x8264e568
	if (!cr6.lt) goto loc_8264E568;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r6,-4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// stwx r6,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r6.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r4,r5,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// sth r10,32(r4)
	PPC_STORE_U16(ctx.r4.u32 + 32, ctx.r10.u16);
loc_8264E568:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lbz r11,37(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 37);
	// rlwinm r9,r11,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8264e598
	if (!cr6.eq) goto loc_8264E598;
	// lbz r10,37(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 37);
	// rlwinm r9,r10,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8264e59c
	if (cr6.eq) goto loc_8264E59C;
loc_8264E598:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8264E59C:
	// rlwimi r11,r10,6,18,25
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0x3FC0) | (r11.u64 & 0xFFFFFFFFFFFFC03F);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r11,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// stb r11,37(r30)
	PPC_STORE_U8(r30.u32 + 37, r11.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8264e5c8
	if (!cr6.eq) goto loc_8264E5C8;
	// lbz r11,37(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 37);
	// rlwinm r10,r11,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// mr r11,r25
	r11.u64 = r25.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8264e5cc
	if (cr6.eq) goto loc_8264E5CC;
loc_8264E5C8:
	// li r11,1
	r11.s64 = 1;
loc_8264E5CC:
	// lbz r8,37(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 37);
	// clrlwi r7,r11,24
	ctx.r7.u64 = r11.u32 & 0xFF;
	// extsb r10,r24
	ctx.r10.s64 = r24.s8;
	// lbz r9,38(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 38);
	// rlwimi r8,r7,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// addic r6,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// stb r8,37(r30)
	PPC_STORE_U8(r30.u32 + 37, ctx.r8.u8);
	// subfe r5,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwimi r9,r5,4,26,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 4) & 0x30) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFCF);
	// stb r9,38(r30)
	PPC_STORE_U8(r30.u32 + 38, ctx.r9.u8);
	// lhz r11,34(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// beq cr6,0x8264e65c
	if (cr6.eq) goto loc_8264E65C;
	// lhz r11,34(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 34);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// bne cr6,0x8264e65c
	if (!cr6.eq) goto loc_8264E65C;
	// lwz r11,68(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 68);
	// addi r29,r26,64
	r29.s64 = r26.s64 + 64;
	// sth r11,34(r30)
	PPC_STORE_U16(r30.u32 + 34, r11.u16);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r9,72(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 72);
	// lwz r8,68(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 68);
	// clrlwi r7,r9,2
	ctx.r7.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bne cr6,0x8264e640
	if (!cr6.eq) goto loc_8264E640;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8264E640:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
loc_8264E65C:
	// lhz r11,34(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// beq cr6,0x8264e67c
	if (cr6.eq) goto loc_8264E67C;
	// lwz r10,64(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 64);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stwx r25,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r25.u32);
	// sth r8,34(r31)
	PPC_STORE_U16(r31.u32 + 34, ctx.r8.u16);
loc_8264E67C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,38(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 38);
	// rlwinm r8,r9,0,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8264e6e4
	if (cr6.eq) goto loc_8264E6E4;
	// lhz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8264e6e4
	if (cr6.eq) goto loc_8264E6E4;
	// lwz r11,40(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 40);
	// lwz r9,76(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// ble cr6,0x8264e6e4
	if (!cr6.gt) goto loc_8264E6E4;
	// sth r25,32(r30)
	PPC_STORE_U16(r30.u32 + 32, r25.u16);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r10,32(r11)
	PPC_STORE_U16(r11.u32 + 32, ctx.r10.u16);
	// lwz r7,40(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 40);
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r30.u32);
	// lwz r6,40(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 40);
	// stwx r11,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, r11.u32);
loc_8264E6E4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8263e020
	sub_8263E020(ctx, base);
	// lwz r11,148(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r26)
	PPC_STORE_U32(r26.u32 + 148, r11.u32);
	// bne 0x8264e740
	if (!cr0.eq) goto loc_8264E740;
	// lbz r11,156(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264e740
	if (!cr6.eq) goto loc_8264E740;
	// lwz r11,140(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264e720
	if (cr6.eq) goto loc_8264E720;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8264E720:
	// lwz r11,164(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8264e740
	if (!cr6.eq) goto loc_8264E740;
	// lwz r11,144(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264e740
	if (cr6.eq) goto loc_8264E740;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8264E740:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8264E744"))) PPC_WEAK_FUNC(sub_8264E744);
PPC_FUNC_IMPL(__imp__sub_8264E744) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8264E748"))) PPC_WEAK_FUNC(sub_8264E748);
PPC_FUNC_IMPL(__imp__sub_8264E748) {
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
	// lhz r11,176(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 176);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r30,8(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r26,1
	r26.s64 = 1;
	// addic. r28,r11,-1
	xer.ca = r11.u32 > 0;
	r28.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// blt 0x8264e85c
	if (cr0.lt) goto loc_8264E85C;
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// rlwinm r27,r11,4,0,27
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
loc_8264E77C:
	// lwz r11,172(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 172);
	// lwzx r29,r27,r11
	r29.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lbz r9,37(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 37);
	// rlwimi r9,r26,6,0,25
	ctx.r9.u64 = (__builtin_rotateleft32(r26.u32, 6) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// stb r9,37(r10)
	PPC_STORE_U8(ctx.r10.u32 + 37, ctx.r9.u8);
	// lwz r8,148(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8264e7b4
	if (cr6.eq) goto loc_8264E7B4;
	// bl 0x8264c400
	sub_8264C400(ctx, base);
	// b 0x8264e80c
	goto loc_8264E80C;
loc_8264E7B4:
	// stw r26,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r26.u32);
	// bl 0x8264c400
	sub_8264C400(ctx, base);
	// lwz r11,148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r11.u32);
	// bne 0x8264e80c
	if (!cr0.eq) goto loc_8264E80C;
	// lbz r11,156(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264e80c
	if (!cr6.eq) goto loc_8264E80C;
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264e7ec
	if (cr6.eq) goto loc_8264E7EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8264E7EC:
	// lwz r11,164(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8264e80c
	if (!cr6.eq) goto loc_8264E80C;
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264e80c
	if (cr6.eq) goto loc_8264E80C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8264E80C:
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
	// bne cr6,0x8264e834
	if (!cr6.eq) goto loc_8264E834;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8264E834:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r27,r27,-48
	r27.s64 = r27.s64 + -48;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r29.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// bge 0x8264e77c
	if (!cr0.lt) goto loc_8264E77C;
loc_8264E85C:
	// lwz r11,184(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 184);
	// addic. r27,r11,-1
	xer.ca = r11.u32 > 0;
	r27.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// blt 0x8264e94c
	if (cr0.lt) goto loc_8264E94C;
	// rlwinm r28,r27,2,0,29
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_8264E86C:
	// lwz r11,180(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 180);
	// lwzx r29,r11,r28
	r29.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lbz r9,37(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 37);
	// rlwimi r9,r26,6,0,25
	ctx.r9.u64 = (__builtin_rotateleft32(r26.u32, 6) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// stb r9,37(r10)
	PPC_STORE_U8(ctx.r10.u32 + 37, ctx.r9.u8);
	// lwz r8,148(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8264e8a4
	if (cr6.eq) goto loc_8264E8A4;
	// bl 0x8264c400
	sub_8264C400(ctx, base);
	// b 0x8264e8fc
	goto loc_8264E8FC;
loc_8264E8A4:
	// stw r26,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r26.u32);
	// bl 0x8264c400
	sub_8264C400(ctx, base);
	// lwz r11,148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r11.u32);
	// bne 0x8264e8fc
	if (!cr0.eq) goto loc_8264E8FC;
	// lbz r11,156(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264e8fc
	if (!cr6.eq) goto loc_8264E8FC;
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264e8dc
	if (cr6.eq) goto loc_8264E8DC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8264E8DC:
	// lwz r11,164(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8264e8fc
	if (!cr6.eq) goto loc_8264E8FC;
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264e8fc
	if (cr6.eq) goto loc_8264E8FC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8264E8FC:
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
	// bne cr6,0x8264e924
	if (!cr6.eq) goto loc_8264E924;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8264E924:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r28,r28,-4
	r28.s64 = r28.s64 + -4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r29.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// bge 0x8264e86c
	if (!cr0.lt) goto loc_8264E86C;
loc_8264E94C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8264E950"))) PPC_WEAK_FUNC(sub_8264E950);
PPC_FUNC_IMPL(__imp__sub_8264E950) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8264E954"))) PPC_WEAK_FUNC(sub_8264E954);
PPC_FUNC_IMPL(__imp__sub_8264E954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264E958"))) PPC_WEAK_FUNC(sub_8264E958);
PPC_FUNC_IMPL(__imp__sub_8264E958) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r8,32(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + r11.u64;
	// rotlwi r6,r8,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// addi r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 + 52;
	// addi r26,r3,40
	r26.s64 = ctx.r3.s64 + 40;
	// lwz r5,-4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// stwx r5,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + r11.u32, ctx.r5.u32);
	// lwz r4,52(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lhz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// rotlwi r11,r3,2
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// lwzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// sth r3,32(r10)
	PPC_STORE_U16(ctx.r10.u32 + 32, ctx.r3.u16);
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// stw r9,56(r29)
	PPC_STORE_U32(r29.u32 + 56, ctx.r9.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r8,48(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// lwz r7,44(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// clrlwi r6,r8,2
	ctx.r6.u64 = ctx.r8.u32 & 0x3FFFFFFF;
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// bne cr6,0x8264e9e4
	if (!cr6.eq) goto loc_8264E9E4;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8264E9E4:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r24,0
	r24.s64 = 0;
	// lfs f31,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f31.f64 = double(temp.f32);
	// mr r25,r24
	r25.u64 = r24.u64;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r31.u32);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,4(r26)
	PPC_STORE_U32(r26.u32 + 4, ctx.r7.u32);
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r5,44(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// addis r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 65536;
	// lbz r3,38(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 38);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// rlwimi r3,r8,6,0,25
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 6) & 0xFFFFFFC0) | (ctx.r3.u64 & 0xFFFFFFFF0000003F);
	// stfs f31,48(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f31,52(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// sth r4,32(r31)
	PPC_STORE_U16(r31.u32 + 32, ctx.r4.u16);
	// stb r3,38(r31)
	PPC_STORE_U8(r31.u32 + 38, ctx.r3.u8);
	// ble cr6,0x8264eacc
	if (!cr6.gt) goto loc_8264EACC;
	// addi r27,r29,773
	r27.s64 = r29.s64 + 773;
	// mr r28,r24
	r28.u64 = r24.u64;
loc_8264EA4C:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwzx r30,r28,r11
	r30.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// addi r5,r30,240
	ctx.r5.s64 = r30.s64 + 240;
	// bl 0x82bf65a8
	sub_82BF65A8(ctx, base);
	// sth r24,234(r30)
	PPC_STORE_U16(r30.u32 + 234, r24.u16);
	// sth r24,236(r30)
	PPC_STORE_U16(r30.u32 + 236, r24.u16);
	// addi r11,r30,224
	r11.s64 = r30.s64 + 224;
	// lbz r9,233(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 233);
	// lbz r10,775(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 775);
	// clrlwi r5,r10,30
	ctx.r5.u64 = ctx.r10.u32 & 0x3;
	// clrlwi r6,r9,30
	ctx.r6.u64 = ctx.r9.u32 & 0x3;
	// lbz r7,1(r27)
	ctx.r7.u64 = PPC_LOAD_U8(r27.u32 + 1);
	// lbz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bge cr6,0x8264ea94
	if (!cr6.lt) goto loc_8264EA94;
	// not r8,r8
	ctx.r8.u64 = ~ctx.r8.u64;
loc_8264EA94:
	// rlwinm r8,r8,14,0,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0xFFFFC000;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x8264eaac
	if (!cr6.lt) goto loc_8264EAAC;
	// not r10,r7
	ctx.r10.u64 = ~ctx.r7.u64;
	// rlwinm r10,r10,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// b 0x8264eab0
	goto loc_8264EAB0;
loc_8264EAAC:
	// rlwinm r10,r7,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0xFFFFC000;
loc_8264EAB0:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// sth r8,10(r11)
	PPC_STORE_U16(r11.u32 + 10, ctx.r8.u16);
	// sth r10,12(r11)
	PPC_STORE_U16(r11.u32 + 12, ctx.r10.u16);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpw cr6,r25,r7
	cr6.compare<int32_t>(r25.s32, ctx.r7.s32, xer);
	// blt cr6,0x8264ea4c
	if (cr6.lt) goto loc_8264EA4C;
loc_8264EACC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,120(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lfs f2,464(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 464);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,68(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82665940
	sub_82665940(ctx, base);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82659b30
	sub_82659B30(ctx, base);
	// lwz r10,204(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// bne cr6,0x8264ebbc
	if (!cr6.eq) goto loc_8264EBBC;
	// bl 0x82628608
	sub_82628608(ctx, base);
	// extsb r11,r23
	r11.s64 = r23.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264eb70
	if (cr6.eq) goto loc_8264EB70;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x8264eb38
	if (!cr6.gt) goto loc_8264EB38;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8264EB38:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8264cf48
	sub_8264CF48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264eb70
	if (cr6.eq) goto loc_8264EB70;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8264e1c0
	sub_8264E1C0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x828e9454
	return;
loc_8264EB70:
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8264ebc0
	if (cr6.eq) goto loc_8264EBC0;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// ble cr6,0x8264ebc0
	if (!cr6.gt) goto loc_8264EBC0;
	// sth r24,32(r31)
	PPC_STORE_U16(r31.u32 + 32, r24.u16);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r10,32(r11)
	PPC_STORE_U16(r11.u32 + 32, ctx.r10.u16);
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r31.u32);
	// lwz r6,0(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stwx r11,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x828e9454
	return;
loc_8264EBBC:
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8264EBC0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
}

__attribute__((alias("__imp__sub_8264EBC8"))) PPC_WEAK_FUNC(sub_8264EBC8);
PPC_FUNC_IMPL(__imp__sub_8264EBC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8264EBCC"))) PPC_WEAK_FUNC(sub_8264EBCC);
PPC_FUNC_IMPL(__imp__sub_8264EBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264EBD0"))) PPC_WEAK_FUNC(sub_8264EBD0);
PPC_FUNC_IMPL(__imp__sub_8264EBD0) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,72(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// addi r27,r3,464
	r27.s64 = ctx.r3.s64 + 464;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,224
	ctx.r6.s64 = 224;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// bl 0x826701d8
	sub_826701D8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264ec24
	if (!cr6.eq) goto loc_8264EC24;
	// lbz r11,38(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 38);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r10,0,28,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stb r9,38(r31)
	PPC_STORE_U8(r31.u32 + 38, ctx.r9.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e945c
	return;
loc_8264EC24:
	// addi r29,r30,52
	r29.s64 = r30.s64 + 52;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x8264ec50
	if (!cr6.eq) goto loc_8264EC50;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8264EC50:
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r11,r30,40
	r11.s64 = r30.s64 + 40;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r31.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r8.u32);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lhz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// lwz r6,44(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
	// rotlwi r4,r7,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwz r3,-4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	// stwx r3,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + r11.u32, ctx.r3.u32);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// sth r10,32(r8)
	PPC_STORE_U16(ctx.r8.u32 + 32, ctx.r10.u16);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// stw r7,44(r30)
	PPC_STORE_U32(r30.u32 + 44, ctx.r7.u32);
	// lbz r6,38(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 38);
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// addis r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 65536;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// clrlwi r10,r6,26
	ctx.r10.u64 = ctx.r6.u32 & 0x3F;
	// sth r3,32(r31)
	PPC_STORE_U16(r31.u32 + 32, ctx.r3.u16);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stb r10,38(r31)
	PPC_STORE_U8(r31.u32 + 38, ctx.r10.u8);
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// ble cr6,0x8264ed4c
	if (!cr6.gt) goto loc_8264ED4C;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r26,0
	r26.s64 = 0;
	// addi r25,r11,-12816
	r25.s64 = r11.s64 + -12816;
loc_8264ECF0:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lfs f1,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// lwzx r29,r26,r11
	r29.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// addi r4,r29,240
	ctx.r4.s64 = r29.s64 + 240;
	// bl 0x82bf6e08
	sub_82BF6E08(ctx, base);
	// lwz r10,224(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 224);
	// addi r27,r29,224
	r27.s64 = r29.s64 + 224;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,224(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 224);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r7,68(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r28,r6
	cr6.compare<int32_t>(r28.s32, ctx.r6.s32, xer);
	// blt cr6,0x8264ecf0
	if (cr6.lt) goto loc_8264ECF0;
loc_8264ED4C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82659d58
	sub_82659D58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8264ED5C"))) PPC_WEAK_FUNC(sub_8264ED5C);
PPC_FUNC_IMPL(__imp__sub_8264ED5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8264ED60"))) PPC_WEAK_FUNC(sub_8264ED60);
PPC_FUNC_IMPL(__imp__sub_8264ED60) {
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
	// lbz r11,38(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 38);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lhz r10,34(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 34);
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// rlwinm r9,r9,0,28,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// stb r9,38(r4)
	PPC_STORE_U8(ctx.r4.u32 + 38, ctx.r9.u8);
	// bne cr6,0x8264ede4
	if (!cr6.eq) goto loc_8264EDE4;
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addi r31,r3,64
	r31.s64 = ctx.r3.s64 + 64;
	// sth r11,34(r4)
	PPC_STORE_U16(ctx.r4.u32 + 34, r11.u16);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r7,r9,2
	ctx.r7.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bne cr6,0x8264edc8
	if (!cr6.eq) goto loc_8264EDC8;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8264EDC8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_8264EDE4:
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

__attribute__((alias("__imp__sub_8264EDF8"))) PPC_WEAK_FUNC(sub_8264EDF8);
PPC_FUNC_IMPL(__imp__sub_8264EDF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264EDFC"))) PPC_WEAK_FUNC(sub_8264EDFC);
PPC_FUNC_IMPL(__imp__sub_8264EDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264EE00"))) PPC_WEAK_FUNC(sub_8264EE00);
PPC_FUNC_IMPL(__imp__sub_8264EE00) {
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
	// lbz r11,38(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 38);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r10,0,28,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// stb r10,38(r4)
	PPC_STORE_U8(ctx.r4.u32 + 38, ctx.r10.u8);
	// lwz r3,192(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lhz r9,34(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 34);
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// bne cr6,0x8264ee88
	if (!cr6.eq) goto loc_8264EE88;
	// lwz r11,68(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// addi r31,r29,64
	r31.s64 = r29.s64 + 64;
	// sth r11,34(r30)
	PPC_STORE_U16(r30.u32 + 34, r11.u16);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r9,72(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// lwz r8,68(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// clrlwi r7,r9,2
	ctx.r7.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bne cr6,0x8264ee6c
	if (!cr6.eq) goto loc_8264EE6C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8264EE6C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_8264EE88:
	// lwz r3,192(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 192);
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8264EE94"))) PPC_WEAK_FUNC(sub_8264EE94);
PPC_FUNC_IMPL(__imp__sub_8264EE94) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8264EE98"))) PPC_WEAK_FUNC(sub_8264EE98);
PPC_FUNC_IMPL(__imp__sub_8264EE98) {
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
	// lbz r11,38(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 38);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,26,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8264eedc
	if (!cr6.eq) goto loc_8264EEDC;
	// rlwinm r10,r11,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8264eedc
	if (cr6.eq) goto loc_8264EEDC;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rlwinm r11,r11,0,30,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// ori r10,r11,4
	ctx.r10.u64 = r11.u64 | 4;
	// stb r10,38(r4)
	PPC_STORE_U8(ctx.r4.u32 + 38, ctx.r10.u8);
loc_8264EEDC:
	// lbz r11,38(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 38);
	// lhz r10,34(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 34);
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// rlwinm r9,r9,0,28,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// ori r8,r9,16
	ctx.r8.u64 = ctx.r9.u64 | 16;
	// stb r8,38(r30)
	PPC_STORE_U8(r30.u32 + 38, ctx.r8.u8);
	// bne cr6,0x8264ef4c
	if (!cr6.eq) goto loc_8264EF4C;
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addi r31,r3,64
	r31.s64 = ctx.r3.s64 + 64;
	// sth r11,34(r30)
	PPC_STORE_U16(r30.u32 + 34, r11.u16);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r7,r9,2
	ctx.r7.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bne cr6,0x8264ef30
	if (!cr6.eq) goto loc_8264EF30;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8264EF30:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_8264EF4C:
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

__attribute__((alias("__imp__sub_8264EF60"))) PPC_WEAK_FUNC(sub_8264EF60);
PPC_FUNC_IMPL(__imp__sub_8264EF60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264EF64"))) PPC_WEAK_FUNC(sub_8264EF64);
PPC_FUNC_IMPL(__imp__sub_8264EF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264EF68"))) PPC_WEAK_FUNC(sub_8264EF68);
PPC_FUNC_IMPL(__imp__sub_8264EF68) {
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
	// lwz r9,148(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r4,204(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// lwz r5,204(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 204);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8264efb8
	if (cr6.eq) goto loc_8264EFB8;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x8263e0e0
	sub_8263E0E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8264EFB8:
	// bl 0x8264e1c0
	sub_8264E1C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8264EFC8"))) PPC_WEAK_FUNC(sub_8264EFC8);
PPC_FUNC_IMPL(__imp__sub_8264EFC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264EFCC"))) PPC_WEAK_FUNC(sub_8264EFCC);
PPC_FUNC_IMPL(__imp__sub_8264EFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264EFD0"))) PPC_WEAK_FUNC(sub_8264EFD0);
PPC_FUNC_IMPL(__imp__sub_8264EFD0) {
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
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264f260
	if (cr6.eq) goto loc_8264F260;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x8264f00c
	if (!cr6.gt) goto loc_8264F00C;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// addi r6,r10,-11648
	ctx.r6.s64 = ctx.r10.s64 + -11648;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c0a658
	sub_82C0A658(ctx, base);
loc_8264F00C:
	// lwz r11,68(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 68);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8264f04c
	if (!cr6.gt) goto loc_8264F04C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8264F020:
	// lwz r11,64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264f034
	if (cr6.eq) goto loc_8264F034;
	// sth r10,34(r11)
	PPC_STORE_U16(r11.u32 + 34, ctx.r10.u16);
loc_8264F034:
	// lwz r11,68(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 68);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// blt cr6,0x8264f020
	if (cr6.lt) goto loc_8264F020;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
loc_8264F04C:
	// beq cr6,0x8264f258
	if (cr6.eq) goto loc_8264F258;
	// lis r11,0
	r11.s64 = 0;
	// addi r27,r28,64
	r27.s64 = r28.s64 + 64;
	// li r25,1
	r25.s64 = 1;
	// ori r24,r11,65535
	r24.u64 = r11.u64 | 65535;
	// li r26,12
	r26.s64 = 12;
loc_8264F064:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// lwz r29,-4(r8)
	r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// stw r7,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r7.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8264f24c
	if (cr6.eq) goto loc_8264F24C;
	// lbz r11,37(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 37);
	// sth r24,34(r29)
	PPC_STORE_U16(r29.u32 + 34, r24.u16);
	// rlwinm r10,r11,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8264f180
	if (cr6.eq) goto loc_8264F180;
	// lwz r9,60(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// addi r31,r29,56
	r31.s64 = r29.s64 + 56;
	// li r30,-1
	r30.s64 = -1;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8264f0e8
	if (!cr6.gt) goto loc_8264F0E8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8264F0BC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8264f0e0
	if (cr6.eq) goto loc_8264F0E0;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x8264f0bc
	if (cr6.lt) goto loc_8264F0BC;
	// b 0x8264f0e8
	goto loc_8264F0E8;
loc_8264F0E0:
	// mr r30,r11
	r30.u64 = r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_8264F0E8:
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x8264f12c
	if (!cr6.lt) goto loc_8264F12C;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8264F0F8:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8264f118
	if (cr6.eq) goto loc_8264F118;
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwx r7,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
loc_8264F118:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8264f0f8
	if (cr6.lt) goto loc_8264F0F8;
loc_8264F12C:
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x8264f170
	if (cr6.eq) goto loc_8264F170;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x8264f16c
	if (!cr6.lt) goto loc_8264F16C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x8264f15c
	if (cr6.lt) goto loc_8264F15C;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8264F15C:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8264F16C:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_8264F170:
	// lbz r11,37(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 37);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r10,0,30,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// stb r10,37(r29)
	PPC_STORE_U8(r29.u32 + 37, ctx.r10.u8);
loc_8264F180:
	// lbz r11,38(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 38);
	// rlwinm r10,r11,28,30,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x3;
	// rlwinm r9,r11,26,6,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x8264f1c0
	if (cr6.eq) goto loc_8264F1C0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// beq cr6,0x8264f1b8
	if (cr6.eq) goto loc_8264F1B8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r25.u8);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x8264e958
	sub_8264E958(ctx, base);
	// b 0x8264f24c
	goto loc_8264F24C;
loc_8264F1B8:
	// bl 0x8264ebd0
	sub_8264EBD0(ctx, base);
	// b 0x8264f24c
	goto loc_8264F24C;
loc_8264F1C0:
	// rlwinm r10,r11,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8264f24c
	if (cr6.eq) goto loc_8264F24C;
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// lwz r10,76(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 76);
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// rlwinm r9,r9,0,30,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// stb r9,38(r29)
	PPC_STORE_U8(r29.u32 + 38, ctx.r9.u8);
	// ble cr6,0x8264f1ec
	if (!cr6.gt) goto loc_8264F1EC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8264F1EC:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r28,40
	ctx.r4.s64 = r28.s64 + 40;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8264cf48
	sub_8264CF48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264f24c
	if (cr6.eq) goto loc_8264F24C;
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// lwz r9,148(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 148);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,204(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// lwz r4,204(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// beq cr6,0x8264f248
	if (cr6.eq) goto loc_8264F248;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stb r26,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r26.u8);
	// bl 0x8263e0e0
	sub_8263E0E0(ctx, base);
	// b 0x8264f24c
	goto loc_8264F24C;
loc_8264F248:
	// bl 0x8264e1c0
	sub_8264E1C0(ctx, base);
loc_8264F24C:
	// lwz r11,68(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 68);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8264f064
	if (!cr6.eq) goto loc_8264F064;
loc_8264F258:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8263e028
	sub_8263E028(ctx, base);
loc_8264F260:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8264F264"))) PPC_WEAK_FUNC(sub_8264F264);
PPC_FUNC_IMPL(__imp__sub_8264F264) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8264F268"))) PPC_WEAK_FUNC(sub_8264F268);
PPC_FUNC_IMPL(__imp__sub_8264F268) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r4.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264f2a4
	if (cr6.eq) goto loc_8264F2A4;
	// li r11,3
	r11.s64 = 3;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r11.u8);
	// bl 0x8263e0e0
	sub_8263E0E0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x828e9460
	return;
loc_8264F2A4:
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r28,r4,16
	r28.s64 = ctx.r4.s64 + 16;
	// stw r10,148(r30)
	PPC_STORE_U32(r30.u32 + 148, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264f538
	if (cr6.eq) goto loc_8264F538;
	// li r29,0
	r29.s64 = 0;
	// lwz r31,824(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 824);
	// lis r27,-32768
	r27.s64 = -2147483648;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r27.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// or r9,r31,r27
	ctx.r9.u64 = r31.u64 | r27.u64;
	// addi r8,r11,127
	ctx.r8.s64 = r11.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r8,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// lwz r31,824(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 824);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// or r6,r31,r27
	ctx.r6.u64 = r31.u64 | r27.u64;
	// addi r5,r11,127
	ctx.r5.s64 = r11.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r28,32
	r31.s64 = r28.s64 + 32;
	// rlwinm r10,r5,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFF80;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x8264f360
	if (!cr6.gt) goto loc_8264F360;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// addi r4,r1,252
	ctx.r4.s64 = ctx.r1.s64 + 252;
	// bl 0x826558d0
	sub_826558D0(ctx, base);
loc_8264F360:
	// lbz r26,15(r31)
	r26.u64 = PPC_LOAD_U8(r31.u32 + 15);
	// addi r11,r28,20
	r11.s64 = r28.s64 + 20;
	// lbz r10,13(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 13);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lbz r9,14(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 14);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lbz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// slw r5,r10,r26
	ctx.r5.u64 = r26.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r26.u8 & 0x3F));
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// slw r3,r9,r26
	ctx.r3.u64 = r26.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r26.u8 & 0x3F));
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// slw r9,r6,r26
	ctx.r9.u64 = r26.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r26.u8 & 0x3F));
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r5,r5,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r5.s64;
	// subf r4,r3,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r3.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// subf r3,r9,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r9.s64;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r4,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lbz r9,30(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 30);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r3,29(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 29);
	// slw r10,r3,r26
	ctx.r10.u64 = r26.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r26.u8 & 0x3F));
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// slw r3,r9,r26
	ctx.r3.u64 = r26.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r26.u8 & 0x3F));
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lbz r28,28(r31)
	r28.u64 = PPC_LOAD_U8(r31.u32 + 28);
	// slw r28,r28,r26
	r28.u64 = r26.u8 & 0x20 ? 0 : (r28.u32 << (r26.u8 & 0x3F));
	// lwz r26,88(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r31,16(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r10,r3,r9
	ctx.r10.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r9,r28,r31
	ctx.r9.u64 = r28.u64 + r31.u64;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add. r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + r11.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble 0x8264f460
	if (!cr0.gt) goto loc_8264F460;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82c55380
	sub_82C55380(ctx, base);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// bl 0x82c55310
	sub_82C55310(ctx, base);
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// bne cr6,0x8264f450
	if (!cr6.eq) goto loc_8264F450;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_8264F450:
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82c55258
	sub_82C55258(ctx, base);
loc_8264F460:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r31,r11
	r31.u64 = r11.u64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8264f4c4
	if (!cr6.eq) goto loc_8264F4C4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8264F4C4:
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r31,r11
	r31.u64 = r11.u64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8264f530
	if (!cr6.eq) goto loc_8264F530;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8264F530:
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r27.u32);
loc_8264F538:
	// lwz r11,148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r11.u32);
	// bne 0x8264f588
	if (!cr0.eq) goto loc_8264F588;
	// lbz r11,156(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264f588
	if (!cr6.eq) goto loc_8264F588;
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264f568
	if (cr6.eq) goto loc_8264F568;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8264F568:
	// lwz r11,164(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8264f588
	if (!cr6.eq) goto loc_8264F588;
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264f588
	if (cr6.eq) goto loc_8264F588;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8264F588:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8264F58C"))) PPC_WEAK_FUNC(sub_8264F58C);
PPC_FUNC_IMPL(__imp__sub_8264F58C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8264F590"))) PPC_WEAK_FUNC(sub_8264F590);
PPC_FUNC_IMPL(__imp__sub_8264F590) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r28,r4,16
	r28.s64 = ctx.r4.s64 + 16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264f6e8
	if (cr6.eq) goto loc_8264F6E8;
	// li r29,0
	r29.s64 = 0;
	// lwz r27,824(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 824);
	// lis r30,-32768
	r30.s64 = -2147483648;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// or r9,r27,r30
	ctx.r9.u64 = r27.u64 | r30.u64;
	// addi r8,r11,127
	ctx.r8.s64 = r11.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r10,r8,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x826558d0
	sub_826558D0(ctx, base);
	// lwz r11,204(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// ld r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U64(r11.u32 + 48);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r8,r11,48
	ctx.r8.s64 = r11.s64 + 48;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r28,20
	ctx.r4.s64 = r28.s64 + 20;
	// std r3,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r3.u64);
	// ld r7,56(r11)
	ctx.r7.u64 = PPC_LOAD_U64(r11.u32 + 56);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// ld r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U64(r11.u32 + 64);
	// std r3,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r3.u64);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// ld r11,72(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 72);
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, r11.u64);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x8264f688
	if (!cr6.gt) goto loc_8264F688;
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// bne cr6,0x8264f678
	if (!cr6.eq) goto loc_8264F678;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_8264F678:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82c55258
	sub_82C55258(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8264F688:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r11
	r31.u64 = r11.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 & ctx.r5.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r4,r11,0,0,0
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8264f6e8
	if (!cr6.eq) goto loc_8264F6E8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
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
loc_8264F6E8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8264F6EC"))) PPC_WEAK_FUNC(sub_8264F6EC);
PPC_FUNC_IMPL(__imp__sub_8264F6EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8264F6F0"))) PPC_WEAK_FUNC(sub_8264F6F0);
PPC_FUNC_IMPL(__imp__sub_8264F6F0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// lwz r27,824(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 824);
	// lis r29,-32768
	r29.s64 = -2147483648;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// or r8,r27,r29
	ctx.r8.u64 = r27.u64 | r29.u64;
	// addi r7,r11,127
	ctx.r7.s64 = r11.s64 + 127;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r7,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + r11.u64;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r11,24(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82649f08
	sub_82649F08(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x8264f7c0
	if (cr6.eq) goto loc_8264F7C0;
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// bne cr6,0x8264f7b0
	if (!cr6.eq) goto loc_8264F7B0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
loc_8264F7B0:
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82c55258
	sub_82C55258(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8264F7C0:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r11
	r31.u64 = r11.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 & ctx.r5.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r4,r11,0,0,0
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8264f820
	if (!cr6.eq) goto loc_8264F820;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
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
loc_8264F820:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8264F824"))) PPC_WEAK_FUNC(sub_8264F824);
PPC_FUNC_IMPL(__imp__sub_8264F824) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8264F828"))) PPC_WEAK_FUNC(sub_8264F828);
PPC_FUNC_IMPL(__imp__sub_8264F828) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r28,r4,16
	r28.s64 = ctx.r4.s64 + 16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264f94c
	if (cr6.eq) goto loc_8264F94C;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,0
	r30.s64 = 0;
	// lis r29,-32768
	r29.s64 = -2147483648;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// lwz r27,824(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 824);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// or r9,r27,r29
	ctx.r9.u64 = r27.u64 | r29.u64;
	// addi r8,r11,127
	ctx.r8.s64 = r11.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r8,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// addi r4,r28,20
	ctx.r4.s64 = r28.s64 + 20;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x8264f8ec
	if (!cr6.gt) goto loc_8264F8EC;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x82c55310
	sub_82C55310(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8264F8EC:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r11
	r31.u64 = r11.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 & ctx.r5.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r4,r11,0,0,0
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8264f94c
	if (!cr6.eq) goto loc_8264F94C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
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
loc_8264F94C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8264F950"))) PPC_WEAK_FUNC(sub_8264F950);
PPC_FUNC_IMPL(__imp__sub_8264F950) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8264F954"))) PPC_WEAK_FUNC(sub_8264F954);
PPC_FUNC_IMPL(__imp__sub_8264F954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264F958"))) PPC_WEAK_FUNC(sub_8264F958);
PPC_FUNC_IMPL(__imp__sub_8264F958) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lwz r27,824(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 824);
	// lis r28,-32768
	r28.s64 = -2147483648;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// or r9,r27,r28
	ctx.r9.u64 = r27.u64 | r28.u64;
	// addi r8,r11,127
	ctx.r8.s64 = r11.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r8,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// addi r4,r29,36
	ctx.r4.s64 = r29.s64 + 36;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x8264f9e8
	if (cr6.eq) goto loc_8264F9E8;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x82c55310
	sub_82C55310(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8264F9E8:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r11
	r31.u64 = r11.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 & ctx.r5.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r4,r11,0,0,0
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8264fa48
	if (!cr6.eq) goto loc_8264FA48;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
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
loc_8264FA48:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8264FA4C"))) PPC_WEAK_FUNC(sub_8264FA4C);
PPC_FUNC_IMPL(__imp__sub_8264FA4C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8264FA50"))) PPC_WEAK_FUNC(sub_8264FA50);
PPC_FUNC_IMPL(__imp__sub_8264FA50) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// lhz r10,524(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 524);
	// li r26,0
	r26.s64 = 0;
	// lwz r30,204(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// ori r8,r11,16
	ctx.r8.u64 = r11.u64 | 16;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r25,r26
	r25.u64 = r26.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8264fbec
	if (cr6.eq) goto loc_8264FBEC;
	// mr r27,r26
	r27.u64 = r26.u64;
loc_8264FA9C:
	// lwz r11,520(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 520);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r31,r27,r11
	r31.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r11,r26
	r11.u64 = r26.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8264fb04
	if (!cr6.gt) goto loc_8264FB04;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8264FAD4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r6,232(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 232);
	// cmplwi cr6,r6,5
	cr6.compare<uint32_t>(ctx.r6.u32, 5, xer);
	// beq cr6,0x8264faec
	if (cr6.eq) goto loc_8264FAEC;
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, xer);
	// bne cr6,0x8264fb00
	if (!cr6.eq) goto loc_8264FB00;
loc_8264FAEC:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x8264fad4
	if (cr6.lt) goto loc_8264FAD4;
	// b 0x8264fb04
	goto loc_8264FB04;
loc_8264FB00:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
loc_8264FB04:
	// extsb r11,r7
	r11.s64 = ctx.r7.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264fbd8
	if (cr6.eq) goto loc_8264FBD8;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x8264fb38
	if (!cr6.eq) goto loc_8264FB38;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8264FB38:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r31.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// bl 0x82628558
	sub_82628558(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82664c90
	sub_82664C90(ctx, base);
	// lbz r9,37(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 37);
	// lhz r8,34(r30)
	ctx.r8.u64 = PPC_LOAD_U16(r30.u32 + 34);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r8,65535
	cr6.compare<uint32_t>(ctx.r8.u32, 65535, xer);
	// rlwinm r7,r7,0,30,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// ori r6,r7,4
	ctx.r6.u64 = ctx.r7.u64 | 4;
	// stb r6,37(r30)
	PPC_STORE_U8(r30.u32 + 37, ctx.r6.u8);
	// bne cr6,0x8264fbd8
	if (!cr6.eq) goto loc_8264FBD8;
	// lwz r11,68(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 68);
	// addi r31,r24,64
	r31.s64 = r24.s64 + 64;
	// sth r11,34(r30)
	PPC_STORE_U16(r30.u32 + 34, r11.u16);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r9,72(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 72);
	// lwz r8,68(r24)
	ctx.r8.u64 = PPC_LOAD_U32(r24.u32 + 68);
	// clrlwi r7,r9,2
	ctx.r7.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bne cr6,0x8264fbbc
	if (!cr6.eq) goto loc_8264FBBC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8264FBBC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_8264FBD8:
	// lhz r11,524(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 524);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x8264fa9c
	if (cr6.lt) goto loc_8264FA9C;
loc_8264FBEC:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8264fc24
	if (!cr6.eq) goto loc_8264FC24;
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
loc_8264FC24:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_8264FC28"))) PPC_WEAK_FUNC(sub_8264FC28);
PPC_FUNC_IMPL(__imp__sub_8264FC28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8264FC2C"))) PPC_WEAK_FUNC(sub_8264FC2C);
PPC_FUNC_IMPL(__imp__sub_8264FC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264FC30"))) PPC_WEAK_FUNC(sub_8264FC30);
PPC_FUNC_IMPL(__imp__sub_8264FC30) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r25,0
	r25.s64 = 0;
	// lwz r28,204(r4)
	r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// ori r8,r11,16
	ctx.r8.u64 = r11.u64 | 16;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r24,r25
	r24.u64 = r25.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8264fd5c
	if (!cr6.gt) goto loc_8264FD5C;
	// mr r26,r25
	r26.u64 = r25.u64;
loc_8264FC7C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r3,32(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 32);
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(r28.u32, ctx.r3.u32, xer);
	// lwzx r31,r26,r11
	r31.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// beq cr6,0x8264fd3c
	if (cr6.eq) goto loc_8264FD3C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82665118
	sub_82665118(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82628608
	sub_82628608(ctx, base);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8264fd48
	if (!cr6.gt) goto loc_8264FD48;
	// mr r31,r25
	r31.u64 = r25.u64;
loc_8264FCD4:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplw cr6,r4,r30
	cr6.compare<uint32_t>(ctx.r4.u32, r30.u32, xer);
	// beq cr6,0x8264fd24
	if (cr6.eq) goto loc_8264FD24;
	// lbz r11,232(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 232);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8264fd24
	if (cr6.eq) goto loc_8264FD24;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8264fd24
	if (cr6.eq) goto loc_8264FD24;
	// lbz r11,232(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 232);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8264fd24
	if (cr6.eq) goto loc_8264FD24;
	// lwz r11,204(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// lwz r10,204(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x8264fd24
	if (cr6.eq) goto loc_8264FD24;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x8264ef68
	sub_8264EF68(ctx, base);
loc_8264FD24:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8264fcd4
	if (cr6.lt) goto loc_8264FCD4;
	// b 0x8264fd48
	goto loc_8264FD48;
loc_8264FD3C:
	// bl 0x82665118
	sub_82665118(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8264FD48:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// blt cr6,0x8264fc7c
	if (cr6.lt) goto loc_8264FC7C;
loc_8264FD5C:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8264fd94
	if (!cr6.eq) goto loc_8264FD94;
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
loc_8264FD94:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_8264FD98"))) PPC_WEAK_FUNC(sub_8264FD98);
PPC_FUNC_IMPL(__imp__sub_8264FD98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8264FD9C"))) PPC_WEAK_FUNC(sub_8264FD9C);
PPC_FUNC_IMPL(__imp__sub_8264FD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264FDA0"))) PPC_WEAK_FUNC(sub_8264FDA0);
PPC_FUNC_IMPL(__imp__sub_8264FDA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e4
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,76(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r8,r11,127
	ctx.r8.s64 = r11.s64 + 127;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r8,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// lwz r5,76(r19)
	ctx.r5.u64 = PPC_LOAD_U32(r19.u32 + 76);
	// bl 0x82bfb298
	sub_82BFB298(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82665180
	sub_82665180(ctx, base);
	// extsb r6,r3
	ctx.r6.s64 = ctx.r3.s8;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x8264fe30
	if (cr6.eq) goto loc_8264FE30;
	// lbz r11,37(r19)
	r11.u64 = PPC_LOAD_U8(r19.u32 + 37);
	// lwz r31,144(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r10,0,28,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// stb r10,37(r19)
	PPC_STORE_U8(r19.u32 + 37, ctx.r10.u8);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x828e9434
	return;
loc_8264FE30:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// addi r10,r1,188
	ctx.r10.s64 = ctx.r1.s64 + 188;
	// ori r9,r11,32
	ctx.r9.u64 = r11.u64 | 32;
	// li r18,0
	r18.s64 = 0;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r18,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r18.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfb550
	sub_82BFB550(ctx, base);
	// lwz r31,180(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// addi r8,r31,128
	ctx.r8.s64 = r31.s64 + 128;
	// lwz r17,0(r3)
	r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r16,1
	r16.s64 = 1;
	// rlwinm r11,r8,0,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// add r7,r11,r17
	ctx.r7.u64 = r11.u64 + r17.u64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lbz r6,37(r19)
	ctx.r6.u64 = PPC_LOAD_U8(r19.u32 + 37);
	// rlwinm r5,r6,0,26,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x826502e4
	if (cr6.eq) goto loc_826502E4;
	// lbz r11,213(r15)
	r11.u64 = PPC_LOAD_U8(r15.u32 + 213);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8265004c
	if (cr6.eq) goto loc_8265004C;
	// lwz r30,180(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r31,r19,72
	r31.s64 = r19.s64 + 72;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// addi r10,r11,127
	ctx.r10.s64 = r11.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// ble cr6,0x8264fee0
	if (!cr6.gt) goto loc_8264FEE0;
	// mr r11,r18
	r11.u64 = r18.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
loc_8264FED0:
	// stwx r18,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + r11.u32, r18.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bdnz 0x8264fed0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8264FED0;
loc_8264FEE0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r7,r15,773
	ctx.r7.s64 = r15.s64 + 773;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8264ff80
	if (!cr6.gt) goto loc_8264FF80;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
loc_8264FEF8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r9,1(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lhz r11,236(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 236);
	// srawi r4,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	ctx.r4.s64 = r11.s32 >> 14;
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// bne cr6,0x8264ff18
	if (!cr6.eq) goto loc_8264FF18;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
loc_8264FF18:
	// clrlwi r9,r11,25
	ctx.r9.u64 = r11.u32 & 0x7F;
	// lhz r11,234(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 234);
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// srawi r4,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	ctx.r4.s64 = r11.s32 >> 14;
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// bne cr6,0x8264ff34
	if (!cr6.eq) goto loc_8264FF34;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
loc_8264FF34:
	// clrlwi r10,r11,25
	ctx.r10.u64 = r11.u32 & 0x7F;
	// clrlwi r11,r9,25
	r11.u64 = ctx.r9.u32 & 0x7F;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x8264ff4c
	if (!cr6.gt) goto loc_8264FF4C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8264FF4C:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bgt cr6,0x8264ff6c
	if (cr6.gt) goto loc_8264FF6C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r16,r4,r5
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, r16.u32);
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_8264FF6C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// blt cr6,0x8264fef8
	if (cr6.lt) goto loc_8264FEF8;
loc_8264FF80:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// stb r16,0(r17)
	PPC_STORE_U8(r17.u32 + 0, r16.u8);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x8264ffc8
	if (!cr6.gt) goto loc_8264FFC8;
	// mr r11,r18
	r11.u64 = r18.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
loc_8264FF9C:
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8264ffb4
	if (cr6.eq) goto loc_8264FFB4;
	// stwx r18,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r18.u32);
	// b 0x8264ffc0
	goto loc_8264FFC0;
loc_8264FFB4:
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r5.u32);
	// stbx r18,r5,r17
	PPC_STORE_U8(ctx.r5.u32 + r17.u32, r18.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_8264FFC0:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8264ff9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8264FF9C;
loc_8264FFC8:
	// cmpw cr6,r5,r30
	cr6.compare<int32_t>(ctx.r5.s32, r30.s32, xer);
	// ble cr6,0x8264ffd8
	if (!cr6.gt) goto loc_8264FFD8;
	// stb r18,0(r17)
	PPC_STORE_U8(r17.u32 + 0, r18.u8);
	// b 0x8264ffe8
	goto loc_8264FFE8;
loc_8264FFD8:
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfb7a0
	sub_82BFB7A0(ctx, base);
loc_8264FFE8:
	// lwz r31,136(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8265059c
	if (!cr6.eq) goto loc_8265059C;
loc_82650000:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r17,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r17.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,184(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r18,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r18.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82650040
	if (!cr6.eq) goto loc_82650040;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82650040:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r11.u32);
	// b 0x82650dc8
	goto loc_82650DC8;
loc_8265004C:
	// lwz r26,180(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r30,r19,72
	r30.s64 = r19.s64 + 72;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r26,2,0,29
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r27,0(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,127
	r11.s64 = r11.s64 + 127;
	// rlwinm r31,r11,0,0,24
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// add r10,r31,r27
	ctx.r10.u64 = r31.u64 + r27.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// ble cr6,0x826500ac
	if (!cr6.gt) goto loc_826500AC;
	// mr r11,r18
	r11.u64 = r18.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
loc_82650098:
	// stwx r18,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + r11.u32, r18.u32);
	// stwx r18,r27,r11
	PPC_STORE_U32(r27.u32 + r11.u32, r18.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bdnz 0x82650098
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82650098;
loc_826500AC:
	// lbz r11,213(r15)
	r11.u64 = PPC_LOAD_U8(r15.u32 + 213);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// beq cr6,0x8265017c
	if (cr6.eq) goto loc_8265017C;
	// addi r3,r15,773
	ctx.r3.s64 = r15.s64 + 773;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826501dc
	if (!cr6.gt) goto loc_826501DC;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
loc_826500D0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r11,236(r7)
	r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 236);
	// lwzx r6,r6,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// srawi r10,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = r11.s32 >> 14;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x826500fc
	if (!cr6.eq) goto loc_826500FC;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
loc_826500FC:
	// clrlwi r9,r11,25
	ctx.r9.u64 = r11.u32 & 0x7F;
	// lhz r11,234(r7)
	r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 234);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// srawi r31,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	r31.s64 = r11.s32 >> 14;
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, r31.s32, xer);
	// bne cr6,0x82650118
	if (!cr6.eq) goto loc_82650118;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
loc_82650118:
	// clrlwi r10,r11,25
	ctx.r10.u64 = r11.u32 & 0x7F;
	// clrlwi r11,r9,25
	r11.u64 = ctx.r9.u32 & 0x7F;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x82650130
	if (!cr6.gt) goto loc_82650130;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82650130:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bgt cr6,0x82650140
	if (cr6.gt) goto loc_82650140;
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r16,r11,r4
	PPC_STORE_U32(r11.u32 + ctx.r4.u32, r16.u32);
loc_82650140:
	// lhz r9,176(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 176);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bge cr6,0x82650150
	if (!cr6.lt) goto loc_82650150;
	// mr r9,r16
	ctx.r9.u64 = r16.u64;
loc_82650150:
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r11,r27
	PPC_STORE_U32(r11.u32 + r27.u32, ctx.r10.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r5,r9
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, xer);
	// blt cr6,0x826500d0
	if (cr6.lt) goto loc_826500D0;
	// b 0x826501dc
	goto loc_826501DC;
loc_8265017C:
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826501dc
	if (!cr6.gt) goto loc_826501DC;
	// mr r11,r18
	r11.u64 = r18.u64;
loc_8265018C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwzx r5,r8,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r16,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, r16.u32);
	// lhz r9,176(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 176);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bge cr6,0x826501b8
	if (!cr6.lt) goto loc_826501B8;
	// mr r9,r16
	ctx.r9.u64 = r16.u64;
loc_826501B8:
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r9,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r9.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// blt cr6,0x8265018c
	if (cr6.lt) goto loc_8265018C;
loc_826501DC:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x8265020c
	if (!cr6.gt) goto loc_8265020C;
	// mr r11,r18
	r11.u64 = r18.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_826501F0:
	// lwzx r9,r4,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + r11.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82650204
	if (!cr6.eq) goto loc_82650204;
	// stwx r10,r27,r11
	PPC_STORE_U32(r27.u32 + r11.u32, ctx.r10.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82650204:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x826501f0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826501F0;
loc_8265020C:
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x826502bc
	if (!cr6.gt) goto loc_826502BC;
	// mr r30,r16
	r30.u64 = r16.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// li r28,-2
	r28.s64 = -2;
loc_8265022C:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r9,-2
	cr6.compare<int32_t>(ctx.r9.s32, -2, xer);
	// beq cr6,0x826502ac
	if (cr6.eq) goto loc_826502AC;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stbx r18,r8,r17
	PPC_STORE_U8(ctx.r8.u32 + r17.u32, r18.u8);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blt cr6,0x826502ac
	if (cr6.lt) goto loc_826502AC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(r30.s32, r26.s32, xer);
	// bge cr6,0x826502ac
	if (!cr6.lt) goto loc_826502AC;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// subf r6,r27,r29
	ctx.r6.s64 = r29.s64 - r27.s64;
loc_82650264:
	// lwz r7,180(r15)
	ctx.r7.u64 = PPC_LOAD_U32(r15.u32 + 180);
	// addi r10,r9,10
	ctx.r10.s64 = ctx.r9.s64 + 10;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// bge cr6,0x826502ac
	if (!cr6.lt) goto loc_826502AC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x8265029c
	if (cr6.lt) goto loc_8265029C;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// bge cr6,0x8265029c
	if (!cr6.lt) goto loc_8265029C;
	// stbx r16,r8,r17
	PPC_STORE_U8(ctx.r8.u32 + r17.u32, r16.u8);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stwx r8,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + r11.u32, ctx.r8.u32);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
loc_8265029C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r3,r26
	cr6.compare<int32_t>(ctx.r3.s32, r26.s32, xer);
	// blt cr6,0x82650264
	if (cr6.lt) goto loc_82650264;
loc_826502AC:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bdnz 0x8265022c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8265022C;
loc_826502BC:
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfb7a0
	sub_82BFB7A0(ctx, base);
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// b 0x8265059c
	goto loc_8265059C;
loc_826502E4:
	// lwz r11,180(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 180);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82650588
	if (cr6.eq) goto loc_82650588;
	// lwz r26,180(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r30,r19,72
	r30.s64 = r19.s64 + 72;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r26,2,0,29
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r27,0(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,127
	r11.s64 = r11.s64 + 127;
	// rlwinm r31,r11,0,0,24
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// add r10,r31,r27
	ctx.r10.u64 = r31.u64 + r27.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// ble cr6,0x82650350
	if (!cr6.gt) goto loc_82650350;
	// mr r11,r18
	r11.u64 = r18.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
loc_8265033C:
	// stwx r18,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + r11.u32, r18.u32);
	// stwx r18,r27,r11
	PPC_STORE_U32(r27.u32 + r11.u32, r18.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bdnz 0x8265033c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8265033C;
loc_82650350:
	// lbz r11,213(r15)
	r11.u64 = PPC_LOAD_U8(r15.u32 + 213);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// beq cr6,0x82650420
	if (cr6.eq) goto loc_82650420;
	// addi r3,r15,773
	ctx.r3.s64 = r15.s64 + 773;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82650480
	if (!cr6.gt) goto loc_82650480;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
loc_82650374:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r11,236(r7)
	r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 236);
	// lwzx r6,r6,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// srawi r10,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = r11.s32 >> 14;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x826503a0
	if (!cr6.eq) goto loc_826503A0;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
loc_826503A0:
	// clrlwi r9,r11,25
	ctx.r9.u64 = r11.u32 & 0x7F;
	// lhz r11,234(r7)
	r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 234);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// srawi r31,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	r31.s64 = r11.s32 >> 14;
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, r31.s32, xer);
	// bne cr6,0x826503bc
	if (!cr6.eq) goto loc_826503BC;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
loc_826503BC:
	// clrlwi r10,r11,25
	ctx.r10.u64 = r11.u32 & 0x7F;
	// clrlwi r11,r9,25
	r11.u64 = ctx.r9.u32 & 0x7F;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x826503d4
	if (!cr6.gt) goto loc_826503D4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_826503D4:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bgt cr6,0x826503e4
	if (cr6.gt) goto loc_826503E4;
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r16,r11,r4
	PPC_STORE_U32(r11.u32 + ctx.r4.u32, r16.u32);
loc_826503E4:
	// lhz r9,176(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 176);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bge cr6,0x826503f4
	if (!cr6.lt) goto loc_826503F4;
	// mr r9,r16
	ctx.r9.u64 = r16.u64;
loc_826503F4:
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r11,r27
	PPC_STORE_U32(r11.u32 + r27.u32, ctx.r10.u32);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r5,r9
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, xer);
	// blt cr6,0x82650374
	if (cr6.lt) goto loc_82650374;
	// b 0x82650480
	goto loc_82650480;
loc_82650420:
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82650480
	if (!cr6.gt) goto loc_82650480;
	// mr r11,r18
	r11.u64 = r18.u64;
loc_82650430:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwzx r5,r8,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r16,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, r16.u32);
	// lhz r9,176(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 176);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bge cr6,0x8265045c
	if (!cr6.lt) goto loc_8265045C;
	// mr r9,r16
	ctx.r9.u64 = r16.u64;
loc_8265045C:
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r9,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// blt cr6,0x82650430
	if (cr6.lt) goto loc_82650430;
loc_82650480:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x826504b0
	if (!cr6.gt) goto loc_826504B0;
	// mr r11,r18
	r11.u64 = r18.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82650494:
	// lwzx r9,r4,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + r11.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x826504a8
	if (!cr6.eq) goto loc_826504A8;
	// stwx r10,r27,r11
	PPC_STORE_U32(r27.u32 + r11.u32, ctx.r10.u32);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_826504A8:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82650494
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82650494;
loc_826504B0:
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x82650560
	if (!cr6.gt) goto loc_82650560;
	// mr r30,r16
	r30.u64 = r16.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// li r28,-2
	r28.s64 = -2;
loc_826504D0:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r9,-2
	cr6.compare<int32_t>(ctx.r9.s32, -2, xer);
	// beq cr6,0x82650550
	if (cr6.eq) goto loc_82650550;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stbx r18,r8,r17
	PPC_STORE_U8(ctx.r8.u32 + r17.u32, r18.u8);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blt cr6,0x82650550
	if (cr6.lt) goto loc_82650550;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(r30.s32, r26.s32, xer);
	// bge cr6,0x82650550
	if (!cr6.lt) goto loc_82650550;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// subf r6,r27,r29
	ctx.r6.s64 = r29.s64 - r27.s64;
loc_82650508:
	// lwz r7,180(r15)
	ctx.r7.u64 = PPC_LOAD_U32(r15.u32 + 180);
	// addi r10,r9,10
	ctx.r10.s64 = ctx.r9.s64 + 10;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// bge cr6,0x82650550
	if (!cr6.lt) goto loc_82650550;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82650540
	if (cr6.lt) goto loc_82650540;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// bge cr6,0x82650540
	if (!cr6.lt) goto loc_82650540;
	// stbx r16,r8,r17
	PPC_STORE_U8(ctx.r8.u32 + r17.u32, r16.u8);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stwx r8,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + r11.u32, ctx.r8.u32);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
loc_82650540:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r3,r26
	cr6.compare<int32_t>(ctx.r3.s32, r26.s32, xer);
	// blt cr6,0x82650508
	if (cr6.lt) goto loc_82650508;
loc_82650550:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bdnz 0x826504d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826504D0;
loc_82650560:
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfb7a0
	sub_82BFB7A0(ctx, base);
	// lwz r31,120(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// b 0x8265059c
	goto loc_8265059C;
loc_82650588:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x8262d7e0
	sub_8262D7E0(ctx, base);
loc_8265059C:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfb618
	sub_82BFB618(ctx, base);
	// lbzx r10,r17,r3
	ctx.r10.u64 = PPC_LOAD_U8(r17.u32 + ctx.r3.u32);
	// lbz r11,0(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 0);
	// stb r10,0(r17)
	PPC_STORE_U8(r17.u32 + 0, ctx.r10.u8);
	// stbx r11,r17,r3
	PPC_STORE_U8(r17.u32 + ctx.r3.u32, r11.u8);
	// lwz r24,76(r19)
	r24.u64 = PPC_LOAD_U32(r19.u32 + 76);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r20,r11
	r20.u64 = r11.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// lwz r23,0(r9)
	r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// beq cr6,0x82650000
	if (cr6.eq) goto loc_82650000;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r20,2,0,29
	r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r21,0(r3)
	r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r16
	r28.u64 = r16.u64;
	// addi r11,r11,127
	r11.s64 = r11.s64 + 127;
	// cmpwi cr6,r20,1
	cr6.compare<int32_t>(r20.s32, 1, xer);
	// rlwinm r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// add r10,r11,r21
	ctx.r10.u64 = r11.u64 + r21.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lbz r9,0(r17)
	ctx.r9.u64 = PPC_LOAD_U8(r17.u32 + 0);
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// lbz r8,37(r19)
	ctx.r8.u64 = PPC_LOAD_U8(r19.u32 + 37);
	// subfe r6,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwimi r8,r6,4,26,27
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 4) & 0x30) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFCF);
	// stb r8,37(r19)
	PPC_STORE_U8(r19.u32 + 37, ctx.r8.u8);
	// stw r19,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r19.u32);
	// ble cr6,0x82650708
	if (!cr6.gt) goto loc_82650708;
	// li r29,4
	r29.s64 = 4;
	// li r26,108
	r26.s64 = 108;
	// li r27,5
	r27.s64 = 5;
loc_82650624:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,108
	ctx.r4.s64 = 108;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// sth r26,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r26.u16);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x82665648
	sub_82665648(ctx, base);
	// lbz r9,38(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 38);
	// lbz r8,37(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 37);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwimi r9,r27,4,0,27
	ctx.r9.u64 = (__builtin_rotateleft32(r27.u32, 4) & 0xFFFFFFF0) | (ctx.r9.u64 & 0xFFFFFFFF0000000F);
	// stb r9,38(r3)
	PPC_STORE_U8(ctx.r3.u32 + 38, ctx.r9.u8);
	// lbzx r7,r17,r28
	ctx.r7.u64 = PPC_LOAD_U8(r17.u32 + r28.u32);
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r5,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwimi r8,r5,4,26,27
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 4) & 0x30) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFCF);
	// stb r8,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r8.u8);
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// sth r3,32(r31)
	PPC_STORE_U16(r31.u32 + 32, ctx.r3.u16);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// clrlwi r8,r10,2
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bne cr6,0x826506a4
	if (!cr6.eq) goto loc_826506A4;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_826506A4:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r30,r31,72
	r30.s64 = r31.s64 + 72;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r31.u32);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,4(r25)
	PPC_STORE_U32(r25.u32 + 4, ctx.r9.u32);
	// stwx r31,r21,r29
	PPC_STORE_U32(r21.u32 + r29.u32, r31.u32);
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwzx r31,r29,r8
	r31.u64 = PPC_LOAD_U32(r29.u32 + ctx.r8.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// clrlwi r6,r7,2
	ctx.r6.u64 = ctx.r7.u32 & 0x3FFFFFFF;
	// cmpw cr6,r6,r31
	cr6.compare<int32_t>(ctx.r6.s32, r31.s32, xer);
	// bge cr6,0x826506f8
	if (!cr6.lt) goto loc_826506F8;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_826506F8:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r20
	cr6.compare<int32_t>(r28.s32, r20.s32, xer);
	// blt cr6,0x82650624
	if (cr6.lt) goto loc_82650624;
loc_82650708:
	// lwz r29,76(r19)
	r29.u64 = PPC_LOAD_U32(r19.u32 + 76);
	// addi r31,r19,72
	r31.s64 = r19.s64 + 72;
	// lwz r26,72(r19)
	r26.u64 = PPC_LOAD_U32(r19.u32 + 72);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82650784
	if (cr6.eq) goto loc_82650784;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,0(r22)
	PPC_STORE_U32(r22.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r22)
	ctx.r8.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// stw r7,4(r22)
	PPC_STORE_U32(r22.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r22)
	ctx.r6.u64 = PPC_LOAD_U32(r22.u32 + 8);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// stw r5,8(r22)
	PPC_STORE_U32(r22.u32 + 8, ctx.r5.u32);
	// stw r18,76(r19)
	PPC_STORE_U32(r19.u32 + 76, r18.u32);
	// lwz r30,0(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r11,r4,2
	r11.u64 = ctx.r4.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82650788
	if (!cr6.lt) goto loc_82650788;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
	// b 0x82650788
	goto loc_82650788;
loc_82650784:
	// stw r18,76(r19)
	PPC_STORE_U32(r19.u32 + 76, r18.u32);
loc_82650788:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x826508c8
	if (!cr6.gt) goto loc_826508C8;
	// mr r27,r18
	r27.u64 = r18.u64;
	// mr r25,r29
	r25.u64 = r29.u64;
loc_82650798:
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwzx r29,r27,r26
	r29.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r21
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + r21.u32);
	// addi r11,r31,72
	r11.s64 = r31.s64 + 72;
	// cmplw cr6,r19,r31
	cr6.compare<uint32_t>(r19.u32, r31.u32, xer);
	// stw r31,204(r29)
	PPC_STORE_U32(r29.u32 + 204, r31.u32);
	// lwz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// sth r8,168(r29)
	PPC_STORE_U16(r29.u32 + 168, ctx.r8.u16);
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r29.u32);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// stw r5,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r5.u32);
	// beq cr6,0x826508bc
	if (cr6.eq) goto loc_826508BC;
	// lhz r10,176(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 176);
	// mr r28,r18
	r28.u64 = r18.u64;
	// lwz r11,172(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 172);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826508bc
	if (cr6.eq) goto loc_826508BC;
	// addi r30,r11,-48
	r30.s64 = r11.s64 + -48;
loc_826507F8:
	// lwz r11,28(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 28);
	// lhz r8,70(r30)
	ctx.r8.u64 = PPC_LOAD_U16(r30.u32 + 70);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lhz r7,72(r30)
	ctx.r7.u64 = PPC_LOAD_U16(r30.u32 + 72);
	// lhz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 68);
	// stw r9,28(r19)
	PPC_STORE_U32(r19.u32 + 28, ctx.r9.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lwz r6,8(r19)
	ctx.r6.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r7,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82650888
	if (cr6.eq) goto loc_82650888;
	// lwz r7,12(r19)
	ctx.r7.u64 = PPC_LOAD_U32(r19.u32 + 12);
	// lwz r6,16(r19)
	ctx.r6.u64 = PPC_LOAD_U32(r19.u32 + 16);
	// lwz r5,20(r19)
	ctx.r5.u64 = PPC_LOAD_U32(r19.u32 + 20);
	// subf r4,r10,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r10.s64;
	// subf r3,r9,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subf r7,r8,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r8.s64;
	// stw r4,12(r19)
	PPC_STORE_U32(r19.u32 + 12, ctx.r4.u32);
	// stw r3,16(r19)
	PPC_STORE_U32(r19.u32 + 16, ctx.r3.u32);
	// stw r7,20(r19)
	PPC_STORE_U32(r19.u32 + 20, ctx.r7.u32);
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lhz r3,22(r6)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + 22);
	// lhz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + 20);
	// lhz r4,24(r6)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + 24);
	// subf r7,r10,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r10.s64;
	// subf r8,r8,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r8.s64;
	// sth r7,20(r6)
	PPC_STORE_U16(ctx.r6.u32 + 20, ctx.r7.u16);
	// subf r11,r9,r3
	r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// sth r8,24(r6)
	PPC_STORE_U16(ctx.r6.u32 + 24, ctx.r8.u16);
	// sth r11,22(r6)
	PPC_STORE_U16(ctx.r6.u32 + 22, r11.u16);
loc_82650888:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r31.u32);
	// lwzu r4,48(r30)
	ea = 48 + r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	r30.u32 = ea;
	// bl 0x8264cda8
	sub_8264CDA8(ctx, base);
	// lhz r9,176(r29)
	ctx.r9.u64 = PPC_LOAD_U16(r29.u32 + 176);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r9
	cr6.compare<int32_t>(r28.s32, ctx.r9.s32, xer);
	// blt cr6,0x826507f8
	if (cr6.lt) goto loc_826507F8;
loc_826508BC:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bne 0x82650798
	if (!cr0.eq) goto loc_82650798;
loc_826508C8:
	// lwz r11,60(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 60);
	// lis r22,-32768
	r22.s64 = -2147483648;
	// lwz r27,32(r15)
	r27.u64 = PPC_LOAD_U32(r15.u32 + 32);
	// lwz r10,56(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r18,60(r19)
	PPC_STORE_U32(r19.u32 + 60, r18.u32);
	// ble cr6,0x826509f8
	if (!cr6.gt) goto loc_826509F8;
	// mr r25,r11
	r25.u64 = r11.u64;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// ori r28,r11,16
	r28.u64 = r11.u64 | 16;
loc_826508F4:
	// lwz r29,0(r26)
	r29.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x826509ec
	if (cr6.eq) goto loc_826509EC;
	// stw r28,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, r28.u32);
	// addi r11,r1,332
	r11.s64 = ctx.r1.s64 + 332;
	// stw r18,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, r18.u32);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r18
	r30.u64 = r18.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82650960
	if (!cr6.gt) goto loc_82650960;
	// lwz r11,320(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
loc_82650940:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r30,204(r8)
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 204);
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// bne cr6,0x82650960
	if (!cr6.eq) goto loc_82650960;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82650940
	if (cr6.lt) goto loc_82650940;
loc_82650960:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,328(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r18,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, r18.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82650998
	if (!cr6.eq) goto loc_82650998;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82650998:
	// stw r18,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, r18.u32);
	// addi r31,r30,56
	r31.s64 = r30.s64 + 56;
	// stw r22,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, r22.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r30.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x826509d0
	if (!cr6.eq) goto loc_826509D0;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_826509D0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r29.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
loc_826509EC:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// bne 0x826508f4
	if (!cr0.eq) goto loc_826508F4;
loc_826509F8:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8263e168
	sub_8263E168(ctx, base);
	// subf r11,r23,r24
	r11.s64 = r24.s64 - r23.s64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r10,r24
	cr6.compare<int32_t>(ctx.r10.s32, r24.s32, xer);
	// bge cr6,0x82650af8
	if (!cr6.lt) goto loc_82650AF8;
	// lwz r26,96(r19)
	r26.u64 = PPC_LOAD_U32(r19.u32 + 96);
	// addi r29,r19,88
	r29.s64 = r19.s64 + 88;
	// mr r27,r18
	r27.u64 = r18.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x82650cb8
	if (!cr6.gt) goto loc_82650CB8;
	// mr r25,r18
	r25.u64 = r18.u64;
loc_82650A2C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r30,r25,r11
	r30.u64 = PPC_LOAD_U32(r25.u32 + r11.u32);
	// mr r31,r30
	r31.u64 = r30.u64;
	// bl 0x826514a8
	sub_826514A8(ctx, base);
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + r30.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bge cr6,0x82650ae4
	if (!cr6.lt) goto loc_82650AE4;
loc_82650A50:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,204(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 204);
	// lhz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 32);
	// cmplwi cr6,r8,65535
	cr6.compare<uint32_t>(ctx.r8.u32, 65535, xer);
	// bne cr6,0x82650a84
	if (!cr6.eq) goto loc_82650A84;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,204(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 204);
loc_82650A84:
	// cmplw cr6,r11,r19
	cr6.compare<uint32_t>(r11.u32, r19.u32, xer);
	// bne cr6,0x82650a98
	if (!cr6.eq) goto loc_82650A98;
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// b 0x82650acc
	goto loc_82650ACC;
loc_82650A98:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
	// subf r28,r30,r31
	r28.s64 = r31.s64 - r30.s64;
	// bl 0x82c59930
	sub_82C59930(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82c58a80
	sub_82C58A80(ctx, base);
	// lwz r26,8(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(r27.s32, r26.s32, xer);
	// bge cr6,0x82650ae4
	if (!cr6.lt) goto loc_82650AE4;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwzx r30,r25,r11
	r30.u64 = PPC_LOAD_U32(r25.u32 + r11.u32);
	// add r31,r28,r30
	r31.u64 = r28.u64 + r30.u64;
loc_82650ACC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826514a8
	sub_826514A8(ctx, base);
	// add r11,r3,r30
	r11.u64 = ctx.r3.u64 + r30.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82650a50
	if (cr6.lt) goto loc_82650A50;
loc_82650AE4:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(r27.s32, r26.s32, xer);
	// blt cr6,0x82650a2c
	if (cr6.lt) goto loc_82650A2C;
	// b 0x82650cb8
	goto loc_82650CB8;
loc_82650AF8:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// lwz r10,96(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 96);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r18,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r18.u32);
	// ori r8,r11,1
	ctx.r8.u64 = r11.u64 | 1;
	// li r7,512
	ctx.r7.s64 = 512;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r11,r18
	r11.u64 = r18.u64;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// bne cr6,0x82650b40
	if (!cr6.eq) goto loc_82650B40;
	// lwz r10,92(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 92);
	// mr r11,r16
	r11.u64 = r16.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r18,96(r19)
	PPC_STORE_U32(r19.u32 + 96, r18.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// b 0x82650b9c
	goto loc_82650B9C;
loc_82650B40:
	// ble cr6,0x82650ba0
	if (!cr6.gt) goto loc_82650BA0;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82650b6c
	if (!cr6.lt) goto loc_82650B6C;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_82650B6C:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r19,92
	r11.s64 = r19.s64 + 92;
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r6,100(r19)
	ctx.r6.u64 = PPC_LOAD_U32(r19.u32 + 100);
	// lwz r9,92(r19)
	ctx.r9.u64 = PPC_LOAD_U32(r19.u32 + 92);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,96(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 96);
	// stw r10,92(r19)
	PPC_STORE_U32(r19.u32 + 92, ctx.r10.u32);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r7,96(r19)
	PPC_STORE_U32(r19.u32 + 96, ctx.r7.u32);
	// stw r8,100(r19)
	PPC_STORE_U32(r19.u32 + 100, ctx.r8.u32);
loc_82650B9C:
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
loc_82650BA0:
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// lwz r7,88(r19)
	ctx.r7.u64 = PPC_LOAD_U32(r19.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r8,88(r19)
	PPC_STORE_U32(r19.u32 + 88, ctx.r8.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// ble cr6,0x82650c74
	if (!cr6.gt) goto loc_82650C74;
	// mr r27,r18
	r27.u64 = r18.u64;
	// b 0x82650bc8
	goto loc_82650BC8;
loc_82650BC4:
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82650BC8:
	// addi r28,r10,1
	r28.s64 = ctx.r10.s64 + 1;
	// lwzx r29,r9,r27
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + r27.u32);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r31,r29
	r31.u64 = r29.u64;
	// beq cr6,0x82650be4
	if (cr6.eq) goto loc_82650BE4;
	// li r11,512
	r11.s64 = 512;
loc_82650BE4:
	// add r30,r11,r29
	r30.u64 = r11.u64 + r29.u64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// bge cr6,0x82650c40
	if (!cr6.lt) goto loc_82650C40;
loc_82650BF0:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,204(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 204);
	// lhz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 32);
	// cmplwi cr6,r8,65535
	cr6.compare<uint32_t>(ctx.r8.u32, 65535, xer);
	// bne cr6,0x82650c24
	if (!cr6.eq) goto loc_82650C24;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,204(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 204);
loc_82650C24:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
	// bl 0x82c59930
	sub_82C59930(ctx, base);
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x82650bf0
	if (cr6.lt) goto loc_82650BF0;
loc_82650C40:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,512
	ctx.r5.s64 = 512;
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
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82650bc4
	if (cr6.lt) goto loc_82650BC4;
loc_82650C74:
	// stw r18,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r18.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r18,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r18.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82650cb0
	if (!cr6.eq) goto loc_82650CB0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82650CB0:
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r18.u32);
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r22.u32);
loc_82650CB8:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8263e198
	sub_8263E198(ctx, base);
	// lwz r10,100(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 100);
	// addi r31,r19,92
	r31.s64 = r19.s64 + 92;
	// rlwinm r11,r10,0,0,0
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82650d4c
	if (!cr6.eq) goto loc_82650D4C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// rlwinm r9,r11,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | r11.u64;
	// rlwinm r7,r8,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r5,r6,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r3,r4,30,2,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// or r11,r3,r4
	r11.u64 = ctx.r3.u64 | ctx.r4.u64;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// bge cr6,0x82650d24
	if (!cr6.lt) goto loc_82650D24;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r31,12
	ctx.r6.s64 = r31.s64 + 12;
	// b 0x82650d3c
	goto loc_82650D3C;
loc_82650D24:
	// clrlwi r11,r10,2
	r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x82650d4c
	if (!cr6.lt) goto loc_82650D4C;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82650D3C:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632f50
	sub_82632F50(ctx, base);
loc_82650D4C:
	// mr r11,r16
	r11.u64 = r16.u64;
	// cmpwi cr6,r20,1
	cr6.compare<int32_t>(r20.s32, 1, xer);
	// ble cr6,0x82650d7c
	if (!cr6.gt) goto loc_82650D7C;
	// addi r9,r20,-1
	ctx.r9.s64 = r20.s64 + -1;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82650D64:
	// lbz r8,36(r19)
	ctx.r8.u64 = PPC_LOAD_U8(r19.u32 + 36);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r8,36(r9)
	PPC_STORE_U8(ctx.r9.u32 + 36, ctx.r8.u8);
	// bdnz 0x82650d64
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82650D64;
loc_82650D7C:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r21,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r21.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r17,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r17.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,184(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r18,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r18.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82650dc4
	if (!cr6.eq) goto loc_82650DC4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82650DC4:
	// stw r22,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r22.u32);
loc_82650DC8:
	// stw r18,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r18.u32);
	// lwz r31,144(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
}

__attribute__((alias("__imp__sub_82650DDC"))) PPC_WEAK_FUNC(sub_82650DDC);
PPC_FUNC_IMPL(__imp__sub_82650DDC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9434
	return;
}

__attribute__((alias("__imp__sub_82650DE0"))) PPC_WEAK_FUNC(sub_82650DE0);
PPC_FUNC_IMPL(__imp__sub_82650DE0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,38(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 38);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// rlwinm r11,r11,26,6,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// addi r28,r3,40
	r28.s64 = ctx.r3.s64 + 40;
	// mr r23,r11
	r23.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82650e10
	if (!cr6.eq) goto loc_82650E10;
	// addi r28,r3,52
	r28.s64 = ctx.r3.s64 + 52;
loc_82650E10:
	// lbz r11,37(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 37);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// clrlwi r10,r11,26
	ctx.r10.u64 = r11.u32 & 0x3F;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stb r10,37(r26)
	PPC_STORE_U8(r26.u32 + 37, ctx.r10.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r27,4(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// bl 0x8264fda0
	sub_8264FDA0(ctx, base);
	// lbz r9,38(r26)
	ctx.r9.u64 = PPC_LOAD_U8(r26.u32 + 38);
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r30,r27
	r30.u64 = r27.u64;
	// rlwinm r21,r9,28,30,31
	r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x3;
	// cmpw cr6,r27,r8
	cr6.compare<int32_t>(r27.s32, ctx.r8.s32, xer);
	// bge cr6,0x82650ebc
	if (!cr6.lt) goto loc_82650EBC;
	// rlwinm r25,r23,4,26,27
	r25.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 4) & 0x30;
	// rlwinm r24,r23,6,0,25
	r24.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r29,r27,2,0,29
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_82650E58:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// lwzx r31,r11,r29
	r31.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lbz r10,38(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 38);
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// or r8,r9,r25
	ctx.r8.u64 = ctx.r9.u64 | r25.u64;
	// clrlwi r7,r8,26
	ctx.r7.u64 = ctx.r8.u32 & 0x3F;
	// or r6,r7,r24
	ctx.r6.u64 = ctx.r7.u64 | r24.u64;
	// stb r6,38(r31)
	PPC_STORE_U8(r31.u32 + 38, ctx.r6.u8);
	// beq cr6,0x82650e98
	if (cr6.eq) goto loc_82650E98;
	// extsb r11,r21
	r11.s64 = r21.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82650e98
	if (!cr6.eq) goto loc_82650E98;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8264ed60
	sub_8264ED60(ctx, base);
loc_82650E98:
	// lbz r10,36(r26)
	ctx.r10.u64 = PPC_LOAD_U8(r26.u32 + 36);
	// subf r11,r27,r30
	r11.s64 = r30.s64 - r27.s64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// stb r11,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r11.u8);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r30,r9
	cr6.compare<int32_t>(r30.s32, ctx.r9.s32, xer);
	// blt cr6,0x82650e58
	if (cr6.lt) goto loc_82650E58;
loc_82650EBC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82650EC0"))) PPC_WEAK_FUNC(sub_82650EC0);
PPC_FUNC_IMPL(__imp__sub_82650EC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_82650EC4"))) PPC_WEAK_FUNC(sub_82650EC4);
PPC_FUNC_IMPL(__imp__sub_82650EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82650EC8"))) PPC_WEAK_FUNC(sub_82650EC8);
PPC_FUNC_IMPL(__imp__sub_82650EC8) {
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
	// lbz r11,200(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 200);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82650f20
	if (cr6.eq) goto loc_82650F20;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addic. r30,r11,-1
	xer.ca = r11.u32 > 0;
	r30.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x82650f20
	if (cr0.lt) goto loc_82650F20;
	// rlwinm r31,r30,2,0,29
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82650EF4:
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lbz r10,37(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 37);
	// rlwinm r9,r10,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82650f14
	if (cr6.eq) goto loc_82650F14;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82650de0
	sub_82650DE0(ctx, base);
loc_82650F14:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// bge 0x82650ef4
	if (!cr0.lt) goto loc_82650EF4;
loc_82650F20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82650F24"))) PPC_WEAK_FUNC(sub_82650F24);
PPC_FUNC_IMPL(__imp__sub_82650F24) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82650F28"))) PPC_WEAK_FUNC(sub_82650F28);
PPC_FUNC_IMPL(__imp__sub_82650F28) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r3.u32);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// lbz r28,232(r3)
	r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 232);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// cmpw cr6,r28,r4
	cr6.compare<int32_t>(r28.s32, ctx.r4.s32, xer);
	// beq cr6,0x8265149c
	if (cr6.eq) goto loc_8265149C;
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(r28.s32, 5, xer);
	// bne cr6,0x82650f6c
	if (!cr6.eq) goto loc_82650F6C;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82c5a830
	sub_82C5A830(ctx, base);
	// lwz r3,404(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// bl 0x8263bae0
	sub_8263BAE0(ctx, base);
	// lwz r3,404(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
loc_82650F6C:
	// li r25,0
	r25.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// cmpwi cr6,r24,5
	cr6.compare<int32_t>(r24.s32, 5, xer);
	// beq cr6,0x82650f88
	if (cr6.eq) goto loc_82650F88;
	// cmpwi cr6,r24,4
	cr6.compare<int32_t>(r24.s32, 4, xer);
	// mr r11,r27
	r11.u64 = r27.u64;
	// bne cr6,0x82650f8c
	if (!cr6.eq) goto loc_82650F8C;
loc_82650F88:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_82650F8C:
	// clrlwi r29,r11,24
	r29.u64 = r11.u32 & 0xFF;
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(r28.s32, 5, xer);
	// beq cr6,0x82650fa4
	if (cr6.eq) goto loc_82650FA4;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(r28.s32, 4, xer);
	// mr r11,r27
	r11.u64 = r27.u64;
	// bne cr6,0x82650fa8
	if (!cr6.eq) goto loc_82650FA8;
loc_82650FA4:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_82650FA8:
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82650fd0
	if (cr6.eq) goto loc_82650FD0;
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82650fd0
	if (!cr6.eq) goto loc_82650FD0;
	// lwz r11,504(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8265149c
	if (cr6.eq) goto loc_8265149C;
loc_82650FD0:
	// bl 0x82628558
	sub_82628558(ctx, base);
	// lwz r3,404(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r31,8(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82651454
	if (cr6.eq) goto loc_82651454;
	// addi r11,r28,-5
	r11.s64 = r28.s64 + -5;
	// addi r10,r24,-5
	ctx.r10.s64 = r24.s64 + -5;
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// beq cr6,0x82651454
	if (cr6.eq) goto loc_82651454;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r25.u32);
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r25,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r25.u32);
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r25.u32);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// addi r8,r1,236
	ctx.r8.s64 = ctx.r1.s64 + 236;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// ori r6,r10,1
	ctx.r6.u64 = ctx.r10.u64 | 1;
	// stw r8,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r8.u32);
	// li r5,512
	ctx.r5.s64 = 512;
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r11.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// stb r27,156(r31)
	PPC_STORE_U8(r31.u32 + 156, r27.u8);
	// stb r25,157(r31)
	PPC_STORE_U8(r31.u32 + 157, r25.u8);
	// lwz r3,404(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// bl 0x8264e748
	sub_8264E748(ctx, base);
	// lwz r4,404(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmpwi cr6,r24,5
	cr6.compare<int32_t>(r24.s32, 5, xer);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8265107c
	if (cr6.eq) goto loc_8265107C;
	// bl 0x8264dc28
	sub_8264DC28(ctx, base);
	// b 0x82651080
	goto loc_82651080;
loc_8265107C:
	// bl 0x8264fa50
	sub_8264FA50(ctx, base);
loc_82651080:
	// lwz r4,404(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r11,204(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
	// bl 0x8264d1b8
	sub_8264D1B8(ctx, base);
	// lwz r4,404(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(r28.s32, 5, xer);
	// beq cr6,0x826510c8
	if (cr6.eq) goto loc_826510C8;
	// lwz r11,204(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// ble cr6,0x826510c8
	if (!cr6.gt) goto loc_826510C8;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lbz r10,37(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// rlwimi r10,r27,6,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(r27.u32, 6) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// stb r10,37(r11)
	PPC_STORE_U8(r11.u32 + 37, ctx.r10.u8);
	// lwz r4,404(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
loc_826510C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264db98
	sub_8264DB98(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// stb r29,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r29.u8);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,404(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x8264d5f8
	sub_8264D5F8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r4,404(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264da40
	sub_8264DA40(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,404(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// bl 0x8264fc30
	sub_8264FC30(ctx, base);
	// lis r26,-32768
	r26.s64 = -2147483648;
	// stb r27,157(r31)
	PPC_STORE_U8(r31.u32 + 157, r27.u8);
	// mr r28,r25
	r28.u64 = r25.u64;
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// ble cr6,0x826511cc
	if (!cr6.gt) goto loc_826511CC;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_82651140:
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// lwzx r30,r10,r29
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// stw r9,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8264c7a0
	sub_8264C7A0(ctx, base);
	// lwz r8,148(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	r11.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x826511b0
	if (!cr0.eq) goto loc_826511B0;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826511b0
	if (!cr6.eq) goto loc_826511B0;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82651190
	if (cr6.eq) goto loc_82651190;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_82651190:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x826511b0
	if (!cr6.eq) goto loc_826511B0;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826511b0
	if (cr6.eq) goto loc_826511B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_826511B0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82651140
	if (cr6.lt) goto loc_82651140;
loc_826511CC:
	// cmpwi cr6,r24,5
	cr6.compare<int32_t>(r24.s32, 5, xer);
	// beq cr6,0x82651268
	if (cr6.eq) goto loc_82651268;
	// lwz r11,404(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82c5a8d0
	sub_82C5A8D0(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82651268
	if (!cr6.gt) goto loc_82651268;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r30,r25
	r30.u64 = r25.u64;
	// lwz r4,404(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
loc_82651204:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,232(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 232);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// lbz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
	// beq cr6,0x82651248
	if (cr6.eq) goto loc_82651248;
	// lbz r11,232(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 232);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x82651248
	if (cr6.eq) goto loc_82651248;
	// lwz r11,204(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// lwz r10,204(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 204);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82651248
	if (cr6.eq) goto loc_82651248;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x8264ef68
	sub_8264EF68(ctx, base);
	// lwz r4,404(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
loc_82651248:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// add r11,r10,r30
	r11.u64 = ctx.r10.u64 + r30.u64;
	// blt cr6,0x82651204
	if (cr6.lt) goto loc_82651204;
	// b 0x8265126c
	goto loc_8265126C;
loc_82651268:
	// lwz r4,404(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
loc_8265126C:
	// lwz r11,204(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
	// bl 0x82c59fa8
	sub_82C59FA8(ctx, base);
	// cmpwi cr6,r24,5
	cr6.compare<int32_t>(r24.s32, 5, xer);
	// bne cr6,0x826512ec
	if (!cr6.eq) goto loc_826512EC;
	// lwz r11,404(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lfs f1,464(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 464);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r11,240
	ctx.r4.s64 = r11.s64 + 240;
	// bl 0x82bf6e08
	sub_82BF6E08(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r10,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,404
	ctx.r4.s64 = ctx.r1.s64 + 404;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// bl 0x8265d840
	sub_8265D840(ctx, base);
	// lwz r4,404(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x8265a4d0
	sub_8265A4D0(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// stw r7,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r7.u32);
loc_826512EC:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,404(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826425b8
	sub_826425B8(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// stb r25,156(r31)
	PPC_STORE_U8(r31.u32 + 156, r25.u8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82651344
	if (!cr6.eq) goto loc_82651344;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82651324
	if (cr6.eq) goto loc_82651324;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_82651324:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82651344
	if (!cr6.eq) goto loc_82651344;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82651344
	if (cr6.eq) goto loc_82651344;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_82651344:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8265137c
	if (!cr6.eq) goto loc_8265137C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
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
loc_8265137C:
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r25.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826513bc
	if (!cr6.eq) goto loc_826513BC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826513BC:
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r25.u32);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r26.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,232(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r25,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r25.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826513fc
	if (!cr6.eq) goto loc_826513FC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826513FC:
	// stw r25,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r25.u32);
	// stw r26,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r26.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r25.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8265143c
	if (!cr6.eq) goto loc_8265143C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
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
loc_8265143C:
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r25.u32);
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r26.u32);
	// lwz r3,404(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x828e9454
	return;
loc_82651454:
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// stb r30,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r30.u8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x8264d5f8
	sub_8264D5F8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82651494
	if (cr6.eq) goto loc_82651494;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,404(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826425b8
	sub_826425B8(ctx, base);
loc_82651494:
	// lwz r3,404(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8265149C:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
}

__attribute__((alias("__imp__sub_826514A0"))) PPC_WEAK_FUNC(sub_826514A0);
PPC_FUNC_IMPL(__imp__sub_826514A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_826514A4"))) PPC_WEAK_FUNC(sub_826514A4);
PPC_FUNC_IMPL(__imp__sub_826514A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826514A8"))) PPC_WEAK_FUNC(sub_826514A8);
PPC_FUNC_IMPL(__imp__sub_826514A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x826514c0
	if (!cr6.eq) goto loc_826514C0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
loc_826514C0:
	// li r3,512
	ctx.r3.s64 = 512;
}

__attribute__((alias("__imp__sub_826514C4"))) PPC_WEAK_FUNC(sub_826514C4);
PPC_FUNC_IMPL(__imp__sub_826514C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826514C8"))) PPC_WEAK_FUNC(sub_826514C8);
PPC_FUNC_IMPL(__imp__sub_826514C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r19{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// bgt cr6,0x82651558
	if (cr6.gt) goto loc_82651558;
	// lis r12,-32155
	r12.s64 = -2107310080;
	// rlwinm r0,r3,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,5392
	r12.s64 = r12.s64 + 5392;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82651550;
	case 1:
		goto loc_82651550;
	case 2:
		goto loc_82651550;
	case 3:
		goto loc_82651558;
	case 4:
		goto loc_82651558;
	case 5:
		goto loc_82651558;
	case 6:
		goto loc_82651550;
	case 7:
		goto loc_82651550;
	case 8:
		goto loc_82651550;
	case 9:
		goto loc_82651550;
	case 10:
		goto loc_82651558;
	case 11:
		goto loc_82651558;
	case 12:
		goto loc_82651550;
	case 13:
		goto loc_82651550;
	case 14:
		goto loc_82651550;
	case 15:
		goto loc_82651550;
	default:
		__builtin_unreachable();
	}
	// lwz r19,5456(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5456);
	// lwz r19,5456(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5456);
	// lwz r19,5456(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5456);
	// lwz r19,5464(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5464);
	// lwz r19,5464(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5464);
	// lwz r19,5464(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5464);
	// lwz r19,5456(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5456);
	// lwz r19,5456(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5456);
	// lwz r19,5456(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5456);
	// lwz r19,5456(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5456);
	// lwz r19,5464(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5464);
	// lwz r19,5464(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5464);
	// lwz r19,5456(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5456);
	// lwz r19,5456(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5456);
	// lwz r19,5456(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5456);
	// lwz r19,5456(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5456);
loc_82651550:
	// li r11,1
	r11.s64 = 1;
	// b 0x8265155c
	goto loc_8265155C;
loc_82651558:
	// li r11,0
	r11.s64 = 0;
loc_8265155C:
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
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

__attribute__((alias("__imp__sub_82651574"))) PPC_WEAK_FUNC(sub_82651574);
PPC_FUNC_IMPL(__imp__sub_82651574) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82651578"))) PPC_WEAK_FUNC(sub_82651578);
PPC_FUNC_IMPL(__imp__sub_82651578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r19{};
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
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// bgt cr6,0x8265162c
	if (cr6.gt) goto loc_8265162C;
loc_826515A4:
	// lis r12,-32155
	r12.s64 = -2107310080;
	// rlwinm r0,r3,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,5564
	r12.s64 = r12.s64 + 5564;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82651648;
	case 1:
		goto loc_82651660;
	case 2:
		goto loc_82651660;
	case 3:
		goto loc_8265162C;
	case 4:
		goto loc_8265162C;
	case 5:
		goto loc_8265162C;
	case 6:
		goto loc_82651660;
	case 7:
		goto loc_82651660;
	case 8:
		goto loc_82651648;
	case 9:
		goto loc_82651660;
	case 10:
		goto loc_8265162C;
	case 11:
		goto loc_8265162C;
	case 12:
		goto loc_826515FC;
	case 13:
		goto loc_82651604;
	case 14:
		goto loc_82651660;
	case 15:
		goto loc_82651648;
	default:
		__builtin_unreachable();
	}
	// lwz r19,5704(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5704);
	// lwz r19,5728(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5728);
	// lwz r19,5728(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5728);
	// lwz r19,5676(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5676);
	// lwz r19,5676(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5676);
	// lwz r19,5676(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5676);
	// lwz r19,5728(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5728);
	// lwz r19,5728(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5728);
	// lwz r19,5704(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5704);
	// lwz r19,5728(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5728);
	// lwz r19,5676(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5676);
	// lwz r19,5676(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5676);
	// lwz r19,5628(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5628);
	// lwz r19,5636(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5636);
	// lwz r19,5728(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5728);
	// lwz r19,5704(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5704);
loc_826515FC:
	// lwz r31,24(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// b 0x82651610
	goto loc_82651610;
loc_82651604:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82653e78
	sub_82653E78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82651610:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// ble cr6,0x826515a4
	if (!cr6.gt) goto loc_826515A4;
loc_8265162C:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-12816
	ctx.r3.s64 = r11.s64 + -12816;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82651648:
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82651660:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82651674"))) PPC_WEAK_FUNC(sub_82651674);
PPC_FUNC_IMPL(__imp__sub_82651674) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82651678"))) PPC_WEAK_FUNC(sub_82651678);
PPC_FUNC_IMPL(__imp__sub_82651678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r19{};
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
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// bgt cr6,0x8265172c
	if (cr6.gt) goto loc_8265172C;
loc_826516A4:
	// lis r12,-32155
	r12.s64 = -2107310080;
	// rlwinm r0,r3,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,5820
	r12.s64 = r12.s64 + 5820;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82651748;
	case 1:
		goto loc_82651760;
	case 2:
		goto loc_82651760;
	case 3:
		goto loc_8265172C;
	case 4:
		goto loc_8265172C;
	case 5:
		goto loc_8265172C;
	case 6:
		goto loc_82651760;
	case 7:
		goto loc_82651760;
	case 8:
		goto loc_82651748;
	case 9:
		goto loc_82651760;
	case 10:
		goto loc_8265172C;
	case 11:
		goto loc_8265172C;
	case 12:
		goto loc_826516FC;
	case 13:
		goto loc_82651704;
	case 14:
		goto loc_82651760;
	case 15:
		goto loc_82651748;
	default:
		__builtin_unreachable();
	}
	// lwz r19,5960(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5960);
	// lwz r19,5984(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5984);
	// lwz r19,5984(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5984);
	// lwz r19,5932(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5932);
	// lwz r19,5932(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5932);
	// lwz r19,5932(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5932);
	// lwz r19,5984(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5984);
	// lwz r19,5984(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5984);
	// lwz r19,5960(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5960);
	// lwz r19,5984(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5984);
	// lwz r19,5932(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5932);
	// lwz r19,5932(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5932);
	// lwz r19,5884(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5884);
	// lwz r19,5892(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5892);
	// lwz r19,5984(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5984);
	// lwz r19,5960(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5960);
loc_826516FC:
	// lwz r31,24(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// b 0x82651710
	goto loc_82651710;
loc_82651704:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82653e78
	sub_82653E78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82651710:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// ble cr6,0x826516a4
	if (!cr6.gt) goto loc_826516A4;
loc_8265172C:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-12816
	ctx.r3.s64 = r11.s64 + -12816;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82651748:
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82651760:
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82651774"))) PPC_WEAK_FUNC(sub_82651774);
PPC_FUNC_IMPL(__imp__sub_82651774) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82651778"))) PPC_WEAK_FUNC(sub_82651778);
PPC_FUNC_IMPL(__imp__sub_82651778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r19{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// bgt cr6,0x82651864
	if (cr6.gt) goto loc_82651864;
loc_826517A8:
	// lis r12,-32155
	r12.s64 = -2107310080;
	// rlwinm r0,r3,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,6080
	r12.s64 = r12.s64 + 6080;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82651854;
	case 1:
		goto loc_82651838;
	case 2:
		goto loc_82651838;
	case 3:
		goto loc_82651864;
	case 4:
		goto loc_82651864;
	case 5:
		goto loc_82651864;
	case 6:
		goto loc_82651838;
	case 7:
		goto loc_82651838;
	case 8:
		goto loc_82651854;
	case 9:
		goto loc_82651838;
	case 10:
		goto loc_82651864;
	case 11:
		goto loc_82651864;
	case 12:
		goto loc_82651800;
	case 13:
		goto loc_82651808;
	case 14:
		goto loc_82651838;
	case 15:
		goto loc_82651854;
	default:
		__builtin_unreachable();
	}
	// lwz r19,6228(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6228);
	// lwz r19,6200(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6200);
	// lwz r19,6200(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6200);
	// lwz r19,6244(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6244);
	// lwz r19,6244(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6244);
	// lwz r19,6244(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6244);
	// lwz r19,6200(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6200);
	// lwz r19,6200(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6200);
	// lwz r19,6228(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6228);
	// lwz r19,6200(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6200);
	// lwz r19,6244(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6244);
	// lwz r19,6244(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6244);
	// lwz r19,6144(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6144);
	// lwz r19,6152(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6152);
	// lwz r19,6200(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6200);
	// lwz r19,6228(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6228);
loc_82651800:
	// lwz r31,24(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// b 0x82651814
	goto loc_82651814;
loc_82651808:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82653e70
	sub_82653E70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82651814:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// ble cr6,0x826517a8
	if (!cr6.gt) goto loc_826517A8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82651838:
	// rlwinm r11,r29,6,0,25
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 6) & 0xFFFFFFC0;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// li r10,80
	ctx.r10.s64 = 80;
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// stvx128 v0,r9,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82651854:
	// addi r11,r29,2
	r11.s64 = r29.s64 + 2;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stvx128 v0,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82651864:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82651868"))) PPC_WEAK_FUNC(sub_82651868);
PPC_FUNC_IMPL(__imp__sub_82651868) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8265186C"))) PPC_WEAK_FUNC(sub_8265186C);
PPC_FUNC_IMPL(__imp__sub_8265186C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82651870"))) PPC_WEAK_FUNC(sub_82651870);
PPC_FUNC_IMPL(__imp__sub_82651870) {
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
	PPCRegister f31{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// li r12,-80
	r12.s64 = -80;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r28,r5,16
	r28.s64 = ctx.r5.s64 + 16;
	// addi r27,r5,32
	r27.s64 = ctx.r5.s64 + 32;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r29,r5,48
	r29.s64 = ctx.r5.s64 + 48;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// vxor128 v127,v0,v0
	_mm_store_si128((__m128i*)v127.u8, _mm_setzero_si128());
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lfs f31,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f31.f64 = double(temp.f32);
	// stvx128 v127,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r27
	_mm_store_si128((__m128i*)(base + ((r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f31,0(r5)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f31,20(r5)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// stfs f31,40(r5)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 40, temp.u32);
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// stvx128 v13,r0,r29
	_mm_store_si128((__m128i*)(base + ((r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// bgt cr6,0x82651a10
	if (cr6.gt) goto loc_82651A10;
loc_826518F0:
	// lis r12,-32155
	r12.s64 = -2107310080;
	// rlwinm r0,r3,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,6408
	r12.s64 = r12.s64 + 6408;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82651A00;
	case 1:
		goto loc_826519B4;
	case 2:
		goto loc_826519B4;
	case 3:
		goto loc_82651A10;
	case 4:
		goto loc_82651A10;
	case 5:
		goto loc_82651A10;
	case 6:
		goto loc_826519B4;
	case 7:
		goto loc_826519B4;
	case 8:
		goto loc_82651A00;
	case 9:
		goto loc_826519B4;
	case 10:
		goto loc_82651A10;
	case 11:
		goto loc_82651A10;
	case 12:
		goto loc_82651948;
	case 13:
		goto loc_82651950;
	case 14:
		goto loc_826519B4;
	case 15:
		goto loc_82651A00;
	default:
		__builtin_unreachable();
	}
	// lwz r19,6656(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6656);
	// lwz r19,6580(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6580);
	// lwz r19,6580(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6580);
	// lwz r19,6672(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6672);
	// lwz r19,6672(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6672);
	// lwz r19,6672(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6672);
	// lwz r19,6580(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6580);
	// lwz r19,6580(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6580);
	// lwz r19,6656(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6656);
	// lwz r19,6580(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6580);
	// lwz r19,6672(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6672);
	// lwz r19,6672(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6672);
	// lwz r19,6472(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6472);
	// lwz r19,6480(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6480);
	// lwz r19,6580(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6580);
	// lwz r19,6656(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6656);
loc_82651948:
	// lwz r30,24(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// b 0x8265195c
	goto loc_8265195C;
loc_82651950:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82653e78
	sub_82653E78(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8265195C:
	// vxor128 v127,v127,v127
	_mm_store_si128((__m128i*)v127.u8, _mm_setzero_si128());
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stvx128 v127,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r27
	_mm_store_si128((__m128i*)(base + ((r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f31,20(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f31,40(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// stvx128 v13,r0,r29
	_mm_store_si128((__m128i*)(base + ((r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// ble cr6,0x826518f0
	if (!cr6.gt) goto loc_826518F0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_826519B4:
	// rlwinm r11,r26,6,0,25
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 6) & 0xFFFFFFC0;
	// li r10,16
	ctx.r10.s64 = 16;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r0,r27
	_mm_store_si128((__m128i*)(base + ((r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r0,r29
	_mm_store_si128((__m128i*)(base + ((r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_82651A00:
	// addi r11,r26,2
	r11.s64 = r26.s64 + 2;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v0,r10,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + r30.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r29
	_mm_store_si128((__m128i*)(base + ((r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82651A10:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
}

__attribute__((alias("__imp__sub_82651A20"))) PPC_WEAK_FUNC(sub_82651A20);
PPC_FUNC_IMPL(__imp__sub_82651A20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82651A24"))) PPC_WEAK_FUNC(sub_82651A24);
PPC_FUNC_IMPL(__imp__sub_82651A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82651A28"))) PPC_WEAK_FUNC(sub_82651A28);
PPC_FUNC_IMPL(__imp__sub_82651A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r19{};
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// bgt cr6,0x82651b3c
	if (cr6.gt) goto loc_82651B3C;
loc_82651A58:
	// lis r12,-32155
	r12.s64 = -2107310080;
	// rlwinm r0,r3,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,6768
	r12.s64 = r12.s64 + 6768;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82651B28;
	case 1:
		goto loc_82651AE8;
	case 2:
		goto loc_82651AE8;
	case 3:
		goto loc_82651B3C;
	case 4:
		goto loc_82651B3C;
	case 5:
		goto loc_82651B3C;
	case 6:
		goto loc_82651AE8;
	case 7:
		goto loc_82651AE8;
	case 8:
		goto loc_82651B28;
	case 9:
		goto loc_82651AE8;
	case 10:
		goto loc_82651B3C;
	case 11:
		goto loc_82651B3C;
	case 12:
		goto loc_82651AB0;
	case 13:
		goto loc_82651AB8;
	case 14:
		goto loc_82651AE8;
	case 15:
		goto loc_82651B28;
	default:
		__builtin_unreachable();
	}
	// lwz r19,6952(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6952);
	// lwz r19,6888(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6888);
	// lwz r19,6888(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6888);
	// lwz r19,6972(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6972);
	// lwz r19,6972(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6972);
	// lwz r19,6972(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6972);
	// lwz r19,6888(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6888);
	// lwz r19,6888(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6888);
	// lwz r19,6952(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6952);
	// lwz r19,6888(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6888);
	// lwz r19,6972(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6972);
	// lwz r19,6972(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6972);
	// lwz r19,6832(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6832);
	// lwz r19,6840(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6840);
	// lwz r19,6888(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6888);
	// lwz r19,6952(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6952);
loc_82651AB0:
	// lwz r30,24(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// b 0x82651ac4
	goto loc_82651AC4;
loc_82651AB8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82653e70
	sub_82653E70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82651AC4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// ble cr6,0x82651a58
	if (!cr6.gt) goto loc_82651A58;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82651AE8:
	// rlwinm r8,r29,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 6) & 0xFFFFFFC0;
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// li r9,16
	ctx.r9.s64 = 16;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// li r11,48
	r11.s64 = 48;
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r31,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r8,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r31,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r8,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r31,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r31.u32 + r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r8,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82651B28:
	// addi r11,r29,2
	r11.s64 = r29.s64 + 2;
	// li r10,48
	ctx.r10.s64 = 48;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v0,r31,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r9,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82651B3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82651B40"))) PPC_WEAK_FUNC(sub_82651B40);
PPC_FUNC_IMPL(__imp__sub_82651B40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82651B44"))) PPC_WEAK_FUNC(sub_82651B44);
PPC_FUNC_IMPL(__imp__sub_82651B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82651B48"))) PPC_WEAK_FUNC(sub_82651B48);
PPC_FUNC_IMPL(__imp__sub_82651B48) {
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
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lfs f1,20940(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20940);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82c670d8
	sub_82C670D8(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stvx128 v13,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r3,-32229
	ctx.r3.s64 = -2112159744;
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// li r11,-1
	r11.s64 = -1;
	// addi r28,r6,-12160
	r28.s64 = ctx.r6.s64 + -12160;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// lfs f0,-25600(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -25600);
	f0.f64 = double(temp.f32);
	// lis r30,-32255
	r30.s64 = -2113863680;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r11,10
	r11.s64 = 10;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lfs f13,-12728(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -12728);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r9,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// addi r8,r1,320
	ctx.r8.s64 = ctx.r1.s64 + 320;
	// addi r3,r3,13984
	ctx.r3.s64 = ctx.r3.s64 + 13984;
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r27,252(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// stfs f13,220(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// addi r4,r27,13
	ctx.r4.s64 = r27.s64 + 13;
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// rlwinm r6,r4,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// stfs f0,152(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// addi r7,r8,-8
	ctx.r7.s64 = ctx.r8.s64 + -8;
	// addi r8,r9,-8
	ctx.r8.s64 = ctx.r9.s64 + -8;
	// lbzx r11,r6,r10
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 2);
	// add r5,r11,r9
	ctx.r5.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// lwz r31,2472(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2472);
loc_82651C58:
	// ldu r11,8(r8)
	ea = 8 + ctx.r8.u32;
	r11.u64 = PPC_LOAD_U64(ea);
	ctx.r8.u32 = ea;
	// stdu r11,8(r7)
	ea = 8 + ctx.r7.u32;
	PPC_STORE_U64(ea, r11.u64);
	ctx.r7.u32 = ea;
	// bdnz 0x82651c58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82651C58;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lfs f0,9104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9104);
	f0.f64 = double(temp.f32);
	// stfs f0,328(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// bl 0x82646bf8
	sub_82646BF8(ctx, base);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mtctr r31
	ctr.u64 = r31.u64;
	// stw r10,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r10.u32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82651cbc
	if (cr6.eq) goto loc_82651CBC;
	// lwz r31,236(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x82c56398
	sub_82C56398(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x828e9464
	return;
loc_82651CBC:
	// bl 0x82c56398
	sub_82C56398(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
}

__attribute__((alias("__imp__sub_82651CC8"))) PPC_WEAK_FUNC(sub_82651CC8);
PPC_FUNC_IMPL(__imp__sub_82651CC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82651CCC"))) PPC_WEAK_FUNC(sub_82651CCC);
PPC_FUNC_IMPL(__imp__sub_82651CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82651CD0"))) PPC_WEAK_FUNC(sub_82651CD0);
PPC_FUNC_IMPL(__imp__sub_82651CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// lfs f0,-12728(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12728);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82651CEC"))) PPC_WEAK_FUNC(sub_82651CEC);
PPC_FUNC_IMPL(__imp__sub_82651CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82651CF0"))) PPC_WEAK_FUNC(sub_82651CF0);
PPC_FUNC_IMPL(__imp__sub_82651CF0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,27012
	ctx.r9.s64 = r11.s64 + 27012;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82651d3c
	if (cr6.eq) goto loc_82651D3C;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,64
	ctx.r5.s64 = 64;
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
loc_82651D3C:
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

__attribute__((alias("__imp__sub_82651D50"))) PPC_WEAK_FUNC(sub_82651D50);
PPC_FUNC_IMPL(__imp__sub_82651D50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82651D54"))) PPC_WEAK_FUNC(sub_82651D54);
PPC_FUNC_IMPL(__imp__sub_82651D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82651D58"))) PPC_WEAK_FUNC(sub_82651D58);
PPC_FUNC_IMPL(__imp__sub_82651D58) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,292
	ctx.r4.s64 = 292;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82655230
	sub_82655230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82651D68"))) PPC_WEAK_FUNC(sub_82651D68);
PPC_FUNC_IMPL(__imp__sub_82651D68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// extsb r11,r4
	r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82651d88
	if (cr6.eq) goto loc_82651D88;
	// li r11,6
	r11.s64 = 6;
	// li r10,48
	ctx.r10.s64 = 48;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82651D88:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82651D98"))) PPC_WEAK_FUNC(sub_82651D98);
PPC_FUNC_IMPL(__imp__sub_82651D98) {
	PPC_FUNC_PROLOGUE();
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82651DA0"))) PPC_WEAK_FUNC(sub_82651DA0);
PPC_FUNC_IMPL(__imp__sub_82651DA0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x828e9414
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r4,80
	ctx.r4.s64 = 80;
	// li r29,144
	r29.s64 = 144;
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// li r31,32
	r31.s64 = 32;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r28,16
	r28.s64 = 16;
	// lis r27,-32229
	r27.s64 = -2112159744;
	// vxor v12,v0,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_setzero_si128());
	// stvx128 v13,r3,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r3,96
	ctx.r4.s64 = ctx.r3.s64 + 96;
	// lvx128 v11,r0,r5
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r30,0
	r30.s64 = 0;
	// stvx128 v11,r3,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,1
	ctx.r5.s64 = 1;
	// stvx128 v12,r11,r28
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r31
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,2
	r11.s64 = 2;
	// lfs f0,-25600(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lvx128 v10,r0,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v10,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f11,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f0,f11
	f0.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82651e40
	if (!cr6.lt) goto loc_82651E40;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r30,1
	r30.s64 = 1;
loc_82651E40:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x82651e4c
	if (!cr6.lt) goto loc_82651E4C;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82651E4C:
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// rlwinm r29,r5,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// addi r5,r3,256
	ctx.r5.s64 = ctx.r3.s64 + 256;
	// addi r8,r11,7632
	ctx.r8.s64 = r11.s64 + 7632;
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r3,208
	r11.s64 = ctx.r3.s64 + 208;
	// li r28,320
	r28.s64 = 320;
	// lfsx f0,r30,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + ctx.r4.u32);
	f0.f64 = double(temp.f32);
	// stfsx f0,r29,r10
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + ctx.r10.u32, temp.u32);
	// lfsx f13,r29,r4
	temp.u32 = PPC_LOAD_U32(r29.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfsx f12,r30,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + ctx.r10.u32, temp.u32);
	// lvx128 v12,r0,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r0,r10
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v3,v4,v4
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v4.f32), 0xEF));
	// vrsqrtefp v13,v3
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v3.f32))));
	// vmulfp128 v9,v3,v12
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v12.f32)));
	// vcmpeqfp v5,v0,v3
	_mm_store_ps(ctx.v5.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v10,v13,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v6,v9,v10,v12
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v6,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v13,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v12,v9,v11,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v12,v13,v0,v5
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vspltw v2,v12,0
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vmulfp128 v1,v4,v2
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v2.f32)));
	// vor v29,v1,v1
	_mm_store_si128((__m128i*)v29.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// stvx128 v1,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v31,r0,r4
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v30,v31,135
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v31.u32), 0x78));
	// vpermwi128 v28,v31,99
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v31.u32), 0x9C));
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// vpermwi128 v27,v29,99
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v29.u32), 0x9C));
	// vpermwi128 v26,v29,135
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v29.u32), 0x78));
	// vmulfp128 v25,v30,v27
	_mm_store_ps(v25.f32, _mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(v27.f32)));
	// vmulfp128 v24,v28,v26
	_mm_store_ps(v24.f32, _mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(v26.f32)));
	// vsubfp v23,v24,v25
	_mm_store_ps(v23.f32, _mm_sub_ps(_mm_load_ps(v24.f32), _mm_load_ps(v25.f32)));
	// stvx128 v23,r4,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v23.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,0
	ctx.r4.s64 = 0;
	// lvx128 v22,r0,r6
	simd::store_shuffled(v22, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v21,v22,v22
	_mm_store_ps(v21.f32, _mm_dp_ps(_mm_load_ps(v22.f32), _mm_load_ps(v22.f32), 0xEF));
	// vrsqrtefp v13,v21
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v21.f32))));
	// stvx128 v22,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v22.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v9,v21,v12
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(v21.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v10,v13,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// li r6,2
	ctx.r6.s64 = 2;
	// vcmpeqfp v6,v0,v21
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v21.f32)));
	// vnmsubfp v8,v9,v10,v12
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v8,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v13,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v12,v9,v11,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v12,v13,v0,v6
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vspltw v20,v12,0
	_mm_store_si128((__m128i*)v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vmulfp128 v19,v22,v20
	_mm_store_ps(v19.f32, _mm_mul_ps(_mm_load_ps(v22.f32), _mm_load_ps(v20.f32)));
	// stvx128 v19,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v19.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v18,r0,r7
	simd::store_shuffled(v18, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v17,v18,v18
	_mm_store_ps(v17.f32, _mm_dp_ps(_mm_load_ps(v18.f32), _mm_load_ps(v18.f32), 0xEF));
	// vrsqrtefp v13,v17
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v17.f32))));
	// stvx128 v18,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v18.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v9,v17,v12
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(v17.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v10,v13,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// li r7,1
	ctx.r7.s64 = 1;
	// vcmpeqfp v6,v0,v17
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v17.f32)));
	// vnmsubfp v7,v9,v10,v12
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v7,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v13,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v12,v9,v11,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v12,v13,v0,v6
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vspltw v16,v12,0
	_mm_store_si128((__m128i*)v16.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vmulfp128 v15,v18,v16
	_mm_store_ps(v15.f32, _mm_mul_ps(_mm_load_ps(v18.f32), _mm_load_ps(v16.f32)));
	// stvx128 v15,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v15.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v15,r3,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v15.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f10,212(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,208(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f9.f64 = double(temp.f32);
	// fabs f13,f10
	ctx.f13.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fabs f0,f9
	f0.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// lfs f11,216(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f11.f64 = double(temp.f32);
	// fabs f12,f11
	ctx.f12.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82651fbc
	if (!cr6.lt) goto loc_82651FBC;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82651FBC:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x82651fc8
	if (!cr6.lt) goto loc_82651FC8;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
loc_82651FC8:
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vxor v12,v13,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_setzero_si128());
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r5,16
	ctx.r7.s64 = ctx.r5.s64 + 16;
	// vor v11,v0,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// li r30,336
	r30.s64 = 336;
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfsx f0,r6,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// stfsx f0,r4,r10
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, temp.u32);
	// lfsx f13,r4,r11
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfsx f12,r6,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// lvx128 v4,r0,r10
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v3,v4,v4
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v4.f32), 0xEF));
	// vrsqrtefp v13,v3
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v3.f32))));
	// lvx128 v12,r0,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v8,v3,v12
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v12.f32)));
	// vcmpeqfp v6,v0,v3
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v9,v13,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v5,v8,v9,v12
	_mm_store_ps(ctx.v5.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v5,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v9,v13,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v12,v8,v9,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v12,v13,v0,v6
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vspltw v2,v12,0
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vmulfp128 v1,v4,v2
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v2.f32)));
	// stvx128 v1,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v31,r0,r9
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vor v30,v31,v31
	_mm_store_si128((__m128i*)v30.u8, _mm_load_si128((__m128i*)v31.u8));
	// stvx128 v31,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v29,v30,v30
	_mm_store_ps(v29.f32, _mm_dp_ps(_mm_load_ps(v30.f32), _mm_load_ps(v30.f32), 0xEF));
	// vrsqrtefp v13,v29
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v29.f32))));
	// vcmpeqfp v8,v0,v29
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v29.f32)));
	// vmulfp128 v10,v29,v12
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v0,v13,v13
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v7,v10,v0,v12
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v13,v7,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v13,v0,v0
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v12,v10,v13,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v11,v8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vspltw v28,v13,0
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v27,v30,v28
	_mm_store_ps(v27.f32, _mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(v28.f32)));
	// vor v26,v27,v27
	_mm_store_si128((__m128i*)v26.u8, _mm_load_si128((__m128i*)v27.u8));
	// stvx128 v27,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v26,r3,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v26.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v25,r0,r11
	simd::store_shuffled(v25, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v24,r0,r10
	simd::store_shuffled(v24, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v23,v24,99
	_mm_store_si128((__m128i*)v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v24.u32), 0x9C));
	// vpermwi128 v22,v25,135
	_mm_store_si128((__m128i*)v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v25.u32), 0x78));
	// vpermwi128 v21,v24,135
	_mm_store_si128((__m128i*)v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v24.u32), 0x78));
	// vpermwi128 v20,v25,99
	_mm_store_si128((__m128i*)v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v25.u32), 0x9C));
	// vmulfp128 v19,v22,v23
	_mm_store_ps(v19.f32, _mm_mul_ps(_mm_load_ps(v22.f32), _mm_load_ps(v23.f32)));
	// vmulfp128 v18,v20,v21
	_mm_store_ps(v18.f32, _mm_mul_ps(_mm_load_ps(v20.f32), _mm_load_ps(v21.f32)));
	// vsubfp v17,v18,v19
	_mm_store_ps(v17.f32, _mm_sub_ps(_mm_load_ps(v18.f32), _mm_load_ps(v19.f32)));
	// stvx128 v17,r11,r31
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v17.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v16,r0,r5
	simd::store_shuffled(v16, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v15,r0,r7
	simd::store_shuffled(v15, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v14,v15,99
	_mm_store_si128((__m128i*)v14.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v15.u32), 0x9C));
	// vpermwi128 v63,v16,135
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v16.u32), 0x78));
	// vpermwi128 v62,v15,135
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v15.u32), 0x78));
	// vpermwi128 v61,v16,99
	_mm_store_si128((__m128i*)v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v16.u32), 0x9C));
	// vmulfp128 v60,v63,v14
	_mm_store_ps(v60.f32, _mm_mul_ps(_mm_load_ps(v63.f32), _mm_load_ps(v14.f32)));
	// vmulfp128 v59,v61,v62
	_mm_store_ps(v59.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(v62.f32)));
	// vsubfp128 v58,v59,v60
	_mm_store_ps(v58.f32, _mm_sub_ps(_mm_load_ps(v59.f32), _mm_load_ps(v60.f32)));
	// stvx128 v58,r5,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_826520DC"))) PPC_WEAK_FUNC(sub_826520DC);
PPC_FUNC_IMPL(__imp__sub_826520DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826520E0"))) PPC_WEAK_FUNC(sub_826520E0);
PPC_FUNC_IMPL(__imp__sub_826520E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// bl 0x828ea8f8
	sub_828EA8F8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r31,336
	r11.s64 = r31.s64 + 336;
	// addi r10,r31,320
	ctx.r10.s64 = r31.s64 + 320;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f13,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// li r6,256
	ctx.r6.s64 = 256;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r5,288
	ctx.r5.s64 = 288;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v11,v0,135
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v7,v0,99
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vor v9,v13,v13
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vpermwi128 v10,v13,99
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// lvlx v6,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fnmsubs f0,f0,f0,f13
	f0.f64 = double(float(-(f0.f64 * f0.f64 - ctx.f13.f64)));
	// vpermwi128 v8,v13,135
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// vspltw v12,v6,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), 0xFF));
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(f0.f64)));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// vmulfp128 v5,v11,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v4,v7,v8
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v8.f32)));
	// vsubfp v0,v4,v5
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v5.f32)));
	// lvlx v3,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v2,v3,0
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), 0xFF));
	// vmulfp128 v13,v9,v2
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v2.f32)));
	// vmaddfp v0,v0,v12,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r31,r6
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v1,v0,135
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v31,v0,99
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// lvx128 v30,r0,r11
	simd::store_shuffled(v30, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v29,v30,99
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v30.u32), 0x9C));
	// vpermwi128 v28,v30,135
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v30.u32), 0x78));
	// vmulfp128 v27,v1,v29
	_mm_store_ps(v27.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(v29.f32)));
	// vmulfp128 v26,v31,v28
	_mm_store_ps(v26.f32, _mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(v28.f32)));
	// vsubfp v25,v26,v27
	_mm_store_ps(v25.f32, _mm_sub_ps(_mm_load_ps(v26.f32), _mm_load_ps(v27.f32)));
	// stvx128 v25,r31,r5
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v25.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826521A4"))) PPC_WEAK_FUNC(sub_826521A4);
PPC_FUNC_IMPL(__imp__sub_826521A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826521A8"))) PPC_WEAK_FUNC(sub_826521A8);
PPC_FUNC_IMPL(__imp__sub_826521A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,14004
	ctx.r10.s64 = r11.s64 + 14004;
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r5,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r5.u16);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// sth r9,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r9.u16);
	// li r10,7
	ctx.r10.s64 = 7;
	// sth r8,160(r3)
	PPC_STORE_U16(ctx.r3.u32 + 160, ctx.r8.u16);
	// sth r7,172(r3)
	PPC_STORE_U16(ctx.r3.u32 + 172, ctx.r7.u16);
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// sth r10,184(r3)
	PPC_STORE_U16(ctx.r3.u32 + 184, ctx.r10.u16);
	// li r4,4
	ctx.r4.s64 = 4;
	// sth r10,188(r3)
	PPC_STORE_U16(ctx.r3.u32 + 188, ctx.r10.u16);
	// addi r11,r11,176
	r11.s64 = r11.s64 + 176;
	// li r10,12
	ctx.r10.s64 = 12;
	// sth r4,192(r3)
	PPC_STORE_U16(ctx.r3.u32 + 192, ctx.r4.u16);
	// cmplw cr6,r11,r11
	cr6.compare<uint32_t>(r11.u32, r11.u32, xer);
	// sth r10,304(r3)
	PPC_STORE_U16(ctx.r3.u32 + 304, ctx.r10.u16);
	// bge cr6,0x82652224
	if (!cr6.lt) goto loc_82652224;
	// subf. r10,r11,r11
	ctx.r10.s64 = r11.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// beq 0x82652224
	if (cr0.eq) goto loc_82652224;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8265221C:
	// stbu r8,1(r11)
	ea = 1 + r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	r11.u32 = ea;
	// bdnz 0x8265221c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8265221C;
loc_82652224:
	// stb r9,190(r3)
	PPC_STORE_U8(ctx.r3.u32 + 190, ctx.r9.u8);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stb r5,186(r3)
	PPC_STORE_U8(ctx.r3.u32 + 186, ctx.r5.u8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// stb r6,162(r3)
	PPC_STORE_U8(ctx.r3.u32 + 162, ctx.r6.u8);
	// stb r6,174(r3)
	PPC_STORE_U8(ctx.r3.u32 + 174, ctx.r6.u8);
	// addi r10,r3,208
	ctx.r10.s64 = ctx.r3.s64 + 208;
	// li r7,16
	ctx.r7.s64 = 16;
	// vxor v11,v11,v11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_setzero_si128());
	// lfs f13,8740(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8740);
	ctx.f13.f64 = double(temp.f32);
	// li r8,32
	ctx.r8.s64 = 32;
	// lfs f12,3792(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3792);
	ctx.f12.f64 = double(temp.f32);
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// lfs f0,21036(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 21036);
	f0.f64 = double(temp.f32);
	// addi r9,r3,256
	ctx.r9.s64 = ctx.r3.s64 + 256;
	// stfs f0,176(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// stfs f0,180(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// vxor v10,v12,v12
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_setzero_si128());
	// stfs f13,164(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// vxor v9,v13,v13
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_setzero_si128());
	// stfs f12,168(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// addi r5,r11,48
	ctx.r5.s64 = r11.s64 + 48;
	// stvx128 v11,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vxor v8,v0,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_setzero_si128());
	// stvx128 v11,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 + 96;
	// lfs f0,-25600(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,208(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// stfs f0,228(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// stfs f0,248(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stvx128 v10,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r9,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r9,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r10,48
	ctx.r9.s64 = ctx.r10.s64 + 48;
	// stfs f0,256(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// stfs f0,276(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 276, temp.u32);
	// stfs f0,296(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 296, temp.u32);
	// stvx128 v9,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r11,r7
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r11,r8
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lvx128 v7,r0,r5
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vxor v6,v7,v7
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_setzero_si128());
	// stvx128 v6,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v8,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v8,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v8,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,96(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// lvx128 v5,r0,r9
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vxor v4,v5,v5
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_setzero_si128());
	// stvx128 v4,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r6,306(r3)
	PPC_STORE_U8(ctx.r3.u32 + 306, ctx.r6.u8);
}

__attribute__((alias("__imp__sub_82652310"))) PPC_WEAK_FUNC(sub_82652310);
PPC_FUNC_IMPL(__imp__sub_82652310) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652314"))) PPC_WEAK_FUNC(sub_82652314);
PPC_FUNC_IMPL(__imp__sub_82652314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82652318"))) PPC_WEAK_FUNC(sub_82652318);
PPC_FUNC_IMPL(__imp__sub_82652318) {
	PPC_FUNC_PROLOGUE();
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
	PPCVRegister v32{};
	PPCVRegister v33{};
	PPCVRegister v34{};
	PPCVRegister v35{};
	PPCVRegister v36{};
	PPCVRegister v37{};
	PPCVRegister v38{};
	PPCVRegister v39{};
	PPCVRegister v40{};
	PPCVRegister v41{};
	PPCVRegister v42{};
	PPCVRegister v43{};
	PPCVRegister v44{};
	PPCVRegister v45{};
	PPCVRegister v46{};
	PPCVRegister v47{};
	PPCVRegister v48{};
	PPCVRegister v49{};
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
	// mflr r12
	// bl 0x828e93fc
	// li r10,48
	ctx.r10.s64 = 48;
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r30,r4,16
	r30.s64 = ctx.r4.s64 + 16;
	// lvx128 v11,r0,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r29,r4,32
	r29.s64 = ctx.r4.s64 + 32;
	// lvx128 v30,r0,r7
	simd::store_shuffled(v30, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lis r11,-32250
	r11.s64 = -2113536000;
	// vmsum3fp128 v29,v30,v30
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v29.f32, _mm_dp_ps(_mm_load_ps(v30.f32), _mm_load_ps(v30.f32), 0xEF));
	// lvx128 v28,r0,r9
	simd::store_shuffled(v28, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,-112
	ctx.r7.s64 = ctx.r1.s64 + -112;
	// lvx128 v27,r4,r10
	simd::store_shuffled(v27, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r27,r11,7632
	r27.s64 = r11.s64 + 7632;
	// vsubfp v26,v0,v27
	_mm_store_ps(v26.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v27.f32)));
	// lvx128 v25,r0,r30
	simd::store_shuffled(v25, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v24,r0,r29
	simd::store_shuffled(v24, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// lis r11,-32250
	r11.s64 = -2113536000;
	// vmsum3fp128 v23,v28,v28
	_mm_store_ps(v23.f32, _mm_dp_ps(_mm_load_ps(v28.f32), _mm_load_ps(v28.f32), 0xEF));
	// li r25,80
	r25.s64 = 80;
	// addi r9,r11,7520
	ctx.r9.s64 = r11.s64 + 7520;
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r7,r5,16
	ctx.r7.s64 = ctx.r5.s64 + 16;
	// vxor v22,v0,v0
	_mm_store_si128((__m128i*)v22.u8, _mm_setzero_si128());
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// addi r6,r5,32
	ctx.r6.s64 = ctx.r5.s64 + 32;
	// vspltisw v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0x0)));
	// li r24,144
	r24.s64 = 144;
	// lvx128 v5,r0,r9
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r31,r3,32
	r31.s64 = ctx.r3.s64 + 32;
	// li r23,16
	r23.s64 = 16;
	// li r26,32
	r26.s64 = 32;
	// lis r22,-32229
	r22.s64 = -2112159744;
	// vmsum3fp128 v19,v11,v26
	_mm_store_ps(v19.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(v26.f32), 0xEF));
	// addi r11,r3,96
	r11.s64 = ctx.r3.s64 + 96;
	// vmsum3fp128 v21,v25,v26
	_mm_store_ps(v21.f32, _mm_dp_ps(_mm_load_ps(v25.f32), _mm_load_ps(v26.f32), 0xEF));
	// vrsqrtefp v12,v29
	_mm_store_ps(ctx.v12.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v29.f32))));
	// vmsum3fp128 v20,v24,v26
	_mm_store_ps(v20.f32, _mm_dp_ps(_mm_load_ps(v24.f32), _mm_load_ps(v26.f32), 0xEF));
	// vmulfp128 v6,v29,v0
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v1,v13,v29
	_mm_store_ps(ctx.v1.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v29.f32)));
	// vrsqrtefp v11,v23
	_mm_store_ps(ctx.v11.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v23.f32))));
	// vmulfp128 v18,v23,v0
	_mm_store_ps(v18.f32, _mm_mul_ps(_mm_load_ps(v23.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v31,v13,v23
	_mm_store_ps(v31.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v23.f32)));
	// vmulfp128 v9,v12,v12
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vmrghw v17,v21,v5
	_mm_store_si128((__m128i*)v17.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)v21.u32)));
	// vmrghw v16,v19,v20
	_mm_store_si128((__m128i*)v16.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v20.u32), _mm_load_si128((__m128i*)v19.u32)));
	// vmulfp128 v7,v11,v11
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v11.f32)));
	// vmrghw v15,v16,v17
	_mm_store_si128((__m128i*)v15.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v17.u32), _mm_load_si128((__m128i*)v16.u32)));
	// vnmsubfp v2,v6,v9,v0
	_mm_store_ps(ctx.v2.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// stvx128 v15,r3,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v15.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v14,r0,r7
	simd::store_shuffled(v14, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vnmsubfp v10,v18,v7,v0
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(v18.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// lvx128 v9,r0,r9
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r5,r10
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r3,112
	ctx.r10.s64 = ctx.r3.s64 + 112;
	// lvx128 v62,r0,r28
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v61,v62,v63
	_mm_store_ps(v61.f32, _mm_sub_ps(_mm_load_ps(v62.f32), _mm_load_ps(v63.f32)));
	// lvx128 v58,r0,r6
	simd::store_shuffled(v58, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v59,v14,v61
	_mm_store_ps(v59.f32, _mm_dp_ps(_mm_load_ps(v14.f32), _mm_load_ps(v61.f32), 0xEF));
	// vmaddfp v12,v12,v2,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v60,r0,r5
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vmaddfp v11,v11,v10,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmsum3fp128 v55,v60,v61
	_mm_store_ps(v55.f32, _mm_dp_ps(_mm_load_ps(v60.f32), _mm_load_ps(v61.f32), 0xEF));
	// vmulfp128 v10,v12,v12
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vmrghw128 v56,v59,v9
	_mm_store_si128((__m128i*)v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)v59.u32)));
	// vmulfp128 v9,v11,v11
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v11.f32)));
	// vmsum3fp128 v57,v58,v61
	_mm_store_ps(v57.f32, _mm_dp_ps(_mm_load_ps(v58.f32), _mm_load_ps(v61.f32), 0xEF));
	// vnmsubfp v8,v6,v10,v0
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v10,v18,v9,v0
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(v18.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmrghw128 v54,v55,v57
	_mm_store_si128((__m128i*)v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v57.u32), _mm_load_si128((__m128i*)v55.u32)));
	// vmrghw128 v53,v54,v56
	_mm_store_si128((__m128i*)v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v56.u32), _mm_load_si128((__m128i*)v54.u32)));
	// vmaddfp v0,v12,v8,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v12,v11,v10,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v53,r3,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v22,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v22.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v22,r31,r23
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v22.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsel v11,v0,v13,v1
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vsel v0,v12,v13,v31
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vspltw128 v52,v11,0
	_mm_store_si128((__m128i*)v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vspltw128 v51,v0,0
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vmulfp128 v0,v30,v52
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(v52.f32)));
	// vmulfp128 v12,v28,v51
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(v51.f32)));
	// stvx128 v22,r31,r26
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v22.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r24,0
	r24.s64 = 0;
	// lfs f0,-25600(r22)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r22.u32 + -25600);
	f0.f64 = double(temp.f32);
	// li r28,1
	r28.s64 = 1;
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// li r25,2
	r25.s64 = 2;
	// stfs f0,52(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lvx128 v49,r0,r6
	simd::store_shuffled(v49, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v47,r0,r5
	simd::store_shuffled(v47, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v48,r0,r8
	simd::store_shuffled(v48, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v50,r0,r7
	simd::store_shuffled(v50, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v44,v50,v48
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v44.f32, _mm_dp_ps(_mm_load_ps(v50.f32), _mm_load_ps(v48.f32), 0xEF));
	// vmsum3fp128 v46,v47,v48
	_mm_store_ps(v46.f32, _mm_dp_ps(_mm_load_ps(v47.f32), _mm_load_ps(v48.f32), 0xEF));
	// vmrghw128 v42,v44,v11
	_mm_store_si128((__m128i*)v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)v44.u32)));
	// vmsum3fp128 v45,v49,v48
	_mm_store_ps(v45.f32, _mm_dp_ps(_mm_load_ps(v49.f32), _mm_load_ps(v48.f32), 0xEF));
	// vmrghw128 v43,v46,v45
	_mm_store_si128((__m128i*)v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v45.u32), _mm_load_si128((__m128i*)v46.u32)));
	// vmrghw128 v41,v43,v42
	_mm_store_si128((__m128i*)v41.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v42.u32), _mm_load_si128((__m128i*)v43.u32)));
	// stvx128 v41,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,100(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fabs f0,f12
	f0.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f12,f11
	ctx.f12.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x826524e0
	if (!cr6.lt) goto loc_826524E0;
	// li r28,0
	r28.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r24,1
	r24.s64 = 1;
loc_826524E0:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x826524ec
	if (!cr6.lt) goto loc_826524EC;
	// mr r25,r24
	r25.u64 = r24.u64;
loc_826524EC:
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// vxor v10,v11,v11
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_setzero_si128());
	// rlwinm r24,r28,2,0,29
	r24.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// vor v9,v13,v13
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// li r23,128
	r23.s64 = 128;
	// addi r8,r3,208
	ctx.r8.s64 = ctx.r3.s64 + 208;
	// addi r31,r3,256
	r31.s64 = ctx.r3.s64 + 256;
	// stvx128 v10,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r22,320
	r22.s64 = 320;
	// addi r28,r8,16
	r28.s64 = ctx.r8.s64 + 16;
	// li r21,336
	r21.s64 = 336;
	// lfsx f0,r11,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + r25.u32);
	f0.f64 = double(temp.f32);
	// stfsx f0,r24,r10
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r24.u32 + ctx.r10.u32, temp.u32);
	// lfsx f13,r11,r24
	temp.u32 = PPC_LOAD_U32(r11.u32 + r24.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfsx f12,r25,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r25.u32 + ctx.r10.u32, temp.u32);
	// lvx128 v10,r0,r27
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r0,r10
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v3,v4,v4
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v4.f32), 0xEF));
	// vrsqrtefp v11,v3
	_mm_store_ps(ctx.v11.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v3.f32))));
	// vmulfp128 v7,v3,v10
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v10.f32)));
	// vcmpeqfp v6,v13,v3
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v8,v11,v11
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v11.f32)));
	// vnmsubfp v5,v7,v8,v10
	_mm_store_ps(ctx.v5.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v11,v5,v11
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v11,v13,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v10,v7,v11,v10
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v10,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v11,v13,v9,v6
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vspltw v2,v11,0
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v1,v4,v2
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v2.f32)));
	// stvx128 v1,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor v30,v1,v1
	_mm_store_si128((__m128i*)v30.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vpermwi128 v28,v30,99
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v30.u32), 0x9C));
	// vpermwi128 v27,v30,135
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v30.u32), 0x78));
	// lvx128 v31,r0,r11
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v29,v31,135
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v31.u32), 0x78));
	// vpermwi128 v26,v31,99
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v31.u32), 0x9C));
	// vmulfp128 v25,v29,v28
	_mm_store_ps(v25.f32, _mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(v28.f32)));
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// vmulfp128 v24,v26,v27
	_mm_store_ps(v24.f32, _mm_mul_ps(_mm_load_ps(v26.f32), _mm_load_ps(v27.f32)));
	// vsubfp v23,v24,v25
	_mm_store_ps(v23.f32, _mm_sub_ps(_mm_load_ps(v24.f32), _mm_load_ps(v25.f32)));
	// stvx128 v23,r3,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v23.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v21,r0,r30
	simd::store_shuffled(v21, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v20,r0,r4
	simd::store_shuffled(v20, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v22,r0,r29
	simd::store_shuffled(v22, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v17,v22,v0
	_mm_store_ps(v17.f32, _mm_dp_ps(_mm_load_ps(v22.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v19,v20,v0
	_mm_store_ps(v19.f32, _mm_dp_ps(_mm_load_ps(v20.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v18,v21,v0
	_mm_store_ps(v18.f32, _mm_dp_ps(_mm_load_ps(v21.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vmrghw v15,v19,v17
	_mm_store_si128((__m128i*)v15.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v17.u32), _mm_load_si128((__m128i*)v19.u32)));
	// vmrghw v16,v18,v13
	_mm_store_si128((__m128i*)v16.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)v18.u32)));
	// vmrghw v14,v15,v16
	_mm_store_si128((__m128i*)v14.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v16.u32), _mm_load_si128((__m128i*)v15.u32)));
	// stvx128 v14,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v14.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r6
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r0,r5
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r7
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v58,v63,v0
	_mm_store_ps(v58.f32, _mm_dp_ps(_mm_load_ps(v63.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v60,v61,v0
	_mm_store_ps(v60.f32, _mm_dp_ps(_mm_load_ps(v61.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vmrghw128 v56,v58,v13
	_mm_store_si128((__m128i*)v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)v58.u32)));
	// vmsum3fp128 v59,v62,v0
	_mm_store_ps(v59.f32, _mm_dp_ps(_mm_load_ps(v62.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vmrghw128 v57,v60,v59
	_mm_store_si128((__m128i*)v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v59.u32), _mm_load_si128((__m128i*)v60.u32)));
	// vmrghw128 v55,v57,v56
	_mm_store_si128((__m128i*)v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v56.u32), _mm_load_si128((__m128i*)v57.u32)));
	// stvx128 v55,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v55,r3,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v53,r0,r30
	simd::store_shuffled(v53, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v52,r0,r29
	simd::store_shuffled(v52, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v54,r0,r4
	simd::store_shuffled(v54, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v49,v54,v12
	_mm_store_ps(v49.f32, _mm_dp_ps(_mm_load_ps(v54.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// vmsum3fp128 v51,v52,v12
	_mm_store_ps(v51.f32, _mm_dp_ps(_mm_load_ps(v52.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// vmsum3fp128 v50,v53,v12
	_mm_store_ps(v50.f32, _mm_dp_ps(_mm_load_ps(v53.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// vmrghw128 v47,v49,v51
	_mm_store_si128((__m128i*)v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v51.u32), _mm_load_si128((__m128i*)v49.u32)));
	// vmrghw128 v48,v50,v0
	_mm_store_si128((__m128i*)v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)v50.u32)));
	// vmrghw128 v46,v47,v48
	_mm_store_si128((__m128i*)v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v48.u32), _mm_load_si128((__m128i*)v47.u32)));
	// stvx128 v46,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v45,r0,r5
	simd::store_shuffled(v45, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v44,r0,r6
	simd::store_shuffled(v44, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v43,r0,r7
	simd::store_shuffled(v43, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v41,v44,v12
	_mm_store_ps(v41.f32, _mm_dp_ps(_mm_load_ps(v44.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// vmsum3fp128 v42,v43,v12
	_mm_store_ps(v42.f32, _mm_dp_ps(_mm_load_ps(v43.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// vmsum3fp128 v39,v45,v12
	_mm_store_ps(v39.f32, _mm_dp_ps(_mm_load_ps(v45.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// vmrghw128 v40,v42,v0
	_mm_store_si128((__m128i*)v40.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)v42.u32)));
	// vmrghw128 v38,v39,v41
	_mm_store_si128((__m128i*)v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v41.u32), _mm_load_si128((__m128i*)v39.u32)));
	// vmrghw128 v37,v38,v40
	_mm_store_si128((__m128i*)v37.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v40.u32), _mm_load_si128((__m128i*)v38.u32)));
	// stvx128 v37,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v37.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v37,r3,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v37.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v36,r0,r28
	simd::store_shuffled(v36, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v35,r0,r8
	simd::store_shuffled(v35, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v34,v36,99
	_mm_store_si128((__m128i*)v34.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v36.u32), 0x9C));
	// vpermwi128 v33,v35,135
	_mm_store_si128((__m128i*)v33.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v35.u32), 0x78));
	// vpermwi128 v32,v35,99
	_mm_store_si128((__m128i*)v32.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v35.u32), 0x9C));
	// vpermwi128 v0,v36,135
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v36.u32), 0x78));
	// vmulfp128 v13,v33,v34
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v33.f32), _mm_load_ps(v34.f32)));
	// vmulfp128 v12,v32,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(v32.f32), _mm_load_ps(ctx.v0.f32)));
	// vsubfp v11,v12,v13
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v11,r8,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r11
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v8,v9,99
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x9C));
	// lvx128 v10,r0,r31
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v6,v9,135
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x78));
	// vpermwi128 v7,v10,135
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x78));
	// vpermwi128 v5,v10,99
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x9C));
	// vmulfp128 v4,v7,v8
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v3,v5,v6
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v6.f32)));
	// vsubfp v2,v3,v4
	_mm_store_ps(ctx.v2.f32, _mm_sub_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v4.f32)));
	// stvx128 v2,r31,r26
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_826526A4"))) PPC_WEAK_FUNC(sub_826526A4);
PPC_FUNC_IMPL(__imp__sub_826526A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_826526A8"))) PPC_WEAK_FUNC(sub_826526A8);
PPC_FUNC_IMPL(__imp__sub_826526A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// addi r11,r4,208
	r11.s64 = ctx.r4.s64 + 208;
	// addi r10,r4,256
	ctx.r10.s64 = ctx.r4.s64 + 256;
	// addi r6,r7,-12816
	ctx.r6.s64 = ctx.r7.s64 + -12816;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lvx128 v11,r11,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v10,r11,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lvx128 v9,r10,r8
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lvx128 v8,r10,r9
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stvx128 v13,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stvx128 v12,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,83
	ctx.r3.s64 = ctx.r1.s64 + 83;
	// stvx128 v9,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v8,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f31,-31496(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31496);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82628b70
	sub_82628B70(ctx, base);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x826527c8
	if (cr6.eq) goto loc_826527C8;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x82628b70
	sub_82628B70(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826527c8
	if (cr6.eq) goto loc_826527C8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82628b70
	sub_82628B70(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826527c8
	if (cr6.eq) goto loc_826527C8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x82628b70
	sub_82628B70(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826527c8
	if (cr6.eq) goto loc_826527C8;
	// lfs f0,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 164);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,168(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x826527cc
	if (!cr6.gt) goto loc_826527CC;
loc_826527C8:
	// li r11,0
	r11.s64 = 0;
loc_826527CC:
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826527EC"))) PPC_WEAK_FUNC(sub_826527EC);
PPC_FUNC_IMPL(__imp__sub_826527EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826527F0"))) PPC_WEAK_FUNC(sub_826527F0);
PPC_FUNC_IMPL(__imp__sub_826527F0) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8265281c
	if (cr6.eq) goto loc_8265281C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_8265281C:
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8265282c
	if (cr6.eq) goto loc_8265282C;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8265282C:
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
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

__attribute__((alias("__imp__sub_82652844"))) PPC_WEAK_FUNC(sub_82652844);
PPC_FUNC_IMPL(__imp__sub_82652844) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652848"))) PPC_WEAK_FUNC(sub_82652848);
PPC_FUNC_IMPL(__imp__sub_82652848) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82655230
	sub_82655230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82652858"))) PPC_WEAK_FUNC(sub_82652858);
PPC_FUNC_IMPL(__imp__sub_82652858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,8
	r11.s64 = 8;
	// li r10,72
	ctx.r10.s64 = 72;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265286C"))) PPC_WEAK_FUNC(sub_8265286C);
PPC_FUNC_IMPL(__imp__sub_8265286C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82652870"))) PPC_WEAK_FUNC(sub_82652870);
PPC_FUNC_IMPL(__imp__sub_82652870) {
	PPC_FUNC_PROLOGUE();
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652878"))) PPC_WEAK_FUNC(sub_82652878);
PPC_FUNC_IMPL(__imp__sub_82652878) {
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
	// lwz r3,172(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,14076
	ctx.r10.s64 = r11.s64 + 14076;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x826528a8
	if (cr6.eq) goto loc_826528A8;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_826528A8:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-13048
	ctx.r10.s64 = r11.s64 + -13048;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826528C4"))) PPC_WEAK_FUNC(sub_826528C4);
PPC_FUNC_IMPL(__imp__sub_826528C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826528C8"))) PPC_WEAK_FUNC(sub_826528C8);
PPC_FUNC_IMPL(__imp__sub_826528C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
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
	PPCVRegister v49{};
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
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r10,80
	ctx.r10.s64 = 80;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r4,144
	ctx.r4.s64 = 144;
	// vspltisw v5,0
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_set1_epi32(int(0x0)));
	// lis r31,-32250
	r31.s64 = -2113536000;
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// addi r31,r31,7632
	r31.s64 = r31.s64 + 7632;
	// stvx128 v0,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// lvx128 v4,r0,r5
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v4,r3,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,32
	ctx.r4.s64 = 32;
	// lvx128 v3,r0,r6
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v2,v3,v3
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v3.f32), 0xEF));
	// vrsqrtefp v0,v2
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v2.f32))));
	// stvx128 v3,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r31
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v10,v2,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r6,r3,96
	ctx.r6.s64 = ctx.r3.s64 + 96;
	// vcmpeqfp v6,v5,v2
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v2.f32)));
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
	// vsel v13,v0,v5,v6
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vspltw v1,v13,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v31,v3,v1
	_mm_store_ps(v31.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v1.f32)));
	// stvx128 v31,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v30,r0,r8
	simd::store_shuffled(v30, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vor v29,v30,v30
	_mm_store_si128((__m128i*)v29.u8, _mm_load_si128((__m128i*)v30.u8));
	// vmsum3fp128 v28,v29,v29
	_mm_store_ps(v28.f32, _mm_dp_ps(_mm_load_ps(v29.f32), _mm_load_ps(v29.f32), 0xEF));
	// stvx128 v30,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r31
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp v0,v28
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v28.f32))));
	// vmulfp128 v10,v28,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v7,v5,v28
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(v28.f32)));
	// vnmsubfp v9,v10,v11,v13
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v10,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v5,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vspltw v27,v13,0
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v26,v29,v27
	_mm_store_ps(v26.f32, _mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(v27.f32)));
	// vor v25,v26,v26
	_mm_store_si128((__m128i*)v25.u8, _mm_load_si128((__m128i*)v26.u8));
	// stvx128 v26,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v26.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v24,r0,r11
	simd::store_shuffled(v24, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v23,v24,135
	_mm_store_si128((__m128i*)v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v24.u32), 0x78));
	// vpermwi128 v22,v25,99
	_mm_store_si128((__m128i*)v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v25.u32), 0x9C));
	// vpermwi128 v21,v25,135
	_mm_store_si128((__m128i*)v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v25.u32), 0x78));
	// vpermwi128 v20,v24,99
	_mm_store_si128((__m128i*)v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v24.u32), 0x9C));
	// vmulfp128 v19,v23,v22
	_mm_store_ps(v19.f32, _mm_mul_ps(_mm_load_ps(v23.f32), _mm_load_ps(v22.f32)));
	// vmulfp128 v18,v20,v21
	_mm_store_ps(v18.f32, _mm_mul_ps(_mm_load_ps(v20.f32), _mm_load_ps(v21.f32)));
	// vsubfp v17,v18,v19
	_mm_store_ps(v17.f32, _mm_sub_ps(_mm_load_ps(v18.f32), _mm_load_ps(v19.f32)));
	// stvx128 v17,r11,r4
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v17.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r6,16
	r11.s64 = ctx.r6.s64 + 16;
	// lvx128 v16,r0,r7
	simd::store_shuffled(v16, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v15,v16,v16
	_mm_store_ps(v15.f32, _mm_dp_ps(_mm_load_ps(v16.f32), _mm_load_ps(v16.f32), 0xEF));
	// vrsqrtefp v0,v15
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v15.f32))));
	// stvx128 v16,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v16.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r31
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v9,v15,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(v15.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v8,v0,v0
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v7,v5,v15
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(v15.f32)));
	// vnmsubfp v6,v9,v8,v13
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v6,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v10,v0,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v9,v10,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v5,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vspltw v14,v13,0
	_mm_store_si128((__m128i*)v14.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v63,v16,v14
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(v16.f32), _mm_load_ps(v14.f32)));
	// stvx128 v63,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r9
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vor128 v61,v62,v62
	_mm_store_si128((__m128i*)v61.u8, _mm_load_si128((__m128i*)v62.u8));
	// vmsum3fp128 v60,v61,v61
	_mm_store_ps(v60.f32, _mm_dp_ps(_mm_load_ps(v61.f32), _mm_load_ps(v61.f32), 0xEF));
	// stvx128 v62,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrsqrtefp128 v0,v60
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v60.f32))));
	// lvx128 v13,r0,r31
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v10,v60,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(v60.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v8,v5,v60
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(v60.f32)));
	// vnmsubfp v7,v10,v11,v13
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v7,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v10,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v5,v8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vspltw128 v59,v13,0
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v58,v61,v59
	_mm_store_ps(v58.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(v59.f32)));
	// stvx128 v58,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v57,v58,v58
	_mm_store_si128((__m128i*)v57.u8, _mm_load_si128((__m128i*)v58.u8));
	// vpermwi128 v56,v57,99
	_mm_store_si128((__m128i*)v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x9C));
	// vpermwi128 v51,v57,135
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x78));
	// lvx128 v55,r0,r6
	simd::store_shuffled(v55, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v54,v55,135
	_mm_store_si128((__m128i*)v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0x78));
	// vpermwi128 v53,v55,99
	_mm_store_si128((__m128i*)v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0x9C));
	// vmulfp128 v52,v54,v56
	_mm_store_ps(v52.f32, _mm_mul_ps(_mm_load_ps(v54.f32), _mm_load_ps(v56.f32)));
	// vmulfp128 v50,v53,v51
	_mm_store_ps(v50.f32, _mm_mul_ps(_mm_load_ps(v53.f32), _mm_load_ps(v51.f32)));
	// vsubfp128 v49,v50,v52
	_mm_store_ps(v49.f32, _mm_sub_ps(_mm_load_ps(v50.f32), _mm_load_ps(v52.f32)));
	// stvx128 v49,r6,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_82652A70"))) PPC_WEAK_FUNC(sub_82652A70);
PPC_FUNC_IMPL(__imp__sub_82652A70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652A74"))) PPC_WEAK_FUNC(sub_82652A74);
PPC_FUNC_IMPL(__imp__sub_82652A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82652A78"))) PPC_WEAK_FUNC(sub_82652A78);
PPC_FUNC_IMPL(__imp__sub_82652A78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,-31496(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31496);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82628b70
	sub_82628B70(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82652aec
	if (cr6.eq) goto loc_82652AEC;
	// addi r4,r30,96
	ctx.r4.s64 = r30.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x82628b70
	sub_82628B70(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82652aec
	if (cr6.eq) goto loc_82652AEC;
	// lfs f0,200(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 200);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,204(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82652af0
	if (!cr6.gt) goto loc_82652AF0;
loc_82652AEC:
	// li r11,0
	r11.s64 = 0;
loc_82652AF0:
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82652B10"))) PPC_WEAK_FUNC(sub_82652B10);
PPC_FUNC_IMPL(__imp__sub_82652B10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652B14"))) PPC_WEAK_FUNC(sub_82652B14);
PPC_FUNC_IMPL(__imp__sub_82652B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82652B18"))) PPC_WEAK_FUNC(sub_82652B18);
PPC_FUNC_IMPL(__imp__sub_82652B18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// extsb r11,r5
	r11.s64 = ctx.r5.s8;
	// stb r5,162(r3)
	PPC_STORE_U8(ctx.r3.u32 + 162, ctx.r5.u8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,178(r3)
	PPC_STORE_U8(ctx.r3.u32 + 178, ctx.r9.u8);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,48(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652B68"))) PPC_WEAK_FUNC(sub_82652B68);
PPC_FUNC_IMPL(__imp__sub_82652B68) {
	PPC_FUNC_PROLOGUE();
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
	// mflr r12
	// bl 0x828e940c
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r10,14076
	ctx.r9.s64 = ctx.r10.s64 + 14076;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,11
	ctx.r7.s64 = 11;
	// sth r31,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, r31.u16);
	// addi r6,r1,-80
	ctx.r6.s64 = ctx.r1.s64 + -80;
	// sth r7,160(r3)
	PPC_STORE_U16(ctx.r3.u32 + 160, ctx.r7.u16);
	// li r7,10
	ctx.r7.s64 = 10;
	// stb r8,162(r3)
	PPC_STORE_U8(ctx.r3.u32 + 162, ctx.r8.u8);
	// li r30,13
	r30.s64 = 13;
	// sth r11,164(r3)
	PPC_STORE_U16(ctx.r3.u32 + 164, r11.u16);
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// sth r11,166(r3)
	PPC_STORE_U16(ctx.r3.u32 + 166, r11.u16);
	// li r9,7
	ctx.r9.s64 = 7;
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// sth r7,176(r3)
	PPC_STORE_U16(ctx.r3.u32 + 176, ctx.r7.u16);
	// stb r8,178(r3)
	PPC_STORE_U8(ctx.r3.u32 + 178, ctx.r8.u8);
	// li r4,16
	ctx.r4.s64 = 16;
	// sth r30,184(r3)
	PPC_STORE_U16(ctx.r3.u32 + 184, r30.u16);
	// li r5,32
	ctx.r5.s64 = 32;
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// addi r30,r1,-80
	r30.s64 = ctx.r1.s64 + -80;
	// sth r9,188(r3)
	PPC_STORE_U16(ctx.r3.u32 + 188, ctx.r9.u16);
	// addi r7,r10,48
	ctx.r7.s64 = ctx.r10.s64 + 48;
	// sth r9,192(r3)
	PPC_STORE_U16(ctx.r3.u32 + 192, ctx.r9.u16);
	// li r29,9
	r29.s64 = 9;
	// addi r9,r3,96
	ctx.r9.s64 = ctx.r3.s64 + 96;
	// sth r29,196(r3)
	PPC_STORE_U16(ctx.r3.u32 + 196, r29.u16);
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r29,-32255
	r29.s64 = -2113863680;
	// stvx128 v0,r10,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r9,48
	ctx.r10.s64 = ctx.r9.s64 + 48;
	// lfs f0,-25600(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -25600);
	f0.f64 = double(temp.f32);
	// lis r28,-32255
	r28.s64 = -2113863680;
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lis r27,-32249
	r27.s64 = -2113470464;
	// stfs f0,52(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// li r26,64
	r26.s64 = 64;
	// stfs f0,72(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// li r25,3
	r25.s64 = 3;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// li r30,68
	r30.s64 = 68;
	// lvx128 v12,r0,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vxor v11,v12,v12
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_setzero_si128());
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// stvx128 v11,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,-12728(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -12728);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r3,16
	ctx.r6.s64 = ctx.r3.s64 + 16;
	// stvx128 v13,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r9,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r9,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,96(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// lvx128 v10,r0,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vxor v9,v10,v10
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_setzero_si128());
	// stvx128 v9,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r11,198(r3)
	PPC_STORE_U8(ctx.r3.u32 + 198, r11.u8);
	// lfs f0,21212(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 21212);
	f0.f64 = double(temp.f32);
	// stb r11,179(r3)
	PPC_STORE_U8(ctx.r3.u32 + 179, r11.u8);
	// stfs f0,200(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// lfs f0,21036(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f13,204(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// stfs f0,180(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stb r11,162(r3)
	PPC_STORE_U8(ctx.r3.u32 + 162, r11.u8);
	// stfs f0,168(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, r11.u32);
	// stb r11,163(r3)
	PPC_STORE_U8(ctx.r3.u32 + 163, r11.u8);
	// sth r26,164(r3)
	PPC_STORE_U16(ctx.r3.u32 + 164, r26.u16);
	// sth r30,166(r3)
	PPC_STORE_U16(ctx.r3.u32 + 166, r30.u16);
	// stb r11,186(r3)
	PPC_STORE_U8(ctx.r3.u32 + 186, r11.u8);
	// stb r25,187(r3)
	PPC_STORE_U8(ctx.r3.u32 + 187, r25.u8);
	// stb r8,190(r3)
	PPC_STORE_U8(ctx.r3.u32 + 190, ctx.r8.u8);
	// stb r31,194(r3)
	PPC_STORE_U8(ctx.r3.u32 + 194, r31.u8);
}

__attribute__((alias("__imp__sub_82652CB4"))) PPC_WEAK_FUNC(sub_82652CB4);
PPC_FUNC_IMPL(__imp__sub_82652CB4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82652CB8"))) PPC_WEAK_FUNC(sub_82652CB8);
PPC_FUNC_IMPL(__imp__sub_82652CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lvx128 v11,r0,r7
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lis r11,-32250
	r11.s64 = -2113536000;
	// vmsum3fp128 v10,v11,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v11.f32), 0xEF));
	// vspltisw v12,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r11,7632
	ctx.r10.s64 = r11.s64 + 7632;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stvx128 v11,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// vrsqrtefp v13,v10
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v10.f32))));
	// vmulfp128 v8,v10,v0
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v6,v12,v10
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v9,v13,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v5,v8,v9,v0
	_mm_store_ps(ctx.v5.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v5,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v10,v13,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v9,v8,v10,v0
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v9,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v10,v13,v12,v6
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vspltw v9,v10,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// vmulfp128 v8,v11,v9
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v8,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f11,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fabs f13,f11
	ctx.f13.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82652d60
	if (!cr6.lt) goto loc_82652D60;
	// li r11,0
	r11.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82652D60:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x82652d6c
	if (!cr6.lt) goto loc_82652D6C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82652D6C:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvx128 v5,r0,r4
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vxor v13,v13,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// addi r28,r1,112
	r28.s64 = ctx.r1.s64 + 112;
	// addi r26,r1,80
	r26.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stvx128 v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfsx f0,r6,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfsx f0,r3,r11
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + r11.u32, temp.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// lfsx f13,r3,r10
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfsx f12,r6,r9
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, temp.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// lvx128 v13,r0,r26
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r26.u32) & ~0xF), VectorMaskL));
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v8,r0,r27
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v11,v8,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// vpermwi128 v2,v13,135
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// vmulfp128 v10,v11,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)));
	// vpermwi128 v1,v13,99
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// vrsqrtefp v13,v11
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v11.f32))));
	// vcmpeqfp v7,v12,v11
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)));
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lvx128 v4,r4,r7
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r4,r8
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r31,64
	ctx.r10.s64 = r31.s64 + 64;
	// addi r6,r9,7520
	ctx.r6.s64 = ctx.r9.s64 + 7520;
	// vmulfp128 v11,v13,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v6,v10,v11,v0
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v6,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v13,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v0,v10,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v13,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v13,v0,v12,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vspltw v31,v13,0
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v0,v8,v31
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(v31.f32)));
	// vpermwi128 v30,v0,99
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v29,v0,135
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vmulfp128 v28,v2,v30
	_mm_store_ps(v28.f32, _mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(v30.f32)));
	// vmulfp128 v27,v1,v29
	_mm_store_ps(v27.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(v29.f32)));
	// vsubfp v26,v27,v28
	_mm_store_ps(v26.f32, _mm_sub_ps(_mm_load_ps(v27.f32), _mm_load_ps(v28.f32)));
	// stvx128 v26,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v26.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82652E48:
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// vmsum3fp128 v12,v4,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v11,v3,v13
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// vmsum3fp128 v10,v5,v13
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// vmrghw v9,v12,v0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrghw v8,v10,v11
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrghw v7,v8,v9
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// stvx128 v7,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// bdnz 0x82652e48
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82652E48;
	// li r9,3
	ctx.r9.s64 = 3;
	// lvx128 v13,r0,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r30,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r30.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v11,r30,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r30.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82652E94:
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// vmsum3fp128 v9,v12,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v8,v11,v10
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// vmsum3fp128 v7,v13,v10
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// vmrghw v6,v9,v0
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrghw v5,v7,v8
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmrghw v4,v5,v6
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	// stvx128 v4,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// bdnz 0x82652e94
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82652E94;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82628128
	sub_82628128(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82628128
	sub_82628128(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82652EE4"))) PPC_WEAK_FUNC(sub_82652EE4);
PPC_FUNC_IMPL(__imp__sub_82652EE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82652EE8"))) PPC_WEAK_FUNC(sub_82652EE8);
PPC_FUNC_IMPL(__imp__sub_82652EE8) {
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
	// lwz r3,172(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,14076
	ctx.r10.s64 = r11.s64 + 14076;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82652f20
	if (cr6.eq) goto loc_82652F20;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_82652F20:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r9,r11,-13048
	ctx.r9.s64 = r11.s64 + -13048;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82652f58
	if (cr6.eq) goto loc_82652F58;
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
loc_82652F58:
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

__attribute__((alias("__imp__sub_82652F70"))) PPC_WEAK_FUNC(sub_82652F70);
PPC_FUNC_IMPL(__imp__sub_82652F70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652F74"))) PPC_WEAK_FUNC(sub_82652F74);
PPC_FUNC_IMPL(__imp__sub_82652F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82652F78"))) PPC_WEAK_FUNC(sub_82652F78);
PPC_FUNC_IMPL(__imp__sub_82652F78) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,148
	ctx.r4.s64 = 148;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82655230
	sub_82655230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82652F88"))) PPC_WEAK_FUNC(sub_82652F88);
PPC_FUNC_IMPL(__imp__sub_82652F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// extsb r11,r4
	r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82652fa8
	if (cr6.eq) goto loc_82652FA8;
	// li r11,1
	r11.s64 = 1;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82652FA8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652FB8"))) PPC_WEAK_FUNC(sub_82652FB8);
PPC_FUNC_IMPL(__imp__sub_82652FB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652FC0"))) PPC_WEAK_FUNC(sub_82652FC0);
PPC_FUNC_IMPL(__imp__sub_82652FC0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r9,80
	ctx.r9.s64 = 80;
	// li r8,144
	ctx.r8.s64 = 144;
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// li r7,16
	ctx.r7.s64 = 16;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r4,32
	ctx.r4.s64 = 32;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// vxor v12,v0,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_setzero_si128());
	// stvx128 v13,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r3,96
	ctx.r9.s64 = ctx.r3.s64 + 96;
	// lvx128 v11,r0,r5
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lis r5,21845
	ctx.r5.s64 = 1431633920;
	// stvx128 v11,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r30,0
	r30.s64 = 0;
	// stvx128 v12,r11,r7
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ori r31,r5,21846
	r31.u64 = ctx.r5.u64 | 21846;
	// stvx128 v12,r11,r4
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f0,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lbz r8,162(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 162);
	// lvx128 v10,r0,r6
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// rotlwi r11,r8,4
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 4);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// mulhw r7,r10,r31
	ctx.r7.s64 = (int64_t(ctx.r10.s32) * int64_t(r31.s32)) >> 32;
	// stvx128 v10,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// fabs f0,f11
	f0.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 + ctx.r6.u64;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bge cr6,0x82653094
	if (!cr6.lt) goto loc_82653094;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r30,1
	r30.s64 = 1;
loc_82653094:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x826530a0
	if (!cr6.lt) goto loc_826530A0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_826530A0:
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// vspltisw v12,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_set1_epi32(int(0x0)));
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r3,r4,7632
	ctx.r3.s64 = ctx.r4.s64 + 7632;
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mulhw r7,r8,r31
	ctx.r7.s64 = (int64_t(ctx.r8.s32) * int64_t(r31.s32)) >> 32;
	// lfsx f0,r6,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// vor v9,v12,v12
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// stfsx f0,r5,r10
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// lfsx f13,r5,r11
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfsx f12,r6,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// lvx128 v13,r0,r3
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r10
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v5,v6,v6
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v6.f32), 0xEF));
	// vrsqrtefp v0,v5
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v5.f32))));
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// vmulfp128 v10,v5,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp v8,v12,v5
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v5.f32)));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
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
	// vsel v13,v0,v9,v8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vspltw v4,v13,0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v3,v6,v4
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v4.f32)));
	// vor v2,v3,v3
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// stvx128 v3,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v1,r0,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v31,v1,135
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0x78));
	// vpermwi128 v30,v2,99
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0x9C));
	// vpermwi128 v29,v2,135
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0x78));
	// vpermwi128 v28,v1,99
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0x9C));
	// vmulfp128 v27,v31,v30
	_mm_store_ps(v27.f32, _mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(v30.f32)));
	// vmulfp128 v26,v28,v29
	_mm_store_ps(v26.f32, _mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(v29.f32)));
	// vsubfp v25,v26,v27
	_mm_store_ps(v25.f32, _mm_sub_ps(_mm_load_ps(v26.f32), _mm_load_ps(v27.f32)));
	// stvx128 v25,r5,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v25.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_82653168"))) PPC_WEAK_FUNC(sub_82653168);
PPC_FUNC_IMPL(__imp__sub_82653168) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265316C"))) PPC_WEAK_FUNC(sub_8265316C);
PPC_FUNC_IMPL(__imp__sub_8265316C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82653170"))) PPC_WEAK_FUNC(sub_82653170);
PPC_FUNC_IMPL(__imp__sub_82653170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,-31496(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31496);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82628b70
	sub_82628B70(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826531d4
	if (cr6.eq) goto loc_826531D4;
	// addi r4,r30,96
	ctx.r4.s64 = r30.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x82628b70
	sub_82628B70(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x826531d8
	if (!cr6.eq) goto loc_826531D8;
loc_826531D4:
	// li r11,0
	r11.s64 = 0;
loc_826531D8:
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826531F8"))) PPC_WEAK_FUNC(sub_826531F8);
PPC_FUNC_IMPL(__imp__sub_826531F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826531FC"))) PPC_WEAK_FUNC(sub_826531FC);
PPC_FUNC_IMPL(__imp__sub_826531FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82653200"))) PPC_WEAK_FUNC(sub_82653200);
PPC_FUNC_IMPL(__imp__sub_82653200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r9,14148
	ctx.r4.s64 = ctx.r9.s64 + 14148;
	// sth r5,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r5.u16);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// sth r5,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r5.u16);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// addi r4,r1,-16
	ctx.r4.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,48
	ctx.r9.s64 = r11.s64 + 48;
	// li r5,7
	ctx.r5.s64 = 7;
	// sth r5,160(r3)
	PPC_STORE_U16(ctx.r3.u32 + 160, ctx.r5.u16);
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r7
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r8
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// addi r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 + 96;
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// stfs f0,72(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vxor v12,v13,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_setzero_si128());
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vxor v11,v0,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_setzero_si128());
	// stvx128 v12,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,96(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v9,v10,v10
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_setzero_si128());
	// stvx128 v9,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r6,162(r3)
	PPC_STORE_U8(ctx.r3.u32 + 162, ctx.r6.u8);
}

__attribute__((alias("__imp__sub_826532B0"))) PPC_WEAK_FUNC(sub_826532B0);
PPC_FUNC_IMPL(__imp__sub_826532B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826532B4"))) PPC_WEAK_FUNC(sub_826532B4);
PPC_FUNC_IMPL(__imp__sub_826532B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826532B8"))) PPC_WEAK_FUNC(sub_826532B8);
PPC_FUNC_IMPL(__imp__sub_826532B8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// bl 0x828e9418
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x82628128
	sub_82628128(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82628128
	sub_82628128(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// addi r9,r31,96
	ctx.r9.s64 = r31.s64 + 96;
	// addi r5,r6,7520
	ctx.r5.s64 = ctx.r6.s64 + 7520;
	// lis r4,21845
	ctx.r4.s64 = 1431633920;
	// lfs f0,-25600(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f0.f64 = double(temp.f32);
	// li r30,0
	r30.s64 = 0;
	// stvx128 v0,r11,r10
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ori r6,r4,21846
	ctx.r6.u64 = ctx.r4.u64 | 21846;
	// stvx128 v0,r11,r7
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,1
	ctx.r4.s64 = 1;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,2
	ctx.r3.s64 = 2;
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// lvx128 v13,r29,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r29,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r29.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r28
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r29
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lbz r8,162(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 162);
	// rotlwi r11,r8,4
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 4);
	// vmsum3fp128 v9,v11,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// vmsum3fp128 v8,v13,v10
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// vmsum3fp128 v7,v12,v10
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// mulhw r7,r10,r6
	ctx.r7.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32)) >> 32;
	// vmrghw v6,v8,v0
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// vmrghw v5,v7,v9
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// rlwinm r5,r7,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// vmrghw v4,v5,v6
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r7,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r7.s64;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// stvx128 v4,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f0,f11
	f0.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x826533d4
	if (!cr6.lt) goto loc_826533D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r30,1
	r30.s64 = 1;
loc_826533D4:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x826533e0
	if (!cr6.lt) goto loc_826533E0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_826533E0:
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// vspltisw v12,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_set1_epi32(int(0x0)));
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r3,r3,7632
	ctx.r3.s64 = ctx.r3.s64 + 7632;
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mulhw r7,r8,r6
	ctx.r7.s64 = (int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32)) >> 32;
	// lfsx f0,r5,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// vor v9,v12,v12
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// stfsx f0,r4,r10
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, temp.u32);
	// lfsx f13,r4,r11
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfsx f12,r5,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// lvx128 v13,r0,r3
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r10
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v5,v6,v6
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v6.f32), 0xEF));
	// vrsqrtefp v0,v5
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v5.f32))));
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// vmulfp128 v10,v5,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp v7,v12,v5
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v5.f32)));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v8,v10,v11,v13
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v10,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v9,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vspltw v4,v13,0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v3,v6,v4
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v4.f32)));
	// vor v31,v3,v3
	_mm_store_si128((__m128i*)v31.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// stvx128 v3,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v2,r0,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v1,v2,135
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0x78));
	// vpermwi128 v30,v31,99
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v31.u32), 0x9C));
	// vpermwi128 v29,v31,135
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v31.u32), 0x78));
	// vpermwi128 v27,v2,99
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0x9C));
	// vmulfp128 v28,v1,v30
	_mm_store_ps(v28.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(v30.f32)));
	// vmulfp128 v26,v27,v29
	_mm_store_ps(v26.f32, _mm_mul_ps(_mm_load_ps(v27.f32), _mm_load_ps(v29.f32)));
	// vsubfp v25,v26,v28
	_mm_store_ps(v25.f32, _mm_sub_ps(_mm_load_ps(v26.f32), _mm_load_ps(v28.f32)));
	// stvx128 v25,r5,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v25.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826534A4"))) PPC_WEAK_FUNC(sub_826534A4);
PPC_FUNC_IMPL(__imp__sub_826534A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826534A8"))) PPC_WEAK_FUNC(sub_826534A8);
PPC_FUNC_IMPL(__imp__sub_826534A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,168(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826534B0"))) PPC_WEAK_FUNC(sub_826534B0);
PPC_FUNC_IMPL(__imp__sub_826534B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,168(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826534B8"))) PPC_WEAK_FUNC(sub_826534B8);
PPC_FUNC_IMPL(__imp__sub_826534B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// slw r10,r11,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r4.u8 & 0x3F));
	// stb r10,166(r3)
	PPC_STORE_U8(ctx.r3.u32 + 166, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826534C8"))) PPC_WEAK_FUNC(sub_826534C8);
PPC_FUNC_IMPL(__imp__sub_826534C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,166(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 166);
	// rlwinm r3,r11,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826534D4"))) PPC_WEAK_FUNC(sub_826534D4);
PPC_FUNC_IMPL(__imp__sub_826534D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826534D8"))) PPC_WEAK_FUNC(sub_826534D8);
PPC_FUNC_IMPL(__imp__sub_826534D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// extsb r11,r4
	r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826534f8
	if (cr6.eq) goto loc_826534F8;
	// li r11,5
	r11.s64 = 5;
	// li r10,40
	ctx.r10.s64 = 40;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_826534F8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653508"))) PPC_WEAK_FUNC(sub_82653508);
PPC_FUNC_IMPL(__imp__sub_82653508) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,156
	ctx.r4.s64 = 156;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82655230
	sub_82655230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82653518"))) PPC_WEAK_FUNC(sub_82653518);
PPC_FUNC_IMPL(__imp__sub_82653518) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653520"))) PPC_WEAK_FUNC(sub_82653520);
PPC_FUNC_IMPL(__imp__sub_82653520) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	PPCRegister temp{};
	// mflr r12
	// bl 0x828e941c
	// li r9,80
	ctx.r9.s64 = 80;
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r8,144
	ctx.r8.s64 = 144;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// addi r4,r10,7632
	ctx.r4.s64 = ctx.r10.s64 + 7632;
	// stvx128 v13,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// lvx128 v12,r0,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r5,0
	ctx.r5.s64 = 0;
	// stvx128 v12,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,1
	ctx.r9.s64 = 1;
	// lvx128 v5,r0,r6
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v4,v5,v5
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v5.f32), 0xEF));
	// vrsqrtefp v13,v4
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v4.f32))));
	// stvx128 v5,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v9,v4,v12
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v10,v13,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// li r8,2
	ctx.r8.s64 = 2;
	// vcmpeqfp v6,v0,v4
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v4.f32)));
	// vnmsubfp v7,v9,v10,v12
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v7,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v13,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v12,v9,v11,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v12,v13,v0,v6
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vspltw v3,v12,0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vmulfp128 v2,v5,v3
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v3.f32)));
	// stvx128 v2,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f11,32(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f0,f11
	f0.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x826535d0
	if (!cr6.lt) goto loc_826535D0;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r5,1
	ctx.r5.s64 = 1;
loc_826535D0:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x826535dc
	if (!cr6.lt) goto loc_826535DC;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_826535DC:
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// rlwinm r30,r8,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// vxor v12,v13,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_setzero_si128());
	// rlwinm r29,r9,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,32
	r31.s64 = 32;
	// addi r9,r3,96
	ctx.r9.s64 = ctx.r3.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// lfsx f0,r30,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfsx f0,r29,r10
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + ctx.r10.u32, temp.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// lfsx f13,r29,r11
	temp.u32 = PPC_LOAD_U32(r29.u32 + r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfsx f12,r30,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + ctx.r10.u32, temp.u32);
	// lvx128 v12,r0,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r0,r10
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v3,v4,v4
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v4.f32), 0xEF));
	// vrsqrtefp v13,v3
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v3.f32))));
	// vmulfp128 v8,v3,v12
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v12.f32)));
	// vcmpeqfp v5,v0,v3
	_mm_store_ps(ctx.v5.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v9,v13,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v6,v8,v9,v12
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v6,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v10,v13,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v12,v8,v10,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v12,v13,v0,v5
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vspltw v2,v12,0
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vmulfp128 v1,v4,v2
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v2.f32)));
	// stvx128 v1,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor v31,v1,v1
	_mm_store_si128((__m128i*)v31.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vpermwi128 v29,v31,99
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v31.u32), 0x9C));
	// vpermwi128 v27,v31,135
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v31.u32), 0x78));
	// lvx128 v30,r0,r11
	simd::store_shuffled(v30, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v28,v30,135
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v30.u32), 0x78));
	// vpermwi128 v25,v30,99
	_mm_store_si128((__m128i*)v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v30.u32), 0x9C));
	// vmulfp128 v26,v28,v29
	_mm_store_ps(v26.f32, _mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(v29.f32)));
	// vmulfp128 v24,v25,v27
	_mm_store_ps(v24.f32, _mm_mul_ps(_mm_load_ps(v25.f32), _mm_load_ps(v27.f32)));
	// vsubfp v23,v24,v26
	_mm_store_ps(v23.f32, _mm_sub_ps(_mm_load_ps(v24.f32), _mm_load_ps(v26.f32)));
	// stvx128 v23,r11,r31
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v23.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v22,r0,r7
	simd::store_shuffled(v22, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v21,v22,v22
	_mm_store_ps(v21.f32, _mm_dp_ps(_mm_load_ps(v22.f32), _mm_load_ps(v22.f32), 0xEF));
	// vrsqrtefp v13,v21
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v21.f32))));
	// stvx128 v22,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v22.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v9,v21,v12
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(v21.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v8,v13,v13
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp v7,v0,v21
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v21.f32)));
	// vnmsubfp v6,v9,v8,v12
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v6,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v10,v13,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v12,v9,v10,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v12,v13,v0,v7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vspltw v20,v12,0
	_mm_store_si128((__m128i*)v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vmulfp128 v19,v22,v20
	_mm_store_ps(v19.f32, _mm_mul_ps(_mm_load_ps(v22.f32), _mm_load_ps(v20.f32)));
	// stvx128 v19,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v19.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f9,0(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fabs f13,f11
	ctx.f13.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f0,f9
	f0.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fabs f12,f10
	ctx.f12.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x826536f4
	if (!cr6.lt) goto loc_826536F4;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r5,1
	ctx.r5.s64 = 1;
loc_826536F4:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x82653700
	if (!cr6.lt) goto loc_82653700;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
loc_82653700:
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// vxor v12,v13,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_setzero_si128());
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vor v11,v0,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// stvx128 v12,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// stfsx f0,r10,r8
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lfsx f13,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfsx f12,r11,r8
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, temp.u32);
	// lvx128 v12,r0,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r8
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v5,v6,v6
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v6.f32), 0xEF));
	// vrsqrtefp v13,v5
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v5.f32))));
	// vcmpeqfp v8,v0,v5
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v5.f32)));
	// vmulfp128 v10,v5,v12
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v0,v13,v13
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v7,v10,v0,v12
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v13,v7,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v13,v0,v0
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v12,v10,v13,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v11,v8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vspltw v4,v13,0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v3,v6,v4
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v4.f32)));
	// stvx128 v3,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor v31,v3,v3
	_mm_store_si128((__m128i*)v31.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// vpermwi128 v29,v31,99
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v31.u32), 0x9C));
	// vpermwi128 v28,v31,135
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v31.u32), 0x78));
	// lvx128 v2,r0,r9
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v1,v2,135
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0x78));
	// vpermwi128 v30,v2,99
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0x9C));
	// vmulfp128 v27,v1,v29
	_mm_store_ps(v27.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(v29.f32)));
	// vmulfp128 v26,v30,v28
	_mm_store_ps(v26.f32, _mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(v28.f32)));
	// vsubfp v25,v26,v27
	_mm_store_ps(v25.f32, _mm_sub_ps(_mm_load_ps(v26.f32), _mm_load_ps(v27.f32)));
	// stvx128 v25,r9,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v25.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_82653794"))) PPC_WEAK_FUNC(sub_82653794);
PPC_FUNC_IMPL(__imp__sub_82653794) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82653798"))) PPC_WEAK_FUNC(sub_82653798);
PPC_FUNC_IMPL(__imp__sub_82653798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,-31496(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31496);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82628b70
	sub_82628B70(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826537fc
	if (cr6.eq) goto loc_826537FC;
	// addi r4,r30,96
	ctx.r4.s64 = r30.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x82628b70
	sub_82628B70(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82653800
	if (!cr6.eq) goto loc_82653800;
loc_826537FC:
	// li r11,0
	r11.s64 = 0;
loc_82653800:
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82653820"))) PPC_WEAK_FUNC(sub_82653820);
PPC_FUNC_IMPL(__imp__sub_82653820) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653824"))) PPC_WEAK_FUNC(sub_82653824);
PPC_FUNC_IMPL(__imp__sub_82653824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82653828"))) PPC_WEAK_FUNC(sub_82653828);
PPC_FUNC_IMPL(__imp__sub_82653828) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,14220
	ctx.r9.s64 = r11.s64 + 14220;
	// li r30,0
	r30.s64 = 0;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82653b88
	sub_82653B88(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// addi r9,r11,48
	ctx.r9.s64 = r11.s64 + 48;
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,-25600(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r7
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r8
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vxor v11,v12,v12
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_setzero_si128());
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// stvx128 v11,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f0,136(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v9,v10,v10
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_setzero_si128());
	// stvx128 v9,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r30,162(r31)
	PPC_STORE_U8(r31.u32 + 162, r30.u8);
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

__attribute__((alias("__imp__sub_82653900"))) PPC_WEAK_FUNC(sub_82653900);
PPC_FUNC_IMPL(__imp__sub_82653900) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653904"))) PPC_WEAK_FUNC(sub_82653904);
PPC_FUNC_IMPL(__imp__sub_82653904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82653908"))) PPC_WEAK_FUNC(sub_82653908);
PPC_FUNC_IMPL(__imp__sub_82653908) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	PPCVRegister v32{};
	PPCVRegister v33{};
	PPCVRegister v34{};
	PPCVRegister v35{};
	PPCVRegister v36{};
	PPCVRegister v37{};
	PPCVRegister v38{};
	PPCVRegister v39{};
	PPCVRegister v40{};
	PPCVRegister v41{};
	PPCVRegister v42{};
	PPCVRegister v43{};
	PPCVRegister v44{};
	PPCVRegister v45{};
	PPCVRegister v46{};
	PPCVRegister v47{};
	PPCVRegister v48{};
	PPCVRegister v49{};
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
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// li r12,-80
	r12.s64 = -80;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-64
	r12.s64 = -64;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f0.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x8265396c
	if (!cr6.lt) goto loc_8265396C;
	// li r11,0
	r11.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8265396C:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x82653978
	if (!cr6.lt) goto loc_82653978;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82653978:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v12,r0,r30
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v11,r0,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// vmsum3fp128 v7,v11,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// vpermwi128 v2,v12,135
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x78));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfsx f0,r9,r30
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r30.u32);
	f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfsx f13,r7,r30
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = f0.u64 ^ 0x8000000000000000;
	// lvx128 v6,r0,r11
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stfsx f13,r9,r6
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// vmsum3fp128 v5,v6,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stfsx f12,r7,r5
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, temp.u32);
	// addi r27,r10,7520
	r27.s64 = ctx.r10.s64 + 7520;
	// lvx128 v8,r0,r3
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v4,v8,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// vmrghw v3,v5,v0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	// vrsqrtefp v0,v4
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v4.f32))));
	// addi r8,r9,7632
	ctx.r8.s64 = ctx.r9.s64 + 7632;
	// vpermwi128 v1,v12,99
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x9C));
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// vspltisw v9,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_set1_epi32(int(0x0)));
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vcmpeqfp v5,v9,v4
	_mm_store_ps(ctx.v5.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v4.f32)));
	// vmulfp128 v10,v4,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v31,r0,r10
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v30,v31,v12
	_mm_store_ps(v30.f32, _mm_dp_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v6,v10,v11,v13
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmrghw v29,v7,v30
	_mm_store_si128((__m128i*)v29.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v30.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmrghw v28,v29,v3
	_mm_store_si128((__m128i*)v28.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), _mm_load_si128((__m128i*)v29.u32)));
	// stvx128 v28,r31,r7
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v28.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v0,v0,v6,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v27,r0,r10
	simd::store_shuffled(v27, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v26,r0,r4
	simd::store_shuffled(v26, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r27
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v25,r0,r11
	simd::store_shuffled(v25, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v10,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v9,v5
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vspltw v24,v13,0
	_mm_store_si128((__m128i*)v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v127,v8,v24
	_mm_store_ps(v127.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(v24.f32)));
	// vmsum3fp128 v23,v25,v127
	_mm_store_ps(v23.f32, _mm_dp_ps(_mm_load_ps(v25.f32), _mm_load_ps(v127.f32), 0xEF));
	// vpermwi128 v22,v127,99
	_mm_store_si128((__m128i*)v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v127.u32), 0x9C));
	// vmsum3fp128 v21,v27,v127
	_mm_store_ps(v21.f32, _mm_dp_ps(_mm_load_ps(v27.f32), _mm_load_ps(v127.f32), 0xEF));
	// vmrghw v20,v23,v7
	_mm_store_si128((__m128i*)v20.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)v23.u32)));
	// vmsum3fp128 v19,v26,v127
	_mm_store_ps(v19.f32, _mm_dp_ps(_mm_load_ps(v26.f32), _mm_load_ps(v127.f32), 0xEF));
	// vpermwi128 v18,v127,135
	_mm_store_si128((__m128i*)v18.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v127.u32), 0x78));
	// vmulfp128 v17,v2,v22
	_mm_store_ps(v17.f32, _mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(v22.f32)));
	// vmulfp128 v16,v1,v18
	_mm_store_ps(v16.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(v18.f32)));
	// vmrghw v15,v19,v21
	_mm_store_si128((__m128i*)v15.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v21.u32), _mm_load_si128((__m128i*)v19.u32)));
	// vsubfp128 v126,v16,v17
	_mm_store_ps(v126.f32, _mm_sub_ps(_mm_load_ps(v16.f32), _mm_load_ps(v17.f32)));
	// vmrghw v14,v15,v20
	_mm_store_si128((__m128i*)v14.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v20.u32), _mm_load_si128((__m128i*)v15.u32)));
	// stvx128 v14,r31,r6
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v14.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r4
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r0,r11
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r10
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v59,v63,v126
	_mm_store_ps(v59.f32, _mm_dp_ps(_mm_load_ps(v63.f32), _mm_load_ps(v126.f32), 0xEF));
	// vmsum3fp128 v60,v61,v126
	_mm_store_ps(v60.f32, _mm_dp_ps(_mm_load_ps(v61.f32), _mm_load_ps(v126.f32), 0xEF));
	// vmsum3fp128 v58,v62,v126
	_mm_store_ps(v58.f32, _mm_dp_ps(_mm_load_ps(v62.f32), _mm_load_ps(v126.f32), 0xEF));
	// vmrghw128 v57,v60,v0
	_mm_store_si128((__m128i*)v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)v60.u32)));
	// vmrghw128 v56,v58,v59
	_mm_store_si128((__m128i*)v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v59.u32), _mm_load_si128((__m128i*)v58.u32)));
	// vmrghw128 v55,v56,v57
	_mm_store_si128((__m128i*)v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v57.u32), _mm_load_si128((__m128i*)v56.u32)));
	// stvx128 v55,r31,r9
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82628128
	sub_82628128(ctx, base);
	// addi r11,r29,16
	r11.s64 = r29.s64 + 16;
	// addi r10,r29,32
	ctx.r10.s64 = r29.s64 + 32;
	// lvx128 v54,r0,r30
	simd::store_shuffled(v54, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v50,r0,r29
	simd::store_shuffled(v50, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// li r8,96
	ctx.r8.s64 = 96;
	// vmsum3fp128 v48,v50,v54
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v48.f32, _mm_dp_ps(_mm_load_ps(v50.f32), _mm_load_ps(v54.f32), 0xEF));
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// li r7,112
	ctx.r7.s64 = 112;
	// lvx128 v53,r0,r11
	simd::store_shuffled(v53, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r6,128
	ctx.r6.s64 = 128;
	// lvx128 v52,r0,r10
	simd::store_shuffled(v52, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v51,v53,v54
	_mm_store_ps(v51.f32, _mm_dp_ps(_mm_load_ps(v53.f32), _mm_load_ps(v54.f32), 0xEF));
	// vmsum3fp128 v49,v52,v54
	_mm_store_ps(v49.f32, _mm_dp_ps(_mm_load_ps(v52.f32), _mm_load_ps(v54.f32), 0xEF));
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// vmrghw128 v47,v51,v0
	_mm_store_si128((__m128i*)v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)v51.u32)));
	// vmrghw128 v46,v48,v49
	_mm_store_si128((__m128i*)v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v49.u32), _mm_load_si128((__m128i*)v48.u32)));
	// vmrghw128 v45,v46,v47
	_mm_store_si128((__m128i*)v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v47.u32), _mm_load_si128((__m128i*)v46.u32)));
	// stvx128 v45,r31,r8
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v43,r0,r10
	simd::store_shuffled(v43, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v42,r0,r29
	simd::store_shuffled(v42, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v44,r0,r11
	simd::store_shuffled(v44, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v39,v44,v127
	_mm_store_ps(v39.f32, _mm_dp_ps(_mm_load_ps(v44.f32), _mm_load_ps(v127.f32), 0xEF));
	// vmsum3fp128 v41,v42,v127
	_mm_store_ps(v41.f32, _mm_dp_ps(_mm_load_ps(v42.f32), _mm_load_ps(v127.f32), 0xEF));
	// vmrghw128 v37,v39,v0
	_mm_store_si128((__m128i*)v37.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)v39.u32)));
	// vmsum3fp128 v40,v43,v127
	_mm_store_ps(v40.f32, _mm_dp_ps(_mm_load_ps(v43.f32), _mm_load_ps(v127.f32), 0xEF));
	// vmrghw128 v38,v41,v40
	_mm_store_si128((__m128i*)v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v40.u32), _mm_load_si128((__m128i*)v41.u32)));
	// vmrghw128 v36,v38,v37
	_mm_store_si128((__m128i*)v36.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v37.u32), _mm_load_si128((__m128i*)v38.u32)));
	// stvx128 v36,r31,r7
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v36.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v34,r0,r29
	simd::store_shuffled(v34, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v35,r0,r10
	simd::store_shuffled(v35, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v32,v35,v126
	_mm_store_ps(v32.f32, _mm_dp_ps(_mm_load_ps(v35.f32), _mm_load_ps(v126.f32), 0xEF));
	// vmsum3fp128 v33,v34,v126
	_mm_store_ps(v33.f32, _mm_dp_ps(_mm_load_ps(v34.f32), _mm_load_ps(v126.f32), 0xEF));
	// vmsum3fp128 v12,v13,v126
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v126.f32), 0xEF));
	// vmrghw128 v10,v33,v32
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v32.u32), _mm_load_si128((__m128i*)v33.u32)));
	// vmrghw v11,v12,v0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrghw v9,v10,v11
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// stvx128 v9,r31,r6
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82628128
	sub_82628128(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v126,r1,r0
	simd::store_shuffled(v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// li r0,-64
	r0.s64 = -64;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
}

__attribute__((alias("__imp__sub_82653B80"))) PPC_WEAK_FUNC(sub_82653B80);
PPC_FUNC_IMPL(__imp__sub_82653B80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82653B84"))) PPC_WEAK_FUNC(sub_82653B84);
PPC_FUNC_IMPL(__imp__sub_82653B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82653B88"))) PPC_WEAK_FUNC(sub_82653B88);
PPC_FUNC_IMPL(__imp__sub_82653B88) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,5
	ctx.r8.s64 = 5;
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// li r7,0
	ctx.r7.s64 = 0;
	// sth r9,144(r3)
	PPC_STORE_U16(ctx.r3.u32 + 144, ctx.r9.u16);
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// sth r8,148(r3)
	PPC_STORE_U16(ctx.r3.u32 + 148, ctx.r8.u16);
	// stb r7,150(r3)
	PPC_STORE_U8(ctx.r3.u32 + 150, ctx.r7.u8);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r3,148
	r11.s64 = ctx.r3.s64 + 148;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,3
	ctx.r3.s64 = r11.s64 + 3;
	// bl 0x82628d30
	sub_82628D30(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,-12728(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -12728);
	f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82653BF8"))) PPC_WEAK_FUNC(sub_82653BF8);
PPC_FUNC_IMPL(__imp__sub_82653BF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653BFC"))) PPC_WEAK_FUNC(sub_82653BFC);
PPC_FUNC_IMPL(__imp__sub_82653BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82653C00"))) PPC_WEAK_FUNC(sub_82653C00);
PPC_FUNC_IMPL(__imp__sub_82653C00) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82628128
	sub_82628128(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x82628128
	sub_82628128(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82653C38"))) PPC_WEAK_FUNC(sub_82653C38);
PPC_FUNC_IMPL(__imp__sub_82653C38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82653C3C"))) PPC_WEAK_FUNC(sub_82653C3C);
PPC_FUNC_IMPL(__imp__sub_82653C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82653C40"))) PPC_WEAK_FUNC(sub_82653C40);
PPC_FUNC_IMPL(__imp__sub_82653C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,32
	r11.s64 = 32;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r10,48
	ctx.r10.s64 = 48;
	// stvx128 v0,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_82653C58"))) PPC_WEAK_FUNC(sub_82653C58);
PPC_FUNC_IMPL(__imp__sub_82653C58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653C5C"))) PPC_WEAK_FUNC(sub_82653C5C);
PPC_FUNC_IMPL(__imp__sub_82653C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82653C60"))) PPC_WEAK_FUNC(sub_82653C60);
PPC_FUNC_IMPL(__imp__sub_82653C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653C68"))) PPC_WEAK_FUNC(sub_82653C68);
PPC_FUNC_IMPL(__imp__sub_82653C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653C70"))) PPC_WEAK_FUNC(sub_82653C70);
PPC_FUNC_IMPL(__imp__sub_82653C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// slw r10,r11,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r4.u8 & 0x3F));
	// stb r10,66(r3)
	PPC_STORE_U8(ctx.r3.u32 + 66, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653C80"))) PPC_WEAK_FUNC(sub_82653C80);
PPC_FUNC_IMPL(__imp__sub_82653C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,66(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 66);
	// rlwinm r3,r11,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653C8C"))) PPC_WEAK_FUNC(sub_82653C8C);
PPC_FUNC_IMPL(__imp__sub_82653C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82653C90"))) PPC_WEAK_FUNC(sub_82653C90);
PPC_FUNC_IMPL(__imp__sub_82653C90) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82655230
	sub_82655230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82653CA0"))) PPC_WEAK_FUNC(sub_82653CA0);
PPC_FUNC_IMPL(__imp__sub_82653CA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// extsb r11,r4
	r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82653cd0
	if (!cr6.eq) goto loc_82653CD0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-12728(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12728);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82653cd0
	if (!cr6.eq) goto loc_82653CD0;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// blr 
	return;
loc_82653CD0:
	// li r11,3
	r11.s64 = 3;
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653CE4"))) PPC_WEAK_FUNC(sub_82653CE4);
PPC_FUNC_IMPL(__imp__sub_82653CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82653CE8"))) PPC_WEAK_FUNC(sub_82653CE8);
PPC_FUNC_IMPL(__imp__sub_82653CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653CF4"))) PPC_WEAK_FUNC(sub_82653CF4);
PPC_FUNC_IMPL(__imp__sub_82653CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82653CF8"))) PPC_WEAK_FUNC(sub_82653CF8);
PPC_FUNC_IMPL(__imp__sub_82653CF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653D00"))) PPC_WEAK_FUNC(sub_82653D00);
PPC_FUNC_IMPL(__imp__sub_82653D00) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r8,r11,14292
	ctx.r8.s64 = r11.s64 + 14292;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// sth r7,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r7.u16);
	// lfs f0,-25600(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f0.f64 = double(temp.f32);
	// sth r6,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r6.u16);
	// sth r5,64(r3)
	PPC_STORE_U16(ctx.r3.u32 + 64, ctx.r5.u16);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stb r10,66(r3)
	PPC_STORE_U8(ctx.r3.u32 + 66, ctx.r10.u8);
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,3
	ctx.r3.s64 = r11.s64 + 3;
	// bl 0x82628d30
	sub_82628D30(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// addi r10,r31,48
	ctx.r10.s64 = r31.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,-12728(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -12728);
	f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vxor v11,v12,v12
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_setzero_si128());
	// stvx128 v11,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82653DA4"))) PPC_WEAK_FUNC(sub_82653DA4);
PPC_FUNC_IMPL(__imp__sub_82653DA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653DA8"))) PPC_WEAK_FUNC(sub_82653DA8);
PPC_FUNC_IMPL(__imp__sub_82653DA8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r9,r31,16
	ctx.r9.s64 = r31.s64 + 16;
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r9,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r9.u32);
	// stw r8,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82653DFC"))) PPC_WEAK_FUNC(sub_82653DFC);
PPC_FUNC_IMPL(__imp__sub_82653DFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653E00"))) PPC_WEAK_FUNC(sub_82653E00);
PPC_FUNC_IMPL(__imp__sub_82653E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
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

__attribute__((alias("__imp__sub_82653E14"))) PPC_WEAK_FUNC(sub_82653E14);
PPC_FUNC_IMPL(__imp__sub_82653E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82653E18"))) PPC_WEAK_FUNC(sub_82653E18);
PPC_FUNC_IMPL(__imp__sub_82653E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653E20"))) PPC_WEAK_FUNC(sub_82653E20);
PPC_FUNC_IMPL(__imp__sub_82653E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653E28"))) PPC_WEAK_FUNC(sub_82653E28);
PPC_FUNC_IMPL(__imp__sub_82653E28) {
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
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82653E64"))) PPC_WEAK_FUNC(sub_82653E64);
PPC_FUNC_IMPL(__imp__sub_82653E64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653E68"))) PPC_WEAK_FUNC(sub_82653E68);
PPC_FUNC_IMPL(__imp__sub_82653E68) {
	PPC_FUNC_PROLOGUE();
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653E70"))) PPC_WEAK_FUNC(sub_82653E70);
PPC_FUNC_IMPL(__imp__sub_82653E70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
}

__attribute__((alias("__imp__sub_82653E74"))) PPC_WEAK_FUNC(sub_82653E74);
PPC_FUNC_IMPL(__imp__sub_82653E74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653E78"))) PPC_WEAK_FUNC(sub_82653E78);
PPC_FUNC_IMPL(__imp__sub_82653E78) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
}

__attribute__((alias("__imp__sub_82653E7C"))) PPC_WEAK_FUNC(sub_82653E7C);
PPC_FUNC_IMPL(__imp__sub_82653E7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653E80"))) PPC_WEAK_FUNC(sub_82653E80);
PPC_FUNC_IMPL(__imp__sub_82653E80) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r11,1
	r11.s64 = 1;
	// addi r8,r10,14364
	ctx.r8.s64 = ctx.r10.s64 + 14364;
	// li r7,0
	ctx.r7.s64 = 0;
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// lfs f0,20940(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20940);
	f0.f64 = double(temp.f32);
	// sth r11,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, r11.u16);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82628558
	sub_82628558(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826584f8
	sub_826584F8(ctx, base);
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

__attribute__((alias("__imp__sub_82653EF8"))) PPC_WEAK_FUNC(sub_82653EF8);
PPC_FUNC_IMPL(__imp__sub_82653EF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653EFC"))) PPC_WEAK_FUNC(sub_82653EFC);
PPC_FUNC_IMPL(__imp__sub_82653EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82653F00"))) PPC_WEAK_FUNC(sub_82653F00);
PPC_FUNC_IMPL(__imp__sub_82653F00) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,14364
	ctx.r10.s64 = r11.s64 + 14364;
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82653f48
	if (cr6.eq) goto loc_82653F48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x826584f8
	sub_826584F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826584f8
	sub_826584F8(ctx, base);
loc_82653F48:
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

__attribute__((alias("__imp__sub_82653F60"))) PPC_WEAK_FUNC(sub_82653F60);
PPC_FUNC_IMPL(__imp__sub_82653F60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653F64"))) PPC_WEAK_FUNC(sub_82653F64);
PPC_FUNC_IMPL(__imp__sub_82653F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82653F68"))) PPC_WEAK_FUNC(sub_82653F68);
PPC_FUNC_IMPL(__imp__sub_82653F68) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r10,r11,14364
	ctx.r10.s64 = r11.s64 + 14364;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-13048
	ctx.r8.s64 = ctx.r9.s64 + -13048;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82653FAC"))) PPC_WEAK_FUNC(sub_82653FAC);
PPC_FUNC_IMPL(__imp__sub_82653FAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653FB0"))) PPC_WEAK_FUNC(sub_82653FB0);
PPC_FUNC_IMPL(__imp__sub_82653FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r11,r4,-8
	r11.s64 = ctx.r4.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82653FD4:
	// ldu r9,8(r11)
	ea = 8 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82653fd4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82653FD4;
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	f0.f64 = double(temp.f32);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// cmplwi cr6,r9,22
	cr6.compare<uint32_t>(ctx.r9.u32, 22, xer);
	// bne cr6,0x8265403c
	if (!cr6.eq) goto loc_8265403C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82c47dd8
	sub_82C47DD8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8265403C:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82c45a78
	sub_82C45A78(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82654058"))) PPC_WEAK_FUNC(sub_82654058);
PPC_FUNC_IMPL(__imp__sub_82654058) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265405C"))) PPC_WEAK_FUNC(sub_8265405C);
PPC_FUNC_IMPL(__imp__sub_8265405C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82654060"))) PPC_WEAK_FUNC(sub_82654060);
PPC_FUNC_IMPL(__imp__sub_82654060) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,14364
	ctx.r10.s64 = r11.s64 + 14364;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// clrlwi r8,r30,31
	ctx.r8.u64 = r30.u32 & 0x1;
	// addi r7,r9,-13048
	ctx.r7.s64 = ctx.r9.s64 + -13048;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// beq cr6,0x826540c8
	if (cr6.eq) goto loc_826540C8;
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
loc_826540C8:
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

__attribute__((alias("__imp__sub_826540E0"))) PPC_WEAK_FUNC(sub_826540E0);
PPC_FUNC_IMPL(__imp__sub_826540E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826540E4"))) PPC_WEAK_FUNC(sub_826540E4);
PPC_FUNC_IMPL(__imp__sub_826540E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826540E8"))) PPC_WEAK_FUNC(sub_826540E8);
PPC_FUNC_IMPL(__imp__sub_826540E8) {
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
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,80
	ctx.r9.s64 = 80;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x82653d00
	sub_82653D00(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
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

__attribute__((alias("__imp__sub_82654154"))) PPC_WEAK_FUNC(sub_82654154);
PPC_FUNC_IMPL(__imp__sub_82654154) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82654158"))) PPC_WEAK_FUNC(sub_82654158);
PPC_FUNC_IMPL(__imp__sub_82654158) {
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
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,176
	ctx.r4.s64 = 176;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,176
	ctx.r9.s64 = 176;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x82653828
	sub_82653828(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,156
	ctx.r5.s64 = 156;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
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

__attribute__((alias("__imp__sub_826541C4"))) PPC_WEAK_FUNC(sub_826541C4);
PPC_FUNC_IMPL(__imp__sub_826541C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826541C8"))) PPC_WEAK_FUNC(sub_826541C8);
PPC_FUNC_IMPL(__imp__sub_826541C8) {
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
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,224
	ctx.r4.s64 = 224;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,224
	ctx.r9.s64 = 224;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x8263cd80
	sub_8263CD80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,204
	ctx.r5.s64 = 204;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
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

__attribute__((alias("__imp__sub_82654234"))) PPC_WEAK_FUNC(sub_82654234);
PPC_FUNC_IMPL(__imp__sub_82654234) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82654238"))) PPC_WEAK_FUNC(sub_82654238);
PPC_FUNC_IMPL(__imp__sub_82654238) {
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
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,176
	ctx.r4.s64 = 176;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,176
	ctx.r9.s64 = 176;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x82672250
	sub_82672250(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
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

__attribute__((alias("__imp__sub_826542A4"))) PPC_WEAK_FUNC(sub_826542A4);
PPC_FUNC_IMPL(__imp__sub_826542A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826542A8"))) PPC_WEAK_FUNC(sub_826542A8);
PPC_FUNC_IMPL(__imp__sub_826542A8) {
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
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,208
	ctx.r4.s64 = 208;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,208
	ctx.r9.s64 = 208;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x82652b68
	sub_82652B68(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,192
	ctx.r5.s64 = 192;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
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

__attribute__((alias("__imp__sub_82654314"))) PPC_WEAK_FUNC(sub_82654314);
PPC_FUNC_IMPL(__imp__sub_82654314) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82654318"))) PPC_WEAK_FUNC(sub_82654318);
PPC_FUNC_IMPL(__imp__sub_82654318) {
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
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,320
	ctx.r4.s64 = 320;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,320
	ctx.r9.s64 = 320;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x8263a938
	sub_8263A938(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,304
	ctx.r5.s64 = 304;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
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

__attribute__((alias("__imp__sub_82654384"))) PPC_WEAK_FUNC(sub_82654384);
PPC_FUNC_IMPL(__imp__sub_82654384) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82654388"))) PPC_WEAK_FUNC(sub_82654388);
PPC_FUNC_IMPL(__imp__sub_82654388) {
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
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,80
	ctx.r9.s64 = 80;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x82672c20
	sub_82672C20(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
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

__attribute__((alias("__imp__sub_826543F4"))) PPC_WEAK_FUNC(sub_826543F4);
PPC_FUNC_IMPL(__imp__sub_826543F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826543F8"))) PPC_WEAK_FUNC(sub_826543F8);
PPC_FUNC_IMPL(__imp__sub_826543F8) {
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
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,352
	ctx.r4.s64 = 352;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,352
	ctx.r9.s64 = 352;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x826521a8
	sub_826521A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,292
	ctx.r5.s64 = 292;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
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

__attribute__((alias("__imp__sub_82654464"))) PPC_WEAK_FUNC(sub_82654464);
PPC_FUNC_IMPL(__imp__sub_82654464) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82654468"))) PPC_WEAK_FUNC(sub_82654468);
PPC_FUNC_IMPL(__imp__sub_82654468) {
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
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,176
	ctx.r4.s64 = 176;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,176
	ctx.r9.s64 = 176;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x82653200
	sub_82653200(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,148
	ctx.r5.s64 = 148;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
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

__attribute__((alias("__imp__sub_826544D4"))) PPC_WEAK_FUNC(sub_826544D4);
PPC_FUNC_IMPL(__imp__sub_826544D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826544D8"))) PPC_WEAK_FUNC(sub_826544D8);
PPC_FUNC_IMPL(__imp__sub_826544D8) {
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
	// li r9,128
	ctx.r9.s64 = 128;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x82672cf8
	sub_82672CF8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,112
	ctx.r5.s64 = 112;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
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

__attribute__((alias("__imp__sub_82654544"))) PPC_WEAK_FUNC(sub_82654544);
PPC_FUNC_IMPL(__imp__sub_82654544) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82654548"))) PPC_WEAK_FUNC(sub_82654548);
PPC_FUNC_IMPL(__imp__sub_82654548) {
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
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,160
	ctx.r4.s64 = 160;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,160
	ctx.r9.s64 = 160;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x82672e40
	sub_82672E40(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,132
	ctx.r5.s64 = 132;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
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

__attribute__((alias("__imp__sub_826545B4"))) PPC_WEAK_FUNC(sub_826545B4);
PPC_FUNC_IMPL(__imp__sub_826545B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826545B8"))) PPC_WEAK_FUNC(sub_826545B8);
PPC_FUNC_IMPL(__imp__sub_826545B8) {
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
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,192
	ctx.r4.s64 = 192;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,192
	ctx.r9.s64 = 192;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x826734a0
	sub_826734A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,172
	ctx.r5.s64 = 172;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
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

__attribute__((alias("__imp__sub_82654624"))) PPC_WEAK_FUNC(sub_82654624);
PPC_FUNC_IMPL(__imp__sub_82654624) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82654628"))) PPC_WEAK_FUNC(sub_82654628);
PPC_FUNC_IMPL(__imp__sub_82654628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r19{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// bgt cr6,0x82654894
	if (cr6.gt) goto loc_82654894;
	// lis r12,-32155
	r12.s64 = -2107310080;
	// rlwinm r0,r3,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,18024
	r12.s64 = r12.s64 + 18024;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_826546B8;
	case 1:
		goto loc_826546C8;
	case 2:
		goto loc_826546D8;
	case 3:
		goto loc_826546E8;
	case 4:
		goto loc_82654894;
	case 5:
		goto loc_82654894;
	case 6:
		goto loc_82654730;
	case 7:
		goto loc_82654740;
	case 8:
		goto loc_82654750;
	case 9:
		goto loc_82654760;
	case 10:
		goto loc_82654894;
	case 11:
		goto loc_82654894;
	case 12:
		goto loc_826547B0;
	case 13:
		goto loc_82654828;
	case 14:
		goto loc_82654770;
	case 15:
		goto loc_82654780;
	case 16:
		goto loc_82654894;
	case 17:
		goto loc_82654894;
	case 18:
		goto loc_82654790;
	case 19:
		goto loc_826547A0;
	default:
		__builtin_unreachable();
	}
	// lwz r19,18104(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18104);
	// lwz r19,18120(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18120);
	// lwz r19,18136(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18136);
	// lwz r19,18152(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18152);
	// lwz r19,18580(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18580);
	// lwz r19,18580(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18580);
	// lwz r19,18224(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18224);
	// lwz r19,18240(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18240);
	// lwz r19,18256(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18256);
	// lwz r19,18272(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18272);
	// lwz r19,18580(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18580);
	// lwz r19,18580(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18580);
	// lwz r19,18352(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18352);
	// lwz r19,18472(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18472);
	// lwz r19,18288(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18288);
	// lwz r19,18304(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18304);
	// lwz r19,18580(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18580);
	// lwz r19,18580(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18580);
	// lwz r19,18320(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18320);
	// lwz r19,18336(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18336);
loc_826546B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826540e8
	sub_826540E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826546C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654158
	sub_82654158(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826546D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826541c8
	sub_826541C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826546E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654238
	sub_82654238(ctx, base);
	// lwz r31,24(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826721d8
	sub_826721D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82628608
	sub_82628608(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82654730:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826542a8
	sub_826542A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82654740:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654318
	sub_82654318(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82654750:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654388
	sub_82654388(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82654760:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826543f8
	sub_826543F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82654770:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654468
	sub_82654468(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82654780:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826544d8
	sub_826544D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82654790:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654548
	sub_82654548(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826547A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826545b8
	sub_826545B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826547B0:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82654628
	sub_82654628(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82654894
	if (cr6.eq) goto loc_82654894;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,40
	ctx.r9.s64 = 40;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x8263d370
	sub_8263D370(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 32, temp.u32);
	// lbz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 36);
	// stb r8,36(r29)
	PPC_STORE_U8(r29.u32 + 36, ctx.r8.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lbz r7,37(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 37);
	// stb r7,37(r29)
	PPC_STORE_U8(r29.u32 + 37, ctx.r7.u8);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r6,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82654828:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82653e78
	sub_82653E78(ctx, base);
	// bl 0x82654628
	sub_82654628(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82654894
	if (cr6.eq) goto loc_82654894;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x82653e80
	sub_82653E80(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 28, temp.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r8,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r8.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82654894:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8265489C"))) PPC_WEAK_FUNC(sub_8265489C);
PPC_FUNC_IMPL(__imp__sub_8265489C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826548A0"))) PPC_WEAK_FUNC(sub_826548A0);
PPC_FUNC_IMPL(__imp__sub_826548A0) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x826549d0
	if (cr6.eq) goto loc_826549D0;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x82654964
	if (cr6.eq) goto loc_82654964;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// beq cr6,0x826548e4
	if (cr6.eq) goto loc_826548E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_826548E4:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,320
	ctx.r4.s64 = 320;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,320
	ctx.r9.s64 = 320;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x8263a938
	sub_8263A938(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82654c00
	sub_82654C00(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r30,r28,224
	r30.s64 = r28.s64 + 224;
	// li r29,3
	r29.s64 = 3;
	// stw r8,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r8.u32);
loc_8265492C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8265494c
	if (cr6.eq) goto loc_8265494C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_8265494C:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8265492c
	if (!cr0.eq) goto loc_8265492C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_82654964:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,208
	ctx.r4.s64 = 208;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,208
	ctx.r9.s64 = 208;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x82652b68
	sub_82652B68(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82654b20
	sub_82654B20(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r8,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r8.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82654a30
	if (cr6.eq) goto loc_82654A30;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,172(r30)
	PPC_STORE_U32(r30.u32 + 172, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_826549D0:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,224
	ctx.r4.s64 = 224;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,224
	ctx.r9.s64 = 224;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x8263cd80
	sub_8263CD80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82654a40
	sub_82654A40(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r8,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r8.u32);
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82654a30
	if (cr6.eq) goto loc_82654A30;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,176(r30)
	PPC_STORE_U32(r30.u32 + 176, ctx.r3.u32);
loc_82654A30:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82654A38"))) PPC_WEAK_FUNC(sub_82654A38);
PPC_FUNC_IMPL(__imp__sub_82654A38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82654A3C"))) PPC_WEAK_FUNC(sub_82654A3C);
PPC_FUNC_IMPL(__imp__sub_82654A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82654A40"))) PPC_WEAK_FUNC(sub_82654A40);
PPC_FUNC_IMPL(__imp__sub_82654A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	uint32_t ea{};
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r4,80
	ctx.r9.s64 = ctx.r4.s64 + 80;
	// lvx128 v13,r11,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r8,r3,80
	ctx.r8.s64 = ctx.r3.s64 + 80;
	// stvx128 v13,r10,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r6
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r10,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r7
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r11,5
	r11.s64 = 5;
	// stvx128 v11,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r4,140
	ctx.r10.s64 = ctx.r4.s64 + 140;
	// lvx128 v10,r0,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// mtctr r11
	ctr.u64 = r11.u64;
	// stvx128 v10,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v9,r9,r5
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v9,r8,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r9,r6
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v8,r8,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v7,r9,r7
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r9,r3,140
	ctx.r9.s64 = ctx.r3.s64 + 140;
	// stvx128 v7,r8,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82654AB4:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82654ab4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82654AB4;
	// lwz r11,164(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, r11.u32);
	// lwz r10,168(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	// stw r10,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r10.u32);
	// lwz r9,172(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// stw r9,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r9.u32);
	// lwz r8,176(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// stw r8,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r8.u32);
	// lwz r7,180(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// stw r7,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r7.u32);
	// lwz r6,184(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// stw r6,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r6.u32);
	// lwz r5,188(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 188);
	// stw r5,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r5.u32);
	// lhz r11,192(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 192);
	// sth r11,192(r3)
	PPC_STORE_U16(ctx.r3.u32 + 192, r11.u16);
	// lhz r10,194(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 194);
	// sth r10,194(r3)
	PPC_STORE_U16(ctx.r3.u32 + 194, ctx.r10.u16);
	// lwz r9,196(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 196);
	// stw r9,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r9.u32);
	// lwz r8,200(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 200);
	// stw r8,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r8.u32);
}

__attribute__((alias("__imp__sub_82654B18"))) PPC_WEAK_FUNC(sub_82654B18);
PPC_FUNC_IMPL(__imp__sub_82654B18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82654B1C"))) PPC_WEAK_FUNC(sub_82654B1C);
PPC_FUNC_IMPL(__imp__sub_82654B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82654B20"))) PPC_WEAK_FUNC(sub_82654B20);
PPC_FUNC_IMPL(__imp__sub_82654B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r4,80
	ctx.r9.s64 = ctx.r4.s64 + 80;
	// lvx128 v13,r11,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r8,r3,80
	ctx.r8.s64 = ctx.r3.s64 + 80;
	// stvx128 v13,r10,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r6
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r10,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r7
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v10,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v9,r9,r5
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v9,r8,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r9,r6
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v8,r8,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v7,r9,r7
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v7,r8,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,144(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	// stw r8,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r8.u32);
	// lwz r7,148(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	// stw r7,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r7.u32);
	// lwz r6,152(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	// stw r6,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r6.u32);
	// lwz r5,156(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	// stw r5,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r5.u32);
	// lwz r11,160(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, r11.u32);
	// lwz r10,164(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// stw r10,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r10.u32);
	// lhz r9,168(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 168);
	// sth r9,168(r3)
	PPC_STORE_U16(ctx.r3.u32 + 168, ctx.r9.u16);
	// lhz r8,170(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 170);
	// sth r8,170(r3)
	PPC_STORE_U16(ctx.r3.u32 + 170, ctx.r8.u16);
	// lhz r7,172(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 172);
	// sth r7,172(r3)
	PPC_STORE_U16(ctx.r3.u32 + 172, ctx.r7.u16);
	// lhz r6,174(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 174);
	// sth r6,174(r3)
	PPC_STORE_U16(ctx.r3.u32 + 174, ctx.r6.u16);
	// lhz r5,176(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 176);
	// sth r5,176(r3)
	PPC_STORE_U16(ctx.r3.u32 + 176, ctx.r5.u16);
	// lhz r11,178(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 178);
	// sth r11,178(r3)
	PPC_STORE_U16(ctx.r3.u32 + 178, r11.u16);
	// lwz r10,180(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// stw r10,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r10.u32);
	// lwz r9,184(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// stw r9,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r9.u32);
	// lwz r8,188(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 188);
	// stw r8,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r8.u32);
}

__attribute__((alias("__imp__sub_82654BFC"))) PPC_WEAK_FUNC(sub_82654BFC);
PPC_FUNC_IMPL(__imp__sub_82654BFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82654C00"))) PPC_WEAK_FUNC(sub_82654C00);
PPC_FUNC_IMPL(__imp__sub_82654C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,32
	r11.s64 = 32;
	// li r30,48
	r30.s64 = 48;
	// sth r7,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r7.u16);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r4,80
	ctx.r7.s64 = ctx.r4.s64 + 80;
	// lvx128 v13,r9,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r6,r3,80
	ctx.r6.s64 = ctx.r3.s64 + 80;
	// stvx128 v13,r8,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r4,144
	ctx.r5.s64 = ctx.r4.s64 + 144;
	// lvx128 v12,r9,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32 + r11.u32) & ~0xF), VectorMaskL));
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// stvx128 v12,r8,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r3,144
	r31.s64 = ctx.r3.s64 + 144;
	// lvx128 v11,r9,r30
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32 + r30.u32) & ~0xF), VectorMaskL));
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// stvx128 v11,r8,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r29,5
	r29.s64 = 5;
	// lvx128 v10,r0,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r28,r4,232
	r28.s64 = ctx.r4.s64 + 232;
	// stvx128 v10,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r27,r3,232
	r27.s64 = ctx.r3.s64 + 232;
	// lvx128 v9,r7,r10
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// mtctr r29
	ctr.u64 = r29.u64;
	// stvx128 v9,r6,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r7,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r7.u32 + r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v8,r6,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v7,r7,r30
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r7.u32 + r30.u32) & ~0xF), VectorMaskL));
	// stvx128 v7,r6,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lhz r6,144(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 144);
	// sth r6,144(r3)
	PPC_STORE_U16(ctx.r3.u32 + 144, ctx.r6.u16);
	// lbz r9,146(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 146);
	// stb r9,146(r3)
	PPC_STORE_U8(ctx.r3.u32 + 146, ctx.r9.u8);
	// lhz r8,148(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 148);
	// sth r8,148(r3)
	PPC_STORE_U16(ctx.r3.u32 + 148, ctx.r8.u16);
	// lhz r7,150(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 150);
	// sth r7,150(r3)
	PPC_STORE_U16(ctx.r3.u32 + 150, ctx.r7.u16);
	// lvx128 v6,r0,r5
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v6,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v5,r5,r10
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v5,r31,r10
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v4,r5,r11
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r5.u32 + r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v4,r31,r11
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,208(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 208);
	// stw r6,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r6.u32);
	// lwz r5,212(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	// stw r5,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r5.u32);
	// lwz r11,216(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 216);
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, r11.u32);
	// lwz r10,224(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 224);
	// stw r10,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r10.u32);
	// lwz r9,228(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	// stw r9,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r9.u32);
	// lwz r8,232(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	// stw r8,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r8.u32);
loc_82654CF4:
	// lwzu r11,4(r28)
	ea = 4 + r28.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	r28.u32 = ea;
	// stwu r11,4(r27)
	ea = 4 + r27.u32;
	PPC_STORE_U32(ea, r11.u32);
	r27.u32 = ea;
	// bdnz 0x82654cf4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82654CF4;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,252
	r11.s64 = ctx.r4.s64 + 252;
	// addi r10,r3,252
	ctx.r10.s64 = ctx.r3.s64 + 252;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82654D10:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82654d10
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82654D10;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,272
	r11.s64 = ctx.r4.s64 + 272;
	// addi r10,r3,272
	ctx.r10.s64 = ctx.r3.s64 + 272;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82654D2C:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82654d2c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82654D2C;
	// lwz r11,296(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 296);
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, r11.u32);
	// lwz r10,300(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 300);
	// stw r10,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_82654D48"))) PPC_WEAK_FUNC(sub_82654D48);
PPC_FUNC_IMPL(__imp__sub_82654D48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82654D4C"))) PPC_WEAK_FUNC(sub_82654D4C);
PPC_FUNC_IMPL(__imp__sub_82654D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82654D50"))) PPC_WEAK_FUNC(sub_82654D50);
PPC_FUNC_IMPL(__imp__sub_82654D50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addic. r8,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r8.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// lis r11,0
	r11.s64 = 0;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r6,r11,65535
	ctx.r6.u64 = r11.u64 | 65535;
loc_82654D68:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82654dbc
	if (!cr6.eq) goto loc_82654DBC;
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r5,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r5.u16);
	// cmpw cr6,r8,r5
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, xer);
	// bge cr6,0x82654dbc
	if (!cr6.lt) goto loc_82654DBC;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82654D98:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// lhz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// blt cr6,0x82654d98
	if (cr6.lt) goto loc_82654D98;
loc_82654DBC:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// bge 0x82654d68
	if (!cr0.lt) goto loc_82654D68;
}

__attribute__((alias("__imp__sub_82654DC8"))) PPC_WEAK_FUNC(sub_82654DC8);
PPC_FUNC_IMPL(__imp__sub_82654DC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82654DCC"))) PPC_WEAK_FUNC(sub_82654DCC);
PPC_FUNC_IMPL(__imp__sub_82654DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82654DD0"))) PPC_WEAK_FUNC(sub_82654DD0);
PPC_FUNC_IMPL(__imp__sub_82654DD0) {
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
	// lhz r11,36(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 36);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r28,r3,32
	r28.s64 = ctx.r3.s64 + 32;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82654e94
	if (cr0.lt) goto loc_82654E94;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,14428
	r24.s64 = ctx.r10.s64 + 14428;
loc_82654E04:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82654e88
	if (cr6.eq) goto loc_82654E88;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82654e44
	if (!cr6.lt) goto loc_82654E44;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82654E44:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82654e88
	if (!cr6.lt) goto loc_82654E88;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82654E88:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82654e04
	if (!cr0.lt) goto loc_82654E04;
loc_82654E94:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82654d50
	sub_82654D50(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82654EA0"))) PPC_WEAK_FUNC(sub_82654EA0);
PPC_FUNC_IMPL(__imp__sub_82654EA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82654EA4"))) PPC_WEAK_FUNC(sub_82654EA4);
PPC_FUNC_IMPL(__imp__sub_82654EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82654EA8"))) PPC_WEAK_FUNC(sub_82654EA8);
PPC_FUNC_IMPL(__imp__sub_82654EA8) {
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
	// lhz r11,36(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 36);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r28,r3,32
	r28.s64 = ctx.r3.s64 + 32;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82654f6c
	if (cr0.lt) goto loc_82654F6C;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,14440
	r24.s64 = ctx.r10.s64 + 14440;
loc_82654EDC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82654f60
	if (cr6.eq) goto loc_82654F60;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82654f1c
	if (!cr6.lt) goto loc_82654F1C;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82654F1C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82654f60
	if (!cr6.lt) goto loc_82654F60;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82654F60:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82654edc
	if (!cr0.lt) goto loc_82654EDC;
loc_82654F6C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82654d50
	sub_82654D50(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82654F78"))) PPC_WEAK_FUNC(sub_82654F78);
PPC_FUNC_IMPL(__imp__sub_82654F78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82654F7C"))) PPC_WEAK_FUNC(sub_82654F7C);
PPC_FUNC_IMPL(__imp__sub_82654F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82654F80"))) PPC_WEAK_FUNC(sub_82654F80);
PPC_FUNC_IMPL(__imp__sub_82654F80) {
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
	// lhz r11,36(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 36);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r28,r3,32
	r28.s64 = ctx.r3.s64 + 32;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82655044
	if (cr0.lt) goto loc_82655044;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,14452
	r24.s64 = ctx.r10.s64 + 14452;
loc_82654FB4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82655038
	if (cr6.eq) goto loc_82655038;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82654ff4
	if (!cr6.lt) goto loc_82654FF4;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82654FF4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82655038
	if (!cr6.lt) goto loc_82655038;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82655038:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82654fb4
	if (!cr0.lt) goto loc_82654FB4;
loc_82655044:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82654d50
	sub_82654D50(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82655050"))) PPC_WEAK_FUNC(sub_82655050);
PPC_FUNC_IMPL(__imp__sub_82655050) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82655054"))) PPC_WEAK_FUNC(sub_82655054);
PPC_FUNC_IMPL(__imp__sub_82655054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82655058"))) PPC_WEAK_FUNC(sub_82655058);
PPC_FUNC_IMPL(__imp__sub_82655058) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r28,r11,32
	r28.s64 = r11.s64 + 32;
	// lhz r11,36(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 36);
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82655120
	if (cr0.lt) goto loc_82655120;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,14468
	r24.s64 = ctx.r10.s64 + 14468;
loc_82655090:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82655114
	if (cr6.eq) goto loc_82655114;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826550d0
	if (!cr6.lt) goto loc_826550D0;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_826550D0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82655114
	if (!cr6.lt) goto loc_82655114;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82655114:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82655090
	if (!cr0.lt) goto loc_82655090;
loc_82655120:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82654d50
	sub_82654D50(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8265512C"))) PPC_WEAK_FUNC(sub_8265512C);
PPC_FUNC_IMPL(__imp__sub_8265512C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82655130"))) PPC_WEAK_FUNC(sub_82655130);
PPC_FUNC_IMPL(__imp__sub_82655130) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r28,r11,32
	r28.s64 = r11.s64 + 32;
	// lhz r11,36(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 36);
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x826551f8
	if (cr0.lt) goto loc_826551F8;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,14484
	r24.s64 = ctx.r10.s64 + 14484;
loc_82655168:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826551ec
	if (cr6.eq) goto loc_826551EC;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826551a8
	if (!cr6.lt) goto loc_826551A8;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_826551A8:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x826551ec
	if (!cr6.lt) goto loc_826551EC;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_826551EC:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82655168
	if (!cr0.lt) goto loc_82655168;
loc_826551F8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82654d50
	sub_82654D50(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

