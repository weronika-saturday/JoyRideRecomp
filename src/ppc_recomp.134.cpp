#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82524AC0"))) PPC_WEAK_FUNC(sub_82524AC0);
PPC_FUNC_IMPL(__imp__sub_82524AC0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r9,r11,24484
	ctx.r9.s64 = r11.s64 + 24484;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r26,0
	r26.s64 = 0;
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82524b00
	if (cr6.eq) goto loc_82524B00;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82524b04
	if (!cr6.eq) goto loc_82524B04;
loc_82524B00:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82524B04:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19468(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19468);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r28,r27,172
	r28.s64 = r27.s64 + 172;
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
	// bne cr6,0x82524b5c
	if (!cr6.eq) goto loc_82524B5C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82524b5c
	if (!cr6.eq) goto loc_82524B5C;
	// lwz r11,19468(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19468);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82524B5C:
	// addi r31,r27,316
	r31.s64 = r27.s64 + 316;
	// li r30,3
	r30.s64 = 3;
	// li r29,15
	r29.s64 = 15;
loc_82524B68:
	// addi r31,r31,-28
	r31.s64 = r31.s64 + -28;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82524b80
	if (cr6.lt) goto loc_82524B80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82524B80:
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r26,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r26.u32);
	// stb r26,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r26.u8);
	// bge 0x82524b68
	if (!cr0.lt) goto loc_82524B68;
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

__attribute__((alias("__imp__sub_82524BA8"))) PPC_WEAK_FUNC(sub_82524BA8);
PPC_FUNC_IMPL(__imp__sub_82524BA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82524BAC"))) PPC_WEAK_FUNC(sub_82524BAC);
PPC_FUNC_IMPL(__imp__sub_82524BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82524BB0"))) PPC_WEAK_FUNC(sub_82524BB0);
PPC_FUNC_IMPL(__imp__sub_82524BB0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x82524de8
	if (!cr6.lt) goto loc_82524DE8;
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82524c00
	if (cr6.lt) goto loc_82524C00;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82524c04
	goto loc_82524C04;
loc_82524C00:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82524C04:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// li r29,0
	r29.s64 = 0;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mulli r11,r31,28
	r11.s64 = r31.s64 * 28;
	// bne cr6,0x82524d38
	if (!cr6.eq) goto loc_82524D38;
	// add r27,r11,r26
	r27.u64 = r11.u64 + r26.u64;
	// lwz r11,220(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82524cc4
	if (cr6.eq) goto loc_82524CC4;
	// lwz r11,224(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 224);
	// addi r31,r27,204
	r31.s64 = r27.s64 + 204;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82524c60
	if (cr6.lt) goto loc_82524C60;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x82524c64
	goto loc_82524C64;
loc_82524C60:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82524C64:
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r6,r11,24556
	ctx.r6.s64 = r11.s64 + 24556;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
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
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82524cb8
	if (cr6.lt) goto loc_82524CB8;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82524CB8:
	// stb r29,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r29.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_82524CC4:
	// lbz r11,148(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82524dc8
	if (cr6.eq) goto loc_82524DC8;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r6,r10,24544
	ctx.r6.s64 = ctx.r10.s64 + 24544;
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
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82524D0C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82524d0c
	if (!cr6.eq) goto loc_82524D0C;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// addi r3,r27,204
	ctx.r3.s64 = r27.s64 + 204;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// b 0x82524dc8
	goto loc_82524DC8;
loc_82524D38:
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// lwz r9,220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82524dc8
	if (cr6.eq) goto loc_82524DC8;
	// lwz r9,224(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// addi r31,r11,204
	r31.s64 = r11.s64 + 204;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82524d64
	if (cr6.lt) goto loc_82524D64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x82524d68
	goto loc_82524D68;
loc_82524D64:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82524D68:
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r6,r11,24556
	ctx.r6.s64 = r11.s64 + 24556;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// cntlzw r11,r9
	r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82524dbc
	if (cr6.lt) goto loc_82524DBC;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82524DBC:
	// stb r29,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r29.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_82524DC8:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82524de8
	if (cr6.eq) goto loc_82524DE8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
loc_82524DE8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82524DEC"))) PPC_WEAK_FUNC(sub_82524DEC);
PPC_FUNC_IMPL(__imp__sub_82524DEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82524DF0"))) PPC_WEAK_FUNC(sub_82524DF0);
PPC_FUNC_IMPL(__imp__sub_82524DF0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// bge cr6,0x82525074
	if (!cr6.lt) goto loc_82525074;
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82524e50
	if (cr6.lt) goto loc_82524E50;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82524e54
	goto loc_82524E54;
loc_82524E50:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82524E54:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r29,0
	r29.s64 = 0;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r26.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r28.u32);
	// clrlwi r9,r31,24
	ctx.r9.u64 = r31.u32 & 0xFF;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r29.u32);
	// lfd f0,16944(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 16944);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, f0.u64);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r29.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// mulli r11,r30,28
	r11.s64 = r30.s64 * 28;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// bne cr6,0x82524fac
	if (!cr6.eq) goto loc_82524FAC;
	// add r28,r11,r27
	r28.u64 = r11.u64 + r27.u64;
	// lwz r11,220(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82524f38
	if (cr6.eq) goto loc_82524F38;
	// lwz r11,224(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 224);
	// addi r30,r28,204
	r30.s64 = r28.s64 + 204;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82524ed4
	if (cr6.lt) goto loc_82524ED4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82524ed8
	goto loc_82524ED8;
loc_82524ED4:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82524ED8:
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r11,24556
	ctx.r6.s64 = r11.s64 + 24556;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
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
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82524f2c
	if (cr6.lt) goto loc_82524F2C;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82524F2C:
	// stb r29,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r29.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_82524F38:
	// lbz r11,148(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8252503c
	if (cr6.eq) goto loc_8252503C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r10,24568
	ctx.r6.s64 = ctx.r10.s64 + 24568;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
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
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82524F80:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82524f80
	if (!cr6.eq) goto loc_82524F80;
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
	// addi r3,r28,204
	ctx.r3.s64 = r28.s64 + 204;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// b 0x8252503c
	goto loc_8252503C;
loc_82524FAC:
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r9,220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8252503c
	if (cr6.eq) goto loc_8252503C;
	// lwz r9,224(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// addi r30,r11,204
	r30.s64 = r11.s64 + 204;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82524fd8
	if (cr6.lt) goto loc_82524FD8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82524fdc
	goto loc_82524FDC;
loc_82524FD8:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82524FDC:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r6,r11,24556
	ctx.r6.s64 = r11.s64 + 24556;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// cntlzw r11,r9
	r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82525030
	if (cr6.lt) goto loc_82525030;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82525030:
	// stb r29,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r29.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_8252503C:
	// addi r31,r1,160
	r31.s64 = ctx.r1.s64 + 160;
	// li r30,2
	r30.s64 = 2;
loc_82525044:
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8252506c
	if (cr6.eq) goto loc_8252506C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_8252506C:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82525044
	if (!cr0.lt) goto loc_82525044;
loc_82525074:
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_82525080"))) PPC_WEAK_FUNC(sub_82525080);
PPC_FUNC_IMPL(__imp__sub_82525080) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82525084"))) PPC_WEAK_FUNC(sub_82525084);
PPC_FUNC_IMPL(__imp__sub_82525084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82525088"))) PPC_WEAK_FUNC(sub_82525088);
PPC_FUNC_IMPL(__imp__sub_82525088) {
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
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f4
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,21888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21888);
	// bl 0x82881480
	sub_82881480(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825250b4
	if (cr6.eq) goto loc_825250B4;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_825250B4:
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// li r20,0
	r20.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8252522c
	if (!cr6.gt) goto loc_8252522C;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r22,0
	r22.s64 = 0;
	// lis r21,-31970
	r21.s64 = -2095185920;
	// lis r23,-31934
	r23.s64 = -2092826624;
	// lis r26,-31965
	r26.s64 = -2094858240;
	// lis r25,-31965
	r25.s64 = -2094858240;
	// lis r24,-31965
	r24.s64 = -2094858240;
	// lis r29,-31965
	r29.s64 = -2094858240;
	// addi r27,r11,24444
	r27.s64 = r11.s64 + 24444;
loc_825250E8:
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// add r28,r11,r22
	r28.u64 = r11.u64 + r22.u64;
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82525104
	if (cr6.lt) goto loc_82525104;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x82525108
	goto loc_82525108;
loc_82525104:
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
loc_82525108:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82525138
	if (cr6.eq) goto loc_82525138;
loc_8252511C:
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
	// bne cr6,0x8252511c
	if (!cr6.eq) goto loc_8252511C;
loc_82525138:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r28,28
	ctx.r3.s64 = r28.s64 + 28;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,44(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8251ebd0
	sub_8251EBD0(ctx, base);
	// lwz r11,21892(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 21892);
	// lwz r3,-14756(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + -14756);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82525184
	if (cr6.eq) goto loc_82525184;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82525188
	if (!cr6.eq) goto loc_82525188;
loc_82525184:
	// li r11,0
	r11.s64 = 0;
loc_82525188:
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// bl 0x82521060
	sub_82521060(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x825251a8
	if (cr6.eq) goto loc_825251A8;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// ble cr6,0x82525218
	if (!cr6.gt) goto loc_82525218;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bgt cr6,0x82525218
	if (cr6.gt) goto loc_82525218;
loc_825251A8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,-23384(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + -23384);
	// lwz r5,-23380(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + -23380);
	// bl 0x82524940
	sub_82524940(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,-23384(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + -23384);
	// lwz r5,-23376(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + -23376);
	// bl 0x82524940
	sub_82524940(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,-23384(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + -23384);
	// lwz r5,-23372(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + -23372);
	// bl 0x82524940
	sub_82524940(ctx, base);
loc_82525218:
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r22,r22,48
	r22.s64 = r22.s64 + 48;
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(r20.u32, r11.u32, xer);
	// blt cr6,0x825250e8
	if (cr6.lt) goto loc_825250E8;
loc_8252522C:
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x825253f8
	if (cr6.eq) goto loc_825253F8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x8252530c
	if (cr6.eq) goto loc_8252530C;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x8252546c
	if (!cr6.eq) goto loc_8252546C;
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82525264
	if (cr6.lt) goto loc_82525264;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82525268
	goto loc_82525268;
loc_82525264:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82525268:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82525290
	if (cr6.lt) goto loc_82525290;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82525294
	goto loc_82525294;
loc_82525290:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82525294:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825252bc
	if (cr6.lt) goto loc_825252BC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825252c0
	goto loc_825252C0;
loc_825252BC:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825252C0:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825252e4
	if (cr6.lt) goto loc_825252E4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825252e8
	goto loc_825252E8;
loc_825252E4:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825252E8:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x8251f450
	sub_8251F450(ctx, base);
	// b 0x8252546c
	goto loc_8252546C;
loc_8252530C:
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// lfd f13,24616(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24616);
	// lfd f0,16944(r9)
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16944);
	// lfd f12,24608(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + 24608);
	// stfd f13,32(r30)
	PPC_STORE_U64(r30.u32 + 32, ctx.f13.u64);
	// stfd f0,16(r30)
	PPC_STORE_U64(r30.u32 + 16, f0.u64);
	// stfd f0,40(r30)
	PPC_STORE_U64(r30.u32 + 40, f0.u64);
	// stfd f0,24(r30)
	PPC_STORE_U64(r30.u32 + 24, f0.u64);
	// stfd f0,48(r30)
	PPC_STORE_U64(r30.u32 + 48, f0.u64);
	// stfd f12,8(r30)
	PPC_STORE_U64(r30.u32 + 8, ctx.f12.u64);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8252535c
	if (cr6.lt) goto loc_8252535C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82525360
	goto loc_82525360;
loc_8252535C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82525360:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82525388
	if (cr6.lt) goto loc_82525388;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252538c
	goto loc_8252538C;
loc_82525388:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252538C:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825253b0
	if (cr6.lt) goto loc_825253B0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825253b4
	goto loc_825253B4;
loc_825253B0:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825253B4:
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
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// ld r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// ld r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// bl 0x8251ee58
	sub_8251EE58(ctx, base);
	// b 0x8252546c
	goto loc_8252546C;
loc_825253F8:
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82525414
	if (cr6.lt) goto loc_82525414;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82525418
	goto loc_82525418;
loc_82525414:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82525418:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252543c
	if (cr6.lt) goto loc_8252543C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82525440
	goto loc_82525440;
loc_8252543C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82525440:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfd f1,24600(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 24600);
	// lfd f2,24592(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24592);
	// bl 0x8251ed08
	sub_8251ED08(ctx, base);
loc_8252546C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x82525490
	if (cr6.eq) goto loc_82525490;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_82525490:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_82525494"))) PPC_WEAK_FUNC(sub_82525494);
PPC_FUNC_IMPL(__imp__sub_82525494) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_82525498"))) PPC_WEAK_FUNC(sub_82525498);
PPC_FUNC_IMPL(__imp__sub_82525498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825254c0
	if (!cr6.eq) goto loc_825254C0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r8,220(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 220);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_825254C0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,160(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x825254ec
	if (!cr6.eq) goto loc_825254EC;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lbz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// lwz r7,-23368(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23368);
	// lwz r5,-23380(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23380);
	// b 0x82524df0
	sub_82524DF0(ctx, base);
	return;
loc_825254EC:
	// lwz r9,164(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82525514
	if (!cr6.eq) goto loc_82525514;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lbz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// addi r8,r10,-23368
	ctx.r8.s64 = ctx.r10.s64 + -23368;
	// lwz r5,-23376(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23376);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x82524df0
	sub_82524DF0(ctx, base);
	return;
loc_82525514:
	// lwz r9,168(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lbz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// addi r8,r10,-23368
	ctx.r8.s64 = ctx.r10.s64 + -23368;
	// lwz r5,-23372(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23372);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x82524df0
	sub_82524DF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252553C"))) PPC_WEAK_FUNC(sub_8252553C);
PPC_FUNC_IMPL(__imp__sub_8252553C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82525540"))) PPC_WEAK_FUNC(sub_82525540);
PPC_FUNC_IMPL(__imp__sub_82525540) {
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
	// addi r28,r31,172
	r28.s64 = r31.s64 + 172;
	// addi r10,r11,24484
	ctx.r10.s64 = r11.s64 + 24484;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// li r11,15
	r11.s64 = 15;
	// stw r29,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r29.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r11.u32);
	// stw r29,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r29.u32);
	// stb r29,204(r31)
	PPC_STORE_U8(r31.u32 + 204, r29.u8);
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
	// stw r29,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r29.u32);
	// stb r29,232(r31)
	PPC_STORE_U8(r31.u32 + 232, r29.u8);
	// stw r11,280(r31)
	PPC_STORE_U32(r31.u32 + 280, r11.u32);
	// stw r29,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r29.u32);
	// stb r29,260(r31)
	PPC_STORE_U8(r31.u32 + 260, r29.u8);
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
	// addi r11,r31,204
	r11.s64 = r31.s64 + 204;
	// stw r29,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r29.u32);
	// stb r29,288(r31)
	PPC_STORE_U8(r31.u32 + 288, r29.u8);
	// lwz r9,224(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r29,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r29.u32);
	// blt cr6,0x825255c4
	if (cr6.lt) goto loc_825255C4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825255c8
	goto loc_825255C8;
loc_825255C4:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_825255C8:
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r29.u8);
	// addi r11,r31,232
	r11.s64 = r31.s64 + 232;
	// stw r29,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r29.u32);
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825255e8
	if (cr6.lt) goto loc_825255E8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825255ec
	goto loc_825255EC;
loc_825255E8:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_825255EC:
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r29.u8);
	// addi r11,r31,260
	r11.s64 = r31.s64 + 260;
	// stw r29,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r29.u32);
	// lwz r10,280(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252560c
	if (cr6.lt) goto loc_8252560C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82525610
	goto loc_82525610;
loc_8252560C:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82525610:
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r29.u8);
	// addi r11,r31,288
	r11.s64 = r31.s64 + 288;
	// stw r29,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r29.u32);
	// lwz r10,308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252562c
	if (cr6.lt) goto loc_8252562C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8252562C:
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// li r11,5381
	r11.s64 = 5381;
	// lwz r9,-23380(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23380);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82525668
	if (cr6.eq) goto loc_82525668;
loc_8252564C:
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
	// bne cr6,0x8252564c
	if (!cr6.eq) goto loc_8252564C;
loc_82525668:
	// stw r11,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r11.u32);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// li r11,5381
	r11.s64 = 5381;
	// lwz r9,-23376(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23376);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825256a4
	if (cr6.eq) goto loc_825256A4;
loc_82525688:
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
	// bne cr6,0x82525688
	if (!cr6.eq) goto loc_82525688;
loc_825256A4:
	// stw r11,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r11.u32);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// li r11,5381
	r11.s64 = 5381;
	// lwz r9,-23372(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23372);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825256e0
	if (cr6.eq) goto loc_825256E0;
loc_825256C4:
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
	// bne cr6,0x825256c4
	if (!cr6.eq) goto loc_825256C4;
loc_825256E0:
	// stw r11,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r11.u32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r11,-32174
	r11.s64 = -2108555264;
	// addi r30,r11,21656
	r30.s64 = r11.s64 + 21656;
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252570c
	if (cr6.eq) goto loc_8252570C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82525710
	if (!cr6.eq) goto loc_82525710;
loc_8252570C:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82525710:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,980
	ctx.r3.s64 = ctx.r9.s64 + 980;
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
	// lwz r11,19468(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19468);
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
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82525764"))) PPC_WEAK_FUNC(sub_82525764);
PPC_FUNC_IMPL(__imp__sub_82525764) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82525768"))) PPC_WEAK_FUNC(sub_82525768);
PPC_FUNC_IMPL(__imp__sub_82525768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-23388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -23388);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82525774"))) PPC_WEAK_FUNC(sub_82525774);
PPC_FUNC_IMPL(__imp__sub_82525774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82525778"))) PPC_WEAK_FUNC(sub_82525778);
PPC_FUNC_IMPL(__imp__sub_82525778) {
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
	// bl 0x82524ac0
	sub_82524AC0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825257b0
	if (cr6.eq) goto loc_825257B0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825257B0:
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

__attribute__((alias("__imp__sub_825257C4"))) PPC_WEAK_FUNC(sub_825257C4);
PPC_FUNC_IMPL(__imp__sub_825257C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825257C8"))) PPC_WEAK_FUNC(sub_825257C8);
PPC_FUNC_IMPL(__imp__sub_825257C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// stw r4,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r4.u32);
	// lwz r5,-23308(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -23308);
	// b 0x8251fdb0
	sub_8251FDB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825257D8"))) PPC_WEAK_FUNC(sub_825257D8);
PPC_FUNC_IMPL(__imp__sub_825257D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251ffe8
	sub_8251FFE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825257DC"))) PPC_WEAK_FUNC(sub_825257DC);
PPC_FUNC_IMPL(__imp__sub_825257DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825257E0"))) PPC_WEAK_FUNC(sub_825257E0);
PPC_FUNC_IMPL(__imp__sub_825257E0) {
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
	// addi r9,r11,24684
	ctx.r9.s64 = r11.s64 + 24684;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252581c
	if (cr6.eq) goto loc_8252581C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82525820
	if (!cr6.eq) goto loc_82525820;
loc_8252581C:
	// li r11,0
	r11.s64 = 0;
loc_82525820:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19636(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19636);
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
	// bne cr6,0x82525878
	if (!cr6.eq) goto loc_82525878;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82525878
	if (!cr6.eq) goto loc_82525878;
	// lwz r11,19636(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19636);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82525878:
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

__attribute__((alias("__imp__sub_8252588C"))) PPC_WEAK_FUNC(sub_8252588C);
PPC_FUNC_IMPL(__imp__sub_8252588C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82525890"))) PPC_WEAK_FUNC(sub_82525890);
PPC_FUNC_IMPL(__imp__sub_82525890) {
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
	// lwz r31,124(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x825258b8
	if (cr6.lt) goto loc_825258B8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x825258bc
	goto loc_825258BC;
loc_825258B8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_825258BC:
	// addi r30,r31,28
	r30.s64 = r31.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x8251ebd0
	sub_8251EBD0(ctx, base);
	// lis r31,-31965
	r31.s64 = -2094858240;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,-23304(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -23304);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-23304(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + -23304);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
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
	// lwz r8,192(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 192);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// bne cr6,0x8252596c
	if (!cr6.eq) goto loc_8252596C;
	// lwz r11,124(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 124);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252593c
	if (cr6.lt) goto loc_8252593C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82525940
	goto loc_82525940;
loc_8252593C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82525940:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfd f1,24744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 24744);
	// lfd f2,16944(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16944);
	// lfd f3,23192(r9)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 23192);
	// bl 0x8251f1c0
	sub_8251F1C0(ctx, base);
loc_8252596C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82525970"))) PPC_WEAK_FUNC(sub_82525970);
PPC_FUNC_IMPL(__imp__sub_82525970) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82525974"))) PPC_WEAK_FUNC(sub_82525974);
PPC_FUNC_IMPL(__imp__sub_82525974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82525978"))) PPC_WEAK_FUNC(sub_82525978);
PPC_FUNC_IMPL(__imp__sub_82525978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// beq cr6,0x82525b04
	if (cr6.eq) goto loc_82525B04;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r29,r10,17300
	r29.s64 = ctx.r10.s64 + 17300;
	// li r5,64
	ctx.r5.s64 = 64;
	// lfs f31,6196(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6196);
	f31.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 * f31.f64));
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8250c918
	sub_8250C918(ctx, base);
	// lfs f11,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lfs f10,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * f31.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r9,1,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r6,r11,-1
	ctx.r6.s64 = r11.s64 + -1;
	// and r30,r6,r9
	r30.u64 = ctx.r6.u64 & ctx.r9.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x8250c918
	sub_8250C918(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82525a40
	if (cr6.lt) goto loc_82525A40;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82525a44
	goto loc_82525A44;
loc_82525A40:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82525A44:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,-23304(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -23304);
	// bl 0x8251f4e8
	sub_8251F4E8(ctx, base);
	// extsw r10,r30
	ctx.r10.s64 = r30.s32;
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// li r9,0
	ctx.r9.s64 = 0;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// li r8,3
	ctx.r8.s64 = 3;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stfd f13,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82525aa0
	if (cr6.lt) goto loc_82525AA0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82525aa4
	goto loc_82525AA4;
loc_82525AA0:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82525AA4:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r6,r11,31476
	ctx.r6.s64 = r11.s64 + 31476;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
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
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82525b04
	if (cr6.eq) goto loc_82525B04;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82757960
	sub_82757960(ctx, base);
loc_82525B04:
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_82525B14"))) PPC_WEAK_FUNC(sub_82525B14);
PPC_FUNC_IMPL(__imp__sub_82525B14) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82525B18"))) PPC_WEAK_FUNC(sub_82525B18);
PPC_FUNC_IMPL(__imp__sub_82525B18) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bne cr6,0x82525bc0
	if (!cr6.eq) goto loc_82525BC0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,124(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r10,16512
	ctx.r8.s64 = ctx.r10.s64 + 16512;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82525b70
	if (cr6.lt) goto loc_82525B70;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82525b74
	goto loc_82525B74;
loc_82525B70:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82525B74:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// bl 0x8250c758
	sub_8250C758(ctx, base);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,-23304(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23304);
	// bl 0x8251f4e8
	sub_8251F4E8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82525bf4
	if (cr6.lt) goto loc_82525BF4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82525bf8
	goto loc_82525BF8;
loc_82525BC0:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x82525c38
	if (!cr6.eq) goto loc_82525C38;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r10,16508
	ctx.r8.s64 = ctx.r10.s64 + 16508;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82525bf4
	if (cr6.lt) goto loc_82525BF4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82525bf8
	goto loc_82525BF8;
loc_82525BF4:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82525BF8:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
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
loc_82525C38:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82525c58
	if (cr6.eq) goto loc_82525C58;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
loc_82525C58:
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

__attribute__((alias("__imp__sub_82525C6C"))) PPC_WEAK_FUNC(sub_82525C6C);
PPC_FUNC_IMPL(__imp__sub_82525C6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82525C70"))) PPC_WEAK_FUNC(sub_82525C70);
PPC_FUNC_IMPL(__imp__sub_82525C70) {
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
	// addi r28,r31,160
	r28.s64 = r31.s64 + 160;
	// addi r10,r11,24684
	ctx.r10.s64 = r11.s64 + 24684;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
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
	// beq cr6,0x82525cbc
	if (cr6.eq) goto loc_82525CBC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82525cc0
	if (!cr6.eq) goto loc_82525CC0;
loc_82525CBC:
	// li r11,0
	r11.s64 = 0;
loc_82525CC0:
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32174
	r11.s64 = -2108555264;
	// stw r9,192(r31)
	PPC_STORE_U32(r31.u32 + 192, ctx.r9.u32);
	// addi r29,r11,22904
	r29.s64 = r11.s64 + 22904;
	// stw r10,188(r31)
	PPC_STORE_U32(r31.u32 + 188, ctx.r10.u32);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82525cf4
	if (cr6.eq) goto loc_82525CF4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82525cf8
	if (!cr6.eq) goto loc_82525CF8;
loc_82525CF4:
	// li r11,0
	r11.s64 = 0;
loc_82525CF8:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,-1124
	ctx.r3.s64 = ctx.r9.s64 + -1124;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19636(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19636);
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
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82525D4C"))) PPC_WEAK_FUNC(sub_82525D4C);
PPC_FUNC_IMPL(__imp__sub_82525D4C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82525D50"))) PPC_WEAK_FUNC(sub_82525D50);
PPC_FUNC_IMPL(__imp__sub_82525D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-23308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -23308);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82525D5C"))) PPC_WEAK_FUNC(sub_82525D5C);
PPC_FUNC_IMPL(__imp__sub_82525D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82525D60"))) PPC_WEAK_FUNC(sub_82525D60);
PPC_FUNC_IMPL(__imp__sub_82525D60) {
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
	// bl 0x825257e0
	sub_825257E0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82525d98
	if (cr6.eq) goto loc_82525D98;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82525D98:
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

__attribute__((alias("__imp__sub_82525DAC"))) PPC_WEAK_FUNC(sub_82525DAC);
PPC_FUNC_IMPL(__imp__sub_82525DAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82525DB0"))) PPC_WEAK_FUNC(sub_82525DB0);
PPC_FUNC_IMPL(__imp__sub_82525DB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82525DB4"))) PPC_WEAK_FUNC(sub_82525DB4);
PPC_FUNC_IMPL(__imp__sub_82525DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82525DB8"))) PPC_WEAK_FUNC(sub_82525DB8);
PPC_FUNC_IMPL(__imp__sub_82525DB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpw cr6,r4,r5
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// extsw r11,r5
	r11.s64 = ctx.r5.s32;
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// fcfid f10,f0
	ctx.f10.f64 = double(f0.s64);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lfs f0,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f0.f64 = double(temp.f32);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// fdivs f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 / ctx.f7.f64));
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// fsubs f4,f0,f5
	ctx.f4.f64 = double(float(f0.f64 - ctx.f5.f64));
	// fmuls f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// stfd f2,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f2.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
}

__attribute__((alias("__imp__sub_82525E20"))) PPC_WEAK_FUNC(sub_82525E20);
PPC_FUNC_IMPL(__imp__sub_82525E20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82525E24"))) PPC_WEAK_FUNC(sub_82525E24);
PPC_FUNC_IMPL(__imp__sub_82525E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82525E28"))) PPC_WEAK_FUNC(sub_82525E28);
PPC_FUNC_IMPL(__imp__sub_82525E28) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r5,r9,25204
	ctx.r5.s64 = ctx.r9.s64 + 25204;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r3,25176
	ctx.r5.s64 = ctx.r3.s64 + 25176;
	// stfd f0,-23168(r4)
	PPC_STORE_U64(ctx.r4.u32 + -23168, f0.u64);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stfd f0,-23176(r8)
	PPC_STORE_U64(ctx.r8.u32 + -23176, f0.u64);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r7,25148
	ctx.r5.s64 = ctx.r7.s64 + 25148;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r11,-23196(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23196, r11.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r5,r7,25116
	ctx.r5.s64 = ctx.r7.s64 + 25116;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r8,25088
	ctx.r5.s64 = ctx.r8.s64 + 25088;
	// stfd f0,-23184(r9)
	PPC_STORE_U64(ctx.r9.u32 + -23184, f0.u64);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfd f0,-23192(r9)
	PPC_STORE_U64(ctx.r9.u32 + -23192, f0.u64);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r8,25056
	ctx.r5.s64 = ctx.r8.s64 + 25056;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lfd f12,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r11,-23200(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23200, r11.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r8,25028
	ctx.r5.s64 = ctx.r8.s64 + 25028;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r8,25004
	ctx.r5.s64 = ctx.r8.s64 + 25004;
	// stfd f0,-23208(r9)
	PPC_STORE_U64(ctx.r9.u32 + -23208, f0.u64);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r8,24976
	ctx.r5.s64 = ctx.r8.s64 + 24976;
	// stfd f0,-23216(r9)
	PPC_STORE_U64(ctx.r9.u32 + -23216, f0.u64);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lfd f10,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r11,-23236(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23236, r11.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r8,24948
	ctx.r5.s64 = ctx.r8.s64 + 24948;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stfd f0,-23224(r9)
	PPC_STORE_U64(ctx.r9.u32 + -23224, f0.u64);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// addi r5,r8,24920
	ctx.r5.s64 = ctx.r8.s64 + 24920;
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r8,24892
	ctx.r5.s64 = ctx.r8.s64 + 24892;
	// stfd f0,-23232(r9)
	PPC_STORE_U64(ctx.r9.u32 + -23232, f0.u64);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lfd f8,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r11,-23240(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23240, r11.u32);
	// beq cr6,0x82526168
	if (cr6.eq) goto loc_82526168;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82757960
	sub_82757960(ctx, base);
loc_82526168:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82526178"))) PPC_WEAK_FUNC(sub_82526178);
PPC_FUNC_IMPL(__imp__sub_82526178) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252617C"))) PPC_WEAK_FUNC(sub_8252617C);
PPC_FUNC_IMPL(__imp__sub_8252617C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82526180"))) PPC_WEAK_FUNC(sub_82526180);
PPC_FUNC_IMPL(__imp__sub_82526180) {
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
	// addi r10,r11,25244
	ctx.r10.s64 = r11.s64 + 25244;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825261bc
	if (cr6.eq) goto loc_825261BC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825261c0
	if (!cr6.eq) goto loc_825261C0;
loc_825261BC:
	// li r11,0
	r11.s64 = 0;
loc_825261C0:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19424(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19424);
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
	// bne cr6,0x82526218
	if (!cr6.eq) goto loc_82526218;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82526218
	if (!cr6.eq) goto loc_82526218;
	// lwz r11,19424(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19424);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82526218:
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82526234
	if (cr6.eq) goto loc_82526234;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82526238
	if (!cr6.eq) goto loc_82526238;
loc_82526234:
	// li r11,0
	r11.s64 = 0;
loc_82526238:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19420(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19420);
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
	// bne cr6,0x82526290
	if (!cr6.eq) goto loc_82526290;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82526290
	if (!cr6.eq) goto loc_82526290;
	// lwz r11,19420(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19420);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82526290:
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

__attribute__((alias("__imp__sub_825262AC"))) PPC_WEAK_FUNC(sub_825262AC);
PPC_FUNC_IMPL(__imp__sub_825262AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825262B0"))) PPC_WEAK_FUNC(sub_825262B0);
PPC_FUNC_IMPL(__imp__sub_825262B0) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,21888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21888);
	// bl 0x82881480
	sub_82881480(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825262dc
	if (cr6.eq) goto loc_825262DC;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_825262DC:
	// lwz r11,132(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825263f0
	if (!cr6.gt) goto loc_825263F0;
	// li r25,0
	r25.s64 = 0;
	// lis r27,-31965
	r27.s64 = -2094858240;
loc_825262F4:
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// add r29,r11,r25
	r29.u64 = r11.u64 + r25.u64;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82526310
	if (cr6.lt) goto loc_82526310;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x82526314
	goto loc_82526314;
loc_82526310:
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_82526314:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82526344
	if (cr6.eq) goto loc_82526344;
loc_82526328:
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
	// bne cr6,0x82526328
	if (!cr6.eq) goto loc_82526328;
loc_82526344:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r30,r29,28
	r30.s64 = r29.s64 + 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,44(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8251ebd0
	sub_8251EBD0(ctx, base);
	// lwz r10,-23248(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + -23248);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x825263a0
	if (cr6.eq) goto loc_825263A0;
loc_82526384:
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
	// bne cr6,0x82526384
	if (!cr6.eq) goto loc_82526384;
loc_825263A0:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-23248(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + -23248);
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
	// lwz r8,132(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r25,r25,48
	r25.s64 = r25.s64 + 48;
	// cmplw cr6,r26,r8
	cr6.compare<uint32_t>(r26.u32, ctx.r8.u32, xer);
	// blt cr6,0x825262f4
	if (cr6.lt) goto loc_825262F4;
loc_825263F0:
	// lwz r6,124(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// lwz r11,20(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82526408
	if (cr6.lt) goto loc_82526408;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x8252640c
	goto loc_8252640C;
loc_82526408:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_8252640C:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8252643c
	if (cr6.eq) goto loc_8252643C;
loc_82526420:
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
	// bne cr6,0x82526420
	if (!cr6.eq) goto loc_82526420;
loc_8252643C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r6,28
	ctx.r3.s64 = ctx.r6.s64 + 28;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82525e28
	sub_82525E28(ctx, base);
	// lwz r11,132(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x825265cc
	if (cr6.eq) goto loc_825265CC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82526538
	if (cr6.eq) goto loc_82526538;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x82526640
	if (!cr6.eq) goto loc_82526640;
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82526490
	if (cr6.lt) goto loc_82526490;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82526494
	goto loc_82526494;
loc_82526490:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82526494:
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
	// blt cr6,0x825264bc
	if (cr6.lt) goto loc_825264BC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825264c0
	goto loc_825264C0;
loc_825264BC:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825264C0:
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
	// blt cr6,0x825264e8
	if (cr6.lt) goto loc_825264E8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825264ec
	goto loc_825264EC;
loc_825264E8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825264EC:
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
	// blt cr6,0x82526510
	if (cr6.lt) goto loc_82526510;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82526514
	goto loc_82526514;
loc_82526510:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82526514:
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
	// b 0x82526640
	goto loc_82526640;
loc_82526538:
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82526554
	if (cr6.lt) goto loc_82526554;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82526558
	goto loc_82526558;
loc_82526554:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82526558:
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
	// blt cr6,0x82526580
	if (cr6.lt) goto loc_82526580;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82526584
	goto loc_82526584;
loc_82526580:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82526584:
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
	// blt cr6,0x825265a8
	if (cr6.lt) goto loc_825265A8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825265ac
	goto loc_825265AC;
loc_825265A8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825265AC:
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
	// b 0x82526640
	goto loc_82526640;
loc_825265CC:
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825265e8
	if (cr6.lt) goto loc_825265E8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825265ec
	goto loc_825265EC;
loc_825265E8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825265EC:
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
	// blt cr6,0x82526610
	if (cr6.lt) goto loc_82526610;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82526614
	goto loc_82526614;
loc_82526610:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82526614:
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
	// li r6,1
	ctx.r6.s64 = 1;
	// lfd f1,18248(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 18248);
	// lfd f2,16944(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16944);
	// bl 0x8251ed08
	sub_8251ED08(ctx, base);
loc_82526640:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82526650
	if (cr6.eq) goto loc_82526650;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_82526650:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82526654"))) PPC_WEAK_FUNC(sub_82526654);
PPC_FUNC_IMPL(__imp__sub_82526654) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82526658"))) PPC_WEAK_FUNC(sub_82526658);
PPC_FUNC_IMPL(__imp__sub_82526658) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,148(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825266f8
	if (cr6.eq) goto loc_825266F8;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x825266f8
	if (cr6.lt) goto loc_825266F8;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x825266f8
	if (!cr6.lt) goto loc_825266F8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lis r8,-31965
	ctx.r8.s64 = -2094858240;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r4,-23248(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23248);
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r6,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r6.u8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82756da8
	sub_82756DA8(ctx, base);
	// lbz r3,129(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 129);
	// ori r11,r3,4
	r11.u64 = ctx.r3.u64 | 4;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, r11.u8);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82756f30
	sub_82756F30(ctx, base);
loc_825266F8:
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

__attribute__((alias("__imp__sub_8252670C"))) PPC_WEAK_FUNC(sub_8252670C);
PPC_FUNC_IMPL(__imp__sub_8252670C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82526710"))) PPC_WEAK_FUNC(sub_82526710);
PPC_FUNC_IMPL(__imp__sub_82526710) {
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
	// lbz r11,148(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825269b4
	if (cr6.eq) goto loc_825269B4;
	// lwz r31,8(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lbz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825269b4
	if (cr6.lt) goto loc_825269B4;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// bge cr6,0x825269b4
	if (!cr6.lt) goto loc_825269B4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bne cr6,0x82526838
	if (!cr6.eq) goto loc_82526838;
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// addi r3,r31,54
	ctx.r3.s64 = r31.s64 + 54;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r31,31
	r11.s64 = r31.s64 + 31;
	// rlwinm r30,r3,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r31,58
	r11.s64 = r31.s64 + 58;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x825267e0
	if (cr6.eq) goto loc_825267E0;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// addi r9,r31,35
	ctx.r9.s64 = r31.s64 + 35;
	// lis r27,-31933
	r27.s64 = -2092761088;
	// lwz r28,-23244(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23244);
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lfd f0,-23168(r8)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + -23168);
	// stfdx f0,r6,r7
	PPC_STORE_U64(ctx.r6.u32 + ctx.r7.u32, f0.u64);
	// lfd f0,-23176(r5)
	f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + -23176);
	// stfdx f0,r4,r7
	PPC_STORE_U64(ctx.r4.u32 + ctx.r7.u32, f0.u64);
	// lwz r6,-23196(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + -23196);
	// lwzx r5,r30,r7
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + ctx.r7.u32);
	// lwzx r4,r29,r7
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + ctx.r7.u32);
	// bl 0x82525db8
	sub_82525DB8(ctx, base);
	// stwx r3,r29,r7
	PPC_STORE_U32(r29.u32 + ctx.r7.u32, ctx.r3.u32);
	// lwz r11,-23196(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -23196);
	// stwx r11,r30,r7
	PPC_STORE_U32(r30.u32 + ctx.r7.u32, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// b 0x82526940
	goto loc_82526940;
loc_825267E0:
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// addi r8,r31,35
	ctx.r8.s64 = r31.s64 + 35;
	// lis r27,-31933
	r27.s64 = -2092761088;
	// lwz r28,-23240(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23240);
	// rlwinm r4,r8,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lfd f0,-23184(r9)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -23184);
	// stfdx f0,r6,r7
	PPC_STORE_U64(ctx.r6.u32 + ctx.r7.u32, f0.u64);
	// lfd f0,-23192(r5)
	f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + -23192);
	// stfdx f0,r4,r7
	PPC_STORE_U64(ctx.r4.u32 + ctx.r7.u32, f0.u64);
	// lwz r6,-23200(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + -23200);
	// lwzx r5,r30,r7
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + ctx.r7.u32);
	// lwzx r4,r29,r7
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + ctx.r7.u32);
	// bl 0x82525db8
	sub_82525DB8(ctx, base);
	// stwx r3,r29,r7
	PPC_STORE_U32(r29.u32 + ctx.r7.u32, ctx.r3.u32);
	// lwz r11,-23200(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -23200);
	// stwx r11,r30,r7
	PPC_STORE_U32(r30.u32 + ctx.r7.u32, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// b 0x82526940
	goto loc_82526940;
loc_82526838:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82526924
	if (!cr6.eq) goto loc_82526924;
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r31,31
	r11.s64 = r31.s64 + 31;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r31,58
	r11.s64 = r31.s64 + 58;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x825268c0
	if (cr6.eq) goto loc_825268C0;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// addi r8,r31,35
	ctx.r8.s64 = r31.s64 + 35;
	// addi r3,r31,54
	ctx.r3.s64 = r31.s64 + 54;
	// lwz r28,-23232(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23232);
	// rlwinm r4,r8,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lfd f0,-23208(r9)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -23208);
	// rlwinm r30,r3,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stfdx f0,r6,r7
	PPC_STORE_U64(ctx.r6.u32 + ctx.r7.u32, f0.u64);
	// lis r27,-31933
	r27.s64 = -2092761088;
	// lfd f0,-23216(r5)
	f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + -23216);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stfdx f0,r4,r7
	PPC_STORE_U64(ctx.r4.u32 + ctx.r7.u32, f0.u64);
	// lwz r6,-23236(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + -23236);
	// lwzx r5,r30,r7
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + ctx.r7.u32);
	// lwzx r4,r29,r7
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + ctx.r7.u32);
	// bl 0x82525db8
	sub_82525DB8(ctx, base);
	// stwx r3,r29,r7
	PPC_STORE_U32(r29.u32 + ctx.r7.u32, ctx.r3.u32);
	// lwz r11,-23236(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -23236);
	// stwx r11,r30,r7
	PPC_STORE_U32(r30.u32 + ctx.r7.u32, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// b 0x82526940
	goto loc_82526940;
loc_825268C0:
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// addi r9,r31,35
	ctx.r9.s64 = r31.s64 + 35;
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r28,-23228(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23228);
	// addi r5,r31,54
	ctx.r5.s64 = r31.s64 + 54;
	// lfd f0,-23224(r8)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + -23224);
	// lis r27,-31933
	r27.s64 = -2092761088;
	// stfdx f0,r6,r7
	PPC_STORE_U64(ctx.r6.u32 + ctx.r7.u32, f0.u64);
	// rlwinm r30,r5,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,-23232(r4)
	f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + -23232);
	// stfdx f0,r3,r7
	PPC_STORE_U64(ctx.r3.u32 + ctx.r7.u32, f0.u64);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwzx r5,r30,r7
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + ctx.r7.u32);
	// lwz r6,-23240(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + -23240);
	// lwzx r4,r29,r7
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + ctx.r7.u32);
	// bl 0x82525db8
	sub_82525DB8(ctx, base);
	// stwx r3,r29,r7
	PPC_STORE_U32(r29.u32 + ctx.r7.u32, ctx.r3.u32);
	// lwz r11,-23240(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -23240);
	// stwx r11,r30,r7
	PPC_STORE_U32(r30.u32 + ctx.r7.u32, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// b 0x82526940
	goto loc_82526940;
loc_82526924:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82526940
	if (!cr6.eq) goto loc_82526940;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r11,-23224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -23224);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
loc_82526940:
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,124(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 124);
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
	// blt cr6,0x82526968
	if (cr6.lt) goto loc_82526968;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252696c
	goto loc_8252696C;
loc_82526968:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252696C:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_825269B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825269B8"))) PPC_WEAK_FUNC(sub_825269B8);
PPC_FUNC_IMPL(__imp__sub_825269B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825269BC"))) PPC_WEAK_FUNC(sub_825269BC);
PPC_FUNC_IMPL(__imp__sub_825269BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825269C0"))) PPC_WEAK_FUNC(sub_825269C0);
PPC_FUNC_IMPL(__imp__sub_825269C0) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r26,0
	r26.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r26
	r25.u64 = r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82526b14
	if (!cr6.gt) goto loc_82526B14;
	// mr r28,r26
	r28.u64 = r26.u64;
	// addi r31,r3,232
	r31.s64 = ctx.r3.s64 + 232;
	// addi r30,r3,248
	r30.s64 = ctx.r3.s64 + 248;
	// lis r27,-31965
	r27.s64 = -2094858240;
loc_825269F8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,-16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -16);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x82526af8
	if (!cr6.lt) goto loc_82526AF8;
	// lwz r4,-23248(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + -23248);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bgt cr6,0x82526a6c
	if (cr6.gt) goto loc_82526A6C;
	// lwz r11,124(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 124);
	// lfd f31,32(r30)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r30.u32 + 32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// stb r26,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, r26.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82756da8
	sub_82756DA8(ctx, base);
	// lbz r10,145(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 145);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stfd f31,136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 136, f31.u64);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r9,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r9.u8);
	// lwz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// bl 0x82756f30
	sub_82756F30(ctx, base);
	// lwz r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + -16);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// b 0x82526af8
	goto loc_82526AF8;
loc_82526A6C:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lfd f0,0(r30)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lfd f13,32(r30)
	ctx.f13.u64 = PPC_LOAD_U64(r30.u32 + 32);
	// extsw r9,r11
	ctx.r9.s64 = r11.s32;
	// fsub f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 - f0.f64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// lwz r11,124(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 124);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// fdiv f7,f9,f8
	ctx.f7.f64 = ctx.f9.f64 / ctx.f8.f64;
	// fmadd f31,f7,f12,f0
	f31.f64 = ctx.f7.f64 * ctx.f12.f64 + f0.f64;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// stb r26,209(r1)
	PPC_STORE_U8(ctx.r1.u32 + 209, r26.u8);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82756da8
	sub_82756DA8(ctx, base);
	// lbz r7,209(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 209);
	// ori r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 | 32;
	// stfd f31,200(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 200, f31.u64);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stb r6,209(r1)
	PPC_STORE_U8(ctx.r1.u32 + 209, ctx.r6.u8);
	// lwz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// bl 0x82756f30
	sub_82756F30(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82526AF8:
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r28,r28,48
	r28.s64 = r28.s64 + 48;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x825269f8
	if (cr6.lt) goto loc_825269F8;
loc_82526B14:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
}

__attribute__((alias("__imp__sub_82526B1C"))) PPC_WEAK_FUNC(sub_82526B1C);
PPC_FUNC_IMPL(__imp__sub_82526B1C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82526B20"))) PPC_WEAK_FUNC(sub_82526B20);
PPC_FUNC_IMPL(__imp__sub_82526B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825200d8
	sub_825200D8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r27,r31,160
	r27.s64 = r31.s64 + 160;
	// addi r10,r11,25244
	ctx.r10.s64 = r11.s64 + 25244;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r25,r31,188
	r25.s64 = r31.s64 + 188;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r31,272
	ctx.r10.s64 = r31.s64 + 272;
	// addi r11,r31,228
	r11.s64 = r31.s64 + 228;
	// li r26,0
	r26.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfd f0,16944(r9)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16944);
loc_82526B74:
	// stw r26,-12(r11)
	PPC_STORE_U32(r11.u32 + -12, r26.u32);
	// stwu r26,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r26.u32);
	r11.u32 = ea;
	// stfd f0,-24(r10)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r10.u32 + -24, f0.u64);
	// stfdu f0,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, r0.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82526b74
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82526B74;
	// lis r29,-31970
	r29.s64 = -2095185920;
	// lis r11,-32174
	r11.s64 = -2108555264;
	// addi r28,r11,26200
	r28.s64 = r11.s64 + 26200;
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82526bb0
	if (cr6.eq) goto loc_82526BB0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82526bb4
	if (!cr6.eq) goto loc_82526BB4;
loc_82526BB0:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_82526BB4:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r24,12(r10)
	r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r30,r11,-3784
	r30.s64 = r11.s64 + -3784;
	// addi r3,r10,1544
	ctx.r3.s64 = ctx.r10.s64 + 1544;
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
	// lwz r11,19424(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19424);
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
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// lis r11,-32174
	r11.s64 = -2108555264;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,26384
	r28.s64 = r11.s64 + 26384;
	// beq cr6,0x82526c28
	if (cr6.eq) goto loc_82526C28;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82526c2c
	if (!cr6.eq) goto loc_82526C2C;
loc_82526C28:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82526C2C:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,1600
	ctx.r3.s64 = ctx.r10.s64 + 1600;
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
	// lwz r11,19420(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19420);
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
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82526C7C"))) PPC_WEAK_FUNC(sub_82526C7C);
PPC_FUNC_IMPL(__imp__sub_82526C7C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82526C80"))) PPC_WEAK_FUNC(sub_82526C80);
PPC_FUNC_IMPL(__imp__sub_82526C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-23252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -23252);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82526C8C"))) PPC_WEAK_FUNC(sub_82526C8C);
PPC_FUNC_IMPL(__imp__sub_82526C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82526C90"))) PPC_WEAK_FUNC(sub_82526C90);
PPC_FUNC_IMPL(__imp__sub_82526C90) {
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
	// bl 0x82526180
	sub_82526180(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82526cc8
	if (cr6.eq) goto loc_82526CC8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82526CC8:
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

__attribute__((alias("__imp__sub_82526CDC"))) PPC_WEAK_FUNC(sub_82526CDC);
PPC_FUNC_IMPL(__imp__sub_82526CDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82526CE0"))) PPC_WEAK_FUNC(sub_82526CE0);
PPC_FUNC_IMPL(__imp__sub_82526CE0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,16768
	r31.s64 = r11.s64 + 16768;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82526d88
	if (!cr6.eq) goto loc_82526D88;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-13340
	ctx.r4.s64 = r11.s64 + -13340;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82526d88
	if (!cr6.eq) goto loc_82526D88;
	// lis r11,-31969
	r11.s64 = -2095120384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-30960
	ctx.r4.s64 = r11.s64 + -30960;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82526d88
	if (!cr6.eq) goto loc_82526D88;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-4620
	ctx.r4.s64 = r11.s64 + -4620;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82526d88
	if (!cr6.eq) goto loc_82526D88;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,16792
	ctx.r4.s64 = r11.s64 + 16792;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82526d98
	if (cr6.eq) goto loc_82526D98;
loc_82526D88:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251f8d8
	sub_8251F8D8(ctx, base);
loc_82526D98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82526D9C"))) PPC_WEAK_FUNC(sub_82526D9C);
PPC_FUNC_IMPL(__imp__sub_82526D9C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82526DA0"))) PPC_WEAK_FUNC(sub_82526DA0);
PPC_FUNC_IMPL(__imp__sub_82526DA0) {
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
	// addi r10,r11,25436
	ctx.r10.s64 = r11.s64 + 25436;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82526ddc
	if (cr6.eq) goto loc_82526DDC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82526de0
	if (!cr6.eq) goto loc_82526DE0;
loc_82526DDC:
	// li r11,0
	r11.s64 = 0;
loc_82526DE0:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19636(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19636);
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
	// bne cr6,0x82526e38
	if (!cr6.eq) goto loc_82526E38;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82526e38
	if (!cr6.eq) goto loc_82526E38;
	// lwz r11,19636(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19636);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82526E38:
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82526e54
	if (cr6.eq) goto loc_82526E54;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82526e58
	if (!cr6.eq) goto loc_82526E58;
loc_82526E54:
	// li r11,0
	r11.s64 = 0;
loc_82526E58:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19572(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19572);
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
	// bne cr6,0x82526eb0
	if (!cr6.eq) goto loc_82526EB0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82526eb0
	if (!cr6.eq) goto loc_82526EB0;
	// lwz r11,19572(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19572);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82526EB0:
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

__attribute__((alias("__imp__sub_82526ECC"))) PPC_WEAK_FUNC(sub_82526ECC);
PPC_FUNC_IMPL(__imp__sub_82526ECC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82526ED0"))) PPC_WEAK_FUNC(sub_82526ED0);
PPC_FUNC_IMPL(__imp__sub_82526ED0) {
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
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82526f78
	if (cr6.eq) goto loc_82526F78;
	// li r29,0
	r29.s64 = 0;
loc_82526EF4:
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// add r31,r29,r11
	r31.u64 = r29.u64 + r11.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82526f10
	if (cr6.lt) goto loc_82526F10;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x82526f14
	goto loc_82526F14;
loc_82526F10:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_82526F14:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82526f44
	if (cr6.eq) goto loc_82526F44;
loc_82526F28:
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
	// bne cr6,0x82526f28
	if (!cr6.eq) goto loc_82526F28;
loc_82526F44:
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x8251ebd0
	sub_8251EBD0(ctx, base);
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82526ef4
	if (cr6.lt) goto loc_82526EF4;
loc_82526F78:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x825270f0
	if (cr6.eq) goto loc_825270F0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82527058
	if (cr6.eq) goto loc_82527058;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x82527160
	if (!cr6.eq) goto loc_82527160;
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82526fac
	if (cr6.lt) goto loc_82526FAC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82526fb0
	goto loc_82526FB0;
loc_82526FAC:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82526FB0:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82526fd8
	if (cr6.lt) goto loc_82526FD8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82526fdc
	goto loc_82526FDC;
loc_82526FD8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82526FDC:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82527004
	if (cr6.lt) goto loc_82527004;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82527008
	goto loc_82527008;
loc_82527004:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82527008:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252702c
	if (cr6.lt) goto loc_8252702C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82527030
	goto loc_82527030;
loc_8252702C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82527030:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x8251f450
	sub_8251F450(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_82527058:
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82527074
	if (cr6.lt) goto loc_82527074;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82527078
	goto loc_82527078;
loc_82527074:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82527078:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825270a0
	if (cr6.lt) goto loc_825270A0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825270a4
	goto loc_825270A4;
loc_825270A0:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825270A4:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825270c8
	if (cr6.lt) goto loc_825270C8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825270cc
	goto loc_825270CC;
loc_825270C8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825270CC:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x8251f3c0
	sub_8251F3C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_825270F0:
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82527108
	if (cr6.lt) goto loc_82527108;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252710c
	goto loc_8252710C;
loc_82527108:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252710C:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82527130
	if (cr6.lt) goto loc_82527130;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82527134
	goto loc_82527134;
loc_82527130:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82527134:
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfd f1,25496(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 25496);
	// lfd f2,16952(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16952);
	// bl 0x8251ed08
	sub_8251ED08(ctx, base);
loc_82527160:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82527164"))) PPC_WEAK_FUNC(sub_82527164);
PPC_FUNC_IMPL(__imp__sub_82527164) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82527168"))) PPC_WEAK_FUNC(sub_82527168);
PPC_FUNC_IMPL(__imp__sub_82527168) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r31,0
	r31.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r22,r31
	r22.u64 = r31.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r31,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, r31.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// ble cr6,0x8252731c
	if (!cr6.gt) goto loc_8252731C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r23,r31
	r23.u64 = r31.u64;
	// lis r25,-31965
	r25.s64 = -2094858240;
	// lis r24,-31965
	r24.s64 = -2094858240;
	// addi r26,r11,18280
	r26.s64 = r11.s64 + 18280;
loc_825271B0:
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// li r30,5
	r30.s64 = 5;
	// add r29,r11,r23
	r29.u64 = r11.u64 + r23.u64;
	// addi r27,r29,28
	r27.s64 = r29.s64 + 28;
loc_825271C0:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r6,-23168(r24)
	ctx.r6.u64 = PPC_LOAD_U32(r24.u32 + -23168);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x825271f4
	if (cr6.lt) goto loc_825271F4;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x825271f8
	goto loc_825271F8;
loc_825271F4:
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_825271F8:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82527228
	if (cr6.eq) goto loc_82527228;
loc_8252720C:
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
	// bne cr6,0x8252720c
	if (!cr6.eq) goto loc_8252720C;
loc_82527228:
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
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
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825272d8
	if (cr6.eq) goto loc_825272D8;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,-23164(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + -23164);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82526ce0
	sub_82526CE0(ctx, base);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825272d8
	if (cr6.eq) goto loc_825272D8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_825272D8:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825272fc
	if (cr6.eq) goto loc_825272FC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_825272FC:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// bge cr6,0x825271c0
	if (!cr6.lt) goto loc_825271C0;
	// lwz r11,132(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r23,r23,48
	r23.s64 = r23.s64 + 48;
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// blt cr6,0x825271b0
	if (cr6.lt) goto loc_825271B0;
loc_8252731C:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_82527328"))) PPC_WEAK_FUNC(sub_82527328);
PPC_FUNC_IMPL(__imp__sub_82527328) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_8252732C"))) PPC_WEAK_FUNC(sub_8252732C);
PPC_FUNC_IMPL(__imp__sub_8252732C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82527330"))) PPC_WEAK_FUNC(sub_82527330);
PPC_FUNC_IMPL(__imp__sub_82527330) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// bge cr6,0x82527444
	if (!cr6.lt) goto loc_82527444;
	// lwz r11,220(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bge cr6,0x82527444
	if (!cr6.lt) goto loc_82527444;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,25408
	ctx.r8.s64 = ctx.r10.s64 + 25408;
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x82527444
	if (!cr6.lt) goto loc_82527444;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + r11.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r11,r4,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r8,18280
	ctx.r5.s64 = ctx.r8.s64 + 18280;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r6,-23172(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23172);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,4
	r11.s64 = 4;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x825273ec
	if (cr6.lt) goto loc_825273EC;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x825273f0
	goto loc_825273F0;
loc_825273EC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_825273F0:
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
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
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r10.u32);
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_82527444:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
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

__attribute__((alias("__imp__sub_82527460"))) PPC_WEAK_FUNC(sub_82527460);
PPC_FUNC_IMPL(__imp__sub_82527460) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82527464"))) PPC_WEAK_FUNC(sub_82527464);
PPC_FUNC_IMPL(__imp__sub_82527464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82527468"))) PPC_WEAK_FUNC(sub_82527468);
PPC_FUNC_IMPL(__imp__sub_82527468) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,148(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82527580
	if (cr6.eq) goto loc_82527580;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82527580
	if (!cr6.lt) goto loc_82527580;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82527580
	if (cr6.lt) goto loc_82527580;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f0,25408(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25408);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x82527574
	if (!cr6.gt) goto loc_82527574;
	// lwz r10,220(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82527580
	if (!cr6.gt) goto loc_82527580;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// addi r6,r8,25504
	ctx.r6.s64 = ctx.r8.s64 + 25504;
	// rlwinm r11,r7,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// blt cr6,0x8252750c
	if (cr6.lt) goto loc_8252750C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82527510
	goto loc_82527510;
loc_8252750C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82527510:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82527168
	sub_82527168(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82527574:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82527330
	sub_82527330(ctx, base);
loc_82527580:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82527590"))) PPC_WEAK_FUNC(sub_82527590);
PPC_FUNC_IMPL(__imp__sub_82527590) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82527594"))) PPC_WEAK_FUNC(sub_82527594);
PPC_FUNC_IMPL(__imp__sub_82527594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82527598"))) PPC_WEAK_FUNC(sub_82527598);
PPC_FUNC_IMPL(__imp__sub_82527598) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,148(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825276b4
	if (cr6.eq) goto loc_825276B4;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x825276b4
	if (!cr6.lt) goto loc_825276B4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x825276b4
	if (cr6.lt) goto loc_825276B4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f1,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,25428(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25428);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// beq cr6,0x82527610
	if (cr6.eq) goto loc_82527610;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,25408(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25408);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x82527610
	if (cr6.gt) goto loc_82527610;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x82527330
	sub_82527330(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82527610:
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x825276b4
	if (!cr6.gt) goto loc_825276B4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// addi r6,r8,25504
	ctx.r6.s64 = ctx.r8.s64 + 25504;
	// rlwinm r11,r7,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// blt cr6,0x82527660
	if (cr6.lt) goto loc_82527660;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82527664
	goto loc_82527664;
loc_82527660:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82527664:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82527168
	sub_82527168(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_825276B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825276C4"))) PPC_WEAK_FUNC(sub_825276C4);
PPC_FUNC_IMPL(__imp__sub_825276C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825276C8"))) PPC_WEAK_FUNC(sub_825276C8);
PPC_FUNC_IMPL(__imp__sub_825276C8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x825276ec
	if (!cr6.eq) goto loc_825276EC;
	// bl 0x82527168
	sub_82527168(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_825276EC:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x825277c0
	if (!cr6.eq) goto loc_825277C0;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// li r27,0
	r27.s64 = 0;
	// mr r25,r27
	r25.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825277c0
	if (!cr6.gt) goto loc_825277C0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r27
	r31.u64 = r27.u64;
	// li r28,4
	r28.s64 = 4;
	// addi r26,r10,25512
	r26.s64 = ctx.r10.s64 + 25512;
	// addi r29,r11,25504
	r29.s64 = r11.s64 + 25504;
loc_82527720:
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82527748
	if (cr6.lt) goto loc_82527748;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252774c
	goto loc_8252774C;
loc_82527748:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252774C:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
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
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825277ac
	if (cr6.eq) goto loc_825277AC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
loc_825277AC:
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x82527720
	if (cr6.lt) goto loc_82527720;
loc_825277C0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825277C4"))) PPC_WEAK_FUNC(sub_825277C4);
PPC_FUNC_IMPL(__imp__sub_825277C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825277C8"))) PPC_WEAK_FUNC(sub_825277C8);
PPC_FUNC_IMPL(__imp__sub_825277C8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825200d8
	sub_825200D8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r27,r31,160
	r27.s64 = r31.s64 + 160;
	// addi r10,r11,25436
	ctx.r10.s64 = r11.s64 + 25436;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
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
	// lis r29,-31970
	r29.s64 = -2095185920;
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82527820
	if (cr6.eq) goto loc_82527820;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82527824
	if (!cr6.eq) goto loc_82527824;
loc_82527820:
	// li r11,0
	r11.s64 = 0;
loc_82527824:
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// li r9,6
	ctx.r9.s64 = 6;
	// lis r11,-32174
	r11.s64 = -2108555264;
	// stw r9,220(r31)
	PPC_STORE_U32(r31.u32 + 220, ctx.r9.u32);
	// addi r28,r11,29800
	r28.s64 = r11.s64 + 29800;
	// stw r10,216(r31)
	PPC_STORE_U32(r31.u32 + 216, ctx.r10.u32);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82527858
	if (cr6.eq) goto loc_82527858;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252785c
	if (!cr6.eq) goto loc_8252785C;
loc_82527858:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8252785C:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r25,12(r10)
	r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r30,r11,-3784
	r30.s64 = r11.s64 + -3784;
	// addi r3,r10,-1124
	ctx.r3.s64 = ctx.r10.s64 + -1124;
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
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,19636(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19636);
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
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// lis r11,-32174
	r11.s64 = -2108555264;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,30104
	r28.s64 = r11.s64 + 30104;
	// beq cr6,0x825278d0
	if (cr6.eq) goto loc_825278D0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825278d4
	if (!cr6.eq) goto loc_825278D4;
loc_825278D0:
	// li r11,0
	r11.s64 = 0;
loc_825278D4:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,-332
	ctx.r3.s64 = ctx.r10.s64 + -332;
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
	// lwz r11,19572(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19572);
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
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82527924"))) PPC_WEAK_FUNC(sub_82527924);
PPC_FUNC_IMPL(__imp__sub_82527924) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82527928"))) PPC_WEAK_FUNC(sub_82527928);
PPC_FUNC_IMPL(__imp__sub_82527928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-23176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -23176);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82527934"))) PPC_WEAK_FUNC(sub_82527934);
PPC_FUNC_IMPL(__imp__sub_82527934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82527938"))) PPC_WEAK_FUNC(sub_82527938);
PPC_FUNC_IMPL(__imp__sub_82527938) {
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
	// bl 0x82526da0
	sub_82526DA0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82527970
	if (cr6.eq) goto loc_82527970;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82527970:
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

__attribute__((alias("__imp__sub_82527984"))) PPC_WEAK_FUNC(sub_82527984);
PPC_FUNC_IMPL(__imp__sub_82527984) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82527988"))) PPC_WEAK_FUNC(sub_82527988);
PPC_FUNC_IMPL(__imp__sub_82527988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// stw r4,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r4.u32);
	// lwz r5,-23104(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -23104);
	// b 0x8251fdb0
	sub_8251FDB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82527998"))) PPC_WEAK_FUNC(sub_82527998);
PPC_FUNC_IMPL(__imp__sub_82527998) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251ffe8
	sub_8251FFE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252799C"))) PPC_WEAK_FUNC(sub_8252799C);
PPC_FUNC_IMPL(__imp__sub_8252799C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825279A0"))) PPC_WEAK_FUNC(sub_825279A0);
PPC_FUNC_IMPL(__imp__sub_825279A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = r11.u64 + ctx.r3.u64;
	// lfs f1,220(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825279B8"))) PPC_WEAK_FUNC(sub_825279B8);
PPC_FUNC_IMPL(__imp__sub_825279B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,164(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	f0.f64 = double(temp.f32);
	// fdivs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 / f0.f64));
	// lfd f12,176(r3)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r3.u32 + 176);
	// fmul f1,f13,f12
	ctx.f1.f64 = ctx.f13.f64 * ctx.f12.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825279CC"))) PPC_WEAK_FUNC(sub_825279CC);
PPC_FUNC_IMPL(__imp__sub_825279CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825279D0"))) PPC_WEAK_FUNC(sub_825279D0);
PPC_FUNC_IMPL(__imp__sub_825279D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lbz r11,148(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,1
	r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,192(r3)
	PPC_STORE_U8(ctx.r3.u32 + 192, r11.u8);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r10.u32);
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,208(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r10,r3,212
	ctx.r10.s64 = ctx.r3.s64 + 212;
	// addi r11,r4,12
	r11.s64 = ctx.r4.s64 + 12;
loc_82527A0C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r9,r5
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, xer);
	// blt cr6,0x82527a0c
	if (cr6.lt) goto loc_82527A0C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82527A40"))) PPC_WEAK_FUNC(sub_82527A40);
PPC_FUNC_IMPL(__imp__sub_82527A40) {
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
	// addi r10,r11,25724
	ctx.r10.s64 = r11.s64 + 25724;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82527a7c
	if (cr6.eq) goto loc_82527A7C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82527a80
	if (!cr6.eq) goto loc_82527A80;
loc_82527A7C:
	// li r11,0
	r11.s64 = 0;
loc_82527A80:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19508(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19508);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r26,r27,336
	r26.s64 = r27.s64 + 336;
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
	// bne cr6,0x82527ad8
	if (!cr6.eq) goto loc_82527AD8;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82527ad8
	if (!cr6.eq) goto loc_82527AD8;
	// lwz r11,19508(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19508);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82527AD8:
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82527af4
	if (cr6.eq) goto loc_82527AF4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82527af8
	if (!cr6.eq) goto loc_82527AF8;
loc_82527AF4:
	// li r11,0
	r11.s64 = 0;
loc_82527AF8:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19512(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19512);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r28,r27,308
	r28.s64 = r27.s64 + 308;
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
	// bne cr6,0x82527b50
	if (!cr6.eq) goto loc_82527B50;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82527b50
	if (!cr6.eq) goto loc_82527B50;
	// lwz r11,19512(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19512);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82527B50:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
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

__attribute__((alias("__imp__sub_82527B6C"))) PPC_WEAK_FUNC(sub_82527B6C);
PPC_FUNC_IMPL(__imp__sub_82527B6C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82527B70"))) PPC_WEAK_FUNC(sub_82527B70);
PPC_FUNC_IMPL(__imp__sub_82527B70) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f0
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lis r8,-31962
	ctx.r8.s64 = -2094661632;
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r24,r9
	r24.s64 = ctx.r9.s32;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// lwz r6,24192(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24192);
	// addi r21,r3,120
	r21.s64 = ctx.r3.s64 + 120;
	// rlwinm r11,r7,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// li r29,0
	r29.s64 = 0;
	// add r5,r11,r9
	ctx.r5.u64 = r11.u64 + ctx.r9.u64;
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// cmplw cr6,r24,r5
	cr6.compare<uint32_t>(r24.u32, ctx.r5.u32, xer);
	// beq cr6,0x82527f28
	if (cr6.eq) goto loc_82527F28;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r26,r24,28
	r26.s64 = r24.s64 + 28;
	// lis r25,-31965
	r25.s64 = -2094858240;
	// lis r18,-31965
	r18.s64 = -2094858240;
	// lis r22,-31965
	r22.s64 = -2094858240;
	// lis r23,-31965
	r23.s64 = -2094858240;
	// addi r20,r11,25808
	r20.s64 = r11.s64 + 25808;
	// addi r19,r10,25800
	r19.s64 = ctx.r10.s64 + 25800;
loc_82527BDC:
	// lwz r11,-8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -8);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82527bf0
	if (cr6.lt) goto loc_82527BF0;
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// b 0x82527bf4
	goto loc_82527BF4;
loc_82527BF0:
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
loc_82527BF4:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82527c24
	if (cr6.eq) goto loc_82527C24;
loc_82527C08:
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
	// bne cr6,0x82527c08
	if (!cr6.eq) goto loc_82527C08;
loc_82527C24:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,16(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8251ebd0
	sub_8251EBD0(ctx, base);
	// lwz r10,-23100(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + -23100);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82527c7c
	if (cr6.eq) goto loc_82527C7C;
loc_82527C60:
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
	// bne cr6,0x82527c60
	if (!cr6.eq) goto loc_82527C60;
loc_82527C7C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r5,-23100(r23)
	ctx.r5.u64 = PPC_LOAD_U32(r23.u32 + -23100);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
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
	// lwz r8,168(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 168);
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x82527d78
	if (!cr6.gt) goto loc_82527D78;
loc_82527CCC:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r5,-23088(r22)
	ctx.r5.u64 = PPC_LOAD_U32(r22.u32 + -23088);
	// addi r28,r11,1
	r28.s64 = r11.s64 + 1;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// sth r29,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, r29.u16);
	// stb r29,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r29.u8);
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lbz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// li r11,5381
	r11.s64 = 5381;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82527d2c
	if (cr6.eq) goto loc_82527D2C;
loc_82527D10:
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
	// bne cr6,0x82527d10
	if (!cr6.eq) goto loc_82527D10;
loc_82527D2C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
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
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
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
	// lwz r8,168(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 168);
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmpw cr6,r28,r8
	cr6.compare<int32_t>(r28.s32, ctx.r8.s32, xer);
	// blt cr6,0x82527ccc
	if (cr6.lt) goto loc_82527CCC;
loc_82527D78:
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r29.u32);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
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
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// stfd f0,176(r27)
	PPC_STORE_U64(r27.u32 + 176, f0.u64);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// cntlzw r11,r7
	r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lfd f13,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// stfd f13,184(r27)
	PPC_STORE_U64(r27.u32 + 184, ctx.f13.u64);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r5,-23096(r18)
	ctx.r5.u64 = PPC_LOAD_U32(r18.u32 + -23096);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
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
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lwz r10,-23092(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + -23092);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82527e58
	if (cr6.eq) goto loc_82527E58;
loc_82527E3C:
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
	// bne cr6,0x82527e3c
	if (!cr6.eq) goto loc_82527E3C;
loc_82527E58:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-23092(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + -23092);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
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
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82527eb8
	if (cr6.eq) goto loc_82527EB8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
loc_82527EB8:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82527edc
	if (cr6.eq) goto loc_82527EDC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
loc_82527EDC:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82527f00
	if (cr6.eq) goto loc_82527F00;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r29.u32);
loc_82527F00:
	// lwz r11,12(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 12);
	// addi r24,r24,48
	r24.s64 = r24.s64 + 48;
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// addi r26,r26,48
	r26.s64 = r26.s64 + 48;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r24,r10
	cr6.compare<uint32_t>(r24.u32, ctx.r10.u32, xer);
	// bne cr6,0x82527bdc
	if (!cr6.eq) goto loc_82527BDC;
loc_82527F28:
	// lwz r11,132(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 132);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x825280b4
	if (cr6.eq) goto loc_825280B4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82528014
	if (cr6.eq) goto loc_82528014;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x825281fc
	if (!cr6.eq) goto loc_825281FC;
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82527f60
	if (cr6.lt) goto loc_82527F60;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82527f64
	goto loc_82527F64;
loc_82527F60:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82527F64:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82527f8c
	if (cr6.lt) goto loc_82527F8C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82527f90
	goto loc_82527F90;
loc_82527F8C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82527F90:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82527fb8
	if (cr6.lt) goto loc_82527FB8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82527fbc
	goto loc_82527FBC;
loc_82527FB8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82527FBC:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82527fe0
	if (cr6.lt) goto loc_82527FE0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82527fe4
	goto loc_82527FE4;
loc_82527FE0:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82527FE4:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x8251f450
	sub_8251F450(ctx, base);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x828e9440
	return;
loc_82528014:
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82528030
	if (cr6.lt) goto loc_82528030;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82528034
	goto loc_82528034;
loc_82528030:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82528034:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252805c
	if (cr6.lt) goto loc_8252805C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82528060
	goto loc_82528060;
loc_8252805C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82528060:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82528084
	if (cr6.lt) goto loc_82528084;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82528088
	goto loc_82528088;
loc_82528084:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82528088:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x8251f3c0
	sub_8251F3C0(ctx, base);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x828e9440
	return;
loc_825280B4:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825280d4
	if (cr6.eq) goto loc_825280D4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825280d4
	if (cr6.eq) goto loc_825280D4;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_825280D4:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r3,148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 148);
	// li r31,5381
	r31.s64 = 5381;
	// addi r10,r11,22972
	ctx.r10.s64 = r11.s64 + 22972;
	// li r11,71
	r11.s64 = 71;
loc_825280E8:
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
	// bne cr6,0x825280e8
	if (!cr6.eq) goto loc_825280E8;
	// bl 0x82517c10
	sub_82517C10(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// bne cr6,0x82528188
	if (!cr6.eq) goto loc_82528188;
	// lwz r11,364(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 364);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82528188
	if (!cr6.eq) goto loc_82528188;
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82528138
	if (cr6.lt) goto loc_82528138;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252813c
	goto loc_8252813C;
loc_82528138:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252813C:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82528170
	if (cr6.lt) goto loc_82528170;
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f1,25792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 25792);
	// b 0x825281e0
	goto loc_825281E0;
loc_82528170:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f1,25792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 25792);
	// b 0x825281e0
	goto loc_825281E0;
loc_82528188:
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825281a4
	if (cr6.lt) goto loc_825281A4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825281a8
	goto loc_825281A8;
loc_825281A4:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825281A8:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825281cc
	if (cr6.lt) goto loc_825281CC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825281d0
	goto loc_825281D0;
loc_825281CC:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825281D0:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f1,16952(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 16952);
loc_825281E0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfd f2,16944(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16944);
	// bl 0x8251ed08
	sub_8251ED08(ctx, base);
loc_825281FC:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_82528208"))) PPC_WEAK_FUNC(sub_82528208);
PPC_FUNC_IMPL(__imp__sub_82528208) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_8252820C"))) PPC_WEAK_FUNC(sub_8252820C);
PPC_FUNC_IMPL(__imp__sub_8252820C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82528210"))) PPC_WEAK_FUNC(sub_82528210);
PPC_FUNC_IMPL(__imp__sub_82528210) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r30,0
	r30.s64 = 0;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// stb r30,193(r1)
	PPC_STORE_U8(ctx.r1.u32 + 193, r30.u8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r4,-23088(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23088);
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// bl 0x82528db8
	sub_82528DB8(ctx, base);
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// lis r8,-31965
	ctx.r8.s64 = -2094858240;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// lwz r5,-23080(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23080);
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// lwz r5,-23076(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23076);
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// cntlzw r11,r7
	r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82528300
	if (cr6.eq) goto loc_82528300;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82528304
	if (!cr6.eq) goto loc_82528304;
loc_82528300:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82528304:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// bl 0x8250c758
	sub_8250C758(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
	// cmplwi cr6,r28,4
	cr6.compare<uint32_t>(r28.u32, 4, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bgt cr6,0x82528374
	if (cr6.gt) goto loc_82528374;
	// mtctr r28
	ctr.u64 = r28.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82528350
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82528350;
	// bdzf 4*cr6+eq,0x8252835c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8252835C;
	// bdzf 4*cr6+eq,0x82528368
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82528368;
	// bne cr6,0x82528374
	if (!cr6.eq) goto loc_82528374;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r9,r11,25860
	ctx.r9.s64 = r11.s64 + 25860;
	// b 0x8252837c
	goto loc_8252837C;
loc_82528350:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r9,r11,25852
	ctx.r9.s64 = r11.s64 + 25852;
	// b 0x8252837c
	goto loc_8252837C;
loc_8252835C:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r9,r11,25840
	ctx.r9.s64 = r11.s64 + 25840;
	// b 0x8252837c
	goto loc_8252837C;
loc_82528368:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r9,r11,25832
	ctx.r9.s64 = r11.s64 + 25832;
	// b 0x8252837c
	goto loc_8252837C;
loc_82528374:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r9,r11,25824
	ctx.r9.s64 = r11.s64 + 25824;
loc_8252837C:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// lwz r5,-23084(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23084);
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r6,r6,25512
	ctx.r6.s64 = ctx.r6.s64 + 25512;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 - f30.f64));
	// lfs f13,164(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfd f11,176(r29)
	ctx.f11.u64 = PPC_LOAD_U64(r29.u32 + 176);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fmul f31,f12,f11
	f31.f64 = ctx.f12.f64 * ctx.f11.f64;
	// bl 0x82756da8
	sub_82756DA8(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfd f10,184(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(r29.u32 + 184);
	// li r7,1
	ctx.r7.s64 = 1;
	// fadd f9,f10,f31
	ctx.f9.f64 = ctx.f10.f64 + f31.f64;
	// li r6,97
	ctx.r6.s64 = 97;
	// stfd f9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f9.u64);
	// stb r7,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r7.u8);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stb r6,193(r1)
	PPC_STORE_U8(ctx.r1.u32 + 193, ctx.r6.u8);
	// lfd f0,25816(r8)
	f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 25816);
	// stfd f0,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, f0.u64);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82756f30
	sub_82756F30(ctx, base);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r4,r5,26,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82528478
	if (cr6.eq) goto loc_82528478;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82528478:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8252849c
	if (cr6.eq) goto loc_8252849C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_8252849C:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825284c0
	if (cr6.eq) goto loc_825284C0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_825284C0:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825284e0
	if (cr6.eq) goto loc_825284E0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82757960
	sub_82757960(ctx, base);
loc_825284E0:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
}

__attribute__((alias("__imp__sub_825284F4"))) PPC_WEAK_FUNC(sub_825284F4);
PPC_FUNC_IMPL(__imp__sub_825284F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825284F8"))) PPC_WEAK_FUNC(sub_825284F8);
PPC_FUNC_IMPL(__imp__sub_825284F8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stb r30,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, r30.u8);
	// lwz r4,-23088(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23088);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// bl 0x82528db8
	sub_82528DB8(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82756da8
	sub_82756DA8(ctx, base);
	// li r8,64
	ctx.r8.s64 = 64;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r30.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r8,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r8.u8);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82756f30
	sub_82756F30(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
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

__attribute__((alias("__imp__sub_8252858C"))) PPC_WEAK_FUNC(sub_8252858C);
PPC_FUNC_IMPL(__imp__sub_8252858C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82528590"))) PPC_WEAK_FUNC(sub_82528590);
PPC_FUNC_IMPL(__imp__sub_82528590) {
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
	// lwz r11,64(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82528664
	if (!cr6.lt) goto loc_82528664;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82528664
	if (cr6.lt) goto loc_82528664;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lis r8,-31965
	ctx.r8.s64 = -2094858240;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r4,-23092(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23092);
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// lwz r5,-23076(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23076);
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lis r6,-31970
	ctx.r6.s64 = -2095185920;
	// lwz r3,-14756(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82528640
	if (cr6.eq) goto loc_82528640;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82528640
	if (cr6.eq) goto loc_82528640;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82528640:
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x8250c758
	sub_8250C758(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_82528664:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82528668"))) PPC_WEAK_FUNC(sub_82528668);
PPC_FUNC_IMPL(__imp__sub_82528668) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8252866C"))) PPC_WEAK_FUNC(sub_8252866C);
PPC_FUNC_IMPL(__imp__sub_8252866C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82528670"))) PPC_WEAK_FUNC(sub_82528670);
PPC_FUNC_IMPL(__imp__sub_82528670) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x825200d8
	sub_825200D8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r30,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r30.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stfs f31,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// addi r8,r9,25724
	ctx.r8.s64 = ctx.r9.s64 + 25724;
	// lfd f0,16944(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 16944);
	// stb r30,160(r31)
	PPC_STORE_U8(r31.u32 + 160, r30.u8);
	// lfs f13,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfd f0,176(r31)
	PPC_STORE_U64(r31.u32 + 176, f0.u64);
	// stb r30,192(r31)
	PPC_STORE_U8(r31.u32 + 192, r30.u8);
	// stfd f0,184(r31)
	PPC_STORE_U64(r31.u32 + 184, f0.u64);
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// stfs f13,208(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 208, temp.u32);
	// addi r28,r31,308
	r28.s64 = r31.s64 + 308;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r25,r31,336
	r25.s64 = r31.s64 + 336;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r27,-31970
	r27.s64 = -2095185920;
	// lis r11,-32174
	r11.s64 = -2108555264;
	// stw r30,364(r31)
	PPC_STORE_U32(r31.u32 + 364, r30.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r30.u32);
	// addi r26,r11,31184
	r26.s64 = r11.s64 + 31184;
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252871c
	if (cr6.eq) goto loc_8252871C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82528720
	if (!cr6.eq) goto loc_82528720;
loc_8252871C:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_82528720:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r24,12(r10)
	r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r29,r11,-3784
	r29.s64 = r11.s64 + -3784;
	// addi r3,r10,416
	ctx.r3.s64 = ctx.r10.s64 + 416;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
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
	// lwz r11,19512(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19512);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// lis r11,-32173
	r11.s64 = -2108489728;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-31344
	r28.s64 = r11.s64 + -31344;
	// beq cr6,0x82528794
	if (cr6.eq) goto loc_82528794;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82528794
	if (cr6.eq) goto loc_82528794;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82528794:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r30,12(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,468
	ctx.r3.s64 = r11.s64 + 468;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19508);
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
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
}

__attribute__((alias("__imp__sub_825287E8"))) PPC_WEAK_FUNC(sub_825287E8);
PPC_FUNC_IMPL(__imp__sub_825287E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825287EC"))) PPC_WEAK_FUNC(sub_825287EC);
PPC_FUNC_IMPL(__imp__sub_825287EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825287F0"))) PPC_WEAK_FUNC(sub_825287F0);
PPC_FUNC_IMPL(__imp__sub_825287F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// addi r12,r1,-104
	r12.s64 = ctx.r1.s64 + -104;
	// bl 0x828eaaf8
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 160);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
	// beq cr6,0x825289f0
	if (cr6.eq) goto loc_825289F0;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r29,0
	r29.s64 = 0;
	// mr r23,r29
	r23.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825289f0
	if (!cr6.gt) goto loc_825289F0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r21,r29
	r21.u64 = r29.u64;
	// li r22,64
	r22.s64 = 64;
	// lis r24,-31965
	r24.s64 = -2094858240;
	// lis r20,-31970
	r20.s64 = -2095185920;
	// lfs f28,3792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	f28.f64 = double(temp.f32);
loc_8252884C:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r26,r21,r11
	r26.u64 = r21.u64 + r11.u64;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,164(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 164);
	f0.f64 = double(temp.f32);
	// lwz r3,-14756(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + -14756);
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(f0.f64 * f28.f64));
	// stw r29,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r29.u32);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r29.u32);
	// mr r25,r29
	r25.u64 = r29.u64;
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r29.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r29,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r29.u32);
	// stw r29,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r29.u32);
	// stw r29,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r29.u32);
	// stw r29,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r29.u32);
	// stw r29,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r29.u32);
	// fsubs f30,f1,f13
	f30.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fadds f29,f13,f1
	f29.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// beq cr6,0x825288c0
	if (cr6.eq) goto loc_825288C0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825288c4
	if (!cr6.eq) goto loc_825288C4;
loc_825288C0:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_825288C4:
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// lwz r8,168(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 168);
	// lfs f1,208(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 208);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x825577f8
	sub_825577F8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82528930
	if (!cr6.gt) goto loc_82528930;
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r31,r10,-20
	r31.s64 = ctx.r10.s64 + -20;
loc_82528900:
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwzu r9,16(r31)
	ea = 16 + r31.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r31.u32 = ea;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x82528210
	sub_82528210(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// blt cr6,0x82528900
	if (cr6.lt) goto loc_82528900;
loc_82528930:
	// lwz r10,168(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 168);
	// mr r11,r25
	r11.u64 = r25.u64;
	// cmpw cr6,r25,r10
	cr6.compare<int32_t>(r25.s32, ctx.r10.s32, xer);
	// bge cr6,0x825289dc
	if (!cr6.lt) goto loc_825289DC;
	// addi r30,r26,28
	r30.s64 = r26.s64 + 28;
loc_82528944:
	// stb r29,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, r29.u8);
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,-23088(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + -23088);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82528db8
	sub_82528DB8(ctx, base);
	// lbz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 224);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// li r11,5381
	r11.s64 = 5381;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82528990
	if (cr6.eq) goto loc_82528990;
loc_82528974:
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
	// bne cr6,0x82528974
	if (!cr6.eq) goto loc_82528974;
loc_82528990:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82756da8
	sub_82756DA8(ctx, base);
	// stb r22,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, r22.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r29.u8);
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82756f30
	sub_82756F30(ctx, base);
	// lwz r10,168(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 168);
	// mr r11,r31
	r11.u64 = r31.u64;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x82528944
	if (cr6.lt) goto loc_82528944;
loc_825289DC:
	// lwz r11,132(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 132);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r21,r21,48
	r21.s64 = r21.s64 + 48;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// blt cr6,0x8252884c
	if (cr6.lt) goto loc_8252884C;
loc_825289F0:
	// lwz r3,236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-104
	r12.s64 = ctx.r1.s64 + -104;
	// bl 0x828eab44
}

__attribute__((alias("__imp__sub_82528A04"))) PPC_WEAK_FUNC(sub_82528A04);
PPC_FUNC_IMPL(__imp__sub_82528A04) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_82528A08"))) PPC_WEAK_FUNC(sub_82528A08);
PPC_FUNC_IMPL(__imp__sub_82528A08) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,196(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// ble cr6,0x82528b10
	if (!cr6.gt) goto loc_82528B10;
	// addi r28,r3,220
	r28.s64 = ctx.r3.s64 + 220;
	// lis r26,-31970
	r26.s64 = -2095185920;
loc_82528A58:
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bge cr6,0x82528b10
	if (!cr6.lt) goto loc_82528B10;
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(r29.u32, r25.u32, xer);
	// beq cr6,0x82528afc
	if (cr6.eq) goto loc_82528AFC;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r11,r1,76
	r11.s64 = ctx.r1.s64 + 76;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82528A7C:
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x82528a7c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82528A7C;
	// lwz r3,-14756(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -14756);
	// sth r10,4(r11)
	PPC_STORE_U16(r11.u32 + 4, ctx.r10.u16);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82528aa4
	if (cr6.eq) goto loc_82528AA4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82528aa8
	if (!cr6.eq) goto loc_82528AA8;
loc_82528AA4:
	// li r11,0
	r11.s64 = 0;
loc_82528AA8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// bl 0x82538a80
	sub_82538A80(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,50
	ctx.r6.s64 = 50;
	// li r4,50
	ctx.r4.s64 = 50;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// lfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x82528afc
	if (!cr6.gt) goto loc_82528AFC;
	// fcmpu cr6,f1,f30
	cr6.compare(ctx.f1.f64, f30.f64);
	// bgt cr6,0x82528afc
	if (cr6.gt) goto loc_82528AFC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82528210
	sub_82528210(ctx, base);
loc_82528AFC:
	// lwz r11,196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82528a58
	if (cr6.lt) goto loc_82528A58;
loc_82528B10:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
}

__attribute__((alias("__imp__sub_82528B28"))) PPC_WEAK_FUNC(sub_82528B28);
PPC_FUNC_IMPL(__imp__sub_82528B28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82528B2C"))) PPC_WEAK_FUNC(sub_82528B2C);
PPC_FUNC_IMPL(__imp__sub_82528B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82528B30"))) PPC_WEAK_FUNC(sub_82528B30);
PPC_FUNC_IMPL(__imp__sub_82528B30) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r30,0
	r30.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r24,r30
	r24.u64 = r30.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// ble cr6,0x82528c34
	if (!cr6.gt) goto loc_82528C34;
	// mr r25,r30
	r25.u64 = r30.u64;
	// li r26,64
	r26.s64 = 64;
	// lis r27,-31965
	r27.s64 = -2094858240;
loc_82528B6C:
	// lwz r10,124(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 124);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lwz r9,168(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 168);
	// add r10,r25,r10
	ctx.r10.u64 = r25.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82528c20
	if (!cr6.gt) goto loc_82528C20;
	// addi r28,r10,28
	r28.s64 = ctx.r10.s64 + 28;
loc_82528B88:
	// stb r30,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, r30.u8);
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r4,-23088(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + -23088);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82528db8
	sub_82528DB8(ctx, base);
	// lbz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// li r11,5381
	r11.s64 = 5381;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82528bd4
	if (cr6.eq) goto loc_82528BD4;
loc_82528BB8:
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
	// bne cr6,0x82528bb8
	if (!cr6.eq) goto loc_82528BB8;
loc_82528BD4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82756da8
	sub_82756DA8(ctx, base);
	// stb r26,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, r26.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r30.u8);
	// lwz r4,8(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// bl 0x82756f30
	sub_82756F30(ctx, base);
	// lwz r10,168(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 168);
	// mr r11,r31
	r11.u64 = r31.u64;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x82528b88
	if (cr6.lt) goto loc_82528B88;
loc_82528C20:
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r25,r25,48
	r25.s64 = r25.s64 + 48;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// blt cr6,0x82528b6c
	if (cr6.lt) goto loc_82528B6C;
loc_82528C34:
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_82528C40"))) PPC_WEAK_FUNC(sub_82528C40);
PPC_FUNC_IMPL(__imp__sub_82528C40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_82528C44"))) PPC_WEAK_FUNC(sub_82528C44);
PPC_FUNC_IMPL(__imp__sub_82528C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82528C48"))) PPC_WEAK_FUNC(sub_82528C48);
PPC_FUNC_IMPL(__imp__sub_82528C48) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r30,r10
	r30.s64 = ctx.r10.s32;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r28,r3,120
	r28.s64 = ctx.r3.s64 + 120;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x82528dac
	if (cr6.eq) goto loc_82528DAC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r27,0
	r27.s64 = 0;
	// li r22,1
	r22.s64 = 1;
	// li r26,4
	r26.s64 = 4;
	// lis r24,-31965
	r24.s64 = -2094858240;
	// lis r25,-31965
	r25.s64 = -2094858240;
	// addi r23,r11,17016
	r23.s64 = r11.s64 + 17016;
loc_82528CA0:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82528cb4
	if (cr6.lt) goto loc_82528CB4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82528cb8
	goto loc_82528CB8;
loc_82528CB4:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_82528CB8:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82528ce8
	if (cr6.eq) goto loc_82528CE8;
loc_82528CCC:
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
	// bne cr6,0x82528ccc
	if (!cr6.eq) goto loc_82528CCC;
loc_82528CE8:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// bne cr6,0x82528d1c
	if (!cr6.eq) goto loc_82528D1C;
	// lwz r11,-23064(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -23064);
	// stb r22,160(r29)
	PPC_STORE_U8(r29.u32 + 160, r22.u8);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// b 0x82528d30
	goto loc_82528D30;
loc_82528D1C:
	// lwz r11,-23060(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + -23060);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r27,160(r29)
	PPC_STORE_U8(r29.u32 + 160, r27.u8);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// bl 0x82528b30
	sub_82528B30(ctx, base);
loc_82528D30:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
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
	// beq cr6,0x82528d88
	if (cr6.eq) goto loc_82528D88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
loc_82528D88:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x82528ca0
	if (!cr6.eq) goto loc_82528CA0;
loc_82528DAC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_82528DB0"))) PPC_WEAK_FUNC(sub_82528DB0);
PPC_FUNC_IMPL(__imp__sub_82528DB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_82528DB4"))) PPC_WEAK_FUNC(sub_82528DB4);
PPC_FUNC_IMPL(__imp__sub_82528DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82528DB8"))) PPC_WEAK_FUNC(sub_82528DB8);
PPC_FUNC_IMPL(__imp__sub_82528DB8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x828eae28
	sub_828EAE28(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82528E08"))) PPC_WEAK_FUNC(sub_82528E08);
PPC_FUNC_IMPL(__imp__sub_82528E08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82528E0C"))) PPC_WEAK_FUNC(sub_82528E0C);
PPC_FUNC_IMPL(__imp__sub_82528E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82528E10"))) PPC_WEAK_FUNC(sub_82528E10);
PPC_FUNC_IMPL(__imp__sub_82528E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-23104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -23104);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82528E1C"))) PPC_WEAK_FUNC(sub_82528E1C);
PPC_FUNC_IMPL(__imp__sub_82528E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82528E20"))) PPC_WEAK_FUNC(sub_82528E20);
PPC_FUNC_IMPL(__imp__sub_82528E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,164(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82528E28"))) PPC_WEAK_FUNC(sub_82528E28);
PPC_FUNC_IMPL(__imp__sub_82528E28) {
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
	// bl 0x82527a40
	sub_82527A40(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82528e60
	if (cr6.eq) goto loc_82528E60;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82528E60:
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

__attribute__((alias("__imp__sub_82528E74"))) PPC_WEAK_FUNC(sub_82528E74);
PPC_FUNC_IMPL(__imp__sub_82528E74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82528E78"))) PPC_WEAK_FUNC(sub_82528E78);
PPC_FUNC_IMPL(__imp__sub_82528E78) {
	PPC_FUNC_PROLOGUE();
	// b 0x82528c48
	sub_82528C48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82528E7C"))) PPC_WEAK_FUNC(sub_82528E7C);
PPC_FUNC_IMPL(__imp__sub_82528E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82528E80"))) PPC_WEAK_FUNC(sub_82528E80);
PPC_FUNC_IMPL(__imp__sub_82528E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// lwz r11,400(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82528E9C"))) PPC_WEAK_FUNC(sub_82528E9C);
PPC_FUNC_IMPL(__imp__sub_82528E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82528EA0"))) PPC_WEAK_FUNC(sub_82528EA0);
PPC_FUNC_IMPL(__imp__sub_82528EA0) {
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
	// li r11,1
	r11.s64 = 1;
	// stb r11,192(r3)
	PPC_STORE_U8(ctx.r3.u32 + 192, r11.u8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 400, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82528EC0"))) PPC_WEAK_FUNC(sub_82528EC0);
PPC_FUNC_IMPL(__imp__sub_82528EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 160);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// beq cr6,0x8252906c
	if (cr6.eq) goto loc_8252906C;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r28,0
	r28.s64 = 0;
	// mr r23,r28
	r23.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8252906c
	if (!cr6.gt) goto loc_8252906C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r22,r28
	r22.u64 = r28.u64;
	// lis r21,-31970
	r21.s64 = -2095185920;
	// lfs f28,3792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	f28.f64 = double(temp.f32);
loc_82528F14:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r26,r22,r11
	r26.u64 = r22.u64 + r11.u64;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,164(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 164);
	f0.f64 = double(temp.f32);
	// lwz r3,-14756(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + -14756);
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(f0.f64 * f28.f64));
	// lwz r25,168(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// mr r24,r28
	r24.u64 = r28.u64;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r28.u32);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r28.u32);
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r28.u32);
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r28.u32);
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r28.u32);
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r28.u32);
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fsubs f30,f1,f9
	f30.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// fadds f29,f9,f1
	f29.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// beq cr6,0x82528fac
	if (cr6.eq) goto loc_82528FAC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82528fb0
	if (!cr6.eq) goto loc_82528FB0;
loc_82528FAC:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82528FB0:
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825573a0
	sub_825573A0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8252902c
	if (!cr6.gt) goto loc_8252902C;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r31,r10,-24
	r31.s64 = ctx.r10.s64 + -24;
loc_82528FE8:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lwzu r9,16(r31)
	ea = 16 + r31.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r31.u32 = ea;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x82528210
	sub_82528210(ctx, base);
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmpw cr6,r29,r27
	cr6.compare<int32_t>(r29.s32, r27.s32, xer);
	// blt cr6,0x82528fe8
	if (cr6.lt) goto loc_82528FE8;
loc_8252902C:
	// mr r11,r24
	r11.u64 = r24.u64;
	// cmpw cr6,r24,r25
	cr6.compare<int32_t>(r24.s32, r25.s32, xer);
	// bge cr6,0x82529058
	if (!cr6.lt) goto loc_82529058;
loc_82529038:
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825284f8
	sub_825284F8(ctx, base);
	// mr r11,r31
	r11.u64 = r31.u64;
	// cmpw cr6,r31,r25
	cr6.compare<int32_t>(r31.s32, r25.s32, xer);
	// blt cr6,0x82529038
	if (cr6.lt) goto loc_82529038;
loc_82529058:
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r22,r22,48
	r22.s64 = r22.s64 + 48;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// blt cr6,0x82528f14
	if (cr6.lt) goto loc_82528F14;
loc_8252906C:
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-96
	r12.s64 = ctx.r1.s64 + -96;
	// bl 0x828eab44
}

__attribute__((alias("__imp__sub_82529080"))) PPC_WEAK_FUNC(sub_82529080);
PPC_FUNC_IMPL(__imp__sub_82529080) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_82529084"))) PPC_WEAK_FUNC(sub_82529084);
PPC_FUNC_IMPL(__imp__sub_82529084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82529088"))) PPC_WEAK_FUNC(sub_82529088);
PPC_FUNC_IMPL(__imp__sub_82529088) {
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
	// addi r9,r11,25876
	ctx.r9.s64 = r11.s64 + 25876;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825290c4
	if (cr6.eq) goto loc_825290C4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825290c8
	if (!cr6.eq) goto loc_825290C8;
loc_825290C4:
	// li r11,0
	r11.s64 = 0;
loc_825290C8:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19596(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19596);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r28,r27,368
	r28.s64 = r27.s64 + 368;
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
	// bne cr6,0x82529120
	if (!cr6.eq) goto loc_82529120;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82529120
	if (!cr6.eq) goto loc_82529120;
	// lwz r11,19596(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19596);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82529120:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82527a40
	sub_82527A40(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82529134"))) PPC_WEAK_FUNC(sub_82529134);
PPC_FUNC_IMPL(__imp__sub_82529134) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82529138"))) PPC_WEAK_FUNC(sub_82529138);
PPC_FUNC_IMPL(__imp__sub_82529138) {
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
	// bl 0x82528670
	sub_82528670(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r30,r31,368
	r30.s64 = r31.s64 + 368;
	// addi r10,r11,25876
	ctx.r10.s64 = r11.s64 + 25876;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-32173
	r11.s64 = -2108489728;
	// stw r8,400(r31)
	PPC_STORE_U32(r31.u32 + 400, ctx.r8.u32);
	// addi r29,r11,-29024
	r29.s64 = r11.s64 + -29024;
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82529194
	if (cr6.eq) goto loc_82529194;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82529198
	if (!cr6.eq) goto loc_82529198;
loc_82529194:
	// li r11,0
	r11.s64 = 0;
loc_82529198:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,-636
	ctx.r3.s64 = ctx.r9.s64 + -636;
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
	// lwz r11,19596(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19596);
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

__attribute__((alias("__imp__sub_825291EC"))) PPC_WEAK_FUNC(sub_825291EC);
PPC_FUNC_IMPL(__imp__sub_825291EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825291F0"))) PPC_WEAK_FUNC(sub_825291F0);
PPC_FUNC_IMPL(__imp__sub_825291F0) {
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
	// bl 0x82529088
	sub_82529088(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82529228
	if (cr6.eq) goto loc_82529228;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82529228:
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

__attribute__((alias("__imp__sub_8252923C"))) PPC_WEAK_FUNC(sub_8252923C);
PPC_FUNC_IMPL(__imp__sub_8252923C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82529240"))) PPC_WEAK_FUNC(sub_82529240);
PPC_FUNC_IMPL(__imp__sub_82529240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r5,-22952(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -22952);
	// b 0x8251fdb0
	sub_8251FDB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252924C"))) PPC_WEAK_FUNC(sub_8252924C);
PPC_FUNC_IMPL(__imp__sub_8252924C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82529250"))) PPC_WEAK_FUNC(sub_82529250);
PPC_FUNC_IMPL(__imp__sub_82529250) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251ffe8
	sub_8251FFE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82529254"))) PPC_WEAK_FUNC(sub_82529254);
PPC_FUNC_IMPL(__imp__sub_82529254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82529258"))) PPC_WEAK_FUNC(sub_82529258);
PPC_FUNC_IMPL(__imp__sub_82529258) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251f9d8
	sub_8251F9D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252925C"))) PPC_WEAK_FUNC(sub_8252925C);
PPC_FUNC_IMPL(__imp__sub_8252925C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82529260"))) PPC_WEAK_FUNC(sub_82529260);
PPC_FUNC_IMPL(__imp__sub_82529260) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82529264"))) PPC_WEAK_FUNC(sub_82529264);
PPC_FUNC_IMPL(__imp__sub_82529264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82529268"))) PPC_WEAK_FUNC(sub_82529268);
PPC_FUNC_IMPL(__imp__sub_82529268) {
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
	// addi r9,r11,25996
	ctx.r9.s64 = r11.s64 + 25996;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825292a4
	if (cr6.eq) goto loc_825292A4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825292a8
	if (!cr6.eq) goto loc_825292A8;
loc_825292A4:
	// li r11,0
	r11.s64 = 0;
loc_825292A8:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19632(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19632);
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
	// bne cr6,0x82529300
	if (!cr6.eq) goto loc_82529300;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82529300
	if (!cr6.eq) goto loc_82529300;
	// lwz r11,19632(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19632);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82529300:
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

__attribute__((alias("__imp__sub_82529314"))) PPC_WEAK_FUNC(sub_82529314);
PPC_FUNC_IMPL(__imp__sub_82529314) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82529318"))) PPC_WEAK_FUNC(sub_82529318);
PPC_FUNC_IMPL(__imp__sub_82529318) {
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
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
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
	// ble cr6,0x825294c4
	if (!cr6.gt) goto loc_825294C4;
	// li r24,0
	r24.s64 = 0;
	// lis r27,-31965
	r27.s64 = -2094858240;
	// lis r26,-31965
	r26.s64 = -2094858240;
loc_82529344:
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// add r31,r24,r11
	r31.u64 = r24.u64 + r11.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82529360
	if (cr6.lt) goto loc_82529360;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x82529364
	goto loc_82529364;
loc_82529360:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_82529364:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82529394
	if (cr6.eq) goto loc_82529394;
loc_82529378:
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
	// bne cr6,0x82529378
	if (!cr6.eq) goto loc_82529378;
loc_82529394:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r29,r31,28
	r29.s64 = r31.s64 + 28;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8251ebd0
	sub_8251EBD0(ctx, base);
	// lwz r10,-22948(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + -22948);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x825293f0
	if (cr6.eq) goto loc_825293F0;
loc_825293D4:
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
	// bne cr6,0x825293d4
	if (!cr6.eq) goto loc_825293D4;
loc_825293F0:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-22948(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + -22948);
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
	// lwz r10,-22944(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + -22944);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82529464
	if (cr6.eq) goto loc_82529464;
loc_82529448:
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
	// bne cr6,0x82529448
	if (!cr6.eq) goto loc_82529448;
loc_82529464:
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
	// lwz r5,-22944(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + -22944);
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
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8251ec68
	sub_8251EC68(ctx, base);
	// lwz r8,132(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r24,r24,48
	r24.s64 = r24.s64 + 48;
	// cmplw cr6,r25,r8
	cr6.compare<uint32_t>(r25.u32, ctx.r8.u32, xer);
	// blt cr6,0x82529344
	if (cr6.lt) goto loc_82529344;
loc_825294C4:
	// lwz r11,132(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x825296f4
	if (cr6.eq) goto loc_825296F4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x825295fc
	if (cr6.eq) goto loc_825295FC;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x82529768
	if (!cr6.eq) goto loc_82529768;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r28,56
	r30.s64 = r28.s64 + 56;
	// lfd f0,17744(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 17744);
	// lfd f13,17736(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 17736);
	// stfd f0,88(r28)
	PPC_STORE_U64(r28.u32 + 88, f0.u64);
	// stfd f13,64(r28)
	PPC_STORE_U64(r28.u32 + 64, ctx.f13.u64);
	// stfd f0,96(r28)
	PPC_STORE_U64(r28.u32 + 96, f0.u64);
	// stfd f13,72(r28)
	PPC_STORE_U64(r28.u32 + 72, ctx.f13.u64);
	// stfd f13,56(r28)
	PPC_STORE_U64(r28.u32 + 56, ctx.f13.u64);
	// stfd f0,104(r28)
	PPC_STORE_U64(r28.u32 + 104, f0.u64);
	// stfd f13,80(r28)
	PPC_STORE_U64(r28.u32 + 80, ctx.f13.u64);
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
	// blt cr6,0x82529530
	if (cr6.lt) goto loc_82529530;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82529534
	goto loc_82529534;
loc_82529530:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82529534:
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
	// blt cr6,0x8252955c
	if (cr6.lt) goto loc_8252955C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82529560
	goto loc_82529560;
loc_8252955C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82529560:
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
	// blt cr6,0x82529588
	if (cr6.lt) goto loc_82529588;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252958c
	goto loc_8252958C;
loc_82529588:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252958C:
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
	// blt cr6,0x825295b0
	if (cr6.lt) goto loc_825295B0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825295b4
	goto loc_825295B4;
loc_825295B0:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825295B4:
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
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9458
	return;
loc_825295FC:
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
	// lfd f0,17744(r9)
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 17744);
	// lfd f13,17736(r8)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + 17736);
	// lfd f11,26064(r7)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 26064);
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
	// blt cr6,0x82529654
	if (cr6.lt) goto loc_82529654;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82529658
	goto loc_82529658;
loc_82529654:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82529658:
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
	// blt cr6,0x82529680
	if (cr6.lt) goto loc_82529680;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82529684
	goto loc_82529684;
loc_82529680:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82529684:
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
	// blt cr6,0x825296a8
	if (cr6.lt) goto loc_825296A8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825296ac
	goto loc_825296AC;
loc_825296A8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825296AC:
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
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9458
	return;
loc_825296F4:
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82529710
	if (cr6.lt) goto loc_82529710;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82529714
	goto loc_82529714;
loc_82529710:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82529714:
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
	// blt cr6,0x82529738
	if (cr6.lt) goto loc_82529738;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252973c
	goto loc_8252973C;
loc_82529738:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252973C:
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
	// lfd f1,26056(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 26056);
	// lfd f2,16944(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16944);
	// bl 0x8251ed08
	sub_8251ED08(ctx, base);
loc_82529768:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8252976C"))) PPC_WEAK_FUNC(sub_8252976C);
PPC_FUNC_IMPL(__imp__sub_8252976C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82529770"))) PPC_WEAK_FUNC(sub_82529770);
PPC_FUNC_IMPL(__imp__sub_82529770) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// beq cr6,0x82529a6c
	if (cr6.eq) goto loc_82529A6C;
	// lwz r31,4(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bge cr6,0x82529a6c
	if (!cr6.lt) goto loc_82529A6C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82529a6c
	if (cr6.lt) goto loc_82529A6C;
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
	// blt cr6,0x825297dc
	if (cr6.lt) goto loc_825297DC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825297e0
	goto loc_825297E0;
loc_825297DC:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825297E0:
	// addi r28,r11,28
	r28.s64 = r11.s64 + 28;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// add r30,r31,r24
	r30.u64 = r31.u64 + r24.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r23,0
	r23.s64 = 0;
	// li r25,4
	r25.s64 = 4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// lbz r9,188(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 188);
	// addi r8,r11,13435
	ctx.r8.s64 = r11.s64 + 13435;
	// lis r26,-31970
	r26.s64 = -2095185920;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r29,r10,17016
	r29.s64 = ctx.r10.s64 + 17016;
	// beq cr6,0x825298c8
	if (cr6.eq) goto loc_825298C8;
	// lbz r11,8(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825298c8
	if (!cr6.eq) goto loc_825298C8;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,-22932(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22932);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// cntlzw r11,r9
	r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// stb r23,188(r30)
	PPC_STORE_U8(r30.u32 + 188, r23.u8);
	// lwz r3,-14756(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82529898
	if (cr6.eq) goto loc_82529898;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252989c
	if (!cr6.eq) goto loc_8252989C;
loc_82529898:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_8252989C:
	// lwz r27,52(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x825298c8
	if (cr6.eq) goto loc_825298C8;
	// lwz r4,132(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 132);
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// bl 0x825c6180
	sub_825C6180(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,26072
	ctx.r5.s64 = r11.s64 + 26072;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e1940
	sub_822E1940(ctx, base);
loc_825298C8:
	// lbz r11,8(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82529a64
	if (cr6.eq) goto loc_82529A64;
	// lbz r11,188(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 188);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82529950
	if (!cr6.eq) goto loc_82529950;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// rlwinm r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwz r27,-22936(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22936);
	// beq cr6,0x8252990c
	if (cr6.eq) goto loc_8252990C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r23.u32);
loc_8252990C:
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
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
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,188(r30)
	PPC_STORE_U8(r30.u32 + 188, ctx.r8.u8);
loc_82529950:
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,-22948(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -22948);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,-22944(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22944);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// lwz r7,12(r22)
	ctx.r7.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r5,r8,18280
	ctx.r5.s64 = ctx.r8.s64 + 18280;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r6,-22940(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22940);
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8251ec68
	sub_8251EC68(ctx, base);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// lwz r3,-14756(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82529a18
	if (cr6.eq) goto loc_82529A18;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82529a1c
	if (!cr6.eq) goto loc_82529A1C;
loc_82529A18:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82529A1C:
	// lwz r31,52(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82529a5c
	if (cr6.eq) goto loc_82529A5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,12(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// bl 0x822e1a18
	sub_822E1A18(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82529a5c
	if (cr6.eq) goto loc_82529A5C;
	// lwz r4,132(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 132);
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// bl 0x825c6180
	sub_825C6180(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e1940
	sub_822E1940(ctx, base);
loc_82529A5C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_82529A64:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_82529A6C:
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_82529A78"))) PPC_WEAK_FUNC(sub_82529A78);
PPC_FUNC_IMPL(__imp__sub_82529A78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_82529A7C"))) PPC_WEAK_FUNC(sub_82529A7C);
PPC_FUNC_IMPL(__imp__sub_82529A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82529A80"))) PPC_WEAK_FUNC(sub_82529A80);
PPC_FUNC_IMPL(__imp__sub_82529A80) {
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
	// addi r10,r11,25996
	ctx.r10.s64 = r11.s64 + 25996;
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
loc_82529AC0:
	// stbx r28,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, r28.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x82529ac0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82529AC0;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r11,-32173
	r11.s64 = -2108489728;
	// addi r30,r11,-26768
	r30.s64 = r11.s64 + -26768;
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82529af4
	if (cr6.eq) goto loc_82529AF4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82529af8
	if (!cr6.eq) goto loc_82529AF8;
loc_82529AF4:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82529AF8:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,-1084
	ctx.r3.s64 = ctx.r9.s64 + -1084;
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
	// lwz r11,19632(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19632);
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

__attribute__((alias("__imp__sub_82529B4C"))) PPC_WEAK_FUNC(sub_82529B4C);
PPC_FUNC_IMPL(__imp__sub_82529B4C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82529B50"))) PPC_WEAK_FUNC(sub_82529B50);
PPC_FUNC_IMPL(__imp__sub_82529B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-22952(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -22952);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82529B5C"))) PPC_WEAK_FUNC(sub_82529B5C);
PPC_FUNC_IMPL(__imp__sub_82529B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82529B60"))) PPC_WEAK_FUNC(sub_82529B60);
PPC_FUNC_IMPL(__imp__sub_82529B60) {
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
	// bl 0x82529268
	sub_82529268(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82529b98
	if (cr6.eq) goto loc_82529B98;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82529B98:
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

__attribute__((alias("__imp__sub_82529BAC"))) PPC_WEAK_FUNC(sub_82529BAC);
PPC_FUNC_IMPL(__imp__sub_82529BAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82529BB0"))) PPC_WEAK_FUNC(sub_82529BB0);
PPC_FUNC_IMPL(__imp__sub_82529BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r5,-22880(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -22880);
	// b 0x8251fdb0
	sub_8251FDB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82529BBC"))) PPC_WEAK_FUNC(sub_82529BBC);
PPC_FUNC_IMPL(__imp__sub_82529BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82529BC0"))) PPC_WEAK_FUNC(sub_82529BC0);
PPC_FUNC_IMPL(__imp__sub_82529BC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251ffe8
	sub_8251FFE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82529BC4"))) PPC_WEAK_FUNC(sub_82529BC4);
PPC_FUNC_IMPL(__imp__sub_82529BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82529BC8"))) PPC_WEAK_FUNC(sub_82529BC8);
PPC_FUNC_IMPL(__imp__sub_82529BC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251f9d8
	sub_8251F9D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82529BCC"))) PPC_WEAK_FUNC(sub_82529BCC);
PPC_FUNC_IMPL(__imp__sub_82529BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82529BD0"))) PPC_WEAK_FUNC(sub_82529BD0);
PPC_FUNC_IMPL(__imp__sub_82529BD0) {
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
	// addi r9,r11,26196
	ctx.r9.s64 = r11.s64 + 26196;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82529c0c
	if (cr6.eq) goto loc_82529C0C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82529c10
	if (!cr6.eq) goto loc_82529C10;
loc_82529C0C:
	// li r11,0
	r11.s64 = 0;
loc_82529C10:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19660(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19660);
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
	// bne cr6,0x82529c68
	if (!cr6.eq) goto loc_82529C68;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82529c68
	if (!cr6.eq) goto loc_82529C68;
	// lwz r11,19660(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19660);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82529C68:
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

__attribute__((alias("__imp__sub_82529C7C"))) PPC_WEAK_FUNC(sub_82529C7C);
PPC_FUNC_IMPL(__imp__sub_82529C7C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82529C80"))) PPC_WEAK_FUNC(sub_82529C80);
PPC_FUNC_IMPL(__imp__sub_82529C80) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,21888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21888);
	// bl 0x82881480
	sub_82881480(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82529cb4
	if (cr6.eq) goto loc_82529CB4;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_82529CB4:
	// lwz r11,132(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 132);
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82529eb4
	if (!cr6.gt) goto loc_82529EB4;
	// li r23,0
	r23.s64 = 0;
	// lis r25,-31965
	r25.s64 = -2094858240;
	// lis r28,-31965
	r28.s64 = -2094858240;
	// lis r26,-31965
	r26.s64 = -2094858240;
loc_82529CD4:
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// add r31,r23,r11
	r31.u64 = r23.u64 + r11.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82529cf0
	if (cr6.lt) goto loc_82529CF0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x82529cf4
	goto loc_82529CF4;
loc_82529CF0:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_82529CF4:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82529d24
	if (cr6.eq) goto loc_82529D24;
loc_82529D08:
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
	// bne cr6,0x82529d08
	if (!cr6.eq) goto loc_82529D08;
loc_82529D24:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r29,r31,28
	r29.s64 = r31.s64 + 28;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8251ebd0
	sub_8251EBD0(ctx, base);
	// lwz r10,-22876(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + -22876);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82529d80
	if (cr6.eq) goto loc_82529D80;
loc_82529D64:
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
	// bne cr6,0x82529d64
	if (!cr6.eq) goto loc_82529D64;
loc_82529D80:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-22876(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + -22876);
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
	// lwz r10,-22872(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + -22872);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82529df4
	if (cr6.eq) goto loc_82529DF4;
loc_82529DD8:
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
	// bne cr6,0x82529dd8
	if (!cr6.eq) goto loc_82529DD8;
loc_82529DF4:
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
	// lwz r5,-22872(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -22872);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
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
	// lwz r10,-22868(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + -22868);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82529e64
	if (cr6.eq) goto loc_82529E64;
loc_82529E48:
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
	// bne cr6,0x82529e48
	if (!cr6.eq) goto loc_82529E48;
loc_82529E64:
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
	// lwz r5,-22868(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + -22868);
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
	// lwz r8,132(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 132);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r23,r23,48
	r23.s64 = r23.s64 + 48;
	// cmplw cr6,r24,r8
	cr6.compare<uint32_t>(r24.u32, ctx.r8.u32, xer);
	// blt cr6,0x82529cd4
	if (cr6.lt) goto loc_82529CD4;
loc_82529EB4:
	// lwz r11,132(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 132);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x8252a164
	if (cr6.eq) goto loc_8252A164;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x8252a030
	if (cr6.eq) goto loc_8252A030;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x8252a2a0
	if (!cr6.eq) goto loc_8252A2A0;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82529eec
	if (cr6.eq) goto loc_82529EEC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82529ef0
	if (!cr6.eq) goto loc_82529EF0;
loc_82529EEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82529EF0:
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// bl 0x82517d10
	sub_82517D10(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r27,56
	r29.s64 = r27.s64 + 56;
	// lfd f13,26280(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 26280);
	// stfd f13,64(r27)
	PPC_STORE_U64(r27.u32 + 64, ctx.f13.u64);
	// lfd f0,17968(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 17968);
	// stfd f0,88(r27)
	PPC_STORE_U64(r27.u32 + 88, f0.u64);
	// stfd f0,96(r27)
	PPC_STORE_U64(r27.u32 + 96, f0.u64);
	// stfd f0,104(r27)
	PPC_STORE_U64(r27.u32 + 104, f0.u64);
	// stfd f0,112(r27)
	PPC_STORE_U64(r27.u32 + 112, f0.u64);
	// stfd f13,80(r27)
	PPC_STORE_U64(r27.u32 + 80, ctx.f13.u64);
	// beq cr6,0x82529f44
	if (cr6.eq) goto loc_82529F44;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfd f12,26272(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + 26272);
	// stfd f12,72(r27)
	PPC_STORE_U64(r27.u32 + 72, ctx.f12.u64);
	// stfd f12,56(r27)
	PPC_STORE_U64(r27.u32 + 56, ctx.f12.u64);
	// b 0x82529f4c
	goto loc_82529F4C;
loc_82529F44:
	// stfd f13,72(r27)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r27.u32 + 72, ctx.f13.u64);
	// stfd f13,56(r27)
	PPC_STORE_U64(r27.u32 + 56, ctx.f13.u64);
loc_82529F4C:
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82529f68
	if (cr6.lt) goto loc_82529F68;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82529f6c
	goto loc_82529F6C;
loc_82529F68:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82529F6C:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82529f94
	if (cr6.lt) goto loc_82529F94;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82529f98
	goto loc_82529F98;
loc_82529F94:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82529F98:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82529fc0
	if (cr6.lt) goto loc_82529FC0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82529fc4
	goto loc_82529FC4;
loc_82529FC0:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82529FC4:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82529fe8
	if (cr6.lt) goto loc_82529FE8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82529fec
	goto loc_82529FEC;
loc_82529FE8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82529FEC:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r29,24
	ctx.r4.s64 = r29.s64 + 24;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// ld r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// ld r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U64(r29.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// ld r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U64(r29.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8251efd8
	sub_8251EFD8(ctx, base);
	// b 0x8252a2a0
	goto loc_8252A2A0;
loc_8252A030:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252a04c
	if (cr6.eq) goto loc_8252A04C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252a050
	if (!cr6.eq) goto loc_8252A050;
loc_8252A04C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8252A050:
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// bl 0x82517d10
	sub_82517D10(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// lfd f0,26280(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 26280);
	// stfd f0,16(r27)
	PPC_STORE_U64(r27.u32 + 16, f0.u64);
	// lfd f12,16944(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 16944);
	// lfd f13,17968(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 17968);
	// stfd f12,32(r27)
	PPC_STORE_U64(r27.u32 + 32, ctx.f12.u64);
	// stfd f0,24(r27)
	PPC_STORE_U64(r27.u32 + 24, f0.u64);
	// stfd f13,40(r27)
	PPC_STORE_U64(r27.u32 + 40, ctx.f13.u64);
	// stfd f13,48(r27)
	PPC_STORE_U64(r27.u32 + 48, ctx.f13.u64);
	// beq cr6,0x8252a0a0
	if (cr6.eq) goto loc_8252A0A0;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfd f11,26264(r8)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 26264);
	// b 0x8252a0a8
	goto loc_8252A0A8;
loc_8252A0A0:
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfd f11,26064(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 26064);
loc_8252A0A8:
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// stfd f11,8(r27)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r27.u32 + 8, ctx.f11.u64);
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252a0c8
	if (cr6.lt) goto loc_8252A0C8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252a0cc
	goto loc_8252A0CC;
loc_8252A0C8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252A0CC:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252a0f4
	if (cr6.lt) goto loc_8252A0F4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252a0f8
	goto loc_8252A0F8;
loc_8252A0F4:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252A0F8:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252a11c
	if (cr6.lt) goto loc_8252A11C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252a120
	goto loc_8252A120;
loc_8252A11C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252A120:
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
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// bl 0x8251ee58
	sub_8251EE58(ctx, base);
	// b 0x8252a2a0
	goto loc_8252A2A0;
loc_8252A164:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252a180
	if (cr6.eq) goto loc_8252A180;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252a184
	if (!cr6.eq) goto loc_8252A184;
loc_8252A180:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8252A184:
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// bl 0x82517d10
	sub_82517D10(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// beq cr6,0x8252a230
	if (cr6.eq) goto loc_8252A230;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252a1b0
	if (cr6.lt) goto loc_8252A1B0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252a1b4
	goto loc_8252A1B4;
loc_8252A1B0:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252A1B4:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfd f31,16944(r10)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16944);
	// lfd f30,23192(r9)
	f30.u64 = PPC_LOAD_U64(ctx.r9.u32 + 23192);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfd f1,26264(r11)
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 26264);
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// bl 0x8251f1c0
	sub_8251F1C0(ctx, base);
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x8252a204
	if (cr6.lt) goto loc_8252A204;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252a208
	goto loc_8252A208;
loc_8252A204:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252A208:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// lfd f1,26256(r11)
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 26256);
	// bl 0x8251f1c0
	sub_8251F1C0(ctx, base);
	// b 0x8252a2a0
	goto loc_8252A2A0;
loc_8252A230:
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252a248
	if (cr6.lt) goto loc_8252A248;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252a24c
	goto loc_8252A24C;
loc_8252A248:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252A24C:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252a270
	if (cr6.lt) goto loc_8252A270;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252a274
	goto loc_8252A274;
loc_8252A270:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252A274:
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
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfd f1,26056(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 26056);
	// lfd f2,16944(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16944);
	// bl 0x8251ed08
	sub_8251ED08(ctx, base);
loc_8252A2A0:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x8252a2b0
	if (cr6.eq) goto loc_8252A2B0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8252A2B0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
}

__attribute__((alias("__imp__sub_8252A2BC"))) PPC_WEAK_FUNC(sub_8252A2BC);
PPC_FUNC_IMPL(__imp__sub_8252A2BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_8252A2C0"))) PPC_WEAK_FUNC(sub_8252A2C0);
PPC_FUNC_IMPL(__imp__sub_8252A2C0) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r9.u32);
	// beq cr6,0x8252a488
	if (cr6.eq) goto loc_8252A488;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8252a488
	if (!cr6.lt) goto loc_8252A488;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252a324
	if (cr6.lt) goto loc_8252A324;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252a328
	goto loc_8252A328;
loc_8252A324:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252A328:
	// addi r28,r11,28
	r28.s64 = r11.s64 + 28;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lbz r30,16(r27)
	r30.u64 = PPC_LOAD_U8(r27.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8251eaf8
	sub_8251EAF8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x8252a3c4
	if (cr6.eq) goto loc_8252A3C4;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x8252a370
	if (cr6.eq) goto loc_8252A370;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,16512
	r11.s64 = r11.s64 + 16512;
	// b 0x8252a378
	goto loc_8252A378;
loc_8252A370:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,16508
	r11.s64 = r11.s64 + 16508;
loc_8252A378:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r9,17016
	ctx.r6.s64 = ctx.r9.s64 + 17016;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
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
loc_8252A3C4:
	// lbz r11,16(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8252a488
	if (cr6.eq) goto loc_8252A488;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252a3f0
	if (cr6.eq) goto loc_8252A3F0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252a3f4
	if (!cr6.eq) goto loc_8252A3F4;
loc_8252A3F0:
	// li r11,0
	r11.s64 = 0;
loc_8252A3F4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r31,80(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r6,8(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r30,r10,13432
	r30.s64 = ctx.r10.s64 + 13432;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x828eb318
	sub_828EB318(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8250c758
	sub_8250C758(ctx, base);
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,-22872(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22872);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r6,12(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x828eb318
	sub_828EB318(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250c758
	sub_8250C758(ctx, base);
	// lis r8,-31965
	ctx.r8.s64 = -2094858240;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,-22868(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22868);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
loc_8252A488:
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
}

__attribute__((alias("__imp__sub_8252A494"))) PPC_WEAK_FUNC(sub_8252A494);
PPC_FUNC_IMPL(__imp__sub_8252A494) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8252A498"))) PPC_WEAK_FUNC(sub_8252A498);
PPC_FUNC_IMPL(__imp__sub_8252A498) {
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
	// addi r10,r11,26196
	ctx.r10.s64 = r11.s64 + 26196;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-32173
	r11.s64 = -2108489728;
	// stw r8,188(r31)
	PPC_STORE_U32(r31.u32 + 188, ctx.r8.u32);
	// addi r29,r11,-23872
	r29.s64 = r11.s64 + -23872;
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252a4f4
	if (cr6.eq) goto loc_8252A4F4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252a4f8
	if (!cr6.eq) goto loc_8252A4F8;
loc_8252A4F4:
	// li r11,0
	r11.s64 = 0;
loc_8252A4F8:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,-1400
	ctx.r3.s64 = ctx.r9.s64 + -1400;
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
	// lwz r11,19660(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19660);
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

__attribute__((alias("__imp__sub_8252A54C"))) PPC_WEAK_FUNC(sub_8252A54C);
PPC_FUNC_IMPL(__imp__sub_8252A54C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8252A550"))) PPC_WEAK_FUNC(sub_8252A550);
PPC_FUNC_IMPL(__imp__sub_8252A550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-22880(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -22880);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252A55C"))) PPC_WEAK_FUNC(sub_8252A55C);
PPC_FUNC_IMPL(__imp__sub_8252A55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252A560"))) PPC_WEAK_FUNC(sub_8252A560);
PPC_FUNC_IMPL(__imp__sub_8252A560) {
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
	// bl 0x82529bd0
	sub_82529BD0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8252a598
	if (cr6.eq) goto loc_8252A598;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8252A598:
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

__attribute__((alias("__imp__sub_8252A5AC"))) PPC_WEAK_FUNC(sub_8252A5AC);
PPC_FUNC_IMPL(__imp__sub_8252A5AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252A5B0"))) PPC_WEAK_FUNC(sub_8252A5B0);
PPC_FUNC_IMPL(__imp__sub_8252A5B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251ffe8
	sub_8251FFE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252A5B4"))) PPC_WEAK_FUNC(sub_8252A5B4);
PPC_FUNC_IMPL(__imp__sub_8252A5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252A5B8"))) PPC_WEAK_FUNC(sub_8252A5B8);
PPC_FUNC_IMPL(__imp__sub_8252A5B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251f9d8
	sub_8251F9D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252A5BC"))) PPC_WEAK_FUNC(sub_8252A5BC);
PPC_FUNC_IMPL(__imp__sub_8252A5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252A5C0"))) PPC_WEAK_FUNC(sub_8252A5C0);
PPC_FUNC_IMPL(__imp__sub_8252A5C0) {
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
	// addi r9,r11,26420
	ctx.r9.s64 = r11.s64 + 26420;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252a5fc
	if (cr6.eq) goto loc_8252A5FC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252a600
	if (!cr6.eq) goto loc_8252A600;
loc_8252A5FC:
	// li r11,0
	r11.s64 = 0;
loc_8252A600:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19608(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19608);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r27,r28,188
	r27.s64 = r28.s64 + 188;
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
	// bne cr6,0x8252a658
	if (!cr6.eq) goto loc_8252A658;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8252a658
	if (!cr6.eq) goto loc_8252A658;
	// lwz r11,19608(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19608);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8252A658:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r31,r28,164
	r31.s64 = r28.s64 + 164;
	// addi r10,r11,26404
	ctx.r10.s64 = r11.s64 + 26404;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,164(r28)
	PPC_STORE_U32(r28.u32 + 164, ctx.r10.u32);
	// bl 0x8252b080
	sub_8252B080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8252b590
	sub_8252B590(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,26392
	ctx.r8.s64 = ctx.r9.s64 + 26392;
	// stw r8,164(r28)
	PPC_STORE_U32(r28.u32 + 164, ctx.r8.u32);
	// bl 0x8252b080
	sub_8252B080(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82520060
	sub_82520060(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8252A6A4"))) PPC_WEAK_FUNC(sub_8252A6A4);
PPC_FUNC_IMPL(__imp__sub_8252A6A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8252A6A8"))) PPC_WEAK_FUNC(sub_8252A6A8);
PPC_FUNC_IMPL(__imp__sub_8252A6A8) {
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
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// addi r25,r3,120
	r25.s64 = ctx.r3.s64 + 120;
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
	// beq cr6,0x8252a8dc
	if (cr6.eq) goto loc_8252A8DC;
	// addi r29,r28,28
	r29.s64 = r28.s64 + 28;
	// lis r27,-31965
	r27.s64 = -2094858240;
	// lis r26,-31965
	r26.s64 = -2094858240;
	// lis r24,-31965
	r24.s64 = -2094858240;
loc_8252A6F0:
	// lwz r11,-8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -8);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8252a704
	if (cr6.lt) goto loc_8252A704;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x8252a708
	goto loc_8252A708;
loc_8252A704:
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
loc_8252A708:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8252a738
	if (cr6.eq) goto loc_8252A738;
loc_8252A71C:
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
	// bne cr6,0x8252a71c
	if (!cr6.eq) goto loc_8252A71C;
loc_8252A738:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8251ebd0
	sub_8251EBD0(ctx, base);
	// lwz r10,-22816(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + -22816);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8252a790
	if (cr6.eq) goto loc_8252A790;
loc_8252A774:
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
	// bne cr6,0x8252a774
	if (!cr6.eq) goto loc_8252A774;
loc_8252A790:
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
	// lwz r5,-22816(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + -22816);
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
	// lwz r10,-22812(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + -22812);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8252a804
	if (cr6.eq) goto loc_8252A804;
loc_8252A7E8:
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
	// bne cr6,0x8252a7e8
	if (!cr6.eq) goto loc_8252A7E8;
loc_8252A804:
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
	// lwz r5,-22812(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + -22812);
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
	// lwz r10,-22808(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + -22808);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8252a878
	if (cr6.eq) goto loc_8252A878;
loc_8252A85C:
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
	// bne cr6,0x8252a85c
	if (!cr6.eq) goto loc_8252A85C;
loc_8252A878:
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
	// lwz r5,-22808(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + -22808);
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
	// lwz r11,12(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
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
	// bne cr6,0x8252a6f0
	if (!cr6.eq) goto loc_8252A6F0;
loc_8252A8DC:
	// lwz r11,132(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 132);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x8252aa58
	if (cr6.eq) goto loc_8252AA58;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x8252a9c0
	if (cr6.eq) goto loc_8252A9C0;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x8252aacc
	if (!cr6.eq) goto loc_8252AACC;
	// lwz r11,124(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 124);
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252a914
	if (cr6.lt) goto loc_8252A914;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252a918
	goto loc_8252A918;
loc_8252A914:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252A918:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252a940
	if (cr6.lt) goto loc_8252A940;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252a944
	goto loc_8252A944;
loc_8252A940:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252A944:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252a96c
	if (cr6.lt) goto loc_8252A96C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252a970
	goto loc_8252A970;
loc_8252A96C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252A970:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252a994
	if (cr6.lt) goto loc_8252A994;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252a998
	goto loc_8252A998;
loc_8252A994:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252A998:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x8251f450
	sub_8251F450(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9454
	return;
loc_8252A9C0:
	// lwz r11,124(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 124);
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252a9dc
	if (cr6.lt) goto loc_8252A9DC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252a9e0
	goto loc_8252A9E0;
loc_8252A9DC:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252A9E0:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252aa08
	if (cr6.lt) goto loc_8252AA08;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252aa0c
	goto loc_8252AA0C;
loc_8252AA08:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252AA0C:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252aa30
	if (cr6.lt) goto loc_8252AA30;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252aa34
	goto loc_8252AA34;
loc_8252AA30:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252AA34:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x8251f3c0
	sub_8251F3C0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9454
	return;
loc_8252AA58:
	// lwz r11,124(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 124);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252aa74
	if (cr6.lt) goto loc_8252AA74;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252aa78
	goto loc_8252AA78;
loc_8252AA74:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252AA78:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252aa9c
	if (cr6.lt) goto loc_8252AA9C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252aaa0
	goto loc_8252AAA0;
loc_8252AA9C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252AAA0:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfd f1,26488(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 26488);
	// lfd f2,26480(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 26480);
	// bl 0x8251ed08
	sub_8251ED08(ctx, base);
loc_8252AACC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8252AAD0"))) PPC_WEAK_FUNC(sub_8252AAD0);
PPC_FUNC_IMPL(__imp__sub_8252AAD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8252AAD4"))) PPC_WEAK_FUNC(sub_8252AAD4);
PPC_FUNC_IMPL(__imp__sub_8252AAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252AAD8"))) PPC_WEAK_FUNC(sub_8252AAD8);
PPC_FUNC_IMPL(__imp__sub_8252AAD8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f0
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r20,r28
	r20.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8252ac5c
	if (!cr6.gt) goto loc_8252AC5C;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r21,r28
	r21.u64 = r28.u64;
	// mr r22,r28
	r22.u64 = r28.u64;
	// lfs f31,-31496(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31496);
	f31.f64 = double(temp.f32);
	// li r23,4
	r23.s64 = 4;
	// lis r24,-31965
	r24.s64 = -2094858240;
	// lis r25,-31965
	r25.s64 = -2094858240;
	// lis r19,-32254
	r19.s64 = -2113798144;
	// addi r27,r11,17016
	r27.s64 = r11.s64 + 17016;
	// addi r26,r10,25524
	r26.s64 = ctx.r10.s64 + 25524;
loc_8252AB30:
	// lwz r10,168(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 168);
	// lwz r11,124(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 124);
	// add r30,r21,r10
	r30.u64 = r21.u64 + ctx.r10.u64;
	// add r31,r22,r11
	r31.u64 = r22.u64 + r11.u64;
	// lbz r11,32(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8252ac44
	if (cr6.eq) goto loc_8252AC44;
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x8252ab64
	if (cr6.lt) goto loc_8252AB64;
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8252ab70
	goto loc_8252AB70;
loc_8252AB64:
	// not r11,r11
	r11.u64 = ~r11.u64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_8252AB70:
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// lfs f0,26384(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r19.u32 + 26384);
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
	// ble cr6,0x8252ac44
	if (!cr6.gt) goto loc_8252AC44;
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// lwz r4,-22816(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + -22816);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-22808(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + -22808);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r26.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r4,8(r18)
	ctx.r4.u64 = PPC_LOAD_U32(r18.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x8252ac0c
	if (cr6.lt) goto loc_8252AC0C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8252AC0C:
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
	// stb r28,32(r30)
	PPC_STORE_U8(r30.u32 + 32, r28.u8);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8252ac44
	if (cr6.eq) goto loc_8252AC44;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
loc_8252AC44:
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r22,r22,48
	r22.s64 = r22.s64 + 48;
	// addi r21,r21,36
	r21.s64 = r21.s64 + 36;
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(r20.u32, r11.u32, xer);
	// blt cr6,0x8252ab30
	if (cr6.lt) goto loc_8252AB30;
loc_8252AC5C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
}

__attribute__((alias("__imp__sub_8252AC64"))) PPC_WEAK_FUNC(sub_8252AC64);
PPC_FUNC_IMPL(__imp__sub_8252AC64) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_8252AC68"))) PPC_WEAK_FUNC(sub_8252AC68);
PPC_FUNC_IMPL(__imp__sub_8252AC68) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// beq cr6,0x8252aee0
	if (cr6.eq) goto loc_8252AEE0;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8252aee0
	if (!cr6.lt) goto loc_8252AEE0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8252aee0
	if (cr6.lt) goto loc_8252AEE0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r26,r11,r9
	r26.u64 = r11.u64 + ctx.r9.u64;
	// lwz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252acd4
	if (cr6.lt) goto loc_8252ACD4;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// b 0x8252acd8
	goto loc_8252ACD8;
loc_8252ACD4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_8252ACD8:
	// addi r30,r26,28
	r30.s64 = r26.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r28,12(r27)
	r28.u64 = PPC_LOAD_U8(r27.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8251eaf8
	sub_8251EAF8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x8252ad18
	if (cr6.eq) goto loc_8252AD18;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251ec68
	sub_8251EC68(ctx, base);
loc_8252AD18:
	// lbz r11,12(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8252aee0
	if (cr6.eq) goto loc_8252AEE0;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lis r8,-31965
	ctx.r8.s64 = -2094858240;
	// lwz r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// lwz r4,-22816(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22816);
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r9,r11
	r28.u64 = ctx.r9.u64 + r11.u64;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r6,-31965
	ctx.r6.s64 = -2094858240;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,-22808(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22808);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251ec68
	sub_8251EC68(ctx, base);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r5,25536
	ctx.r3.s64 = ctx.r5.s64 + 25536;
	// li r11,0
	r11.s64 = 0;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// lwz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// addi r6,r10,17016
	ctx.r6.s64 = ctx.r10.s64 + 17016;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252ade8
	if (cr6.eq) goto loc_8252ADE8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252adec
	if (!cr6.eq) goto loc_8252ADEC;
loc_8252ADE8:
	// li r11,0
	r11.s64 = 0;
loc_8252ADEC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r9,17300
	ctx.r7.s64 = ctx.r9.s64 + 17300;
	// li r5,128
	ctx.r5.s64 = 128;
	// lfs f0,6196(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6196);
	f0.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8250c918
	sub_8250C918(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// bl 0x8250c758
	sub_8250C758(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8252AE48:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8252ae48
	if (!cr6.eq) goto loc_8252AE48;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// lwz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252ae84
	if (cr6.lt) goto loc_8252AE84;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// b 0x8252ae88
	goto loc_8252AE88;
loc_8252AE84:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_8252AE88:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r11,31476
	ctx.r6.s64 = r11.s64 + 31476;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
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
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r10,32(r28)
	PPC_STORE_U8(r28.u32 + 32, ctx.r10.u8);
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_8252AEE0:
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
}

__attribute__((alias("__imp__sub_8252AEEC"))) PPC_WEAK_FUNC(sub_8252AEEC);
PPC_FUNC_IMPL(__imp__sub_8252AEEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8252AEF0"))) PPC_WEAK_FUNC(sub_8252AEF0);
PPC_FUNC_IMPL(__imp__sub_8252AEF0) {
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
	// lis r27,-31970
	r27.s64 = -2095185920;
	// addi r10,r11,26420
	ctx.r10.s64 = r11.s64 + 26420;
	// li r29,0
	r29.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252af34
	if (cr6.eq) goto loc_8252AF34;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252af38
	if (!cr6.eq) goto loc_8252AF38;
loc_8252AF34:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8252AF38:
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r31,r30,164
	r31.s64 = r30.s64 + 164;
	// addi r9,r10,26404
	ctx.r9.s64 = ctx.r10.s64 + 26404;
	// stw r11,160(r30)
	PPC_STORE_U32(r30.u32 + 160, r11.u32);
	// stw r9,164(r30)
	PPC_STORE_U32(r30.u32 + 164, ctx.r9.u32);
	// stw r29,168(r30)
	PPC_STORE_U32(r30.u32 + 168, r29.u32);
	// stw r29,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r29.u32);
	// stw r29,172(r30)
	PPC_STORE_U32(r30.u32 + 172, r29.u32);
	// stw r29,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r29.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r8,180(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// or r6,r8,r3
	ctx.r6.u64 = ctx.r8.u64 | ctx.r3.u64;
	// addi r5,r7,26500
	ctx.r5.s64 = ctx.r7.s64 + 26500;
	// stw r6,180(r30)
	PPC_STORE_U32(r30.u32 + 180, ctx.r6.u32);
	// addi r28,r30,188
	r28.s64 = r30.s64 + 188;
	// stw r5,164(r30)
	PPC_STORE_U32(r30.u32 + 164, ctx.r5.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// lis r11,-32173
	r11.s64 = -2108489728;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r26,r11,-21400
	r26.s64 = r11.s64 + -21400;
	// beq cr6,0x8252afac
	if (cr6.eq) goto loc_8252AFAC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8252afac
	if (cr6.eq) goto loc_8252AFAC;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8252AFAC:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r29,12(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-788
	ctx.r3.s64 = ctx.r10.s64 + -788;
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
	// lwz r11,19608(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19608);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r8,4
	cr6.compare<uint32_t>(ctx.r8.u32, 4, xer);
	// bge cr6,0x8252b01c
	if (!cr6.lt) goto loc_8252B01C;
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
loc_8252B01C:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8252B030"))) PPC_WEAK_FUNC(sub_8252B030);
PPC_FUNC_IMPL(__imp__sub_8252B030) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8252B034"))) PPC_WEAK_FUNC(sub_8252B034);
PPC_FUNC_IMPL(__imp__sub_8252B034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B038"))) PPC_WEAK_FUNC(sub_8252B038);
PPC_FUNC_IMPL(__imp__sub_8252B038) {
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
	// lis r11,-31965
	r11.s64 = -2094858240;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r5,-22820(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -22820);
	// bl 0x8251fdb0
	sub_8251FDB0(ctx, base);
	// addi r3,r31,164
	ctx.r3.s64 = r31.s64 + 164;
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x8252b500
	sub_8252B500(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8252B074"))) PPC_WEAK_FUNC(sub_8252B074);
PPC_FUNC_IMPL(__imp__sub_8252B074) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252B078"))) PPC_WEAK_FUNC(sub_8252B078);
PPC_FUNC_IMPL(__imp__sub_8252B078) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8252B078"))) PPC_WEAK_FUNC(sub_8252B078);
PPC_FUNC_IMPL(__imp__sub_8252B078) {
	PPC_FUNC_PROLOGUE();
	// b 0x8252b590
	sub_8252B590(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252B07C"))) PPC_WEAK_FUNC(sub_8252B07C);
PPC_FUNC_IMPL(__imp__sub_8252B07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B080"))) PPC_WEAK_FUNC(sub_8252B080);
PPC_FUNC_IMPL(__imp__sub_8252B080) {
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
	// ble cr6,0x8252b0f8
	if (!cr6.gt) goto loc_8252B0F8;
	// li r28,15
	r28.s64 = 15;
	// li r29,0
	r29.s64 = 0;
loc_8252B0A4:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r31,r11,-32
	r31.s64 = r11.s64 + -32;
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -12);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252b0d4
	if (cr6.lt) goto loc_8252B0D4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8252B0D4:
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
	// bgt cr6,0x8252b0a4
	if (cr6.gt) goto loc_8252B0A4;
loc_8252B0F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8252B0FC"))) PPC_WEAK_FUNC(sub_8252B0FC);
PPC_FUNC_IMPL(__imp__sub_8252B0FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8252B100"))) PPC_WEAK_FUNC(sub_8252B100);
PPC_FUNC_IMPL(__imp__sub_8252B100) {
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
	// addi r10,r11,26392
	ctx.r10.s64 = r11.s64 + 26392;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8252b080
	sub_8252B080(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8252b144
	if (cr6.eq) goto loc_8252B144;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8252B144:
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

__attribute__((alias("__imp__sub_8252B158"))) PPC_WEAK_FUNC(sub_8252B158);
PPC_FUNC_IMPL(__imp__sub_8252B158) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252B15C"))) PPC_WEAK_FUNC(sub_8252B15C);
PPC_FUNC_IMPL(__imp__sub_8252B15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B160"))) PPC_WEAK_FUNC(sub_8252B160);
PPC_FUNC_IMPL(__imp__sub_8252B160) {
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
	// addi r9,r10,26404
	ctx.r9.s64 = ctx.r10.s64 + 26404;
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

__attribute__((alias("__imp__sub_8252B1B8"))) PPC_WEAK_FUNC(sub_8252B1B8);
PPC_FUNC_IMPL(__imp__sub_8252B1B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252B1BC"))) PPC_WEAK_FUNC(sub_8252B1BC);
PPC_FUNC_IMPL(__imp__sub_8252B1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B1C0"))) PPC_WEAK_FUNC(sub_8252B1C0);
PPC_FUNC_IMPL(__imp__sub_8252B1C0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x8252b080
	sub_8252B080(ctx, base);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8252b1fc
	if (!cr6.gt) goto loc_8252B1FC;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8252B1FC:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r30,4(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x8252b2cc
	if (cr6.eq) goto loc_8252B2CC;
	// li r25,15
	r25.s64 = 15;
	// li r27,0
	r27.s64 = 0;
	// li r26,-1
	r26.s64 = -1;
loc_8252B228:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8252b250
	if (!cr6.gt) goto loc_8252B250;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8252B250:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// stw r8,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r8.u32);
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8252b2a8
	if (cr0.eq) goto loc_8252B2A8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r30,32
	r11.s64 = r30.s64 + 32;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-28
	ctx.r4.s64 = r11.s64 + -28;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r25,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r25.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r27.u32);
	// stb r27,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r27.u8);
	// bl 0x822f08e0
	sub_822F08E0(ctx, base);
	// lbz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 32);
	// stb r9,32(r31)
	PPC_STORE_U8(r31.u32 + 32, ctx.r9.u8);
loc_8252B2A8:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r30,r30,36
	r30.s64 = r30.s64 + 36;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x8252b228
	if (!cr6.eq) goto loc_8252B228;
loc_8252B2CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8252B2D0"))) PPC_WEAK_FUNC(sub_8252B2D0);
PPC_FUNC_IMPL(__imp__sub_8252B2D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8252B2D4"))) PPC_WEAK_FUNC(sub_8252B2D4);
PPC_FUNC_IMPL(__imp__sub_8252B2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B2D8"))) PPC_WEAK_FUNC(sub_8252B2D8);
PPC_FUNC_IMPL(__imp__sub_8252B2D8) {
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
	// addi r10,r11,26404
	ctx.r10.s64 = r11.s64 + 26404;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8252b080
	sub_8252B080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8252b590
	sub_8252B590(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,26392
	ctx.r8.s64 = ctx.r9.s64 + 26392;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x8252b080
	sub_8252B080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8252B32C"))) PPC_WEAK_FUNC(sub_8252B32C);
PPC_FUNC_IMPL(__imp__sub_8252B32C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252B330"))) PPC_WEAK_FUNC(sub_8252B330);
PPC_FUNC_IMPL(__imp__sub_8252B330) {
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
	// addi r10,r11,26404
	ctx.r10.s64 = r11.s64 + 26404;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8252b080
	sub_8252B080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8252b590
	sub_8252B590(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,26392
	ctx.r8.s64 = ctx.r9.s64 + 26392;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x8252b080
	sub_8252B080(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8252b394
	if (cr6.eq) goto loc_8252B394;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8252B394:
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

__attribute__((alias("__imp__sub_8252B3A8"))) PPC_WEAK_FUNC(sub_8252B3A8);
PPC_FUNC_IMPL(__imp__sub_8252B3A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252B3AC"))) PPC_WEAK_FUNC(sub_8252B3AC);
PPC_FUNC_IMPL(__imp__sub_8252B3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B3B0"))) PPC_WEAK_FUNC(sub_8252B3B0);
PPC_FUNC_IMPL(__imp__sub_8252B3B0) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8252b3e4
	if (!cr6.gt) goto loc_8252B3E4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8252B3E4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r25,15
	r25.s64 = 15;
	// li r28,0
	r28.s64 = 0;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bge cr6,0x8252b484
	if (!cr6.lt) goto loc_8252B484;
	// li r27,-1
	r27.s64 = -1;
loc_8252B3FC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8252b424
	if (!cr6.gt) goto loc_8252B424;
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
loc_8252B424:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8252b478
	if (cr0.eq) goto loc_8252B478;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r25,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r25.u32);
	// stw r28,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r28.u32);
	// stb r28,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r28.u8);
	// bl 0x822f08e0
	sub_822F08E0(ctx, base);
	// lbz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 32);
	// stb r10,32(r30)
	PPC_STORE_U8(r30.u32 + 32, ctx.r10.u8);
loc_8252B478:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// blt cr6,0x8252b3fc
	if (cr6.lt) goto loc_8252B3FC;
loc_8252B484:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// ble cr6,0x8252b4e4
	if (!cr6.gt) goto loc_8252B4E4;
loc_8252B490:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r30,r11,-32
	r30.s64 = r11.s64 + -32;
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -12);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252b4c0
	if (cr6.lt) goto loc_8252B4C0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8252B4C0:
	// stw r25,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r25.u32);
	// stw r28,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r28.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r28.u8);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bgt cr6,0x8252b490
	if (cr6.gt) goto loc_8252B490;
loc_8252B4E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8252B4E8"))) PPC_WEAK_FUNC(sub_8252B4E8);
PPC_FUNC_IMPL(__imp__sub_8252B4E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8252B4EC"))) PPC_WEAK_FUNC(sub_8252B4EC);
PPC_FUNC_IMPL(__imp__sub_8252B4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B4F0"))) PPC_WEAK_FUNC(sub_8252B4F0);
PPC_FUNC_IMPL(__imp__sub_8252B4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-22820(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -22820);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252B4FC"))) PPC_WEAK_FUNC(sub_8252B4FC);
PPC_FUNC_IMPL(__imp__sub_8252B4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B500"))) PPC_WEAK_FUNC(sub_8252B500);
PPC_FUNC_IMPL(__imp__sub_8252B500) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r11.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r11.u8);
	// bl 0x8252b3b0
	sub_8252B3B0(ctx, base);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x8252b56c
	if (cr6.lt) goto loc_8252B56C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8252B56C:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
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

__attribute__((alias("__imp__sub_8252B588"))) PPC_WEAK_FUNC(sub_8252B588);
PPC_FUNC_IMPL(__imp__sub_8252B588) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252B58C"))) PPC_WEAK_FUNC(sub_8252B58C);
PPC_FUNC_IMPL(__imp__sub_8252B58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B590"))) PPC_WEAK_FUNC(sub_8252B590);
PPC_FUNC_IMPL(__imp__sub_8252B590) {
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
	// beq cr6,0x8252b674
	if (cr6.eq) goto loc_8252B674;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8252b604
	if (!cr6.eq) goto loc_8252B604;
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
	// beq cr6,0x8252b674
	if (cr6.eq) goto loc_8252B674;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x824bd098
	sub_824BD098(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x8252b674
	goto loc_8252B674;
loc_8252B604:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8252b160
	sub_8252B160(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x8252b630
	if (!cr6.gt) goto loc_8252B630;
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
loc_8252B630:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8252b1c0
	sub_8252B1C0(ctx, base);
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
	// bl 0x8252b2d8
	sub_8252B2D8(ctx, base);
loc_8252B674:
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

__attribute__((alias("__imp__sub_8252B688"))) PPC_WEAK_FUNC(sub_8252B688);
PPC_FUNC_IMPL(__imp__sub_8252B688) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252B68C"))) PPC_WEAK_FUNC(sub_8252B68C);
PPC_FUNC_IMPL(__imp__sub_8252B68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B690"))) PPC_WEAK_FUNC(sub_8252B690);
PPC_FUNC_IMPL(__imp__sub_8252B690) {
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
	// bl 0x8252a5c0
	sub_8252A5C0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8252b6c8
	if (cr6.eq) goto loc_8252B6C8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8252B6C8:
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

__attribute__((alias("__imp__sub_8252B6DC"))) PPC_WEAK_FUNC(sub_8252B6DC);
PPC_FUNC_IMPL(__imp__sub_8252B6DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252B6E0"))) PPC_WEAK_FUNC(sub_8252B6E0);
PPC_FUNC_IMPL(__imp__sub_8252B6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r5,r11,26508
	ctx.r5.s64 = r11.s64 + 26508;
	// b 0x8251fdb0
	sub_8251FDB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252B6EC"))) PPC_WEAK_FUNC(sub_8252B6EC);
PPC_FUNC_IMPL(__imp__sub_8252B6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B6F0"))) PPC_WEAK_FUNC(sub_8252B6F0);
PPC_FUNC_IMPL(__imp__sub_8252B6F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251ffe8
	sub_8251FFE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252B6F4"))) PPC_WEAK_FUNC(sub_8252B6F4);
PPC_FUNC_IMPL(__imp__sub_8252B6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B6F8"))) PPC_WEAK_FUNC(sub_8252B6F8);
PPC_FUNC_IMPL(__imp__sub_8252B6F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251f9d8
	sub_8251F9D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252B6FC"))) PPC_WEAK_FUNC(sub_8252B6FC);
PPC_FUNC_IMPL(__imp__sub_8252B6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B700"))) PPC_WEAK_FUNC(sub_8252B700);
PPC_FUNC_IMPL(__imp__sub_8252B700) {
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
	// addi r9,r11,26636
	ctx.r9.s64 = r11.s64 + 26636;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252b73c
	if (cr6.eq) goto loc_8252B73C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252b740
	if (!cr6.eq) goto loc_8252B740;
loc_8252B73C:
	// li r11,0
	r11.s64 = 0;
loc_8252B740:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19616(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19616);
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
	// bne cr6,0x8252b798
	if (!cr6.eq) goto loc_8252B798;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8252b798
	if (!cr6.eq) goto loc_8252B798;
	// lwz r11,19616(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19616);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8252B798:
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

__attribute__((alias("__imp__sub_8252B7AC"))) PPC_WEAK_FUNC(sub_8252B7AC);
PPC_FUNC_IMPL(__imp__sub_8252B7AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8252B7B0"))) PPC_WEAK_FUNC(sub_8252B7B0);
PPC_FUNC_IMPL(__imp__sub_8252B7B0) {
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
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// addi r22,r3,120
	r22.s64 = ctx.r3.s64 + 120;
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
	// beq cr6,0x8252ba38
	if (cr6.eq) goto loc_8252BA38;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r29,r28,28
	r29.s64 = r28.s64 + 28;
	// addi r24,r11,26588
	r24.s64 = r11.s64 + 26588;
	// addi r25,r10,26580
	r25.s64 = ctx.r10.s64 + 26580;
	// addi r26,r9,26564
	r26.s64 = ctx.r9.s64 + 26564;
	// addi r23,r8,26548
	r23.s64 = ctx.r8.s64 + 26548;
loc_8252B80C:
	// lwz r11,-8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -8);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8252b820
	if (cr6.lt) goto loc_8252B820;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x8252b824
	goto loc_8252B824;
loc_8252B820:
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
loc_8252B824:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8252b854
	if (cr6.eq) goto loc_8252B854;
loc_8252B838:
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
	// bne cr6,0x8252b838
	if (!cr6.eq) goto loc_8252B838;
loc_8252B854:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8251ebd0
	sub_8251EBD0(ctx, base);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// li r11,5381
	r11.s64 = 5381;
	// li r10,109
	ctx.r10.s64 = 109;
loc_8252B884:
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
	// bne cr6,0x8252b884
	if (!cr6.eq) goto loc_8252B884;
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// li r11,5381
	r11.s64 = 5381;
	// li r10,109
	ctx.r10.s64 = 109;
loc_8252B8EC:
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
	// bne cr6,0x8252b8ec
	if (!cr6.eq) goto loc_8252B8EC;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// li r11,5381
	r11.s64 = 5381;
	// li r10,116
	ctx.r10.s64 = 116;
loc_8252B954:
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
	// bne cr6,0x8252b954
	if (!cr6.eq) goto loc_8252B954;
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
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
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// li r11,5381
	r11.s64 = 5381;
	// li r10,116
	ctx.r10.s64 = 116;
loc_8252B9B8:
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
	// bne cr6,0x8252b9b8
	if (!cr6.eq) goto loc_8252B9B8;
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
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
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
	// lwz r11,12(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 4);
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
	// bne cr6,0x8252b80c
	if (!cr6.eq) goto loc_8252B80C;
loc_8252BA38:
	// lwz r11,132(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 132);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x8252bc68
	if (cr6.eq) goto loc_8252BC68;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x8252bb70
	if (cr6.eq) goto loc_8252BB70;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x8252bcdc
	if (!cr6.eq) goto loc_8252BCDC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r27,56
	r30.s64 = r27.s64 + 56;
	// lfd f0,17968(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 17968);
	// lfd f13,16944(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16944);
	// stfd f0,88(r27)
	PPC_STORE_U64(r27.u32 + 88, f0.u64);
	// stfd f13,64(r27)
	PPC_STORE_U64(r27.u32 + 64, ctx.f13.u64);
	// stfd f0,96(r27)
	PPC_STORE_U64(r27.u32 + 96, f0.u64);
	// stfd f13,72(r27)
	PPC_STORE_U64(r27.u32 + 72, ctx.f13.u64);
	// stfd f13,56(r27)
	PPC_STORE_U64(r27.u32 + 56, ctx.f13.u64);
	// stfd f0,104(r27)
	PPC_STORE_U64(r27.u32 + 104, f0.u64);
	// stfd f13,80(r27)
	PPC_STORE_U64(r27.u32 + 80, ctx.f13.u64);
	// stfd f0,112(r27)
	PPC_STORE_U64(r27.u32 + 112, f0.u64);
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8252baa4
	if (cr6.lt) goto loc_8252BAA4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252baa8
	goto loc_8252BAA8;
loc_8252BAA4:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252BAA8:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252bad0
	if (cr6.lt) goto loc_8252BAD0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252bad4
	goto loc_8252BAD4;
loc_8252BAD0:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252BAD4:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252bafc
	if (cr6.lt) goto loc_8252BAFC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252bb00
	goto loc_8252BB00;
loc_8252BAFC:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252BB00:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252bb24
	if (cr6.lt) goto loc_8252BB24;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252bb28
	goto loc_8252BB28;
loc_8252BB24:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252BB28:
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
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8251efd8
	sub_8251EFD8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x828e9450
	return;
loc_8252BB70:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lfd f0,16944(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16944);
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// lfd f13,17968(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 17968);
	// lfd f12,26712(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + 26712);
	// lfd f11,26704(r7)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 26704);
	// stfd f0,16(r27)
	PPC_STORE_U64(r27.u32 + 16, f0.u64);
	// stfd f13,40(r27)
	PPC_STORE_U64(r27.u32 + 40, ctx.f13.u64);
	// stfd f0,24(r27)
	PPC_STORE_U64(r27.u32 + 24, f0.u64);
	// stfd f13,48(r27)
	PPC_STORE_U64(r27.u32 + 48, ctx.f13.u64);
	// stfd f12,32(r27)
	PPC_STORE_U64(r27.u32 + 32, ctx.f12.u64);
	// stfd f11,8(r27)
	PPC_STORE_U64(r27.u32 + 8, ctx.f11.u64);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x8252bbc8
	if (cr6.lt) goto loc_8252BBC8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252bbcc
	goto loc_8252BBCC;
loc_8252BBC8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252BBCC:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252bbf4
	if (cr6.lt) goto loc_8252BBF4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252bbf8
	goto loc_8252BBF8;
loc_8252BBF4:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252BBF8:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252bc1c
	if (cr6.lt) goto loc_8252BC1C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252bc20
	goto loc_8252BC20;
loc_8252BC1C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252BC20:
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
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// bl 0x8251ee58
	sub_8251EE58(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x828e9450
	return;
loc_8252BC68:
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252bc84
	if (cr6.lt) goto loc_8252BC84;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252bc88
	goto loc_8252BC88;
loc_8252BC84:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252BC88:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252bcac
	if (cr6.lt) goto loc_8252BCAC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252bcb0
	goto loc_8252BCB0;
loc_8252BCAC:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252BCB0:
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
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfd f1,26696(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 26696);
	// lfd f2,16944(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16944);
	// bl 0x8251ed08
	sub_8251ED08(ctx, base);
loc_8252BCDC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8252BCE0"))) PPC_WEAK_FUNC(sub_8252BCE0);
PPC_FUNC_IMPL(__imp__sub_8252BCE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_8252BCE4"))) PPC_WEAK_FUNC(sub_8252BCE4);
PPC_FUNC_IMPL(__imp__sub_8252BCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252BCE8"))) PPC_WEAK_FUNC(sub_8252BCE8);
PPC_FUNC_IMPL(__imp__sub_8252BCE8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// beq cr6,0x8252bed8
	if (cr6.eq) goto loc_8252BED8;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8252bed8
	if (!cr6.lt) goto loc_8252BED8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8252bed8
	if (cr6.lt) goto loc_8252BED8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// addi r4,r8,26548
	ctx.r4.s64 = ctx.r8.s64 + 26548;
	// rlwinm r11,r7,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r31,r11,28
	r31.s64 = r11.s64 + 28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lbz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8252be7c
	if (cr6.eq) goto loc_8252BE7C;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,26580
	ctx.r4.s64 = r11.s64 + 26580;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r10,26588
	ctx.r4.s64 = ctx.r10.s64 + 26588;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252bda8
	if (cr6.eq) goto loc_8252BDA8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252bdac
	if (!cr6.eq) goto loc_8252BDAC;
loc_8252BDA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8252BDAC:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r4,r11,26600
	ctx.r4.s64 = r11.s64 + 26600;
	// bl 0x8250c5f8
	sub_8250C5F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822f1278
	sub_822F1278(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x8252bddc
	if (!cr6.lt) goto loc_8252BDDC;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_8252BDDC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x8252bdfc
	if (!cr6.lt) goto loc_8252BDFC;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_8252BDFC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r11,26624
	ctx.r9.s64 = r11.s64 + 26624;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r6,r7,17016
	ctx.r6.s64 = ctx.r7.s64 + 17016;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822dfc78
	sub_822DFC78(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e9468
	return;
loc_8252BE7C:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,26628
	ctx.r9.s64 = r11.s64 + 26628;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r6,r7,17016
	ctx.r6.s64 = ctx.r7.s64 + 17016;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
loc_8252BED8:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8252BEE4"))) PPC_WEAK_FUNC(sub_8252BEE4);
PPC_FUNC_IMPL(__imp__sub_8252BEE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8252BEE8"))) PPC_WEAK_FUNC(sub_8252BEE8);
PPC_FUNC_IMPL(__imp__sub_8252BEE8) {
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
	// addi r10,r11,26636
	ctx.r10.s64 = r11.s64 + 26636;
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
	// addi r29,r11,-17176
	r29.s64 = r11.s64 + -17176;
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252bf3c
	if (cr6.eq) goto loc_8252BF3C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252bf40
	if (!cr6.eq) goto loc_8252BF40;
loc_8252BF3C:
	// li r11,0
	r11.s64 = 0;
loc_8252BF40:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,-892
	ctx.r3.s64 = ctx.r9.s64 + -892;
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
	// lwz r11,19616(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19616);
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

__attribute__((alias("__imp__sub_8252BF94"))) PPC_WEAK_FUNC(sub_8252BF94);
PPC_FUNC_IMPL(__imp__sub_8252BF94) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8252BF98"))) PPC_WEAK_FUNC(sub_8252BF98);
PPC_FUNC_IMPL(__imp__sub_8252BF98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,26508
	ctx.r3.s64 = r11.s64 + 26508;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252BFA4"))) PPC_WEAK_FUNC(sub_8252BFA4);
PPC_FUNC_IMPL(__imp__sub_8252BFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252BFA8"))) PPC_WEAK_FUNC(sub_8252BFA8);
PPC_FUNC_IMPL(__imp__sub_8252BFA8) {
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
	// bl 0x8252b700
	sub_8252B700(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8252bfe0
	if (cr6.eq) goto loc_8252BFE0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8252BFE0:
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

__attribute__((alias("__imp__sub_8252BFF4"))) PPC_WEAK_FUNC(sub_8252BFF4);
PPC_FUNC_IMPL(__imp__sub_8252BFF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252BFF8"))) PPC_WEAK_FUNC(sub_8252BFF8);
PPC_FUNC_IMPL(__imp__sub_8252BFF8) {
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

__attribute__((alias("__imp__sub_8252C034"))) PPC_WEAK_FUNC(sub_8252C034);
PPC_FUNC_IMPL(__imp__sub_8252C034) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252C038"))) PPC_WEAK_FUNC(sub_8252C038);
PPC_FUNC_IMPL(__imp__sub_8252C038) {
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
	// addi r9,r11,26868
	ctx.r9.s64 = r11.s64 + 26868;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252c074
	if (cr6.eq) goto loc_8252C074;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252c078
	if (!cr6.eq) goto loc_8252C078;
loc_8252C074:
	// li r11,0
	r11.s64 = 0;
loc_8252C078:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19620(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19620);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r27,r28,184
	r27.s64 = r28.s64 + 184;
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
	// bne cr6,0x8252c0d0
	if (!cr6.eq) goto loc_8252C0D0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8252c0d0
	if (!cr6.eq) goto loc_8252C0D0;
	// lwz r11,19620(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19620);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8252C0D0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r31,r28,160
	r31.s64 = r28.s64 + 160;
	// addi r10,r11,26852
	ctx.r10.s64 = r11.s64 + 26852;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,160(r28)
	PPC_STORE_U32(r28.u32 + 160, ctx.r10.u32);
	// bl 0x82881e38
	sub_82881E38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8252cb08
	sub_8252CB08(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,26840
	ctx.r8.s64 = ctx.r9.s64 + 26840;
	// stw r8,160(r28)
	PPC_STORE_U32(r28.u32 + 160, ctx.r8.u32);
	// bl 0x82881e38
	sub_82881E38(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82520060
	sub_82520060(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8252C11C"))) PPC_WEAK_FUNC(sub_8252C11C);
PPC_FUNC_IMPL(__imp__sub_8252C11C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8252C120"))) PPC_WEAK_FUNC(sub_8252C120);
PPC_FUNC_IMPL(__imp__sub_8252C120) {
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
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f4
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r29,0
	r29.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r20,r29
	r20.u64 = r29.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// ble cr6,0x8252c3f4
	if (!cr6.gt) goto loc_8252C3F4;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r21,r29
	r21.u64 = r29.u64;
	// lis r24,-31970
	r24.s64 = -2095185920;
	// li r22,15
	r22.s64 = 15;
	// addi r23,r11,26796
	r23.s64 = r11.s64 + 26796;
	// addi r26,r10,26784
	r26.s64 = ctx.r10.s64 + 26784;
	// addi r27,r9,26776
	r27.s64 = ctx.r9.s64 + 26776;
	// addi r25,r8,26760
	r25.s64 = ctx.r8.s64 + 26760;
loc_8252C17C:
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// add r30,r21,r11
	r30.u64 = r21.u64 + r11.u64;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8252c198
	if (cr6.lt) goto loc_8252C198;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8252c19c
	goto loc_8252C19C;
loc_8252C198:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_8252C19C:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8252c1cc
	if (cr6.eq) goto loc_8252C1CC;
loc_8252C1B0:
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
	// bne cr6,0x8252c1b0
	if (!cr6.eq) goto loc_8252C1B0;
loc_8252C1CC:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r31,r30,28
	r31.s64 = r30.s64 + 28;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// bl 0x8251ebd0
	sub_8251EBD0(ctx, base);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r4,8(r19)
	ctx.r4.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
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
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// li r11,5381
	r11.s64 = 5381;
	// li r10,116
	ctx.r10.s64 = 116;
loc_8252C234:
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
	// bne cr6,0x8252c234
	if (!cr6.eq) goto loc_8252C234;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// li r11,5381
	r11.s64 = 5381;
	// li r10,116
	ctx.r10.s64 = 116;
loc_8252C29C:
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
	// bne cr6,0x8252c29c
	if (!cr6.eq) goto loc_8252C29C;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lwz r3,-14756(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252c314
	if (cr6.eq) goto loc_8252C314;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252c318
	if (!cr6.eq) goto loc_8252C318;
loc_8252C314:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8252C318:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// bl 0x8250c5f8
	sub_8250C5F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r22,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r22.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r29.u32);
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r29.u8);
loc_8252C338:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8252c338
	if (!cr6.eq) goto loc_8252C338;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x8252c370
	if (!cr6.lt) goto loc_8252C370;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
loc_8252C370:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x8252c390
	if (!cr6.lt) goto loc_8252C390;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
loc_8252C390:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8252c3b0
	if (cr6.lt) goto loc_8252C3B0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8252C3B0:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r22,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r22.u32);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r29.u32);
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r29.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8252c3e0
	if (cr6.eq) goto loc_8252C3E0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
loc_8252C3E0:
	// lwz r11,132(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r21,r21,48
	r21.s64 = r21.s64 + 48;
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(r20.u32, r11.u32, xer);
	// blt cr6,0x8252c17c
	if (cr6.lt) goto loc_8252C17C;
loc_8252C3F4:
	// lwz r11,132(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x8252c5c0
	if (cr6.eq) goto loc_8252C5C0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x8252c4d4
	if (cr6.eq) goto loc_8252C4D4;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x8252c634
	if (!cr6.eq) goto loc_8252C634;
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252c42c
	if (cr6.lt) goto loc_8252C42C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252c430
	goto loc_8252C430;
loc_8252C42C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252C430:
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
	// blt cr6,0x8252c458
	if (cr6.lt) goto loc_8252C458;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252c45c
	goto loc_8252C45C;
loc_8252C458:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252C45C:
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
	// blt cr6,0x8252c484
	if (cr6.lt) goto loc_8252C484;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252c488
	goto loc_8252C488;
loc_8252C484:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252C488:
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
	// blt cr6,0x8252c4ac
	if (cr6.lt) goto loc_8252C4AC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252c4b0
	goto loc_8252C4B0;
loc_8252C4AC:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252C4B0:
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
	// b 0x8252c634
	goto loc_8252C634;
loc_8252C4D4:
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// addi r31,r28,8
	r31.s64 = r28.s64 + 8;
	// lfd f13,18264(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 18264);
	// lfd f0,16944(r9)
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16944);
	// lfd f12,18256(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + 18256);
	// stfd f13,32(r28)
	PPC_STORE_U64(r28.u32 + 32, ctx.f13.u64);
	// stfd f0,16(r28)
	PPC_STORE_U64(r28.u32 + 16, f0.u64);
	// stfd f0,40(r28)
	PPC_STORE_U64(r28.u32 + 40, f0.u64);
	// stfd f0,24(r28)
	PPC_STORE_U64(r28.u32 + 24, f0.u64);
	// stfd f0,48(r28)
	PPC_STORE_U64(r28.u32 + 48, f0.u64);
	// stfd f12,8(r28)
	PPC_STORE_U64(r28.u32 + 8, ctx.f12.u64);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8252c524
	if (cr6.lt) goto loc_8252C524;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252c528
	goto loc_8252C528;
loc_8252C524:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252C528:
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
	// blt cr6,0x8252c550
	if (cr6.lt) goto loc_8252C550;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252c554
	goto loc_8252C554;
loc_8252C550:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252C554:
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
	// blt cr6,0x8252c578
	if (cr6.lt) goto loc_8252C578;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252c57c
	goto loc_8252C57C;
loc_8252C578:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252C57C:
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
	// b 0x8252c634
	goto loc_8252C634;
loc_8252C5C0:
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252c5dc
	if (cr6.lt) goto loc_8252C5DC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252c5e0
	goto loc_8252C5E0;
loc_8252C5DC:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252C5E0:
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
	// blt cr6,0x8252c604
	if (cr6.lt) goto loc_8252C604;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252c608
	goto loc_8252C608;
loc_8252C604:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252C608:
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
	// li r6,1
	ctx.r6.s64 = 1;
	// lfd f1,18248(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 18248);
	// lfd f2,16944(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16944);
	// bl 0x8251ed08
	sub_8251ED08(ctx, base);
loc_8252C634:
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
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_8252C654"))) PPC_WEAK_FUNC(sub_8252C654);
PPC_FUNC_IMPL(__imp__sub_8252C654) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_8252C658"))) PPC_WEAK_FUNC(sub_8252C658);
PPC_FUNC_IMPL(__imp__sub_8252C658) {
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
	// lbz r11,148(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8252c7c4
	if (cr6.eq) goto loc_8252C7C4;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8252c7c4
	if (!cr6.lt) goto loc_8252C7C4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8252c7c4
	if (cr6.lt) goto loc_8252C7C4;
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
	// blt cr6,0x8252c6c0
	if (cr6.lt) goto loc_8252C6C0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252c6c4
	goto loc_8252C6C4;
loc_8252C6C0:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252C6C4:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lbz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lbz r9,212(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 212);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x8252c7c4
	if (cr6.eq) goto loc_8252C7C4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8252c764
	if (cr6.eq) goto loc_8252C764;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r10,212(r11)
	PPC_STORE_U8(r11.u32 + 212, ctx.r10.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251ec68
	sub_8251EC68(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,26828
	ctx.r7.s64 = ctx.r9.s64 + 26828;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r5,17016
	ctx.r6.s64 = ctx.r5.s64 + 17016;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// li r5,0
	ctx.r5.s64 = 0;
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
	// b 0x8252c7c0
	goto loc_8252C7C0;
loc_8252C764:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,26832
	ctx.r8.s64 = ctx.r9.s64 + 26832;
	// li r7,4
	ctx.r7.s64 = 4;
	// stb r10,212(r11)
	PPC_STORE_U8(r11.u32 + 212, ctx.r10.u8);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r6,r6,17016
	ctx.r6.s64 = ctx.r6.s64 + 17016;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
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
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8252C7C0:
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_8252C7C4:
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

