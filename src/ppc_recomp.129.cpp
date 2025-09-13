#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8250CC48"))) PPC_WEAK_FUNC(sub_8250CC48);
PPC_FUNC_IMPL(__imp__sub_8250CC48) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,21892(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21892);
	// bl 0x82419d98
	sub_82419D98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250ccac
	if (cr6.eq) goto loc_8250CCAC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250c758
	sub_8250C758(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250ccac
	if (cr6.eq) goto loc_8250CCAC;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8250CCAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8250CCB4"))) PPC_WEAK_FUNC(sub_8250CCB4);
PPC_FUNC_IMPL(__imp__sub_8250CCB4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8250CCB8"))) PPC_WEAK_FUNC(sub_8250CCB8);
PPC_FUNC_IMPL(__imp__sub_8250CCB8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,16516
	ctx.r10.s64 = r11.s64 + 16516;
	// li r30,0
	r30.s64 = 0;
	// li r29,15
	r29.s64 = 15;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r29.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// addi r28,r9,16508
	r28.s64 = ctx.r9.s64 + 16508;
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// stw r29,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r29.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// stb r30,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r30.u8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// stb r30,60(r31)
	PPC_STORE_U8(r31.u32 + 60, r30.u8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stb r30,88(r31)
	PPC_STORE_U8(r31.u32 + 88, r30.u8);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r8,22564
	ctx.r4.s64 = ctx.r8.s64 + 22564;
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// lwz r3,-14756(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250cd78
	if (cr6.eq) goto loc_8250CD78;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250cd78
	if (cr6.eq) goto loc_8250CD78;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8250CD78:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x824fbbd8
	sub_824FBBD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8250CD90"))) PPC_WEAK_FUNC(sub_8250CD90);
PPC_FUNC_IMPL(__imp__sub_8250CD90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8250CD94"))) PPC_WEAK_FUNC(sub_8250CD94);
PPC_FUNC_IMPL(__imp__sub_8250CD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250CD98"))) PPC_WEAK_FUNC(sub_8250CD98);
PPC_FUNC_IMPL(__imp__sub_8250CD98) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,21892(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21892);
	// bl 0x82419d98
	sub_82419D98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250ce10
	if (cr6.eq) goto loc_8250CE10;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250c758
	sub_8250C758(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250ce10
	if (cr6.eq) goto loc_8250CE10;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8250CDE8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8250cde8
	if (!cr6.eq) goto loc_8250CDE8;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// b 0x8250ce34
	goto loc_8250CE34;
loc_8250CE10:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250ce2c
	if (cr6.lt) goto loc_8250CE2C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250ce30
	goto loc_8250CE30;
loc_8250CE2C:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8250CE30:
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
loc_8250CE34:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250ce48
	if (cr6.lt) goto loc_8250CE48;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250ce4c
	goto loc_8250CE4C;
loc_8250CE48:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8250CE4C:
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

__attribute__((alias("__imp__sub_8250CE60"))) PPC_WEAK_FUNC(sub_8250CE60);
PPC_FUNC_IMPL(__imp__sub_8250CE60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250CE64"))) PPC_WEAK_FUNC(sub_8250CE64);
PPC_FUNC_IMPL(__imp__sub_8250CE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250CE68"))) PPC_WEAK_FUNC(sub_8250CE68);
PPC_FUNC_IMPL(__imp__sub_8250CE68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r18{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r28,0
	r28.s64 = 0;
	// li r27,15
	r27.s64 = 15;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
loc_8250CE9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8250ce9c
	if (!cr6.eq) goto loc_8250CE9C;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r29,r11,22564
	r29.s64 = r11.s64 + 22564;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8250d328
	sub_8250D328(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8250cef0
	if (!cr6.eq) goto loc_8250CEF0;
	// lwz r30,96(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8250CEF0:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r27.u32);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r28.u32);
	// stb r28,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r28.u8);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r27.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// lwz r11,21892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21892);
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r28.u8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// bgt cr6,0x8250cfc0
	if (cr6.gt) goto loc_8250CFC0;
	// lis r12,-32175
	r12.s64 = -2108620800;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-12488
	r12.s64 = r12.s64 + -12488;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_8250CF78;
	case 1:
		goto loc_8250CF94;
	case 2:
		goto loc_8250CF78;
	case 3:
		goto loc_8250CF78;
	case 4:
		goto loc_8250CF78;
	case 5:
		goto loc_8250CFC0;
	case 6:
		goto loc_8250CFC0;
	case 7:
		goto loc_8250CF78;
	case 8:
		goto loc_8250CFC0;
	case 9:
		goto loc_8250CFB4;
	case 10:
		goto loc_8250CFB4;
	case 11:
		goto loc_8250CF78;
	case 12:
		goto loc_8250CF94;
	case 13:
		goto loc_8250CF94;
	case 14:
		goto loc_8250CF78;
	case 15:
		goto loc_8250CF94;
	default:
		__builtin_unreachable();
	}
	// lwz r18,-12424(r16)
	r18.u64 = PPC_LOAD_U32(r16.u32 + -12424);
	// lwz r18,-12396(r16)
	r18.u64 = PPC_LOAD_U32(r16.u32 + -12396);
	// lwz r18,-12424(r16)
	r18.u64 = PPC_LOAD_U32(r16.u32 + -12424);
	// lwz r18,-12424(r16)
	r18.u64 = PPC_LOAD_U32(r16.u32 + -12424);
	// lwz r18,-12424(r16)
	r18.u64 = PPC_LOAD_U32(r16.u32 + -12424);
	// lwz r18,-12352(r16)
	r18.u64 = PPC_LOAD_U32(r16.u32 + -12352);
	// lwz r18,-12352(r16)
	r18.u64 = PPC_LOAD_U32(r16.u32 + -12352);
	// lwz r18,-12424(r16)
	r18.u64 = PPC_LOAD_U32(r16.u32 + -12424);
	// lwz r18,-12352(r16)
	r18.u64 = PPC_LOAD_U32(r16.u32 + -12352);
	// lwz r18,-12364(r16)
	r18.u64 = PPC_LOAD_U32(r16.u32 + -12364);
	// lwz r18,-12364(r16)
	r18.u64 = PPC_LOAD_U32(r16.u32 + -12364);
	// lwz r18,-12424(r16)
	r18.u64 = PPC_LOAD_U32(r16.u32 + -12424);
	// lwz r18,-12396(r16)
	r18.u64 = PPC_LOAD_U32(r16.u32 + -12396);
	// lwz r18,-12396(r16)
	r18.u64 = PPC_LOAD_U32(r16.u32 + -12396);
	// lwz r18,-12424(r16)
	r18.u64 = PPC_LOAD_U32(r16.u32 + -12424);
	// lwz r18,-12396(r16)
	r18.u64 = PPC_LOAD_U32(r16.u32 + -12396);
loc_8250CF78:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r11,16528
	ctx.r4.s64 = r11.s64 + 16528;
	// b 0x8250cfd8
	goto loc_8250CFD8;
loc_8250CF94:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,16524
	ctx.r4.s64 = r11.s64 + 16524;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,16528
	ctx.r4.s64 = ctx.r10.s64 + 16528;
	// b 0x8250cfd8
	goto loc_8250CFD8;
loc_8250CFB4:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r11,16524
	ctx.r4.s64 = r11.s64 + 16524;
	// b 0x8250cfc8
	goto loc_8250CFC8;
loc_8250CFC0:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r11,16528
	ctx.r4.s64 = r11.s64 + 16528;
loc_8250CFC8:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_8250CFD8:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// li r29,-1
	r29.s64 = -1;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// beq cr6,0x8250d00c
	if (cr6.eq) goto loc_8250D00C;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8250d628
	sub_8250D628(ctx, base);
loc_8250D00C:
	// lis r11,21845
	r11.s64 = 1431633920;
	// ori r10,r11,21846
	ctx.r10.u64 = r11.u64 | 21846;
	// mulhw r11,r30,r10
	r11.s64 = (int64_t(r30.s32) * int64_t(ctx.r10.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// subf. r31,r9,r30
	r31.s64 = r30.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8250d034
	if (!cr0.eq) goto loc_8250D034;
	// li r31,3
	r31.s64 = 3;
loc_8250D034:
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// bge cr6,0x8250d064
	if (!cr6.lt) goto loc_8250D064;
loc_8250D03C:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8250d468
	sub_8250D468(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// blt cr6,0x8250d03c
	if (cr6.lt) goto loc_8250D03C;
loc_8250D064:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r31,r26,116
	r31.s64 = r26.s64 + 116;
	// li r6,126
	ctx.r6.s64 = 126;
	// addi r5,r11,16504
	ctx.r5.s64 = r11.s64 + 16504;
	// li r4,512
	ctx.r4.s64 = 512;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x8250d094
	if (!cr6.lt) goto loc_8250D094;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_8250D094:
	// addi r3,r26,117
	ctx.r3.s64 = r26.s64 + 117;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x828ecd48
	sub_828ECD48(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stb r28,117(r11)
	PPC_STORE_U8(r11.u32 + 117, r28.u8);
	// blt cr6,0x8250d0c0
	if (cr6.lt) goto loc_8250D0C0;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8250D0C0:
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r27.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r28.u8);
	// blt cr6,0x8250d0e0
	if (cr6.lt) goto loc_8250D0E0;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8250D0E0:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r27.u32);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r28.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// stb r28,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r28.u8);
	// blt cr6,0x8250d100
	if (cr6.lt) goto loc_8250D100;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8250D100:
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_8250D110"))) PPC_WEAK_FUNC(sub_8250D110);
PPC_FUNC_IMPL(__imp__sub_8250D110) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8250D114"))) PPC_WEAK_FUNC(sub_8250D114);
PPC_FUNC_IMPL(__imp__sub_8250D114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250D118"))) PPC_WEAK_FUNC(sub_8250D118);
PPC_FUNC_IMPL(__imp__sub_8250D118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8250d130
	if (!cr6.eq) goto loc_8250D130;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,13435
	ctx.r3.s64 = r11.s64 + 13435;
	// blr 
	return;
loc_8250D130:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8250D13C:
	// cmpw cr6,r9,r5
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, xer);
	// bge cr6,0x8250d184
	if (!cr6.lt) goto loc_8250D184;
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// blt cr6,0x8250d15c
	if (cr6.lt) goto loc_8250D15C;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// ble cr6,0x8250d16c
	if (!cr6.gt) goto loc_8250D16C;
loc_8250D15C:
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// beq cr6,0x8250d16c
	if (cr6.eq) goto loc_8250D16C;
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(r11.s32, 46, xer);
	// bne cr6,0x8250d180
	if (!cr6.eq) goto loc_8250D180;
loc_8250D16C:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8250d13c
	if (!cr6.eq) goto loc_8250D13C;
	// b 0x8250d184
	goto loc_8250D184;
loc_8250D180:
	// li r8,0
	ctx.r8.s64 = 0;
loc_8250D184:
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250d194
	if (cr6.eq) goto loc_8250D194;
	// b 0x8250ce68
	sub_8250CE68(ctx, base);
	return;
loc_8250D194:
	// b 0x8250c5f8
	sub_8250C5F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250D198"))) PPC_WEAK_FUNC(sub_8250D198);
PPC_FUNC_IMPL(__imp__sub_8250D198) {
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
	// li r29,0
	r29.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r8,24192(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
loc_8250D1CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8250d1cc
	if (!cr6.eq) goto loc_8250D1CC;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,21892(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21892);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmpwi cr6,r9,18
	cr6.compare<int32_t>(ctx.r9.s32, 18, xer);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// beq cr6,0x8250d260
	if (cr6.eq) goto loc_8250D260;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8250d21c
	if (!cr6.lt) goto loc_8250D21C;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
loc_8250D21C:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bge cr6,0x8250d230
	if (!cr6.lt) goto loc_8250D230;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_8250D230:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8250d2ac
	if (cr6.eq) goto loc_8250D2AC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,58
	ctx.r10.s64 = 58;
loc_8250D244:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r8,46
	cr6.compare<uint32_t>(ctx.r8.u32, 46, xer);
	// bne cr6,0x8250d254
	if (!cr6.eq) goto loc_8250D254;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
loc_8250D254:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8250d244
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8250D244;
	// b 0x8250d2ac
	goto loc_8250D2AC;
loc_8250D260:
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8250d26c
	if (!cr6.lt) goto loc_8250D26C;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
loc_8250D26C:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bge cr6,0x8250d280
	if (!cr6.lt) goto loc_8250D280;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_8250D280:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8250d2ac
	if (cr6.eq) goto loc_8250D2AC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,46
	ctx.r10.s64 = 46;
loc_8250D294:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r8,58
	cr6.compare<uint32_t>(ctx.r8.u32, 58, xer);
	// bne cr6,0x8250d2a4
	if (!cr6.eq) goto loc_8250D2A4;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
loc_8250D2A4:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8250d294
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8250D294;
loc_8250D2AC:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r31,r30,116
	r31.s64 = r30.s64 + 116;
	// li r6,126
	ctx.r6.s64 = 126;
	// addi r5,r11,16504
	ctx.r5.s64 = r11.s64 + 16504;
	// li r4,512
	ctx.r4.s64 = 512;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x8250d2dc
	if (!cr6.lt) goto loc_8250D2DC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_8250D2DC:
	// addi r3,r30,117
	ctx.r3.s64 = r30.s64 + 117;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x828ecd48
	sub_828ECD48(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stb r29,116(r11)
	PPC_STORE_U8(r11.u32 + 116, r29.u8);
	// blt cr6,0x8250d308
	if (cr6.lt) goto loc_8250D308;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8250D308:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8250D318"))) PPC_WEAK_FUNC(sub_8250D318);
PPC_FUNC_IMPL(__imp__sub_8250D318) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8250D31C"))) PPC_WEAK_FUNC(sub_8250D31C);
PPC_FUNC_IMPL(__imp__sub_8250D31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250D320"))) PPC_WEAK_FUNC(sub_8250D320);
PPC_FUNC_IMPL(__imp__sub_8250D320) {
	PPC_FUNC_PROLOGUE();
	// b 0x8250ce68
	sub_8250CE68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250D324"))) PPC_WEAK_FUNC(sub_8250D324);
PPC_FUNC_IMPL(__imp__sub_8250D324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250D328"))) PPC_WEAK_FUNC(sub_8250D328);
PPC_FUNC_IMPL(__imp__sub_8250D328) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8250d360
	if (!cr6.eq) goto loc_8250D360;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bgt cr6,0x8250d360
	if (cr6.gt) goto loc_8250D360;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_8250D360:
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bge cr6,0x8250d430
	if (!cr6.lt) goto loc_8250D430;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bgt cr6,0x8250d430
	if (cr6.gt) goto loc_8250D430;
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8250d394
	if (cr6.lt) goto loc_8250D394;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// b 0x8250d398
	goto loc_8250D398;
loc_8250D394:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_8250D398:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// add r31,r11,r5
	r31.u64 = r11.u64 + ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828ecc40
	sub_828ECC40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250d430
	if (cr6.eq) goto loc_8250D430;
loc_8250D3B8:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8250d3f0
	if (cr6.eq) goto loc_8250D3F0;
	// add r8,r3,r28
	ctx.r8.u64 = ctx.r3.u64 + r28.u64;
loc_8250D3D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8250d3f0
	if (!cr0.eq) goto loc_8250D3F0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x8250d3d0
	if (!cr6.eq) goto loc_8250D3D0;
loc_8250D3F0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x8250d404
	if (cr6.lt) goto loc_8250D404;
	// bgt cr6,0x8250d404
	if (cr6.gt) goto loc_8250D404;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8250d43c
	if (cr6.eq) goto loc_8250D43C;
loc_8250D404:
	// subf r11,r3,r31
	r11.s64 = r31.s64 - ctx.r3.s64;
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x828ecc40
	sub_828ECC40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250d3b8
	if (!cr6.eq) goto loc_8250D3B8;
loc_8250D430:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_8250D43C:
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d458
	if (cr6.lt) goto loc_8250D458;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_8250D458:
	// mr r11,r27
	r11.u64 = r27.u64;
	// subf r3,r27,r3
	ctx.r3.s64 = ctx.r3.s64 - r27.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8250D464"))) PPC_WEAK_FUNC(sub_8250D464);
PPC_FUNC_IMPL(__imp__sub_8250D464) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8250D468"))) PPC_WEAK_FUNC(sub_8250D468);
PPC_FUNC_IMPL(__imp__sub_8250D468) {
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
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// blt cr6,0x8250d61c
	if (cr6.lt) goto loc_8250D61C;
	// lwz r11,16(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// blt cr6,0x8250d61c
	if (cr6.lt) goto loc_8250D61C;
	// subf r11,r6,r11
	r11.s64 = r11.s64 - ctx.r6.s64;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x8250d4b0
	if (!cr6.lt) goto loc_8250D4B0;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8250D4B0:
	// subfic r11,r10,-1
	xer.ca = ctx.r10.u32 <= 4294967295;
	r11.s64 = -1 - ctx.r10.s64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bgt cr6,0x8250d4c8
	if (cr6.gt) goto loc_8250D4C8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,13280
	ctx.r3.s64 = r11.s64 + 13280;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_8250D4C8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8250d610
	if (cr6.eq) goto loc_8250D610;
	// add r26,r10,r30
	r26.u64 = ctx.r10.u64 + r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f05a0
	sub_822F05A0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250d610
	if (cr6.eq) goto loc_8250D610;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d504
	if (cr6.lt) goto loc_8250D504;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d508
	goto loc_8250D508;
loc_8250D504:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8250D508:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d518
	if (cr6.lt) goto loc_8250D518;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d51c
	goto loc_8250D51C;
loc_8250D518:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8250D51C:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// add r4,r10,r28
	ctx.r4.u64 = ctx.r10.u64 + r28.u64;
	// subf r5,r28,r9
	ctx.r5.s64 = ctx.r9.s64 - r28.s64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x8250d59c
	if (!cr6.eq) goto loc_8250D59C;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(r28.u32, r27.u32, xer);
	// add r9,r27,r30
	ctx.r9.u64 = r27.u64 + r30.u64;
	// blt cr6,0x8250d54c
	if (cr6.lt) goto loc_8250D54C;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
loc_8250D54C:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d560
	if (cr6.lt) goto loc_8250D560;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d564
	goto loc_8250D564;
loc_8250D560:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8250D564:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d584
	if (cr6.lt) goto loc_8250D584;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// b 0x8250d5dc
	goto loc_8250D5DC;
loc_8250D584:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r3,r31,r28
	ctx.r3.u64 = r31.u64 + r28.u64;
	// mr r11,r31
	r11.u64 = r31.u64;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// b 0x8250d5dc
	goto loc_8250D5DC;
loc_8250D59C:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d5b0
	if (cr6.lt) goto loc_8250D5B0;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x8250d5b4
	goto loc_8250D5B4;
loc_8250D5B0:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8250D5B4:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d5c8
	if (cr6.lt) goto loc_8250D5C8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d5cc
	goto loc_8250D5CC;
loc_8250D5C8:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8250D5CC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r10,r27
	ctx.r4.u64 = ctx.r10.u64 + r27.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_8250D5DC:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r26,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d604
	if (cr6.lt) goto loc_8250D604;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stbx r10,r11,r26
	PPC_STORE_U8(r11.u32 + r26.u32, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8250D604:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r31
	r11.u64 = r31.u64;
	// stbx r10,r31,r26
	PPC_STORE_U8(r31.u32 + r26.u32, ctx.r10.u8);
loc_8250D610:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8250D61C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,13256
	ctx.r3.s64 = r11.s64 + 13256;
}

__attribute__((alias("__imp__sub_8250D624"))) PPC_WEAK_FUNC(sub_8250D624);
PPC_FUNC_IMPL(__imp__sub_8250D624) {
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
	// bl 0x828e9160
	sub_828E9160(ctx, base);
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// blt cr6,0x8250da10
	if (cr6.lt) goto loc_8250DA10;
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x8250da10
	if (cr6.lt) goto loc_8250DA10;
	// subf r9,r4,r11
	ctx.r9.s64 = r11.s64 - ctx.r4.s64;
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// bge cr6,0x8250d674
	if (!cr6.lt) goto loc_8250D674;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
loc_8250D674:
	// subf r10,r25,r10
	ctx.r10.s64 = ctx.r10.s64 - r25.s64;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bge cr6,0x8250d684
	if (!cr6.lt) goto loc_8250D684;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
loc_8250D684:
	// subf r10,r29,r11
	ctx.r10.s64 = r11.s64 - r29.s64;
	// subfic r8,r27,-1
	xer.ca = r27.u32 <= 4294967295;
	ctx.r8.s64 = -1 - r27.s64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8250d6a0
	if (cr6.gt) goto loc_8250D6A0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,13280
	ctx.r3.s64 = r11.s64 + 13280;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_8250D6A0:
	// add r24,r10,r27
	r24.u64 = ctx.r10.u64 + r27.u64;
	// subf r26,r29,r9
	r26.s64 = ctx.r9.s64 - r29.s64;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(r11.u32, r24.u32, xer);
	// bge cr6,0x8250d6c0
	if (!cr6.lt) goto loc_8250D6C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f05a0
	sub_822F05A0(ctx, base);
loc_8250D6C0:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// beq cr6,0x8250d760
	if (cr6.eq) goto loc_8250D760;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8250d6dc
	if (cr6.lt) goto loc_8250D6DC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d6e0
	goto loc_8250D6E0;
loc_8250D6DC:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8250D6E0:
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8250d6f0
	if (cr6.lt) goto loc_8250D6F0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d6f4
	goto loc_8250D6F4;
loc_8250D6F0:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8250D6F4:
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// add r3,r10,r27
	ctx.r3.u64 = ctx.r10.u64 + r27.u64;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d720
	if (cr6.lt) goto loc_8250D720;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x8250d724
	goto loc_8250D724;
loc_8250D720:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_8250D724:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d748
	if (cr6.lt) goto loc_8250D748;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + r25.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// b 0x8250d9d0
	goto loc_8250D9D0;
loc_8250D748:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + r25.u64;
	// add r3,r31,r30
	ctx.r3.u64 = r31.u64 + r30.u64;
	// mr r11,r31
	r11.u64 = r31.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// b 0x8250d9d0
	goto loc_8250D9D0;
loc_8250D760:
	// cmplw cr6,r27,r29
	cr6.compare<uint32_t>(r27.u32, r29.u32, xer);
	// bgt cr6,0x8250d7e8
	if (cr6.gt) goto loc_8250D7E8;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d77c
	if (cr6.lt) goto loc_8250D77C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d780
	goto loc_8250D780;
loc_8250D77C:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8250D780:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d790
	if (cr6.lt) goto loc_8250D790;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d794
	goto loc_8250D794;
loc_8250D790:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8250D794:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + r25.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d7b8
	if (cr6.lt) goto loc_8250D7B8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d7bc
	goto loc_8250D7BC;
loc_8250D7B8:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8250D7BC:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d7cc
	if (cr6.lt) goto loc_8250D7CC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d7d0
	goto loc_8250D7D0;
loc_8250D7CC:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8250D7D0:
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + r29.u64;
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// b 0x8250d9cc
	goto loc_8250D9CC;
loc_8250D7E8:
	// cmplw cr6,r25,r30
	cr6.compare<uint32_t>(r25.u32, r30.u32, xer);
	// bgt cr6,0x8250d87c
	if (cr6.gt) goto loc_8250D87C;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d804
	if (cr6.lt) goto loc_8250D804;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d808
	goto loc_8250D808;
loc_8250D804:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8250D808:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d818
	if (cr6.lt) goto loc_8250D818;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d81c
	goto loc_8250D81C;
loc_8250D818:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8250D81C:
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + r29.u64;
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d848
	if (cr6.lt) goto loc_8250D848;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d84c
	goto loc_8250D84C;
loc_8250D848:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8250D84C:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d868
	if (cr6.lt) goto loc_8250D868;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + r25.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// b 0x8250d9cc
	goto loc_8250D9CC;
loc_8250D868:
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + r25.u64;
	// add r3,r31,r30
	ctx.r3.u64 = r31.u64 + r30.u64;
	// b 0x8250d9cc
	goto loc_8250D9CC;
loc_8250D87C:
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bgt cr6,0x8250d910
	if (cr6.gt) goto loc_8250D910;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d89c
	if (cr6.lt) goto loc_8250D89C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d8a0
	goto loc_8250D8A0;
loc_8250D89C:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8250D8A0:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d8b0
	if (cr6.lt) goto loc_8250D8B0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d8b4
	goto loc_8250D8B4;
loc_8250D8B0:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8250D8B4:
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + r29.u64;
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d8e0
	if (cr6.lt) goto loc_8250D8E0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d8e4
	goto loc_8250D8E4;
loc_8250D8E0:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_8250D8E4:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d8f4
	if (cr6.lt) goto loc_8250D8F4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d8f8
	goto loc_8250D8F8;
loc_8250D8F4:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8250D8F8:
	// subf r11,r29,r9
	r11.s64 = ctx.r9.s64 - r29.s64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + r30.u64;
	// add r4,r11,r27
	ctx.r4.u64 = r11.u64 + r27.u64;
	// b 0x8250d9cc
	goto loc_8250D9CC;
loc_8250D910:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d920
	if (cr6.lt) goto loc_8250D920;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d924
	goto loc_8250D924;
loc_8250D920:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8250D924:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d934
	if (cr6.lt) goto loc_8250D934;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d938
	goto loc_8250D938;
loc_8250D934:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8250D938:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + r25.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d95c
	if (cr6.lt) goto loc_8250D95C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d960
	goto loc_8250D960;
loc_8250D95C:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8250D960:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d970
	if (cr6.lt) goto loc_8250D970;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d974
	goto loc_8250D974;
loc_8250D970:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8250D974:
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + r29.u64;
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d9a0
	if (cr6.lt) goto loc_8250D9A0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d9a4
	goto loc_8250D9A4;
loc_8250D9A0:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8250D9A4:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d9b4
	if (cr6.lt) goto loc_8250D9B4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d9b8
	goto loc_8250D9B8;
loc_8250D9B4:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8250D9B8:
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// subf r5,r29,r27
	ctx.r5.s64 = r27.s64 - r29.s64;
	// add r4,r10,r27
	ctx.r4.u64 = ctx.r10.u64 + r27.u64;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
loc_8250D9CC:
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
loc_8250D9D0:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r24,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r24.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d9f8
	if (cr6.lt) goto loc_8250D9F8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stbx r10,r11,r24
	PPC_STORE_U8(r11.u32 + r24.u32, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_8250D9F8:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stbx r10,r31,r24
	PPC_STORE_U8(r31.u32 + r24.u32, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_8250DA10:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,13256
	ctx.r3.s64 = r11.s64 + 13256;
	// bl 0x828e9160
	sub_828E9160(ctx, base);
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250D628"))) PPC_WEAK_FUNC(sub_8250D628);
PPC_FUNC_IMPL(__imp__sub_8250D628) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// blt cr6,0x8250da10
	if (cr6.lt) goto loc_8250DA10;
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x8250da10
	if (cr6.lt) goto loc_8250DA10;
	// subf r9,r4,r11
	ctx.r9.s64 = r11.s64 - ctx.r4.s64;
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// bge cr6,0x8250d674
	if (!cr6.lt) goto loc_8250D674;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
loc_8250D674:
	// subf r10,r25,r10
	ctx.r10.s64 = ctx.r10.s64 - r25.s64;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bge cr6,0x8250d684
	if (!cr6.lt) goto loc_8250D684;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
loc_8250D684:
	// subf r10,r29,r11
	ctx.r10.s64 = r11.s64 - r29.s64;
	// subfic r8,r27,-1
	xer.ca = r27.u32 <= 4294967295;
	ctx.r8.s64 = -1 - r27.s64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8250d6a0
	if (cr6.gt) goto loc_8250D6A0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,13280
	ctx.r3.s64 = r11.s64 + 13280;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_8250D6A0:
	// add r24,r10,r27
	r24.u64 = ctx.r10.u64 + r27.u64;
	// subf r26,r29,r9
	r26.s64 = ctx.r9.s64 - r29.s64;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(r11.u32, r24.u32, xer);
	// bge cr6,0x8250d6c0
	if (!cr6.lt) goto loc_8250D6C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f05a0
	sub_822F05A0(ctx, base);
loc_8250D6C0:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// beq cr6,0x8250d760
	if (cr6.eq) goto loc_8250D760;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8250d6dc
	if (cr6.lt) goto loc_8250D6DC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d6e0
	goto loc_8250D6E0;
loc_8250D6DC:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8250D6E0:
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8250d6f0
	if (cr6.lt) goto loc_8250D6F0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d6f4
	goto loc_8250D6F4;
loc_8250D6F0:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8250D6F4:
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// add r3,r10,r27
	ctx.r3.u64 = ctx.r10.u64 + r27.u64;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d720
	if (cr6.lt) goto loc_8250D720;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x8250d724
	goto loc_8250D724;
loc_8250D720:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_8250D724:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d748
	if (cr6.lt) goto loc_8250D748;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + r25.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// b 0x8250d9d0
	goto loc_8250D9D0;
loc_8250D748:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + r25.u64;
	// add r3,r31,r30
	ctx.r3.u64 = r31.u64 + r30.u64;
	// mr r11,r31
	r11.u64 = r31.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// b 0x8250d9d0
	goto loc_8250D9D0;
loc_8250D760:
	// cmplw cr6,r27,r29
	cr6.compare<uint32_t>(r27.u32, r29.u32, xer);
	// bgt cr6,0x8250d7e8
	if (cr6.gt) goto loc_8250D7E8;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d77c
	if (cr6.lt) goto loc_8250D77C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d780
	goto loc_8250D780;
loc_8250D77C:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8250D780:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d790
	if (cr6.lt) goto loc_8250D790;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d794
	goto loc_8250D794;
loc_8250D790:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8250D794:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + r25.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d7b8
	if (cr6.lt) goto loc_8250D7B8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d7bc
	goto loc_8250D7BC;
loc_8250D7B8:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8250D7BC:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d7cc
	if (cr6.lt) goto loc_8250D7CC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d7d0
	goto loc_8250D7D0;
loc_8250D7CC:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8250D7D0:
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + r29.u64;
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// b 0x8250d9cc
	goto loc_8250D9CC;
loc_8250D7E8:
	// cmplw cr6,r25,r30
	cr6.compare<uint32_t>(r25.u32, r30.u32, xer);
	// bgt cr6,0x8250d87c
	if (cr6.gt) goto loc_8250D87C;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d804
	if (cr6.lt) goto loc_8250D804;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d808
	goto loc_8250D808;
loc_8250D804:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8250D808:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d818
	if (cr6.lt) goto loc_8250D818;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d81c
	goto loc_8250D81C;
loc_8250D818:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8250D81C:
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + r29.u64;
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d848
	if (cr6.lt) goto loc_8250D848;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d84c
	goto loc_8250D84C;
loc_8250D848:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8250D84C:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d868
	if (cr6.lt) goto loc_8250D868;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + r25.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// b 0x8250d9cc
	goto loc_8250D9CC;
loc_8250D868:
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + r25.u64;
	// add r3,r31,r30
	ctx.r3.u64 = r31.u64 + r30.u64;
	// b 0x8250d9cc
	goto loc_8250D9CC;
loc_8250D87C:
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bgt cr6,0x8250d910
	if (cr6.gt) goto loc_8250D910;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d89c
	if (cr6.lt) goto loc_8250D89C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d8a0
	goto loc_8250D8A0;
loc_8250D89C:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8250D8A0:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d8b0
	if (cr6.lt) goto loc_8250D8B0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d8b4
	goto loc_8250D8B4;
loc_8250D8B0:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8250D8B4:
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + r29.u64;
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d8e0
	if (cr6.lt) goto loc_8250D8E0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d8e4
	goto loc_8250D8E4;
loc_8250D8E0:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_8250D8E4:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d8f4
	if (cr6.lt) goto loc_8250D8F4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d8f8
	goto loc_8250D8F8;
loc_8250D8F4:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8250D8F8:
	// subf r11,r29,r9
	r11.s64 = ctx.r9.s64 - r29.s64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + r30.u64;
	// add r4,r11,r27
	ctx.r4.u64 = r11.u64 + r27.u64;
	// b 0x8250d9cc
	goto loc_8250D9CC;
loc_8250D910:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d920
	if (cr6.lt) goto loc_8250D920;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d924
	goto loc_8250D924;
loc_8250D920:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8250D924:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d934
	if (cr6.lt) goto loc_8250D934;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d938
	goto loc_8250D938;
loc_8250D934:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8250D938:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + r25.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d95c
	if (cr6.lt) goto loc_8250D95C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d960
	goto loc_8250D960;
loc_8250D95C:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8250D960:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d970
	if (cr6.lt) goto loc_8250D970;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d974
	goto loc_8250D974;
loc_8250D970:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8250D974:
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + r29.u64;
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d9a0
	if (cr6.lt) goto loc_8250D9A0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d9a4
	goto loc_8250D9A4;
loc_8250D9A0:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8250D9A4:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d9b4
	if (cr6.lt) goto loc_8250D9B4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8250d9b8
	goto loc_8250D9B8;
loc_8250D9B4:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8250D9B8:
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// subf r5,r29,r27
	ctx.r5.s64 = r27.s64 - r29.s64;
	// add r4,r10,r27
	ctx.r4.u64 = ctx.r10.u64 + r27.u64;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
loc_8250D9CC:
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
loc_8250D9D0:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r24,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r24.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250d9f8
	if (cr6.lt) goto loc_8250D9F8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stbx r10,r11,r24
	PPC_STORE_U8(r11.u32 + r24.u32, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_8250D9F8:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stbx r10,r31,r24
	PPC_STORE_U8(r31.u32 + r24.u32, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_8250DA10:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,13256
	ctx.r3.s64 = r11.s64 + 13256;
}

__attribute__((alias("__imp__sub_8250DA20"))) PPC_WEAK_FUNC(sub_8250DA20);
PPC_FUNC_IMPL(__imp__sub_8250DA20) {
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
	// lwz r11,108(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r30,r3,88
	r30.s64 = ctx.r3.s64 + 88;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250da48
	if (cr6.lt) goto loc_8250DA48;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8250DA48:
	// li r31,0
	r31.s64 = 0;
	// li r27,15
	r27.s64 = 15;
	// stw r31,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r31.u32);
	// addi r29,r28,60
	r29.s64 = r28.s64 + 60;
	// stw r27,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r27.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r31.u8);
	// lwz r11,80(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250da74
	if (cr6.lt) goto loc_8250DA74;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8250DA74:
	// stw r27,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r27.u32);
	// addi r30,r28,32
	r30.s64 = r28.s64 + 32;
	// stw r31,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r31.u8);
	// lwz r11,52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250da98
	if (cr6.lt) goto loc_8250DA98;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8250DA98:
	// stw r27,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r27.u32);
	// addi r29,r28,4
	r29.s64 = r28.s64 + 4;
	// stw r31,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r31.u8);
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8250dabc
	if (cr6.lt) goto loc_8250DABC;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8250DABC:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r27,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r27.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r31.u32);
	// addi r10,r11,16408
	ctx.r10.s64 = r11.s64 + 16408;
	// stb r31,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r31.u8);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8250DAD8"))) PPC_WEAK_FUNC(sub_8250DAD8);
PPC_FUNC_IMPL(__imp__sub_8250DAD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8250DADC"))) PPC_WEAK_FUNC(sub_8250DADC);
PPC_FUNC_IMPL(__imp__sub_8250DADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DAE0"))) PPC_WEAK_FUNC(sub_8250DAE0);
PPC_FUNC_IMPL(__imp__sub_8250DAE0) {
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
	// bl 0x8250da20
	sub_8250DA20(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250db18
	if (cr6.eq) goto loc_8250DB18;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8250DB18:
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

__attribute__((alias("__imp__sub_8250DB2C"))) PPC_WEAK_FUNC(sub_8250DB2C);
PPC_FUNC_IMPL(__imp__sub_8250DB2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DB30"))) PPC_WEAK_FUNC(sub_8250DB30);
PPC_FUNC_IMPL(__imp__sub_8250DB30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r11,16592
	ctx.r5.s64 = r11.s64 + 16592;
	// addi r4,r10,22032
	ctx.r4.s64 = ctx.r10.s64 + 22032;
	// addi r3,r9,16564
	ctx.r3.s64 = ctx.r9.s64 + 16564;
}

__attribute__((alias("__imp__sub_8250DB48"))) PPC_WEAK_FUNC(sub_8250DB48);
PPC_FUNC_IMPL(__imp__sub_8250DB48) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250DB4C"))) PPC_WEAK_FUNC(sub_8250DB4C);
PPC_FUNC_IMPL(__imp__sub_8250DB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DB50"))) PPC_WEAK_FUNC(sub_8250DB50);
PPC_FUNC_IMPL(__imp__sub_8250DB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,613(r3)
	PPC_STORE_U8(ctx.r3.u32 + 613, r11.u8);
}

__attribute__((alias("__imp__sub_8250DB58"))) PPC_WEAK_FUNC(sub_8250DB58);
PPC_FUNC_IMPL(__imp__sub_8250DB58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DB5C"))) PPC_WEAK_FUNC(sub_8250DB5C);
PPC_FUNC_IMPL(__imp__sub_8250DB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DB60"))) PPC_WEAK_FUNC(sub_8250DB60);
PPC_FUNC_IMPL(__imp__sub_8250DB60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,618(r3)
	PPC_STORE_U8(ctx.r3.u32 + 618, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DB6C"))) PPC_WEAK_FUNC(sub_8250DB6C);
PPC_FUNC_IMPL(__imp__sub_8250DB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DB70"))) PPC_WEAK_FUNC(sub_8250DB70);
PPC_FUNC_IMPL(__imp__sub_8250DB70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,7
	r11.s64 = 7;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DB7C"))) PPC_WEAK_FUNC(sub_8250DB7C);
PPC_FUNC_IMPL(__imp__sub_8250DB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DB80"))) PPC_WEAK_FUNC(sub_8250DB80);
PPC_FUNC_IMPL(__imp__sub_8250DB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,618(r3)
	PPC_STORE_U8(ctx.r3.u32 + 618, r11.u8);
}

__attribute__((alias("__imp__sub_8250DB88"))) PPC_WEAK_FUNC(sub_8250DB88);
PPC_FUNC_IMPL(__imp__sub_8250DB88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DB8C"))) PPC_WEAK_FUNC(sub_8250DB8C);
PPC_FUNC_IMPL(__imp__sub_8250DB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DB90"))) PPC_WEAK_FUNC(sub_8250DB90);
PPC_FUNC_IMPL(__imp__sub_8250DB90) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,618(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 618);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DB98"))) PPC_WEAK_FUNC(sub_8250DB98);
PPC_FUNC_IMPL(__imp__sub_8250DB98) {
	PPC_FUNC_PROLOGUE();
	// stb r4,693(r3)
	PPC_STORE_U8(ctx.r3.u32 + 693, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DBA0"))) PPC_WEAK_FUNC(sub_8250DBA0);
PPC_FUNC_IMPL(__imp__sub_8250DBA0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,693(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 693);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DBA8"))) PPC_WEAK_FUNC(sub_8250DBA8);
PPC_FUNC_IMPL(__imp__sub_8250DBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r10,16612
	ctx.r3.s64 = ctx.r10.s64 + 16612;
}

__attribute__((alias("__imp__sub_8250DBB8"))) PPC_WEAK_FUNC(sub_8250DBB8);
PPC_FUNC_IMPL(__imp__sub_8250DBB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250DBBC"))) PPC_WEAK_FUNC(sub_8250DBBC);
PPC_FUNC_IMPL(__imp__sub_8250DBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DBC0"))) PPC_WEAK_FUNC(sub_8250DBC0);
PPC_FUNC_IMPL(__imp__sub_8250DBC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,640(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 640);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r10,615(r11)
	PPC_STORE_U8(r11.u32 + 615, ctx.r10.u8);
	// b 0x8256a1f0
	sub_8256A1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250DBD8"))) PPC_WEAK_FUNC(sub_8250DBD8);
PPC_FUNC_IMPL(__imp__sub_8250DBD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,616(r3)
	PPC_STORE_U8(ctx.r3.u32 + 616, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DBE4"))) PPC_WEAK_FUNC(sub_8250DBE4);
PPC_FUNC_IMPL(__imp__sub_8250DBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DBE8"))) PPC_WEAK_FUNC(sub_8250DBE8);
PPC_FUNC_IMPL(__imp__sub_8250DBE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r10,16636
	ctx.r3.s64 = ctx.r10.s64 + 16636;
}

__attribute__((alias("__imp__sub_8250DBF8"))) PPC_WEAK_FUNC(sub_8250DBF8);
PPC_FUNC_IMPL(__imp__sub_8250DBF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250DBFC"))) PPC_WEAK_FUNC(sub_8250DBFC);
PPC_FUNC_IMPL(__imp__sub_8250DBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DC00"))) PPC_WEAK_FUNC(sub_8250DC00);
PPC_FUNC_IMPL(__imp__sub_8250DC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,620(r3)
	PPC_STORE_U8(ctx.r3.u32 + 620, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DC0C"))) PPC_WEAK_FUNC(sub_8250DC0C);
PPC_FUNC_IMPL(__imp__sub_8250DC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DC10"))) PPC_WEAK_FUNC(sub_8250DC10);
PPC_FUNC_IMPL(__imp__sub_8250DC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
}

__attribute__((alias("__imp__sub_8250DC18"))) PPC_WEAK_FUNC(sub_8250DC18);
PPC_FUNC_IMPL(__imp__sub_8250DC18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DC1C"))) PPC_WEAK_FUNC(sub_8250DC1C);
PPC_FUNC_IMPL(__imp__sub_8250DC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DC20"))) PPC_WEAK_FUNC(sub_8250DC20);
PPC_FUNC_IMPL(__imp__sub_8250DC20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DC24"))) PPC_WEAK_FUNC(sub_8250DC24);
PPC_FUNC_IMPL(__imp__sub_8250DC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DC28"))) PPC_WEAK_FUNC(sub_8250DC28);
PPC_FUNC_IMPL(__imp__sub_8250DC28) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DC30"))) PPC_WEAK_FUNC(sub_8250DC30);
PPC_FUNC_IMPL(__imp__sub_8250DC30) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DC38"))) PPC_WEAK_FUNC(sub_8250DC38);
PPC_FUNC_IMPL(__imp__sub_8250DC38) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DC40"))) PPC_WEAK_FUNC(sub_8250DC40);
PPC_FUNC_IMPL(__imp__sub_8250DC40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DC44"))) PPC_WEAK_FUNC(sub_8250DC44);
PPC_FUNC_IMPL(__imp__sub_8250DC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DC48"))) PPC_WEAK_FUNC(sub_8250DC48);
PPC_FUNC_IMPL(__imp__sub_8250DC48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// bl 0x8254aa28
	sub_8254AA28(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8254b9c8
	sub_8254B9C8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
loc_8250DC68:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254bac0
	sub_8254BAC0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x8250dc68
	if (cr6.lt) goto loc_8250DC68;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254ae48
	sub_8254AE48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8250DC94"))) PPC_WEAK_FUNC(sub_8250DC94);
PPC_FUNC_IMPL(__imp__sub_8250DC94) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8250DC98"))) PPC_WEAK_FUNC(sub_8250DC98);
PPC_FUNC_IMPL(__imp__sub_8250DC98) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DCA0"))) PPC_WEAK_FUNC(sub_8250DCA0);
PPC_FUNC_IMPL(__imp__sub_8250DCA0) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r10,16680
	ctx.r3.s64 = ctx.r10.s64 + 16680;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r5,r9,16664
	ctx.r5.s64 = ctx.r9.s64 + 16664;
	// addi r4,r8,22032
	ctx.r4.s64 = ctx.r8.s64 + 22032;
	// addi r3,r7,16564
	ctx.r3.s64 = ctx.r7.s64 + 16564;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8250DCE8"))) PPC_WEAK_FUNC(sub_8250DCE8);
PPC_FUNC_IMPL(__imp__sub_8250DCE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DCEC"))) PPC_WEAK_FUNC(sub_8250DCEC);
PPC_FUNC_IMPL(__imp__sub_8250DCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DCF0"))) PPC_WEAK_FUNC(sub_8250DCF0);
PPC_FUNC_IMPL(__imp__sub_8250DCF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r11,15972
	ctx.r4.s64 = r11.s64 + 15972;
	// addi r3,r10,16328
	ctx.r3.s64 = ctx.r10.s64 + 16328;
}

__attribute__((alias("__imp__sub_8250DD04"))) PPC_WEAK_FUNC(sub_8250DD04);
PPC_FUNC_IMPL(__imp__sub_8250DD04) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250DD08"))) PPC_WEAK_FUNC(sub_8250DD08);
PPC_FUNC_IMPL(__imp__sub_8250DD08) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,692(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 692);
}

__attribute__((alias("__imp__sub_8250DD0C"))) PPC_WEAK_FUNC(sub_8250DD0C);
PPC_FUNC_IMPL(__imp__sub_8250DD0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DD10"))) PPC_WEAK_FUNC(sub_8250DD10);
PPC_FUNC_IMPL(__imp__sub_8250DD10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r11,16704
	ctx.r5.s64 = r11.s64 + 16704;
	// addi r4,r10,22032
	ctx.r4.s64 = ctx.r10.s64 + 22032;
	// addi r3,r9,16564
	ctx.r3.s64 = ctx.r9.s64 + 16564;
}

__attribute__((alias("__imp__sub_8250DD28"))) PPC_WEAK_FUNC(sub_8250DD28);
PPC_FUNC_IMPL(__imp__sub_8250DD28) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250DD2C"))) PPC_WEAK_FUNC(sub_8250DD2C);
PPC_FUNC_IMPL(__imp__sub_8250DD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DD30"))) PPC_WEAK_FUNC(sub_8250DD30);
PPC_FUNC_IMPL(__imp__sub_8250DD30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DD34"))) PPC_WEAK_FUNC(sub_8250DD34);
PPC_FUNC_IMPL(__imp__sub_8250DD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DD38"))) PPC_WEAK_FUNC(sub_8250DD38);
PPC_FUNC_IMPL(__imp__sub_8250DD38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,1
	r11.s64 = 1;
	// stb r11,621(r3)
	PPC_STORE_U8(ctx.r3.u32 + 621, r11.u8);
}

__attribute__((alias("__imp__sub_8250DD4C"))) PPC_WEAK_FUNC(sub_8250DD4C);
PPC_FUNC_IMPL(__imp__sub_8250DD4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DD50"))) PPC_WEAK_FUNC(sub_8250DD50);
PPC_FUNC_IMPL(__imp__sub_8250DD50) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DD58"))) PPC_WEAK_FUNC(sub_8250DD58);
PPC_FUNC_IMPL(__imp__sub_8250DD58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DD5C"))) PPC_WEAK_FUNC(sub_8250DD5C);
PPC_FUNC_IMPL(__imp__sub_8250DD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DD60"))) PPC_WEAK_FUNC(sub_8250DD60);
PPC_FUNC_IMPL(__imp__sub_8250DD60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DD64"))) PPC_WEAK_FUNC(sub_8250DD64);
PPC_FUNC_IMPL(__imp__sub_8250DD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DD68"))) PPC_WEAK_FUNC(sub_8250DD68);
PPC_FUNC_IMPL(__imp__sub_8250DD68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DD6C"))) PPC_WEAK_FUNC(sub_8250DD6C);
PPC_FUNC_IMPL(__imp__sub_8250DD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DD70"))) PPC_WEAK_FUNC(sub_8250DD70);
PPC_FUNC_IMPL(__imp__sub_8250DD70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DD74"))) PPC_WEAK_FUNC(sub_8250DD74);
PPC_FUNC_IMPL(__imp__sub_8250DD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DD78"))) PPC_WEAK_FUNC(sub_8250DD78);
PPC_FUNC_IMPL(__imp__sub_8250DD78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DD7C"))) PPC_WEAK_FUNC(sub_8250DD7C);
PPC_FUNC_IMPL(__imp__sub_8250DD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DD80"))) PPC_WEAK_FUNC(sub_8250DD80);
PPC_FUNC_IMPL(__imp__sub_8250DD80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 628, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DD8C"))) PPC_WEAK_FUNC(sub_8250DD8C);
PPC_FUNC_IMPL(__imp__sub_8250DD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DD90"))) PPC_WEAK_FUNC(sub_8250DD90);
PPC_FUNC_IMPL(__imp__sub_8250DD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stw r11,628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 628, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DD9C"))) PPC_WEAK_FUNC(sub_8250DD9C);
PPC_FUNC_IMPL(__imp__sub_8250DD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DDA0"))) PPC_WEAK_FUNC(sub_8250DDA0);
PPC_FUNC_IMPL(__imp__sub_8250DDA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,692(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 692);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,622(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 622);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250ddcc
	if (cr6.eq) goto loc_8250DDCC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r10,16748
	ctx.r3.s64 = ctx.r10.s64 + 16748;
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
loc_8250DDCC:
	// lbz r11,623(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 623);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8250dde4
	if (!cr6.eq) goto loc_8250DDE4;
	// lbz r11,624(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 624);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8250DDE4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r10,16720
	ctx.r3.s64 = ctx.r10.s64 + 16720;
}

__attribute__((alias("__imp__sub_8250DDF4"))) PPC_WEAK_FUNC(sub_8250DDF4);
PPC_FUNC_IMPL(__imp__sub_8250DDF4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250DDF8"))) PPC_WEAK_FUNC(sub_8250DDF8);
PPC_FUNC_IMPL(__imp__sub_8250DDF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DDFC"))) PPC_WEAK_FUNC(sub_8250DDFC);
PPC_FUNC_IMPL(__imp__sub_8250DDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DE00"))) PPC_WEAK_FUNC(sub_8250DE00);
PPC_FUNC_IMPL(__imp__sub_8250DE00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,1156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1156, r11.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,1160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1160, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,1164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1164, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DE1C"))) PPC_WEAK_FUNC(sub_8250DE1C);
PPC_FUNC_IMPL(__imp__sub_8250DE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DE20"))) PPC_WEAK_FUNC(sub_8250DE20);
PPC_FUNC_IMPL(__imp__sub_8250DE20) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,694
	ctx.r3.s64 = ctx.r3.s64 + 694;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DE28"))) PPC_WEAK_FUNC(sub_8250DE28);
PPC_FUNC_IMPL(__imp__sub_8250DE28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,758
	ctx.r3.s64 = ctx.r3.s64 + 758;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DE30"))) PPC_WEAK_FUNC(sub_8250DE30);
PPC_FUNC_IMPL(__imp__sub_8250DE30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,822
	ctx.r3.s64 = ctx.r3.s64 + 822;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DE38"))) PPC_WEAK_FUNC(sub_8250DE38);
PPC_FUNC_IMPL(__imp__sub_8250DE38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,886
	ctx.r3.s64 = ctx.r3.s64 + 886;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DE40"))) PPC_WEAK_FUNC(sub_8250DE40);
PPC_FUNC_IMPL(__imp__sub_8250DE40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,950
	ctx.r3.s64 = ctx.r3.s64 + 950;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DE48"))) PPC_WEAK_FUNC(sub_8250DE48);
PPC_FUNC_IMPL(__imp__sub_8250DE48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1014
	ctx.r3.s64 = ctx.r3.s64 + 1014;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DE50"))) PPC_WEAK_FUNC(sub_8250DE50);
PPC_FUNC_IMPL(__imp__sub_8250DE50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1078
	ctx.r3.s64 = ctx.r3.s64 + 1078;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DE58"))) PPC_WEAK_FUNC(sub_8250DE58);
PPC_FUNC_IMPL(__imp__sub_8250DE58) {
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
	// lbz r11,626(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 626);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250dea8
	if (cr6.eq) goto loc_8250DEA8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r10,16784
	ctx.r3.s64 = ctx.r10.s64 + 16784;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,626(r31)
	PPC_STORE_U8(r31.u32 + 626, ctx.r9.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8250DEA8:
	// li r11,1
	r11.s64 = 1;
	// stb r11,625(r31)
	PPC_STORE_U8(r31.u32 + 625, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8250DEC0"))) PPC_WEAK_FUNC(sub_8250DEC0);
PPC_FUNC_IMPL(__imp__sub_8250DEC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DEC4"))) PPC_WEAK_FUNC(sub_8250DEC4);
PPC_FUNC_IMPL(__imp__sub_8250DEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DEC8"))) PPC_WEAK_FUNC(sub_8250DEC8);
PPC_FUNC_IMPL(__imp__sub_8250DEC8) {
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
	// lbz r11,625(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 625);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250df18
	if (cr6.eq) goto loc_8250DF18;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r10,16784
	ctx.r3.s64 = ctx.r10.s64 + 16784;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,625(r31)
	PPC_STORE_U8(r31.u32 + 625, ctx.r9.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8250DF18:
	// li r11,1
	r11.s64 = 1;
	// stb r11,626(r31)
	PPC_STORE_U8(r31.u32 + 626, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8250DF30"))) PPC_WEAK_FUNC(sub_8250DF30);
PPC_FUNC_IMPL(__imp__sub_8250DF30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250DF34"))) PPC_WEAK_FUNC(sub_8250DF34);
PPC_FUNC_IMPL(__imp__sub_8250DF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250DF38"))) PPC_WEAK_FUNC(sub_8250DF38);
PPC_FUNC_IMPL(__imp__sub_8250DF38) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,640(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 640);
	// bl 0x8256a640
	sub_8256A640(ctx, base);
	// lwz r3,1176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1176);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250df78
	if (cr6.eq) goto loc_8250DF78;
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
	// stw r29,1176(r31)
	PPC_STORE_U32(r31.u32 + 1176, r29.u32);
loc_8250DF78:
	// lwz r30,632(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 632);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8250df98
	if (cr6.eq) goto loc_8250DF98;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82566370
	sub_82566370(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r29,632(r31)
	PPC_STORE_U32(r31.u32 + 632, r29.u32);
loc_8250DF98:
	// lwz r30,636(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 636);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8250dfb8
	if (cr6.eq) goto loc_8250DFB8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82560f90
	sub_82560F90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r29,636(r31)
	PPC_STORE_U32(r31.u32 + 636, r29.u32);
loc_8250DFB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8250DFBC"))) PPC_WEAK_FUNC(sub_8250DFBC);
PPC_FUNC_IMPL(__imp__sub_8250DFBC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8250DFC0"))) PPC_WEAK_FUNC(sub_8250DFC0);
PPC_FUNC_IMPL(__imp__sub_8250DFC0) {
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
	// li r30,1
	r30.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,37
	ctx.r6.s64 = 37;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,614(r3)
	PPC_STORE_U8(ctx.r3.u32 + 614, r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x827344d0
	sub_827344D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82735468
	sub_82735468(ctx, base);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8250e030
	if (!cr6.eq) goto loc_8250E030;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r10,16612
	ctx.r3.s64 = ctx.r10.s64 + 16612;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// b 0x8250e040
	goto loc_8250E040;
loc_8250E030:
	// stb r30,615(r31)
	PPC_STORE_U8(r31.u32 + 615, r30.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 640);
	// bl 0x8256a1f0
	sub_8256A1F0(ctx, base);
loc_8250E040:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82734510
	sub_82734510(ctx, base);
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

__attribute__((alias("__imp__sub_8250E064"))) PPC_WEAK_FUNC(sub_8250E064);
PPC_FUNC_IMPL(__imp__sub_8250E064) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250E068"))) PPC_WEAK_FUNC(sub_8250E068);
PPC_FUNC_IMPL(__imp__sub_8250E068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)v63.u32, _mm_set1_epi32(int(0x0)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// vupkd3d128 v62,v63,4
	temp.f32 = 3.0f;
	temp.s32 += v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	v62 = vTemp;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvsr v0,r0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r4,24192(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,8
	ctx.r5.s64 = 8;
	// vpermwi128 v63,v62,171
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x54));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,12
	ctx.r10.s64 = 12;
	// lis r30,-32229
	r30.s64 = -2112159744;
	// lis r29,-32249
	r29.s64 = -2113470464;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// vperm128 v61,v63,v63,v0
	_mm_store_si128((__m128i*)v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lis r28,-32256
	r28.s64 = -2113929216;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stvewx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r6,r5
	ea = (ctx.r6.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r11,r10
	ea = (r11.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,-25600(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21036(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,4492(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4492);
	f0.f64 = double(temp.f32);
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * f0.f64));
	// bl 0x825fe7d8
	sub_825FE7D8(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r3,21888(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21888);
	// bl 0x82881300
	sub_82881300(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
}

__attribute__((alias("__imp__sub_8250E14C"))) PPC_WEAK_FUNC(sub_8250E14C);
PPC_FUNC_IMPL(__imp__sub_8250E14C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8250E150"))) PPC_WEAK_FUNC(sub_8250E150);
PPC_FUNC_IMPL(__imp__sub_8250E150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f7,92(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r3,21888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21888);
	// bl 0x82881300
	sub_82881300(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8250E188"))) PPC_WEAK_FUNC(sub_8250E188);
PPC_FUNC_IMPL(__imp__sub_8250E188) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250E18C"))) PPC_WEAK_FUNC(sub_8250E18C);
PPC_FUNC_IMPL(__imp__sub_8250E18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250E190"))) PPC_WEAK_FUNC(sub_8250E190);
PPC_FUNC_IMPL(__imp__sub_8250E190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,21888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21888);
	// b 0x82881330
	sub_82881330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250E19C"))) PPC_WEAK_FUNC(sub_8250E19C);
PPC_FUNC_IMPL(__imp__sub_8250E19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250E1A0"))) PPC_WEAK_FUNC(sub_8250E1A0);
PPC_FUNC_IMPL(__imp__sub_8250E1A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,21888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21888);
	// b 0x82881360
	sub_82881360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250E1AC"))) PPC_WEAK_FUNC(sub_8250E1AC);
PPC_FUNC_IMPL(__imp__sub_8250E1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250E1B0"))) PPC_WEAK_FUNC(sub_8250E1B0);
PPC_FUNC_IMPL(__imp__sub_8250E1B0) {
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
	// lbz r11,0(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250e200
	if (cr6.eq) goto loc_8250E200;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ed070
	sub_828ED070(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,21636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,128(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8250E200:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8250E210"))) PPC_WEAK_FUNC(sub_8250E210);
PPC_FUNC_IMPL(__imp__sub_8250E210) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250E214"))) PPC_WEAK_FUNC(sub_8250E214);
PPC_FUNC_IMPL(__imp__sub_8250E214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250E218"))) PPC_WEAK_FUNC(sub_8250E218);
PPC_FUNC_IMPL(__imp__sub_8250E218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,21636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8250E230"))) PPC_WEAK_FUNC(sub_8250E230);
PPC_FUNC_IMPL(__imp__sub_8250E230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8250e284
	if (!cr6.gt) goto loc_8250E284;
	// addi r31,r4,-16
	r31.s64 = ctx.r4.s64 + -16;
	// lis r28,-31934
	r28.s64 = -2092826624;
loc_8250E258:
	// lfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lfs f2,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lwz r3,21888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 21888);
	// lfs f3,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfsu f4,40(r31)
	ea = 40 + r31.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	r31.u32 = ea;
	ctx.f4.f64 = double(temp.f32);
	// bl 0x82881348
	sub_82881348(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x8250e258
	if (cr6.lt) goto loc_8250E258;
loc_8250E284:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8250E288"))) PPC_WEAK_FUNC(sub_8250E288);
PPC_FUNC_IMPL(__imp__sub_8250E288) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8250E28C"))) PPC_WEAK_FUNC(sub_8250E28C);
PPC_FUNC_IMPL(__imp__sub_8250E28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250E290"))) PPC_WEAK_FUNC(sub_8250E290);
PPC_FUNC_IMPL(__imp__sub_8250E290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r11,21644(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21644);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250E2A0"))) PPC_WEAK_FUNC(sub_8250E2A0);
PPC_FUNC_IMPL(__imp__sub_8250E2A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r11,21644(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21644);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
}

__attribute__((alias("__imp__sub_8250E2AC"))) PPC_WEAK_FUNC(sub_8250E2AC);
PPC_FUNC_IMPL(__imp__sub_8250E2AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250E2B0"))) PPC_WEAK_FUNC(sub_8250E2B0);
PPC_FUNC_IMPL(__imp__sub_8250E2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,21888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21888);
	// b 0x82881378
	sub_82881378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250E2BC"))) PPC_WEAK_FUNC(sub_8250E2BC);
PPC_FUNC_IMPL(__imp__sub_8250E2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250E2C0"))) PPC_WEAK_FUNC(sub_8250E2C0);
PPC_FUNC_IMPL(__imp__sub_8250E2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,21636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,22593
	ctx.r8.s64 = 1480654848;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r7,r8,4702
	ctx.r7.u64 = ctx.r8.u64 | 4702;
	// li r6,-1
	ctx.r6.s64 = -1;
	// rldimi r5,r7,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82606068
	sub_82606068(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8250E30C"))) PPC_WEAK_FUNC(sub_8250E30C);
PPC_FUNC_IMPL(__imp__sub_8250E30C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250E310"))) PPC_WEAK_FUNC(sub_8250E310);
PPC_FUNC_IMPL(__imp__sub_8250E310) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250E314"))) PPC_WEAK_FUNC(sub_8250E314);
PPC_FUNC_IMPL(__imp__sub_8250E314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250E318"))) PPC_WEAK_FUNC(sub_8250E318);
PPC_FUNC_IMPL(__imp__sub_8250E318) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250E31C"))) PPC_WEAK_FUNC(sub_8250E31C);
PPC_FUNC_IMPL(__imp__sub_8250E31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250E320"))) PPC_WEAK_FUNC(sub_8250E320);
PPC_FUNC_IMPL(__imp__sub_8250E320) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stb r10,619(r3)
	PPC_STORE_U8(ctx.r3.u32 + 619, ctx.r10.u8);
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250e360
	if (cr6.eq) goto loc_8250E360;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bne cr6,0x8250e364
	if (!cr6.eq) goto loc_8250E364;
loc_8250E360:
	// li r31,0
	r31.s64 = 0;
loc_8250E364:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// bl 0x82539298
	sub_82539298(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// bl 0x82556658
	sub_82556658(ctx, base);
	// lbz r11,618(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 618);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250e394
	if (cr6.eq) goto loc_8250E394;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r10,16900
	ctx.r3.s64 = ctx.r10.s64 + 16900;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
loc_8250E394:
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

__attribute__((alias("__imp__sub_8250E3A8"))) PPC_WEAK_FUNC(sub_8250E3A8);
PPC_FUNC_IMPL(__imp__sub_8250E3A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250E3AC"))) PPC_WEAK_FUNC(sub_8250E3AC);
PPC_FUNC_IMPL(__imp__sub_8250E3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250E3B0"))) PPC_WEAK_FUNC(sub_8250E3B0);
PPC_FUNC_IMPL(__imp__sub_8250E3B0) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250e3e0
	if (cr6.eq) goto loc_8250E3E0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250e3e4
	if (!cr6.eq) goto loc_8250E3E4;
loc_8250E3E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8250E3E4:
	// addi r11,r31,28
	r11.s64 = r31.s64 + 28;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r3,56(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// bl 0x825408c0
	sub_825408C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8250E408"))) PPC_WEAK_FUNC(sub_8250E408);
PPC_FUNC_IMPL(__imp__sub_8250E408) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250E40C"))) PPC_WEAK_FUNC(sub_8250E40C);
PPC_FUNC_IMPL(__imp__sub_8250E40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250E410"))) PPC_WEAK_FUNC(sub_8250E410);
PPC_FUNC_IMPL(__imp__sub_8250E410) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250e438
	if (cr6.eq) goto loc_8250E438;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250e43c
	if (!cr6.eq) goto loc_8250E43C;
loc_8250E438:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8250E43C:
	// lwz r3,192(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// bl 0x82423218
	sub_82423218(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,16928
	ctx.r3.s64 = r11.s64 + 16928;
}

__attribute__((alias("__imp__sub_8250E450"))) PPC_WEAK_FUNC(sub_8250E450);
PPC_FUNC_IMPL(__imp__sub_8250E450) {
	PPC_FUNC_PROLOGUE();
	// bl 0x82606080
	sub_82606080(ctx, base);
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250E458"))) PPC_WEAK_FUNC(sub_8250E458);
PPC_FUNC_IMPL(__imp__sub_8250E458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250E46C"))) PPC_WEAK_FUNC(sub_8250E46C);
PPC_FUNC_IMPL(__imp__sub_8250E46C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250E470"))) PPC_WEAK_FUNC(sub_8250E470);
PPC_FUNC_IMPL(__imp__sub_8250E470) {
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
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r11,-1
	r11.s64 = -1;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8250e4ac
	if (!cr6.eq) goto loc_8250E4AC;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	r11.s64 = 1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_8250E4AC:
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// bne cr6,0x8250e4cc
	if (!cr6.eq) goto loc_8250E4CC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r7,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
loc_8250E4CC:
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x8250e4ec
	if (!cr6.eq) goto loc_8250E4EC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r7,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
loc_8250E4EC:
	// rlwinm r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bne cr6,0x8250e508
	if (!cr6.eq) goto loc_8250E508;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,3
	ctx.r9.s64 = 3;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_8250E508:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250e528
	if (cr6.eq) goto loc_8250E528;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250e52c
	if (!cr6.eq) goto loc_8250E52C;
loc_8250E528:
	// li r11,0
	r11.s64 = 0;
loc_8250E52C:
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// bl 0x82517d10
	sub_82517D10(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// addi r31,r11,16564
	r31.s64 = r11.s64 + 16564;
	// bne cr6,0x8250e584
	if (!cr6.eq) goto loc_8250E584;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,21636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8250e584
	if (!cr6.eq) goto loc_8250E584;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r11,16964
	ctx.r5.s64 = r11.s64 + 16964;
	// addi r4,r10,22032
	ctx.r4.s64 = ctx.r10.s64 + 22032;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
loc_8250E584:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r11,16948
	ctx.r5.s64 = r11.s64 + 16948;
	// addi r4,r10,15424
	ctx.r4.s64 = ctx.r10.s64 + 15424;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8250E5B4"))) PPC_WEAK_FUNC(sub_8250E5B4);
PPC_FUNC_IMPL(__imp__sub_8250E5B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250E5B8"))) PPC_WEAK_FUNC(sub_8250E5B8);
PPC_FUNC_IMPL(__imp__sub_8250E5B8) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250e5e0
	if (cr6.eq) goto loc_8250E5E0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250e5e4
	if (!cr6.eq) goto loc_8250E5E4;
loc_8250E5E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8250E5E4:
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// bl 0x82539298
	sub_82539298(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8250E5F8"))) PPC_WEAK_FUNC(sub_8250E5F8);
PPC_FUNC_IMPL(__imp__sub_8250E5F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250E5FC"))) PPC_WEAK_FUNC(sub_8250E5FC);
PPC_FUNC_IMPL(__imp__sub_8250E5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250E600"))) PPC_WEAK_FUNC(sub_8250E600);
PPC_FUNC_IMPL(__imp__sub_8250E600) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250e628
	if (cr6.eq) goto loc_8250E628;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250e62c
	if (!cr6.eq) goto loc_8250E62C;
loc_8250E628:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8250E62C:
	// lwz r3,152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// bl 0x82521560
	sub_82521560(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8250E640"))) PPC_WEAK_FUNC(sub_8250E640);
PPC_FUNC_IMPL(__imp__sub_8250E640) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250E644"))) PPC_WEAK_FUNC(sub_8250E644);
PPC_FUNC_IMPL(__imp__sub_8250E644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250E648"))) PPC_WEAK_FUNC(sub_8250E648);
PPC_FUNC_IMPL(__imp__sub_8250E648) {
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8250e684
	if (cr6.eq) goto loc_8250E684;
	// lbz r11,692(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 692);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250e684
	if (cr6.eq) goto loc_8250E684;
	// lbz r11,4(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r28
	r11.u64 = r28.u64;
	// bne cr6,0x8250e688
	if (!cr6.eq) goto loc_8250E688;
loc_8250E684:
	// li r11,0
	r11.s64 = 0;
loc_8250E688:
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stb r7,692(r29)
	PPC_STORE_U8(r29.u32 + 692, ctx.r7.u8);
	// beq cr6,0x8250e760
	if (cr6.eq) goto loc_8250E760;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250e6c4
	if (cr6.eq) goto loc_8250E6C4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250e6c8
	if (!cr6.eq) goto loc_8250E6C8;
loc_8250E6C4:
	// li r11,0
	r11.s64 = 0;
loc_8250E6C8:
	// lwz r30,188(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// li r31,0
	r31.s64 = 0;
loc_8250E6D0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825688b0
	sub_825688B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250e6f4
	if (cr6.eq) goto loc_8250E6F4;
	// lbz r11,64(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250e6f4
	if (cr6.eq) goto loc_8250E6F4;
	// stb r28,78(r3)
	PPC_STORE_U8(ctx.r3.u32 + 78, r28.u8);
loc_8250E6F4:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x8250e6d0
	if (cr6.lt) goto loc_8250E6D0;
	// lwz r3,640(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 640);
	// bl 0x8256a198
	sub_8256A198(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8250e73c
	if (!cr6.eq) goto loc_8250E73C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r10,17016
	ctx.r3.s64 = ctx.r10.s64 + 17016;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250dc48
	sub_8250DC48(ctx, base);
	// lwz r3,636(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 636);
	// bl 0x8255f190
	sub_8255F190(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8250E73C:
	// lwz r3,640(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 640);
	// bl 0x8256a198
	sub_8256A198(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x8250e760
	if (!cr6.eq) goto loc_8250E760;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r10,16988
	ctx.r3.s64 = ctx.r10.s64 + 16988;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
loc_8250E760:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8250E764"))) PPC_WEAK_FUNC(sub_8250E764);
PPC_FUNC_IMPL(__imp__sub_8250E764) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8250E768"))) PPC_WEAK_FUNC(sub_8250E768);
PPC_FUNC_IMPL(__imp__sub_8250E768) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250e7a4
	if (cr6.eq) goto loc_8250E7A4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250e7a8
	if (!cr6.eq) goto loc_8250E7A8;
loc_8250E7A4:
	// li r11,0
	r11.s64 = 0;
loc_8250E7A8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// bl 0x825688b0
	sub_825688B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250e7d8
	if (cr6.eq) goto loc_8250E7D8;
	// lbz r11,76(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8250e7d8
	if (!cr6.eq) goto loc_8250E7D8;
	// lbz r11,64(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8250e7dc
	if (!cr6.eq) goto loc_8250E7DC;
loc_8250E7D8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8250E7DC:
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

__attribute__((alias("__imp__sub_8250E7F0"))) PPC_WEAK_FUNC(sub_8250E7F0);
PPC_FUNC_IMPL(__imp__sub_8250E7F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250E7F4"))) PPC_WEAK_FUNC(sub_8250E7F4);
PPC_FUNC_IMPL(__imp__sub_8250E7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250E7F8"))) PPC_WEAK_FUNC(sub_8250E7F8);
PPC_FUNC_IMPL(__imp__sub_8250E7F8) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250e828
	if (cr6.eq) goto loc_8250E828;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250e82c
	if (!cr6.eq) goto loc_8250E82C;
loc_8250E828:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8250E82C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// bl 0x825688b0
	sub_825688B0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x825685a8
	sub_825685A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8250E854"))) PPC_WEAK_FUNC(sub_8250E854);
PPC_FUNC_IMPL(__imp__sub_8250E854) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250E858"))) PPC_WEAK_FUNC(sub_8250E858);
PPC_FUNC_IMPL(__imp__sub_8250E858) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250e888
	if (cr6.eq) goto loc_8250E888;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250e88c
	if (!cr6.eq) goto loc_8250E88C;
loc_8250E888:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8250E88C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// bl 0x825688b0
	sub_825688B0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x825685e0
	sub_825685E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8250E8B4"))) PPC_WEAK_FUNC(sub_8250E8B4);
PPC_FUNC_IMPL(__imp__sub_8250E8B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250E8B8"))) PPC_WEAK_FUNC(sub_8250E8B8);
PPC_FUNC_IMPL(__imp__sub_8250E8B8) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250e8f0
	if (cr6.eq) goto loc_8250E8F0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250e8f4
	if (!cr6.eq) goto loc_8250E8F4;
loc_8250E8F0:
	// li r11,0
	r11.s64 = 0;
loc_8250E8F4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// bl 0x825688b0
	sub_825688B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250e938
	if (cr6.eq) goto loc_8250E938;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// beq cr6,0x8250e92c
	if (cr6.eq) goto loc_8250E92C;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(r30.s32, 2, xer);
	// bne cr6,0x8250e938
	if (!cr6.eq) goto loc_8250E938;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x825685a8
	sub_825685A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8250E92C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x825685e0
	sub_825685E0(ctx, base);
loc_8250E938:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8250E93C"))) PPC_WEAK_FUNC(sub_8250E93C);
PPC_FUNC_IMPL(__imp__sub_8250E93C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8250E940"))) PPC_WEAK_FUNC(sub_8250E940);
PPC_FUNC_IMPL(__imp__sub_8250E940) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250e970
	if (cr6.eq) goto loc_8250E970;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250e974
	if (!cr6.eq) goto loc_8250E974;
loc_8250E970:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8250E974:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x82574478
	sub_82574478(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250e9a8
	if (cr6.eq) goto loc_8250E9A8;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8250e9a8
	if (!cr6.eq) goto loc_8250E9A8;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,17
	cr6.compare<int32_t>(r11.s32, 17, xer);
	// bne cr6,0x8250e9a8
	if (!cr6.eq) goto loc_8250E9A8;
	// li r11,0
	r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
loc_8250E9A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8250E9B8"))) PPC_WEAK_FUNC(sub_8250E9B8);
PPC_FUNC_IMPL(__imp__sub_8250E9B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250E9BC"))) PPC_WEAK_FUNC(sub_8250E9BC);
PPC_FUNC_IMPL(__imp__sub_8250E9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250E9C0"))) PPC_WEAK_FUNC(sub_8250E9C0);
PPC_FUNC_IMPL(__imp__sub_8250E9C0) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250e9e8
	if (cr6.eq) goto loc_8250E9E8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250e9ec
	if (!cr6.eq) goto loc_8250E9EC;
loc_8250E9E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8250E9EC:
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// bl 0x82568cf0
	sub_82568CF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8250EA00"))) PPC_WEAK_FUNC(sub_8250EA00);
PPC_FUNC_IMPL(__imp__sub_8250EA00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250EA04"))) PPC_WEAK_FUNC(sub_8250EA04);
PPC_FUNC_IMPL(__imp__sub_8250EA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250EA08"))) PPC_WEAK_FUNC(sub_8250EA08);
PPC_FUNC_IMPL(__imp__sub_8250EA08) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// li r31,-1
	r31.s64 = -1;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250ea38
	if (cr6.eq) goto loc_8250EA38;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250ea3c
	if (!cr6.eq) goto loc_8250EA3C;
loc_8250EA38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8250EA3C:
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// bl 0x82568a50
	sub_82568A50(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250ea64
	if (cr6.eq) goto loc_8250EA64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8250EA64:
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

__attribute__((alias("__imp__sub_8250EA78"))) PPC_WEAK_FUNC(sub_8250EA78);
PPC_FUNC_IMPL(__imp__sub_8250EA78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250EA7C"))) PPC_WEAK_FUNC(sub_8250EA7C);
PPC_FUNC_IMPL(__imp__sub_8250EA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250EA80"))) PPC_WEAK_FUNC(sub_8250EA80);
PPC_FUNC_IMPL(__imp__sub_8250EA80) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250eab0
	if (cr6.eq) goto loc_8250EAB0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
loc_8250EAB0:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x8250eac4
	if (cr6.lt) goto loc_8250EAC4;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x8250eac8
	if (cr6.lt) goto loc_8250EAC8;
loc_8250EAC4:
	// li r11,0
	r11.s64 = 0;
loc_8250EAC8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8250ebd8
	if (cr6.eq) goto loc_8250EBD8;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,21636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8250eb00
	if (cr6.lt) goto loc_8250EB00;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x8250eb04
	if (cr6.lt) goto loc_8250EB04;
loc_8250EB00:
	// li r11,0
	r11.s64 = 0;
loc_8250EB04:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8250eb18
	if (!cr6.eq) goto loc_8250EB18;
loc_8250EB10:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8250ebdc
	goto loc_8250EBDC;
loc_8250EB18:
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// beq cr6,0x8250eb10
	if (cr6.eq) goto loc_8250EB10;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r31,r11,-23964
	r31.s64 = r11.s64 + -23964;
	// lwz r11,-23936(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23936);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8250ebb4
	if (!cr6.eq) goto loc_8250EBB4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,-23936(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23936, r11.u32);
	// addi r3,r9,17272
	ctx.r3.s64 = ctx.r9.s64 + 17272;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r3,r8,22572
	ctx.r3.s64 = ctx.r8.s64 + 22572;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r3,r7,17220
	ctx.r3.s64 = ctx.r7.s64 + 17220;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// addi r3,r6,17172
	ctx.r3.s64 = ctx.r6.s64 + 17172;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r3,r5,17140
	ctx.r3.s64 = ctx.r5.s64 + 17140;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// addi r3,r4,17100
	ctx.r3.s64 = ctx.r4.s64 + 17100;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,17052
	ctx.r3.s64 = r11.s64 + 17052;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
loc_8250EBB4:
	// lwz r10,660(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 660);
	// li r11,0
	r11.s64 = 0;
loc_8250EBBC:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x8250eb10
	if (cr6.eq) goto loc_8250EB10;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r11,28
	cr6.compare<uint32_t>(r11.u32, 28, xer);
	// blt cr6,0x8250ebbc
	if (cr6.lt) goto loc_8250EBBC;
loc_8250EBD8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8250EBDC:
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

__attribute__((alias("__imp__sub_8250EBF0"))) PPC_WEAK_FUNC(sub_8250EBF0);
PPC_FUNC_IMPL(__imp__sub_8250EBF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250EBF4"))) PPC_WEAK_FUNC(sub_8250EBF4);
PPC_FUNC_IMPL(__imp__sub_8250EBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250EBF8"))) PPC_WEAK_FUNC(sub_8250EBF8);
PPC_FUNC_IMPL(__imp__sub_8250EBF8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8250ec84
	if (cr6.eq) goto loc_8250EC84;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250ec3c
	if (cr6.eq) goto loc_8250EC3C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250ec40
	if (!cr6.eq) goto loc_8250EC40;
loc_8250EC3C:
	// li r11,0
	r11.s64 = 0;
loc_8250EC40:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r29,80(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r7,r9,17300
	ctx.r7.s64 = ctx.r9.s64 + 17300;
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f0,6196(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6196);
	f0.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmuls f0,f31,f0
	f0.f64 = double(float(f31.f64 * f0.f64));
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8250c918
	sub_8250C918(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250c758
	sub_8250C758(ctx, base);
loc_8250EC84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_8250EC8C"))) PPC_WEAK_FUNC(sub_8250EC8C);
PPC_FUNC_IMPL(__imp__sub_8250EC8C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8250EC90"))) PPC_WEAK_FUNC(sub_8250EC90);
PPC_FUNC_IMPL(__imp__sub_8250EC90) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8250ed2c
	if (cr6.eq) goto loc_8250ED2C;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250ece0
	if (cr6.eq) goto loc_8250ECE0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250ece4
	if (!cr6.eq) goto loc_8250ECE4;
loc_8250ECE0:
	// li r11,0
	r11.s64 = 0;
loc_8250ECE4:
	// add r31,r31,r25
	r31.u64 = r31.u64 + r25.u64;
	// lwz r25,80(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r5,r11,17308
	ctx.r5.s64 = r11.s64 + 17308;
	// add r6,r27,r26
	ctx.r6.u64 = r27.u64 + r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8250c758
	sub_8250C758(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r10,18728
	ctx.r5.s64 = ctx.r10.s64 + 18728;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
loc_8250ED2C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8250ED30"))) PPC_WEAK_FUNC(sub_8250ED30);
PPC_FUNC_IMPL(__imp__sub_8250ED30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8250ED34"))) PPC_WEAK_FUNC(sub_8250ED34);
PPC_FUNC_IMPL(__imp__sub_8250ED34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250ED38"))) PPC_WEAK_FUNC(sub_8250ED38);
PPC_FUNC_IMPL(__imp__sub_8250ED38) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r10,17316
	r29.s64 = ctx.r10.s64 + 17316;
	// li r28,17
	r28.s64 = 17;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,246
	ctx.r8.s64 = 246;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250ed94
	if (cr6.eq) goto loc_8250ED94;
	// bl 0x822e9058
	sub_822E9058(ctx, base);
	// b 0x8250ed98
	goto loc_8250ED98;
loc_8250ED94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8250ED98:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r8,247
	ctx.r8.s64 = 247;
	// stw r3,1176(r30)
	PPC_STORE_U32(r30.u32 + 1176, ctx.r3.u32);
	// li r3,192
	ctx.r3.s64 = 192;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250ede0
	if (cr6.eq) goto loc_8250EDE0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825665b8
	sub_825665B8(ctx, base);
	// b 0x8250ede4
	goto loc_8250EDE4;
loc_8250EDE0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8250EDE4:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r8,248
	ctx.r8.s64 = 248;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r3,632(r30)
	PPC_STORE_U32(r30.u32 + 632, ctx.r3.u32);
	// li r3,1856
	ctx.r3.s64 = 1856;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250ee28
	if (cr6.eq) goto loc_8250EE28;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82560530
	sub_82560530(ctx, base);
	// b 0x8250ee2c
	goto loc_8250EE2C;
loc_8250EE28:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8250EE2C:
	// stw r3,636(r30)
	PPC_STORE_U32(r30.u32 + 636, ctx.r3.u32);
	// lwz r3,640(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 640);
	// bl 0x8256a810
	sub_8256A810(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,640(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 640);
	// bl 0x8256a1f0
	sub_8256A1F0(ctx, base);
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// stw r3,648(r30)
	PPC_STORE_U32(r30.u32 + 648, ctx.r3.u32);
	// lwz r11,684(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 684);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// stw r31,680(r30)
	PPC_STORE_U32(r30.u32 + 680, r31.u32);
	// blt cr6,0x8250ee6c
	if (cr6.lt) goto loc_8250EE6C;
	// lwz r11,664(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 664);
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9468
	return;
loc_8250EE6C:
	// stb r31,664(r30)
	PPC_STORE_U8(r30.u32 + 664, r31.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8250EE74"))) PPC_WEAK_FUNC(sub_8250EE74);
PPC_FUNC_IMPL(__imp__sub_8250EE74) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8250EE78"))) PPC_WEAK_FUNC(sub_8250EE78);
PPC_FUNC_IMPL(__imp__sub_8250EE78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250EE90"))) PPC_WEAK_FUNC(sub_8250EE90);
PPC_FUNC_IMPL(__imp__sub_8250EE90) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,21640(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21640);
	// lwz r31,92(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250eee8
	if (cr6.eq) goto loc_8250EEE8;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,16880
	ctx.r9.s64 = ctx.r10.s64 + 16880;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8250EEE8:
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

__attribute__((alias("__imp__sub_8250EEFC"))) PPC_WEAK_FUNC(sub_8250EEFC);
PPC_FUNC_IMPL(__imp__sub_8250EEFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250EF00"))) PPC_WEAK_FUNC(sub_8250EF00);
PPC_FUNC_IMPL(__imp__sub_8250EF00) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,21640(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21640);
	// lwz r31,92(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250ef58
	if (cr6.eq) goto loc_8250EF58;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r30,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,16844
	ctx.r9.s64 = ctx.r10.s64 + 16844;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8250EF58:
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

__attribute__((alias("__imp__sub_8250EF6C"))) PPC_WEAK_FUNC(sub_8250EF6C);
PPC_FUNC_IMPL(__imp__sub_8250EF6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250EF70"))) PPC_WEAK_FUNC(sub_8250EF70);
PPC_FUNC_IMPL(__imp__sub_8250EF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f2,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,21640(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21640);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lfs f4,10152(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10152);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,10144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10144);
	ctx.f3.f64 = double(temp.f32);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// b 0x82512fb8
	sub_82512FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8250EF9C"))) PPC_WEAK_FUNC(sub_8250EF9C);
PPC_FUNC_IMPL(__imp__sub_8250EF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250EFA0"))) PPC_WEAK_FUNC(sub_8250EFA0);
PPC_FUNC_IMPL(__imp__sub_8250EFA0) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250efd4
	if (cr6.eq) goto loc_8250EFD4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250efd8
	if (!cr6.eq) goto loc_8250EFD8;
loc_8250EFD4:
	// li r11,0
	r11.s64 = 0;
loc_8250EFD8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// bl 0x825688b0
	sub_825688B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250eff8
	if (cr6.eq) goto loc_8250EFF8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x825685a8
	sub_825685A8(ctx, base);
loc_8250EFF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8250F008"))) PPC_WEAK_FUNC(sub_8250F008);
PPC_FUNC_IMPL(__imp__sub_8250F008) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250F00C"))) PPC_WEAK_FUNC(sub_8250F00C);
PPC_FUNC_IMPL(__imp__sub_8250F00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250F010"))) PPC_WEAK_FUNC(sub_8250F010);
PPC_FUNC_IMPL(__imp__sub_8250F010) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250f044
	if (cr6.eq) goto loc_8250F044;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250f048
	if (!cr6.eq) goto loc_8250F048;
loc_8250F044:
	// li r11,0
	r11.s64 = 0;
loc_8250F048:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// bl 0x825688b0
	sub_825688B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250f068
	if (cr6.eq) goto loc_8250F068;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x825685a8
	sub_825685A8(ctx, base);
loc_8250F068:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8250F078"))) PPC_WEAK_FUNC(sub_8250F078);
PPC_FUNC_IMPL(__imp__sub_8250F078) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250F07C"))) PPC_WEAK_FUNC(sub_8250F07C);
PPC_FUNC_IMPL(__imp__sub_8250F07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250F080"))) PPC_WEAK_FUNC(sub_8250F080);
PPC_FUNC_IMPL(__imp__sub_8250F080) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250f0b4
	if (cr6.eq) goto loc_8250F0B4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250f0b8
	if (!cr6.eq) goto loc_8250F0B8;
loc_8250F0B4:
	// li r11,0
	r11.s64 = 0;
loc_8250F0B8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// bl 0x825688b0
	sub_825688B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250f0d8
	if (cr6.eq) goto loc_8250F0D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x825685a8
	sub_825685A8(ctx, base);
loc_8250F0D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8250F0E8"))) PPC_WEAK_FUNC(sub_8250F0E8);
PPC_FUNC_IMPL(__imp__sub_8250F0E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250F0EC"))) PPC_WEAK_FUNC(sub_8250F0EC);
PPC_FUNC_IMPL(__imp__sub_8250F0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250F0F0"))) PPC_WEAK_FUNC(sub_8250F0F0);
PPC_FUNC_IMPL(__imp__sub_8250F0F0) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250f124
	if (cr6.eq) goto loc_8250F124;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250f128
	if (!cr6.eq) goto loc_8250F128;
loc_8250F124:
	// li r11,0
	r11.s64 = 0;
loc_8250F128:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// bl 0x825688b0
	sub_825688B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250f148
	if (cr6.eq) goto loc_8250F148;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x825685e0
	sub_825685E0(ctx, base);
loc_8250F148:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8250F158"))) PPC_WEAK_FUNC(sub_8250F158);
PPC_FUNC_IMPL(__imp__sub_8250F158) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250F15C"))) PPC_WEAK_FUNC(sub_8250F15C);
PPC_FUNC_IMPL(__imp__sub_8250F15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250F160"))) PPC_WEAK_FUNC(sub_8250F160);
PPC_FUNC_IMPL(__imp__sub_8250F160) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250f194
	if (cr6.eq) goto loc_8250F194;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250f198
	if (!cr6.eq) goto loc_8250F198;
loc_8250F194:
	// li r11,0
	r11.s64 = 0;
loc_8250F198:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// bl 0x825688b0
	sub_825688B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250f1b8
	if (cr6.eq) goto loc_8250F1B8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x825685e0
	sub_825685E0(ctx, base);
loc_8250F1B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8250F1C8"))) PPC_WEAK_FUNC(sub_8250F1C8);
PPC_FUNC_IMPL(__imp__sub_8250F1C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250F1CC"))) PPC_WEAK_FUNC(sub_8250F1CC);
PPC_FUNC_IMPL(__imp__sub_8250F1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250F1D0"))) PPC_WEAK_FUNC(sub_8250F1D0);
PPC_FUNC_IMPL(__imp__sub_8250F1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,21636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmpw cr6,r8,r3
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, xer);
	// bne cr6,0x8250f27c
	if (!cr6.eq) goto loc_8250F27C;
	// li r5,64
	ctx.r5.s64 = 64;
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r31,694
	ctx.r4.s64 = r31.s64 + 694;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ebf8
	sub_8250EBF8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,758
	ctx.r4.s64 = r31.s64 + 758;
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ebf8
	sub_8250EBF8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,822
	ctx.r4.s64 = r31.s64 + 822;
	// lfs f1,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ebf8
	sub_8250EBF8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,886
	ctx.r4.s64 = r31.s64 + 886;
	// lfs f1,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ebf8
	sub_8250EBF8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r11,17364
	ctx.r5.s64 = r11.s64 + 17364;
	// addi r4,r10,22032
	ctx.r4.s64 = ctx.r10.s64 + 22032;
	// addi r3,r9,16564
	ctx.r3.s64 = ctx.r9.s64 + 16564;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
loc_8250F27C:
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

__attribute__((alias("__imp__sub_8250F290"))) PPC_WEAK_FUNC(sub_8250F290);
PPC_FUNC_IMPL(__imp__sub_8250F290) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250F294"))) PPC_WEAK_FUNC(sub_8250F294);
PPC_FUNC_IMPL(__imp__sub_8250F294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250F298"))) PPC_WEAK_FUNC(sub_8250F298);
PPC_FUNC_IMPL(__imp__sub_8250F298) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r3,694
	ctx.r4.s64 = ctx.r3.s64 + 694;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f31,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8250ebf8
	sub_8250EBF8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r31,758
	ctx.r4.s64 = r31.s64 + 758;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ebf8
	sub_8250EBF8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,822
	ctx.r4.s64 = r31.s64 + 822;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ebf8
	sub_8250EBF8(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r3,21636(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21636);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stfs f31,1144(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 1144, temp.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stfs f31,1148(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 1148, temp.u32);
	// addi r25,r31,1144
	r25.s64 = r31.s64 + 1144;
	// addi r24,r31,1148
	r24.s64 = r31.s64 + 1148;
	// li r28,0
	r28.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8250f404
	if (cr6.lt) goto loc_8250F404;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r6,1160(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 1160);
	// addi r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 + 52;
	// lwz r5,1164(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 1164);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r4,1156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1156);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,18436(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18436);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwz r29,68(r8)
	r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8253df98
	sub_8253DF98(ctx, base);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,1160(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 1160);
	// lwz r5,1164(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 1164);
	// lwz r4,1156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1156);
	// bl 0x8253e148
	sub_8253E148(ctx, base);
	// lis r29,-31970
	r29.s64 = -2095185920;
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250f398
	if (cr6.eq) goto loc_8250F398;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250f39c
	if (!cr6.eq) goto loc_8250F39C;
loc_8250F398:
	// li r11,0
	r11.s64 = 0;
loc_8250F39C:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,196(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 196);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,1156(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 1156);
	// bl 0x822e1ce8
	sub_822E1CE8(ctx, base);
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// beq cr6,0x8250f3d4
	if (cr6.eq) goto loc_8250F3D4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250f3d8
	if (!cr6.eq) goto loc_8250F3D8;
loc_8250F3D4:
	// li r11,0
	r11.s64 = 0;
loc_8250F3D8:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,196(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 196);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,1156(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 1156);
	// bl 0x822e1be8
	sub_822E1BE8(ctx, base);
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r27,84(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8250F404:
	// li r5,64
	ctx.r5.s64 = 64;
	// lfs f1,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r31,886
	ctx.r4.s64 = r31.s64 + 886;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ebf8
	sub_8250EBF8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,950
	ctx.r4.s64 = r31.s64 + 950;
	// lfs f1,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r24.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ebf8
	sub_8250EBF8(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r31,1078
	ctx.r5.s64 = r31.s64 + 1078;
	// addi r4,r31,1014
	ctx.r4.s64 = r31.s64 + 1014;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ec90
	sub_8250EC90(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
}

__attribute__((alias("__imp__sub_8250F458"))) PPC_WEAK_FUNC(sub_8250F458);
PPC_FUNC_IMPL(__imp__sub_8250F458) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8250F45C"))) PPC_WEAK_FUNC(sub_8250F45C);
PPC_FUNC_IMPL(__imp__sub_8250F45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250F460"))) PPC_WEAK_FUNC(sub_8250F460);
PPC_FUNC_IMPL(__imp__sub_8250F460) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r11,19484(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19484);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x8250f4a8
	if (cr6.eq) goto loc_8250F4A8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250f4ac
	if (!cr6.eq) goto loc_8250F4AC;
loc_8250F4A8:
	// li r11,0
	r11.s64 = 0;
loc_8250F4AC:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250f4f8
	if (cr6.eq) goto loc_8250F4F8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8250f4f8
	if (!cr6.eq) goto loc_8250F4F8;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8250F4F8:
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

__attribute__((alias("__imp__sub_8250F50C"))) PPC_WEAK_FUNC(sub_8250F50C);
PPC_FUNC_IMPL(__imp__sub_8250F50C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250F510"))) PPC_WEAK_FUNC(sub_8250F510);
PPC_FUNC_IMPL(__imp__sub_8250F510) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r11,19576(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19576);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x8250f550
	if (cr6.eq) goto loc_8250F550;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250f554
	if (!cr6.eq) goto loc_8250F554;
loc_8250F550:
	// li r11,0
	r11.s64 = 0;
loc_8250F554:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250f5a0
	if (cr6.eq) goto loc_8250F5A0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8250f5a0
	if (!cr6.eq) goto loc_8250F5A0;
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
loc_8250F5A0:
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

__attribute__((alias("__imp__sub_8250F5B4"))) PPC_WEAK_FUNC(sub_8250F5B4);
PPC_FUNC_IMPL(__imp__sub_8250F5B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250F5B8"))) PPC_WEAK_FUNC(sub_8250F5B8);
PPC_FUNC_IMPL(__imp__sub_8250F5B8) {
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
	// lis r30,-31934
	r30.s64 = -2092826624;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,21640(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 21640);
	// lwz r31,92(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250f608
	if (cr6.eq) goto loc_8250F608;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,16856
	ctx.r9.s64 = ctx.r10.s64 + 16856;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8250F608:
	// lwz r11,21640(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 21640);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r31,92(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250f648
	if (cr6.eq) goto loc_8250F648;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,16844
	ctx.r8.s64 = ctx.r10.s64 + 16844;
	// stb r9,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r9.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8250F648:
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

__attribute__((alias("__imp__sub_8250F65C"))) PPC_WEAK_FUNC(sub_8250F65C);
PPC_FUNC_IMPL(__imp__sub_8250F65C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250F660"))) PPC_WEAK_FUNC(sub_8250F660);
PPC_FUNC_IMPL(__imp__sub_8250F660) {
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
	// lis r30,-31934
	r30.s64 = -2092826624;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,21640(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 21640);
	// lwz r31,92(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250f6b0
	if (cr6.eq) goto loc_8250F6B0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,16868
	ctx.r9.s64 = ctx.r10.s64 + 16868;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8250F6B0:
	// lwz r11,21640(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 21640);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r31,92(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250f6f0
	if (cr6.eq) goto loc_8250F6F0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,16844
	ctx.r8.s64 = ctx.r10.s64 + 16844;
	// stb r9,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r9.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8250F6F0:
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

__attribute__((alias("__imp__sub_8250F704"))) PPC_WEAK_FUNC(sub_8250F704);
PPC_FUNC_IMPL(__imp__sub_8250F704) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8250F708"))) PPC_WEAK_FUNC(sub_8250F708);
PPC_FUNC_IMPL(__imp__sub_8250F708) {
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
	// li r28,0
	r28.s64 = 0;
	// stb r28,647(r3)
	PPC_STORE_U8(ctx.r3.u32 + 647, r28.u8);
	// bl 0x82516ad8
	sub_82516AD8(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r29,-31970
	r29.s64 = -2095185920;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r28.u8);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r11,20024(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20024);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x8250f754
	if (cr6.eq) goto loc_8250F754;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250f758
	if (!cr6.eq) goto loc_8250F758;
loc_8250F754:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8250F758:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250f7a4
	if (cr6.eq) goto loc_8250F7A4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8250f7a4
	if (!cr6.eq) goto loc_8250F7A4;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8250F7A4:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r11,19440(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19440);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x8250f7cc
	if (cr6.eq) goto loc_8250F7CC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250f7d0
	if (!cr6.eq) goto loc_8250F7D0;
loc_8250F7CC:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8250F7D0:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250f81c
	if (cr6.eq) goto loc_8250F81C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8250f81c
	if (!cr6.eq) goto loc_8250F81C;
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
loc_8250F81C:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,20992(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20992);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250f858
	if (cr6.eq) goto loc_8250F858;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,16808
	ctx.r9.s64 = ctx.r10.s64 + 16808;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8250F858:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,21640(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21640);
	// lwz r31,92(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250f898
	if (cr6.eq) goto loc_8250F898;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r28,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r28.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,16844
	ctx.r9.s64 = ctx.r10.s64 + 16844;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8250F898:
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250f8b4
	if (cr6.eq) goto loc_8250F8B4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250f8b8
	if (!cr6.eq) goto loc_8250F8B8;
loc_8250F8B4:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8250F8B8:
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// bl 0x825217e0
	sub_825217E0(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250f8dc
	if (cr6.eq) goto loc_8250F8DC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250f8e0
	if (!cr6.eq) goto loc_8250F8E0;
loc_8250F8DC:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8250F8E0:
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// bl 0x82521190
	sub_82521190(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250f900
	if (cr6.eq) goto loc_8250F900;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250f904
	if (!cr6.eq) goto loc_8250F904;
loc_8250F900:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8250F904:
	// lwz r3,192(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// bl 0x82422ed0
	sub_82422ED0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8250F910"))) PPC_WEAK_FUNC(sub_8250F910);
PPC_FUNC_IMPL(__imp__sub_8250F910) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8250F914"))) PPC_WEAK_FUNC(sub_8250F914);
PPC_FUNC_IMPL(__imp__sub_8250F914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250F918"))) PPC_WEAK_FUNC(sub_8250F918);
PPC_FUNC_IMPL(__imp__sub_8250F918) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r29,-31970
	r29.s64 = -2095185920;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r28,1
	r28.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,20024(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20024);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x8250f964
	if (cr6.eq) goto loc_8250F964;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250f968
	if (!cr6.eq) goto loc_8250F968;
loc_8250F964:
	// li r11,0
	r11.s64 = 0;
loc_8250F968:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250f9b4
	if (cr6.eq) goto loc_8250F9B4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8250f9b4
	if (!cr6.eq) goto loc_8250F9B4;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8250F9B4:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r11,19444(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19444);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x8250f9dc
	if (cr6.eq) goto loc_8250F9DC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250f9e0
	if (!cr6.eq) goto loc_8250F9E0;
loc_8250F9DC:
	// li r11,0
	r11.s64 = 0;
loc_8250F9E0:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250fa2c
	if (cr6.eq) goto loc_8250FA2C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8250fa2c
	if (!cr6.eq) goto loc_8250FA2C;
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
loc_8250FA2C:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,21640(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21640);
	// lwz r31,92(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250fa6c
	if (cr6.eq) goto loc_8250FA6C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r28,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r28.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,16844
	ctx.r9.s64 = ctx.r10.s64 + 16844;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8250FA6C:
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250fa88
	if (cr6.eq) goto loc_8250FA88;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250fa8c
	if (!cr6.eq) goto loc_8250FA8C;
loc_8250FA88:
	// li r11,0
	r11.s64 = 0;
loc_8250FA8C:
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// bl 0x82521128
	sub_82521128(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250fab0
	if (cr6.eq) goto loc_8250FAB0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250fab4
	if (!cr6.eq) goto loc_8250FAB4;
loc_8250FAB0:
	// li r11,0
	r11.s64 = 0;
loc_8250FAB4:
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// bl 0x82521860
	sub_82521860(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250fad8
	if (cr6.eq) goto loc_8250FAD8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250fadc
	if (!cr6.eq) goto loc_8250FADC;
loc_8250FAD8:
	// li r11,0
	r11.s64 = 0;
loc_8250FADC:
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 192);
	// bl 0x82422e18
	sub_82422E18(ctx, base);
	// stb r28,647(r27)
	PPC_STORE_U8(r27.u32 + 647, r28.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8250FAEC"))) PPC_WEAK_FUNC(sub_8250FAEC);
PPC_FUNC_IMPL(__imp__sub_8250FAEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8250FAF0"))) PPC_WEAK_FUNC(sub_8250FAF0);
PPC_FUNC_IMPL(__imp__sub_8250FAF0) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r29,-31970
	r29.s64 = -2095185920;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r28,1
	r28.s64 = 1;
	// lwz r11,20024(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20024);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r28.u8);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x8250fb38
	if (cr6.eq) goto loc_8250FB38;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250fb3c
	if (!cr6.eq) goto loc_8250FB3C;
loc_8250FB38:
	// li r11,0
	r11.s64 = 0;
loc_8250FB3C:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250fb88
	if (cr6.eq) goto loc_8250FB88;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8250fb88
	if (!cr6.eq) goto loc_8250FB88;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8250FB88:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r11,19444(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19444);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x8250fbb0
	if (cr6.eq) goto loc_8250FBB0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250fbb4
	if (!cr6.eq) goto loc_8250FBB4;
loc_8250FBB0:
	// li r11,0
	r11.s64 = 0;
loc_8250FBB4:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250fc00
	if (cr6.eq) goto loc_8250FC00;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8250fc00
	if (!cr6.eq) goto loc_8250FC00;
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
loc_8250FC00:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,21640(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21640);
	// lwz r31,92(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250fc40
	if (cr6.eq) goto loc_8250FC40;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r28,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r28.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,16844
	ctx.r9.s64 = ctx.r10.s64 + 16844;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8250FC40:
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250fc5c
	if (cr6.eq) goto loc_8250FC5C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250fc60
	if (!cr6.eq) goto loc_8250FC60;
loc_8250FC5C:
	// li r11,0
	r11.s64 = 0;
loc_8250FC60:
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// bl 0x82521128
	sub_82521128(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250fc84
	if (cr6.eq) goto loc_8250FC84;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250fc88
	if (!cr6.eq) goto loc_8250FC88;
loc_8250FC84:
	// li r11,0
	r11.s64 = 0;
loc_8250FC88:
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 192);
	// bl 0x82422e18
	sub_82422E18(ctx, base);
	// stb r28,647(r27)
	PPC_STORE_U8(r27.u32 + 647, r28.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8250FC98"))) PPC_WEAK_FUNC(sub_8250FC98);
PPC_FUNC_IMPL(__imp__sub_8250FC98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8250FC9C"))) PPC_WEAK_FUNC(sub_8250FC9C);
PPC_FUNC_IMPL(__imp__sub_8250FC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8250FCA0"))) PPC_WEAK_FUNC(sub_8250FCA0);
PPC_FUNC_IMPL(__imp__sub_8250FCA0) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r28,0
	r28.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// stb r28,647(r3)
	PPC_STORE_U8(ctx.r3.u32 + 647, r28.u8);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,20992(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20992);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250fcf8
	if (cr6.eq) goto loc_8250FCF8;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,16832
	ctx.r8.s64 = ctx.r10.s64 + 16832;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8250FCF8:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r29,-31970
	r29.s64 = -2095185920;
	// lwz r11,19436(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19436);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x8250fd24
	if (cr6.eq) goto loc_8250FD24;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250fd28
	if (!cr6.eq) goto loc_8250FD28;
loc_8250FD24:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8250FD28:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250fd74
	if (cr6.eq) goto loc_8250FD74;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8250fd74
	if (!cr6.eq) goto loc_8250FD74;
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
loc_8250FD74:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,21640(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21640);
	// lwz r31,92(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250fdb4
	if (cr6.eq) goto loc_8250FDB4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r28,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r28.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,16844
	ctx.r9.s64 = ctx.r10.s64 + 16844;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8250FDB4:
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250fdcc
	if (cr6.eq) goto loc_8250FDCC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250fdd0
	if (!cr6.eq) goto loc_8250FDD0;
loc_8250FDCC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8250FDD0:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r11,17432
	ctx.r4.s64 = r11.s64 + 17432;
	// bl 0x825c62e8
	sub_825C62E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8250FDE4"))) PPC_WEAK_FUNC(sub_8250FDE4);
PPC_FUNC_IMPL(__imp__sub_8250FDE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8250FDE8"))) PPC_WEAK_FUNC(sub_8250FDE8);
PPC_FUNC_IMPL(__imp__sub_8250FDE8) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r28,0
	r28.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// stb r28,647(r3)
	PPC_STORE_U8(ctx.r3.u32 + 647, r28.u8);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,20992(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20992);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250fe40
	if (cr6.eq) goto loc_8250FE40;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r10,16832
	ctx.r8.s64 = ctx.r10.s64 + 16832;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8250FE40:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r29,-31970
	r29.s64 = -2095185920;
	// lwz r11,19440(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19440);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x8250fe6c
	if (cr6.eq) goto loc_8250FE6C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250fe70
	if (!cr6.eq) goto loc_8250FE70;
loc_8250FE6C:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8250FE70:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250febc
	if (cr6.eq) goto loc_8250FEBC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8250febc
	if (!cr6.eq) goto loc_8250FEBC;
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
loc_8250FEBC:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,21640(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21640);
	// lwz r31,92(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250fefc
	if (cr6.eq) goto loc_8250FEFC;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r28,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r28.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,16844
	ctx.r9.s64 = ctx.r10.s64 + 16844;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8250FEFC:
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250ff18
	if (cr6.eq) goto loc_8250FF18;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250ff1c
	if (!cr6.eq) goto loc_8250FF1C;
loc_8250FF18:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8250FF1C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// addi r4,r10,17432
	ctx.r4.s64 = ctx.r10.s64 + 17432;
	// bl 0x825c62e8
	sub_825C62E8(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8250ff44
	if (cr6.eq) goto loc_8250FF44;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250ff48
	if (!cr6.eq) goto loc_8250FF48;
loc_8250FF44:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8250FF48:
	// lwz r3,152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// bl 0x82521510
	sub_82521510(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8250FF54"))) PPC_WEAK_FUNC(sub_8250FF54);
PPC_FUNC_IMPL(__imp__sub_8250FF54) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8250FF58"))) PPC_WEAK_FUNC(sub_8250FF58);
PPC_FUNC_IMPL(__imp__sub_8250FF58) {
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
	// li r28,0
	r28.s64 = 0;
	// stb r28,647(r3)
	PPC_STORE_U8(ctx.r3.u32 + 647, r28.u8);
	// bl 0x8250dc48
	sub_8250DC48(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,20992(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20992);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8250ffb0
	if (cr6.eq) goto loc_8250FFB0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,16832
	ctx.r9.s64 = ctx.r10.s64 + 16832;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8250FFB0:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r29,-31970
	r29.s64 = -2095185920;
	// lwz r11,19440(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19440);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x8250ffdc
	if (cr6.eq) goto loc_8250FFDC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8250ffe0
	if (!cr6.eq) goto loc_8250FFE0;
loc_8250FFDC:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8250FFE0:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251002c
	if (cr6.eq) goto loc_8251002C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251002c
	if (!cr6.eq) goto loc_8251002C;
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
loc_8251002C:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,21640(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21640);
	// lwz r31,92(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251006c
	if (cr6.eq) goto loc_8251006C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r28,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r28.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,16844
	ctx.r9.s64 = ctx.r10.s64 + 16844;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8251006C:
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82510088
	if (cr6.eq) goto loc_82510088;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251008c
	if (!cr6.eq) goto loc_8251008C;
loc_82510088:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8251008C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// addi r4,r10,17432
	ctx.r4.s64 = ctx.r10.s64 + 17432;
	// bl 0x825c62e8
	sub_825C62E8(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825100b4
	if (cr6.eq) goto loc_825100B4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825100b8
	if (!cr6.eq) goto loc_825100B8;
loc_825100B4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_825100B8:
	// lwz r3,152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// bl 0x82521510
	sub_82521510(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825100C4"))) PPC_WEAK_FUNC(sub_825100C4);
PPC_FUNC_IMPL(__imp__sub_825100C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825100C8"))) PPC_WEAK_FUNC(sub_825100C8);
PPC_FUNC_IMPL(__imp__sub_825100C8) {
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
	// lbz r11,692(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 692);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82510114
	if (cr6.eq) goto loc_82510114;
	// lwz r3,640(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 640);
	// bl 0x8256a198
	sub_8256A198(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82510100
	if (!cr6.eq) goto loc_82510100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250f918
	sub_8250F918(ctx, base);
loc_82510100:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r10,17444
	ctx.r3.s64 = ctx.r10.s64 + 17444;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
loc_82510114:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82510124"))) PPC_WEAK_FUNC(sub_82510124);
PPC_FUNC_IMPL(__imp__sub_82510124) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82510128"))) PPC_WEAK_FUNC(sub_82510128);
PPC_FUNC_IMPL(__imp__sub_82510128) {
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
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r11,-23864(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -23864);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82510168
	if (cr6.eq) goto loc_82510168;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251016c
	if (!cr6.eq) goto loc_8251016C;
loc_82510168:
	// li r11,0
	r11.s64 = 0;
loc_8251016C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825101b8
	if (cr6.eq) goto loc_825101B8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825101b8
	if (!cr6.eq) goto loc_825101B8;
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
loc_825101B8:
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

__attribute__((alias("__imp__sub_825101CC"))) PPC_WEAK_FUNC(sub_825101CC);
PPC_FUNC_IMPL(__imp__sub_825101CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825101D0"))) PPC_WEAK_FUNC(sub_825101D0);
PPC_FUNC_IMPL(__imp__sub_825101D0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825101D0"))) PPC_WEAK_FUNC(sub_825101D0);
PPC_FUNC_IMPL(__imp__sub_825101D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8250f298
	sub_8250F298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825101D4"))) PPC_WEAK_FUNC(sub_825101D4);
PPC_FUNC_IMPL(__imp__sub_825101D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825101D8"))) PPC_WEAK_FUNC(sub_825101D8);
PPC_FUNC_IMPL(__imp__sub_825101D8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x825102ac
	if (!cr6.eq) goto loc_825102AC;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
loc_82510208:
	// li r8,1
	ctx.r8.s64 = 1;
loc_8251020C:
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825102f0
	if (!cr6.eq) goto loc_825102F0;
	// lwz r31,24(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r11,16
	r11.s64 = 16;
	// li r9,34
	ctx.r9.s64 = 34;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r30,r3,24
	r30.s64 = ctx.r3.s64 + 24;
	// addi r6,r7,4776
	ctx.r6.s64 = ctx.r7.s64 + 4776;
	// lwz r28,4(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// beq 0x82510288
	if (cr0.eq) goto loc_82510288;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
loc_82510288:
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - r11.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x825102dc
	if (!cr6.lt) goto loc_825102DC;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-27344
	ctx.r3.s64 = r11.s64 + -27344;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_825102AC:
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// beq cr6,0x8251020c
	if (cr6.eq) goto loc_8251020C;
loc_825102BC:
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// beq cr6,0x82510208
	if (cr6.eq) goto loc_82510208;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x825102bc
	if (!cr6.eq) goto loc_825102BC;
	// b 0x8251020c
	goto loc_8251020C;
loc_825102DC:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
loc_825102F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825102F4"))) PPC_WEAK_FUNC(sub_825102F4);
PPC_FUNC_IMPL(__imp__sub_825102F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825102F8"))) PPC_WEAK_FUNC(sub_825102F8);
PPC_FUNC_IMPL(__imp__sub_825102F8) {
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
	// li r11,1
	r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x825101d8
	sub_825101D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82510324"))) PPC_WEAK_FUNC(sub_82510324);
PPC_FUNC_IMPL(__imp__sub_82510324) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82510328"))) PPC_WEAK_FUNC(sub_82510328);
PPC_FUNC_IMPL(__imp__sub_82510328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r17{};
	PPCRegister r18{};
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
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// bgt cr6,0x825105bc
	if (cr6.gt) goto loc_825105BC;
	// lis r12,-32175
	r12.s64 = -2108620800;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,864
	r12.s64 = r12.s64 + 864;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82510388;
	case 1:
		goto loc_825105BC;
	case 2:
		goto loc_825105BC;
	case 3:
		goto loc_825105BC;
	case 4:
		goto loc_825105BC;
	case 5:
		goto loc_825105BC;
	case 6:
		goto loc_82510464;
	case 7:
		goto loc_82510494;
	case 8:
		goto loc_825104CC;
	case 9:
		goto loc_8251058C;
	default:
		__builtin_unreachable();
	}
	// lwz r18,904(r17)
	r18.u64 = PPC_LOAD_U32(r17.u32 + 904);
	// lwz r18,1468(r17)
	r18.u64 = PPC_LOAD_U32(r17.u32 + 1468);
	// lwz r18,1468(r17)
	r18.u64 = PPC_LOAD_U32(r17.u32 + 1468);
	// lwz r18,1468(r17)
	r18.u64 = PPC_LOAD_U32(r17.u32 + 1468);
	// lwz r18,1468(r17)
	r18.u64 = PPC_LOAD_U32(r17.u32 + 1468);
	// lwz r18,1468(r17)
	r18.u64 = PPC_LOAD_U32(r17.u32 + 1468);
	// lwz r18,1124(r17)
	r18.u64 = PPC_LOAD_U32(r17.u32 + 1124);
	// lwz r18,1172(r17)
	r18.u64 = PPC_LOAD_U32(r17.u32 + 1172);
	// lwz r18,1228(r17)
	r18.u64 = PPC_LOAD_U32(r17.u32 + 1228);
	// lwz r18,1420(r17)
	r18.u64 = PPC_LOAD_U32(r17.u32 + 1420);
loc_82510388:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// stb r9,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r9.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,25728(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 25728);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,21640(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21640);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r3,92(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// bl 0x82513338
	sub_82513338(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,640(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 640);
	// stb r29,621(r30)
	PPC_STORE_U8(r30.u32 + 621, r29.u8);
	// bl 0x8256a1f0
	sub_8256A1F0(ctx, base);
	// lis r31,-31934
	r31.s64 = -2092826624;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,18436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 18436);
	// bl 0x82513a20
	sub_82513A20(ctx, base);
	// lwz r3,18436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 18436);
	// bl 0x82514378
	sub_82514378(ctx, base);
	// lis r31,-31970
	r31.s64 = -2095185920;
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r7,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r7.u32);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251040c
	if (cr6.eq) goto loc_8251040C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82510410
	if (!cr6.eq) goto loc_82510410;
loc_8251040C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82510410:
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// bl 0x82517d18
	sub_82517D18(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82510450
	if (cr6.eq) goto loc_82510450;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251043c
	if (cr6.eq) goto loc_8251043C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82510440
	if (!cr6.eq) goto loc_82510440;
loc_8251043C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82510440:
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// bl 0x825177d8
	sub_825177D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825105bc
	if (!cr6.eq) goto loc_825105BC;
loc_82510450:
	// stb r29,622(r30)
	PPC_STORE_U8(r30.u32 + 622, r29.u8);
	// stb r29,623(r30)
	PPC_STORE_U8(r30.u32 + 623, r29.u8);
	// stb r29,624(r30)
	PPC_STORE_U8(r30.u32 + 624, r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e946c
	return;
loc_82510464:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,18436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18436);
	// bl 0x82513a18
	sub_82513A18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82510484
	if (!cr6.eq) goto loc_82510484;
	// lwz r3,636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 636);
	// bl 0x82560150
	sub_82560150(ctx, base);
loc_82510484:
	// li r11,8
	r11.s64 = 8;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e946c
	return;
loc_82510494:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,18436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18436);
	// bl 0x82513a18
	sub_82513A18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825104bc
	if (!cr6.eq) goto loc_825104BC;
	// lwz r11,636(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 636);
	// lwz r10,540(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 540);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825105bc
	if (!cr6.eq) goto loc_825105BC;
loc_825104BC:
	// li r11,9
	r11.s64 = 9;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e946c
	return;
loc_825104CC:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r29,0
	r29.s64 = 0;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stb r29,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, r29.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,25728(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 25728);
	// lfs f0,3792(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,21640(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21640);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r3,92(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// bl 0x82513338
	sub_82513338(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// lwz r11,-23860(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23860);
	// lwz r3,-14756(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x8251052c
	if (cr6.eq) goto loc_8251052C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82510530
	if (!cr6.eq) goto loc_82510530;
loc_8251052C:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82510530:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251057c
	if (cr6.eq) goto loc_8251057C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251057c
	if (!cr6.eq) goto loc_8251057C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8251057C:
	// li r11,10
	r11.s64 = 10;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e946c
	return;
loc_8251058C:
	// lbz r11,621(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 621);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825105bc
	if (cr6.eq) goto loc_825105BC;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r3,640(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 640);
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// bl 0x8256a1f0
	sub_8256A1F0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r9.u32);
loc_825105BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

