#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82544B4C"))) PPC_WEAK_FUNC(sub_82544B4C);
PPC_FUNC_IMPL(__imp__sub_82544B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82544B50"))) PPC_WEAK_FUNC(sub_82544B50);
PPC_FUNC_IMPL(__imp__sub_82544B50) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r8,24192(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// cmpwi cr6,r9,128
	cr6.compare<int32_t>(ctx.r9.s32, 128, xer);
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// ble cr6,0x82544c7c
	if (!cr6.gt) goto loc_82544C7C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// subfic r28,r3,-8
	xer.ca = ctx.r3.u32 <= 4294967288;
	r28.s64 = -8 - ctx.r3.s64;
	// addi r31,r4,-120
	r31.s64 = ctx.r4.s64 + -120;
	// subfic r27,r3,120
	xer.ca = ctx.r3.u32 <= 120;
	r27.s64 = 120 - ctx.r3.s64;
	// addi r30,r11,6012
	r30.s64 = r11.s64 + 6012;
loc_82544B94:
	// lwz r8,-4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82544BB0:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82544bb0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82544BB0;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// addi r11,r31,28
	r11.s64 = r31.s64 + 28;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82544BCC:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82544bcc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82544BCC;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// addi r11,r31,60
	r11.s64 = r31.s64 + 60;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82544BE8:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82544be8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82544BE8;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r3,r31,-8
	ctx.r3.s64 = r31.s64 + -8;
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lbz r7,112(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 112);
	// lbz r6,113(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 113);
	// lbz r5,114(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 114);
	// lbz r25,115(r31)
	r25.u64 = PPC_LOAD_U8(r31.u32 + 115);
	// lwz r24,116(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r11.u32);
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// stw r9,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// stw r8,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// stb r7,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r7.u8);
	// stb r6,201(r1)
	PPC_STORE_U8(ctx.r1.u32 + 201, ctx.r6.u8);
	// stb r5,202(r1)
	PPC_STORE_U8(ctx.r1.u32 + 202, ctx.r5.u8);
	// stb r25,203(r1)
	PPC_STORE_U8(ctx.r1.u32 + 203, r25.u8);
	// stw r24,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r24.u32);
	// bl 0x825439c0
	sub_825439C0(ctx, base);
	// add r4,r28,r31
	ctx.r4.u64 = r28.u64 + r31.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// srawi r5,r4,7
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 7;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82543c18
	sub_82543C18(ctx, base);
	// addi r31,r31,-128
	r31.s64 = r31.s64 + -128;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// add r3,r27,r31
	ctx.r3.u64 = r27.u64 + r31.u64;
	// rlwinm r11,r3,0,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFF80;
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(r11.s32, 128, xer);
	// bgt cr6,0x82544b94
	if (cr6.gt) goto loc_82544B94;
loc_82544C7C:
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_82544C88"))) PPC_WEAK_FUNC(sub_82544C88);
PPC_FUNC_IMPL(__imp__sub_82544C88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82544C8C"))) PPC_WEAK_FUNC(sub_82544C8C);
PPC_FUNC_IMPL(__imp__sub_82544C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82544C90"))) PPC_WEAK_FUNC(sub_82544C90);
PPC_FUNC_IMPL(__imp__sub_82544C90) {
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
	// subf r11,r3,r4
	r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// ble cr6,0x82544d48
	if (!cr6.gt) goto loc_82544D48;
loc_82544CBC:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82544d6c
	if (!cr6.gt) goto loc_82544D6C;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825443c0
	sub_825443C0(ctx, base);
	// srawi r11,r29,1
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	r11.s64 = r29.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r27,84(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r27,r31
	ctx.r9.s64 = r31.s64 - r27.s64;
	// subf r8,r30,r26
	ctx.r8.s64 = r26.s64 - r30.s64;
	// rlwinm r7,r9,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r6,r8,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bge cr6,0x82544d28
	if (!cr6.lt) goto loc_82544D28;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82544c90
	sub_82544C90(ctx, base);
	// mr r30,r27
	r30.u64 = r27.u64;
	// b 0x82544d38
	goto loc_82544D38;
loc_82544D28:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82544c90
	sub_82544C90(ctx, base);
	// mr r31,r26
	r31.u64 = r26.u64;
loc_82544D38:
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// bgt cr6,0x82544cbc
	if (cr6.gt) goto loc_82544CBC;
loc_82544D48:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82544d64
	if (!cr6.gt) goto loc_82544D64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825442b0
	sub_825442B0(ctx, base);
loc_82544D64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_82544D6C:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// ble cr6,0x82544d48
	if (!cr6.gt) goto loc_82544D48;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82544d94
	if (!cr6.gt) goto loc_82544D94;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82544038
	sub_82544038(ctx, base);
loc_82544D94:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82544b50
	sub_82544B50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82544DA8"))) PPC_WEAK_FUNC(sub_82544DA8);
PPC_FUNC_IMPL(__imp__sub_82544DA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82544DAC"))) PPC_WEAK_FUNC(sub_82544DAC);
PPC_FUNC_IMPL(__imp__sub_82544DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82544DB0"))) PPC_WEAK_FUNC(sub_82544DB0);
PPC_FUNC_IMPL(__imp__sub_82544DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,32132
	ctx.r9.s64 = r11.s64 + 32132;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r10,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r10.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82544DD0"))) PPC_WEAK_FUNC(sub_82544DD0);
PPC_FUNC_IMPL(__imp__sub_82544DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,32132
	ctx.r10.s64 = r11.s64 + 32132;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82544DE0"))) PPC_WEAK_FUNC(sub_82544DE0);
PPC_FUNC_IMPL(__imp__sub_82544DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,32144
	ctx.r9.s64 = r11.s64 + 32144;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r10,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r10.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82544E00"))) PPC_WEAK_FUNC(sub_82544E00);
PPC_FUNC_IMPL(__imp__sub_82544E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,32132
	ctx.r10.s64 = r11.s64 + 32132;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82544E10"))) PPC_WEAK_FUNC(sub_82544E10);
PPC_FUNC_IMPL(__imp__sub_82544E10) {
	PPC_FUNC_PROLOGUE();
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// bl 0x82881b30
	sub_82881B30(ctx, base);
	// addi r4,r31,44
	ctx.r4.s64 = r31.s64 + 44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82881b30
	sub_82881B30(ctx, base);
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

__attribute__((alias("__imp__sub_82544E58"))) PPC_WEAK_FUNC(sub_82544E58);
PPC_FUNC_IMPL(__imp__sub_82544E58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82544E5C"))) PPC_WEAK_FUNC(sub_82544E5C);
PPC_FUNC_IMPL(__imp__sub_82544E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82544E60"))) PPC_WEAK_FUNC(sub_82544E60);
PPC_FUNC_IMPL(__imp__sub_82544E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,32156
	ctx.r9.s64 = r11.s64 + 32156;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r10,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r10.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82544E80"))) PPC_WEAK_FUNC(sub_82544E80);
PPC_FUNC_IMPL(__imp__sub_82544E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,32132
	ctx.r10.s64 = r11.s64 + 32132;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82544E90"))) PPC_WEAK_FUNC(sub_82544E90);
PPC_FUNC_IMPL(__imp__sub_82544E90) {
	PPC_FUNC_PROLOGUE();
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// bl 0x82881b30
	sub_82881B30(ctx, base);
	// addi r4,r31,44
	ctx.r4.s64 = r31.s64 + 44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82881b30
	sub_82881B30(ctx, base);
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

__attribute__((alias("__imp__sub_82544ED8"))) PPC_WEAK_FUNC(sub_82544ED8);
PPC_FUNC_IMPL(__imp__sub_82544ED8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82544EDC"))) PPC_WEAK_FUNC(sub_82544EDC);
PPC_FUNC_IMPL(__imp__sub_82544EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82544EE0"))) PPC_WEAK_FUNC(sub_82544EE0);
PPC_FUNC_IMPL(__imp__sub_82544EE0) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,-1
	r11.s64 = -1;
	// addi r9,r10,32168
	ctx.r9.s64 = ctx.r10.s64 + 32168;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x82542608
	sub_82542608(ctx, base);
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

__attribute__((alias("__imp__sub_82544F30"))) PPC_WEAK_FUNC(sub_82544F30);
PPC_FUNC_IMPL(__imp__sub_82544F30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82544F34"))) PPC_WEAK_FUNC(sub_82544F34);
PPC_FUNC_IMPL(__imp__sub_82544F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82544F38"))) PPC_WEAK_FUNC(sub_82544F38);
PPC_FUNC_IMPL(__imp__sub_82544F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r9,r10,32168
	ctx.r9.s64 = ctx.r10.s64 + 32168;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// b 0x82542648
	sub_82542648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82544F50"))) PPC_WEAK_FUNC(sub_82544F50);
PPC_FUNC_IMPL(__imp__sub_82544F50) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// extsw r9,r11
	ctx.r9.s64 = r11.s32;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// addi r4,r10,20308
	ctx.r4.s64 = ctx.r10.s64 + 20308;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r4,r7,32236
	ctx.r4.s64 = ctx.r7.s64 + 32236;
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f13
	ctx.f1.f64 = double(ctx.f13.s64);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// extsw r11,r5
	r11.s64 = ctx.r5.s32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// addi r4,r4,32220
	ctx.r4.s64 = ctx.r4.s64 + 32220;
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f12
	ctx.f1.f64 = double(ctx.f12.s64);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// addi r4,r9,32192
	ctx.r4.s64 = ctx.r9.s64 + 32192;
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f11
	ctx.f1.f64 = double(ctx.f11.s64);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82542600
	sub_82542600(ctx, base);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r6,32176
	ctx.r4.s64 = ctx.r6.s64 + 32176;
	// lfd f10,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f10
	ctx.f1.f64 = double(ctx.f10.s64);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
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

__attribute__((alias("__imp__sub_82545038"))) PPC_WEAK_FUNC(sub_82545038);
PPC_FUNC_IMPL(__imp__sub_82545038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254503C"))) PPC_WEAK_FUNC(sub_8254503C);
PPC_FUNC_IMPL(__imp__sub_8254503C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82545040"))) PPC_WEAK_FUNC(sub_82545040);
PPC_FUNC_IMPL(__imp__sub_82545040) {
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,32132
	ctx.r9.s64 = r11.s64 + 32132;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82545074
	if (cr6.eq) goto loc_82545074;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82545074:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82545084"))) PPC_WEAK_FUNC(sub_82545084);
PPC_FUNC_IMPL(__imp__sub_82545084) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82545088"))) PPC_WEAK_FUNC(sub_82545088);
PPC_FUNC_IMPL(__imp__sub_82545088) {
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
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r10,r11,32168
	ctx.r10.s64 = r11.s64 + 32168;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82542648
	sub_82542648(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825450d0
	if (cr6.eq) goto loc_825450D0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825450D0:
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

__attribute__((alias("__imp__sub_825450E4"))) PPC_WEAK_FUNC(sub_825450E4);
PPC_FUNC_IMPL(__imp__sub_825450E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825450E8"))) PPC_WEAK_FUNC(sub_825450E8);
PPC_FUNC_IMPL(__imp__sub_825450E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825450EC"))) PPC_WEAK_FUNC(sub_825450EC);
PPC_FUNC_IMPL(__imp__sub_825450EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825450F0"))) PPC_WEAK_FUNC(sub_825450F0);
PPC_FUNC_IMPL(__imp__sub_825450F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825450F8"))) PPC_WEAK_FUNC(sub_825450F8);
PPC_FUNC_IMPL(__imp__sub_825450F8) {
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
	// beq cr6,0x82545128
	if (cr6.eq) goto loc_82545128;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254512c
	if (!cr6.eq) goto loc_8254512C;
loc_82545128:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254512C:
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x824faaf8
	sub_824FAAF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254514C"))) PPC_WEAK_FUNC(sub_8254514C);
PPC_FUNC_IMPL(__imp__sub_8254514C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82545150"))) PPC_WEAK_FUNC(sub_82545150);
PPC_FUNC_IMPL(__imp__sub_82545150) {
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
	// beq cr6,0x82545178
	if (cr6.eq) goto loc_82545178;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254517c
	if (!cr6.eq) goto loc_8254517C;
loc_82545178:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254517C:
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x825107d8
	sub_825107D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82545190"))) PPC_WEAK_FUNC(sub_82545190);
PPC_FUNC_IMPL(__imp__sub_82545190) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82545194"))) PPC_WEAK_FUNC(sub_82545194);
PPC_FUNC_IMPL(__imp__sub_82545194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82545198"))) PPC_WEAK_FUNC(sub_82545198);
PPC_FUNC_IMPL(__imp__sub_82545198) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825451d4
	if (cr6.eq) goto loc_825451D4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825451d8
	if (!cr6.eq) goto loc_825451D8;
loc_825451D4:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_825451D8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r3,21888(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21888);
	// bl 0x82881480
	sub_82881480(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82545208
	if (cr6.eq) goto loc_82545208;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_82545208:
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r25.u32);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r25.u32);
	// beq cr6,0x82545390
	if (cr6.eq) goto loc_82545390;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82545390
	if (!cr6.eq) goto loc_82545390;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r25.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// mr r31,r25
	r31.u64 = r25.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x82545340
	if (!cr6.gt) goto loc_82545340;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r30,r25
	r30.u64 = r25.u64;
	// li r27,4
	r27.s64 = 4;
	// addi r29,r11,14076
	r29.s64 = r11.s64 + 14076;
	// addi r28,r10,32300
	r28.s64 = ctx.r10.s64 + 32300;
loc_82545288:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r6,r11,r30
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8254531c
	if (!cr6.eq) goto loc_8254531C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// stw r21,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r21.u32);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r25.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82756a40
	sub_82756A40(ctx, base);
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8254531c
	if (cr6.eq) goto loc_8254531C;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r25.u32);
loc_8254531C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82545288
	if (cr6.lt) goto loc_82545288;
loc_82545340:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82545390
	if (cr6.eq) goto loc_82545390;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r25.u32);
loc_82545390:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825453b4
	if (cr6.eq) goto loc_825453B4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r25.u32);
loc_825453B4:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x825453c4
	if (cr6.eq) goto loc_825453C4;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_825453C4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_825453C8"))) PPC_WEAK_FUNC(sub_825453C8);
PPC_FUNC_IMPL(__imp__sub_825453C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_825453CC"))) PPC_WEAK_FUNC(sub_825453CC);
PPC_FUNC_IMPL(__imp__sub_825453CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825453D0"))) PPC_WEAK_FUNC(sub_825453D0);
PPC_FUNC_IMPL(__imp__sub_825453D0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r10,r11,32580
	ctx.r10.s64 = r11.s64 + 32580;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r31,5381
	r31.s64 = 5381;
	// li r11,80
	r11.s64 = 80;
loc_825453F4:
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
	// bne cr6,0x825453f4
	if (!cr6.eq) goto loc_825453F4;
	// lis r30,-31970
	r30.s64 = -2095185920;
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82545430
	if (cr6.eq) goto loc_82545430;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82545434
	if (!cr6.eq) goto loc_82545434;
loc_82545430:
	// li r11,0
	r11.s64 = 0;
loc_82545434:
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// bl 0x82517c10
	sub_82517C10(ctx, base);
	// lwz r11,-14756(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82545460
	if (cr6.eq) goto loc_82545460;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82545464
	if (!cr6.eq) goto loc_82545464;
loc_82545460:
	// li r11,0
	r11.s64 = 0;
loc_82545464:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r9,32368
	ctx.r5.s64 = ctx.r9.s64 + 32368;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
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
	// bne cr6,0x825454d8
	if (!cr6.eq) goto loc_825454D8;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,32352
	ctx.r5.s64 = r11.s64 + 32352;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_825454D8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825454EC"))) PPC_WEAK_FUNC(sub_825454EC);
PPC_FUNC_IMPL(__imp__sub_825454EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825454F0"))) PPC_WEAK_FUNC(sub_825454F0);
PPC_FUNC_IMPL(__imp__sub_825454F0) {
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
	// beq cr6,0x82545518
	if (cr6.eq) goto loc_82545518;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254551c
	if (!cr6.eq) goto loc_8254551C;
loc_82545518:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254551C:
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// bl 0x82517a58
	sub_82517A58(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8254553C"))) PPC_WEAK_FUNC(sub_8254553C);
PPC_FUNC_IMPL(__imp__sub_8254553C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82545540"))) PPC_WEAK_FUNC(sub_82545540);
PPC_FUNC_IMPL(__imp__sub_82545540) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
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
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmpw cr6,r8,r3
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, xer);
	// bne cr6,0x8254558c
	if (!cr6.eq) goto loc_8254558C;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824b28c8
	sub_824B28C8(ctx, base);
loc_8254558C:
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

__attribute__((alias("__imp__sub_825455A0"))) PPC_WEAK_FUNC(sub_825455A0);
PPC_FUNC_IMPL(__imp__sub_825455A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825455A4"))) PPC_WEAK_FUNC(sub_825455A4);
PPC_FUNC_IMPL(__imp__sub_825455A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825455A8"))) PPC_WEAK_FUNC(sub_825455A8);
PPC_FUNC_IMPL(__imp__sub_825455A8) {
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
	// beq cr6,0x825455f4
	if (cr6.eq) goto loc_825455F4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,32268
	ctx.r9.s64 = ctx.r10.s64 + 32268;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825455F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82545604"))) PPC_WEAK_FUNC(sub_82545604);
PPC_FUNC_IMPL(__imp__sub_82545604) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82545608"))) PPC_WEAK_FUNC(sub_82545608);
PPC_FUNC_IMPL(__imp__sub_82545608) {
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
	// beq cr6,0x82545654
	if (cr6.eq) goto loc_82545654;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,32292
	ctx.r9.s64 = ctx.r10.s64 + 32292;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_82545654:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82545664"))) PPC_WEAK_FUNC(sub_82545664);
PPC_FUNC_IMPL(__imp__sub_82545664) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82545668"))) PPC_WEAK_FUNC(sub_82545668);
PPC_FUNC_IMPL(__imp__sub_82545668) {
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
	// beq cr6,0x825456b4
	if (cr6.eq) goto loc_825456B4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,32280
	ctx.r9.s64 = ctx.r10.s64 + 32280;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825456B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825456C4"))) PPC_WEAK_FUNC(sub_825456C4);
PPC_FUNC_IMPL(__imp__sub_825456C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825456C8"))) PPC_WEAK_FUNC(sub_825456C8);
PPC_FUNC_IMPL(__imp__sub_825456C8) {
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
	// lis r28,-31970
	r28.s64 = -2095185920;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825456f8
	if (cr6.eq) goto loc_825456F8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825456fc
	if (!cr6.eq) goto loc_825456FC;
loc_825456F8:
	// li r11,0
	r11.s64 = 0;
loc_825456FC:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20240(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20240);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r24,r26,40
	r24.s64 = r26.s64 + 40;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82545754
	if (!cr6.eq) goto loc_82545754;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82545754
	if (!cr6.eq) goto loc_82545754;
	// lwz r11,20240(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20240);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82545754:
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82545770
	if (cr6.eq) goto loc_82545770;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82545774
	if (!cr6.eq) goto loc_82545774;
loc_82545770:
	// li r11,0
	r11.s64 = 0;
loc_82545774:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20236(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20236);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r25,r26,68
	r25.s64 = r26.s64 + 68;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825457cc
	if (!cr6.eq) goto loc_825457CC;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825457cc
	if (!cr6.eq) goto loc_825457CC;
	// lwz r11,20236(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20236);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825457CC:
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825457e8
	if (cr6.eq) goto loc_825457E8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825457ec
	if (!cr6.eq) goto loc_825457EC;
loc_825457E8:
	// li r11,0
	r11.s64 = 0;
loc_825457EC:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20228(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20228);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r27,r26,124
	r27.s64 = r26.s64 + 124;
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
	// bne cr6,0x82545844
	if (!cr6.eq) goto loc_82545844;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82545844
	if (!cr6.eq) goto loc_82545844;
	// lwz r11,20228(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20228);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82545844:
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82545860
	if (cr6.eq) goto loc_82545860;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82545864
	if (!cr6.eq) goto loc_82545864;
loc_82545860:
	// li r11,0
	r11.s64 = 0;
loc_82545864:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20224(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20224);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r28,r26,152
	r28.s64 = r26.s64 + 152;
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
	// bne cr6,0x825458bc
	if (!cr6.eq) goto loc_825458BC;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825458bc
	if (!cr6.eq) goto loc_825458BC;
	// lwz r11,20224(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20224);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825458BC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r26,96
	ctx.r3.s64 = r26.s64 + 96;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8231d958
	sub_8231D958(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825458F0"))) PPC_WEAK_FUNC(sub_825458F0);
PPC_FUNC_IMPL(__imp__sub_825458F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825458F4"))) PPC_WEAK_FUNC(sub_825458F4);
PPC_FUNC_IMPL(__imp__sub_825458F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825458F8"))) PPC_WEAK_FUNC(sub_825458F8);
PPC_FUNC_IMPL(__imp__sub_825458F8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-2368(r1)
	ea = -2368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// stw r3,2388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2388, ctx.r3.u32);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,21888(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21888);
	// stw r9,2208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2208, ctx.r9.u32);
	// bl 0x82881480
	sub_82881480(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82546620
	if (cr6.eq) goto loc_82546620;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
	// lis r29,-31970
	r29.s64 = -2095185920;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254595c
	if (cr6.eq) goto loc_8254595C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82545960
	if (!cr6.eq) goto loc_82545960;
loc_8254595C:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82545960:
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// bl 0x82521560
	sub_82521560(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x822bf460
	sub_822BF460(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82545990
	if (cr6.eq) goto loc_82545990;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82545994
	if (!cr6.eq) goto loc_82545994;
loc_82545990:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82545994:
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// bl 0x82517a58
	sub_82517A58(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// rlwinm r30,r10,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r30.u8);
	// beq cr6,0x825459c8
	if (cr6.eq) goto loc_825459C8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825459cc
	if (!cr6.eq) goto loc_825459CC;
loc_825459C8:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_825459CC:
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r31.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// bl 0x82543418
	sub_82543418(ctx, base);
	// li r25,3
	r25.s64 = 3;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x825460c4
	if (!cr6.gt) goto loc_825460C4;
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// lis r27,-32253
	r27.s64 = -2113732608;
	// stw r11,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, r11.u32);
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
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// lis r30,-32254
	r30.s64 = -2113798144;
	// lis r29,-32254
	r29.s64 = -2113798144;
	// lis r28,-32254
	r28.s64 = -2113798144;
	// addi r27,r27,-32628
	r27.s64 = r27.s64 + -32628;
	// li r26,2
	r26.s64 = 2;
	// addi r24,r11,-32640
	r24.s64 = r11.s64 + -32640;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r27.u32);
	// addi r23,r10,-32656
	r23.s64 = ctx.r10.s64 + -32656;
	// addi r22,r9,-32672
	r22.s64 = ctx.r9.s64 + -32672;
	// addi r21,r8,-32688
	r21.s64 = ctx.r8.s64 + -32688;
	// addi r20,r7,-32704
	r20.s64 = ctx.r7.s64 + -32704;
	// addi r19,r6,-32716
	r19.s64 = ctx.r6.s64 + -32716;
	// addi r18,r5,-32728
	r18.s64 = ctx.r5.s64 + -32728;
	// addi r17,r4,-32740
	r17.s64 = ctx.r4.s64 + -32740;
	// addi r16,r3,-32756
	r16.s64 = ctx.r3.s64 + -32756;
	// addi r15,r30,32764
	r15.s64 = r30.s64 + 32764;
	// addi r14,r29,32756
	r14.s64 = r29.s64 + 32756;
	// addi r28,r28,32740
	r28.s64 = r28.s64 + 32740;
loc_82545AB0:
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82543728
	sub_82543728(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,512(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82545b0c
	if (cr6.eq) goto loc_82545B0C;
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8250ce68
	sub_8250CE68(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82545b10
	goto loc_82545B10;
loc_82545B0C:
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
loc_82545B10:
	// addi r11,r30,40
	r11.s64 = r30.s64 + 40;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r31.u32);
	// li r27,4
	r27.s64 = 4;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, r11.u32);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// stw r27,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, r27.u32);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r7,260(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r6,r7,26,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82545b74
	if (cr6.eq) goto loc_82545B74;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r31.u32);
loc_82545B74:
	// addi r11,r30,72
	r11.s64 = r30.s64 + 72;
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, r31.u32);
	// stw r27,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, r27.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r11,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, r11.u32);
	// addi r6,r1,384
	ctx.r6.s64 = ctx.r1.s64 + 384;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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
	// lwz r7,388(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// rlwinm r6,r7,26,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82545bd4
	if (cr6.eq) goto loc_82545BD4;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// lwz r5,392(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, r31.u32);
loc_82545BD4:
	// stw r29,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, r29.u32);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, r31.u32);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// stw r27,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, r27.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
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
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r8,292(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82545c30
	if (cr6.eq) goto loc_82545C30;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lwz r5,296(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, r31.u32);
loc_82545C30:
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r31.u32);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r25.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// std r10,520(r1)
	PPC_STORE_U64(ctx.r1.u32 + 520, ctx.r10.u64);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lfd f0,520(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 520);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfd f12,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f12.u64);
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r6,180(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r5,r6,26,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82545ca4
	if (cr6.eq) goto loc_82545CA4;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r31.u32);
loc_82545CA4:
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, r31.u32);
	// addi r6,r1,448
	ctx.r6.s64 = ctx.r1.s64 + 448;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// stw r25,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, r25.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// std r10,536(r1)
	PPC_STORE_U64(ctx.r1.u32 + 536, ctx.r10.u64);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lfd f0,536(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 536);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfd f12,456(r1)
	PPC_STORE_U64(ctx.r1.u32 + 456, ctx.f12.u64);
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r6,452(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// rlwinm r5,r6,26,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82545d18
	if (cr6.eq) goto loc_82545D18;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// lwz r5,456(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, r31.u32);
loc_82545D18:
	// lbz r11,120(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 120);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, r31.u32);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// stw r26,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, r26.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r11,328(r1)
	PPC_STORE_U8(ctx.r1.u32 + 328, r11.u8);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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
	// lwz r7,324(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// rlwinm r6,r7,26,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82545d78
	if (cr6.eq) goto loc_82545D78;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lwz r5,328(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, r31.u32);
loc_82545D78:
	// lbz r11,121(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 121);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, r31.u32);
	// addi r6,r1,416
	ctx.r6.s64 = ctx.r1.s64 + 416;
	// stw r26,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, r26.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r11,424(r1)
	PPC_STORE_U8(ctx.r1.u32 + 424, r11.u8);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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
	// lwz r7,420(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// rlwinm r6,r7,26,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82545dd8
	if (cr6.eq) goto loc_82545DD8;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// lwz r5,424(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, r31.u32);
loc_82545DD8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, r31.u32);
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// stw r25,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, r25.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// std r10,552(r1)
	PPC_STORE_U64(ctx.r1.u32 + 552, ctx.r10.u64);
	// lfd f0,552(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 552);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfd f12,360(r1)
	PPC_STORE_U64(ctx.r1.u32 + 360, ctx.f12.u64);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r6,356(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// rlwinm r5,r6,26,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82545e4c
	if (cr6.eq) goto loc_82545E4C;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// lwz r5,360(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, r31.u32);
loc_82545E4C:
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r31.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// stw r25,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r25.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// std r10,528(r1)
	PPC_STORE_U64(ctx.r1.u32 + 528, ctx.r10.u64);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lfd f0,528(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 528);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfd f12,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.f12.u64);
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r6,196(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// rlwinm r5,r6,26,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82545ec0
	if (cr6.eq) goto loc_82545EC0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r5,200(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r31.u32);
loc_82545EC0:
	// lbz r11,122(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 122);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r26.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r11,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, r11.u8);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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
	// lwz r7,212(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r6,r7,26,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82545f20
	if (cr6.eq) goto loc_82545F20;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
loc_82545F20:
	// lbz r11,123(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 123);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r31.u32);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// stw r26,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r26.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r11,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, r11.u8);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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
	// lwz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// rlwinm r6,r7,26,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82545f80
	if (cr6.eq) goto loc_82545F80;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r31.u32);
loc_82545F80:
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r31.u32);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// stw r25,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, r25.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// std r10,544(r1)
	PPC_STORE_U64(ctx.r1.u32 + 544, ctx.r10.u64);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lfd f0,544(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 544);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfd f12,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.f12.u64);
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r6,244(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// rlwinm r5,r6,26,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82545ff4
	if (cr6.eq) goto loc_82545FF4;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r31.u32);
loc_82545FF4:
	// lwz r11,116(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r31.u32);
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// stw r25,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r25.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfd f12,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.f12.u64);
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r6,276(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// rlwinm r5,r6,26,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82546068
	if (cr6.eq) goto loc_82546068;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r5,280(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r31.u32);
loc_82546068:
	// lwz r30,128(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82756a40
	sub_82756A40(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825460a4
	if (cr6.eq) goto loc_825460A4;
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
loc_825460A4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// bl 0x82543418
	sub_82543418(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// blt cr6,0x82545ab0
	if (cr6.lt) goto loc_82545AB0;
	// lbz r30,112(r1)
	r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// lwz r26,136(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_825460C4:
	// li r5,512
	ctx.r5.s64 = 512;
	// lwz r3,2388(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2388);
	// addi r4,r1,1696
	ctx.r4.s64 = ctx.r1.s64 + 1696;
	// bl 0x825453d0
	sub_825453D0(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825460f8
	if (cr6.eq) goto loc_825460F8;
	// bl 0x82543488
	sub_82543488(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8250ce68
	sub_8250CE68(ctx, base);
	// b 0x825460fc
	goto loc_825460FC;
loc_825460F8:
	// bl 0x82543488
	sub_82543488(ctx, base);
loc_825460FC:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// addi r5,r10,32732
	ctx.r5.s64 = ctx.r10.s64 + 32732;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// addi r7,r1,1696
	ctx.r7.s64 = ctx.r1.s64 + 1696;
	// li r29,4
	r29.s64 = 4;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, r31.u32);
	// stw r7,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r7.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r29,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, r29.u32);
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r5,32720
	ctx.r5.s64 = ctx.r5.s64 + 32720;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
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
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r8,308(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82546198
	if (cr6.eq) goto loc_82546198;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lwz r5,312(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r3,304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, r31.u32);
loc_82546198:
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82543458
	sub_82543458(ctx, base);
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r31.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stw r25,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, r25.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfd f12,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.f12.u64);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// addi r5,r10,32704
	ctx.r5.s64 = ctx.r10.s64 + 32704;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r6,340(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// rlwinm r5,r6,26,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82546214
	if (cr6.eq) goto loc_82546214;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// lwz r5,344(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r31.u32);
loc_82546214:
	// stw r30,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, r30.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, r31.u32);
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// stw r29,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, r29.u32);
	// addi r5,r11,32692
	ctx.r5.s64 = r11.s64 + 32692;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
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
	// lwz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// rlwinm r6,r7,26,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82546274
	if (cr6.eq) goto loc_82546274;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// lwz r5,376(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// lwz r3,368(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, r31.u32);
loc_82546274:
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x825434a8
	sub_825434A8(ctx, base);
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, r31.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// addi r6,r1,400
	ctx.r6.s64 = ctx.r1.s64 + 400;
	// stw r25,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, r25.u32);
	// addi r5,r10,32676
	ctx.r5.s64 = ctx.r10.s64 + 32676;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfd f12,408(r1)
	PPC_STORE_U64(ctx.r1.u32 + 408, ctx.f12.u64);
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r6,404(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// rlwinm r5,r6,26,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x825462f0
	if (cr6.eq) goto loc_825462F0;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// lwz r5,408(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r3,400(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, r31.u32);
loc_825462F0:
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x825434b0
	sub_825434B0(ctx, base);
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, r31.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stw r25,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, r25.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfd f12,440(r1)
	PPC_STORE_U64(ctx.r1.u32 + 440, ctx.f12.u64);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r6,r1,432
	ctx.r6.s64 = ctx.r1.s64 + 432;
	// addi r5,r10,32656
	ctx.r5.s64 = ctx.r10.s64 + 32656;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r6,436(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// rlwinm r5,r6,26,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8254636c
	if (cr6.eq) goto loc_8254636C;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// lwz r5,440(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// lwz r3,432(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, r31.u32);
loc_8254636C:
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x825434b8
	sub_825434B8(ctx, base);
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, r31.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stw r25,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, r25.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfd f12,472(r1)
	PPC_STORE_U64(ctx.r1.u32 + 472, ctx.f12.u64);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// addi r5,r10,22980
	ctx.r5.s64 = ctx.r10.s64 + 22980;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r6,468(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// rlwinm r5,r6,26,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x825463e8
	if (cr6.eq) goto loc_825463E8;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// lwz r5,472(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	// lwz r3,464(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, r31.u32);
loc_825463E8:
	// lis r27,-31970
	r27.s64 = -2095185920;
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254640c
	if (cr6.eq) goto loc_8254640C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// bne cr6,0x82546410
	if (!cr6.eq) goto loc_82546410;
loc_8254640C:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82546410:
	// lwz r11,148(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r28,260(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// beq cr6,0x82546430
	if (cr6.eq) goto loc_82546430;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82546434
	if (!cr6.eq) goto loc_82546434;
loc_82546430:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82546434:
	// lwz r3,188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// bl 0x82568bd0
	sub_82568BD0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r31
	r29.u64 = r31.u64;
	// mr r11,r31
	r11.u64 = r31.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8254649c
	if (cr6.lt) goto loc_8254649C;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bge cr6,0x8254649c
	if (!cr6.lt) goto loc_8254649C;
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82546474
	if (cr6.eq) goto loc_82546474;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82546478
	if (!cr6.eq) goto loc_82546478;
loc_82546474:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82546478:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,196(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 196);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x822e1ce8
	sub_822E1CE8(ctx, base);
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, r11.u64);
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r29,160(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_8254649C:
	// extsw r11,r11
	r11.s64 = r11.s32;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, r31.u32);
	// stw r25,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, r25.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stfd f13,504(r1)
	PPC_STORE_U64(ctx.r1.u32 + 504, ctx.f13.u64);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r10,16460
	ctx.r5.s64 = ctx.r10.s64 + 16460;
	// addi r6,r1,496
	ctx.r6.s64 = ctx.r1.s64 + 496;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r6,500(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// rlwinm r5,r6,26,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8254650c
	if (cr6.eq) goto loc_8254650C;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// lwz r5,504(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 504);
	// lwz r3,496(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, r31.u32);
loc_8254650C:
	// extsw r11,r29
	r11.s64 = r29.s32;
	// stw r31,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, r31.u32);
	// stw r25,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, r25.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stfd f13,488(r1)
	PPC_STORE_U64(ctx.r1.u32 + 488, ctx.f13.u64);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r10,16444
	ctx.r5.s64 = ctx.r10.s64 + 16444;
	// addi r6,r1,480
	ctx.r6.s64 = ctx.r1.s64 + 480;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r6,484(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// rlwinm r5,r6,26,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8254657c
	if (cr6.eq) goto loc_8254657C;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// lwz r5,488(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, r31.u32);
loc_8254657C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r10,32632
	ctx.r4.s64 = ctx.r10.s64 + 32632;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r8,32604
	ctx.r4.s64 = ctx.r8.s64 + 32604;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm r8,r9,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825465ec
	if (cr6.eq) goto loc_825465EC;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
loc_825465EC:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82546610
	if (cr6.eq) goto loc_82546610;
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
loc_82546610:
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x825438b0
	sub_825438B0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_82546620:
	// lwz r3,2208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2208);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,2368
	ctx.r1.s64 = ctx.r1.s64 + 2368;
}

__attribute__((alias("__imp__sub_8254662C"))) PPC_WEAK_FUNC(sub_8254662C);
PPC_FUNC_IMPL(__imp__sub_8254662C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_82546630"))) PPC_WEAK_FUNC(sub_82546630);
PPC_FUNC_IMPL(__imp__sub_82546630) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-1360(r1)
	ea = -1360 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,21888(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21888);
	// stw r9,1204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1204, ctx.r9.u32);
	// bl 0x82881480
	sub_82881480(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82546f5c
	if (cr6.eq) goto loc_82546F5C;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8244a4e0
	sub_8244A4E0(ctx, base);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lbz r10,460(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 460);
	// li r31,0
	r31.s64 = 0;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825466a0
	if (cr6.eq) goto loc_825466A0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825466a4
	if (!cr6.eq) goto loc_825466A4;
loc_825466A0:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_825466A4:
	// lwz r14,80(r11)
	r14.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r31.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r31.u32);
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r21)
	ctx.r7.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r6,56(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,812
	ctx.r3.s64 = ctx.r1.s64 + 812;
	// mr r30,r31
	r30.u64 = r31.u64;
	// bl 0x825427f0
	sub_825427F0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r18,4
	r18.s64 = 4;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r15,r11,20016
	r15.s64 = r11.s64 + 20016;
	// ble cr6,0x82546978
	if (!cr6.gt) goto loc_82546978;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r29,r11,-32488
	r29.s64 = r11.s64 + -32488;
	// addi r28,r10,19824
	r28.s64 = ctx.r10.s64 + 19824;
	// addi r27,r9,-32496
	r27.s64 = ctx.r9.s64 + -32496;
loc_8254674C:
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,812
	ctx.r3.s64 = ctx.r1.s64 + 812;
	// bl 0x825427d0
	sub_825427D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82547630
	sub_82547630(ctx, base);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82547200
	sub_82547200(ctx, base);
	// stw r3,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r3.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r31.u32);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// stw r18,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r18.u32);
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// cntlzw r11,r7
	r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825467f8
	if (cr6.eq) goto loc_825467F8;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r5,280(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r31.u32);
loc_825467F8:
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82547208
	sub_82547208(ctx, base);
	// stw r3,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r3.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r31.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r18,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, r18.u32);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r8,260(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8254685c
	if (cr6.eq) goto loc_8254685C;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r31.u32);
loc_8254685C:
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82547210
	sub_82547210(ctx, base);
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r31.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r18,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r18.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825468c0
	if (cr6.eq) goto loc_825468C0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r5,200(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r31.u32);
loc_825468C0:
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82547218
	sub_82547218(ctx, base);
	// stw r3,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r3.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, r31.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r18,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, r18.u32);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r8,292(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82546924
	if (cr6.eq) goto loc_82546924;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lwz r5,296(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, r31.u32);
loc_82546924:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82756a40
	sub_82756A40(ctx, base);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x825471f0
	sub_825471F0(ctx, base);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82546964
	if (cr6.eq) goto loc_82546964;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
loc_82546964:
	// addi r3,r1,812
	ctx.r3.s64 = ctx.r1.s64 + 812;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bl 0x825427f0
	sub_825427F0(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// blt cr6,0x8254674c
	if (cr6.lt) goto loc_8254674C;
loc_82546978:
	// addi r3,r1,388
	ctx.r3.s64 = ctx.r1.s64 + 388;
	// mr r17,r31
	r17.u64 = r31.u64;
	// mr r20,r31
	r20.u64 = r31.u64;
	// bl 0x825428f8
	sub_825428F8(ctx, base);
	// li r28,3
	r28.s64 = 3;
	// li r16,2
	r16.s64 = 2;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82546cec
	if (!cr6.gt) goto loc_82546CEC;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// li r22,15
	r22.s64 = 15;
	// addi r27,r11,-32508
	r27.s64 = r11.s64 + -32508;
	// addi r26,r10,32756
	r26.s64 = ctx.r10.s64 + 32756;
	// addi r25,r9,31824
	r25.s64 = ctx.r9.s64 + 31824;
	// addi r23,r8,16524
	r23.s64 = ctx.r8.s64 + 16524;
	// addi r24,r7,13435
	r24.s64 = ctx.r7.s64 + 13435;
	// addi r19,r6,-32524
	r19.s64 = ctx.r6.s64 + -32524;
loc_825469CC:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,388
	ctx.r3.s64 = ctx.r1.s64 + 388;
	// bl 0x825428e8
	sub_825428E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r11,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, r11.u32);
	// bl 0x8250c6e8
	sub_8250C6E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82546a08
	if (!cr6.eq) goto loc_82546A08;
	// mr r30,r19
	r30.u64 = r19.u64;
loc_82546A08:
	// stw r22,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, r22.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r31,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,848(r1)
	PPC_STORE_U8(ctx.r1.u32 + 848, r31.u8);
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// lbz r11,17(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 17);
	// addi r4,r29,17
	ctx.r4.s64 = r29.s64 + 17;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82546a6c
	if (cr6.eq) goto loc_82546A6C;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_82546A38:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82546a38
	if (!cr6.eq) goto loc_82546A38;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f0b10
	sub_822F0B10(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x822f0b10
	sub_822F0B10(ctx, base);
loc_82546A6C:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82546A70:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82546a70
	if (!cr6.eq) goto loc_82546A70;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f0b10
	sub_822F0B10(ctx, base);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,868(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 868);
	// lwz r11,848(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82546ad0
	if (!cr6.lt) goto loc_82546AD0;
	// addi r11,r1,848
	r11.s64 = ctx.r1.s64 + 848;
loc_82546AD0:
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r11.u32);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r31.u32);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// stw r18,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r18.u32);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r8,228(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82546b2c
	if (cr6.eq) goto loc_82546B2C;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r31.u32);
loc_82546B2C:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r31.u32);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, r28.u32);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// std r10,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.r10.u64);
	// lfd f0,376(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stfd f13,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.f13.u64);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r6,244(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// rlwinm r5,r6,26,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82546b9c
	if (cr6.eq) goto loc_82546B9C;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r31.u32);
loc_82546B9C:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r28.u32);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stfd f13,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.f13.u64);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r5,r6,26,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82546c0c
	if (cr6.eq) goto loc_82546C0C;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
loc_82546C0C:
	// lbz r11,16(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 16);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, r31.u32);
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// stw r16,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, r16.u32);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stb r11,312(r1)
	PPC_STORE_U8(ctx.r1.u32 + 312, r11.u8);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
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
	// lwz r7,308(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// rlwinm r6,r7,26,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82546c6c
	if (cr6.eq) goto loc_82546C6C;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lwz r5,312(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r3,304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, r31.u32);
loc_82546C6C:
	// lbz r11,16(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82546c80
	if (!cr6.eq) goto loc_82546C80;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r17,r11,r17
	r17.u64 = r11.u64 + r17.u64;
loc_82546C80:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82756a40
	sub_82756A40(ctx, base);
	// lwz r11,868(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 868);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82546ca8
	if (cr6.lt) goto loc_82546CA8;
	// lwz r3,848(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82546CA8:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r22,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, r22.u32);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// stw r31,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, r31.u32);
	// stb r31,848(r1)
	PPC_STORE_U8(ctx.r1.u32 + 848, r31.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82546cd8
	if (cr6.eq) goto loc_82546CD8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_82546CD8:
	// addi r3,r1,388
	ctx.r3.s64 = ctx.r1.s64 + 388;
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// bl 0x825428f8
	sub_825428F8(ctx, base);
	// cmpw cr6,r20,r3
	cr6.compare<int32_t>(r20.s32, ctx.r3.s32, xer);
	// blt cr6,0x825469cc
	if (cr6.lt) goto loc_825469CC;
loc_82546CEC:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r10,-32532
	ctx.r5.s64 = ctx.r10.s64 + -32532;
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
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r7,-32544
	ctx.r5.s64 = ctx.r7.s64 + -32544;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// extsw r8,r17
	ctx.r8.s64 = r17.s32;
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, r31.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// std r8,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stfd f13,360(r1)
	PPC_STORE_U64(ctx.r1.u32 + 360, ctx.f13.u64);
	// stw r28,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, r28.u32);
	// addi r5,r7,-32560
	ctx.r5.s64 = ctx.r7.s64 + -32560;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r9,356(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// rlwinm r8,r9,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82546dbc
	if (cr6.eq) goto loc_82546DBC;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// lwz r5,360(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, r31.u32);
loc_82546DBC:
	// lwz r11,836(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r31.u32);
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// extsw r9,r11
	ctx.r9.s64 = r11.s32;
	// stw r28,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, r28.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r10,-32572
	ctx.r5.s64 = ctx.r10.s64 + -32572;
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stfd f13,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.f13.u64);
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// cntlzw r11,r7
	r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82546e30
	if (cr6.eq) goto loc_82546E30;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// lwz r5,344(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r31.u32);
loc_82546E30:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, r31.u32);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// stw r16,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, r16.u32);
	// addi r5,r10,-32584
	ctx.r5.s64 = ctx.r10.s64 + -32584;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stb r11,328(r1)
	PPC_STORE_U8(ctx.r1.u32 + 328, r11.u8);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r6,324(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// rlwinm r5,r6,26,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82546e94
	if (cr6.eq) goto loc_82546E94;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lwz r5,328(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, r31.u32);
loc_82546E94:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r10,32632
	ctx.r4.s64 = ctx.r10.s64 + 32632;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r8,-32616
	ctx.r4.s64 = ctx.r8.s64 + -32616;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r8,r9,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82546f04
	if (cr6.eq) goto loc_82546F04;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
loc_82546F04:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82546f28
	if (cr6.eq) goto loc_82546F28;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r31.u32);
loc_82546F28:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82546f4c
	if (cr6.eq) goto loc_82546F4C;
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
loc_82546F4C:
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82542ba8
	sub_82542BA8(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_82546F5C:
	// lwz r3,1204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1204);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1360
	ctx.r1.s64 = ctx.r1.s64 + 1360;
}

__attribute__((alias("__imp__sub_82546F68"))) PPC_WEAK_FUNC(sub_82546F68);
PPC_FUNC_IMPL(__imp__sub_82546F68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_82546F6C"))) PPC_WEAK_FUNC(sub_82546F6C);
PPC_FUNC_IMPL(__imp__sub_82546F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82546F70"))) PPC_WEAK_FUNC(sub_82546F70);
PPC_FUNC_IMPL(__imp__sub_82546F70) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// addi r9,r11,-32608
	ctx.r9.s64 = r11.s64 + -32608;
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// addi r28,r3,40
	r28.s64 = ctx.r3.s64 + 40;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r26,r31,68
	r26.s64 = r31.s64 + 68;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r25,r31,124
	r25.s64 = r31.s64 + 124;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r24,r31,152
	r24.s64 = r31.s64 + 152;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r30,-31970
	r30.s64 = -2095185920;
	// lis r11,-32172
	r11.s64 = -2108424192;
	// addi r27,r11,22776
	r27.s64 = r11.s64 + 22776;
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254700c
	if (cr6.eq) goto loc_8254700C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82547010
	if (!cr6.eq) goto loc_82547010;
loc_8254700C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82547010:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r23,12(r10)
	r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r29,r11,-3784
	r29.s64 = r11.s64 + -3784;
	// addi r3,r10,11036
	ctx.r3.s64 = ctx.r10.s64 + 11036;
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
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,20240(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20240);
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
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// lis r11,-32172
	r11.s64 = -2108424192;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,26160
	r28.s64 = r11.s64 + 26160;
	// beq cr6,0x82547084
	if (cr6.eq) goto loc_82547084;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82547088
	if (!cr6.eq) goto loc_82547088;
loc_82547084:
	// li r11,0
	r11.s64 = 0;
loc_82547088:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,11084
	ctx.r3.s64 = ctx.r10.s64 + 11084;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,20236(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20236);
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
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// lis r11,-32172
	r11.s64 = -2108424192;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,20816
	r28.s64 = r11.s64 + 20816;
	// beq cr6,0x825470f4
	if (cr6.eq) goto loc_825470F4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825470f8
	if (!cr6.eq) goto loc_825470F8;
loc_825470F4:
	// li r11,0
	r11.s64 = 0;
loc_825470F8:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,11184
	ctx.r3.s64 = ctx.r10.s64 + 11184;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,20228(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20228);
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
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// lis r11,-32172
	r11.s64 = -2108424192;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,21824
	r28.s64 = r11.s64 + 21824;
	// beq cr6,0x82547164
	if (cr6.eq) goto loc_82547164;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82547168
	if (!cr6.eq) goto loc_82547168;
loc_82547164:
	// li r11,0
	r11.s64 = 0;
loc_82547168:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,11236
	ctx.r3.s64 = ctx.r10.s64 + 11236;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20224(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20224);
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
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825471B8"))) PPC_WEAK_FUNC(sub_825471B8);
PPC_FUNC_IMPL(__imp__sub_825471B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_825471BC"))) PPC_WEAK_FUNC(sub_825471BC);
PPC_FUNC_IMPL(__imp__sub_825471BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825471C0"))) PPC_WEAK_FUNC(sub_825471C0);
PPC_FUNC_IMPL(__imp__sub_825471C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-32472
	ctx.r10.s64 = r11.s64 + -32472;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825471D0"))) PPC_WEAK_FUNC(sub_825471D0);
PPC_FUNC_IMPL(__imp__sub_825471D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825471D8"))) PPC_WEAK_FUNC(sub_825471D8);
PPC_FUNC_IMPL(__imp__sub_825471D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825471E0"))) PPC_WEAK_FUNC(sub_825471E0);
PPC_FUNC_IMPL(__imp__sub_825471E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825471E8"))) PPC_WEAK_FUNC(sub_825471E8);
PPC_FUNC_IMPL(__imp__sub_825471E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,196
	ctx.r3.s64 = ctx.r3.s64 + 196;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825471F0"))) PPC_WEAK_FUNC(sub_825471F0);
PPC_FUNC_IMPL(__imp__sub_825471F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-32464
	ctx.r10.s64 = r11.s64 + -32464;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_825471FC"))) PPC_WEAK_FUNC(sub_825471FC);
PPC_FUNC_IMPL(__imp__sub_825471FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82547200"))) PPC_WEAK_FUNC(sub_82547200);
PPC_FUNC_IMPL(__imp__sub_82547200) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
}

__attribute__((alias("__imp__sub_82547204"))) PPC_WEAK_FUNC(sub_82547204);
PPC_FUNC_IMPL(__imp__sub_82547204) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82547208"))) PPC_WEAK_FUNC(sub_82547208);
PPC_FUNC_IMPL(__imp__sub_82547208) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
}

__attribute__((alias("__imp__sub_8254720C"))) PPC_WEAK_FUNC(sub_8254720C);
PPC_FUNC_IMPL(__imp__sub_8254720C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82547210"))) PPC_WEAK_FUNC(sub_82547210);
PPC_FUNC_IMPL(__imp__sub_82547210) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
}

__attribute__((alias("__imp__sub_82547214"))) PPC_WEAK_FUNC(sub_82547214);
PPC_FUNC_IMPL(__imp__sub_82547214) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82547218"))) PPC_WEAK_FUNC(sub_82547218);
PPC_FUNC_IMPL(__imp__sub_82547218) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,196
	ctx.r3.s64 = ctx.r3.s64 + 196;
}

__attribute__((alias("__imp__sub_8254721C"))) PPC_WEAK_FUNC(sub_8254721C);
PPC_FUNC_IMPL(__imp__sub_8254721C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82547220"))) PPC_WEAK_FUNC(sub_82547220);
PPC_FUNC_IMPL(__imp__sub_82547220) {
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
	// beq cr6,0x82547258
	if (cr6.eq) goto loc_82547258;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254725c
	if (!cr6.eq) goto loc_8254725C;
loc_82547258:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254725C:
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
	// addi r5,r10,31928
	ctx.r5.s64 = ctx.r10.s64 + 31928;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
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
	// bne cr6,0x82547304
	if (!cr6.eq) goto loc_82547304;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,14076
	ctx.r5.s64 = r11.s64 + 14076;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,31916
	ctx.r5.s64 = ctx.r10.s64 + 31916;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r30,68
	ctx.r3.s64 = r30.s64 + 68;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_82547304:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
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

__attribute__((alias("__imp__sub_82547328"))) PPC_WEAK_FUNC(sub_82547328);
PPC_FUNC_IMPL(__imp__sub_82547328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254732C"))) PPC_WEAK_FUNC(sub_8254732C);
PPC_FUNC_IMPL(__imp__sub_8254732C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82547330"))) PPC_WEAK_FUNC(sub_82547330);
PPC_FUNC_IMPL(__imp__sub_82547330) {
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
	// lis r31,-31970
	r31.s64 = -2095185920;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254736c
	if (cr6.eq) goto loc_8254736C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// bne cr6,0x82547370
	if (!cr6.eq) goto loc_82547370;
loc_8254736C:
	// li r11,0
	r11.s64 = 0;
loc_82547370:
	// lwz r11,148(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r31,260(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// beq cr6,0x82547390
	if (cr6.eq) goto loc_82547390;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82547394
	if (!cr6.eq) goto loc_82547394;
loc_82547390:
	// li r11,0
	r11.s64 = 0;
loc_82547394:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r9,32064
	ctx.r5.s64 = ctx.r9.s64 + 32064;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
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
	// bne cr6,0x8254743c
	if (!cr6.eq) goto loc_8254743C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,14076
	ctx.r5.s64 = r11.s64 + 14076;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r30,132
	ctx.r3.s64 = r30.s64 + 132;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,4920
	ctx.r5.s64 = ctx.r10.s64 + 4920;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r30,196
	ctx.r3.s64 = r30.s64 + 196;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_8254743C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
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

__attribute__((alias("__imp__sub_82547460"))) PPC_WEAK_FUNC(sub_82547460);
PPC_FUNC_IMPL(__imp__sub_82547460) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82547464"))) PPC_WEAK_FUNC(sub_82547464);
PPC_FUNC_IMPL(__imp__sub_82547464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82547468"))) PPC_WEAK_FUNC(sub_82547468);
PPC_FUNC_IMPL(__imp__sub_82547468) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825474a0
	if (cr6.eq) goto loc_825474A0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825474a4
	if (!cr6.eq) goto loc_825474A4;
loc_825474A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825474A4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r4,r11,14000
	ctx.r4.s64 = r11.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r10,-32448
	ctx.r5.s64 = ctx.r10.s64 + -32448;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
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
	// bne cr6,0x825475bc
	if (!cr6.eq) goto loc_825475BC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,14076
	ctx.r5.s64 = r11.s64 + 14076;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,20024
	ctx.r5.s64 = ctx.r10.s64 + 20024;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,20004
	ctx.r5.s64 = ctx.r9.s64 + 20004;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r8,-32460
	ctx.r5.s64 = ctx.r8.s64 + -32460;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,196
	ctx.r3.s64 = r31.s64 + 196;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_825475BC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
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

__attribute__((alias("__imp__sub_825475E0"))) PPC_WEAK_FUNC(sub_825475E0);
PPC_FUNC_IMPL(__imp__sub_825475E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825475E4"))) PPC_WEAK_FUNC(sub_825475E4);
PPC_FUNC_IMPL(__imp__sub_825475E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825475E8"))) PPC_WEAK_FUNC(sub_825475E8);
PPC_FUNC_IMPL(__imp__sub_825475E8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-32472
	ctx.r10.s64 = r11.s64 + -32472;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82547220
	sub_82547220(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82547330
	sub_82547330(ctx, base);
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

__attribute__((alias("__imp__sub_82547628"))) PPC_WEAK_FUNC(sub_82547628);
PPC_FUNC_IMPL(__imp__sub_82547628) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254762C"))) PPC_WEAK_FUNC(sub_8254762C);
PPC_FUNC_IMPL(__imp__sub_8254762C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82547630"))) PPC_WEAK_FUNC(sub_82547630);
PPC_FUNC_IMPL(__imp__sub_82547630) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-32464
	ctx.r9.s64 = ctx.r10.s64 + -32464;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r11,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, r11.u8);
	// stb r11,132(r3)
	PPC_STORE_U8(ctx.r3.u32 + 132, r11.u8);
	// stb r11,196(r3)
	PPC_STORE_U8(ctx.r3.u32 + 196, r11.u8);
	// bl 0x82547468
	sub_82547468(ctx, base);
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

__attribute__((alias("__imp__sub_8254767C"))) PPC_WEAK_FUNC(sub_8254767C);
PPC_FUNC_IMPL(__imp__sub_8254767C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82547680"))) PPC_WEAK_FUNC(sub_82547680);
PPC_FUNC_IMPL(__imp__sub_82547680) {
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-32472
	ctx.r9.s64 = r11.s64 + -32472;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825476b4
	if (cr6.eq) goto loc_825476B4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825476B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825476C4"))) PPC_WEAK_FUNC(sub_825476C4);
PPC_FUNC_IMPL(__imp__sub_825476C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825476C8"))) PPC_WEAK_FUNC(sub_825476C8);
PPC_FUNC_IMPL(__imp__sub_825476C8) {
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-32464
	ctx.r9.s64 = r11.s64 + -32464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825476fc
	if (cr6.eq) goto loc_825476FC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825476FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254770C"))) PPC_WEAK_FUNC(sub_8254770C);
PPC_FUNC_IMPL(__imp__sub_8254770C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82547710"))) PPC_WEAK_FUNC(sub_82547710);
PPC_FUNC_IMPL(__imp__sub_82547710) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,6144
	ctx.r10.s64 = r11.s64 + 6144;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82543738
	sub_82543738(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,1056(r31)
	PPC_STORE_U32(r31.u32 + 1056, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82547754"))) PPC_WEAK_FUNC(sub_82547754);
PPC_FUNC_IMPL(__imp__sub_82547754) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82547758"))) PPC_WEAK_FUNC(sub_82547758);
PPC_FUNC_IMPL(__imp__sub_82547758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r9,r10,6144
	ctx.r9.s64 = ctx.r10.s64 + 6144;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_8254776C"))) PPC_WEAK_FUNC(sub_8254776C);
PPC_FUNC_IMPL(__imp__sub_8254776C) {
	PPC_FUNC_PROLOGUE();
	// b 0x825437e8
	sub_825437E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82547770"))) PPC_WEAK_FUNC(sub_82547770);
PPC_FUNC_IMPL(__imp__sub_82547770) {
	PPC_FUNC_PROLOGUE();
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
	// lbz r11,271(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 271);
	// li r31,0
	r31.s64 = 0;
	// lbz r30,263(r1)
	r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 263);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lbz r29,255(r1)
	r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 255);
	// lwz r28,244(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stb r31,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, r31.u8);
	// stb r11,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, r11.u8);
	// stb r30,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, r30.u8);
	// stb r29,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, r29.u8);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// bl 0x82543550
	sub_82543550(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825477B0"))) PPC_WEAK_FUNC(sub_825477B0);
PPC_FUNC_IMPL(__imp__sub_825477B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825477B4"))) PPC_WEAK_FUNC(sub_825477B4);
PPC_FUNC_IMPL(__imp__sub_825477B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825477B8"))) PPC_WEAK_FUNC(sub_825477B8);
PPC_FUNC_IMPL(__imp__sub_825477B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x825436d8
	sub_825436D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825477C0"))) PPC_WEAK_FUNC(sub_825477C0);
PPC_FUNC_IMPL(__imp__sub_825477C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82543340
	sub_82543340(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825477C8"))) PPC_WEAK_FUNC(sub_825477C8);
PPC_FUNC_IMPL(__imp__sub_825477C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82543348
	sub_82543348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825477D0"))) PPC_WEAK_FUNC(sub_825477D0);
PPC_FUNC_IMPL(__imp__sub_825477D0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1056(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1056, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825477D8"))) PPC_WEAK_FUNC(sub_825477D8);
PPC_FUNC_IMPL(__imp__sub_825477D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1056(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1056);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825477E0"))) PPC_WEAK_FUNC(sub_825477E0);
PPC_FUNC_IMPL(__imp__sub_825477E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-32356
	ctx.r10.s64 = r11.s64 + -32356;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_825477EC"))) PPC_WEAK_FUNC(sub_825477EC);
PPC_FUNC_IMPL(__imp__sub_825477EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825477F0"))) PPC_WEAK_FUNC(sub_825477F0);
PPC_FUNC_IMPL(__imp__sub_825477F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-32356
	ctx.r10.s64 = r11.s64 + -32356;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82547800"))) PPC_WEAK_FUNC(sub_82547800);
PPC_FUNC_IMPL(__imp__sub_82547800) {
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
	// beq cr6,0x82547830
	if (cr6.eq) goto loc_82547830;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82547834
	if (!cr6.eq) goto loc_82547834;
loc_82547830:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82547834:
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x824f64b8
	sub_824F64B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82547854"))) PPC_WEAK_FUNC(sub_82547854);
PPC_FUNC_IMPL(__imp__sub_82547854) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82547858"))) PPC_WEAK_FUNC(sub_82547858);
PPC_FUNC_IMPL(__imp__sub_82547858) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// beq cr6,0x82547884
	if (cr6.eq) goto loc_82547884;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82547888
	if (!cr6.eq) goto loc_82547888;
loc_82547884:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82547888:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r4,r11,14000
	ctx.r4.s64 = r11.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r9,-32352
	ctx.r5.s64 = ctx.r9.s64 + -32352;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,-22716(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22716);
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82547950
	if (!cr6.eq) goto loc_82547950;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r11,13852
	r29.s64 = r11.s64 + 13852;
loc_825478D0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
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
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82547918
	if (!cr6.gt) goto loc_82547918;
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
loc_82547918:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82547938
	if (cr0.eq) goto loc_82547938;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_82547938:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825478d0
	if (cr6.eq) goto loc_825478D0;
loc_82547950:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82547964"))) PPC_WEAK_FUNC(sub_82547964);
PPC_FUNC_IMPL(__imp__sub_82547964) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82547968"))) PPC_WEAK_FUNC(sub_82547968);
PPC_FUNC_IMPL(__imp__sub_82547968) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82547998
	if (cr6.eq) goto loc_82547998;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254799c
	if (!cr6.eq) goto loc_8254799C;
loc_82547998:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254799C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r4,r11,14000
	ctx.r4.s64 = r11.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r10,-32088
	ctx.r5.s64 = ctx.r10.s64 + -32088;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
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
	// bne cr6,0x82547a5c
	if (!cr6.eq) goto loc_82547A5C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r11,17216
	r29.s64 = r11.s64 + 17216;
loc_825479DC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
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
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82547a24
	if (!cr6.gt) goto loc_82547A24;
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
loc_82547A24:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82547a44
	if (cr0.eq) goto loc_82547A44;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_82547A44:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825479dc
	if (cr6.eq) goto loc_825479DC;
loc_82547A5C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82547A70"))) PPC_WEAK_FUNC(sub_82547A70);
PPC_FUNC_IMPL(__imp__sub_82547A70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82547A74"))) PPC_WEAK_FUNC(sub_82547A74);
PPC_FUNC_IMPL(__imp__sub_82547A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82547A78"))) PPC_WEAK_FUNC(sub_82547A78);
PPC_FUNC_IMPL(__imp__sub_82547A78) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82547ab0
	if (cr6.eq) goto loc_82547AB0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82547ab4
	if (!cr6.eq) goto loc_82547AB4;
loc_82547AB0:
	// li r11,0
	r11.s64 = 0;
loc_82547AB4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r9,-31800
	ctx.r5.s64 = ctx.r9.s64 + -31800;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
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
	// bne cr6,0x82547b78
	if (!cr6.eq) goto loc_82547B78;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r11,13852
	r29.s64 = r11.s64 + 13852;
loc_82547AF8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
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
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82547b40
	if (!cr6.gt) goto loc_82547B40;
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
loc_82547B40:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82547b60
	if (cr0.eq) goto loc_82547B60;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_82547B60:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82547af8
	if (cr6.eq) goto loc_82547AF8;
loc_82547B78:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82547B8C"))) PPC_WEAK_FUNC(sub_82547B8C);
PPC_FUNC_IMPL(__imp__sub_82547B8C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82547B90"))) PPC_WEAK_FUNC(sub_82547B90);
PPC_FUNC_IMPL(__imp__sub_82547B90) {
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
	// lis r31,-31970
	r31.s64 = -2095185920;
	// li r29,0
	r29.s64 = 0;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82547bc0
	if (cr6.eq) goto loc_82547BC0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82547bc4
	if (!cr6.eq) goto loc_82547BC4;
loc_82547BC0:
	// li r11,0
	r11.s64 = 0;
loc_82547BC4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r9,-31608
	ctx.r5.s64 = ctx.r9.s64 + -31608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82547c04
	if (cr6.eq) goto loc_82547C04;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82547c08
	if (!cr6.eq) goto loc_82547C08;
loc_82547C04:
	// li r11,0
	r11.s64 = 0;
loc_82547C08:
	// lwz r11,136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82547c80
	if (!cr6.eq) goto loc_82547C80;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r31,r11,20232
	r31.s64 = r11.s64 + 20232;
loc_82547C28:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82551f18
	sub_82551F18(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82547c7c
	if (!cr6.eq) goto loc_82547C7C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82547c28
	if (cr6.eq) goto loc_82547C28;
	// b 0x82547c80
	goto loc_82547C80;
loc_82547C7C:
	// li r29,1
	r29.s64 = 1;
loc_82547C80:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82547C98"))) PPC_WEAK_FUNC(sub_82547C98);
PPC_FUNC_IMPL(__imp__sub_82547C98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82547C9C"))) PPC_WEAK_FUNC(sub_82547C9C);
PPC_FUNC_IMPL(__imp__sub_82547C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82547CA0"))) PPC_WEAK_FUNC(sub_82547CA0);
PPC_FUNC_IMPL(__imp__sub_82547CA0) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82547ce0
	if (cr6.eq) goto loc_82547CE0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82547ce4
	if (!cr6.eq) goto loc_82547CE4;
loc_82547CE0:
	// li r11,0
	r11.s64 = 0;
loc_82547CE4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r8,-31456
	ctx.r5.s64 = ctx.r8.s64 + -31456;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r7,-22716(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22716);
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
	// bne cr6,0x82547fdc
	if (!cr6.eq) goto loc_82547FDC;
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
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,14076
	ctx.r5.s64 = ctx.r10.s64 + 14076;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82547D7C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82547d7c
	if (!cr6.eq) goto loc_82547D7C;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,-31468
	ctx.r5.s64 = ctx.r10.s64 + -31468;
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
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,-31480
	ctx.r5.s64 = ctx.r9.s64 + -31480;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82547DFC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82547dfc
	if (!cr6.eq) goto loc_82547DFC;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,17280
	ctx.r5.s64 = ctx.r10.s64 + 17280;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82547E50:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82547e50
	if (!cr6.eq) goto loc_82547E50;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,-31496
	ctx.r5.s64 = ctx.r10.s64 + -31496;
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
	// stw r3,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,-31512
	ctx.r5.s64 = ctx.r9.s64 + -31512;
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
	// stw r3,232(r31)
	PPC_STORE_U32(r31.u32 + 232, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r8,-31524
	ctx.r5.s64 = ctx.r8.s64 + -31524;
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
	// stw r3,204(r31)
	PPC_STORE_U32(r31.u32 + 204, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r7,-31532
	ctx.r5.s64 = ctx.r7.s64 + -31532;
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
	// stw r3,208(r31)
	PPC_STORE_U32(r31.u32 + 208, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r6,-31544
	ctx.r5.s64 = ctx.r6.s64 + -31544;
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
	// stw r3,212(r31)
	PPC_STORE_U32(r31.u32 + 212, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r5,12932
	ctx.r5.s64 = ctx.r5.s64 + 12932;
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
	// stw r3,216(r31)
	PPC_STORE_U32(r31.u32 + 216, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r3,-29204
	ctx.r5.s64 = ctx.r3.s64 + -29204;
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
	// stw r3,220(r31)
	PPC_STORE_U32(r31.u32 + 220, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-29216
	ctx.r5.s64 = r11.s64 + -29216;
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
	// stw r3,224(r31)
	PPC_STORE_U32(r31.u32 + 224, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_82547FDC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
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

__attribute__((alias("__imp__sub_82548000"))) PPC_WEAK_FUNC(sub_82548000);
PPC_FUNC_IMPL(__imp__sub_82548000) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82548004"))) PPC_WEAK_FUNC(sub_82548004);
PPC_FUNC_IMPL(__imp__sub_82548004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82548008"))) PPC_WEAK_FUNC(sub_82548008);
PPC_FUNC_IMPL(__imp__sub_82548008) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82548044
	if (cr6.eq) goto loc_82548044;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82548048
	if (!cr6.eq) goto loc_82548048;
loc_82548044:
	// li r11,0
	r11.s64 = 0;
loc_82548048:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r5,r9,-30296
	ctx.r5.s64 = ctx.r9.s64 + -30296;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
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
	// bne cr6,0x82548160
	if (!cr6.eq) goto loc_82548160;
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
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,17216
	ctx.r5.s64 = ctx.r10.s64 + 17216;
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
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,17280
	ctx.r5.s64 = ctx.r9.s64 + 17280;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82548108:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82548108
	if (!cr6.eq) goto loc_82548108;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,20232
	ctx.r5.s64 = ctx.r10.s64 + 20232;
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
	// stw r3,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_82548160:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r5,r11,-30384
	ctx.r5.s64 = r11.s64 + -30384;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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
	// bne cr6,0x825481f0
	if (!cr6.eq) goto loc_825481F0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-30408
	ctx.r5.s64 = r11.s64 + -30408;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825481C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825481c4
	if (!cr6.eq) goto loc_825481C4;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_825481F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82548204"))) PPC_WEAK_FUNC(sub_82548204);
PPC_FUNC_IMPL(__imp__sub_82548204) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82548208"))) PPC_WEAK_FUNC(sub_82548208);
PPC_FUNC_IMPL(__imp__sub_82548208) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82548248
	if (cr6.eq) goto loc_82548248;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254824c
	if (!cr6.eq) goto loc_8254824C;
loc_82548248:
	// li r11,0
	r11.s64 = 0;
loc_8254824C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r9,-30184
	ctx.r5.s64 = ctx.r9.s64 + -30184;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
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
	// bne cr6,0x8254838c
	if (!cr6.eq) goto loc_8254838C;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,21036
	ctx.r5.s64 = r11.s64 + 21036;
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
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,14076
	ctx.r5.s64 = ctx.r10.s64 + 14076;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825482E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825482e0
	if (!cr6.eq) goto loc_825482E0;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,17280
	ctx.r5.s64 = ctx.r10.s64 + 17280;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82548334:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82548334
	if (!cr6.eq) goto loc_82548334;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,21820
	ctx.r5.s64 = ctx.r10.s64 + 21820;
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
	// stw r3,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_8254838C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825483A0"))) PPC_WEAK_FUNC(sub_825483A0);
PPC_FUNC_IMPL(__imp__sub_825483A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825483A4"))) PPC_WEAK_FUNC(sub_825483A4);
PPC_FUNC_IMPL(__imp__sub_825483A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825483A8"))) PPC_WEAK_FUNC(sub_825483A8);
PPC_FUNC_IMPL(__imp__sub_825483A8) {
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-32356
	ctx.r9.s64 = r11.s64 + -32356;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825483dc
	if (cr6.eq) goto loc_825483DC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825483DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825483EC"))) PPC_WEAK_FUNC(sub_825483EC);
PPC_FUNC_IMPL(__imp__sub_825483EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825483F0"))) PPC_WEAK_FUNC(sub_825483F0);
PPC_FUNC_IMPL(__imp__sub_825483F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825483F4"))) PPC_WEAK_FUNC(sub_825483F4);
PPC_FUNC_IMPL(__imp__sub_825483F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825483F8"))) PPC_WEAK_FUNC(sub_825483F8);
PPC_FUNC_IMPL(__imp__sub_825483F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825483FC"))) PPC_WEAK_FUNC(sub_825483FC);
PPC_FUNC_IMPL(__imp__sub_825483FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82548400"))) PPC_WEAK_FUNC(sub_82548400);
PPC_FUNC_IMPL(__imp__sub_82548400) {
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
	// beq cr6,0x82548430
	if (cr6.eq) goto loc_82548430;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82548434
	if (!cr6.eq) goto loc_82548434;
loc_82548430:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82548434:
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x824f9a38
	sub_824F9A38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82548454"))) PPC_WEAK_FUNC(sub_82548454);
PPC_FUNC_IMPL(__imp__sub_82548454) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82548458"))) PPC_WEAK_FUNC(sub_82548458);
PPC_FUNC_IMPL(__imp__sub_82548458) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8254847c
	if (cr6.lt) goto loc_8254847C;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82548480
	if (cr6.lt) goto loc_82548480;
loc_8254847C:
	// li r11,0
	r11.s64 = 0;
loc_82548480:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82548554
	if (cr6.eq) goto loc_82548554;
	// lis r30,-31970
	r30.s64 = -2095185920;
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825484a8
	if (cr6.eq) goto loc_825484A8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825484ac
	if (!cr6.eq) goto loc_825484AC;
loc_825484A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825484AC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r4,r11,14000
	ctx.r4.s64 = r11.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r10,-29792
	ctx.r5.s64 = ctx.r10.s64 + -29792;
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
	// bne cr6,0x82548544
	if (!cr6.eq) goto loc_82548544;
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82548528
	if (cr6.eq) goto loc_82548528;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254852c
	if (!cr6.eq) goto loc_8254852C;
loc_82548528:
	// li r11,0
	r11.s64 = 0;
loc_8254852C:
	// addi r10,r29,28
	ctx.r10.s64 = r29.s64 + 28;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwz r3,88(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// bl 0x82541810
	sub_82541810(ctx, base);
loc_82548544:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
loc_82548554:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82548558"))) PPC_WEAK_FUNC(sub_82548558);
PPC_FUNC_IMPL(__imp__sub_82548558) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8254855C"))) PPC_WEAK_FUNC(sub_8254855C);
PPC_FUNC_IMPL(__imp__sub_8254855C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82548560"))) PPC_WEAK_FUNC(sub_82548560);
PPC_FUNC_IMPL(__imp__sub_82548560) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// blt cr6,0x8254859c
	if (cr6.lt) goto loc_8254859C;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x825485a0
	if (cr6.lt) goto loc_825485A0;
loc_8254859C:
	// li r11,0
	r11.s64 = 0;
loc_825485A0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82548740
	if (cr6.eq) goto loc_82548740;
	// lis r29,-31970
	r29.s64 = -2095185920;
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825485d0
	if (cr6.eq) goto loc_825485D0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// bne cr6,0x825485d4
	if (!cr6.eq) goto loc_825485D4;
loc_825485D0:
	// li r11,0
	r11.s64 = 0;
loc_825485D4:
	// addi r10,r28,28
	ctx.r10.s64 = r28.s64 + 28;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// rlwinm r27,r10,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r27,r11
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// lwz r30,88(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// beq cr6,0x825485fc
	if (cr6.eq) goto loc_825485FC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82548600
	if (!cr6.eq) goto loc_82548600;
loc_825485FC:
	// li r11,0
	r11.s64 = 0;
loc_82548600:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825416c8
	sub_825416C8(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r9,-29724
	ctx.r5.s64 = ctx.r9.s64 + -29724;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db70
	sub_8272DB70(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82548700
	if (cr6.eq) goto loc_82548700;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82548700
	if (!cr6.eq) goto loc_82548700;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,20232
	ctx.r5.s64 = r11.s64 + 20232;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825486a0
	if (cr6.eq) goto loc_825486A0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825486a4
	if (!cr6.eq) goto loc_825486A4;
loc_825486A0:
	// li r11,0
	r11.s64 = 0;
loc_825486A4:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82549af0
	sub_82549AF0(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825486f8
	if (!cr6.eq) goto loc_825486F8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82548458
	sub_82548458(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825486ec
	if (cr6.eq) goto loc_825486EC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825486f0
	if (!cr6.eq) goto loc_825486F0;
loc_825486EC:
	// li r11,0
	r11.s64 = 0;
loc_825486F0:
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// lwz r30,88(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 88);
loc_825486F8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
loc_82548700:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825416c8
	sub_825416C8(ctx, base);
	// stw r3,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82541418
	sub_82541418(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r25)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r25.u32 + 4, temp.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r25.u32 + 8, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r25)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r25.u32 + 12, temp.u32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r25)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r25.u32 + 16, temp.u32);
	// b 0x825487ec
	goto loc_825487EC;
loc_82548740:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825487f4
	if (cr6.lt) goto loc_825487F4;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82548768
	if (cr6.eq) goto loc_82548768;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254876c
	if (!cr6.eq) goto loc_8254876C;
loc_82548768:
	// li r11,0
	r11.s64 = 0;
loc_8254876C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r9,-29768
	ctx.r5.s64 = ctx.r9.s64 + -29768;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db70
	sub_8272DB70(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825487ec
	if (cr6.eq) goto loc_825487EC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825487e4
	if (!cr6.eq) goto loc_825487E4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,13852
	ctx.r5.s64 = r11.s64 + 13852;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_825487E4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
loc_825487EC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
loc_825487F4:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_82548800"))) PPC_WEAK_FUNC(sub_82548800);
PPC_FUNC_IMPL(__imp__sub_82548800) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82548804"))) PPC_WEAK_FUNC(sub_82548804);
PPC_FUNC_IMPL(__imp__sub_82548804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82548808"))) PPC_WEAK_FUNC(sub_82548808);
PPC_FUNC_IMPL(__imp__sub_82548808) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82548834
	if (cr6.lt) goto loc_82548834;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82548838
	if (cr6.lt) goto loc_82548838;
loc_82548834:
	// li r11,0
	r11.s64 = 0;
loc_82548838:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82548890
	if (cr6.eq) goto loc_82548890;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82548864
	if (cr6.eq) goto loc_82548864;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82548868
	if (!cr6.eq) goto loc_82548868;
loc_82548864:
	// li r11,0
	r11.s64 = 0;
loc_82548868:
	// addi r10,r31,28
	ctx.r10.s64 = r31.s64 + 28;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwz r31,88(r8)
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82541810
	sub_82541810(ctx, base);
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82541900
	sub_82541900(ctx, base);
loc_82548890:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82548894"))) PPC_WEAK_FUNC(sub_82548894);
PPC_FUNC_IMPL(__imp__sub_82548894) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82548898"))) PPC_WEAK_FUNC(sub_82548898);
PPC_FUNC_IMPL(__imp__sub_82548898) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x825488c4
	if (cr6.lt) goto loc_825488C4;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x825488c8
	if (cr6.lt) goto loc_825488C8;
loc_825488C4:
	// li r11,0
	r11.s64 = 0;
loc_825488C8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825488dc
	if (cr6.eq) goto loc_825488DC;
	// li r6,-1
	ctx.r6.s64 = -1;
	// b 0x82548910
	goto loc_82548910;
loc_825488DC:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825488fc
	if (cr6.eq) goto loc_825488FC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82548900
	if (!cr6.eq) goto loc_82548900;
loc_825488FC:
	// li r11,0
	r11.s64 = 0;
loc_82548900:
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lwz r3,636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 636);
	// bl 0x8255ec48
	sub_8255EC48(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_82548910:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82548560
	sub_82548560(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82548924"))) PPC_WEAK_FUNC(sub_82548924);
PPC_FUNC_IMPL(__imp__sub_82548924) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82548928"))) PPC_WEAK_FUNC(sub_82548928);
PPC_FUNC_IMPL(__imp__sub_82548928) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82548948
	if (cr6.lt) goto loc_82548948;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x8254894c
	if (cr6.lt) goto loc_8254894C;
loc_82548948:
	// li r11,0
	r11.s64 = 0;
loc_8254894C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// beq cr6,0x825489ac
	if (cr6.eq) goto loc_825489AC;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r11,-22696(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22696);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r9,r10,-22712
	ctx.r9.s64 = ctx.r10.s64 + -22712;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,-22712(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22712);
	f0.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82548560
	sub_82548560(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_825489AC:
	// lwz r3,-22696(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -22696);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825489BC"))) PPC_WEAK_FUNC(sub_825489BC);
PPC_FUNC_IMPL(__imp__sub_825489BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825489C0"))) PPC_WEAK_FUNC(sub_825489C0);
PPC_FUNC_IMPL(__imp__sub_825489C0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// blt cr6,0x825489fc
	if (cr6.lt) goto loc_825489FC;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82548a00
	if (cr6.lt) goto loc_82548A00;
loc_825489FC:
	// li r11,0
	r11.s64 = 0;
loc_82548A00:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// beq cr6,0x82548a78
	if (cr6.eq) goto loc_82548A78;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82548a2c
	if (cr6.eq) goto loc_82548A2C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82548a30
	if (!cr6.eq) goto loc_82548A30;
loc_82548A2C:
	// li r11,0
	r11.s64 = 0;
loc_82548A30:
	// addi r10,r30,28
	ctx.r10.s64 = r30.s64 + 28;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwz r30,88(r8)
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825416c8
	sub_825416C8(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82541418
	sub_82541418(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82548ad0
	goto loc_82548AD0;
loc_82548A78:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82548a90
	if (cr6.eq) goto loc_82548A90;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82548a94
	if (!cr6.eq) goto loc_82548A94;
loc_82548A90:
	// li r11,0
	r11.s64 = 0;
loc_82548A94:
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 636);
	// bl 0x8255ec50
	sub_8255EC50(ctx, base);
	// addi r10,r3,84
	ctx.r10.s64 = ctx.r3.s64 + 84;
	// addi r11,r31,28
	r11.s64 = r31.s64 + 28;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f11,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
loc_82548AD0:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f11,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
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

__attribute__((alias("__imp__sub_82548AF0"))) PPC_WEAK_FUNC(sub_82548AF0);
PPC_FUNC_IMPL(__imp__sub_82548AF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82548AF4"))) PPC_WEAK_FUNC(sub_82548AF4);
PPC_FUNC_IMPL(__imp__sub_82548AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82548AF8"))) PPC_WEAK_FUNC(sub_82548AF8);
PPC_FUNC_IMPL(__imp__sub_82548AF8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82548b30
	if (cr6.eq) goto loc_82548B30;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82548b34
	if (!cr6.eq) goto loc_82548B34;
loc_82548B30:
	// li r11,0
	r11.s64 = 0;
loc_82548B34:
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 636);
	// bl 0x8255eb18
	sub_8255EB18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825489c0
	sub_825489C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82548B58"))) PPC_WEAK_FUNC(sub_82548B58);
PPC_FUNC_IMPL(__imp__sub_82548B58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82548B5C"))) PPC_WEAK_FUNC(sub_82548B5C);
PPC_FUNC_IMPL(__imp__sub_82548B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82548B60"))) PPC_WEAK_FUNC(sub_82548B60);
PPC_FUNC_IMPL(__imp__sub_82548B60) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82548b90
	if (cr6.eq) goto loc_82548B90;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82548b94
	if (!cr6.eq) goto loc_82548B94;
loc_82548B90:
	// li r11,0
	r11.s64 = 0;
loc_82548B94:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,22052(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 22052);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82548be8
	if (!cr6.eq) goto loc_82548BE8;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82548be8
	if (!cr6.eq) goto loc_82548BE8;
	// lwz r11,22052(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 22052);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82548BE8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82548BF4"))) PPC_WEAK_FUNC(sub_82548BF4);
PPC_FUNC_IMPL(__imp__sub_82548BF4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82548BF8"))) PPC_WEAK_FUNC(sub_82548BF8);
PPC_FUNC_IMPL(__imp__sub_82548BF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// blt cr6,0x82548c34
	if (cr6.lt) goto loc_82548C34;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82548c38
	if (cr6.lt) goto loc_82548C38;
loc_82548C34:
	// li r11,0
	r11.s64 = 0;
loc_82548C38:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82548c98
	if (cr6.eq) goto loc_82548C98;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82548c64
	if (cr6.eq) goto loc_82548C64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82548c68
	if (!cr6.eq) goto loc_82548C68;
loc_82548C64:
	// li r11,0
	r11.s64 = 0;
loc_82548C68:
	// addi r10,r30,28
	ctx.r10.s64 = r30.s64 + 28;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwz r31,88(r8)
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82541810
	sub_82541810(ctx, base);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r7,-22712
	ctx.r4.s64 = ctx.r7.s64 + -22712;
	// bl 0x82541900
	sub_82541900(ctx, base);
	// b 0x82548d78
	goto loc_82548D78;
loc_82548C98:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r31,-31970
	r31.s64 = -2095185920;
	// addi r10,r11,-22712
	ctx.r10.s64 = r11.s64 + -22712;
	// lfs f31,-22712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22712);
	f31.f64 = double(temp.f32);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// lfs f30,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f30.f64 = double(temp.f32);
	// lfs f29,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f29.f64 = double(temp.f32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lfs f28,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	f28.f64 = double(temp.f32);
	// beq cr6,0x82548cd0
	if (cr6.eq) goto loc_82548CD0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82548cd4
	if (!cr6.eq) goto loc_82548CD4;
loc_82548CD0:
	// li r11,0
	r11.s64 = 0;
loc_82548CD4:
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 636);
	// bl 0x8255ec50
	sub_8255EC50(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// stfs f31,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// stfs f29,116(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stfs f28,120(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,22048(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22048);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x82548d28
	if (cr6.eq) goto loc_82548D28;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82548d2c
	if (!cr6.eq) goto loc_82548D2C;
loc_82548D28:
	// li r11,0
	r11.s64 = 0;
loc_82548D2C:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
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
	// beq cr6,0x82548d78
	if (cr6.eq) goto loc_82548D78;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82548d78
	if (!cr6.eq) goto loc_82548D78;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82548D78:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x828eab44
}

__attribute__((alias("__imp__sub_82548D8C"))) PPC_WEAK_FUNC(sub_82548D8C);
PPC_FUNC_IMPL(__imp__sub_82548D8C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82548D90"))) PPC_WEAK_FUNC(sub_82548D90);
PPC_FUNC_IMPL(__imp__sub_82548D90) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lis r28,-31970
	r28.s64 = -2095185920;
	// addi r8,r9,-22712
	ctx.r8.s64 = ctx.r9.s64 + -22712;
	// lwz r7,24192(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,-22696(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22696);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f0,-22712(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22712);
	f0.f64 = double(temp.f32);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// lfs f12,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// beq cr6,0x82548e04
	if (cr6.eq) goto loc_82548E04;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82548e08
	if (!cr6.eq) goto loc_82548E08;
loc_82548E04:
	// li r11,0
	r11.s64 = 0;
loc_82548E08:
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 636);
	// bl 0x8255ec50
	sub_8255EC50(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x82548e30
	if (cr6.lt) goto loc_82548E30;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82548e34
	if (cr6.lt) goto loc_82548E34;
loc_82548E30:
	// li r11,0
	r11.s64 = 0;
loc_82548E34:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82548e6c
	if (cr6.eq) goto loc_82548E6C;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82548560
	sub_82548560(ctx, base);
	// lfs f11,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// b 0x82548e80
	goto loc_82548E80;
loc_82548E6C:
	// lwz r11,84(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 84);
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	f0.f64 = double(temp.f32);
	// lfs f13,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,60(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
loc_82548E80:
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// stfs f0,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f11,152(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r11,22048(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22048);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// beq cr6,0x82548ec4
	if (cr6.eq) goto loc_82548EC4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82548ec8
	if (!cr6.eq) goto loc_82548EC8;
loc_82548EC4:
	// li r11,0
	r11.s64 = 0;
loc_82548EC8:
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
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
	// beq cr6,0x82548f14
	if (cr6.eq) goto loc_82548F14;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82548f14
	if (!cr6.eq) goto loc_82548F14;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82548F14:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_82548F20"))) PPC_WEAK_FUNC(sub_82548F20);
PPC_FUNC_IMPL(__imp__sub_82548F20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82548F24"))) PPC_WEAK_FUNC(sub_82548F24);
PPC_FUNC_IMPL(__imp__sub_82548F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82548F28"))) PPC_WEAK_FUNC(sub_82548F28);
PPC_FUNC_IMPL(__imp__sub_82548F28) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// blt cr6,0x82548f5c
	if (cr6.lt) goto loc_82548F5C;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82548f60
	if (cr6.lt) goto loc_82548F60;
loc_82548F5C:
	// li r11,0
	r11.s64 = 0;
loc_82548F60:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82548fd4
	if (cr6.eq) goto loc_82548FD4;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82548f8c
	if (cr6.eq) goto loc_82548F8C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82548f90
	if (!cr6.eq) goto loc_82548F90;
loc_82548F8C:
	// li r11,0
	r11.s64 = 0;
loc_82548F90:
	// addi r10,r30,28
	ctx.r10.s64 = r30.s64 + 28;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwz r31,88(r8)
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82541810
	sub_82541810(ctx, base);
	// addi r4,r29,32
	ctx.r4.s64 = r29.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82541900
	sub_82541900(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82548d90
	sub_82548D90(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e946c
	return;
loc_82548FD4:
	// lis r31,-31970
	r31.s64 = -2095185920;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82548ff4
	if (cr6.eq) goto loc_82548FF4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82548ff8
	if (!cr6.eq) goto loc_82548FF8;
loc_82548FF4:
	// li r11,0
	r11.s64 = 0;
loc_82548FF8:
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 636);
	// bl 0x8255ec50
	sub_8255EC50(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,28(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 32);
	f0.f64 = double(temp.f32);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// lfs f13,36(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r29,28
	r11.s64 = r29.s64 + 28;
	// lfs f11,44(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r10,22048(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22048);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x82549064
	if (cr6.eq) goto loc_82549064;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82549068
	if (!cr6.eq) goto loc_82549068;
loc_82549064:
	// li r11,0
	r11.s64 = 0;
loc_82549068:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
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
	// beq cr6,0x825490b4
	if (cr6.eq) goto loc_825490B4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825490b4
	if (!cr6.eq) goto loc_825490B4;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825490B4:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825490C0"))) PPC_WEAK_FUNC(sub_825490C0);
PPC_FUNC_IMPL(__imp__sub_825490C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825490C4"))) PPC_WEAK_FUNC(sub_825490C4);
PPC_FUNC_IMPL(__imp__sub_825490C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825490C8"))) PPC_WEAK_FUNC(sub_825490C8);
PPC_FUNC_IMPL(__imp__sub_825490C8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82549100
	if (cr6.eq) goto loc_82549100;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82549104
	if (!cr6.eq) goto loc_82549104;
loc_82549100:
	// li r11,0
	r11.s64 = 0;
loc_82549104:
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 636);
	// bl 0x8255eb78
	sub_8255EB78(ctx, base);
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82549130
	if (cr6.eq) goto loc_82549130;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82548f28
	sub_82548F28(ctx, base);
loc_82549130:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82549134"))) PPC_WEAK_FUNC(sub_82549134);
PPC_FUNC_IMPL(__imp__sub_82549134) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82549138"))) PPC_WEAK_FUNC(sub_82549138);
PPC_FUNC_IMPL(__imp__sub_82549138) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r9,r10,-22712
	ctx.r9.s64 = ctx.r10.s64 + -22712;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,-22696(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22696);
	// lfs f0,-22712(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22712);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82548898
	sub_82548898(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// lwz r3,-14756(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825491ac
	if (cr6.eq) goto loc_825491AC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825491b0
	if (!cr6.eq) goto loc_825491B0;
loc_825491AC:
	// li r11,0
	r11.s64 = 0;
loc_825491B0:
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 636);
	// bl 0x8255ec50
	sub_8255EC50(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,22048(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22048);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x82549358
	sub_82549358(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254921C"))) PPC_WEAK_FUNC(sub_8254921C);
PPC_FUNC_IMPL(__imp__sub_8254921C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82549220"))) PPC_WEAK_FUNC(sub_82549220);
PPC_FUNC_IMPL(__imp__sub_82549220) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r11,r31,28
	r11.s64 = r31.s64 + 28;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r6,r8,-22712
	ctx.r6.s64 = ctx.r8.s64 + -22712;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// addi r30,r10,-28360
	r30.s64 = ctx.r10.s64 + -28360;
	// lwz r11,-22696(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22696);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// lfs f0,-22712(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -22712);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f0,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// lwz r3,-14756(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82549294
	if (cr6.eq) goto loc_82549294;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82549298
	if (!cr6.eq) goto loc_82549298;
loc_82549294:
	// li r11,0
	r11.s64 = 0;
loc_82549298:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,-27280
	ctx.r3.s64 = ctx.r9.s64 + -27280;
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
	// lwz r11,22052(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22052);
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
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825492EC"))) PPC_WEAK_FUNC(sub_825492EC);
PPC_FUNC_IMPL(__imp__sub_825492EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825492F0"))) PPC_WEAK_FUNC(sub_825492F0);
PPC_FUNC_IMPL(__imp__sub_825492F0) {
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
	// beq cr6,0x82549320
	if (cr6.eq) goto loc_82549320;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82549324
	if (!cr6.eq) goto loc_82549324;
loc_82549320:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82549324:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82549340
	if (cr6.eq) goto loc_82549340;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82379520
	sub_82379520(ctx, base);
loc_82549340:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82549350"))) PPC_WEAK_FUNC(sub_82549350);
PPC_FUNC_IMPL(__imp__sub_82549350) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82549354"))) PPC_WEAK_FUNC(sub_82549354);
PPC_FUNC_IMPL(__imp__sub_82549354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82549358"))) PPC_WEAK_FUNC(sub_82549358);
PPC_FUNC_IMPL(__imp__sub_82549358) {
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
	// beq cr6,0x825493f0
	if (cr6.eq) goto loc_825493F0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r10,-29676
	ctx.r9.s64 = ctx.r10.s64 + -29676;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r9,r31,8
	ctx.r9.s64 = r31.s64 + 8;
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r6,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r6.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r5,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r5.u32);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,40(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// stw r8,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r8.u32);
	// stw r8,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r8.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825493F0:
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

__attribute__((alias("__imp__sub_82549404"))) PPC_WEAK_FUNC(sub_82549404);
PPC_FUNC_IMPL(__imp__sub_82549404) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82549408"))) PPC_WEAK_FUNC(sub_82549408);
PPC_FUNC_IMPL(__imp__sub_82549408) {
	PPC_FUNC_PROLOGUE();
	// b 0x826dade8
	sub_826DADE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254940C"))) PPC_WEAK_FUNC(sub_8254940C);
PPC_FUNC_IMPL(__imp__sub_8254940C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82549410"))) PPC_WEAK_FUNC(sub_82549410);
PPC_FUNC_IMPL(__imp__sub_82549410) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r10,r31,52
	ctx.r10.s64 = r31.s64 + 52;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,18436(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18436);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwz r3,80(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// bl 0x8253c6f0
	sub_8253C6F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82549460"))) PPC_WEAK_FUNC(sub_82549460);
PPC_FUNC_IMPL(__imp__sub_82549460) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82549464"))) PPC_WEAK_FUNC(sub_82549464);
PPC_FUNC_IMPL(__imp__sub_82549464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82549468"))) PPC_WEAK_FUNC(sub_82549468);
PPC_FUNC_IMPL(__imp__sub_82549468) {
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
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r10,r31,52
	ctx.r10.s64 = r31.s64 + 52;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,18436(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18436);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwz r3,80(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// bl 0x8253c820
	sub_8253C820(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
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

__attribute__((alias("__imp__sub_825494C8"))) PPC_WEAK_FUNC(sub_825494C8);
PPC_FUNC_IMPL(__imp__sub_825494C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825494CC"))) PPC_WEAK_FUNC(sub_825494CC);
PPC_FUNC_IMPL(__imp__sub_825494CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825494D0"))) PPC_WEAK_FUNC(sub_825494D0);
PPC_FUNC_IMPL(__imp__sub_825494D0) {
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
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r4,r4,65280
	ctx.r4.u64 = ctx.r4.u64 | 65280;
	// bl 0x826dadb8
	sub_826DADB8(ctx, base);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254950c
	if (cr6.eq) goto loc_8254950C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82549510
	if (!cr6.eq) goto loc_82549510;
loc_8254950C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82549510:
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x824fb698
	sub_824FB698(ctx, base);
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

__attribute__((alias("__imp__sub_82549534"))) PPC_WEAK_FUNC(sub_82549534);
PPC_FUNC_IMPL(__imp__sub_82549534) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82549538"))) PPC_WEAK_FUNC(sub_82549538);
PPC_FUNC_IMPL(__imp__sub_82549538) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8254958c
	if (cr6.eq) goto loc_8254958C;
loc_82549570:
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
	// bne cr6,0x82549570
	if (!cr6.eq) goto loc_82549570;
loc_8254958C:
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// lwz r11,19292(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19292);
	// lwz r3,20992(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20992);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82320d20
	sub_82320D20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82549728
	sub_82549728(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825495C4"))) PPC_WEAK_FUNC(sub_825495C4);
PPC_FUNC_IMPL(__imp__sub_825495C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825495C8"))) PPC_WEAK_FUNC(sub_825495C8);
PPC_FUNC_IMPL(__imp__sub_825495C8) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82549600
	if (cr6.eq) goto loc_82549600;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82549604
	if (!cr6.eq) goto loc_82549604;
loc_82549600:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82549604:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r4,r11,14000
	ctx.r4.s64 = r11.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r10,-29644
	ctx.r5.s64 = ctx.r10.s64 + -29644;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
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
	// bne cr6,0x825496a0
	if (!cr6.eq) goto loc_825496A0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,5240
	ctx.r5.s64 = r11.s64 + 5240;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,260
	ctx.r6.s64 = 260;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r11,19288(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19288);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lwz r3,20992(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20992);
	// bl 0x82320d20
	sub_82320D20(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825497b8
	sub_825497B8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_825496A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
}

__attribute__((alias("__imp__sub_825496BC"))) PPC_WEAK_FUNC(sub_825496BC);
PPC_FUNC_IMPL(__imp__sub_825496BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825496C0"))) PPC_WEAK_FUNC(sub_825496C0);
PPC_FUNC_IMPL(__imp__sub_825496C0) {
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
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825496f0
	if (cr6.eq) goto loc_825496F0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825496f4
	if (!cr6.eq) goto loc_825496F4;
loc_825496F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825496F4:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82549710
	if (cr6.eq) goto loc_82549710;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// lwz r6,292(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// lwz r5,288(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// bl 0x82379520
	sub_82379520(ctx, base);
loc_82549710:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82549720"))) PPC_WEAK_FUNC(sub_82549720);
PPC_FUNC_IMPL(__imp__sub_82549720) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82549724"))) PPC_WEAK_FUNC(sub_82549724);
PPC_FUNC_IMPL(__imp__sub_82549724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82549728"))) PPC_WEAK_FUNC(sub_82549728);
PPC_FUNC_IMPL(__imp__sub_82549728) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254979c
	if (cr6.eq) goto loc_8254979C;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-29664
	ctx.r8.s64 = ctx.r9.s64 + -29664;
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
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r10.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8254979C:
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

__attribute__((alias("__imp__sub_825497B0"))) PPC_WEAK_FUNC(sub_825497B0);
PPC_FUNC_IMPL(__imp__sub_825497B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825497B4"))) PPC_WEAK_FUNC(sub_825497B4);
PPC_FUNC_IMPL(__imp__sub_825497B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825497B8"))) PPC_WEAK_FUNC(sub_825497B8);
PPC_FUNC_IMPL(__imp__sub_825497B8) {
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
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,304
	ctx.r4.s64 = 304;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82549830
	if (cr6.eq) goto loc_82549830;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// addi r9,r10,-29652
	ctx.r9.s64 = ctx.r10.s64 + -29652;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,260
	ctx.r5.s64 = 260;
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r6,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r6.u32);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r11.u32);
	// stw r11,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r11.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_82549830:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82549834"))) PPC_WEAK_FUNC(sub_82549834);
PPC_FUNC_IMPL(__imp__sub_82549834) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82549838"))) PPC_WEAK_FUNC(sub_82549838);
PPC_FUNC_IMPL(__imp__sub_82549838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r11,18436(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18436);
	// lwz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// b 0x82554a58
	sub_82554A58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254984C"))) PPC_WEAK_FUNC(sub_8254984C);
PPC_FUNC_IMPL(__imp__sub_8254984C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82549850"))) PPC_WEAK_FUNC(sub_82549850);
PPC_FUNC_IMPL(__imp__sub_82549850) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r3,21888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21888);
	// bl 0x82881480
	sub_82881480(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82549ac4
	if (cr6.eq) goto loc_82549AC4;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
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
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82549abc
	if (!cr6.eq) goto loc_82549ABC;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm r8,r9,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82549920
	if (cr6.eq) goto loc_82549920;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
loc_82549920:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r29,3
	r29.s64 = 3;
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r29.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfd f0,27392(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 27392);
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, f0.u64);
	// beq cr6,0x82549958
	if (cr6.eq) goto loc_82549958;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_82549958:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfd f0,24216(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 24216);
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, f0.u64);
	// beq cr6,0x8254998c
	if (cr6.eq) goto loc_8254998C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
loc_8254998C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r8,-29552
	ctx.r5.s64 = ctx.r8.s64 + -29552;
	// lfd f0,16944(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16944);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, f0.u64);
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// cntlzw r11,r7
	r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r5,r10,-29572
	ctx.r5.s64 = ctx.r10.s64 + -29572;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r5,r5,-29588
	ctx.r5.s64 = ctx.r5.s64 + -29588;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// cntlzw r11,r7
	r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r10,13435
	ctx.r9.s64 = ctx.r10.s64 + 13435;
	// cmplw cr6,r28,r9
	cr6.compare<uint32_t>(r28.u32, ctx.r9.u32, xer);
	// beq cr6,0x82549a9c
	if (cr6.eq) goto loc_82549A9C;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
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
loc_82549A9C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_82549ABC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_82549AC4:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82549ae4
	if (cr6.eq) goto loc_82549AE4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82757960
	sub_82757960(ctx, base);
loc_82549AE4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_82549AE8"))) PPC_WEAK_FUNC(sub_82549AE8);
PPC_FUNC_IMPL(__imp__sub_82549AE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82549AEC"))) PPC_WEAK_FUNC(sub_82549AEC);
PPC_FUNC_IMPL(__imp__sub_82549AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82549AF0"))) PPC_WEAK_FUNC(sub_82549AF0);
PPC_FUNC_IMPL(__imp__sub_82549AF0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31933
	r25.s64 = -2092761088;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,-22676(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -22676);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// bne cr6,0x82549b70
	if (!cr6.eq) goto loc_82549B70;
	// li r11,6
	r11.s64 = 6;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, r31.u8);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stb r31,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, r31.u8);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, r31.u8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r11,r10,-4
	r11.s64 = ctx.r10.s64 + -4;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// stb r31,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, r31.u8);
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, r31.u8);
	// stb r31,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, r31.u8);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
loc_82549B58:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82549b58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82549B58;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x828e944c
	return;
loc_82549B70:
	// lis r23,-31970
	r23.s64 = -2095185920;
	// lwz r3,-14756(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82549b90
	if (cr6.eq) goto loc_82549B90;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82549b94
	if (!cr6.eq) goto loc_82549B94;
loc_82549B90:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82549B94:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, r31.u8);
	// addi r5,r9,-29512
	ctx.r5.s64 = ctx.r9.s64 + -29512;
	// stb r31,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, r31.u8);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, r31.u8);
	// stb r31,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, r31.u8);
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, r31.u8);
	// stb r31,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, r31.u8);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82549c9c
	if (!cr6.eq) goto loc_82549C9C;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r26,1
	r26.s64 = 1;
	// addi r28,r11,-29532
	r28.s64 = r11.s64 + -29532;
	// addi r27,r10,-32540
	r27.s64 = ctx.r10.s64 + -32540;
loc_82549C08:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r29.u32);
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bgt cr6,0x82549c80
	if (cr6.gt) goto loc_82549C80;
	// lwz r11,-22676(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -22676);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82549c80
	if (!cr6.eq) goto loc_82549C80;
	// li r30,2
	r30.s64 = 2;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, r31.u8);
	// b 0x82549c88
	goto loc_82549C88;
loc_82549C80:
	// mr r30,r31
	r30.u64 = r31.u64;
	// stb r26,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, r26.u8);
loc_82549C88:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82549c08
	if (cr6.eq) goto loc_82549C08;
loc_82549C9C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x82549d2c
	if (!cr6.eq) goto loc_82549D2C;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// blt cr6,0x82549d2c
	if (cr6.lt) goto loc_82549D2C;
	// lwz r3,-14756(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82549cd8
	if (cr6.eq) goto loc_82549CD8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82549cd8
	if (cr6.eq) goto loc_82549CD8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82549CD8:
	// addi r11,r22,28
	r11.s64 = r22.s64 + 28;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82549d2c
	if (cr6.eq) goto loc_82549D2C;
	// lwz r31,68(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82549d2c
	if (cr6.eq) goto loc_82549D2C;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8253cde0
	sub_8253CDE0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82549d1c
	if (cr6.eq) goto loc_82549D1C;
	// li r11,2
	r11.s64 = 2;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// b 0x82549d2c
	goto loc_82549D2C;
loc_82549D1C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8253ce60
	sub_8253CE60(ctx, base);
	// stb r3,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r3.u8);
loc_82549D2C:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,124
	r11.s64 = ctx.r1.s64 + 124;
	// addi r10,r21,-4
	ctx.r10.s64 = r21.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82549D3C:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82549d3c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82549D3C;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_82549D50"))) PPC_WEAK_FUNC(sub_82549D50);
PPC_FUNC_IMPL(__imp__sub_82549D50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_82549D54"))) PPC_WEAK_FUNC(sub_82549D54);
PPC_FUNC_IMPL(__imp__sub_82549D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82549D58"))) PPC_WEAK_FUNC(sub_82549D58);
PPC_FUNC_IMPL(__imp__sub_82549D58) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82549d94
	if (cr6.eq) goto loc_82549D94;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82549d98
	if (!cr6.eq) goto loc_82549D98;
loc_82549D94:
	// li r11,0
	r11.s64 = 0;
loc_82549D98:
	// lwz r3,188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// bl 0x82568bd0
	sub_82568BD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82549af0
	sub_82549AF0(ctx, base);
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82549dc8
	if (cr6.eq) goto loc_82549DC8;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x82549dd0
	goto loc_82549DD0;
loc_82549DC8:
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_82549DD0:
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

__attribute__((alias("__imp__sub_82549DE4"))) PPC_WEAK_FUNC(sub_82549DE4);
PPC_FUNC_IMPL(__imp__sub_82549DE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82549DE8"))) PPC_WEAK_FUNC(sub_82549DE8);
PPC_FUNC_IMPL(__imp__sub_82549DE8) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82549e24
	if (cr6.eq) goto loc_82549E24;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82549e28
	if (!cr6.eq) goto loc_82549E28;
loc_82549E24:
	// li r11,0
	r11.s64 = 0;
loc_82549E28:
	// lwz r3,188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// bl 0x82568bd0
	sub_82568BD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82549af0
	sub_82549AF0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_82549E5C"))) PPC_WEAK_FUNC(sub_82549E5C);
PPC_FUNC_IMPL(__imp__sub_82549E5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82549E60"))) PPC_WEAK_FUNC(sub_82549E60);
PPC_FUNC_IMPL(__imp__sub_82549E60) {
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
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82549ea4
	if (cr6.eq) goto loc_82549EA4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82549ea8
	if (!cr6.eq) goto loc_82549EA8;
loc_82549EA4:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82549EA8:
	// lwz r3,188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// bl 0x82568bd0
	sub_82568BD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82549af0
	sub_82549AF0(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,21888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21888);
	// bl 0x82881480
	sub_82881480(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254a0bc
	if (cr6.eq) goto loc_8254A0BC;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8254a0b4
	if (!cr6.eq) goto loc_8254A0B4;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 180);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r7,24128
	ctx.r5.s64 = ctx.r7.s64 + 24128;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stb r9,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r9.u8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
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
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r29,3
	r29.s64 = 3;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r29.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stfd f13,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f13.u64);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r5,r5,24108
	ctx.r5.s64 = ctx.r5.s64 + 24108;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r29.u32);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// stfd f11,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f11.u64);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r5,r7,24096
	ctx.r5.s64 = ctx.r7.s64 + 24096;
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
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
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
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r10,13435
	ctx.r9.s64 = ctx.r10.s64 + 13435;
	// cmplw cr6,r28,r9
	cr6.compare<uint32_t>(r28.u32, ctx.r9.u32, xer);
	// beq cr6,0x8254a0ac
	if (cr6.eq) goto loc_8254A0AC;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
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
loc_8254A0AC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_8254A0B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8254A0BC:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8254a0dc
	if (cr6.eq) goto loc_8254A0DC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82757960
	sub_82757960(ctx, base);
loc_8254A0DC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_8254A0E0"))) PPC_WEAK_FUNC(sub_8254A0E0);
PPC_FUNC_IMPL(__imp__sub_8254A0E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8254A0E4"))) PPC_WEAK_FUNC(sub_8254A0E4);
PPC_FUNC_IMPL(__imp__sub_8254A0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254A0E8"))) PPC_WEAK_FUNC(sub_8254A0E8);
PPC_FUNC_IMPL(__imp__sub_8254A0E8) {
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
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// bl 0x8254a8d8
	sub_8254A8D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8254A12C"))) PPC_WEAK_FUNC(sub_8254A12C);
PPC_FUNC_IMPL(__imp__sub_8254A12C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254A130"))) PPC_WEAK_FUNC(sub_8254A130);
PPC_FUNC_IMPL(__imp__sub_8254A130) {
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
	// addi r31,r3,16
	r31.s64 = ctx.r3.s64 + 16;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// bl 0x8254a8d8
	sub_8254A8D8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8254a188
	if (!cr6.eq) goto loc_8254A188;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254a940
	sub_8254A940(ctx, base);
loc_8254A188:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254A198"))) PPC_WEAK_FUNC(sub_8254A198);
PPC_FUNC_IMPL(__imp__sub_8254A198) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254A19C"))) PPC_WEAK_FUNC(sub_8254A19C);
PPC_FUNC_IMPL(__imp__sub_8254A19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254A1A0"))) PPC_WEAK_FUNC(sub_8254A1A0);
PPC_FUNC_IMPL(__imp__sub_8254A1A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
loc_8254A1B0:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bgt cr6,0x8254a1b0
	if (cr6.gt) goto loc_8254A1B0;
}

__attribute__((alias("__imp__sub_8254A1C8"))) PPC_WEAK_FUNC(sub_8254A1C8);
PPC_FUNC_IMPL(__imp__sub_8254A1C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254A1CC"))) PPC_WEAK_FUNC(sub_8254A1CC);
PPC_FUNC_IMPL(__imp__sub_8254A1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254A1D0"))) PPC_WEAK_FUNC(sub_8254A1D0);
PPC_FUNC_IMPL(__imp__sub_8254A1D0) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// beq cr6,0x8254a224
	if (cr6.eq) goto loc_8254A224;
loc_8254A1F8:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254a20c
	if (cr6.eq) goto loc_8254A20C;
	// bl 0x826c67a0
	sub_826C67A0(ctx, base);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
loc_8254A20C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826efff0
	sub_826EFFF0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8254a1f8
	if (!cr6.eq) goto loc_8254A1F8;
loc_8254A224:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x826f79d8
	sub_826F79D8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// ble cr6,0x8254a278
	if (!cr6.gt) goto loc_8254A278;
loc_8254A260:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bgt cr6,0x8254a260
	if (cr6.gt) goto loc_8254A260;
loc_8254A278:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8254A27C"))) PPC_WEAK_FUNC(sub_8254A27C);
PPC_FUNC_IMPL(__imp__sub_8254A27C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8254A280"))) PPC_WEAK_FUNC(sub_8254A280);
PPC_FUNC_IMPL(__imp__sub_8254A280) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lwz r11,24(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// cmplwi cr6,r11,1000
	cr6.compare<uint32_t>(r11.u32, 1000, xer);
	// bge cr6,0x8254a2b4
	if (!cr6.lt) goto loc_8254A2B4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8254A2B4:
	// lis r31,-31970
	r31.s64 = -2095185920;
	// li r26,0
	r26.s64 = 0;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254a2d8
	if (cr6.eq) goto loc_8254A2D8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254a2dc
	if (!cr6.eq) goto loc_8254A2DC;
loc_8254A2D8:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8254A2DC:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x824f9798
	sub_824F9798(ctx, base);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254a304
	if (cr6.eq) goto loc_8254A304;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254a308
	if (!cr6.eq) goto loc_8254A308;
loc_8254A304:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8254A308:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r4,r11,14000
	ctx.r4.s64 = r11.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r10,-29340
	ctx.r5.s64 = ctx.r10.s64 + -29340;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8254a410
	if (!cr6.eq) goto loc_8254A410;
	// li r11,17
	r11.s64 = 17;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r26.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r26.u32);
	// ld r28,120(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// addi r31,r11,-29364
	r31.s64 = r11.s64 + -29364;
	// ld r27,112(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r30,r10,-29352
	r30.s64 = ctx.r10.s64 + -29352;
	// addi r29,r9,-29432
	r29.s64 = ctx.r9.s64 + -29432;
loc_8254A370:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r8,58
	ctx.r8.s64 = 58;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rldicr r6,r26,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r26.u64, 32) & 0xFFFFFFFF00000000;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x826c6bf8
	sub_826C6BF8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826fb1a0
	sub_826FB1A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8254a370
	if (cr6.eq) goto loc_8254A370;
loc_8254A410:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8254A424"))) PPC_WEAK_FUNC(sub_8254A424);
PPC_FUNC_IMPL(__imp__sub_8254A424) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8254A428"))) PPC_WEAK_FUNC(sub_8254A428);
PPC_FUNC_IMPL(__imp__sub_8254A428) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,18436(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18436);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r8,236(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// stw r9,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r9.u32);
	// lwz r28,56(r8)
	r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// bl 0x82880e70
	sub_82880E70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82554108
	sub_82554108(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r28,r7
	cr6.compare<uint32_t>(r28.u32, ctx.r7.u32, xer);
	// beq cr6,0x8254a4b0
	if (cr6.eq) goto loc_8254A4B0;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fb1a0
	sub_826FB1A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,-29012
	ctx.r4.s64 = ctx.r10.s64 + -29012;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82881060
	sub_82881060(ctx, base);
loc_8254A4B0:
	// lis r31,-31970
	r31.s64 = -2095185920;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254a4d0
	if (cr6.eq) goto loc_8254A4D0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254a4d4
	if (!cr6.eq) goto loc_8254A4D4;
loc_8254A4D0:
	// li r11,0
	r11.s64 = 0;
loc_8254A4D4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r9,-29112
	ctx.r5.s64 = ctx.r9.s64 + -29112;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db70
	sub_8272DB70(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8254a710
	if (cr6.eq) goto loc_8254A710;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8254a710
	if (!cr6.eq) goto loc_8254A710;
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x8254a56c
	if (!cr6.eq) goto loc_8254A56C;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-29128
	ctx.r5.s64 = r11.s64 + -29128;
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r10,-29164
	ctx.r5.s64 = ctx.r10.s64 + -29164;
	// b 0x8254a640
	goto loc_8254A640;
loc_8254A56C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,32012
	ctx.r9.s64 = ctx.r10.s64 + 32012;
	// li r10,77
	ctx.r10.s64 = 77;
loc_8254A57C:
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
	// bne cr6,0x8254a57c
	if (!cr6.eq) goto loc_8254A57C;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x8254a5d8
	if (!cr6.eq) goto loc_8254A5D8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-29180
	ctx.r5.s64 = r11.s64 + -29180;
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r10,-29216
	ctx.r5.s64 = ctx.r10.s64 + -29216;
	// b 0x8254a640
	goto loc_8254A640;
loc_8254A5D8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,31996
	ctx.r9.s64 = ctx.r10.s64 + 31996;
	// li r10,77
	ctx.r10.s64 = 77;
loc_8254A5E8:
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
	// bne cr6,0x8254a5e8
	if (!cr6.eq) goto loc_8254A5E8;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x8254a710
	if (!cr6.eq) goto loc_8254A710;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-29228
	ctx.r5.s64 = r11.s64 + -29228;
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r10,-29264
	ctx.r5.s64 = ctx.r10.s64 + -29264;
loc_8254A640:
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r9,-29280
	ctx.r4.s64 = ctx.r9.s64 + -29280;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x8254a710
	if (cr6.eq) goto loc_8254A710;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254a678
	if (cr6.eq) goto loc_8254A678;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// bne cr6,0x8254a67c
	if (!cr6.eq) goto loc_8254A67C;
loc_8254A678:
	// li r11,0
	r11.s64 = 0;
loc_8254A67C:
	// lwz r31,148(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254a698
	if (cr6.eq) goto loc_8254A698;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254a69c
	if (!cr6.eq) goto loc_8254A69C;
loc_8254A698:
	// li r11,0
	r11.s64 = 0;
loc_8254A69C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r31,80(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// bl 0x82517a58
	sub_82517A58(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8254a6dc
	if (cr6.eq) goto loc_8254A6DC;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r11,17300
	ctx.r7.s64 = r11.s64 + 17300;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250c918
	sub_8250C918(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// b 0x8254a700
	goto loc_8254A700;
loc_8254A6DC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,13432
	ctx.r5.s64 = r11.s64 + 13432;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ce68
	sub_8250CE68(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8254A700:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,-29300
	ctx.r4.s64 = ctx.r10.s64 + -29300;
	// bl 0x82881060
	sub_82881060(ctx, base);
loc_8254A710:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82880f00
	sub_82880F00(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8254daa0
	sub_8254DAA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82880e20
	sub_82880E20(ctx, base);
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
}

__attribute__((alias("__imp__sub_8254A73C"))) PPC_WEAK_FUNC(sub_8254A73C);
PPC_FUNC_IMPL(__imp__sub_8254A73C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8254A740"))) PPC_WEAK_FUNC(sub_8254A740);
PPC_FUNC_IMPL(__imp__sub_8254A740) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826f0080
	sub_826F0080(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,23372
	ctx.r9.s64 = ctx.r10.s64 + 23372;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// or r6,r3,r8
	ctx.r6.u64 = ctx.r3.u64 | ctx.r8.u64;
	// addi r5,r7,23492
	ctx.r5.s64 = ctx.r7.s64 + 23492;
	// stw r6,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254A7B4"))) PPC_WEAK_FUNC(sub_8254A7B4);
PPC_FUNC_IMPL(__imp__sub_8254A7B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254A7B8"))) PPC_WEAK_FUNC(sub_8254A7B8);
PPC_FUNC_IMPL(__imp__sub_8254A7B8) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x8254a1d0
	sub_8254A1D0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x822fdff8
	sub_822FDFF8(ctx, base);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82727fa0
	sub_82727FA0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254A804"))) PPC_WEAK_FUNC(sub_8254A804);
PPC_FUNC_IMPL(__imp__sub_8254A804) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254A808"))) PPC_WEAK_FUNC(sub_8254A808);
PPC_FUNC_IMPL(__imp__sub_8254A808) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-29008
	ctx.r3.s64 = ctx.r10.s64 + -29008;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lwz r11,21644(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21644);
	// lwz r31,16(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8254a890
	if (cr6.eq) goto loc_8254A890;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254a890
	if (cr6.eq) goto loc_8254A890;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x8254a894
	if (!cr6.eq) goto loc_8254A894;
loc_8254A890:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_8254A894:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r31,0(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8254a8bc
	if (!cr6.eq) goto loc_8254A8BC;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lbz r10,-26032(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -26032);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8254a8c0
	if (!cr6.eq) goto loc_8254A8C0;
loc_8254A8BC:
	// li r11,1
	r11.s64 = 1;
loc_8254A8C0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254A8D4"))) PPC_WEAK_FUNC(sub_8254A8D4);
PPC_FUNC_IMPL(__imp__sub_8254A8D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254A8D8"))) PPC_WEAK_FUNC(sub_8254A8D8);
PPC_FUNC_IMPL(__imp__sub_8254A8D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// bge cr6,0x8254a924
	if (!cr6.lt) goto loc_8254A924;
loc_8254A8E8:
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - r11.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// srawi r7,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// addze r4,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r4.s64 = temp.s64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r9
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, xer);
	// beq cr6,0x8254a930
	if (cr6.eq) goto loc_8254A930;
	// bge cr6,0x8254a918
	if (!cr6.lt) goto loc_8254A918;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// b 0x8254a91c
	goto loc_8254A91C;
loc_8254A918:
	// addi r11,r10,4
	r11.s64 = ctx.r10.s64 + 4;
loc_8254A91C:
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8254a8e8
	if (cr6.lt) goto loc_8254A8E8;
loc_8254A924:
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8254A930:
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_8254A938"))) PPC_WEAK_FUNC(sub_8254A938);
PPC_FUNC_IMPL(__imp__sub_8254A938) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254A93C"))) PPC_WEAK_FUNC(sub_8254A93C);
PPC_FUNC_IMPL(__imp__sub_8254A93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254A940"))) PPC_WEAK_FUNC(sub_8254A940);
PPC_FUNC_IMPL(__imp__sub_8254A940) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x8254a990
	if (!cr6.eq) goto loc_8254A990;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8254A990:
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// srawi r30,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r30.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// ble cr6,0x8254a9bc
	if (!cr6.gt) goto loc_8254A9BC;
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
loc_8254A9BC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r9,r11
	r30.u64 = ctx.r9.u64 + r11.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r9,r11,-2
	ctx.r9.s64 = r11.s64 + -2;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// beq cr6,0x8254aa14
	if (cr6.eq) goto loc_8254AA14;
loc_8254A9FC:
	// lwz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r11,r3,-4
	r11.s64 = ctx.r3.s64 + -4;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bne cr6,0x8254a9fc
	if (!cr6.eq) goto loc_8254A9FC;
loc_8254AA14:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8254AA20"))) PPC_WEAK_FUNC(sub_8254AA20);
PPC_FUNC_IMPL(__imp__sub_8254AA20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8254AA24"))) PPC_WEAK_FUNC(sub_8254AA24);
PPC_FUNC_IMPL(__imp__sub_8254AA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254AA28"))) PPC_WEAK_FUNC(sub_8254AA28);
PPC_FUNC_IMPL(__imp__sub_8254AA28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r3,-22672(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -22672);
}

__attribute__((alias("__imp__sub_8254AA30"))) PPC_WEAK_FUNC(sub_8254AA30);
PPC_FUNC_IMPL(__imp__sub_8254AA30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254AA34"))) PPC_WEAK_FUNC(sub_8254AA34);
PPC_FUNC_IMPL(__imp__sub_8254AA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254AA38"))) PPC_WEAK_FUNC(sub_8254AA38);
PPC_FUNC_IMPL(__imp__sub_8254AA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// bl 0x82880e70
	sub_82880E70(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,-28832
	ctx.r4.s64 = ctx.r8.s64 + -28832;
	// lfd f1,16944(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16944);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r6,-28844
	ctx.r4.s64 = ctx.r6.s64 + -28844;
	// lfd f1,27392(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r7.u32 + 27392);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r4,-28856
	ctx.r4.s64 = ctx.r4.s64 + -28856;
	// lfd f1,24216(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r5.u32 + 24216);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-28876
	ctx.r4.s64 = ctx.r10.s64 + -28876;
	// lfd f1,-28864(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -28864);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82880f00
	sub_82880F00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254daa0
	sub_8254DAA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82880e20
	sub_82880E20(ctx, base);
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8254AAE8"))) PPC_WEAK_FUNC(sub_8254AAE8);
PPC_FUNC_IMPL(__imp__sub_8254AAE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254AAEC"))) PPC_WEAK_FUNC(sub_8254AAEC);
PPC_FUNC_IMPL(__imp__sub_8254AAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254AAF0"))) PPC_WEAK_FUNC(sub_8254AAF0);
PPC_FUNC_IMPL(__imp__sub_8254AAF0) {
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
	// lwz r11,1624(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1624);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8254ab38
	if (!cr6.gt) goto loc_8254AB38;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,1624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1624, r11.u32);
	// bgt 0x8254ab38
	if (cr0.gt) goto loc_8254AB38;
	// addi r3,r3,1616
	ctx.r3.s64 = ctx.r3.s64 + 1616;
	// bl 0x823916c8
	sub_823916C8(ctx, base);
	// cmpwi cr6,r3,1000
	cr6.compare<int32_t>(ctx.r3.s32, 1000, xer);
	// li r11,1000
	r11.s64 = 1000;
	// ble cr6,0x8254ab34
	if (!cr6.gt) goto loc_8254AB34;
	// li r11,3000
	r11.s64 = 3000;
loc_8254AB34:
	// stw r11,1612(r31)
	PPC_STORE_U32(r31.u32 + 1612, r11.u32);
loc_8254AB38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254AB48"))) PPC_WEAK_FUNC(sub_8254AB48);
PPC_FUNC_IMPL(__imp__sub_8254AB48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254AB4C"))) PPC_WEAK_FUNC(sub_8254AB4C);
PPC_FUNC_IMPL(__imp__sub_8254AB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254AB50"))) PPC_WEAK_FUNC(sub_8254AB50);
PPC_FUNC_IMPL(__imp__sub_8254AB50) {
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
	// beq cr6,0x8254ab80
	if (cr6.eq) goto loc_8254AB80;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254ab84
	if (!cr6.eq) goto loc_8254AB84;
loc_8254AB80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254AB84:
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x824f9dd8
	sub_824F9DD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254ABA4"))) PPC_WEAK_FUNC(sub_8254ABA4);
PPC_FUNC_IMPL(__imp__sub_8254ABA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254ABA8"))) PPC_WEAK_FUNC(sub_8254ABA8);
PPC_FUNC_IMPL(__imp__sub_8254ABA8) {
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
	// lis r30,-31970
	r30.s64 = -2095185920;
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254abd8
	if (cr6.eq) goto loc_8254ABD8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254abdc
	if (!cr6.eq) goto loc_8254ABDC;
loc_8254ABD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254ABDC:
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x8250dd08
	sub_8250DD08(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8254ac24
	if (!cr6.eq) goto loc_8254AC24;
	// li r31,0
	r31.s64 = 0;
loc_8254ABF4:
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254ac0c
	if (cr6.eq) goto loc_8254AC0C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254ac10
	if (!cr6.eq) goto loc_8254AC10;
loc_8254AC0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254AC10:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825139a0
	sub_825139A0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x8254abf4
	if (cr6.lt) goto loc_8254ABF4;
loc_8254AC24:
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

__attribute__((alias("__imp__sub_8254AC38"))) PPC_WEAK_FUNC(sub_8254AC38);
PPC_FUNC_IMPL(__imp__sub_8254AC38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

