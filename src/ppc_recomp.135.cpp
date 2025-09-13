#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8252C7D8"))) PPC_WEAK_FUNC(sub_8252C7D8);
PPC_FUNC_IMPL(__imp__sub_8252C7D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252C7DC"))) PPC_WEAK_FUNC(sub_8252C7DC);
PPC_FUNC_IMPL(__imp__sub_8252C7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252C7E0"))) PPC_WEAK_FUNC(sub_8252C7E0);
PPC_FUNC_IMPL(__imp__sub_8252C7E0) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,26868
	ctx.r9.s64 = r11.s64 + 26868;
	// li r30,0
	r30.s64 = 0;
	// addi r8,r10,26852
	ctx.r8.s64 = ctx.r10.s64 + 26852;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// addi r11,r31,160
	r11.s64 = r31.s64 + 160;
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r30.u32);
	// stw r8,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r8.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r7,176(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// or r5,r7,r3
	ctx.r5.u64 = ctx.r7.u64 | ctx.r3.u64;
	// addi r4,r6,26932
	ctx.r4.s64 = ctx.r6.s64 + 26932;
	// stw r5,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r5.u32);
	// addi r29,r31,184
	r29.s64 = r31.s64 + 184;
	// stw r4,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r9,r31,212
	ctx.r9.s64 = r31.s64 + 212;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8252C85C:
	// stbx r30,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, r30.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8252c85c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8252C85C;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r11,-32173
	r11.s64 = -2108489728;
	// addi r28,r11,-14760
	r28.s64 = r11.s64 + -14760;
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252c890
	if (cr6.eq) goto loc_8252C890;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8252c890
	if (cr6.eq) goto loc_8252C890;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8252C890:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r30,12(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-944
	ctx.r3.s64 = ctx.r10.s64 + -944;
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
	// lwz r11,19620(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19620);
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
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8252C8E4"))) PPC_WEAK_FUNC(sub_8252C8E4);
PPC_FUNC_IMPL(__imp__sub_8252C8E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8252C8E8"))) PPC_WEAK_FUNC(sub_8252C8E8);
PPC_FUNC_IMPL(__imp__sub_8252C8E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8252cb08
	sub_8252CB08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252C8E8"))) PPC_WEAK_FUNC(sub_8252C8E8);
PPC_FUNC_IMPL(__imp__sub_8252C8E8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8252C8EC"))) PPC_WEAK_FUNC(sub_8252C8EC);
PPC_FUNC_IMPL(__imp__sub_8252C8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252C8F0"))) PPC_WEAK_FUNC(sub_8252C8F0);
PPC_FUNC_IMPL(__imp__sub_8252C8F0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82881e38
	sub_82881E38(ctx, base);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8252c92c
	if (!cr6.gt) goto loc_8252C92C;
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
loc_8252C92C:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8252c9e4
	if (cr6.eq) goto loc_8252C9E4;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// li r28,0
	r28.s64 = 0;
loc_8252C94C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8252c974
	if (!cr6.gt) goto loc_8252C974;
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
loc_8252C974:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add. r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// beq 0x8252c9c4
	if (cr0.eq) goto loc_8252C9C4;
	// stw r28,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r28.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// ld r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 4);
	// std r10,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r10.u64);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r8,r9,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8252c9c4
	if (cr6.eq) goto loc_8252C9C4;
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// bl 0x827577f0
	sub_827577F0(ctx, base);
loc_8252C9C4:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r30,-4
	ctx.r9.s64 = r30.s64 + -4;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x8252c94c
	if (!cr6.eq) goto loc_8252C94C;
loc_8252C9E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8252C9E8"))) PPC_WEAK_FUNC(sub_8252C9E8);
PPC_FUNC_IMPL(__imp__sub_8252C9E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8252C9EC"))) PPC_WEAK_FUNC(sub_8252C9EC);
PPC_FUNC_IMPL(__imp__sub_8252C9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252C9F0"))) PPC_WEAK_FUNC(sub_8252C9F0);
PPC_FUNC_IMPL(__imp__sub_8252C9F0) {
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
	// addi r10,r11,26840
	ctx.r10.s64 = r11.s64 + 26840;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82881e38
	sub_82881E38(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8252ca34
	if (cr6.eq) goto loc_8252CA34;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8252CA34:
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

__attribute__((alias("__imp__sub_8252CA48"))) PPC_WEAK_FUNC(sub_8252CA48);
PPC_FUNC_IMPL(__imp__sub_8252CA48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252CA4C"))) PPC_WEAK_FUNC(sub_8252CA4C);
PPC_FUNC_IMPL(__imp__sub_8252CA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252CA50"))) PPC_WEAK_FUNC(sub_8252CA50);
PPC_FUNC_IMPL(__imp__sub_8252CA50) {
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
	// addi r9,r10,26852
	ctx.r9.s64 = ctx.r10.s64 + 26852;
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

__attribute__((alias("__imp__sub_8252CAA8"))) PPC_WEAK_FUNC(sub_8252CAA8);
PPC_FUNC_IMPL(__imp__sub_8252CAA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252CAAC"))) PPC_WEAK_FUNC(sub_8252CAAC);
PPC_FUNC_IMPL(__imp__sub_8252CAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252CAB0"))) PPC_WEAK_FUNC(sub_8252CAB0);
PPC_FUNC_IMPL(__imp__sub_8252CAB0) {
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
	// addi r10,r11,26852
	ctx.r10.s64 = r11.s64 + 26852;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
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
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x82881e38
	sub_82881E38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8252CB04"))) PPC_WEAK_FUNC(sub_8252CB04);
PPC_FUNC_IMPL(__imp__sub_8252CB04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252CB08"))) PPC_WEAK_FUNC(sub_8252CB08);
PPC_FUNC_IMPL(__imp__sub_8252CB08) {
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
	// beq cr6,0x8252cbec
	if (cr6.eq) goto loc_8252CBEC;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8252cb7c
	if (!cr6.eq) goto loc_8252CB7C;
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
	// beq cr6,0x8252cbec
	if (cr6.eq) goto loc_8252CBEC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x824a7330
	sub_824A7330(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x8252cbec
	goto loc_8252CBEC;
loc_8252CB7C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8252ca50
	sub_8252CA50(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x8252cba8
	if (!cr6.gt) goto loc_8252CBA8;
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
loc_8252CBA8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8252c8f0
	sub_8252C8F0(ctx, base);
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
	// bl 0x8252cab0
	sub_8252CAB0(ctx, base);
loc_8252CBEC:
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

__attribute__((alias("__imp__sub_8252CC00"))) PPC_WEAK_FUNC(sub_8252CC00);
PPC_FUNC_IMPL(__imp__sub_8252CC00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252CC04"))) PPC_WEAK_FUNC(sub_8252CC04);
PPC_FUNC_IMPL(__imp__sub_8252CC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252CC08"))) PPC_WEAK_FUNC(sub_8252CC08);
PPC_FUNC_IMPL(__imp__sub_8252CC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,26720
	ctx.r3.s64 = r11.s64 + 26720;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252CC14"))) PPC_WEAK_FUNC(sub_8252CC14);
PPC_FUNC_IMPL(__imp__sub_8252CC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252CC18"))) PPC_WEAK_FUNC(sub_8252CC18);
PPC_FUNC_IMPL(__imp__sub_8252CC18) {
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
	// addi r10,r11,26852
	ctx.r10.s64 = r11.s64 + 26852;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
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
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x82881e38
	sub_82881E38(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8252cc7c
	if (cr6.eq) goto loc_8252CC7C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8252CC7C:
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

__attribute__((alias("__imp__sub_8252CC90"))) PPC_WEAK_FUNC(sub_8252CC90);
PPC_FUNC_IMPL(__imp__sub_8252CC90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252CC94"))) PPC_WEAK_FUNC(sub_8252CC94);
PPC_FUNC_IMPL(__imp__sub_8252CC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252CC98"))) PPC_WEAK_FUNC(sub_8252CC98);
PPC_FUNC_IMPL(__imp__sub_8252CC98) {
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
	// bl 0x8252c038
	sub_8252C038(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8252ccd0
	if (cr6.eq) goto loc_8252CCD0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8252CCD0:
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

__attribute__((alias("__imp__sub_8252CCE4"))) PPC_WEAK_FUNC(sub_8252CCE4);
PPC_FUNC_IMPL(__imp__sub_8252CCE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252CCE8"))) PPC_WEAK_FUNC(sub_8252CCE8);
PPC_FUNC_IMPL(__imp__sub_8252CCE8) {
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
	// addi r9,r11,27068
	ctx.r9.s64 = r11.s64 + 27068;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252cd24
	if (cr6.eq) goto loc_8252CD24;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252cd28
	if (!cr6.eq) goto loc_8252CD28;
loc_8252CD24:
	// li r11,0
	r11.s64 = 0;
loc_8252CD28:
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
	// bne cr6,0x8252cd80
	if (!cr6.eq) goto loc_8252CD80;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8252cd80
	if (!cr6.eq) goto loc_8252CD80;
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
loc_8252CD80:
	// addi r3,r27,188
	ctx.r3.s64 = r27.s64 + 188;
	// bl 0x82458d00
	sub_82458D00(ctx, base);
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

__attribute__((alias("__imp__sub_8252CD9C"))) PPC_WEAK_FUNC(sub_8252CD9C);
PPC_FUNC_IMPL(__imp__sub_8252CD9C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8252CDA0"))) PPC_WEAK_FUNC(sub_8252CDA0);
PPC_FUNC_IMPL(__imp__sub_8252CDA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,200(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r28,r3,188
	r28.s64 = ctx.r3.s64 + 188;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8252cdd8
	if (!cr6.gt) goto loc_8252CDD8;
loc_8252CDC0:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x8252cdc0
	if (cr6.gt) goto loc_8252CDC0;
loc_8252CDD8:
	// lwz r11,132(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 132);
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8252cfb0
	if (cr6.eq) goto loc_8252CFB0;
	// li r24,0
	r24.s64 = 0;
	// li r22,1
	r22.s64 = 1;
	// lis r25,-31965
	r25.s64 = -2094858240;
	// lis r27,-31965
	r27.s64 = -2094858240;
loc_8252CDF8:
	// lwz r11,124(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 124);
	// add r30,r11,r24
	r30.u64 = r11.u64 + r24.u64;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8252ce14
	if (cr6.lt) goto loc_8252CE14;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8252ce18
	goto loc_8252CE18;
loc_8252CE14:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_8252CE18:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8252ce48
	if (cr6.eq) goto loc_8252CE48;
loc_8252CE2C:
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
	// bne cr6,0x8252ce2c
	if (!cr6.eq) goto loc_8252CE2C;
loc_8252CE48:
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
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8251ebd0
	sub_8251EBD0(ctx, base);
	// lwz r10,-21748(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + -21748);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8252cea4
	if (cr6.eq) goto loc_8252CEA4;
loc_8252CE88:
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
	// bne cr6,0x8252ce88
	if (!cr6.eq) goto loc_8252CE88;
loc_8252CEA4:
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
	// lwz r5,-21748(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + -21748);
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
	// lwz r10,-21744(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + -21744);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8252cf18
	if (cr6.eq) goto loc_8252CF18;
loc_8252CEFC:
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
	// bne cr6,0x8252cefc
	if (!cr6.eq) goto loc_8252CEFC;
loc_8252CF18:
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
	// lwz r5,-21744(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + -21744);
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
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// ble cr6,0x8252cf7c
	if (!cr6.gt) goto loc_8252CF7C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8252CF7C:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r28)
	PPC_STORE_U32(r28.u32 + 12, ctx.r8.u32);
	// add. r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8252cf9c
	if (cr0.eq) goto loc_8252CF9C;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
loc_8252CF9C:
	// lwz r11,132(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 132);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r24,r24,48
	r24.s64 = r24.s64 + 48;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// blt cr6,0x8252cdf8
	if (cr6.lt) goto loc_8252CDF8;
loc_8252CFB0:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x8252d128
	if (cr6.eq) goto loc_8252D128;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x8252d090
	if (cr6.eq) goto loc_8252D090;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x8252d19c
	if (!cr6.eq) goto loc_8252D19C;
	// lwz r11,124(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 124);
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252cfe4
	if (cr6.lt) goto loc_8252CFE4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252cfe8
	goto loc_8252CFE8;
loc_8252CFE4:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252CFE8:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252d010
	if (cr6.lt) goto loc_8252D010;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252d014
	goto loc_8252D014;
loc_8252D010:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252D014:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252d03c
	if (cr6.lt) goto loc_8252D03C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252d040
	goto loc_8252D040;
loc_8252D03C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252D040:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252d064
	if (cr6.lt) goto loc_8252D064;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252d068
	goto loc_8252D068;
loc_8252D064:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252D068:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
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
	// b 0x828e9450
	return;
loc_8252D090:
	// lwz r11,124(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 124);
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252d0ac
	if (cr6.lt) goto loc_8252D0AC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252d0b0
	goto loc_8252D0B0;
loc_8252D0AC:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252D0B0:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252d0d8
	if (cr6.lt) goto loc_8252D0D8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252d0dc
	goto loc_8252D0DC;
loc_8252D0D8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252D0DC:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252d100
	if (cr6.lt) goto loc_8252D100;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252d104
	goto loc_8252D104;
loc_8252D100:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252D104:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x8251f3c0
	sub_8251F3C0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9450
	return;
loc_8252D128:
	// lwz r11,124(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 124);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252d144
	if (cr6.lt) goto loc_8252D144;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252d148
	goto loc_8252D148;
loc_8252D144:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252D148:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252d16c
	if (cr6.lt) goto loc_8252D16C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252d170
	goto loc_8252D170;
loc_8252D16C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252D170:
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
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
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
loc_8252D19C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8252D1A0"))) PPC_WEAK_FUNC(sub_8252D1A0);
PPC_FUNC_IMPL(__imp__sub_8252D1A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_8252D1A4"))) PPC_WEAK_FUNC(sub_8252D1A4);
PPC_FUNC_IMPL(__imp__sub_8252D1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252D1A8"))) PPC_WEAK_FUNC(sub_8252D1A8);
PPC_FUNC_IMPL(__imp__sub_8252D1A8) {
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
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// beq cr6,0x8252d270
	if (cr6.eq) goto loc_8252D270;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8252d270
	if (!cr6.lt) goto loc_8252D270;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8252d270
	if (cr6.lt) goto loc_8252D270;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r5,192(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r7,-31965
	ctx.r7.s64 = -2094858240;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stwx r6,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r6.u32);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,192(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// lwz r4,-21740(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -21740);
	// lwzx r29,r11,r8
	r29.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// bl 0x8250c5f8
	sub_8250C5F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// lis r8,-31965
	ctx.r8.s64 = -2094858240;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// lwz r4,-21748(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21748);
	// lwz r30,-21744(r8)
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21744);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x8251f4e8
	sub_8251F4E8(ctx, base);
loc_8252D270:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8252D27C"))) PPC_WEAK_FUNC(sub_8252D27C);
PPC_FUNC_IMPL(__imp__sub_8252D27C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8252D280"))) PPC_WEAK_FUNC(sub_8252D280);
PPC_FUNC_IMPL(__imp__sub_8252D280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x828e93ec
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// beq cr6,0x8252d2b0
	if (cr6.eq) goto loc_8252D2B0;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8252d498
	if (!cr6.eq) goto loc_8252D498;
loc_8252D2B0:
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// li r18,0
	r18.s64 = 0;
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r18.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r18.u32);
	// mr r24,r18
	r24.u64 = r18.u64;
	// ble cr6,0x8252d478
	if (!cr6.gt) goto loc_8252D478;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r18
	r29.u64 = r18.u64;
	// mr r25,r18
	r25.u64 = r18.u64;
	// li r20,4
	r20.s64 = 4;
	// lis r27,-31965
	r27.s64 = -2094858240;
	// lis r23,-31965
	r23.s64 = -2094858240;
	// lis r26,-31965
	r26.s64 = -2094858240;
	// addi r28,r9,17016
	r28.s64 = ctx.r9.s64 + 17016;
	// addi r22,r10,16508
	r22.s64 = ctx.r10.s64 + 16508;
	// addi r21,r11,16512
	r21.s64 = r11.s64 + 16512;
loc_8252D2FC:
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// add r31,r11,r25
	r31.u64 = r11.u64 + r25.u64;
	// mr r11,r21
	r11.u64 = r21.u64;
	// beq cr6,0x8252d314
	if (cr6.eq) goto loc_8252D314;
	// mr r11,r22
	r11.u64 = r22.u64;
loc_8252D314:
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r18,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r18.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r20.u32);
	// bl 0x825201c0
	sub_825201C0(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8252d350
	if (cr6.eq) goto loc_8252D350;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r18,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r18.u32);
loc_8252D350:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8252d364
	if (cr6.lt) goto loc_8252D364;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8252d368
	goto loc_8252D368;
loc_8252D364:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_8252D368:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8252d398
	if (cr6.eq) goto loc_8252D398;
loc_8252D37C:
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
	// bne cr6,0x8252d37c
	if (!cr6.eq) goto loc_8252D37C;
loc_8252D398:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
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
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
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
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r4,-21740(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + -21740);
	// lwz r3,212(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// lwzx r17,r11,r29
	r17.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x8250c5f8
	sub_8250C5F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lwz r10,-21748(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + -21748);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8252d43c
	if (cr6.eq) goto loc_8252D43C;
loc_8252D420:
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
	// bne cr6,0x8252d420
	if (!cr6.eq) goto loc_8252D420;
loc_8252D43C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r5,-21744(r23)
	ctx.r5.u64 = PPC_LOAD_U32(r23.u32 + -21744);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251f4e8
	sub_8251F4E8(ctx, base);
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r25,r25,48
	r25.s64 = r25.s64 + 48;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// blt cr6,0x8252d2fc
	if (cr6.lt) goto loc_8252D2FC;
loc_8252D478:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8252d498
	if (cr6.eq) goto loc_8252D498;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82757960
	sub_82757960(ctx, base);
loc_8252D498:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_8252D4A4"))) PPC_WEAK_FUNC(sub_8252D4A4);
PPC_FUNC_IMPL(__imp__sub_8252D4A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e943c
	return;
}

__attribute__((alias("__imp__sub_8252D4A8"))) PPC_WEAK_FUNC(sub_8252D4A8);
PPC_FUNC_IMPL(__imp__sub_8252D4A8) {
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
	// addi r10,r11,27068
	ctx.r10.s64 = r11.s64 + 27068;
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
	// addi r8,r9,-21492
	ctx.r8.s64 = ctx.r9.s64 + -21492;
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
	// addi r4,r6,27132
	ctx.r4.s64 = ctx.r6.s64 + 27132;
	// stw r5,204(r30)
	PPC_STORE_U32(r30.u32 + 204, ctx.r5.u32);
	// stw r4,188(r30)
	PPC_STORE_U32(r30.u32 + 188, ctx.r4.u32);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252d534
	if (cr6.eq) goto loc_8252D534;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252d538
	if (!cr6.eq) goto loc_8252D538;
loc_8252D534:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8252D538:
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// stw r11,212(r30)
	PPC_STORE_U32(r30.u32 + 212, r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bge cr6,0x8252d564
	if (!cr6.lt) goto loc_8252D564;
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
loc_8252D564:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lis r11,-32173
	r11.s64 = -2108489728;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// addi r27,r11,-11864
	r27.s64 = r11.s64 + -11864;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252d594
	if (cr6.eq) goto loc_8252D594;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252d598
	if (!cr6.eq) goto loc_8252D598;
loc_8252D594:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8252D598:
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

__attribute__((alias("__imp__sub_8252D5EC"))) PPC_WEAK_FUNC(sub_8252D5EC);
PPC_FUNC_IMPL(__imp__sub_8252D5EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8252D5F0"))) PPC_WEAK_FUNC(sub_8252D5F0);
PPC_FUNC_IMPL(__imp__sub_8252D5F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-21752(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -21752);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252D5FC"))) PPC_WEAK_FUNC(sub_8252D5FC);
PPC_FUNC_IMPL(__imp__sub_8252D5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252D600"))) PPC_WEAK_FUNC(sub_8252D600);
PPC_FUNC_IMPL(__imp__sub_8252D600) {
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
	// bl 0x82458d00
	sub_82458D00(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8252d638
	if (cr6.eq) goto loc_8252D638;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8252D638:
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

__attribute__((alias("__imp__sub_8252D64C"))) PPC_WEAK_FUNC(sub_8252D64C);
PPC_FUNC_IMPL(__imp__sub_8252D64C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252D650"))) PPC_WEAK_FUNC(sub_8252D650);
PPC_FUNC_IMPL(__imp__sub_8252D650) {
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
	// bl 0x8252cce8
	sub_8252CCE8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8252d688
	if (cr6.eq) goto loc_8252D688;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8252D688:
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

__attribute__((alias("__imp__sub_8252D69C"))) PPC_WEAK_FUNC(sub_8252D69C);
PPC_FUNC_IMPL(__imp__sub_8252D69C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252D6A0"))) PPC_WEAK_FUNC(sub_8252D6A0);
PPC_FUNC_IMPL(__imp__sub_8252D6A0) {
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
	// ble cr6,0x8252d6d4
	if (!cr6.gt) goto loc_8252D6D4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8252D6D4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bge cr6,0x8252d740
	if (!cr6.lt) goto loc_8252D740;
loc_8252D6E0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8252d708
	if (!cr6.gt) goto loc_8252D708;
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
loc_8252D708:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8252d734
	if (cr0.eq) goto loc_8252D734;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
loc_8252D734:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// blt cr6,0x8252d6e0
	if (cr6.lt) goto loc_8252D6E0;
loc_8252D740:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// ble cr6,0x8252d764
	if (!cr6.gt) goto loc_8252D764;
loc_8252D74C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// bgt cr6,0x8252d74c
	if (cr6.gt) goto loc_8252D74C;
loc_8252D764:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8252D768"))) PPC_WEAK_FUNC(sub_8252D768);
PPC_FUNC_IMPL(__imp__sub_8252D768) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8252D76C"))) PPC_WEAK_FUNC(sub_8252D76C);
PPC_FUNC_IMPL(__imp__sub_8252D76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252D770"))) PPC_WEAK_FUNC(sub_8252D770);
PPC_FUNC_IMPL(__imp__sub_8252D770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252D7A0"))) PPC_WEAK_FUNC(sub_8252D7A0);
PPC_FUNC_IMPL(__imp__sub_8252D7A0) {
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
	// addi r9,r11,27260
	ctx.r9.s64 = r11.s64 + 27260;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252d7dc
	if (cr6.eq) goto loc_8252D7DC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252d7e0
	if (!cr6.eq) goto loc_8252D7E0;
loc_8252D7DC:
	// li r11,0
	r11.s64 = 0;
loc_8252D7E0:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19496(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19496);
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
	// bne cr6,0x8252d838
	if (!cr6.eq) goto loc_8252D838;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8252d838
	if (!cr6.eq) goto loc_8252D838;
	// lwz r11,19496(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19496);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8252D838:
	// addi r3,r27,188
	ctx.r3.s64 = r27.s64 + 188;
	// bl 0x8252dcf0
	sub_8252DCF0(ctx, base);
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

__attribute__((alias("__imp__sub_8252D854"))) PPC_WEAK_FUNC(sub_8252D854);
PPC_FUNC_IMPL(__imp__sub_8252D854) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8252D858"))) PPC_WEAK_FUNC(sub_8252D858);
PPC_FUNC_IMPL(__imp__sub_8252D858) {
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
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,124(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// blt cr6,0x8252d88c
	if (cr6.lt) goto loc_8252D88C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252d890
	goto loc_8252D890;
loc_8252D88C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252D890:
	// addi r29,r11,28
	r29.s64 = r11.s64 + 28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8251ebd0
	sub_8251EBD0(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// lis r28,-31965
	r28.s64 = -2094858240;
loc_8252D8B8:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r5,-21600(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -21600);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// li r11,5381
	r11.s64 = 5381;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8252d900
	if (cr6.eq) goto loc_8252D900;
loc_8252D8E4:
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
	// bne cr6,0x8252d8e4
	if (!cr6.eq) goto loc_8252D8E4;
loc_8252D900:
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
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
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
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(r31.u32, 2, xer);
	// blt cr6,0x8252d8b8
	if (cr6.lt) goto loc_8252D8B8;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8252D954"))) PPC_WEAK_FUNC(sub_8252D954);
PPC_FUNC_IMPL(__imp__sub_8252D954) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8252D958"))) PPC_WEAK_FUNC(sub_8252D958);
PPC_FUNC_IMPL(__imp__sub_8252D958) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// beq cr6,0x8252db58
	if (cr6.eq) goto loc_8252DB58;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// addi r8,r10,16512
	ctx.r8.s64 = ctx.r10.s64 + 16512;
	// lwz r30,124(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// li r26,4
	r26.s64 = 4;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// lis r6,-31965
	ctx.r6.s64 = -2094858240;
	// rlwinm r10,r7,30,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x8;
	// li r4,64
	ctx.r4.s64 = 64;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,-21600(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21600);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r27,r11,17016
	r27.s64 = r11.s64 + 17016;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, r11.s32, xer);
	// beq cr6,0x8252da6c
	if (cr6.eq) goto loc_8252DA6C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8252da30
	if (!cr6.eq) goto loc_8252DA30;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8252da20
	if (cr6.eq) goto loc_8252DA20;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
loc_8252DA20:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// addi r10,r11,16508
	ctx.r10.s64 = r11.s64 + 16508;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_8252DA30:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
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
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_8252DA6C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8252db38
	if (!cr6.eq) goto loc_8252DB38;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// lwz r5,-21596(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21596);
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lbz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U8(r29.u32 + 12);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8252dac8
	if (cr6.eq) goto loc_8252DAC8;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r31,-21592(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -21592);
	// b 0x8252dad0
	goto loc_8252DAD0;
loc_8252DAC8:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r31,-21588(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -21588);
loc_8252DAD0:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8252daf4
	if (cr6.eq) goto loc_8252DAF4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
loc_8252DAF4:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
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
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_8252DB38:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8252db58
	if (cr6.eq) goto loc_8252DB58;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
loc_8252DB58:
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_8252DB64"))) PPC_WEAK_FUNC(sub_8252DB64);
PPC_FUNC_IMPL(__imp__sub_8252DB64) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8252DB68"))) PPC_WEAK_FUNC(sub_8252DB68);
PPC_FUNC_IMPL(__imp__sub_8252DB68) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825200d8
	sub_825200D8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r27,r31,160
	r27.s64 = r31.s64 + 160;
	// addi r10,r11,27260
	ctx.r10.s64 = r11.s64 + 27260;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r28,0
	r28.s64 = 0;
	// addi r7,r3,20
	ctx.r7.s64 = ctx.r3.s64 + 20;
	// addi r6,r8,27244
	ctx.r6.s64 = ctx.r8.s64 + 27244;
	// std r28,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, r28.u64);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r11,1
	r11.s64 = 1;
	// stw r7,192(r31)
	PPC_STORE_U32(r31.u32 + 192, ctx.r7.u32);
	// stw r6,188(r31)
	PPC_STORE_U32(r31.u32 + 188, ctx.r6.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r28,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r28.u32);
	// stw r4,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r4.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// bl 0x8252d6a0
	sub_8252D6A0(ctx, base);
	// lis r30,-31970
	r30.s64 = -2095185920;
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252dbf4
	if (cr6.eq) goto loc_8252DBF4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252dbf8
	if (!cr6.eq) goto loc_8252DBF8;
loc_8252DBF4:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8252DBF8:
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// lis r11,-32173
	r11.s64 = -2108489728;
	// addi r29,r11,-9896
	r29.s64 = r11.s64 + -9896;
	// stw r10,224(r31)
	PPC_STORE_U32(r31.u32 + 224, ctx.r10.u32);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252dc24
	if (cr6.eq) goto loc_8252DC24;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252dc28
	if (!cr6.eq) goto loc_8252DC28;
loc_8252DC24:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8252DC28:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,612
	ctx.r3.s64 = ctx.r9.s64 + 612;
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
	// lwz r11,19496(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19496);
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
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8252DC7C"))) PPC_WEAK_FUNC(sub_8252DC7C);
PPC_FUNC_IMPL(__imp__sub_8252DC7C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8252DC80"))) PPC_WEAK_FUNC(sub_8252DC80);
PPC_FUNC_IMPL(__imp__sub_8252DC80) {
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
	// addi r9,r11,27232
	ctx.r9.s64 = r11.s64 + 27232;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8252dcc4
	if (!cr6.gt) goto loc_8252DCC4;
loc_8252DCAC:
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
	// bgt cr6,0x8252dcac
	if (cr6.gt) goto loc_8252DCAC;
loc_8252DCC4:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8252dcdc
	if (cr6.eq) goto loc_8252DCDC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8252DCDC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8252DCEC"))) PPC_WEAK_FUNC(sub_8252DCEC);
PPC_FUNC_IMPL(__imp__sub_8252DCEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252DCF0"))) PPC_WEAK_FUNC(sub_8252DCF0);
PPC_FUNC_IMPL(__imp__sub_8252DCF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,27244
	ctx.r9.s64 = r11.s64 + 27244;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8252dd20
	if (!cr6.gt) goto loc_8252DD20;
loc_8252DD08:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x8252dd08
	if (cr6.gt) goto loc_8252DD08;
loc_8252DD20:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,27232
	ctx.r9.s64 = r11.s64 + 27232;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blelr cr6
	if (!cr6.gt) return;
loc_8252DD38:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x8252dd38
	if (cr6.gt) goto loc_8252DD38;
}

__attribute__((alias("__imp__sub_8252DD50"))) PPC_WEAK_FUNC(sub_8252DD50);
PPC_FUNC_IMPL(__imp__sub_8252DD50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252DD54"))) PPC_WEAK_FUNC(sub_8252DD54);
PPC_FUNC_IMPL(__imp__sub_8252DD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252DD58"))) PPC_WEAK_FUNC(sub_8252DD58);
PPC_FUNC_IMPL(__imp__sub_8252DD58) {
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
	// bl 0x8252dcf0
	sub_8252DCF0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8252dd90
	if (cr6.eq) goto loc_8252DD90;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8252DD90:
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

__attribute__((alias("__imp__sub_8252DDA4"))) PPC_WEAK_FUNC(sub_8252DDA4);
PPC_FUNC_IMPL(__imp__sub_8252DDA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252DDA8"))) PPC_WEAK_FUNC(sub_8252DDA8);
PPC_FUNC_IMPL(__imp__sub_8252DDA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-21604(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -21604);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252DDB4"))) PPC_WEAK_FUNC(sub_8252DDB4);
PPC_FUNC_IMPL(__imp__sub_8252DDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252DDB8"))) PPC_WEAK_FUNC(sub_8252DDB8);
PPC_FUNC_IMPL(__imp__sub_8252DDB8) {
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
	// bl 0x8252d7a0
	sub_8252D7A0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8252ddf0
	if (cr6.eq) goto loc_8252DDF0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8252DDF0:
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

__attribute__((alias("__imp__sub_8252DE04"))) PPC_WEAK_FUNC(sub_8252DE04);
PPC_FUNC_IMPL(__imp__sub_8252DE04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252DE08"))) PPC_WEAK_FUNC(sub_8252DE08);
PPC_FUNC_IMPL(__imp__sub_8252DE08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,-1
	r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stb r10,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r10.u8);
}

__attribute__((alias("__imp__sub_8252DE24"))) PPC_WEAK_FUNC(sub_8252DE24);
PPC_FUNC_IMPL(__imp__sub_8252DE24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252DE28"))) PPC_WEAK_FUNC(sub_8252DE28);
PPC_FUNC_IMPL(__imp__sub_8252DE28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252DE2C"))) PPC_WEAK_FUNC(sub_8252DE2C);
PPC_FUNC_IMPL(__imp__sub_8252DE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252DE30"))) PPC_WEAK_FUNC(sub_8252DE30);
PPC_FUNC_IMPL(__imp__sub_8252DE30) {
	PPC_FUNC_PROLOGUE();
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252DE38"))) PPC_WEAK_FUNC(sub_8252DE38);
PPC_FUNC_IMPL(__imp__sub_8252DE38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252DE40"))) PPC_WEAK_FUNC(sub_8252DE40);
PPC_FUNC_IMPL(__imp__sub_8252DE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252DE4C"))) PPC_WEAK_FUNC(sub_8252DE4C);
PPC_FUNC_IMPL(__imp__sub_8252DE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252DE50"))) PPC_WEAK_FUNC(sub_8252DE50);
PPC_FUNC_IMPL(__imp__sub_8252DE50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252DE58"))) PPC_WEAK_FUNC(sub_8252DE58);
PPC_FUNC_IMPL(__imp__sub_8252DE58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252DE60"))) PPC_WEAK_FUNC(sub_8252DE60);
PPC_FUNC_IMPL(__imp__sub_8252DE60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252DE68"))) PPC_WEAK_FUNC(sub_8252DE68);
PPC_FUNC_IMPL(__imp__sub_8252DE68) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252DE70"))) PPC_WEAK_FUNC(sub_8252DE70);
PPC_FUNC_IMPL(__imp__sub_8252DE70) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252DE78"))) PPC_WEAK_FUNC(sub_8252DE78);
PPC_FUNC_IMPL(__imp__sub_8252DE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// stw r4,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r4.u32);
	// lwz r5,-21376(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -21376);
	// b 0x8251fdb0
	sub_8251FDB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252DE88"))) PPC_WEAK_FUNC(sub_8252DE88);
PPC_FUNC_IMPL(__imp__sub_8252DE88) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251ffe8
	sub_8251FFE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252DE8C"))) PPC_WEAK_FUNC(sub_8252DE8C);
PPC_FUNC_IMPL(__imp__sub_8252DE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252DE90"))) PPC_WEAK_FUNC(sub_8252DE90);
PPC_FUNC_IMPL(__imp__sub_8252DE90) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251f9d8
	sub_8251F9D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252DE94"))) PPC_WEAK_FUNC(sub_8252DE94);
PPC_FUNC_IMPL(__imp__sub_8252DE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252DE98"))) PPC_WEAK_FUNC(sub_8252DE98);
PPC_FUNC_IMPL(__imp__sub_8252DE98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,436
	r11.s64 = ctx.r3.s64 + 436;
loc_8252DEA0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// beq cr6,0x8252dec4
	if (cr6.eq) goto loc_8252DEC4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// blt cr6,0x8252dea0
	if (cr6.lt) goto loc_8252DEA0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8252DEC4:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252DECC"))) PPC_WEAK_FUNC(sub_8252DECC);
PPC_FUNC_IMPL(__imp__sub_8252DECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252DED0"))) PPC_WEAK_FUNC(sub_8252DED0);
PPC_FUNC_IMPL(__imp__sub_8252DED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,436
	r11.s64 = ctx.r3.s64 + 436;
	// li r8,1000
	ctx.r8.s64 = 1000;
loc_8252DEDC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,-1000
	ctx.r10.s64 = ctx.r10.s64 + -1000;
	// divw r7,r10,r8
	ctx.r7.s32 = ctx.r10.s32 / ctx.r8.s32;
	// cmpw cr6,r7,r4
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, xer);
	// beq cr6,0x8252df08
	if (cr6.eq) goto loc_8252DF08;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// cmplwi cr6,r9,8
	cr6.compare<uint32_t>(ctx.r9.u32, 8, xer);
	// blt cr6,0x8252dedc
	if (cr6.lt) goto loc_8252DEDC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8252DF08:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252DF10"))) PPC_WEAK_FUNC(sub_8252DF10);
PPC_FUNC_IMPL(__imp__sub_8252DF10) {
	PPC_FUNC_PROLOGUE();
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// addi r3,r3,424
	ctx.r3.s64 = ctx.r3.s64 + 424;
	// b 0x82605748
	sub_82605748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252DF20"))) PPC_WEAK_FUNC(sub_8252DF20);
PPC_FUNC_IMPL(__imp__sub_8252DF20) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,148(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8252e054
	if (cr6.eq) goto loc_8252E054;
	// lbz r11,24(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8252e054
	if (!cr6.eq) goto loc_8252E054;
	// li r31,0
	r31.s64 = 0;
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// addi r11,r3,436
	r11.s64 = ctx.r3.s64 + 436;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r7,1000
	ctx.r7.s64 = 1000;
loc_8252DF58:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,-1000
	ctx.r10.s64 = ctx.r10.s64 + -1000;
	// divw r6,r10,r7
	ctx.r6.s32 = ctx.r10.s32 / ctx.r7.s32;
	// cmpw cr6,r6,r8
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, xer);
	// beq cr6,0x8252df84
	if (cr6.eq) goto loc_8252DF84;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// cmplwi cr6,r9,8
	cr6.compare<uint32_t>(ctx.r9.u32, 8, xer);
	// blt cr6,0x8252df58
	if (cr6.lt) goto loc_8252DF58;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e946c
	return;
loc_8252DF84:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x8252e054
	if (cr6.lt) goto loc_8252E054;
	// rlwinm r11,r9,6,0,25
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r30,r11,r3
	r30.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8252e054
	if (cr6.lt) goto loc_8252E054;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bge cr6,0x8252e054
	if (!cr6.lt) goto loc_8252E054;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lis r29,-31965
	r29.s64 = -2094858240;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,248
	ctx.r10.s64 = r11.s64 + 248;
	// lwz r5,-21348(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + -21348);
	// lwz r4,256(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 256);
	// lwz r3,248(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 248);
	// lwz r11,252(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 252);
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
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,-21348(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + -21348);
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r31.u8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stb r10,161(r1)
	PPC_STORE_U8(ctx.r1.u32 + 161, ctx.r10.u8);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82756f30
	sub_82756F30(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r9,432(r30)
	PPC_STORE_U32(r30.u32 + 432, ctx.r9.u32);
	// bl 0x822e3498
	sub_822E3498(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_8252E054:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8252E058"))) PPC_WEAK_FUNC(sub_8252E058);
PPC_FUNC_IMPL(__imp__sub_8252E058) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8252E05C"))) PPC_WEAK_FUNC(sub_8252E05C);
PPC_FUNC_IMPL(__imp__sub_8252E05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252E060"))) PPC_WEAK_FUNC(sub_8252E060);
PPC_FUNC_IMPL(__imp__sub_8252E060) {
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
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r9,27552
	ctx.r5.s64 = ctx.r9.s64 + 27552;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
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

__attribute__((alias("__imp__sub_8252E0D0"))) PPC_WEAK_FUNC(sub_8252E0D0);
PPC_FUNC_IMPL(__imp__sub_8252E0D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252E0D4"))) PPC_WEAK_FUNC(sub_8252E0D4);
PPC_FUNC_IMPL(__imp__sub_8252E0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252E0D8"))) PPC_WEAK_FUNC(sub_8252E0D8);
PPC_FUNC_IMPL(__imp__sub_8252E0D8) {
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
	// lwz r10,412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 412);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x8252e130
	if (cr6.eq) goto loc_8252E130;
loc_8252E100:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8252e118
	if (!cr6.gt) goto loc_8252E118;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
loc_8252E118:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826efff0
	sub_826EFFF0(ctx, base);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 412);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8252e100
	if (!cr6.eq) goto loc_8252E100;
loc_8252E130:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8252E140"))) PPC_WEAK_FUNC(sub_8252E140);
PPC_FUNC_IMPL(__imp__sub_8252E140) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252E144"))) PPC_WEAK_FUNC(sub_8252E144);
PPC_FUNC_IMPL(__imp__sub_8252E144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252E148"))) PPC_WEAK_FUNC(sub_8252E148);
PPC_FUNC_IMPL(__imp__sub_8252E148) {
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
	// addi r29,r3,408
	r29.s64 = ctx.r3.s64 + 408;
	// addi r28,r4,4
	r28.s64 = ctx.r4.s64 + 4;
	// li r27,8
	r27.s64 = 8;
	// li r26,0
	r26.s64 = 0;
loc_8252E164:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r31,r11
	r31.u64 = r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8252e1a8
	if (!cr6.eq) goto loc_8252E1A8;
loc_8252E180:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// bge cr6,0x8252e194
	if (!cr6.lt) goto loc_8252E194;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x8252e19c
	goto loc_8252E19C;
loc_8252E194:
	// mr r31,r11
	r31.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8252E19C:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8252e180
	if (cr6.eq) goto loc_8252E180;
loc_8252E1A8:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r11,r31
	r11.u64 = r31.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x8252e1c4
	if (cr6.eq) goto loc_8252E1C4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bge cr6,0x8252e1f4
	if (!cr6.lt) goto loc_8252E1F4;
loc_8252E1C4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82493bd8
	sub_82493BD8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8252e1e0
	if (cr0.eq) goto loc_8252E1E0;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r26.u32);
loc_8252E1E0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826fae00
	sub_826FAE00(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8252E1F4:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r26,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r26.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x8252e164
	if (!cr0.eq) goto loc_8252E164;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8252E208"))) PPC_WEAK_FUNC(sub_8252E208);
PPC_FUNC_IMPL(__imp__sub_8252E208) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8252E20C"))) PPC_WEAK_FUNC(sub_8252E20C);
PPC_FUNC_IMPL(__imp__sub_8252E20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252E210"))) PPC_WEAK_FUNC(sub_8252E210);
PPC_FUNC_IMPL(__imp__sub_8252E210) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r28,r4,4
	r28.s64 = ctx.r4.s64 + 4;
	// addi r27,r3,376
	r27.s64 = ctx.r3.s64 + 376;
	// li r26,8
	r26.s64 = 8;
	// li r23,0
	r23.s64 = 0;
	// li r24,1
	r24.s64 = 1;
loc_8252E234:
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// beq cr6,0x8252e2f4
	if (cr6.eq) goto loc_8252E2F4;
	// lwz r31,412(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 412);
	// addi r30,r25,408
	r30.s64 = r25.s64 + 408;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8252e284
	if (!cr6.eq) goto loc_8252E284;
loc_8252E25C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// bge cr6,0x8252e270
	if (!cr6.lt) goto loc_8252E270;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x8252e278
	goto loc_8252E278;
loc_8252E270:
	// mr r31,r11
	r31.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8252E278:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8252e25c
	if (cr6.eq) goto loc_8252E25C;
loc_8252E284:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r11,r31
	r11.u64 = r31.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x8252e2a0
	if (cr6.eq) goto loc_8252E2A0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// bge cr6,0x8252e2d0
	if (!cr6.lt) goto loc_8252E2D0;
loc_8252E2A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82493bd8
	sub_82493BD8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8252e2bc
	if (cr0.eq) goto loc_8252E2BC;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r23.u32);
loc_8252E2BC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826fae00
	sub_826FAE00(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8252E2D0:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x8252e2f4
	if (!cr6.lt) goto loc_8252E2F4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826fb1a0
	sub_826FB1A0(ctx, base);
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r24.u32);
loc_8252E2F4:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x8252e234
	if (!cr0.eq) goto loc_8252E234;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8252E308"))) PPC_WEAK_FUNC(sub_8252E308);
PPC_FUNC_IMPL(__imp__sub_8252E308) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8252E30C"))) PPC_WEAK_FUNC(sub_8252E30C);
PPC_FUNC_IMPL(__imp__sub_8252E30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252E310"))) PPC_WEAK_FUNC(sub_8252E310);
PPC_FUNC_IMPL(__imp__sub_8252E310) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// li r31,0
	r31.s64 = 0;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r5,r11,-8
	ctx.r5.s64 = r11.s64 + -8;
	// lwz r11,24192(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24192);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lis r7,-31965
	ctx.r7.s64 = -2094858240;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r10,r5
	ctx.r10.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r11.u32);
	// lwz r5,-21344(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + -21344);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r8,r8,0,28,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8252e3a0
	if (cr6.eq) goto loc_8252E3A0;
	// li r11,64
	r11.s64 = 64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r31.u8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r11,161(r1)
	PPC_STORE_U8(ctx.r1.u32 + 161, r11.u8);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82756f30
	sub_82756F30(ctx, base);
loc_8252E3A0:
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ed3b8
	sub_828ED3B8(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// li r30,15
	r30.s64 = 15;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, r31.u8);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r30.u32);
	// lwz r4,-21340(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -21340);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_8252E3D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8252e3d0
	if (!cr6.eq) goto loc_8252E3D0;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r11,r1,208
	r11.s64 = ctx.r1.s64 + 208;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8252E3FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8252e3fc
	if (!cr6.eq) goto loc_8252E3FC;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f0b10
	sub_822F0B10(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x8252e438
	if (!cr6.lt) goto loc_8252E438;
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
loc_8252E438:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r6,r9,17000
	ctx.r6.s64 = ctx.r9.s64 + 17000;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r8,r9,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8252e4a4
	if (cr6.eq) goto loc_8252E4A4;
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
loc_8252E4A4:
	// lwz r11,196(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8252e4b8
	if (cr6.lt) goto loc_8252E4B8;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8252E4B8:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r30.u32);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, r31.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8252e4e4
	if (cr6.eq) goto loc_8252E4E4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
loc_8252E4E4:
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
}

__attribute__((alias("__imp__sub_8252E4F0"))) PPC_WEAK_FUNC(sub_8252E4F0);
PPC_FUNC_IMPL(__imp__sub_8252E4F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8252E4F4"))) PPC_WEAK_FUNC(sub_8252E4F4);
PPC_FUNC_IMPL(__imp__sub_8252E4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252E4F8"))) PPC_WEAK_FUNC(sub_8252E4F8);
PPC_FUNC_IMPL(__imp__sub_8252E4F8) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r31,0
	r31.s64 = 0;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f31,27392(r8)
	f31.u64 = PPC_LOAD_U64(ctx.r8.u32 + 27392);
	// addi r16,r3,376
	r16.s64 = ctx.r3.s64 + 376;
	// addi r17,r4,4
	r17.s64 = ctx.r4.s64 + 4;
	// addi r30,r3,248
	r30.s64 = ctx.r3.s64 + 248;
	// li r22,64
	r22.s64 = 64;
	// stw r10,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r27,4
	r27.s64 = 4;
	// li r18,3
	r18.s64 = 3;
	// lis r19,-31965
	r19.s64 = -2094858240;
	// lis r14,-31965
	r14.s64 = -2094858240;
	// lis r24,-31965
	r24.s64 = -2094858240;
	// lis r21,-31965
	r21.s64 = -2094858240;
	// addi r20,r11,27560
	r20.s64 = r11.s64 + 27560;
	// addi r15,r10,17016
	r15.s64 = ctx.r10.s64 + 17016;
	// addi r25,r9,25512
	r25.s64 = ctx.r9.s64 + 25512;
loc_8252E568:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r5,-21348(r21)
	ctx.r5.u64 = PPC_LOAD_U32(r21.u32 + -21348);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
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
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,-21348(r21)
	ctx.r5.u64 = PPC_LOAD_U32(r21.u32 + -21348);
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
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lwz r9,0(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// addi r10,r23,436
	ctx.r10.s64 = r23.s64 + 436;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8252E5DC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x8252e5fc
	if (cr6.eq) goto loc_8252E5FC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x8252e5dc
	if (cr6.lt) goto loc_8252E5DC;
	// b 0x8252e604
	goto loc_8252E604;
loc_8252E5FC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x8252e688
	if (!cr6.lt) goto loc_8252E688;
loc_8252E604:
	// stb r22,321(r1)
	PPC_STORE_U8(ctx.r1.u32 + 321, r22.u8);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, r31.u8);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82756f30
	sub_82756F30(ctx, base);
	// lwz r11,-21324(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + -21324);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r27.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r10,0,28,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8252e8ec
	if (cr6.eq) goto loc_8252E8EC;
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
	// b 0x8252e8ec
	goto loc_8252E8EC;
loc_8252E688:
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + 0);
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r29,r11,424
	r29.s64 = r11.s64 + 424;
	// blt cr6,0x8252e6c0
	if (cr6.lt) goto loc_8252E6C0;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r23,408
	ctx.r3.s64 = r23.s64 + 408;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826fb1a0
	sub_826FB1A0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// blt cr6,0x8252e8ec
	if (cr6.lt) goto loc_8252E8EC;
loc_8252E6C0:
	// lwz r11,0(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 0);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x8252e8cc
	if (cr6.eq) goto loc_8252E8CC;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r10.u32);
	// beq cr6,0x8252e850
	if (cr6.eq) goto loc_8252E850;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8252e7ec
	if (cr6.eq) goto loc_8252E7EC;
	// stb r22,257(r1)
	PPC_STORE_U8(ctx.r1.u32 + 257, r22.u8);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, r31.u8);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82756f30
	sub_82756F30(ctx, base);
	// lwz r11,-21324(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + -21324);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r31.u32);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r27.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r10,0,28,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// lwz r11,-21344(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + -21344);
	// addi r4,r29,52
	ctx.r4.s64 = r29.s64 + 52;
	// stfd f31,376(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 376, f31.u64);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r31.u32);
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// stw r4,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r4.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, r31.u32);
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// stw r11,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, r31.u32);
	// stw r27,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, r27.u32);
	// stw r27,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, r27.u32);
	// stw r18,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, r18.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r10,0,28,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// addi r28,r1,384
	r28.s64 = ctx.r1.s64 + 384;
	// li r26,2
	r26.s64 = 2;
loc_8252E7B0:
	// addi r28,r28,-16
	r28.s64 = r28.s64 + -16;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8252e7d8
	if (cr6.eq) goto loc_8252E7D8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
loc_8252E7D8:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bge 0x8252e7b0
	if (!cr0.lt) goto loc_8252E7B0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
	// b 0x8252e8cc
	goto loc_8252E8CC;
loc_8252E7EC:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// ld r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8252e310
	sub_8252E310(ctx, base);
	// lwz r11,-21324(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + -21324);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r31.u32);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r27.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r10,0,28,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
	// b 0x8252e8cc
	goto loc_8252E8CC;
loc_8252E850:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// ld r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8252e310
	sub_8252E310(ctx, base);
	// lwz r11,-21328(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + -21328);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r10,0,28,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8252e8cc
	if (cr6.eq) goto loc_8252E8CC;
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
loc_8252E8CC:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r23,408
	ctx.r3.s64 = r23.s64 + 408;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826fb1a0
	sub_826FB1A0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// stw r10,0(r16)
	PPC_STORE_U32(r16.u32 + 0, ctx.r10.u32);
loc_8252E8EC:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8252e910
	if (cr6.eq) goto loc_8252E910;
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
loc_8252E910:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8252e934
	if (cr6.eq) goto loc_8252E934;
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
loc_8252E934:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r17,r17,4
	r17.s64 = r17.s64 + 4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r16,r16,4
	r16.s64 = r16.s64 + 4;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x8252e568
	if (cr6.lt) goto loc_8252E568;
	// lwz r3,388(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
}

__attribute__((alias("__imp__sub_8252E964"))) PPC_WEAK_FUNC(sub_8252E964);
PPC_FUNC_IMPL(__imp__sub_8252E964) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_8252E968"))) PPC_WEAK_FUNC(sub_8252E968);
PPC_FUNC_IMPL(__imp__sub_8252E968) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r27,-31970
	r27.s64 = -2095185920;
	// addi r10,r11,27580
	ctx.r10.s64 = r11.s64 + 27580;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r24,0
	r24.s64 = 0;
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252e9a8
	if (cr6.eq) goto loc_8252E9A8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252e9ac
	if (!cr6.eq) goto loc_8252E9AC;
loc_8252E9A8:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8252E9AC:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19432(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19432);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r25,r28,160
	r25.s64 = r28.s64 + 160;
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
	// bne cr6,0x8252ea04
	if (!cr6.eq) goto loc_8252EA04;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8252ea04
	if (!cr6.eq) goto loc_8252EA04;
	// lwz r11,19432(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19432);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8252EA04:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252ea20
	if (cr6.eq) goto loc_8252EA20;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252ea24
	if (!cr6.eq) goto loc_8252EA24;
loc_8252EA20:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8252EA24:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19428(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19428);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r26,r28,188
	r26.s64 = r28.s64 + 188;
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
	// bne cr6,0x8252ea7c
	if (!cr6.eq) goto loc_8252EA7C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8252ea7c
	if (!cr6.eq) goto loc_8252EA7C;
	// lwz r11,19428(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19428);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8252EA7C:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252ea98
	if (cr6.eq) goto loc_8252EA98;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252ea9c
	if (!cr6.eq) goto loc_8252EA9C;
loc_8252EA98:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8252EA9C:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19380(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19380);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r27,r28,216
	r27.s64 = r28.s64 + 216;
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
	// bne cr6,0x8252eaf4
	if (!cr6.eq) goto loc_8252EAF4;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8252eaf4
	if (!cr6.eq) goto loc_8252EAF4;
	// lwz r11,19380(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19380);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8252EAF4:
	// lwz r6,412(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 412);
	// addi r4,r28,408
	ctx.r4.s64 = r28.s64 + 408;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82727fa0
	sub_82727FA0(ctx, base);
	// lwz r3,412(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 412);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// addi r31,r28,376
	r31.s64 = r28.s64 + 376;
	// li r30,7
	r30.s64 = 7;
loc_8252EB18:
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8252eb40
	if (cr6.eq) goto loc_8252EB40;
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
loc_8252EB40:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x8252eb18
	if (!cr0.lt) goto loc_8252EB18;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82520060
	sub_82520060(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8252EB6C"))) PPC_WEAK_FUNC(sub_8252EB6C);
PPC_FUNC_IMPL(__imp__sub_8252EB6C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8252EB70"))) PPC_WEAK_FUNC(sub_8252EB70);
PPC_FUNC_IMPL(__imp__sub_8252EB70) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r30,124(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r10,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// blt cr6,0x8252eba4
	if (cr6.lt) goto loc_8252EBA4;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8252eba8
	goto loc_8252EBA8;
loc_8252EBA4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8252EBA8:
	// addi r31,r30,28
	r31.s64 = r30.s64 + 28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8251ebd0
	sub_8251EBD0(ctx, base);
	// lis r30,-31965
	r30.s64 = -2094858240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-21372(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -21372);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r5,-21372(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + -21372);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
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
	// li r31,0
	r31.s64 = 0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r30,r25,248
	r30.s64 = r25.s64 + 248;
	// mr r29,r31
	r29.u64 = r31.u64;
	// lis r19,-31965
	r19.s64 = -2094858240;
	// lis r20,-31965
	r20.s64 = -2094858240;
	// lis r21,-31965
	r21.s64 = -2094858240;
	// lis r22,-31965
	r22.s64 = -2094858240;
	// lis r23,-31965
	r23.s64 = -2094858240;
	// addi r24,r11,13432
	r24.s64 = r11.s64 + 13432;
loc_8252EC30:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r5,-21368(r23)
	ctx.r5.u64 = PPC_LOAD_U32(r23.u32 + -21368);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
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
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r5,-21364(r22)
	ctx.r5.u64 = PPC_LOAD_U32(r22.u32 + -21364);
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
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
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,-21360(r21)
	ctx.r5.u64 = PPC_LOAD_U32(r21.u32 + -21360);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
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
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,-21356(r20)
	ctx.r5.u64 = PPC_LOAD_U32(r20.u32 + -21356);
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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
	// addi r26,r29,1
	r26.s64 = r29.s64 + 1;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,156(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 156);
	// bl 0x8250c758
	sub_8250C758(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x827581a0
	sub_827581A0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x827581a0
	sub_827581A0(ctx, base);
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(r29.u32, 3, xer);
	// bge cr6,0x8252edd0
	if (!cr6.lt) goto loc_8252EDD0;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,-21352(r19)
	ctx.r5.u64 = PPC_LOAD_U32(r19.u32 + -21352);
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x827581a0
	sub_827581A0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8252edd0
	if (cr6.eq) goto loc_8252EDD0;
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
loc_8252EDD0:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8252edf4
	if (cr6.eq) goto loc_8252EDF4;
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
loc_8252EDF4:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8252ee18
	if (cr6.eq) goto loc_8252EE18;
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
loc_8252EE18:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8252ee3c
	if (cr6.eq) goto loc_8252EE3C;
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
loc_8252EE3C:
	// mr r29,r26
	r29.u64 = r26.u64;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmplwi cr6,r26,8
	cr6.compare<uint32_t>(r26.u32, 8, xer);
	// blt cr6,0x8252ec30
	if (cr6.lt) goto loc_8252EC30;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
}

__attribute__((alias("__imp__sub_8252EE58"))) PPC_WEAK_FUNC(sub_8252EE58);
PPC_FUNC_IMPL(__imp__sub_8252EE58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_8252EE5C"))) PPC_WEAK_FUNC(sub_8252EE5C);
PPC_FUNC_IMPL(__imp__sub_8252EE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252EE60"))) PPC_WEAK_FUNC(sub_8252EE60);
PPC_FUNC_IMPL(__imp__sub_8252EE60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8252ef20
	if (!cr6.eq) goto loc_8252EF20;
	// lwz r11,124(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252ee8c
	if (cr6.lt) goto loc_8252EE8C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252ee90
	goto loc_8252EE90;
loc_8252EE8C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252EE90:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r11,-21336(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -21336);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r6,r6,17016
	ctx.r6.s64 = ctx.r6.s64 + 17016;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
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
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8252efc4
	if (cr6.eq) goto loc_8252EFC4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8252EF20:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8252efc4
	if (!cr6.eq) goto loc_8252EFC4;
	// lwz r11,124(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252ef40
	if (cr6.lt) goto loc_8252EF40;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252ef44
	goto loc_8252EF44;
loc_8252EF40:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252EF44:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// li r11,0
	r11.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r11,-21332(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21332);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r6,r7,17016
	ctx.r6.s64 = ctx.r7.s64 + 17016;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
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
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8252efc4
	if (cr6.eq) goto loc_8252EFC4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82757960
	sub_82757960(ctx, base);
loc_8252EFC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8252EFD0"))) PPC_WEAK_FUNC(sub_8252EFD0);
PPC_FUNC_IMPL(__imp__sub_8252EFD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252EFD4"))) PPC_WEAK_FUNC(sub_8252EFD4);
PPC_FUNC_IMPL(__imp__sub_8252EFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252EFD8"))) PPC_WEAK_FUNC(sub_8252EFD8);
PPC_FUNC_IMPL(__imp__sub_8252EFD8) {
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
	// lbz r11,148(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8252f030
	if (cr6.eq) goto loc_8252F030;
	// lwz r11,416(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bge cr6,0x8252f010
	if (!cr6.lt) goto loc_8252F010;
	// bl 0x8252e148
	sub_8252E148(ctx, base);
loc_8252F010:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8252e0d8
	sub_8252E0D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8252e210
	sub_8252E210(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8252e4f8
	sub_8252E4F8(ctx, base);
loc_8252F030:
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

__attribute__((alias("__imp__sub_8252F044"))) PPC_WEAK_FUNC(sub_8252F044);
PPC_FUNC_IMPL(__imp__sub_8252F044) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252F048"))) PPC_WEAK_FUNC(sub_8252F048);
PPC_FUNC_IMPL(__imp__sub_8252F048) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825200d8
	sub_825200D8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r27,r31,160
	r27.s64 = r31.s64 + 160;
	// addi r10,r11,27580
	ctx.r10.s64 = r11.s64 + 27580;
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
	// addi r24,r31,216
	r24.s64 = r31.s64 + 216;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r30.u32);
	// addi r3,r31,408
	ctx.r3.s64 = r31.s64 + 408;
	// stw r30,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r30.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(r31.u32 + 264, r30.u32);
	// stw r30,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r30.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(r31.u32 + 280, r30.u32);
	// stw r30,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r30.u32);
	// stw r30,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r30.u32);
	// stw r30,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r30.u32);
	// stw r30,312(r31)
	PPC_STORE_U32(r31.u32 + 312, r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r30.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(r31.u32 + 344, r30.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r30.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(r31.u32 + 360, r30.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(r31.u32 + 364, r30.u32);
	// bl 0x826f0080
	sub_826F0080(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,820(r31)
	PPC_STORE_U32(r31.u32 + 820, r11.u32);
	// lis r29,-31970
	r29.s64 = -2095185920;
	// stw r11,824(r31)
	PPC_STORE_U32(r31.u32 + 824, r11.u32);
	// stw r11,432(r31)
	PPC_STORE_U32(r31.u32 + 432, r11.u32);
	// stw r11,436(r31)
	PPC_STORE_U32(r31.u32 + 436, r11.u32);
	// stw r11,440(r31)
	PPC_STORE_U32(r31.u32 + 440, r11.u32);
	// stw r11,496(r31)
	PPC_STORE_U32(r31.u32 + 496, r11.u32);
	// stw r11,500(r31)
	PPC_STORE_U32(r31.u32 + 500, r11.u32);
	// stw r11,504(r31)
	PPC_STORE_U32(r31.u32 + 504, r11.u32);
	// stw r11,560(r31)
	PPC_STORE_U32(r31.u32 + 560, r11.u32);
	// stw r11,564(r31)
	PPC_STORE_U32(r31.u32 + 564, r11.u32);
	// stw r11,568(r31)
	PPC_STORE_U32(r31.u32 + 568, r11.u32);
	// stw r11,624(r31)
	PPC_STORE_U32(r31.u32 + 624, r11.u32);
	// stw r11,628(r31)
	PPC_STORE_U32(r31.u32 + 628, r11.u32);
	// stw r11,632(r31)
	PPC_STORE_U32(r31.u32 + 632, r11.u32);
	// stw r11,688(r31)
	PPC_STORE_U32(r31.u32 + 688, r11.u32);
	// stw r11,692(r31)
	PPC_STORE_U32(r31.u32 + 692, r11.u32);
	// stw r11,696(r31)
	PPC_STORE_U32(r31.u32 + 696, r11.u32);
	// stw r11,752(r31)
	PPC_STORE_U32(r31.u32 + 752, r11.u32);
	// stw r11,756(r31)
	PPC_STORE_U32(r31.u32 + 756, r11.u32);
	// stw r11,760(r31)
	PPC_STORE_U32(r31.u32 + 760, r11.u32);
	// stw r11,816(r31)
	PPC_STORE_U32(r31.u32 + 816, r11.u32);
	// stw r11,880(r31)
	PPC_STORE_U32(r31.u32 + 880, r11.u32);
	// stw r11,884(r31)
	PPC_STORE_U32(r31.u32 + 884, r11.u32);
	// stw r11,888(r31)
	PPC_STORE_U32(r31.u32 + 888, r11.u32);
	// lis r11,-32173
	r11.s64 = -2108489728;
	// std r30,424(r31)
	PPC_STORE_U64(r31.u32 + 424, r30.u64);
	// stb r30,444(r31)
	PPC_STORE_U8(r31.u32 + 444, r30.u8);
	// addi r26,r11,-4136
	r26.s64 = r11.s64 + -4136;
	// std r30,488(r31)
	PPC_STORE_U64(r31.u32 + 488, r30.u64);
	// stb r30,508(r31)
	PPC_STORE_U8(r31.u32 + 508, r30.u8);
	// std r30,552(r31)
	PPC_STORE_U64(r31.u32 + 552, r30.u64);
	// stb r30,572(r31)
	PPC_STORE_U8(r31.u32 + 572, r30.u8);
	// std r30,616(r31)
	PPC_STORE_U64(r31.u32 + 616, r30.u64);
	// stb r30,636(r31)
	PPC_STORE_U8(r31.u32 + 636, r30.u8);
	// std r30,680(r31)
	PPC_STORE_U64(r31.u32 + 680, r30.u64);
	// stb r30,700(r31)
	PPC_STORE_U8(r31.u32 + 700, r30.u8);
	// std r30,744(r31)
	PPC_STORE_U64(r31.u32 + 744, r30.u64);
	// stb r30,764(r31)
	PPC_STORE_U8(r31.u32 + 764, r30.u8);
	// std r30,808(r31)
	PPC_STORE_U64(r31.u32 + 808, r30.u64);
	// stb r30,828(r31)
	PPC_STORE_U8(r31.u32 + 828, r30.u8);
	// std r30,872(r31)
	PPC_STORE_U64(r31.u32 + 872, r30.u64);
	// stb r30,892(r31)
	PPC_STORE_U8(r31.u32 + 892, r30.u8);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252f1b0
	if (cr6.eq) goto loc_8252F1B0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252f1b4
	if (!cr6.eq) goto loc_8252F1B4;
loc_8252F1B0:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_8252F1B4:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r23,12(r10)
	r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r28,r11,-3784
	r28.s64 = r11.s64 + -3784;
	// addi r3,r10,1432
	ctx.r3.s64 = ctx.r10.s64 + 1432;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,19432(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19432);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
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
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// lis r11,-32173
	r11.s64 = -2108489728;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,-8432
	r27.s64 = r11.s64 + -8432;
	// beq cr6,0x8252f228
	if (cr6.eq) goto loc_8252F228;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252f22c
	if (!cr6.eq) goto loc_8252F22C;
loc_8252F228:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8252F22C:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r10,1484
	ctx.r3.s64 = ctx.r10.s64 + 1484;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,19428(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19428);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
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
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// lis r11,-32173
	r11.s64 = -2108489728;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,-8416
	r27.s64 = r11.s64 + -8416;
	// beq cr6,0x8252f298
	if (cr6.eq) goto loc_8252F298;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8252f298
	if (cr6.eq) goto loc_8252F298;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8252F298:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r30,12(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,2044
	ctx.r3.s64 = r11.s64 + 2044;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19380(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19380);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
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
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,376
	ctx.r3.s64 = r31.s64 + 376;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8252F2F8"))) PPC_WEAK_FUNC(sub_8252F2F8);
PPC_FUNC_IMPL(__imp__sub_8252F2F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8252F2FC"))) PPC_WEAK_FUNC(sub_8252F2FC);
PPC_FUNC_IMPL(__imp__sub_8252F2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252F300"))) PPC_WEAK_FUNC(sub_8252F300);
PPC_FUNC_IMPL(__imp__sub_8252F300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-21376(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -21376);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252F30C"))) PPC_WEAK_FUNC(sub_8252F30C);
PPC_FUNC_IMPL(__imp__sub_8252F30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252F310"))) PPC_WEAK_FUNC(sub_8252F310);
PPC_FUNC_IMPL(__imp__sub_8252F310) {
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
	// bl 0x8252e968
	sub_8252E968(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8252f348
	if (cr6.eq) goto loc_8252F348;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8252F348:
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

__attribute__((alias("__imp__sub_8252F35C"))) PPC_WEAK_FUNC(sub_8252F35C);
PPC_FUNC_IMPL(__imp__sub_8252F35C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252F360"))) PPC_WEAK_FUNC(sub_8252F360);
PPC_FUNC_IMPL(__imp__sub_8252F360) {
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
	// stw r4,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r4.u32);
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
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 188);
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

__attribute__((alias("__imp__sub_8252F3A8"))) PPC_WEAK_FUNC(sub_8252F3A8);
PPC_FUNC_IMPL(__imp__sub_8252F3A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252F3AC"))) PPC_WEAK_FUNC(sub_8252F3AC);
PPC_FUNC_IMPL(__imp__sub_8252F3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252F3B0"))) PPC_WEAK_FUNC(sub_8252F3B0);
PPC_FUNC_IMPL(__imp__sub_8252F3B0) {
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
	// addi r9,r11,27684
	ctx.r9.s64 = r11.s64 + 27684;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252f3ec
	if (cr6.eq) goto loc_8252F3EC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252f3f0
	if (!cr6.eq) goto loc_8252F3F0;
loc_8252F3EC:
	// li r11,0
	r11.s64 = 0;
loc_8252F3F0:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19464(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19464);
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
	// bne cr6,0x8252f448
	if (!cr6.eq) goto loc_8252F448;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8252f448
	if (!cr6.eq) goto loc_8252F448;
	// lwz r11,19464(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19464);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8252F448:
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

__attribute__((alias("__imp__sub_8252F45C"))) PPC_WEAK_FUNC(sub_8252F45C);
PPC_FUNC_IMPL(__imp__sub_8252F45C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8252F460"))) PPC_WEAK_FUNC(sub_8252F460);
PPC_FUNC_IMPL(__imp__sub_8252F460) {
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
	// beq cr6,0x8252f524
	if (cr6.eq) goto loc_8252F524;
loc_8252F498:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8252f4ac
	if (cr6.lt) goto loc_8252F4AC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8252f4b0
	goto loc_8252F4B0;
loc_8252F4AC:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_8252F4B0:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8252f4e0
	if (cr6.eq) goto loc_8252F4E0;
loc_8252F4C4:
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
	// bne cr6,0x8252f4c4
	if (!cr6.eq) goto loc_8252F4C4;
loc_8252F4E0:
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
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8252f498
	if (!cr6.eq) goto loc_8252F498;
loc_8252F524:
	// lwz r11,188(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 188);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8252f5e4
	if (!cr6.eq) goto loc_8252F5E4;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252f54c
	if (cr6.eq) goto loc_8252F54C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252f550
	if (!cr6.eq) goto loc_8252F550;
loc_8252F54C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8252F550:
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// bl 0x82517a58
	sub_82517A58(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,124(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 124);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// beq cr6,0x8252f5a4
	if (cr6.eq) goto loc_8252F5A4;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252f58c
	if (cr6.lt) goto loc_8252F58C;
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfd f2,27760(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 27760);
	// b 0x8252f5c8
	goto loc_8252F5C8;
loc_8252F58C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfd f2,27760(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 27760);
	// b 0x8252f5c8
	goto loc_8252F5C8;
loc_8252F5A4:
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252f5b4
	if (cr6.lt) goto loc_8252F5B4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252f5b8
	goto loc_8252F5B8;
loc_8252F5B4:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252F5B8:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfd f2,27752(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 27752);
loc_8252F5C8:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfd f3,25816(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 25816);
	// lfd f1,27744(r11)
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 27744);
	// bl 0x8251f1c0
	sub_8251F1C0(ctx, base);
loc_8252F5E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8252F5E8"))) PPC_WEAK_FUNC(sub_8252F5E8);
PPC_FUNC_IMPL(__imp__sub_8252F5E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8252F5EC"))) PPC_WEAK_FUNC(sub_8252F5EC);
PPC_FUNC_IMPL(__imp__sub_8252F5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252F5F0"))) PPC_WEAK_FUNC(sub_8252F5F0);
PPC_FUNC_IMPL(__imp__sub_8252F5F0) {
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
	// lbz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// beq cr6,0x8252f6d0
	if (cr6.eq) goto loc_8252F6D0;
	// lwz r11,124(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252f638
	if (cr6.lt) goto loc_8252F638;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252f63c
	goto loc_8252F63C;
loc_8252F638:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252F63C:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r5,r11,27768
	ctx.r5.s64 = r11.s64 + 27768;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x828eb318
	sub_828EB318(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8252f6d0
	if (cr6.eq) goto loc_8252F6D0;
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
loc_8252F6D0:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
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

__attribute__((alias("__imp__sub_8252F6EC"))) PPC_WEAK_FUNC(sub_8252F6EC);
PPC_FUNC_IMPL(__imp__sub_8252F6EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252F6F0"))) PPC_WEAK_FUNC(sub_8252F6F0);
PPC_FUNC_IMPL(__imp__sub_8252F6F0) {
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
	// addi r10,r11,27684
	ctx.r10.s64 = r11.s64 + 27684;
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
	// addi r29,r11,-2576
	r29.s64 = r11.s64 + -2576;
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252f74c
	if (cr6.eq) goto loc_8252F74C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252f750
	if (!cr6.eq) goto loc_8252F750;
loc_8252F74C:
	// li r11,0
	r11.s64 = 0;
loc_8252F750:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,1028
	ctx.r3.s64 = ctx.r9.s64 + 1028;
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
	// lwz r11,19464(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19464);
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

__attribute__((alias("__imp__sub_8252F7A4"))) PPC_WEAK_FUNC(sub_8252F7A4);
PPC_FUNC_IMPL(__imp__sub_8252F7A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8252F7A8"))) PPC_WEAK_FUNC(sub_8252F7A8);
PPC_FUNC_IMPL(__imp__sub_8252F7A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-21256(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -21256);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252F7B4"))) PPC_WEAK_FUNC(sub_8252F7B4);
PPC_FUNC_IMPL(__imp__sub_8252F7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252F7B8"))) PPC_WEAK_FUNC(sub_8252F7B8);
PPC_FUNC_IMPL(__imp__sub_8252F7B8) {
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
	// bl 0x8252f3b0
	sub_8252F3B0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8252f7f0
	if (cr6.eq) goto loc_8252F7F0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8252F7F0:
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

__attribute__((alias("__imp__sub_8252F804"))) PPC_WEAK_FUNC(sub_8252F804);
PPC_FUNC_IMPL(__imp__sub_8252F804) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252F808"))) PPC_WEAK_FUNC(sub_8252F808);
PPC_FUNC_IMPL(__imp__sub_8252F808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-21204(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -21204);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252F814"))) PPC_WEAK_FUNC(sub_8252F814);
PPC_FUNC_IMPL(__imp__sub_8252F814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252F818"))) PPC_WEAK_FUNC(sub_8252F818);
PPC_FUNC_IMPL(__imp__sub_8252F818) {
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
	// addi r9,r11,27964
	ctx.r9.s64 = r11.s64 + 27964;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8252f854
	if (cr6.eq) goto loc_8252F854;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8252f858
	if (!cr6.eq) goto loc_8252F858;
loc_8252F854:
	// li r11,0
	r11.s64 = 0;
loc_8252F858:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19656(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19656);
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
	// bne cr6,0x8252f8b0
	if (!cr6.eq) goto loc_8252F8B0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8252f8b0
	if (!cr6.eq) goto loc_8252F8B0;
	// lwz r11,19656(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19656);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8252F8B0:
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

__attribute__((alias("__imp__sub_8252F8C4"))) PPC_WEAK_FUNC(sub_8252F8C4);
PPC_FUNC_IMPL(__imp__sub_8252F8C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8252F8C8"))) PPC_WEAK_FUNC(sub_8252F8C8);
PPC_FUNC_IMPL(__imp__sub_8252F8C8) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
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
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8252f8fc
	if (cr6.eq) goto loc_8252F8FC;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_8252F8FC:
	// lwz r11,132(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 132);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8252fcb8
	if (!cr6.gt) goto loc_8252FCB8;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// li r25,0
	r25.s64 = 0;
	// addi r29,r11,-21176
	r29.s64 = r11.s64 + -21176;
loc_8252F918:
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// add r31,r25,r11
	r31.u64 = r25.u64 + r11.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8252f934
	if (cr6.lt) goto loc_8252F934;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8252f938
	goto loc_8252F938;
loc_8252F934:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_8252F938:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8252f968
	if (cr6.eq) goto loc_8252F968;
loc_8252F94C:
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
	// bne cr6,0x8252f94c
	if (!cr6.eq) goto loc_8252F94C;
loc_8252F968:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r28,r31,28
	r28.s64 = r31.s64 + 28;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
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
	// lwz r10,-24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + -24);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8252f9c4
	if (cr6.eq) goto loc_8252F9C4;
loc_8252F9A8:
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
	// bne cr6,0x8252f9a8
	if (!cr6.eq) goto loc_8252F9A8;
loc_8252F9C4:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + -24);
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
	// lwz r10,-20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + -20);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8252fa38
	if (cr6.eq) goto loc_8252FA38;
loc_8252FA1C:
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
	// bne cr6,0x8252fa1c
	if (!cr6.eq) goto loc_8252FA1C;
loc_8252FA38:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + -20);
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
	// lwz r10,-16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + -16);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8252faa8
	if (cr6.eq) goto loc_8252FAA8;
loc_8252FA8C:
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
	// bne cr6,0x8252fa8c
	if (!cr6.eq) goto loc_8252FA8C;
loc_8252FAA8:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + -16);
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
	// lwz r10,-12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + -12);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8252fb18
	if (cr6.eq) goto loc_8252FB18;
loc_8252FAFC:
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
	// bne cr6,0x8252fafc
	if (!cr6.eq) goto loc_8252FAFC;
loc_8252FB18:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + -12);
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
	// lwz r10,-8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + -8);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8252fb88
	if (cr6.eq) goto loc_8252FB88;
loc_8252FB6C:
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
	// bne cr6,0x8252fb6c
	if (!cr6.eq) goto loc_8252FB6C;
loc_8252FB88:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + -8);
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
	// lwz r10,-4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + -4);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8252fbf8
	if (cr6.eq) goto loc_8252FBF8;
loc_8252FBDC:
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
	// bne cr6,0x8252fbdc
	if (!cr6.eq) goto loc_8252FBDC;
loc_8252FBF8:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + -4);
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
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8252fc68
	if (cr6.eq) goto loc_8252FC68;
loc_8252FC4C:
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
	// bne cr6,0x8252fc4c
	if (!cr6.eq) goto loc_8252FC4C;
loc_8252FC68:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
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
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r25,r25,48
	r25.s64 = r25.s64 + 48;
	// cmplw cr6,r26,r8
	cr6.compare<uint32_t>(r26.u32, ctx.r8.u32, xer);
	// blt cr6,0x8252f918
	if (cr6.lt) goto loc_8252F918;
loc_8252FCB8:
	// lwz r11,132(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 132);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x8252ff10
	if (cr6.eq) goto loc_8252FF10;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x8252fdec
	if (cr6.eq) goto loc_8252FDEC;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x8252ffa4
	if (!cr6.eq) goto loc_8252FFA4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r30,r27,56
	r30.s64 = r27.s64 + 56;
	// lfd f0,17744(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 17744);
	// lfd f13,28032(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 28032);
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
	// blt cr6,0x8252fd24
	if (cr6.lt) goto loc_8252FD24;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252fd28
	goto loc_8252FD28;
loc_8252FD24:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252FD28:
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
	// blt cr6,0x8252fd50
	if (cr6.lt) goto loc_8252FD50;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252fd54
	goto loc_8252FD54;
loc_8252FD50:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252FD54:
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
	// blt cr6,0x8252fd7c
	if (cr6.lt) goto loc_8252FD7C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252fd80
	goto loc_8252FD80;
loc_8252FD7C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252FD80:
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
	// blt cr6,0x8252fda4
	if (cr6.lt) goto loc_8252FDA4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252fda8
	goto loc_8252FDA8;
loc_8252FDA4:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252FDA8:
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
	// b 0x8252ffa4
	goto loc_8252FFA4;
loc_8252FDEC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// lfd f0,16944(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16944);
	// lfd f13,17744(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 17744);
	// lfd f31,28032(r8)
	f31.u64 = PPC_LOAD_U64(ctx.r8.u32 + 28032);
	// stfd f0,32(r27)
	PPC_STORE_U64(r27.u32 + 32, f0.u64);
	// stfd f13,48(r27)
	PPC_STORE_U64(r27.u32 + 48, ctx.f13.u64);
	// stfd f31,16(r27)
	PPC_STORE_U64(r27.u32 + 16, f31.u64);
	// stfd f13,40(r27)
	PPC_STORE_U64(r27.u32 + 40, ctx.f13.u64);
	// stfd f31,24(r27)
	PPC_STORE_U64(r27.u32 + 24, f31.u64);
	// stfd f0,8(r27)
	PPC_STORE_U64(r27.u32 + 8, f0.u64);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8252fe3c
	if (cr6.lt) goto loc_8252FE3C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252fe40
	goto loc_8252FE40;
loc_8252FE3C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252FE40:
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
	// blt cr6,0x8252fe68
	if (cr6.lt) goto loc_8252FE68;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252fe6c
	goto loc_8252FE6C;
loc_8252FE68:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252FE6C:
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
	// blt cr6,0x8252fe90
	if (cr6.lt) goto loc_8252FE90;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252fe94
	goto loc_8252FE94;
loc_8252FE90:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252FE94:
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
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252feec
	if (cr6.lt) goto loc_8252FEEC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252fef0
	goto loc_8252FEF0;
loc_8252FEEC:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252FEF0:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lfd f2,17728(r11)
	ctx.f2.u64 = PPC_LOAD_U64(r11.u32 + 17728);
	// lfd f3,16952(r10)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16952);
	// b 0x8252ff98
	goto loc_8252FF98;
loc_8252FF10:
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8252ff28
	if (cr6.lt) goto loc_8252FF28;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252ff2c
	goto loc_8252FF2C;
loc_8252FF28:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252FF2C:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfd f31,17728(r10)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 17728);
	// lfd f30,16952(r9)
	f30.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16952);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfd f1,28032(r11)
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 28032);
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
	// blt cr6,0x8252ff7c
	if (cr6.lt) goto loc_8252FF7C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8252ff80
	goto loc_8252FF80;
loc_8252FF7C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8252FF80:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// lfd f1,28024(r11)
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 28024);
loc_8252FF98:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8251f1c0
	sub_8251F1C0(ctx, base);
loc_8252FFA4:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8252ffb4
	if (cr6.eq) goto loc_8252FFB4;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8252FFB4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
}

__attribute__((alias("__imp__sub_8252FFC0"))) PPC_WEAK_FUNC(sub_8252FFC0);
PPC_FUNC_IMPL(__imp__sub_8252FFC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8252FFC4"))) PPC_WEAK_FUNC(sub_8252FFC4);
PPC_FUNC_IMPL(__imp__sub_8252FFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252FFC8"))) PPC_WEAK_FUNC(sub_8252FFC8);
PPC_FUNC_IMPL(__imp__sub_8252FFC8) {
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
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r9.u32);
	// beq cr6,0x825302ec
	if (cr6.eq) goto loc_825302EC;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x825302ec
	if (!cr6.lt) goto loc_825302EC;
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
	// blt cr6,0x8253002c
	if (cr6.lt) goto loc_8253002C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82530030
	goto loc_82530030;
loc_8253002C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82530030:
	// addi r31,r11,28
	r31.s64 = r11.s64 + 28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r30,r11,-21176
	r30.s64 = r11.s64 + -21176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -24);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lbz r27,16(r26)
	r27.u64 = PPC_LOAD_U8(r26.u32 + 16);
	// bl 0x8251eaf8
	sub_8251EAF8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// beq cr6,0x825300e0
	if (cr6.eq) goto loc_825300E0;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x8253008c
	if (cr6.eq) goto loc_8253008C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,16512
	r11.s64 = r11.s64 + 16512;
	// b 0x82530094
	goto loc_82530094;
loc_8253008C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,16508
	r11.s64 = r11.s64 + 16508;
loc_82530094:
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
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r6,r9,17016
	ctx.r6.s64 = ctx.r9.s64 + 17016;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
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
loc_825300E0:
	// lbz r11,16(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825302ec
	if (cr6.eq) goto loc_825302EC;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r6,8(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r5,r10,28080
	ctx.r5.s64 = ctx.r10.s64 + 28080;
	// addi r4,r9,28068
	ctx.r4.s64 = ctx.r9.s64 + 28068;
	// addi r3,r8,28056
	ctx.r3.s64 = ctx.r8.s64 + 28056;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r28,r11,28044
	r28.s64 = r11.s64 + 28044;
	// addi r5,r7,28040
	ctx.r5.s64 = ctx.r7.s64 + 28040;
	// li r4,128
	ctx.r4.s64 = 128;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r6,12(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// addi r5,r11,18728
	ctx.r5.s64 = r11.s64 + 18728;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// li r4,128
	ctx.r4.s64 = 128;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bgt cr6,0x825301ac
	if (cr6.gt) goto loc_825301AC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// addi r5,r9,17012
	ctx.r5.s64 = ctx.r9.s64 + 17012;
	// lwz r6,-4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// b 0x825301b8
	goto loc_825301B8;
loc_825301AC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,17012
	ctx.r5.s64 = r11.s64 + 17012;
loc_825301B8:
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825301dc
	if (cr6.eq) goto loc_825301DC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825301e0
	if (!cr6.eq) goto loc_825301E0;
loc_825301DC:
	// li r11,0
	r11.s64 = 0;
loc_825301E0:
	// lwz r28,80(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250c758
	sub_8250C758(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x8250c758
	sub_8250C758(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -16);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8250c5f8
	sub_8250C5F8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -12);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8250c5f8
	sub_8250C5F8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// bl 0x8250c758
	sub_8250C758(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250c758
	sub_8250C758(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
loc_825302EC:
	// lwz r3,496(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
}

__attribute__((alias("__imp__sub_825302F8"))) PPC_WEAK_FUNC(sub_825302F8);
PPC_FUNC_IMPL(__imp__sub_825302F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825302FC"))) PPC_WEAK_FUNC(sub_825302FC);
PPC_FUNC_IMPL(__imp__sub_825302FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82530300"))) PPC_WEAK_FUNC(sub_82530300);
PPC_FUNC_IMPL(__imp__sub_82530300) {
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
	// addi r10,r11,27964
	ctx.r10.s64 = r11.s64 + 27964;
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
	// addi r29,r11,-56
	r29.s64 = r11.s64 + -56;
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82530354
	if (cr6.eq) goto loc_82530354;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82530358
	if (!cr6.eq) goto loc_82530358;
loc_82530354:
	// li r11,0
	r11.s64 = 0;
loc_82530358:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,-1356
	ctx.r3.s64 = ctx.r9.s64 + -1356;
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
	// lwz r11,19656(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19656);
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

__attribute__((alias("__imp__sub_825303AC"))) PPC_WEAK_FUNC(sub_825303AC);
PPC_FUNC_IMPL(__imp__sub_825303AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825303B0"))) PPC_WEAK_FUNC(sub_825303B0);
PPC_FUNC_IMPL(__imp__sub_825303B0) {
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
	// bl 0x8252f818
	sub_8252F818(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825303e8
	if (cr6.eq) goto loc_825303E8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825303E8:
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

__attribute__((alias("__imp__sub_825303FC"))) PPC_WEAK_FUNC(sub_825303FC);
PPC_FUNC_IMPL(__imp__sub_825303FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82530400"))) PPC_WEAK_FUNC(sub_82530400);
PPC_FUNC_IMPL(__imp__sub_82530400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// stw r4,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r4.u32);
	// lwz r5,-21120(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -21120);
	// b 0x8251fdb0
	sub_8251FDB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82530410"))) PPC_WEAK_FUNC(sub_82530410);
PPC_FUNC_IMPL(__imp__sub_82530410) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251ffe8
	sub_8251FFE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82530414"))) PPC_WEAK_FUNC(sub_82530414);
PPC_FUNC_IMPL(__imp__sub_82530414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82530418"))) PPC_WEAK_FUNC(sub_82530418);
PPC_FUNC_IMPL(__imp__sub_82530418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-21120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -21120);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82530424"))) PPC_WEAK_FUNC(sub_82530424);
PPC_FUNC_IMPL(__imp__sub_82530424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82530428"))) PPC_WEAK_FUNC(sub_82530428);
PPC_FUNC_IMPL(__imp__sub_82530428) {
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
	// addi r9,r11,28156
	ctx.r9.s64 = r11.s64 + 28156;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82530464
	if (cr6.eq) goto loc_82530464;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82530468
	if (!cr6.eq) goto loc_82530468;
loc_82530464:
	// li r11,0
	r11.s64 = 0;
loc_82530468:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19640(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19640);
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
	// bne cr6,0x825304c0
	if (!cr6.eq) goto loc_825304C0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825304c0
	if (!cr6.eq) goto loc_825304C0;
	// lwz r11,19640(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19640);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825304C0:
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

__attribute__((alias("__imp__sub_825304D4"))) PPC_WEAK_FUNC(sub_825304D4);
PPC_FUNC_IMPL(__imp__sub_825304D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825304D8"))) PPC_WEAK_FUNC(sub_825304D8);
PPC_FUNC_IMPL(__imp__sub_825304D8) {
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
	// lwz r30,124(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82530500
	if (cr6.lt) goto loc_82530500;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82530504
	goto loc_82530504;
loc_82530500:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82530504:
	// addi r31,r30,28
	r31.s64 = r30.s64 + 28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x8251ebd0
	sub_8251EBD0(ctx, base);
	// lis r30,-31965
	r30.s64 = -2094858240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-21116(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -21116);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-21116(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + -21116);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
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
	// lis r28,-31965
	r28.s64 = -2094858240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-21112(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + -21112);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-21112(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -21112);
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
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
	// lwz r11,188(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 188);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x825305bc
	if (cr6.eq) goto loc_825305BC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x825305bc
	if (cr6.eq) goto loc_825305BC;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82530604
	if (!cr6.eq) goto loc_82530604;
loc_825305BC:
	// lwz r11,124(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 124);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825305d4
	if (cr6.lt) goto loc_825305D4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825305d8
	goto loc_825305D8;
loc_825305D4:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825305D8:
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
	// lfd f1,28216(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 28216);
	// lfd f2,16944(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16944);
	// lfd f3,23192(r9)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 23192);
	// bl 0x8251f1c0
	sub_8251F1C0(ctx, base);
loc_82530604:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82530608"))) PPC_WEAK_FUNC(sub_82530608);
PPC_FUNC_IMPL(__imp__sub_82530608) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8253060C"))) PPC_WEAK_FUNC(sub_8253060C);
PPC_FUNC_IMPL(__imp__sub_8253060C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82530610"))) PPC_WEAK_FUNC(sub_82530610);
PPC_FUNC_IMPL(__imp__sub_82530610) {
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
	// blt cr6,0x8253063c
	if (cr6.lt) goto loc_8253063C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82530640
	goto loc_82530640;
loc_8253063C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82530640:
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
	// stb r9,192(r31)
	PPC_STORE_U8(r31.u32 + 192, ctx.r9.u8);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825306c8
	if (cr6.eq) goto loc_825306C8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
loc_825306C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825306D8"))) PPC_WEAK_FUNC(sub_825306D8);
PPC_FUNC_IMPL(__imp__sub_825306D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825306DC"))) PPC_WEAK_FUNC(sub_825306DC);
PPC_FUNC_IMPL(__imp__sub_825306DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825306E0"))) PPC_WEAK_FUNC(sub_825306E0);
PPC_FUNC_IMPL(__imp__sub_825306E0) {
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
	// lbz r11,192(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 192);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825307a4
	if (cr6.eq) goto loc_825307A4;
	// lwz r11,124(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8253071c
	if (cr6.lt) goto loc_8253071C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82530720
	goto loc_82530720;
loc_8253071C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82530720:
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
	// stb r31,192(r30)
	PPC_STORE_U8(r30.u32 + 192, r31.u8);
	// rlwinm r8,r9,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825307a4
	if (cr6.eq) goto loc_825307A4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
loc_825307A4:
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

__attribute__((alias("__imp__sub_825307B8"))) PPC_WEAK_FUNC(sub_825307B8);
PPC_FUNC_IMPL(__imp__sub_825307B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825307BC"))) PPC_WEAK_FUNC(sub_825307BC);
PPC_FUNC_IMPL(__imp__sub_825307BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825307C0"))) PPC_WEAK_FUNC(sub_825307C0);
PPC_FUNC_IMPL(__imp__sub_825307C0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,28224
	ctx.r5.s64 = ctx.r10.s64 + 28224;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stfd f1,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// lwz r3,-14756(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82530820
	if (cr6.eq) goto loc_82530820;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82530824
	if (!cr6.eq) goto loc_82530824;
loc_82530820:
	// li r11,0
	r11.s64 = 0;
loc_82530824:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// bl 0x8250ce68
	sub_8250CE68(ctx, base);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// lwz r4,-21116(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21116);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,-21112(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21112);
	// bl 0x8251f4e8
	sub_8251F4E8(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
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

__attribute__((alias("__imp__sub_8253087C"))) PPC_WEAK_FUNC(sub_8253087C);
PPC_FUNC_IMPL(__imp__sub_8253087C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82530880"))) PPC_WEAK_FUNC(sub_82530880);
PPC_FUNC_IMPL(__imp__sub_82530880) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825308b0
	if (!cr6.eq) goto loc_825308B0;
	// bl 0x82530610
	sub_82530610(ctx, base);
	// b 0x825308c0
	goto loc_825308C0;
loc_825308B0:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x825308c0
	if (!cr6.eq) goto loc_825308C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825306e0
	sub_825306E0(ctx, base);
loc_825308C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825307c0
	sub_825307C0(ctx, base);
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

__attribute__((alias("__imp__sub_825308E0"))) PPC_WEAK_FUNC(sub_825308E0);
PPC_FUNC_IMPL(__imp__sub_825308E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825308E4"))) PPC_WEAK_FUNC(sub_825308E4);
PPC_FUNC_IMPL(__imp__sub_825308E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825308E8"))) PPC_WEAK_FUNC(sub_825308E8);
PPC_FUNC_IMPL(__imp__sub_825308E8) {
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
	// addi r10,r11,28156
	ctx.r10.s64 = r11.s64 + 28156;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// li r29,0
	r29.s64 = 0;
	// lis r11,-32173
	r11.s64 = -2108489728;
	// stw r29,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r29.u32);
	// stb r29,192(r31)
	PPC_STORE_U8(r31.u32 + 192, r29.u8);
	// addi r28,r11,2176
	r28.s64 = r11.s64 + 2176;
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82530948
	if (cr6.eq) goto loc_82530948;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82530948
	if (cr6.eq) goto loc_82530948;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82530948:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r29,12(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-1172
	ctx.r3.s64 = ctx.r10.s64 + -1172;
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
	// lwz r11,19640(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19640);
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
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8253099C"))) PPC_WEAK_FUNC(sub_8253099C);
PPC_FUNC_IMPL(__imp__sub_8253099C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825309A0"))) PPC_WEAK_FUNC(sub_825309A0);
PPC_FUNC_IMPL(__imp__sub_825309A0) {
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
	// bl 0x82530428
	sub_82530428(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825309d8
	if (cr6.eq) goto loc_825309D8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825309D8:
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

__attribute__((alias("__imp__sub_825309EC"))) PPC_WEAK_FUNC(sub_825309EC);
PPC_FUNC_IMPL(__imp__sub_825309EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825309F0"))) PPC_WEAK_FUNC(sub_825309F0);
PPC_FUNC_IMPL(__imp__sub_825309F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r5,-21060(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -21060);
	// b 0x8251fdb0
	sub_8251FDB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825309FC"))) PPC_WEAK_FUNC(sub_825309FC);
PPC_FUNC_IMPL(__imp__sub_825309FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82530A00"))) PPC_WEAK_FUNC(sub_82530A00);
PPC_FUNC_IMPL(__imp__sub_82530A00) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251ffe8
	sub_8251FFE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82530A04"))) PPC_WEAK_FUNC(sub_82530A04);
PPC_FUNC_IMPL(__imp__sub_82530A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82530A08"))) PPC_WEAK_FUNC(sub_82530A08);
PPC_FUNC_IMPL(__imp__sub_82530A08) {
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

__attribute__((alias("__imp__sub_82530A44"))) PPC_WEAK_FUNC(sub_82530A44);
PPC_FUNC_IMPL(__imp__sub_82530A44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82530A48"))) PPC_WEAK_FUNC(sub_82530A48);
PPC_FUNC_IMPL(__imp__sub_82530A48) {
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
	// addi r9,r11,28356
	ctx.r9.s64 = r11.s64 + 28356;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82530a84
	if (cr6.eq) goto loc_82530A84;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82530a88
	if (!cr6.eq) goto loc_82530A88;
loc_82530A84:
	// li r11,0
	r11.s64 = 0;
loc_82530A88:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19648(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19648);
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
	// bne cr6,0x82530ae0
	if (!cr6.eq) goto loc_82530AE0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82530ae0
	if (!cr6.eq) goto loc_82530AE0;
	// lwz r11,19648(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19648);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82530AE0:
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

__attribute__((alias("__imp__sub_82530AF4"))) PPC_WEAK_FUNC(sub_82530AF4);
PPC_FUNC_IMPL(__imp__sub_82530AF4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82530AF8"))) PPC_WEAK_FUNC(sub_82530AF8);
PPC_FUNC_IMPL(__imp__sub_82530AF8) {
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
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82530c94
	if (cr6.eq) goto loc_82530C94;
	// li r24,0
	r24.s64 = 0;
	// lis r27,-31965
	r27.s64 = -2094858240;
	// lis r26,-31965
	r26.s64 = -2094858240;
loc_82530B24:
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// add r30,r24,r11
	r30.u64 = r24.u64 + r11.u64;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82530b40
	if (cr6.lt) goto loc_82530B40;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82530b44
	goto loc_82530B44;
loc_82530B40:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_82530B44:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82530b74
	if (cr6.eq) goto loc_82530B74;
loc_82530B58:
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
	// bne cr6,0x82530b58
	if (!cr6.eq) goto loc_82530B58;
loc_82530B74:
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
	// lwz r10,-21056(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + -21056);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82530bd0
	if (cr6.eq) goto loc_82530BD0;
loc_82530BB4:
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
	// bne cr6,0x82530bb4
	if (!cr6.eq) goto loc_82530BB4;
loc_82530BD0:
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
	// lwz r5,-21056(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + -21056);
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
	// lwz r10,-21052(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + -21052);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82530c44
	if (cr6.eq) goto loc_82530C44;
loc_82530C28:
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
	// bne cr6,0x82530c28
	if (!cr6.eq) goto loc_82530C28;
loc_82530C44:
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
	// lwz r5,-21052(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + -21052);
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
	// blt cr6,0x82530b24
	if (cr6.lt) goto loc_82530B24;
loc_82530C94:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82530e04
	if (cr6.eq) goto loc_82530E04;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82530d70
	if (cr6.eq) goto loc_82530D70;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x82530e78
	if (!cr6.eq) goto loc_82530E78;
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82530cc8
	if (cr6.lt) goto loc_82530CC8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82530ccc
	goto loc_82530CCC;
loc_82530CC8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82530CCC:
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
	// blt cr6,0x82530cf4
	if (cr6.lt) goto loc_82530CF4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82530cf8
	goto loc_82530CF8;
loc_82530CF4:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82530CF8:
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
	// blt cr6,0x82530d20
	if (cr6.lt) goto loc_82530D20;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82530d24
	goto loc_82530D24;
loc_82530D20:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82530D24:
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
	// blt cr6,0x82530d48
	if (cr6.lt) goto loc_82530D48;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82530d4c
	goto loc_82530D4C;
loc_82530D48:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82530D4C:
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
	// b 0x82530e78
	goto loc_82530E78;
loc_82530D70:
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82530d8c
	if (cr6.lt) goto loc_82530D8C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82530d90
	goto loc_82530D90;
loc_82530D8C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82530D90:
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
	// blt cr6,0x82530db8
	if (cr6.lt) goto loc_82530DB8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82530dbc
	goto loc_82530DBC;
loc_82530DB8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82530DBC:
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
	// blt cr6,0x82530de0
	if (cr6.lt) goto loc_82530DE0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82530de4
	goto loc_82530DE4;
loc_82530DE0:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82530DE4:
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
	// b 0x82530e78
	goto loc_82530E78;
loc_82530E04:
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82530e20
	if (cr6.lt) goto loc_82530E20;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82530e24
	goto loc_82530E24;
loc_82530E20:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82530E24:
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
	// blt cr6,0x82530e48
	if (cr6.lt) goto loc_82530E48;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82530e4c
	goto loc_82530E4C;
loc_82530E48:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82530E4C:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
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
	// lfd f2,28416(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 28416);
	// bl 0x8251ed08
	sub_8251ED08(ctx, base);
loc_82530E78:
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
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82530E90"))) PPC_WEAK_FUNC(sub_82530E90);
PPC_FUNC_IMPL(__imp__sub_82530E90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82530E94"))) PPC_WEAK_FUNC(sub_82530E94);
PPC_FUNC_IMPL(__imp__sub_82530E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82530E98"))) PPC_WEAK_FUNC(sub_82530E98);
PPC_FUNC_IMPL(__imp__sub_82530E98) {
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
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bge cr6,0x82530f78
	if (!cr6.lt) goto loc_82530F78;
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
	// blt cr6,0x82530ee8
	if (cr6.lt) goto loc_82530EE8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82530eec
	goto loc_82530EEC;
loc_82530EE8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82530EEC:
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
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r31,r30
	ctx.r9.u64 = r31.u64 + r30.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r6,r7,26,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stb r8,188(r9)
	PPC_STORE_U8(ctx.r9.u32 + 188, ctx.r8.u8);
	// beq cr6,0x82530f78
	if (cr6.eq) goto loc_82530F78;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
loc_82530F78:
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

__attribute__((alias("__imp__sub_82530F8C"))) PPC_WEAK_FUNC(sub_82530F8C);
PPC_FUNC_IMPL(__imp__sub_82530F8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82530F90"))) PPC_WEAK_FUNC(sub_82530F90);
PPC_FUNC_IMPL(__imp__sub_82530F90) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bge cr6,0x82531064
	if (!cr6.lt) goto loc_82531064;
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
	// blt cr6,0x82530fd8
	if (cr6.lt) goto loc_82530FD8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82530fdc
	goto loc_82530FDC;
loc_82530FD8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82530FDC:
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
	// li r29,0
	r29.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
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
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r31,r30
	ctx.r9.u64 = r31.u64 + r30.u64;
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stb r29,188(r9)
	PPC_STORE_U8(ctx.r9.u32 + 188, r29.u8);
	// beq cr6,0x82531064
	if (cr6.eq) goto loc_82531064;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
loc_82531064:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82531068"))) PPC_WEAK_FUNC(sub_82531068);
PPC_FUNC_IMPL(__imp__sub_82531068) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8253106C"))) PPC_WEAK_FUNC(sub_8253106C);
PPC_FUNC_IMPL(__imp__sub_8253106C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82531070"))) PPC_WEAK_FUNC(sub_82531070);
PPC_FUNC_IMPL(__imp__sub_82531070) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r9.u32);
	// beq cr6,0x82531188
	if (cr6.eq) goto loc_82531188;
	// lwz r30,4(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x82531188
	if (!cr6.lt) goto loc_82531188;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x82531188
	if (cr6.lt) goto loc_82531188;
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// add r8,r30,r11
	ctx.r8.u64 = r30.u64 + r11.u64;
	// rlwinm r11,r8,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + r11.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825310e8
	if (cr6.eq) goto loc_825310E8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825310ec
	if (!cr6.eq) goto loc_825310EC;
loc_825310E8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825310EC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r31,80(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x8253111c
	if (!cr6.lt) goto loc_8253111C;
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// lis r11,-21846
	r11.s64 = -1431699456;
	// ori r10,r11,43691
	ctx.r10.u64 = r11.u64 | 43691;
	// mulhwu r9,r3,r10
	ctx.r9.u64 = (uint64_t(ctx.r3.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r11,r9,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// subf r11,r8,r3
	r11.s64 = ctx.r3.s64 - ctx.r8.s64;
loc_8253111C:
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-21048
	ctx.r8.s64 = ctx.r10.s64 + -21048;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r7,17012
	ctx.r5.s64 = ctx.r7.s64 + 17012;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x828eb318
	sub_828EB318(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250c5f8
	sub_8250C5F8(ctx, base);
	// lis r6,-31965
	ctx.r6.s64 = -2094858240;
	// lis r5,-31965
	ctx.r5.s64 = -2094858240;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r28,28
	ctx.r3.s64 = r28.s64 + 28;
	// lwz r4,-21056(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21056);
	// lwz r31,-21052(r5)
	r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21052);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// bl 0x8251f4e8
	sub_8251F4E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82530e98
	sub_82530E98(ctx, base);
loc_82531188:
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
}

__attribute__((alias("__imp__sub_82531194"))) PPC_WEAK_FUNC(sub_82531194);
PPC_FUNC_IMPL(__imp__sub_82531194) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82531198"))) PPC_WEAK_FUNC(sub_82531198);
PPC_FUNC_IMPL(__imp__sub_82531198) {
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
	// addi r10,r11,28356
	ctx.r10.s64 = r11.s64 + 28356;
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
loc_825311D8:
	// stbx r28,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, r28.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x825311d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825311D8;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r11,-32173
	r11.s64 = -2108489728;
	// addi r30,r11,4208
	r30.s64 = r11.s64 + 4208;
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8253120c
	if (cr6.eq) goto loc_8253120C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82531210
	if (!cr6.eq) goto loc_82531210;
loc_8253120C:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82531210:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,-1260
	ctx.r3.s64 = ctx.r9.s64 + -1260;
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
	// lwz r11,19648(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19648);
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

__attribute__((alias("__imp__sub_82531264"))) PPC_WEAK_FUNC(sub_82531264);
PPC_FUNC_IMPL(__imp__sub_82531264) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82531268"))) PPC_WEAK_FUNC(sub_82531268);
PPC_FUNC_IMPL(__imp__sub_82531268) {
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
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x82531360
	if (!cr6.eq) goto loc_82531360;
	// li r30,0
	r30.s64 = 0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r3,188
	r29.s64 = ctx.r3.s64 + 188;
	// mr r31,r30
	r31.u64 = r30.u64;
	// mr r25,r30
	r25.u64 = r30.u64;
	// li r26,4
	r26.s64 = 4;
	// addi r28,r11,17016
	r28.s64 = r11.s64 + 17016;
	// addi r27,r10,16508
	r27.s64 = ctx.r10.s64 + 16508;
loc_825312A4:
	// lbzx r11,r29,r31
	r11.u64 = PPC_LOAD_U8(r29.u32 + r31.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82531350
	if (!cr6.eq) goto loc_82531350;
	// lwz r11,132(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 132);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bge cr6,0x82531350
	if (!cr6.lt) goto loc_82531350;
	// lwz r11,124(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 124);
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825312d8
	if (cr6.lt) goto loc_825312D8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825312dc
	goto loc_825312DC;
loc_825312D8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825312DC:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
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
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stbx r30,r29,r31
	PPC_STORE_U8(r29.u32 + r31.u32, r30.u8);
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82531350
	if (cr6.eq) goto loc_82531350;
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
loc_82531350:
	// addi r25,r25,48
	r25.s64 = r25.s64 + 48;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r25,192
	cr6.compare<uint32_t>(r25.u32, 192, xer);
	// blt cr6,0x825312a4
	if (cr6.lt) goto loc_825312A4;
loc_82531360:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82531364"))) PPC_WEAK_FUNC(sub_82531364);
PPC_FUNC_IMPL(__imp__sub_82531364) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82531368"))) PPC_WEAK_FUNC(sub_82531368);
PPC_FUNC_IMPL(__imp__sub_82531368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-21060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -21060);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82531374"))) PPC_WEAK_FUNC(sub_82531374);
PPC_FUNC_IMPL(__imp__sub_82531374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82531378"))) PPC_WEAK_FUNC(sub_82531378);
PPC_FUNC_IMPL(__imp__sub_82531378) {
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
	// bl 0x82530a48
	sub_82530A48(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825313b0
	if (cr6.eq) goto loc_825313B0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825313B0:
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

__attribute__((alias("__imp__sub_825313C4"))) PPC_WEAK_FUNC(sub_825313C4);
PPC_FUNC_IMPL(__imp__sub_825313C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825313C8"))) PPC_WEAK_FUNC(sub_825313C8);
PPC_FUNC_IMPL(__imp__sub_825313C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-20992(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -20992);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825313D4"))) PPC_WEAK_FUNC(sub_825313D4);
PPC_FUNC_IMPL(__imp__sub_825313D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825313D8"))) PPC_WEAK_FUNC(sub_825313D8);
PPC_FUNC_IMPL(__imp__sub_825313D8) {
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
	// addi r9,r11,28540
	ctx.r9.s64 = r11.s64 + 28540;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82531414
	if (cr6.eq) goto loc_82531414;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82531418
	if (!cr6.eq) goto loc_82531418;
loc_82531414:
	// li r11,0
	r11.s64 = 0;
loc_82531418:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19652(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19652);
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
	// bne cr6,0x82531470
	if (!cr6.eq) goto loc_82531470;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82531470
	if (!cr6.eq) goto loc_82531470;
	// lwz r11,19652(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19652);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82531470:
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

__attribute__((alias("__imp__sub_82531484"))) PPC_WEAK_FUNC(sub_82531484);
PPC_FUNC_IMPL(__imp__sub_82531484) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82531488"))) PPC_WEAK_FUNC(sub_82531488);
PPC_FUNC_IMPL(__imp__sub_82531488) {
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
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
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
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825314b4
	if (cr6.eq) goto loc_825314B4;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_825314B4:
	// lwz r11,132(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 132);
	// li r23,0
	r23.s64 = 0;
	// mr r26,r23
	r26.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825317c8
	if (!cr6.gt) goto loc_825317C8;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r22,r23
	r22.u64 = r23.u64;
	// li r24,3
	r24.s64 = 3;
	// addi r29,r11,-20976
	r29.s64 = r11.s64 + -20976;
	// addi r25,r10,28616
	r25.s64 = ctx.r10.s64 + 28616;
loc_825314E0:
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// add r30,r22,r11
	r30.u64 = r22.u64 + r11.u64;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x825314fc
	if (cr6.lt) goto loc_825314FC;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82531500
	goto loc_82531500;
loc_825314FC:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_82531500:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82531530
	if (cr6.eq) goto loc_82531530;
loc_82531514:
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
	// bne cr6,0x82531514
	if (!cr6.eq) goto loc_82531514;
loc_82531530:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r28,r30,28
	r28.s64 = r30.s64 + 28;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x82531580
	if (cr6.eq) goto loc_82531580;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82531564
	if (cr6.lt) goto loc_82531564;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82531568
	goto loc_82531568;
loc_82531564:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_82531568:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82531580:
	// clrldi r11,r26,32
	r11.u64 = r26.u64 & 0xFFFFFFFF;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r23.u32);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stfd f13,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f13.u64);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
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
	// lwz r10,-12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + -12);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x825315fc
	if (cr6.eq) goto loc_825315FC;
loc_825315E0:
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
	// bne cr6,0x825315e0
	if (!cr6.eq) goto loc_825315E0;
loc_825315FC:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + -12);
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
	// lwz r10,-8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + -8);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82531670
	if (cr6.eq) goto loc_82531670;
loc_82531654:
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
	// bne cr6,0x82531654
	if (!cr6.eq) goto loc_82531654;
loc_82531670:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + -8);
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
	// lwz r10,-4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + -4);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x825316e4
	if (cr6.eq) goto loc_825316E4;
loc_825316C8:
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
	// bne cr6,0x825316c8
	if (!cr6.eq) goto loc_825316C8;
loc_825316E4:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,-4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + -4);
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
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82531754
	if (cr6.eq) goto loc_82531754;
loc_82531738:
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
	// bne cr6,0x82531738
	if (!cr6.eq) goto loc_82531738;
loc_82531754:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e3c78
	sub_822E3C78(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
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
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825317b4
	if (cr6.eq) goto loc_825317B4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r23.u32);
loc_825317B4:
	// lwz r11,132(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 132);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r22,r22,48
	r22.s64 = r22.s64 + 48;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x825314e0
	if (cr6.lt) goto loc_825314E0;
loc_825317C8:
	// lwz r11,132(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 132);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82531994
	if (cr6.eq) goto loc_82531994;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x825318a8
	if (cr6.eq) goto loc_825318A8;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x82531a08
	if (!cr6.eq) goto loc_82531A08;
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82531800
	if (cr6.lt) goto loc_82531800;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82531804
	goto loc_82531804;
loc_82531800:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82531804:
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
	// blt cr6,0x8253182c
	if (cr6.lt) goto loc_8253182C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82531830
	goto loc_82531830;
loc_8253182C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82531830:
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
	// blt cr6,0x82531858
	if (cr6.lt) goto loc_82531858;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8253185c
	goto loc_8253185C;
loc_82531858:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8253185C:
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
	// blt cr6,0x82531880
	if (cr6.lt) goto loc_82531880;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82531884
	goto loc_82531884;
loc_82531880:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82531884:
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
	// b 0x82531a08
	goto loc_82531A08;
loc_825318A8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// lfd f0,28608(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 28608);
	// stfd f0,8(r27)
	PPC_STORE_U64(r27.u32 + 8, f0.u64);
	// lfd f0,16944(r9)
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16944);
	// stfd f0,16(r27)
	PPC_STORE_U64(r27.u32 + 16, f0.u64);
	// lfd f13,16952(r8)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16952);
	// stfd f0,40(r27)
	PPC_STORE_U64(r27.u32 + 40, f0.u64);
	// stfd f0,24(r27)
	PPC_STORE_U64(r27.u32 + 24, f0.u64);
	// stfd f0,48(r27)
	PPC_STORE_U64(r27.u32 + 48, f0.u64);
	// stfd f13,32(r27)
	PPC_STORE_U64(r27.u32 + 32, ctx.f13.u64);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x825318f8
	if (cr6.lt) goto loc_825318F8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825318fc
	goto loc_825318FC;
loc_825318F8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825318FC:
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
	// blt cr6,0x82531924
	if (cr6.lt) goto loc_82531924;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82531928
	goto loc_82531928;
loc_82531924:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82531928:
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
	// blt cr6,0x8253194c
	if (cr6.lt) goto loc_8253194C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82531950
	goto loc_82531950;
loc_8253194C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82531950:
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
	// b 0x82531a08
	goto loc_82531A08;
loc_82531994:
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825319b0
	if (cr6.lt) goto loc_825319B0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825319b4
	goto loc_825319B4;
loc_825319B0:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825319B4:
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
	// blt cr6,0x825319d8
	if (cr6.lt) goto loc_825319D8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825319dc
	goto loc_825319DC;
loc_825319D8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825319DC:
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
	// lfd f1,28600(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 28600);
	// lfd f2,16952(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16952);
	// bl 0x8251ed08
	sub_8251ED08(ctx, base);
loc_82531A08:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x82531a18
	if (cr6.eq) goto loc_82531A18;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_82531A18:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_82531A1C"))) PPC_WEAK_FUNC(sub_82531A1C);
PPC_FUNC_IMPL(__imp__sub_82531A1C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_82531A20"))) PPC_WEAK_FUNC(sub_82531A20);
PPC_FUNC_IMPL(__imp__sub_82531A20) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
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
	// stw r9,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r9.u32);
	// beq cr6,0x82531cc4
	if (cr6.eq) goto loc_82531CC4;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82531cc4
	if (!cr6.lt) goto loc_82531CC4;
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
	// blt cr6,0x82531a84
	if (cr6.lt) goto loc_82531A84;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82531a88
	goto loc_82531A88;
loc_82531A84:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82531A88:
	// addi r30,r11,28
	r30.s64 = r11.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbz r29,12(r27)
	r29.u64 = PPC_LOAD_U8(r27.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8251eaf8
	sub_8251EAF8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r25,0
	r25.s64 = 0;
	// li r24,4
	r24.s64 = 4;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// addi r26,r11,17016
	r26.s64 = r11.s64 + 17016;
	// beq cr6,0x82531b28
	if (cr6.eq) goto loc_82531B28;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// beq cr6,0x82531ae0
	if (cr6.eq) goto loc_82531AE0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r11,16512
	ctx.r10.s64 = r11.s64 + 16512;
	// b 0x82531ae8
	goto loc_82531AE8;
loc_82531AE0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r11,16508
	ctx.r10.s64 = r11.s64 + 16508;
loc_82531AE8:
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
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
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_82531B28:
	// lbz r11,12(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82531cc4
	if (cr6.eq) goto loc_82531CC4;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82531cc4
	if (!cr6.gt) goto loc_82531CC4;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bgt cr6,0x82531cc4
	if (cr6.gt) goto loc_82531CC4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r11,19596
	ctx.r3.s64 = r11.s64 + 19596;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r11,r10,19588
	r11.s64 = ctx.r10.s64 + 19588;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r10,r9,19580
	ctx.r10.s64 = ctx.r9.s64 + 19580;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r3,r4,19540
	ctx.r3.s64 = ctx.r4.s64 + 19540;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// addi r9,r8,19572
	ctx.r9.s64 = ctx.r8.s64 + 19572;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// addi r8,r7,19564
	ctx.r8.s64 = ctx.r7.s64 + 19564;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// addi r7,r6,19556
	ctx.r7.s64 = ctx.r6.s64 + 19556;
	// addi r6,r5,19548
	ctx.r6.s64 = ctx.r5.s64 + 19548;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r6,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82531bd8
	if (cr6.eq) goto loc_82531BD8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82531bdc
	if (!cr6.eq) goto loc_82531BDC;
loc_82531BD8:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_82531BDC:
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lwz r3,80(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,-4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// bl 0x8250c5f8
	sub_8250C5F8(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,-20988
	r31.s64 = r11.s64 + -20988;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
	// lwz r6,8(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// li r4,128
	ctx.r4.s64 = 128;
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bgt cr6,0x82531c60
	if (cr6.gt) goto loc_82531C60;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r5,r11,28636
	ctx.r5.s64 = r11.s64 + 28636;
	// bl 0x828eb318
	sub_828EB318(ctx, base);
	// b 0x82531c6c
	goto loc_82531C6C;
loc_82531C60:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r5,r11,28628
	ctx.r5.s64 = r11.s64 + 28628;
	// bl 0x828eb318
	sub_828EB318(ctx, base);
loc_82531C6C:
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
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
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_82531CC4:
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
}

__attribute__((alias("__imp__sub_82531CD0"))) PPC_WEAK_FUNC(sub_82531CD0);
PPC_FUNC_IMPL(__imp__sub_82531CD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82531CD4"))) PPC_WEAK_FUNC(sub_82531CD4);
PPC_FUNC_IMPL(__imp__sub_82531CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82531CD8"))) PPC_WEAK_FUNC(sub_82531CD8);
PPC_FUNC_IMPL(__imp__sub_82531CD8) {
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
	// addi r10,r11,28540
	ctx.r10.s64 = r11.s64 + 28540;
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
	// addi r29,r11,6688
	r29.s64 = r11.s64 + 6688;
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82531d2c
	if (cr6.eq) goto loc_82531D2C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82531d30
	if (!cr6.eq) goto loc_82531D30;
loc_82531D2C:
	// li r11,0
	r11.s64 = 0;
loc_82531D30:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,-1308
	ctx.r3.s64 = ctx.r9.s64 + -1308;
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
	// lwz r11,19652(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19652);
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

__attribute__((alias("__imp__sub_82531D84"))) PPC_WEAK_FUNC(sub_82531D84);
PPC_FUNC_IMPL(__imp__sub_82531D84) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82531D88"))) PPC_WEAK_FUNC(sub_82531D88);
PPC_FUNC_IMPL(__imp__sub_82531D88) {
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
	// bl 0x825313d8
	sub_825313D8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82531dc0
	if (cr6.eq) goto loc_82531DC0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82531DC0:
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

__attribute__((alias("__imp__sub_82531DD4"))) PPC_WEAK_FUNC(sub_82531DD4);
PPC_FUNC_IMPL(__imp__sub_82531DD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82531DD8"))) PPC_WEAK_FUNC(sub_82531DD8);
PPC_FUNC_IMPL(__imp__sub_82531DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r5,r11,28644
	ctx.r5.s64 = r11.s64 + 28644;
	// b 0x8251fdb0
	sub_8251FDB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82531DE4"))) PPC_WEAK_FUNC(sub_82531DE4);
PPC_FUNC_IMPL(__imp__sub_82531DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82531DE8"))) PPC_WEAK_FUNC(sub_82531DE8);
PPC_FUNC_IMPL(__imp__sub_82531DE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251ffe8
	sub_8251FFE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82531DEC"))) PPC_WEAK_FUNC(sub_82531DEC);
PPC_FUNC_IMPL(__imp__sub_82531DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82531DF0"))) PPC_WEAK_FUNC(sub_82531DF0);
PPC_FUNC_IMPL(__imp__sub_82531DF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251f9d8
	sub_8251F9D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82531DF4"))) PPC_WEAK_FUNC(sub_82531DF4);
PPC_FUNC_IMPL(__imp__sub_82531DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82531DF8"))) PPC_WEAK_FUNC(sub_82531DF8);
PPC_FUNC_IMPL(__imp__sub_82531DF8) {
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
	// addi r9,r11,28716
	ctx.r9.s64 = r11.s64 + 28716;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82531e34
	if (cr6.eq) goto loc_82531E34;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82531e38
	if (!cr6.eq) goto loc_82531E38;
loc_82531E34:
	// li r11,0
	r11.s64 = 0;
loc_82531E38:
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
	// bne cr6,0x82531e90
	if (!cr6.eq) goto loc_82531E90;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82531e90
	if (!cr6.eq) goto loc_82531E90;
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
loc_82531E90:
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

__attribute__((alias("__imp__sub_82531EA4"))) PPC_WEAK_FUNC(sub_82531EA4);
PPC_FUNC_IMPL(__imp__sub_82531EA4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82531EA8"))) PPC_WEAK_FUNC(sub_82531EA8);
PPC_FUNC_IMPL(__imp__sub_82531EA8) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8253203c
	if (!cr6.gt) goto loc_8253203C;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r25,0
	r25.s64 = 0;
	// addi r26,r11,28696
	r26.s64 = r11.s64 + 28696;
	// addi r28,r10,28676
	r28.s64 = ctx.r10.s64 + 28676;
loc_82531EE4:
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// add r30,r25,r11
	r30.u64 = r25.u64 + r11.u64;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82531f00
	if (cr6.lt) goto loc_82531F00;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82531f04
	goto loc_82531F04;
loc_82531F00:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_82531F04:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82531f34
	if (cr6.eq) goto loc_82531F34;
loc_82531F18:
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
	// bne cr6,0x82531f18
	if (!cr6.eq) goto loc_82531F18;
loc_82531F34:
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
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8251ebd0
	sub_8251EBD0(ctx, base);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// li r11,5381
	r11.s64 = 5381;
	// li r10,109
	ctx.r10.s64 = 109;
loc_82531F68:
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
	// bne cr6,0x82531f68
	if (!cr6.eq) goto loc_82531F68;
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
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
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
loc_82531FD0:
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
	// bne cr6,0x82531fd0
	if (!cr6.eq) goto loc_82531FD0;
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
	// addi r25,r25,48
	r25.s64 = r25.s64 + 48;
	// cmplw cr6,r24,r8
	cr6.compare<uint32_t>(r24.u32, ctx.r8.u32, xer);
	// blt cr6,0x82531ee4
	if (cr6.lt) goto loc_82531EE4;
loc_8253203C:
	// lwz r11,132(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 132);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x8253236c
	if (cr6.eq) goto loc_8253236C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x825321fc
	if (cr6.eq) goto loc_825321FC;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x825324e8
	if (!cr6.eq) goto loc_825324E8;
	// lis r31,-31970
	r31.s64 = -2095185920;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82532074
	if (cr6.eq) goto loc_82532074;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82532078
	if (!cr6.eq) goto loc_82532078;
loc_82532074:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82532078:
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// bl 0x82517d10
	sub_82517D10(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825320d8
	if (cr6.eq) goto loc_825320D8;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825320a4
	if (cr6.eq) goto loc_825320A4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825320a8
	if (!cr6.eq) goto loc_825320A8;
loc_825320A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825320A8:
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// bl 0x82517b08
	sub_82517B08(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825320d8
	if (!cr6.eq) goto loc_825320D8;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfd f12,26272(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + 26272);
	// lfd f13,26280(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 26280);
	// stfd f12,72(r27)
	PPC_STORE_U64(r27.u32 + 72, ctx.f12.u64);
	// stfd f12,56(r27)
	PPC_STORE_U64(r27.u32 + 56, ctx.f12.u64);
	// b 0x825320e8
	goto loc_825320E8;
loc_825320D8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfd f13,26280(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 26280);
	// stfd f13,72(r27)
	PPC_STORE_U64(r27.u32 + 72, ctx.f13.u64);
	// stfd f13,56(r27)
	PPC_STORE_U64(r27.u32 + 56, ctx.f13.u64);
loc_825320E8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r27,56
	r29.s64 = r27.s64 + 56;
	// lfd f0,17968(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 17968);
	// stfd f0,112(r27)
	PPC_STORE_U64(r27.u32 + 112, f0.u64);
	// stfd f13,80(r27)
	PPC_STORE_U64(r27.u32 + 80, ctx.f13.u64);
	// stfd f0,104(r27)
	PPC_STORE_U64(r27.u32 + 104, f0.u64);
	// stfd f0,96(r27)
	PPC_STORE_U64(r27.u32 + 96, f0.u64);
	// stfd f13,64(r27)
	PPC_STORE_U64(r27.u32 + 64, ctx.f13.u64);
	// stfd f0,88(r27)
	PPC_STORE_U64(r27.u32 + 88, f0.u64);
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82532128
	if (cr6.lt) goto loc_82532128;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8253212c
	goto loc_8253212C;
loc_82532128:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8253212C:
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
	// blt cr6,0x82532154
	if (cr6.lt) goto loc_82532154;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82532158
	goto loc_82532158;
loc_82532154:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82532158:
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
	// blt cr6,0x82532180
	if (cr6.lt) goto loc_82532180;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82532184
	goto loc_82532184;
loc_82532180:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82532184:
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
	// blt cr6,0x825321a8
	if (cr6.lt) goto loc_825321A8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825321ac
	goto loc_825321AC;
loc_825321A8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825321AC:
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
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_825321FC:
	// lis r31,-31970
	r31.s64 = -2095185920;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82532218
	if (cr6.eq) goto loc_82532218;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253221c
	if (!cr6.eq) goto loc_8253221C;
loc_82532218:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8253221C:
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// bl 0x82517d10
	sub_82517D10(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8253226c
	if (cr6.eq) goto loc_8253226C;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82532248
	if (cr6.eq) goto loc_82532248;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253224c
	if (!cr6.eq) goto loc_8253224C;
loc_82532248:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8253224C:
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// bl 0x82517b08
	sub_82517B08(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8253226c
	if (!cr6.eq) goto loc_8253226C;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfd f11,26264(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 26264);
	// b 0x82532274
	goto loc_82532274;
loc_8253226C:
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfd f11,26064(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 26064);
loc_82532274:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfd f11,8(r27)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r27.u32 + 8, ctx.f11.u64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// lfd f0,26280(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 26280);
	// lfd f13,17968(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 17968);
	// stfd f13,48(r27)
	PPC_STORE_U64(r27.u32 + 48, ctx.f13.u64);
	// stfd f0,24(r27)
	PPC_STORE_U64(r27.u32 + 24, f0.u64);
	// lfd f12,16944(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 16944);
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// stfd f13,40(r27)
	PPC_STORE_U64(r27.u32 + 40, ctx.f13.u64);
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// stfd f0,16(r27)
	PPC_STORE_U64(r27.u32 + 16, f0.u64);
	// stfd f12,32(r27)
	PPC_STORE_U64(r27.u32 + 32, ctx.f12.u64);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825322c4
	if (cr6.lt) goto loc_825322C4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825322c8
	goto loc_825322C8;
loc_825322C4:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825322C8:
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
	// blt cr6,0x825322f0
	if (cr6.lt) goto loc_825322F0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825322f4
	goto loc_825322F4;
loc_825322F0:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825322F4:
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
	// blt cr6,0x82532318
	if (cr6.lt) goto loc_82532318;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8253231c
	goto loc_8253231C;
loc_82532318:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8253231C:
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
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_8253236C:
	// lis r31,-31970
	r31.s64 = -2095185920;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82532388
	if (cr6.eq) goto loc_82532388;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8253238c
	if (!cr6.eq) goto loc_8253238C;
loc_82532388:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8253238C:
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// bl 0x82517d10
	sub_82517D10(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82532474
	if (cr6.eq) goto loc_82532474;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825323b8
	if (cr6.eq) goto loc_825323B8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825323bc
	if (!cr6.eq) goto loc_825323BC;
loc_825323B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825323BC:
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// bl 0x82517b08
	sub_82517B08(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82532474
	if (!cr6.eq) goto loc_82532474;
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825323e8
	if (cr6.lt) goto loc_825323E8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825323ec
	goto loc_825323EC;
loc_825323E8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825323EC:
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
	// blt cr6,0x8253243c
	if (cr6.lt) goto loc_8253243C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82532440
	goto loc_82532440;
loc_8253243C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82532440:
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
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_82532474:
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82532490
	if (cr6.lt) goto loc_82532490;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82532494
	goto loc_82532494;
loc_82532490:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82532494:
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
	// blt cr6,0x825324b8
	if (cr6.lt) goto loc_825324B8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825324bc
	goto loc_825324BC;
loc_825324B8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825324BC:
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
loc_825324E8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
}

__attribute__((alias("__imp__sub_825324F4"))) PPC_WEAK_FUNC(sub_825324F4);
PPC_FUNC_IMPL(__imp__sub_825324F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825324F8"))) PPC_WEAK_FUNC(sub_825324F8);
PPC_FUNC_IMPL(__imp__sub_825324F8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// beq cr6,0x82532750
	if (cr6.eq) goto loc_82532750;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82532750
	if (!cr6.lt) goto loc_82532750;
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
	// blt cr6,0x82532560
	if (cr6.lt) goto loc_82532560;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82532564
	goto loc_82532564;
loc_82532560:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82532564:
	// addi r29,r11,28
	r29.s64 = r11.s64 + 28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbz r30,28(r26)
	r30.u64 = PPC_LOAD_U8(r26.u32 + 28);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8251eaf8
	sub_8251EAF8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82532600
	if (cr6.eq) goto loc_82532600;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x825325ac
	if (cr6.eq) goto loc_825325AC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,16512
	r11.s64 = r11.s64 + 16512;
	// b 0x825325b4
	goto loc_825325B4;
loc_825325AC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,16508
	r11.s64 = r11.s64 + 16508;
loc_825325B4:
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
loc_82532600:
	// lbz r11,28(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82532750
	if (cr6.eq) goto loc_82532750;
	// lis r27,-31970
	r27.s64 = -2095185920;
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8253262c
	if (cr6.eq) goto loc_8253262C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82532630
	if (!cr6.eq) goto loc_82532630;
loc_8253262C:
	// li r11,0
	r11.s64 = 0;
loc_82532630:
	// lbz r10,188(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 188);
	// lwz r31,80(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82532648
	if (cr6.eq) goto loc_82532648;
	// lfs f31,16(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 16);
	f31.f64 = double(temp.f32);
	// b 0x8253264c
	goto loc_8253264C;
loc_82532648:
	// lfs f31,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 8);
	f31.f64 = double(temp.f32);
loc_8253264C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r10,17300
	ctx.r7.s64 = ctx.r10.s64 + 17300;
	// li r5,128
	ctx.r5.s64 = 128;
	// lfs f0,6196(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6196);
	f0.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmuls f0,f31,f0
	f0.f64 = double(float(f31.f64 * f0.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8250c918
	sub_8250C918(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250c758
	sub_8250C758(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r9,28696
	ctx.r4.s64 = ctx.r9.s64 + 28696;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
	// lfs f0,192(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 192);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x8253274c
	if (!cr6.gt) goto loc_8253274C;
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 - f31.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x8253274c
	if (!cr6.lt) goto loc_8253274C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// li r29,4
	r29.s64 = 4;
	// addi r30,r11,-20884
	r30.s64 = r11.s64 + -20884;
loc_825326DC:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,192(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82532740
	if (!cr6.gt) goto loc_82532740;
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bgt cr6,0x82532740
	if (cr6.gt) goto loc_82532740;
	// lwz r11,-14756(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82532714
	if (cr6.eq) goto loc_82532714;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82532718
	if (!cr6.eq) goto loc_82532718;
loc_82532714:
	// li r11,0
	r11.s64 = 0;
loc_82532718:
	// lwz r31,52(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82532740
	if (cr6.eq) goto loc_82532740;
	// lwz r4,132(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// bl 0x825c6180
	sub_825C6180(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e1940
	sub_822E1940(ctx, base);
loc_82532740:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x825326dc
	if (!cr0.eq) goto loc_825326DC;
loc_8253274C:
	// stfs f31,192(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r28.u32 + 192, temp.u32);
loc_82532750:
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
}

__attribute__((alias("__imp__sub_82532760"))) PPC_WEAK_FUNC(sub_82532760);
PPC_FUNC_IMPL(__imp__sub_82532760) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82532764"))) PPC_WEAK_FUNC(sub_82532764);
PPC_FUNC_IMPL(__imp__sub_82532764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82532768"))) PPC_WEAK_FUNC(sub_82532768);
PPC_FUNC_IMPL(__imp__sub_82532768) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x825200d8
	sub_825200D8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r30,r31,160
	r30.s64 = r31.s64 + 160;
	// addi r10,r11,28716
	ctx.r10.s64 = r11.s64 + 28716;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// stb r29,188(r31)
	PPC_STORE_U8(r31.u32 + 188, r29.u8);
	// lis r11,-32173
	r11.s64 = -2108489728;
	// addi r29,r11,9464
	r29.s64 = r11.s64 + 9464;
	// lfs f0,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,192(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 192, temp.u32);
	// lwz r3,-14756(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825327d0
	if (cr6.eq) goto loc_825327D0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825327d4
	if (!cr6.eq) goto loc_825327D4;
loc_825327D0:
	// li r11,0
	r11.s64 = 0;
loc_825327D4:
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82532828"))) PPC_WEAK_FUNC(sub_82532828);
PPC_FUNC_IMPL(__imp__sub_82532828) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8253282C"))) PPC_WEAK_FUNC(sub_8253282C);
PPC_FUNC_IMPL(__imp__sub_8253282C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82532830"))) PPC_WEAK_FUNC(sub_82532830);
PPC_FUNC_IMPL(__imp__sub_82532830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,28644
	ctx.r3.s64 = r11.s64 + 28644;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253283C"))) PPC_WEAK_FUNC(sub_8253283C);
PPC_FUNC_IMPL(__imp__sub_8253283C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82532840"))) PPC_WEAK_FUNC(sub_82532840);
PPC_FUNC_IMPL(__imp__sub_82532840) {
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
	// bl 0x82531df8
	sub_82531DF8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82532878
	if (cr6.eq) goto loc_82532878;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82532878:
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

__attribute__((alias("__imp__sub_8253288C"))) PPC_WEAK_FUNC(sub_8253288C);
PPC_FUNC_IMPL(__imp__sub_8253288C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82532890"))) PPC_WEAK_FUNC(sub_82532890);
PPC_FUNC_IMPL(__imp__sub_82532890) {
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

__attribute__((alias("__imp__sub_825328CC"))) PPC_WEAK_FUNC(sub_825328CC);
PPC_FUNC_IMPL(__imp__sub_825328CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825328D0"))) PPC_WEAK_FUNC(sub_825328D0);
PPC_FUNC_IMPL(__imp__sub_825328D0) {
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
	// addi r9,r11,28892
	ctx.r9.s64 = r11.s64 + 28892;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8253290c
	if (cr6.eq) goto loc_8253290C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82532910
	if (!cr6.eq) goto loc_82532910;
loc_8253290C:
	// li r11,0
	r11.s64 = 0;
loc_82532910:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19448(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19448);
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
	// bne cr6,0x82532968
	if (!cr6.eq) goto loc_82532968;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82532968
	if (!cr6.eq) goto loc_82532968;
	// lwz r11,19448(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19448);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82532968:
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

__attribute__((alias("__imp__sub_8253297C"))) PPC_WEAK_FUNC(sub_8253297C);
PPC_FUNC_IMPL(__imp__sub_8253297C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82532980"))) PPC_WEAK_FUNC(sub_82532980);
PPC_FUNC_IMPL(__imp__sub_82532980) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// addi r26,r3,120
	r26.s64 = ctx.r3.s64 + 120;
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
	// beq cr6,0x82532c28
	if (cr6.eq) goto loc_82532C28;
	// addi r29,r28,28
	r29.s64 = r28.s64 + 28;
	// lis r25,-31965
	r25.s64 = -2094858240;
	// lis r24,-31965
	r24.s64 = -2094858240;
	// lis r27,-31965
	r27.s64 = -2094858240;
	// lis r23,-31965
	r23.s64 = -2094858240;
loc_825329CC:
	// lwz r11,-8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -8);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x825329e0
	if (cr6.lt) goto loc_825329E0;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x825329e4
	goto loc_825329E4;
loc_825329E0:
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
loc_825329E4:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82532a14
	if (cr6.eq) goto loc_82532A14;
loc_825329F8:
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
	// bne cr6,0x825329f8
	if (!cr6.eq) goto loc_825329F8;
loc_82532A14:
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
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8251ebd0
	sub_8251EBD0(ctx, base);
	// lwz r10,-20844(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + -20844);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82532a6c
	if (cr6.eq) goto loc_82532A6C;
loc_82532A50:
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
	// bne cr6,0x82532a50
	if (!cr6.eq) goto loc_82532A50;
loc_82532A6C:
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
	// lwz r5,-20844(r23)
	ctx.r5.u64 = PPC_LOAD_U32(r23.u32 + -20844);
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
	// lwz r10,-20840(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + -20840);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82532ae0
	if (cr6.eq) goto loc_82532AE0;
loc_82532AC4:
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
	// bne cr6,0x82532ac4
	if (!cr6.eq) goto loc_82532AC4;
loc_82532AE0:
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
	// lwz r5,-20840(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + -20840);
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
	// lwz r10,-20836(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + -20836);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82532b54
	if (cr6.eq) goto loc_82532B54;
loc_82532B38:
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
	// bne cr6,0x82532b38
	if (!cr6.eq) goto loc_82532B38;
loc_82532B54:
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
	// lwz r5,-20836(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + -20836);
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
	// lwz r10,-20832(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + -20832);
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82532bc4
	if (cr6.eq) goto loc_82532BC4;
loc_82532BA8:
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
	// bne cr6,0x82532ba8
	if (!cr6.eq) goto loc_82532BA8;
loc_82532BC4:
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
	// lwz r5,-20832(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + -20832);
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
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
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
	// bne cr6,0x825329cc
	if (!cr6.eq) goto loc_825329CC;
loc_82532C28:
	// lwz r11,132(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 132);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82532d9c
	if (cr6.eq) goto loc_82532D9C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82532d08
	if (cr6.eq) goto loc_82532D08;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x82532e0c
	if (!cr6.eq) goto loc_82532E0C;
	// lwz r11,124(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 124);
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82532c60
	if (cr6.lt) goto loc_82532C60;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82532c64
	goto loc_82532C64;
loc_82532C60:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82532C64:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82532c8c
	if (cr6.lt) goto loc_82532C8C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82532c90
	goto loc_82532C90;
loc_82532C8C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82532C90:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82532cb8
	if (cr6.lt) goto loc_82532CB8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82532cbc
	goto loc_82532CBC;
loc_82532CB8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82532CBC:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82532ce0
	if (cr6.lt) goto loc_82532CE0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82532ce4
	goto loc_82532CE4;
loc_82532CE0:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82532CE4:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x8251f450
	sub_8251F450(ctx, base);
	// b 0x82532e0c
	goto loc_82532E0C;
loc_82532D08:
	// lwz r11,124(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 124);
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82532d24
	if (cr6.lt) goto loc_82532D24;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82532d28
	goto loc_82532D28;
loc_82532D24:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82532D28:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82532d50
	if (cr6.lt) goto loc_82532D50;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82532d54
	goto loc_82532D54;
loc_82532D50:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82532D54:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82532d78
	if (cr6.lt) goto loc_82532D78;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82532d7c
	goto loc_82532D7C;
loc_82532D78:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82532D7C:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x8251f3c0
	sub_8251F3C0(ctx, base);
	// b 0x82532e0c
	goto loc_82532E0C;
loc_82532D9C:
	// lwz r11,124(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 124);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82532db8
	if (cr6.lt) goto loc_82532DB8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82532dbc
	goto loc_82532DBC;
loc_82532DB8:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82532DBC:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lwz r11,124(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82532de0
	if (cr6.lt) goto loc_82532DE0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82532de4
	goto loc_82532DE4;
loc_82532DE0:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82532DE4:
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfd f2,16944(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(r11.u32 + 16944);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x8251ed08
	sub_8251ED08(ctx, base);
loc_82532E0C:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82532E24"))) PPC_WEAK_FUNC(sub_82532E24);
PPC_FUNC_IMPL(__imp__sub_82532E24) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_82532E28"))) PPC_WEAK_FUNC(sub_82532E28);
PPC_FUNC_IMPL(__imp__sub_82532E28) {
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
	// beq cr6,0x82533014
	if (cr6.eq) goto loc_82533014;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82533014
	if (!cr6.lt) goto loc_82533014;
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
	// lwz r4,-20844(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20844);
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
	// beq cr6,0x82532fb8
	if (cr6.eq) goto loc_82532FB8;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-20836(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -20836);
	// bl 0x822e3d80
	sub_822E3D80(ctx, base);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-20832(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20832);
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
	// beq cr6,0x82532ee4
	if (cr6.eq) goto loc_82532EE4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82532ee8
	if (!cr6.eq) goto loc_82532EE8;
loc_82532EE4:
	// li r11,0
	r11.s64 = 0;
loc_82532EE8:
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// lwz r4,-20828(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20828);
	// bl 0x8250c5f8
	sub_8250C5F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822f1278
	sub_822F1278(ctx, base);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82532f18
	if (!cr6.lt) goto loc_82532F18;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_82532F18:
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
	// bge cr6,0x82532f38
	if (!cr6.lt) goto loc_82532F38;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_82532F38:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e3370
	sub_822E3370(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r6,r7,17016
	ctx.r6.s64 = ctx.r7.s64 + 17016;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,-20824(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20824);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
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
loc_82532FB8:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,-20820(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20820);
	// addi r6,r7,17016
	ctx.r6.s64 = ctx.r7.s64 + 17016;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
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
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_82533014:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82533020"))) PPC_WEAK_FUNC(sub_82533020);
PPC_FUNC_IMPL(__imp__sub_82533020) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82533024"))) PPC_WEAK_FUNC(sub_82533024);
PPC_FUNC_IMPL(__imp__sub_82533024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82533028"))) PPC_WEAK_FUNC(sub_82533028);
PPC_FUNC_IMPL(__imp__sub_82533028) {
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
	// addi r10,r11,28892
	ctx.r10.s64 = r11.s64 + 28892;
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
	// addi r29,r11,11816
	r29.s64 = r11.s64 + 11816;
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8253307c
	if (cr6.eq) goto loc_8253307C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82533080
	if (!cr6.eq) goto loc_82533080;
loc_8253307C:
	// li r11,0
	r11.s64 = 0;
loc_82533080:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,1248
	ctx.r3.s64 = ctx.r9.s64 + 1248;
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
	// lwz r11,19448(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19448);
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

__attribute__((alias("__imp__sub_825330D4"))) PPC_WEAK_FUNC(sub_825330D4);
PPC_FUNC_IMPL(__imp__sub_825330D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825330D8"))) PPC_WEAK_FUNC(sub_825330D8);
PPC_FUNC_IMPL(__imp__sub_825330D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-20848(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -20848);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825330E4"))) PPC_WEAK_FUNC(sub_825330E4);
PPC_FUNC_IMPL(__imp__sub_825330E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825330E8"))) PPC_WEAK_FUNC(sub_825330E8);
PPC_FUNC_IMPL(__imp__sub_825330E8) {
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
	// bl 0x825328d0
	sub_825328D0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82533120
	if (cr6.eq) goto loc_82533120;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82533120:
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

__attribute__((alias("__imp__sub_82533134"))) PPC_WEAK_FUNC(sub_82533134);
PPC_FUNC_IMPL(__imp__sub_82533134) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

