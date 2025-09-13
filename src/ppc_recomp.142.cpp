#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8254EFD0"))) PPC_WEAK_FUNC(sub_8254EFD0);
PPC_FUNC_IMPL(__imp__sub_8254EFD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254EFD4"))) PPC_WEAK_FUNC(sub_8254EFD4);
PPC_FUNC_IMPL(__imp__sub_8254EFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254EFD8"))) PPC_WEAK_FUNC(sub_8254EFD8);
PPC_FUNC_IMPL(__imp__sub_8254EFD8) {
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
	// beq cr6,0x8254f008
	if (cr6.eq) goto loc_8254F008;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254f00c
	if (!cr6.eq) goto loc_8254F00C;
loc_8254F008:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254F00C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// bl 0x82568a88
	sub_82568A88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8254F028"))) PPC_WEAK_FUNC(sub_8254F028);
PPC_FUNC_IMPL(__imp__sub_8254F028) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254F02C"))) PPC_WEAK_FUNC(sub_8254F02C);
PPC_FUNC_IMPL(__imp__sub_8254F02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254F030"))) PPC_WEAK_FUNC(sub_8254F030);
PPC_FUNC_IMPL(__imp__sub_8254F030) {
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
	// beq cr6,0x8254f058
	if (cr6.eq) goto loc_8254F058;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254f05c
	if (!cr6.eq) goto loc_8254F05C;
loc_8254F058:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254F05C:
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// bl 0x82568a50
	sub_82568A50(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254f080
	if (cr6.eq) goto loc_8254F080;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8254f080
	if (cr6.lt) goto loc_8254F080;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// ble cr6,0x8254f084
	if (!cr6.gt) goto loc_8254F084;
loc_8254F080:
	// li r11,-1
	r11.s64 = -1;
loc_8254F084:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r3,-2
	ctx.r3.s64 = -2;
	// beq cr6,0x8254f094
	if (cr6.eq) goto loc_8254F094;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_8254F094:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8254F0A0"))) PPC_WEAK_FUNC(sub_8254F0A0);
PPC_FUNC_IMPL(__imp__sub_8254F0A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254F0A4"))) PPC_WEAK_FUNC(sub_8254F0A4);
PPC_FUNC_IMPL(__imp__sub_8254F0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254F0A8"))) PPC_WEAK_FUNC(sub_8254F0A8);
PPC_FUNC_IMPL(__imp__sub_8254F0A8) {
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
	// beq cr6,0x8254f0d0
	if (cr6.eq) goto loc_8254F0D0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254f0d4
	if (!cr6.eq) goto loc_8254F0D4;
loc_8254F0D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254F0D4:
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// bl 0x825688f0
	sub_825688F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254f0f8
	if (cr6.eq) goto loc_8254F0F8;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8254f0f8
	if (cr6.lt) goto loc_8254F0F8;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// ble cr6,0x8254f0fc
	if (!cr6.gt) goto loc_8254F0FC;
loc_8254F0F8:
	// li r11,-1
	r11.s64 = -1;
loc_8254F0FC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r3,-2
	ctx.r3.s64 = -2;
	// beq cr6,0x8254f10c
	if (cr6.eq) goto loc_8254F10C;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_8254F10C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8254F118"))) PPC_WEAK_FUNC(sub_8254F118);
PPC_FUNC_IMPL(__imp__sub_8254F118) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254F11C"))) PPC_WEAK_FUNC(sub_8254F11C);
PPC_FUNC_IMPL(__imp__sub_8254F11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254F120"))) PPC_WEAK_FUNC(sub_8254F120);
PPC_FUNC_IMPL(__imp__sub_8254F120) {
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
	// lis r29,-31970
	r29.s64 = -2095185920;
	// li r28,0
	r28.s64 = 0;
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254f150
	if (cr6.eq) goto loc_8254F150;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254f154
	if (!cr6.eq) goto loc_8254F154;
loc_8254F150:
	// li r11,0
	r11.s64 = 0;
loc_8254F154:
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// bl 0x82573b60
	sub_82573B60(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// lis r30,-31934
	r30.s64 = -2092826624;
loc_8254F164:
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8254f180
	if (cr6.eq) goto loc_8254F180;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254f184
	if (!cr6.eq) goto loc_8254F184;
loc_8254F180:
	// li r11,0
	r11.s64 = 0;
loc_8254F184:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// bl 0x82573b40
	sub_82573B40(ctx, base);
	// lwz r11,21636(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r27,24
	ctx.r8.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8254f1cc
	if (cr6.eq) goto loc_8254F1CC;
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8254f1cc
	if (cr6.eq) goto loc_8254F1CC;
	// li r28,1
	r28.s64 = 1;
loc_8254F1CC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x8254f164
	if (cr6.lt) goto loc_8254F164;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8254F1E0"))) PPC_WEAK_FUNC(sub_8254F1E0);
PPC_FUNC_IMPL(__imp__sub_8254F1E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8254F1E4"))) PPC_WEAK_FUNC(sub_8254F1E4);
PPC_FUNC_IMPL(__imp__sub_8254F1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254F1E8"))) PPC_WEAK_FUNC(sub_8254F1E8);
PPC_FUNC_IMPL(__imp__sub_8254F1E8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r28,r11,-27744
	r28.s64 = r11.s64 + -27744;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x82550990
	sub_82550990(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,-4600
	ctx.r6.s64 = ctx.r7.s64 + -4600;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-27756
	ctx.r4.s64 = ctx.r10.s64 + -27756;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x825515a8
	sub_825515A8(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-4408
	ctx.r10.s64 = ctx.r7.s64 + -4408;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,-27776
	ctx.r4.s64 = ctx.r9.s64 + -27776;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825515a8
	sub_825515A8(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-4280
	ctx.r10.s64 = ctx.r6.s64 + -4280;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,-27796
	ctx.r4.s64 = ctx.r9.s64 + -27796;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825516d8
	sub_825516D8(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// addi r4,r6,-4048
	ctx.r4.s64 = ctx.r6.s64 + -4048;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// addi r4,r11,-27820
	ctx.r4.s64 = r11.s64 + -27820;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825517e0
	sub_825517E0(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,-32171
	ctx.r8.s64 = -2108358656;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,-3928
	ctx.r5.s64 = ctx.r8.s64 + -3928;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// addi r4,r4,-27848
	ctx.r4.s64 = ctx.r4.s64 + -27848;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825517e0
	sub_825517E0(ctx, base);
	// addi r11,r1,81
	r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r9,-4920
	ctx.r7.s64 = ctx.r9.s64 + -4920;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r5,-27868
	ctx.r4.s64 = ctx.r5.s64 + -27868;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825517e0
	sub_825517E0(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r10,-4912
	ctx.r8.s64 = ctx.r10.s64 + -4912;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r7,-27892
	ctx.r4.s64 = ctx.r7.s64 + -27892;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825517e0
	sub_825517E0(ctx, base);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// lis r4,-32171
	ctx.r4.s64 = -2108358656;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r4,-4904
	ctx.r10.s64 = ctx.r4.s64 + -4904;
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// addi r4,r11,-27920
	ctx.r4.s64 = r11.s64 + -27920;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82551910
	sub_82551910(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-4880
	ctx.r10.s64 = ctx.r6.s64 + -4880;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r4,r9,-27952
	ctx.r4.s64 = ctx.r9.s64 + -27952;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82551910
	sub_82551910(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-4752
	ctx.r10.s64 = ctx.r6.s64 + -4752;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,10776
	ctx.r4.s64 = ctx.r9.s64 + 10776;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82551c50
	sub_82551C50(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-4136
	ctx.r10.s64 = ctx.r6.s64 + -4136;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,-27964
	ctx.r4.s64 = ctx.r9.s64 + -27964;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82551a18
	sub_82551A18(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r11,r6,-3808
	r11.s64 = ctx.r6.s64 + -3808;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r5,-27984
	ctx.r4.s64 = ctx.r5.s64 + -27984;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82551b20
	sub_82551B20(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// addi r27,r3,1
	r27.s64 = ctx.r3.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x82550bd0
	sub_82550BD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8254f5e0
	if (cr6.eq) goto loc_8254F5E0;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8254F5E0:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254f5fc
	if (cr6.eq) goto loc_8254F5FC;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x8254f5fc
	if (cr6.eq) goto loc_8254F5FC;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8254F5FC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8254F600"))) PPC_WEAK_FUNC(sub_8254F600);
PPC_FUNC_IMPL(__imp__sub_8254F600) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8254F604"))) PPC_WEAK_FUNC(sub_8254F604);
PPC_FUNC_IMPL(__imp__sub_8254F604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254F608"))) PPC_WEAK_FUNC(sub_8254F608);
PPC_FUNC_IMPL(__imp__sub_8254F608) {
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
	// beq cr6,0x8254f638
	if (cr6.eq) goto loc_8254F638;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254f63c
	if (!cr6.eq) goto loc_8254F63C;
loc_8254F638:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254F63C:
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8254f1e8
	sub_8254F1E8(ctx, base);
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

__attribute__((alias("__imp__sub_8254F660"))) PPC_WEAK_FUNC(sub_8254F660);
PPC_FUNC_IMPL(__imp__sub_8254F660) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254F664"))) PPC_WEAK_FUNC(sub_8254F664);
PPC_FUNC_IMPL(__imp__sub_8254F664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254F668"))) PPC_WEAK_FUNC(sub_8254F668);
PPC_FUNC_IMPL(__imp__sub_8254F668) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8254f6a0
	if (!cr6.eq) goto loc_8254F6A0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8254f6cc
	if (cr6.eq) goto loc_8254F6CC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x8254f6cc
	goto loc_8254F6CC;
loc_8254F6A0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8254f6cc
	if (cr6.eq) goto loc_8254F6CC;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-14120
	ctx.r4.s64 = r11.s64 + -14120;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_8254F6CC:
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

__attribute__((alias("__imp__sub_8254F6E0"))) PPC_WEAK_FUNC(sub_8254F6E0);
PPC_FUNC_IMPL(__imp__sub_8254F6E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254F6E4"))) PPC_WEAK_FUNC(sub_8254F6E4);
PPC_FUNC_IMPL(__imp__sub_8254F6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254F6E8"))) PPC_WEAK_FUNC(sub_8254F6E8);
PPC_FUNC_IMPL(__imp__sub_8254F6E8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8254f720
	if (!cr6.eq) goto loc_8254F720;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8254f74c
	if (cr6.eq) goto loc_8254F74C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x8254f74c
	goto loc_8254F74C;
loc_8254F720:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8254f74c
	if (cr6.eq) goto loc_8254F74C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-14008
	ctx.r4.s64 = r11.s64 + -14008;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_8254F74C:
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

__attribute__((alias("__imp__sub_8254F760"))) PPC_WEAK_FUNC(sub_8254F760);
PPC_FUNC_IMPL(__imp__sub_8254F760) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254F764"))) PPC_WEAK_FUNC(sub_8254F764);
PPC_FUNC_IMPL(__imp__sub_8254F764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254F768"))) PPC_WEAK_FUNC(sub_8254F768);
PPC_FUNC_IMPL(__imp__sub_8254F768) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8254f7a0
	if (!cr6.eq) goto loc_8254F7A0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8254f7cc
	if (cr6.eq) goto loc_8254F7CC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x8254f7cc
	goto loc_8254F7CC;
loc_8254F7A0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8254f7cc
	if (cr6.eq) goto loc_8254F7CC;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-13896
	ctx.r4.s64 = r11.s64 + -13896;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_8254F7CC:
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

__attribute__((alias("__imp__sub_8254F7E0"))) PPC_WEAK_FUNC(sub_8254F7E0);
PPC_FUNC_IMPL(__imp__sub_8254F7E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254F7E4"))) PPC_WEAK_FUNC(sub_8254F7E4);
PPC_FUNC_IMPL(__imp__sub_8254F7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254F7E8"))) PPC_WEAK_FUNC(sub_8254F7E8);
PPC_FUNC_IMPL(__imp__sub_8254F7E8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8254f820
	if (!cr6.eq) goto loc_8254F820;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8254f84c
	if (cr6.eq) goto loc_8254F84C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x8254f84c
	goto loc_8254F84C;
loc_8254F820:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8254f84c
	if (cr6.eq) goto loc_8254F84C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-13784
	ctx.r4.s64 = r11.s64 + -13784;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_8254F84C:
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

__attribute__((alias("__imp__sub_8254F860"))) PPC_WEAK_FUNC(sub_8254F860);
PPC_FUNC_IMPL(__imp__sub_8254F860) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254F864"))) PPC_WEAK_FUNC(sub_8254F864);
PPC_FUNC_IMPL(__imp__sub_8254F864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254F868"))) PPC_WEAK_FUNC(sub_8254F868);
PPC_FUNC_IMPL(__imp__sub_8254F868) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8254f8a0
	if (!cr6.eq) goto loc_8254F8A0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8254f8cc
	if (cr6.eq) goto loc_8254F8CC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x8254f8cc
	goto loc_8254F8CC;
loc_8254F8A0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8254f8cc
	if (cr6.eq) goto loc_8254F8CC;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-13664
	ctx.r4.s64 = r11.s64 + -13664;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_8254F8CC:
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

__attribute__((alias("__imp__sub_8254F8E0"))) PPC_WEAK_FUNC(sub_8254F8E0);
PPC_FUNC_IMPL(__imp__sub_8254F8E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254F8E4"))) PPC_WEAK_FUNC(sub_8254F8E4);
PPC_FUNC_IMPL(__imp__sub_8254F8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254F8E8"))) PPC_WEAK_FUNC(sub_8254F8E8);
PPC_FUNC_IMPL(__imp__sub_8254F8E8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8254f920
	if (!cr6.eq) goto loc_8254F920;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8254f94c
	if (cr6.eq) goto loc_8254F94C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x8254f94c
	goto loc_8254F94C;
loc_8254F920:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8254f94c
	if (cr6.eq) goto loc_8254F94C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-13552
	ctx.r4.s64 = r11.s64 + -13552;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_8254F94C:
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

__attribute__((alias("__imp__sub_8254F960"))) PPC_WEAK_FUNC(sub_8254F960);
PPC_FUNC_IMPL(__imp__sub_8254F960) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254F964"))) PPC_WEAK_FUNC(sub_8254F964);
PPC_FUNC_IMPL(__imp__sub_8254F964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254F968"))) PPC_WEAK_FUNC(sub_8254F968);
PPC_FUNC_IMPL(__imp__sub_8254F968) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8254f9a0
	if (!cr6.eq) goto loc_8254F9A0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8254f9cc
	if (cr6.eq) goto loc_8254F9CC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x8254f9cc
	goto loc_8254F9CC;
loc_8254F9A0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8254f9cc
	if (cr6.eq) goto loc_8254F9CC;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-13440
	ctx.r4.s64 = r11.s64 + -13440;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_8254F9CC:
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

__attribute__((alias("__imp__sub_8254F9E0"))) PPC_WEAK_FUNC(sub_8254F9E0);
PPC_FUNC_IMPL(__imp__sub_8254F9E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254F9E4"))) PPC_WEAK_FUNC(sub_8254F9E4);
PPC_FUNC_IMPL(__imp__sub_8254F9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254F9E8"))) PPC_WEAK_FUNC(sub_8254F9E8);
PPC_FUNC_IMPL(__imp__sub_8254F9E8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8254fa20
	if (!cr6.eq) goto loc_8254FA20;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8254fa4c
	if (cr6.eq) goto loc_8254FA4C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x8254fa4c
	goto loc_8254FA4C;
loc_8254FA20:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8254fa4c
	if (cr6.eq) goto loc_8254FA4C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-13328
	ctx.r4.s64 = r11.s64 + -13328;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_8254FA4C:
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

__attribute__((alias("__imp__sub_8254FA60"))) PPC_WEAK_FUNC(sub_8254FA60);
PPC_FUNC_IMPL(__imp__sub_8254FA60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254FA64"))) PPC_WEAK_FUNC(sub_8254FA64);
PPC_FUNC_IMPL(__imp__sub_8254FA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254FA68"))) PPC_WEAK_FUNC(sub_8254FA68);
PPC_FUNC_IMPL(__imp__sub_8254FA68) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8254faa0
	if (!cr6.eq) goto loc_8254FAA0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8254facc
	if (cr6.eq) goto loc_8254FACC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x8254facc
	goto loc_8254FACC;
loc_8254FAA0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8254facc
	if (cr6.eq) goto loc_8254FACC;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-13216
	ctx.r4.s64 = r11.s64 + -13216;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_8254FACC:
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

__attribute__((alias("__imp__sub_8254FAE0"))) PPC_WEAK_FUNC(sub_8254FAE0);
PPC_FUNC_IMPL(__imp__sub_8254FAE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254FAE4"))) PPC_WEAK_FUNC(sub_8254FAE4);
PPC_FUNC_IMPL(__imp__sub_8254FAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254FAE8"))) PPC_WEAK_FUNC(sub_8254FAE8);
PPC_FUNC_IMPL(__imp__sub_8254FAE8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8254fb20
	if (!cr6.eq) goto loc_8254FB20;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8254fb4c
	if (cr6.eq) goto loc_8254FB4C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x8254fb4c
	goto loc_8254FB4C;
loc_8254FB20:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8254fb4c
	if (cr6.eq) goto loc_8254FB4C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-13104
	ctx.r4.s64 = r11.s64 + -13104;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_8254FB4C:
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

__attribute__((alias("__imp__sub_8254FB60"))) PPC_WEAK_FUNC(sub_8254FB60);
PPC_FUNC_IMPL(__imp__sub_8254FB60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254FB64"))) PPC_WEAK_FUNC(sub_8254FB64);
PPC_FUNC_IMPL(__imp__sub_8254FB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254FB68"))) PPC_WEAK_FUNC(sub_8254FB68);
PPC_FUNC_IMPL(__imp__sub_8254FB68) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8254fba0
	if (!cr6.eq) goto loc_8254FBA0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8254fbcc
	if (cr6.eq) goto loc_8254FBCC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x8254fbcc
	goto loc_8254FBCC;
loc_8254FBA0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8254fbcc
	if (cr6.eq) goto loc_8254FBCC;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-12984
	ctx.r4.s64 = r11.s64 + -12984;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_8254FBCC:
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

__attribute__((alias("__imp__sub_8254FBE0"))) PPC_WEAK_FUNC(sub_8254FBE0);
PPC_FUNC_IMPL(__imp__sub_8254FBE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254FBE4"))) PPC_WEAK_FUNC(sub_8254FBE4);
PPC_FUNC_IMPL(__imp__sub_8254FBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254FBE8"))) PPC_WEAK_FUNC(sub_8254FBE8);
PPC_FUNC_IMPL(__imp__sub_8254FBE8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8254fc20
	if (!cr6.eq) goto loc_8254FC20;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8254fc4c
	if (cr6.eq) goto loc_8254FC4C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x8254fc4c
	goto loc_8254FC4C;
loc_8254FC20:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8254fc4c
	if (cr6.eq) goto loc_8254FC4C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-12872
	ctx.r4.s64 = r11.s64 + -12872;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_8254FC4C:
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

__attribute__((alias("__imp__sub_8254FC60"))) PPC_WEAK_FUNC(sub_8254FC60);
PPC_FUNC_IMPL(__imp__sub_8254FC60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254FC64"))) PPC_WEAK_FUNC(sub_8254FC64);
PPC_FUNC_IMPL(__imp__sub_8254FC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254FC68"))) PPC_WEAK_FUNC(sub_8254FC68);
PPC_FUNC_IMPL(__imp__sub_8254FC68) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8254fca0
	if (!cr6.eq) goto loc_8254FCA0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8254fccc
	if (cr6.eq) goto loc_8254FCCC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x8254fccc
	goto loc_8254FCCC;
loc_8254FCA0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8254fccc
	if (cr6.eq) goto loc_8254FCCC;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-12760
	ctx.r4.s64 = r11.s64 + -12760;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_8254FCCC:
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

__attribute__((alias("__imp__sub_8254FCE0"))) PPC_WEAK_FUNC(sub_8254FCE0);
PPC_FUNC_IMPL(__imp__sub_8254FCE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254FCE4"))) PPC_WEAK_FUNC(sub_8254FCE4);
PPC_FUNC_IMPL(__imp__sub_8254FCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254FCE8"))) PPC_WEAK_FUNC(sub_8254FCE8);
PPC_FUNC_IMPL(__imp__sub_8254FCE8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8254fd20
	if (!cr6.eq) goto loc_8254FD20;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8254fd4c
	if (cr6.eq) goto loc_8254FD4C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x8254fd4c
	goto loc_8254FD4C;
loc_8254FD20:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8254fd4c
	if (cr6.eq) goto loc_8254FD4C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-12648
	ctx.r4.s64 = r11.s64 + -12648;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_8254FD4C:
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

__attribute__((alias("__imp__sub_8254FD60"))) PPC_WEAK_FUNC(sub_8254FD60);
PPC_FUNC_IMPL(__imp__sub_8254FD60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254FD64"))) PPC_WEAK_FUNC(sub_8254FD64);
PPC_FUNC_IMPL(__imp__sub_8254FD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254FD68"))) PPC_WEAK_FUNC(sub_8254FD68);
PPC_FUNC_IMPL(__imp__sub_8254FD68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
}

__attribute__((alias("__imp__sub_8254FD70"))) PPC_WEAK_FUNC(sub_8254FD70);
PPC_FUNC_IMPL(__imp__sub_8254FD70) {
	PPC_FUNC_PROLOGUE();
	// b 0x826c6798
	sub_826C6798(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254FD74"))) PPC_WEAK_FUNC(sub_8254FD74);
PPC_FUNC_IMPL(__imp__sub_8254FD74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254FD78"))) PPC_WEAK_FUNC(sub_8254FD78);
PPC_FUNC_IMPL(__imp__sub_8254FD78) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8254fe50
	if (cr6.eq) goto loc_8254FE50;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e8c70
	sub_822E8C70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254fdc4
	if (!cr6.eq) goto loc_8254FDC4;
loc_8254FDBC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8254fe50
	goto loc_8254FE50;
loc_8254FDC4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8254fdbc
	if (!cr6.eq) goto loc_8254FDBC;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r11,-12536
	r30.s64 = r11.s64 + -12536;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8254fe0c
	if (cr6.eq) goto loc_8254FE0C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r3,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8254fe50
	goto loc_8254FE50;
loc_8254FE0C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8254fe3c
	if (cr6.eq) goto loc_8254FE3C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8254fe50
	goto loc_8254FE50;
loc_8254FE3C:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x826a9428
	sub_826A9428(ctx, base);
loc_8254FE50:
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

__attribute__((alias("__imp__sub_8254FE64"))) PPC_WEAK_FUNC(sub_8254FE64);
PPC_FUNC_IMPL(__imp__sub_8254FE64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254FE68"))) PPC_WEAK_FUNC(sub_8254FE68);
PPC_FUNC_IMPL(__imp__sub_8254FE68) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x8254fea0
	if (cr6.eq) goto loc_8254FEA0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8254f668
	sub_8254F668(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8254FEA0:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-14120
	ctx.r10.s64 = r11.s64 + -14120;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8254FEB8"))) PPC_WEAK_FUNC(sub_8254FEB8);
PPC_FUNC_IMPL(__imp__sub_8254FEB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254FEBC"))) PPC_WEAK_FUNC(sub_8254FEBC);
PPC_FUNC_IMPL(__imp__sub_8254FEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254FEC0"))) PPC_WEAK_FUNC(sub_8254FEC0);
PPC_FUNC_IMPL(__imp__sub_8254FEC0) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x8254fef8
	if (cr6.eq) goto loc_8254FEF8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8254f6e8
	sub_8254F6E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8254FEF8:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-14008
	ctx.r10.s64 = r11.s64 + -14008;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8254FF10"))) PPC_WEAK_FUNC(sub_8254FF10);
PPC_FUNC_IMPL(__imp__sub_8254FF10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254FF14"))) PPC_WEAK_FUNC(sub_8254FF14);
PPC_FUNC_IMPL(__imp__sub_8254FF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254FF18"))) PPC_WEAK_FUNC(sub_8254FF18);
PPC_FUNC_IMPL(__imp__sub_8254FF18) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x8254ff50
	if (cr6.eq) goto loc_8254FF50;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8254f768
	sub_8254F768(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8254FF50:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-13896
	ctx.r10.s64 = r11.s64 + -13896;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8254FF68"))) PPC_WEAK_FUNC(sub_8254FF68);
PPC_FUNC_IMPL(__imp__sub_8254FF68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254FF6C"))) PPC_WEAK_FUNC(sub_8254FF6C);
PPC_FUNC_IMPL(__imp__sub_8254FF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254FF70"))) PPC_WEAK_FUNC(sub_8254FF70);
PPC_FUNC_IMPL(__imp__sub_8254FF70) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x8254ffa8
	if (cr6.eq) goto loc_8254FFA8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8254f7e8
	sub_8254F7E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8254FFA8:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-13784
	ctx.r10.s64 = r11.s64 + -13784;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8254FFC0"))) PPC_WEAK_FUNC(sub_8254FFC0);
PPC_FUNC_IMPL(__imp__sub_8254FFC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254FFC4"))) PPC_WEAK_FUNC(sub_8254FFC4);
PPC_FUNC_IMPL(__imp__sub_8254FFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254FFC8"))) PPC_WEAK_FUNC(sub_8254FFC8);
PPC_FUNC_IMPL(__imp__sub_8254FFC8) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x82550000
	if (cr6.eq) goto loc_82550000;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8254f868
	sub_8254F868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82550000:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-13664
	ctx.r10.s64 = r11.s64 + -13664;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82550018"))) PPC_WEAK_FUNC(sub_82550018);
PPC_FUNC_IMPL(__imp__sub_82550018) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255001C"))) PPC_WEAK_FUNC(sub_8255001C);
PPC_FUNC_IMPL(__imp__sub_8255001C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82550020"))) PPC_WEAK_FUNC(sub_82550020);
PPC_FUNC_IMPL(__imp__sub_82550020) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x82550058
	if (cr6.eq) goto loc_82550058;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8254f8e8
	sub_8254F8E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82550058:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-13552
	ctx.r10.s64 = r11.s64 + -13552;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82550070"))) PPC_WEAK_FUNC(sub_82550070);
PPC_FUNC_IMPL(__imp__sub_82550070) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82550074"))) PPC_WEAK_FUNC(sub_82550074);
PPC_FUNC_IMPL(__imp__sub_82550074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82550078"))) PPC_WEAK_FUNC(sub_82550078);
PPC_FUNC_IMPL(__imp__sub_82550078) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x825500b0
	if (cr6.eq) goto loc_825500B0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8254f968
	sub_8254F968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_825500B0:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-13440
	ctx.r10.s64 = r11.s64 + -13440;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825500C8"))) PPC_WEAK_FUNC(sub_825500C8);
PPC_FUNC_IMPL(__imp__sub_825500C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825500CC"))) PPC_WEAK_FUNC(sub_825500CC);
PPC_FUNC_IMPL(__imp__sub_825500CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825500D0"))) PPC_WEAK_FUNC(sub_825500D0);
PPC_FUNC_IMPL(__imp__sub_825500D0) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x82550108
	if (cr6.eq) goto loc_82550108;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8254f9e8
	sub_8254F9E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82550108:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-13328
	ctx.r10.s64 = r11.s64 + -13328;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82550120"))) PPC_WEAK_FUNC(sub_82550120);
PPC_FUNC_IMPL(__imp__sub_82550120) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82550124"))) PPC_WEAK_FUNC(sub_82550124);
PPC_FUNC_IMPL(__imp__sub_82550124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82550128"))) PPC_WEAK_FUNC(sub_82550128);
PPC_FUNC_IMPL(__imp__sub_82550128) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x82550160
	if (cr6.eq) goto loc_82550160;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8254fa68
	sub_8254FA68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82550160:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-13216
	ctx.r10.s64 = r11.s64 + -13216;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82550178"))) PPC_WEAK_FUNC(sub_82550178);
PPC_FUNC_IMPL(__imp__sub_82550178) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255017C"))) PPC_WEAK_FUNC(sub_8255017C);
PPC_FUNC_IMPL(__imp__sub_8255017C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82550180"))) PPC_WEAK_FUNC(sub_82550180);
PPC_FUNC_IMPL(__imp__sub_82550180) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x825501b8
	if (cr6.eq) goto loc_825501B8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8254fae8
	sub_8254FAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_825501B8:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-13104
	ctx.r10.s64 = r11.s64 + -13104;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825501D0"))) PPC_WEAK_FUNC(sub_825501D0);
PPC_FUNC_IMPL(__imp__sub_825501D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825501D4"))) PPC_WEAK_FUNC(sub_825501D4);
PPC_FUNC_IMPL(__imp__sub_825501D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825501D8"))) PPC_WEAK_FUNC(sub_825501D8);
PPC_FUNC_IMPL(__imp__sub_825501D8) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x82550210
	if (cr6.eq) goto loc_82550210;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8254fb68
	sub_8254FB68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82550210:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-12984
	ctx.r10.s64 = r11.s64 + -12984;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82550228"))) PPC_WEAK_FUNC(sub_82550228);
PPC_FUNC_IMPL(__imp__sub_82550228) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255022C"))) PPC_WEAK_FUNC(sub_8255022C);
PPC_FUNC_IMPL(__imp__sub_8255022C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82550230"))) PPC_WEAK_FUNC(sub_82550230);
PPC_FUNC_IMPL(__imp__sub_82550230) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x82550268
	if (cr6.eq) goto loc_82550268;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8254fbe8
	sub_8254FBE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82550268:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-12872
	ctx.r10.s64 = r11.s64 + -12872;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82550280"))) PPC_WEAK_FUNC(sub_82550280);
PPC_FUNC_IMPL(__imp__sub_82550280) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82550284"))) PPC_WEAK_FUNC(sub_82550284);
PPC_FUNC_IMPL(__imp__sub_82550284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82550288"))) PPC_WEAK_FUNC(sub_82550288);
PPC_FUNC_IMPL(__imp__sub_82550288) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x825502c0
	if (cr6.eq) goto loc_825502C0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8254fc68
	sub_8254FC68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_825502C0:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-12760
	ctx.r10.s64 = r11.s64 + -12760;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825502D8"))) PPC_WEAK_FUNC(sub_825502D8);
PPC_FUNC_IMPL(__imp__sub_825502D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825502DC"))) PPC_WEAK_FUNC(sub_825502DC);
PPC_FUNC_IMPL(__imp__sub_825502DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825502E0"))) PPC_WEAK_FUNC(sub_825502E0);
PPC_FUNC_IMPL(__imp__sub_825502E0) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x82550318
	if (cr6.eq) goto loc_82550318;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8254fce8
	sub_8254FCE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82550318:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-12648
	ctx.r10.s64 = r11.s64 + -12648;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82550330"))) PPC_WEAK_FUNC(sub_82550330);
PPC_FUNC_IMPL(__imp__sub_82550330) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82550334"))) PPC_WEAK_FUNC(sub_82550334);
PPC_FUNC_IMPL(__imp__sub_82550334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82550338"))) PPC_WEAK_FUNC(sub_82550338);
PPC_FUNC_IMPL(__imp__sub_82550338) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825503c0
	if (cr6.eq) goto loc_825503C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-12536
	ctx.r4.s64 = ctx.r10.s64 + -12536;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x825503c0
	if (!cr6.eq) goto loc_825503C0;
	// lis r11,-32028
	r11.s64 = -2098987008;
	// addi r10,r11,11976
	ctx.r10.s64 = r11.s64 + 11976;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_825503C0:
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825503ec
	if (cr6.eq) goto loc_825503EC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825503EC:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825503FC"))) PPC_WEAK_FUNC(sub_825503FC);
PPC_FUNC_IMPL(__imp__sub_825503FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82550400"))) PPC_WEAK_FUNC(sub_82550400);
PPC_FUNC_IMPL(__imp__sub_82550400) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826ac708
	sub_826AC708(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8255049c
	if (cr6.eq) goto loc_8255049C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-12536
	ctx.r4.s64 = ctx.r10.s64 + -12536;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x8255049c
	if (!cr6.eq) goto loc_8255049C;
	// lis r11,-32028
	r11.s64 = -2098987008;
	// addi r10,r11,11976
	ctx.r10.s64 = r11.s64 + 11976;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_8255049C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825504cc
	if (cr6.eq) goto loc_825504CC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825504CC:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825504DC"))) PPC_WEAK_FUNC(sub_825504DC);
PPC_FUNC_IMPL(__imp__sub_825504DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825504E0"))) PPC_WEAK_FUNC(sub_825504E0);
PPC_FUNC_IMPL(__imp__sub_825504E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82550568
	if (cr6.eq) goto loc_82550568;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-12536
	ctx.r4.s64 = ctx.r10.s64 + -12536;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82550568
	if (!cr6.eq) goto loc_82550568;
	// lis r11,-32028
	r11.s64 = -2098987008;
	// addi r10,r11,11976
	ctx.r10.s64 = r11.s64 + 11976;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82550568:
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x826aca28
	sub_826ACA28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825505b0
	if (cr6.eq) goto loc_825505B0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825505B0:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825505C0"))) PPC_WEAK_FUNC(sub_825505C0);
PPC_FUNC_IMPL(__imp__sub_825505C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825505C4"))) PPC_WEAK_FUNC(sub_825505C4);
PPC_FUNC_IMPL(__imp__sub_825505C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825505C8"))) PPC_WEAK_FUNC(sub_825505C8);
PPC_FUNC_IMPL(__imp__sub_825505C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82550668
	if (cr6.eq) goto loc_82550668;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-12536
	ctx.r4.s64 = ctx.r10.s64 + -12536;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82550668
	if (!cr6.eq) goto loc_82550668;
	// lis r11,-32028
	r11.s64 = -2098987008;
	// addi r10,r11,11976
	ctx.r10.s64 = r11.s64 + 11976;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82550668:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = r11.u32 & 0xFF;
	// bl 0x826acd28
	sub_826ACD28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825506a8
	if (cr6.eq) goto loc_825506A8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825506A8:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825506B8"))) PPC_WEAK_FUNC(sub_825506B8);
PPC_FUNC_IMPL(__imp__sub_825506B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825506BC"))) PPC_WEAK_FUNC(sub_825506BC);
PPC_FUNC_IMPL(__imp__sub_825506BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825506C0"))) PPC_WEAK_FUNC(sub_825506C0);
PPC_FUNC_IMPL(__imp__sub_825506C0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r27,84(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82550778
	if (cr6.eq) goto loc_82550778;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-12536
	ctx.r4.s64 = ctx.r10.s64 + -12536;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82550778
	if (!cr6.eq) goto loc_82550778;
	// lis r11,-32028
	r11.s64 = -2098987008;
	// addi r10,r11,11976
	ctx.r10.s64 = r11.s64 + 11976;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82550778:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = r11.u32 & 0xFF;
	// bl 0x826acd28
	sub_826ACD28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825507bc
	if (cr6.eq) goto loc_825507BC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825507BC:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_825507CC"))) PPC_WEAK_FUNC(sub_825507CC);
PPC_FUNC_IMPL(__imp__sub_825507CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825507D0"))) PPC_WEAK_FUNC(sub_825507D0);
PPC_FUNC_IMPL(__imp__sub_825507D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82550870
	if (cr6.eq) goto loc_82550870;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-12536
	ctx.r4.s64 = ctx.r10.s64 + -12536;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82550870
	if (!cr6.eq) goto loc_82550870;
	// lis r11,-32028
	r11.s64 = -2098987008;
	// addi r10,r11,11976
	ctx.r10.s64 = r11.s64 + 11976;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82550870:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825508a0
	if (cr6.eq) goto loc_825508A0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825508A0:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825508B0"))) PPC_WEAK_FUNC(sub_825508B0);
PPC_FUNC_IMPL(__imp__sub_825508B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825508B4"))) PPC_WEAK_FUNC(sub_825508B4);
PPC_FUNC_IMPL(__imp__sub_825508B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825508B8"))) PPC_WEAK_FUNC(sub_825508B8);
PPC_FUNC_IMPL(__imp__sub_825508B8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82550940
	if (cr6.eq) goto loc_82550940;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-12536
	ctx.r4.s64 = ctx.r10.s64 + -12536;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x82550940
	if (!cr6.eq) goto loc_82550940;
	// lis r11,-32028
	r11.s64 = -2098987008;
	// addi r10,r11,11976
	ctx.r10.s64 = r11.s64 + 11976;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_82550940:
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = r11.u32 & 0xFF;
	// bl 0x826acd28
	sub_826ACD28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255097c
	if (cr6.eq) goto loc_8255097C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255097C:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8255098C"))) PPC_WEAK_FUNC(sub_8255098C);
PPC_FUNC_IMPL(__imp__sub_8255098C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82550990"))) PPC_WEAK_FUNC(sub_82550990);
PPC_FUNC_IMPL(__imp__sub_82550990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r10,-664
	ctx.r10.s64 = ctx.r10.s64 + -664;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// stw r5,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r7,-31965
	ctx.r7.s64 = -2094858240;
	// li r11,0
	r11.s64 = 0;
	// addi r6,r9,-29496
	ctx.r6.s64 = ctx.r9.s64 + -29496;
	// addi r5,r8,-28600
	ctx.r5.s64 = ctx.r8.s64 + -28600;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// addi r4,r7,-12536
	ctx.r4.s64 = ctx.r7.s64 + -12536;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826a94d0
	sub_826A94D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82550A04"))) PPC_WEAK_FUNC(sub_82550A04);
PPC_FUNC_IMPL(__imp__sub_82550A04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82550A08"))) PPC_WEAK_FUNC(sub_82550A08);
PPC_FUNC_IMPL(__imp__sub_82550A08) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82550a50
	if (cr6.eq) goto loc_82550A50;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8254fd78
	sub_8254FD78(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82550a5c
	if (!cr6.lt) goto loc_82550A5C;
loc_82550A50:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_82550A5C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x82550a8c
	if (cr6.eq) goto loc_82550A8C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x82550a90
	if (!cr6.eq) goto loc_82550A90;
loc_82550A8C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82550A90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82550A94"))) PPC_WEAK_FUNC(sub_82550A94);
PPC_FUNC_IMPL(__imp__sub_82550A94) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82550A98"))) PPC_WEAK_FUNC(sub_82550A98);
PPC_FUNC_IMPL(__imp__sub_82550A98) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82550ae0
	if (cr6.eq) goto loc_82550AE0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8254fd78
	sub_8254FD78(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82550aec
	if (!cr6.lt) goto loc_82550AEC;
loc_82550AE0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_82550AEC:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82550ae0
	if (!cr6.eq) goto loc_82550AE0;
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x82550b20
	if (!cr6.eq) goto loc_82550B20;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82550B20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82550B24"))) PPC_WEAK_FUNC(sub_82550B24);
PPC_FUNC_IMPL(__imp__sub_82550B24) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82550B28"))) PPC_WEAK_FUNC(sub_82550B28);
PPC_FUNC_IMPL(__imp__sub_82550B28) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82550338
	sub_82550338(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82550B3C"))) PPC_WEAK_FUNC(sub_82550B3C);
PPC_FUNC_IMPL(__imp__sub_82550B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82550B40"))) PPC_WEAK_FUNC(sub_82550B40);
PPC_FUNC_IMPL(__imp__sub_82550B40) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82550400
	sub_82550400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82550B54"))) PPC_WEAK_FUNC(sub_82550B54);
PPC_FUNC_IMPL(__imp__sub_82550B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82550B58"))) PPC_WEAK_FUNC(sub_82550B58);
PPC_FUNC_IMPL(__imp__sub_82550B58) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825504e0
	sub_825504E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82550B6C"))) PPC_WEAK_FUNC(sub_82550B6C);
PPC_FUNC_IMPL(__imp__sub_82550B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82550B70"))) PPC_WEAK_FUNC(sub_82550B70);
PPC_FUNC_IMPL(__imp__sub_82550B70) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825505c8
	sub_825505C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82550B84"))) PPC_WEAK_FUNC(sub_82550B84);
PPC_FUNC_IMPL(__imp__sub_82550B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82550B88"))) PPC_WEAK_FUNC(sub_82550B88);
PPC_FUNC_IMPL(__imp__sub_82550B88) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825506c0
	sub_825506C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82550B9C"))) PPC_WEAK_FUNC(sub_82550B9C);
PPC_FUNC_IMPL(__imp__sub_82550B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82550BA0"))) PPC_WEAK_FUNC(sub_82550BA0);
PPC_FUNC_IMPL(__imp__sub_82550BA0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825507d0
	sub_825507D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82550BB4"))) PPC_WEAK_FUNC(sub_82550BB4);
PPC_FUNC_IMPL(__imp__sub_82550BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82550BB8"))) PPC_WEAK_FUNC(sub_82550BB8);
PPC_FUNC_IMPL(__imp__sub_82550BB8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825508b8
	sub_825508B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82550BCC"))) PPC_WEAK_FUNC(sub_82550BCC);
PPC_FUNC_IMPL(__imp__sub_82550BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82550BD0"))) PPC_WEAK_FUNC(sub_82550BD0);
PPC_FUNC_IMPL(__imp__sub_82550BD0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bne cr6,0x82550bfc
	if (!cr6.eq) goto loc_82550BFC;
	// bl 0x826aca08
	sub_826ACA08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82550BFC:
	// bl 0x826a24b0
	sub_826A24B0(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r4,r11,-12536
	ctx.r4.s64 = r11.s64 + -12536;
	// bl 0x826a2768
	sub_826A2768(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ada08
	sub_826ADA08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82550c38
	if (cr6.eq) goto loc_82550C38;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826aaca0
	sub_826AACA0(ctx, base);
loc_82550C38:
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,116(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad2b0
	sub_826AD2B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82550C58"))) PPC_WEAK_FUNC(sub_82550C58);
PPC_FUNC_IMPL(__imp__sub_82550C58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82550C5C"))) PPC_WEAK_FUNC(sub_82550C5C);
PPC_FUNC_IMPL(__imp__sub_82550C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82550C60"))) PPC_WEAK_FUNC(sub_82550C60);
PPC_FUNC_IMPL(__imp__sub_82550C60) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82550cb4
	if (cr6.eq) goto loc_82550CB4;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8254fd78
	sub_8254FD78(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82550cbc
	if (!cr6.lt) goto loc_82550CBC;
loc_82550CB4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82550cd8
	goto loc_82550CD8;
loc_82550CBC:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x82550cd8
	if (!cr6.eq) goto loc_82550CD8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82550CD8:
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

__attribute__((alias("__imp__sub_82550CEC"))) PPC_WEAK_FUNC(sub_82550CEC);
PPC_FUNC_IMPL(__imp__sub_82550CEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82550CF0"))) PPC_WEAK_FUNC(sub_82550CF0);
PPC_FUNC_IMPL(__imp__sub_82550CF0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82307b58
	sub_82307B58(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82550d38
	if (!cr6.eq) goto loc_82550D38;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82550d30
	if (cr0.eq) goto loc_82550D30;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82550D30:
	// li r11,1
	r11.s64 = 1;
	// b 0x82550d3c
	goto loc_82550D3C;
loc_82550D38:
	// li r11,0
	r11.s64 = 0;
loc_82550D3C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-28096
	ctx.r7.s64 = ctx.r10.s64 + -28096;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82550D6C"))) PPC_WEAK_FUNC(sub_82550D6C);
PPC_FUNC_IMPL(__imp__sub_82550D6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82550D70"))) PPC_WEAK_FUNC(sub_82550D70);
PPC_FUNC_IMPL(__imp__sub_82550D70) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82307b58
	sub_82307B58(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82550db8
	if (!cr6.eq) goto loc_82550DB8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82550db0
	if (cr0.eq) goto loc_82550DB0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82550DB0:
	// li r11,1
	r11.s64 = 1;
	// b 0x82550dbc
	goto loc_82550DBC;
loc_82550DB8:
	// li r11,0
	r11.s64 = 0;
loc_82550DBC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-28088
	ctx.r7.s64 = ctx.r10.s64 + -28088;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82550DEC"))) PPC_WEAK_FUNC(sub_82550DEC);
PPC_FUNC_IMPL(__imp__sub_82550DEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82550DF0"))) PPC_WEAK_FUNC(sub_82550DF0);
PPC_FUNC_IMPL(__imp__sub_82550DF0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82307b58
	sub_82307B58(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82550e38
	if (!cr6.eq) goto loc_82550E38;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82550e30
	if (cr0.eq) goto loc_82550E30;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82550E30:
	// li r11,1
	r11.s64 = 1;
	// b 0x82550e3c
	goto loc_82550E3C;
loc_82550E38:
	// li r11,0
	r11.s64 = 0;
loc_82550E3C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-28080
	ctx.r7.s64 = ctx.r10.s64 + -28080;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82550E6C"))) PPC_WEAK_FUNC(sub_82550E6C);
PPC_FUNC_IMPL(__imp__sub_82550E6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82550E70"))) PPC_WEAK_FUNC(sub_82550E70);
PPC_FUNC_IMPL(__imp__sub_82550E70) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82307b58
	sub_82307B58(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82550eb8
	if (!cr6.eq) goto loc_82550EB8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82550eb0
	if (cr0.eq) goto loc_82550EB0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82550EB0:
	// li r11,1
	r11.s64 = 1;
	// b 0x82550ebc
	goto loc_82550EBC;
loc_82550EB8:
	// li r11,0
	r11.s64 = 0;
loc_82550EBC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-28072
	ctx.r7.s64 = ctx.r10.s64 + -28072;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82550EEC"))) PPC_WEAK_FUNC(sub_82550EEC);
PPC_FUNC_IMPL(__imp__sub_82550EEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82550EF0"))) PPC_WEAK_FUNC(sub_82550EF0);
PPC_FUNC_IMPL(__imp__sub_82550EF0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82307b58
	sub_82307B58(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82550f38
	if (!cr6.eq) goto loc_82550F38;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82550f30
	if (cr0.eq) goto loc_82550F30;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82550F30:
	// li r11,1
	r11.s64 = 1;
	// b 0x82550f3c
	goto loc_82550F3C;
loc_82550F38:
	// li r11,0
	r11.s64 = 0;
loc_82550F3C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-28064
	ctx.r7.s64 = ctx.r10.s64 + -28064;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82550F6C"))) PPC_WEAK_FUNC(sub_82550F6C);
PPC_FUNC_IMPL(__imp__sub_82550F6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82550F70"))) PPC_WEAK_FUNC(sub_82550F70);
PPC_FUNC_IMPL(__imp__sub_82550F70) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82307b58
	sub_82307B58(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82550fb8
	if (!cr6.eq) goto loc_82550FB8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82550fb0
	if (cr0.eq) goto loc_82550FB0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82550FB0:
	// li r11,1
	r11.s64 = 1;
	// b 0x82550fbc
	goto loc_82550FBC;
loc_82550FB8:
	// li r11,0
	r11.s64 = 0;
loc_82550FBC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-28056
	ctx.r7.s64 = ctx.r10.s64 + -28056;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82550FEC"))) PPC_WEAK_FUNC(sub_82550FEC);
PPC_FUNC_IMPL(__imp__sub_82550FEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82550FF0"))) PPC_WEAK_FUNC(sub_82550FF0);
PPC_FUNC_IMPL(__imp__sub_82550FF0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82307b58
	sub_82307B58(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82551038
	if (!cr6.eq) goto loc_82551038;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82551030
	if (cr0.eq) goto loc_82551030;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82551030:
	// li r11,1
	r11.s64 = 1;
	// b 0x8255103c
	goto loc_8255103C;
loc_82551038:
	// li r11,0
	r11.s64 = 0;
loc_8255103C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-28048
	ctx.r7.s64 = ctx.r10.s64 + -28048;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_8255106C"))) PPC_WEAK_FUNC(sub_8255106C);
PPC_FUNC_IMPL(__imp__sub_8255106C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551070"))) PPC_WEAK_FUNC(sub_82551070);
PPC_FUNC_IMPL(__imp__sub_82551070) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82550a08
	sub_82550A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551084"))) PPC_WEAK_FUNC(sub_82551084);
PPC_FUNC_IMPL(__imp__sub_82551084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82551088"))) PPC_WEAK_FUNC(sub_82551088);
PPC_FUNC_IMPL(__imp__sub_82551088) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_82551094"))) PPC_WEAK_FUNC(sub_82551094);
PPC_FUNC_IMPL(__imp__sub_82551094) {
	PPC_FUNC_PROLOGUE();
	// b 0x82550c60
	sub_82550C60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551098"))) PPC_WEAK_FUNC(sub_82551098);
PPC_FUNC_IMPL(__imp__sub_82551098) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82550a98
	sub_82550A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825510AC"))) PPC_WEAK_FUNC(sub_825510AC);
PPC_FUNC_IMPL(__imp__sub_825510AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825510B0"))) PPC_WEAK_FUNC(sub_825510B0);
PPC_FUNC_IMPL(__imp__sub_825510B0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825510fc
	if (cr6.eq) goto loc_825510FC;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8254fd78
	sub_8254FD78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82551100
	if (!cr6.lt) goto loc_82551100;
loc_825510FC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82551100:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82551110"))) PPC_WEAK_FUNC(sub_82551110);
PPC_FUNC_IMPL(__imp__sub_82551110) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551114"))) PPC_WEAK_FUNC(sub_82551114);
PPC_FUNC_IMPL(__imp__sub_82551114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82551118"))) PPC_WEAK_FUNC(sub_82551118);
PPC_FUNC_IMPL(__imp__sub_82551118) {
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
	// lis r11,-32229
	r11.s64 = -2112159744;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,10028
	ctx.r4.s64 = r11.s64 + 10028;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822e9dd8
	sub_822E9DD8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,19268
	ctx.r4.s64 = ctx.r10.s64 + 19268;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e9dd8
	sub_822E9DD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82551164"))) PPC_WEAK_FUNC(sub_82551164);
PPC_FUNC_IMPL(__imp__sub_82551164) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551168"))) PPC_WEAK_FUNC(sub_82551168);
PPC_FUNC_IMPL(__imp__sub_82551168) {
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
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r4,r10,10028
	ctx.r4.s64 = ctx.r10.s64 + 10028;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// bl 0x822e9dd8
	sub_822E9DD8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r29,15
	r29.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// addi r4,r8,21204
	ctx.r4.s64 = ctx.r8.s64 + 21204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e0500
	sub_822E0500(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e9cc8
	sub_822E9CC8(ctx, base);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x825511e8
	if (cr6.lt) goto loc_825511E8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_825511E8:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// addi r4,r11,19268
	ctx.r4.s64 = r11.s64 + 19268;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e9dd8
	sub_822E9DD8(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82551214"))) PPC_WEAK_FUNC(sub_82551214);
PPC_FUNC_IMPL(__imp__sub_82551214) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82551218"))) PPC_WEAK_FUNC(sub_82551218);
PPC_FUNC_IMPL(__imp__sub_82551218) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82307b58
	sub_82307B58(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82551260
	if (!cr6.eq) goto loc_82551260;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82551258
	if (cr0.eq) goto loc_82551258;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82551258:
	// li r11,1
	r11.s64 = 1;
	// b 0x82551264
	goto loc_82551264;
loc_82551260:
	// li r11,0
	r11.s64 = 0;
loc_82551264:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-28040
	ctx.r7.s64 = ctx.r10.s64 + -28040;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82551294"))) PPC_WEAK_FUNC(sub_82551294);
PPC_FUNC_IMPL(__imp__sub_82551294) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551298"))) PPC_WEAK_FUNC(sub_82551298);
PPC_FUNC_IMPL(__imp__sub_82551298) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82307b58
	sub_82307B58(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825512e0
	if (!cr6.eq) goto loc_825512E0;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825512d8
	if (cr0.eq) goto loc_825512D8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_825512D8:
	// li r11,1
	r11.s64 = 1;
	// b 0x825512e4
	goto loc_825512E4;
loc_825512E0:
	// li r11,0
	r11.s64 = 0;
loc_825512E4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-28032
	ctx.r7.s64 = ctx.r10.s64 + -28032;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82551314"))) PPC_WEAK_FUNC(sub_82551314);
PPC_FUNC_IMPL(__imp__sub_82551314) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551318"))) PPC_WEAK_FUNC(sub_82551318);
PPC_FUNC_IMPL(__imp__sub_82551318) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82307b58
	sub_82307B58(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82551360
	if (!cr6.eq) goto loc_82551360;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82551358
	if (cr0.eq) goto loc_82551358;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82551358:
	// li r11,1
	r11.s64 = 1;
	// b 0x82551364
	goto loc_82551364;
loc_82551360:
	// li r11,0
	r11.s64 = 0;
loc_82551364:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-28024
	ctx.r7.s64 = ctx.r10.s64 + -28024;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82551394"))) PPC_WEAK_FUNC(sub_82551394);
PPC_FUNC_IMPL(__imp__sub_82551394) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551398"))) PPC_WEAK_FUNC(sub_82551398);
PPC_FUNC_IMPL(__imp__sub_82551398) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82307b58
	sub_82307B58(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825513e0
	if (!cr6.eq) goto loc_825513E0;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825513d8
	if (cr0.eq) goto loc_825513D8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_825513D8:
	// li r11,1
	r11.s64 = 1;
	// b 0x825513e4
	goto loc_825513E4;
loc_825513E0:
	// li r11,0
	r11.s64 = 0;
loc_825513E4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-28016
	ctx.r7.s64 = ctx.r10.s64 + -28016;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82551414"))) PPC_WEAK_FUNC(sub_82551414);
PPC_FUNC_IMPL(__imp__sub_82551414) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551418"))) PPC_WEAK_FUNC(sub_82551418);
PPC_FUNC_IMPL(__imp__sub_82551418) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82307b58
	sub_82307B58(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82551460
	if (!cr6.eq) goto loc_82551460;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82551458
	if (cr0.eq) goto loc_82551458;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82551458:
	// li r11,1
	r11.s64 = 1;
	// b 0x82551464
	goto loc_82551464;
loc_82551460:
	// li r11,0
	r11.s64 = 0;
loc_82551464:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-28008
	ctx.r7.s64 = ctx.r10.s64 + -28008;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82551494"))) PPC_WEAK_FUNC(sub_82551494);
PPC_FUNC_IMPL(__imp__sub_82551494) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551498"))) PPC_WEAK_FUNC(sub_82551498);
PPC_FUNC_IMPL(__imp__sub_82551498) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82307b58
	sub_82307B58(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825514e0
	if (!cr6.eq) goto loc_825514E0;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825514d8
	if (cr0.eq) goto loc_825514D8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_825514D8:
	// li r11,1
	r11.s64 = 1;
	// b 0x825514e4
	goto loc_825514E4;
loc_825514E0:
	// li r11,0
	r11.s64 = 0;
loc_825514E4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-28000
	ctx.r7.s64 = ctx.r10.s64 + -28000;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82551514"))) PPC_WEAK_FUNC(sub_82551514);
PPC_FUNC_IMPL(__imp__sub_82551514) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551518"))) PPC_WEAK_FUNC(sub_82551518);
PPC_FUNC_IMPL(__imp__sub_82551518) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82307b58
	sub_82307B58(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82551560
	if (!cr6.eq) goto loc_82551560;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82551558
	if (cr0.eq) goto loc_82551558;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82551558:
	// li r11,1
	r11.s64 = 1;
	// b 0x82551564
	goto loc_82551564;
loc_82551560:
	// li r11,0
	r11.s64 = 0;
loc_82551564:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-27992
	ctx.r7.s64 = ctx.r10.s64 + -27992;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82551594"))) PPC_WEAK_FUNC(sub_82551594);
PPC_FUNC_IMPL(__imp__sub_82551594) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551598"))) PPC_WEAK_FUNC(sub_82551598);
PPC_FUNC_IMPL(__imp__sub_82551598) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82551168
	sub_82551168(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825515A8"))) PPC_WEAK_FUNC(sub_825515A8);
PPC_FUNC_IMPL(__imp__sub_825515A8) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// li r11,-1
	r11.s64 = -1;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r31.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r31.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r31.u32);
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, r31.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x82551218
	sub_82551218(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82551650
	if (cr6.eq) goto loc_82551650;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255164c
	if (cr6.eq) goto loc_8255164C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255164C:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_82551650:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82550cf0
	sub_82550CF0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825516a4
	if (cr6.eq) goto loc_825516A4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825516a0
	if (cr6.eq) goto loc_825516A0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825516A0:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_825516A4:
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,4376
	ctx.r10.s64 = r11.s64 + 4376;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_825516D0"))) PPC_WEAK_FUNC(sub_825516D0);
PPC_FUNC_IMPL(__imp__sub_825516D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825516D4"))) PPC_WEAK_FUNC(sub_825516D4);
PPC_FUNC_IMPL(__imp__sub_825516D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825516D8"))) PPC_WEAK_FUNC(sub_825516D8);
PPC_FUNC_IMPL(__imp__sub_825516D8) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822febe0
	sub_822FEBE0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82551298
	sub_82551298(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82551758
	if (cr6.eq) goto loc_82551758;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82551754
	if (cr6.eq) goto loc_82551754;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82551754:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82551758:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82550d70
	sub_82550D70(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825517ac
	if (cr6.eq) goto loc_825517AC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825517a8
	if (cr6.eq) goto loc_825517A8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825517A8:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_825517AC:
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,5528
	ctx.r10.s64 = r11.s64 + 5528;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_825517D8"))) PPC_WEAK_FUNC(sub_825517D8);
PPC_FUNC_IMPL(__imp__sub_825517D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825517DC"))) PPC_WEAK_FUNC(sub_825517DC);
PPC_FUNC_IMPL(__imp__sub_825517DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825517E0"))) PPC_WEAK_FUNC(sub_825517E0);
PPC_FUNC_IMPL(__imp__sub_825517E0) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// li r11,-1
	r11.s64 = -1;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r31.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r31.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r31.u32);
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, r31.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x82551318
	sub_82551318(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82551888
	if (cr6.eq) goto loc_82551888;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82551884
	if (cr6.eq) goto loc_82551884;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82551884:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_82551888:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82550df0
	sub_82550DF0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825518dc
	if (cr6.eq) goto loc_825518DC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825518d8
	if (cr6.eq) goto loc_825518D8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825518D8:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_825518DC:
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,4376
	ctx.r10.s64 = r11.s64 + 4376;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_82551908"))) PPC_WEAK_FUNC(sub_82551908);
PPC_FUNC_IMPL(__imp__sub_82551908) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8255190C"))) PPC_WEAK_FUNC(sub_8255190C);
PPC_FUNC_IMPL(__imp__sub_8255190C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82551910"))) PPC_WEAK_FUNC(sub_82551910);
PPC_FUNC_IMPL(__imp__sub_82551910) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825028b0
	sub_825028B0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82551398
	sub_82551398(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82551990
	if (cr6.eq) goto loc_82551990;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255198c
	if (cr6.eq) goto loc_8255198C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255198C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82551990:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82550e70
	sub_82550E70(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825519e4
	if (cr6.eq) goto loc_825519E4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825519e0
	if (cr6.eq) goto loc_825519E0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825519E0:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_825519E4:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,-19664
	ctx.r10.s64 = r11.s64 + -19664;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_82551A10"))) PPC_WEAK_FUNC(sub_82551A10);
PPC_FUNC_IMPL(__imp__sub_82551A10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82551A14"))) PPC_WEAK_FUNC(sub_82551A14);
PPC_FUNC_IMPL(__imp__sub_82551A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82551A18"))) PPC_WEAK_FUNC(sub_82551A18);
PPC_FUNC_IMPL(__imp__sub_82551A18) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825028b0
	sub_825028B0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82551498
	sub_82551498(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82551a98
	if (cr6.eq) goto loc_82551A98;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82551a94
	if (cr6.eq) goto loc_82551A94;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82551A94:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82551A98:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82550f70
	sub_82550F70(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82551aec
	if (cr6.eq) goto loc_82551AEC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82551ae8
	if (cr6.eq) goto loc_82551AE8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82551AE8:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_82551AEC:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,-19664
	ctx.r10.s64 = r11.s64 + -19664;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_82551B18"))) PPC_WEAK_FUNC(sub_82551B18);
PPC_FUNC_IMPL(__imp__sub_82551B18) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82551B1C"))) PPC_WEAK_FUNC(sub_82551B1C);
PPC_FUNC_IMPL(__imp__sub_82551B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82551B20"))) PPC_WEAK_FUNC(sub_82551B20);
PPC_FUNC_IMPL(__imp__sub_82551B20) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// li r11,-1
	r11.s64 = -1;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r31.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r31.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r31.u32);
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, r31.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x82551518
	sub_82551518(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82551bc8
	if (cr6.eq) goto loc_82551BC8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82551bc4
	if (cr6.eq) goto loc_82551BC4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82551BC4:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_82551BC8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82550ff0
	sub_82550FF0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82551c1c
	if (cr6.eq) goto loc_82551C1C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82551c18
	if (cr6.eq) goto loc_82551C18;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82551C18:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_82551C1C:
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,4376
	ctx.r10.s64 = r11.s64 + 4376;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_82551C48"))) PPC_WEAK_FUNC(sub_82551C48);
PPC_FUNC_IMPL(__imp__sub_82551C48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82551C4C"))) PPC_WEAK_FUNC(sub_82551C4C);
PPC_FUNC_IMPL(__imp__sub_82551C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82551C50"))) PPC_WEAK_FUNC(sub_82551C50);
PPC_FUNC_IMPL(__imp__sub_82551C50) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x824ddc20
	sub_824DDC20(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82551418
	sub_82551418(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82551cd0
	if (cr6.eq) goto loc_82551CD0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82551ccc
	if (cr6.eq) goto loc_82551CCC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82551CCC:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82551CD0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82550ef0
	sub_82550EF0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82551d24
	if (cr6.eq) goto loc_82551D24;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82551d20
	if (cr6.eq) goto loc_82551D20;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82551D20:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_82551D24:
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,30464
	ctx.r10.s64 = r11.s64 + 30464;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_82551D50"))) PPC_WEAK_FUNC(sub_82551D50);
PPC_FUNC_IMPL(__imp__sub_82551D50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82551D54"))) PPC_WEAK_FUNC(sub_82551D54);
PPC_FUNC_IMPL(__imp__sub_82551D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82551D58"))) PPC_WEAK_FUNC(sub_82551D58);
PPC_FUNC_IMPL(__imp__sub_82551D58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551D5C"))) PPC_WEAK_FUNC(sub_82551D5C);
PPC_FUNC_IMPL(__imp__sub_82551D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82551D60"))) PPC_WEAK_FUNC(sub_82551D60);
PPC_FUNC_IMPL(__imp__sub_82551D60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551D64"))) PPC_WEAK_FUNC(sub_82551D64);
PPC_FUNC_IMPL(__imp__sub_82551D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82551D68"))) PPC_WEAK_FUNC(sub_82551D68);
PPC_FUNC_IMPL(__imp__sub_82551D68) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r10,-27728
	r29.s64 = ctx.r10.s64 + -27728;
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
	// li r8,17
	ctx.r8.s64 = 17;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r3,4
	ctx.r3.s64 = 4;
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
	// beq cr6,0x82551dc4
	if (cr6.eq) goto loc_82551DC4;
	// bl 0x82551fa0
	sub_82551FA0(ctx, base);
	// b 0x82551dc8
	goto loc_82551DC8;
loc_82551DC4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82551DC8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r8,18
	ctx.r8.s64 = 18;
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// li r3,4
	ctx.r3.s64 = 4;
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
	// beq cr6,0x82551e18
	if (cr6.eq) goto loc_82551E18;
	// bl 0x825527b0
	sub_825527B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9468
	return;
loc_82551E18:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82551E24"))) PPC_WEAK_FUNC(sub_82551E24);
PPC_FUNC_IMPL(__imp__sub_82551E24) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82551E28"))) PPC_WEAK_FUNC(sub_82551E28);
PPC_FUNC_IMPL(__imp__sub_82551E28) {
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
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82551e5c
	if (cr6.eq) goto loc_82551E5C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82551ef8
	sub_82551EF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_82551E5C:
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82551e7c
	if (cr6.eq) goto loc_82551E7C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825526f0
	sub_825526F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
loc_82551E7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82551E80"))) PPC_WEAK_FUNC(sub_82551E80);
PPC_FUNC_IMPL(__imp__sub_82551E80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82551E84"))) PPC_WEAK_FUNC(sub_82551E84);
PPC_FUNC_IMPL(__imp__sub_82551E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82551E88"))) PPC_WEAK_FUNC(sub_82551E88);
PPC_FUNC_IMPL(__imp__sub_82551E88) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82551ebc
	if (cr6.eq) goto loc_82551EBC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82551ec0
	if (!cr6.eq) goto loc_82551EC0;
loc_82551EBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82551EC0:
	// lwz r30,16(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x824f4e38
	sub_824F4E38(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x824f5298
	sub_824F5298(ctx, base);
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

__attribute__((alias("__imp__sub_82551EF0"))) PPC_WEAK_FUNC(sub_82551EF0);
PPC_FUNC_IMPL(__imp__sub_82551EF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551EF4"))) PPC_WEAK_FUNC(sub_82551EF4);
PPC_FUNC_IMPL(__imp__sub_82551EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82551EF8"))) PPC_WEAK_FUNC(sub_82551EF8);
PPC_FUNC_IMPL(__imp__sub_82551EF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551EFC"))) PPC_WEAK_FUNC(sub_82551EFC);
PPC_FUNC_IMPL(__imp__sub_82551EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82551F00"))) PPC_WEAK_FUNC(sub_82551F00);
PPC_FUNC_IMPL(__imp__sub_82551F00) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
}

__attribute__((alias("__imp__sub_82551F04"))) PPC_WEAK_FUNC(sub_82551F04);
PPC_FUNC_IMPL(__imp__sub_82551F04) {
	PPC_FUNC_PROLOGUE();
	// b 0x82553c50
	sub_82553C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551F08"))) PPC_WEAK_FUNC(sub_82551F08);
PPC_FUNC_IMPL(__imp__sub_82551F08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x825548e0
	sub_825548E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551F10"))) PPC_WEAK_FUNC(sub_82551F10);
PPC_FUNC_IMPL(__imp__sub_82551F10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82554960
	sub_82554960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551F18"))) PPC_WEAK_FUNC(sub_82551F18);
PPC_FUNC_IMPL(__imp__sub_82551F18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
}

__attribute__((alias("__imp__sub_82551F1C"))) PPC_WEAK_FUNC(sub_82551F1C);
PPC_FUNC_IMPL(__imp__sub_82551F1C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82553d08
	sub_82553D08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551F20"))) PPC_WEAK_FUNC(sub_82551F20);
PPC_FUNC_IMPL(__imp__sub_82551F20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82553820
	sub_82553820(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551F28"))) PPC_WEAK_FUNC(sub_82551F28);
PPC_FUNC_IMPL(__imp__sub_82551F28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82554108
	sub_82554108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551F30"))) PPC_WEAK_FUNC(sub_82551F30);
PPC_FUNC_IMPL(__imp__sub_82551F30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82554d48
	sub_82554D48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551F38"))) PPC_WEAK_FUNC(sub_82551F38);
PPC_FUNC_IMPL(__imp__sub_82551F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r3,-22536(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -22536);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551F44"))) PPC_WEAK_FUNC(sub_82551F44);
PPC_FUNC_IMPL(__imp__sub_82551F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82551F48"))) PPC_WEAK_FUNC(sub_82551F48);
PPC_FUNC_IMPL(__imp__sub_82551F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r10,r11,-22536
	ctx.r10.s64 = r11.s64 + -22536;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551F58"))) PPC_WEAK_FUNC(sub_82551F58);
PPC_FUNC_IMPL(__imp__sub_82551F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r10,r11,-22536
	ctx.r10.s64 = r11.s64 + -22536;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551F68"))) PPC_WEAK_FUNC(sub_82551F68);
PPC_FUNC_IMPL(__imp__sub_82551F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r10,r11,-22536
	ctx.r10.s64 = r11.s64 + -22536;
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551F78"))) PPC_WEAK_FUNC(sub_82551F78);
PPC_FUNC_IMPL(__imp__sub_82551F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r10,r11,-22536
	ctx.r10.s64 = r11.s64 + -22536;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551F88"))) PPC_WEAK_FUNC(sub_82551F88);
PPC_FUNC_IMPL(__imp__sub_82551F88) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82553e70
	sub_82553E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551F90"))) PPC_WEAK_FUNC(sub_82551F90);
PPC_FUNC_IMPL(__imp__sub_82551F90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82554b40
	sub_82554B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551F98"))) PPC_WEAK_FUNC(sub_82551F98);
PPC_FUNC_IMPL(__imp__sub_82551F98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82554c90
	sub_82554C90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551FA0"))) PPC_WEAK_FUNC(sub_82551FA0);
PPC_FUNC_IMPL(__imp__sub_82551FA0) {
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
	// beq cr6,0x82551fd0
	if (cr6.eq) goto loc_82551FD0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82551fd4
	if (!cr6.eq) goto loc_82551FD4;
loc_82551FD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82551FD4:
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
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

__attribute__((alias("__imp__sub_82551FF4"))) PPC_WEAK_FUNC(sub_82551FF4);
PPC_FUNC_IMPL(__imp__sub_82551FF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551FF8"))) PPC_WEAK_FUNC(sub_82551FF8);
PPC_FUNC_IMPL(__imp__sub_82551FF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// bl 0x82553fc0
	sub_82553FC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r7,r30,r8
	ctx.r7.s64 = ctx.r8.s64 - r30.s64;
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r31,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	r31.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82880e70
	sub_82880E70(ctx, base);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r4,-27652
	ctx.r4.s64 = ctx.r4.s64 + -27652;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82880f10
	sub_82880F10(ctx, base);
	// clrldi r3,r30,32
	ctx.r3.u64 = r30.u64 & 0xFFFFFFFF;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-27660
	ctx.r4.s64 = r11.s64 + -27660;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82880f00
	sub_82880F00(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8254daa0
	sub_8254DAA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82880e20
	sub_82880E20(ctx, base);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825520B0"))) PPC_WEAK_FUNC(sub_825520B0);
PPC_FUNC_IMPL(__imp__sub_825520B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825520B4"))) PPC_WEAK_FUNC(sub_825520B4);
PPC_FUNC_IMPL(__imp__sub_825520B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825520B8"))) PPC_WEAK_FUNC(sub_825520B8);
PPC_FUNC_IMPL(__imp__sub_825520B8) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r9,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r9.u32);
	// beq cr6,0x82552100
	if (cr6.eq) goto loc_82552100;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82552104
	if (!cr6.eq) goto loc_82552104;
loc_82552100:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82552104:
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
	// addi r5,r9,-27592
	ctx.r5.s64 = ctx.r9.s64 + -27592;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82880e70
	sub_82880E70(ctx, base);
	// li r30,15
	r30.s64 = 15;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r30.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r31.u8);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, r31.u8);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r31.u8);
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825522d8
	if (!cr6.eq) goto loc_825522D8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-27608
	ctx.r5.s64 = r11.s64 + -27608;
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
loc_82552198:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82552198
	if (!cr6.eq) goto loc_82552198;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
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
	// addi r5,r10,-27624
	ctx.r5.s64 = ctx.r10.s64 + -27624;
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
loc_825521EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825521ec
	if (!cr6.eq) goto loc_825521EC;
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,-27636
	ctx.r5.s64 = ctx.r10.s64 + -27636;
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
loc_82552240:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82552240
	if (!cr6.eq) goto loc_82552240;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
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
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82552280
	if (!cr6.lt) goto loc_82552280;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
loc_82552280:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-32496
	ctx.r4.s64 = r11.s64 + -32496;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x825522a4
	if (!cr6.lt) goto loc_825522A4;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
loc_825522A4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,20244
	ctx.r4.s64 = r11.s64 + 20244;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x825522c8
	if (!cr6.lt) goto loc_825522C8;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_825522C8:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-27644
	ctx.r4.s64 = r11.s64 + -27644;
	// bl 0x82881060
	sub_82881060(ctx, base);
loc_825522D8:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82880f00
	sub_82880F00(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8254daa0
	sub_8254DAA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82552304
	if (cr6.lt) goto loc_82552304;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82552304:
	// lwz r11,196(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r31.u8);
	// blt cr6,0x82552324
	if (cr6.lt) goto loc_82552324;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82552324:
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, r31.u8);
	// blt cr6,0x82552344
	if (cr6.lt) goto loc_82552344;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82552344:
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r30.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r31.u8);
	// bl 0x82880e20
	sub_82880E20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// lwz r3,304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8255237C"))) PPC_WEAK_FUNC(sub_8255237C);
PPC_FUNC_IMPL(__imp__sub_8255237C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82552380"))) PPC_WEAK_FUNC(sub_82552380);
PPC_FUNC_IMPL(__imp__sub_82552380) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r9,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r9.u32);
	// beq cr6,0x825523c8
	if (cr6.eq) goto loc_825523C8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825523cc
	if (!cr6.eq) goto loc_825523CC;
loc_825523C8:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_825523CC:
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
	// addi r5,r9,-27400
	ctx.r5.s64 = ctx.r9.s64 + -27400;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82880e70
	sub_82880E70(ctx, base);
	// li r30,15
	r30.s64 = 15;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r30.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, r31.u8);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r30.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r31.u8);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r31.u8);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r31.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, r31.u8);
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82552624
	if (!cr6.eq) goto loc_82552624;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-27412
	ctx.r5.s64 = r11.s64 + -27412;
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
loc_8255246C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8255246c
	if (!cr6.eq) goto loc_8255246C;
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,-27428
	ctx.r5.s64 = ctx.r10.s64 + -27428;
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
loc_825524C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825524c0
	if (!cr6.eq) goto loc_825524C0;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
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
	// addi r5,r10,-27440
	ctx.r5.s64 = ctx.r10.s64 + -27440;
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
loc_82552514:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82552514
	if (!cr6.eq) goto loc_82552514;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
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
	// addi r5,r10,-27452
	ctx.r5.s64 = ctx.r10.s64 + -27452;
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
loc_82552568:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82552568
	if (!cr6.eq) goto loc_82552568;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
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
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x825525a8
	if (!cr6.lt) goto loc_825525A8;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
loc_825525A8:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-32496
	ctx.r4.s64 = r11.s64 + -32496;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x825525cc
	if (!cr6.lt) goto loc_825525CC;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
loc_825525CC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,20244
	ctx.r4.s64 = r11.s64 + 20244;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x825525f0
	if (!cr6.lt) goto loc_825525F0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_825525F0:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-27644
	ctx.r4.s64 = r11.s64 + -27644;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82552614
	if (!cr6.lt) goto loc_82552614;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
loc_82552614:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-27460
	ctx.r4.s64 = r11.s64 + -27460;
	// bl 0x82881060
	sub_82881060(ctx, base);
loc_82552624:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82880f00
	sub_82880F00(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8254daa0
	sub_8254DAA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// lwz r11,228(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82552650
	if (cr6.lt) goto loc_82552650;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82552650:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, r31.u8);
	// blt cr6,0x82552670
	if (cr6.lt) goto loc_82552670;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82552670:
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r31.u8);
	// blt cr6,0x82552690
	if (cr6.lt) goto loc_82552690;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82552690:
	// lwz r11,196(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r30.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r31.u8);
	// blt cr6,0x825526b0
	if (cr6.lt) goto loc_825526B0;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_825526B0:
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r30.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, r31.u8);
	// bl 0x82880e20
	sub_82880E20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825526E8"))) PPC_WEAK_FUNC(sub_825526E8);
PPC_FUNC_IMPL(__imp__sub_825526E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825526EC"))) PPC_WEAK_FUNC(sub_825526EC);
PPC_FUNC_IMPL(__imp__sub_825526EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

