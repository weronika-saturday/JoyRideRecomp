#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_824E7A9C"))) PPC_WEAK_FUNC(sub_824E7A9C);
PPC_FUNC_IMPL(__imp__sub_824E7A9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E7AA0"))) PPC_WEAK_FUNC(sub_824E7AA0);
PPC_FUNC_IMPL(__imp__sub_824E7AA0) {
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
	// bne cr6,0x824e7ae8
	if (!cr6.eq) goto loc_824E7AE8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e7ae0
	if (cr0.eq) goto loc_824E7AE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E7AE0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e7aec
	goto loc_824E7AEC;
loc_824E7AE8:
	// li r11,0
	r11.s64 = 0;
loc_824E7AEC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3084
	ctx.r7.s64 = ctx.r10.s64 + 3084;
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

__attribute__((alias("__imp__sub_824E7B1C"))) PPC_WEAK_FUNC(sub_824E7B1C);
PPC_FUNC_IMPL(__imp__sub_824E7B1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E7B20"))) PPC_WEAK_FUNC(sub_824E7B20);
PPC_FUNC_IMPL(__imp__sub_824E7B20) {
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
	// bne cr6,0x824e7b68
	if (!cr6.eq) goto loc_824E7B68;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e7b60
	if (cr0.eq) goto loc_824E7B60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E7B60:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e7b6c
	goto loc_824E7B6C;
loc_824E7B68:
	// li r11,0
	r11.s64 = 0;
loc_824E7B6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3092
	ctx.r7.s64 = ctx.r10.s64 + 3092;
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

__attribute__((alias("__imp__sub_824E7B9C"))) PPC_WEAK_FUNC(sub_824E7B9C);
PPC_FUNC_IMPL(__imp__sub_824E7B9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E7BA0"))) PPC_WEAK_FUNC(sub_824E7BA0);
PPC_FUNC_IMPL(__imp__sub_824E7BA0) {
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
	// bne cr6,0x824e7be8
	if (!cr6.eq) goto loc_824E7BE8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e7be0
	if (cr0.eq) goto loc_824E7BE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E7BE0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e7bec
	goto loc_824E7BEC;
loc_824E7BE8:
	// li r11,0
	r11.s64 = 0;
loc_824E7BEC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3100
	ctx.r7.s64 = ctx.r10.s64 + 3100;
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

__attribute__((alias("__imp__sub_824E7C1C"))) PPC_WEAK_FUNC(sub_824E7C1C);
PPC_FUNC_IMPL(__imp__sub_824E7C1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E7C20"))) PPC_WEAK_FUNC(sub_824E7C20);
PPC_FUNC_IMPL(__imp__sub_824E7C20) {
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
	// bne cr6,0x824e7c68
	if (!cr6.eq) goto loc_824E7C68;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e7c60
	if (cr0.eq) goto loc_824E7C60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E7C60:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e7c6c
	goto loc_824E7C6C;
loc_824E7C68:
	// li r11,0
	r11.s64 = 0;
loc_824E7C6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3108
	ctx.r7.s64 = ctx.r10.s64 + 3108;
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

__attribute__((alias("__imp__sub_824E7C9C"))) PPC_WEAK_FUNC(sub_824E7C9C);
PPC_FUNC_IMPL(__imp__sub_824E7C9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E7CA0"))) PPC_WEAK_FUNC(sub_824E7CA0);
PPC_FUNC_IMPL(__imp__sub_824E7CA0) {
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
	// bne cr6,0x824e7ce8
	if (!cr6.eq) goto loc_824E7CE8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e7ce0
	if (cr0.eq) goto loc_824E7CE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E7CE0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e7cec
	goto loc_824E7CEC;
loc_824E7CE8:
	// li r11,0
	r11.s64 = 0;
loc_824E7CEC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3116
	ctx.r7.s64 = ctx.r10.s64 + 3116;
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

__attribute__((alias("__imp__sub_824E7D1C"))) PPC_WEAK_FUNC(sub_824E7D1C);
PPC_FUNC_IMPL(__imp__sub_824E7D1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E7D20"))) PPC_WEAK_FUNC(sub_824E7D20);
PPC_FUNC_IMPL(__imp__sub_824E7D20) {
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
	// bne cr6,0x824e7d68
	if (!cr6.eq) goto loc_824E7D68;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e7d60
	if (cr0.eq) goto loc_824E7D60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E7D60:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e7d6c
	goto loc_824E7D6C;
loc_824E7D68:
	// li r11,0
	r11.s64 = 0;
loc_824E7D6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3124
	ctx.r7.s64 = ctx.r10.s64 + 3124;
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

__attribute__((alias("__imp__sub_824E7D9C"))) PPC_WEAK_FUNC(sub_824E7D9C);
PPC_FUNC_IMPL(__imp__sub_824E7D9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E7DA0"))) PPC_WEAK_FUNC(sub_824E7DA0);
PPC_FUNC_IMPL(__imp__sub_824E7DA0) {
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
	// bne cr6,0x824e7de8
	if (!cr6.eq) goto loc_824E7DE8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e7de0
	if (cr0.eq) goto loc_824E7DE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E7DE0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e7dec
	goto loc_824E7DEC;
loc_824E7DE8:
	// li r11,0
	r11.s64 = 0;
loc_824E7DEC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3132
	ctx.r7.s64 = ctx.r10.s64 + 3132;
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

__attribute__((alias("__imp__sub_824E7E1C"))) PPC_WEAK_FUNC(sub_824E7E1C);
PPC_FUNC_IMPL(__imp__sub_824E7E1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E7E20"))) PPC_WEAK_FUNC(sub_824E7E20);
PPC_FUNC_IMPL(__imp__sub_824E7E20) {
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
	// bne cr6,0x824e7e68
	if (!cr6.eq) goto loc_824E7E68;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e7e60
	if (cr0.eq) goto loc_824E7E60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E7E60:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e7e6c
	goto loc_824E7E6C;
loc_824E7E68:
	// li r11,0
	r11.s64 = 0;
loc_824E7E6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3140
	ctx.r7.s64 = ctx.r10.s64 + 3140;
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

__attribute__((alias("__imp__sub_824E7E9C"))) PPC_WEAK_FUNC(sub_824E7E9C);
PPC_FUNC_IMPL(__imp__sub_824E7E9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E7EA0"))) PPC_WEAK_FUNC(sub_824E7EA0);
PPC_FUNC_IMPL(__imp__sub_824E7EA0) {
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
	// bne cr6,0x824e7ee8
	if (!cr6.eq) goto loc_824E7EE8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e7ee0
	if (cr0.eq) goto loc_824E7EE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E7EE0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e7eec
	goto loc_824E7EEC;
loc_824E7EE8:
	// li r11,0
	r11.s64 = 0;
loc_824E7EEC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3148
	ctx.r7.s64 = ctx.r10.s64 + 3148;
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

__attribute__((alias("__imp__sub_824E7F1C"))) PPC_WEAK_FUNC(sub_824E7F1C);
PPC_FUNC_IMPL(__imp__sub_824E7F1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E7F20"))) PPC_WEAK_FUNC(sub_824E7F20);
PPC_FUNC_IMPL(__imp__sub_824E7F20) {
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
	// bne cr6,0x824e7f68
	if (!cr6.eq) goto loc_824E7F68;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e7f60
	if (cr0.eq) goto loc_824E7F60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E7F60:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e7f6c
	goto loc_824E7F6C;
loc_824E7F68:
	// li r11,0
	r11.s64 = 0;
loc_824E7F6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3156
	ctx.r7.s64 = ctx.r10.s64 + 3156;
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

__attribute__((alias("__imp__sub_824E7F9C"))) PPC_WEAK_FUNC(sub_824E7F9C);
PPC_FUNC_IMPL(__imp__sub_824E7F9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E7FA0"))) PPC_WEAK_FUNC(sub_824E7FA0);
PPC_FUNC_IMPL(__imp__sub_824E7FA0) {
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
	// bne cr6,0x824e7fe8
	if (!cr6.eq) goto loc_824E7FE8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e7fe0
	if (cr0.eq) goto loc_824E7FE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E7FE0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e7fec
	goto loc_824E7FEC;
loc_824E7FE8:
	// li r11,0
	r11.s64 = 0;
loc_824E7FEC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3164
	ctx.r7.s64 = ctx.r10.s64 + 3164;
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

__attribute__((alias("__imp__sub_824E801C"))) PPC_WEAK_FUNC(sub_824E801C);
PPC_FUNC_IMPL(__imp__sub_824E801C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E8020"))) PPC_WEAK_FUNC(sub_824E8020);
PPC_FUNC_IMPL(__imp__sub_824E8020) {
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
	// bne cr6,0x824e8068
	if (!cr6.eq) goto loc_824E8068;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e8060
	if (cr0.eq) goto loc_824E8060;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E8060:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e806c
	goto loc_824E806C;
loc_824E8068:
	// li r11,0
	r11.s64 = 0;
loc_824E806C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3172
	ctx.r7.s64 = ctx.r10.s64 + 3172;
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

__attribute__((alias("__imp__sub_824E809C"))) PPC_WEAK_FUNC(sub_824E809C);
PPC_FUNC_IMPL(__imp__sub_824E809C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E80A0"))) PPC_WEAK_FUNC(sub_824E80A0);
PPC_FUNC_IMPL(__imp__sub_824E80A0) {
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
	// bne cr6,0x824e80e8
	if (!cr6.eq) goto loc_824E80E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e80e0
	if (cr0.eq) goto loc_824E80E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E80E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e80ec
	goto loc_824E80EC;
loc_824E80E8:
	// li r11,0
	r11.s64 = 0;
loc_824E80EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3180
	ctx.r7.s64 = ctx.r10.s64 + 3180;
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

__attribute__((alias("__imp__sub_824E811C"))) PPC_WEAK_FUNC(sub_824E811C);
PPC_FUNC_IMPL(__imp__sub_824E811C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E8120"))) PPC_WEAK_FUNC(sub_824E8120);
PPC_FUNC_IMPL(__imp__sub_824E8120) {
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
	// bne cr6,0x824e8168
	if (!cr6.eq) goto loc_824E8168;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e8160
	if (cr0.eq) goto loc_824E8160;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E8160:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e816c
	goto loc_824E816C;
loc_824E8168:
	// li r11,0
	r11.s64 = 0;
loc_824E816C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3188
	ctx.r7.s64 = ctx.r10.s64 + 3188;
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

__attribute__((alias("__imp__sub_824E819C"))) PPC_WEAK_FUNC(sub_824E819C);
PPC_FUNC_IMPL(__imp__sub_824E819C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E81A0"))) PPC_WEAK_FUNC(sub_824E81A0);
PPC_FUNC_IMPL(__imp__sub_824E81A0) {
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
	// bne cr6,0x824e81e8
	if (!cr6.eq) goto loc_824E81E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e81e0
	if (cr0.eq) goto loc_824E81E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E81E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e81ec
	goto loc_824E81EC;
loc_824E81E8:
	// li r11,0
	r11.s64 = 0;
loc_824E81EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3196
	ctx.r7.s64 = ctx.r10.s64 + 3196;
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

__attribute__((alias("__imp__sub_824E821C"))) PPC_WEAK_FUNC(sub_824E821C);
PPC_FUNC_IMPL(__imp__sub_824E821C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E8220"))) PPC_WEAK_FUNC(sub_824E8220);
PPC_FUNC_IMPL(__imp__sub_824E8220) {
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
	// bne cr6,0x824e8268
	if (!cr6.eq) goto loc_824E8268;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e8260
	if (cr0.eq) goto loc_824E8260;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E8260:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e826c
	goto loc_824E826C;
loc_824E8268:
	// li r11,0
	r11.s64 = 0;
loc_824E826C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3204
	ctx.r7.s64 = ctx.r10.s64 + 3204;
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

__attribute__((alias("__imp__sub_824E829C"))) PPC_WEAK_FUNC(sub_824E829C);
PPC_FUNC_IMPL(__imp__sub_824E829C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E82A0"))) PPC_WEAK_FUNC(sub_824E82A0);
PPC_FUNC_IMPL(__imp__sub_824E82A0) {
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
	// bne cr6,0x824e82e8
	if (!cr6.eq) goto loc_824E82E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e82e0
	if (cr0.eq) goto loc_824E82E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E82E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e82ec
	goto loc_824E82EC;
loc_824E82E8:
	// li r11,0
	r11.s64 = 0;
loc_824E82EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3212
	ctx.r7.s64 = ctx.r10.s64 + 3212;
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

__attribute__((alias("__imp__sub_824E831C"))) PPC_WEAK_FUNC(sub_824E831C);
PPC_FUNC_IMPL(__imp__sub_824E831C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E8320"))) PPC_WEAK_FUNC(sub_824E8320);
PPC_FUNC_IMPL(__imp__sub_824E8320) {
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
	// bne cr6,0x824e8368
	if (!cr6.eq) goto loc_824E8368;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e8360
	if (cr0.eq) goto loc_824E8360;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E8360:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e836c
	goto loc_824E836C;
loc_824E8368:
	// li r11,0
	r11.s64 = 0;
loc_824E836C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3220
	ctx.r7.s64 = ctx.r10.s64 + 3220;
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

__attribute__((alias("__imp__sub_824E839C"))) PPC_WEAK_FUNC(sub_824E839C);
PPC_FUNC_IMPL(__imp__sub_824E839C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E83A0"))) PPC_WEAK_FUNC(sub_824E83A0);
PPC_FUNC_IMPL(__imp__sub_824E83A0) {
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
	// bne cr6,0x824e83e8
	if (!cr6.eq) goto loc_824E83E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e83e0
	if (cr0.eq) goto loc_824E83E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E83E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e83ec
	goto loc_824E83EC;
loc_824E83E8:
	// li r11,0
	r11.s64 = 0;
loc_824E83EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3228
	ctx.r7.s64 = ctx.r10.s64 + 3228;
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

__attribute__((alias("__imp__sub_824E841C"))) PPC_WEAK_FUNC(sub_824E841C);
PPC_FUNC_IMPL(__imp__sub_824E841C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E8420"))) PPC_WEAK_FUNC(sub_824E8420);
PPC_FUNC_IMPL(__imp__sub_824E8420) {
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
	// bne cr6,0x824e8468
	if (!cr6.eq) goto loc_824E8468;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e8460
	if (cr0.eq) goto loc_824E8460;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E8460:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e846c
	goto loc_824E846C;
loc_824E8468:
	// li r11,0
	r11.s64 = 0;
loc_824E846C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3236
	ctx.r7.s64 = ctx.r10.s64 + 3236;
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

__attribute__((alias("__imp__sub_824E849C"))) PPC_WEAK_FUNC(sub_824E849C);
PPC_FUNC_IMPL(__imp__sub_824E849C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E84A0"))) PPC_WEAK_FUNC(sub_824E84A0);
PPC_FUNC_IMPL(__imp__sub_824E84A0) {
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
	// bne cr6,0x824e84e8
	if (!cr6.eq) goto loc_824E84E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e84e0
	if (cr0.eq) goto loc_824E84E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E84E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e84ec
	goto loc_824E84EC;
loc_824E84E8:
	// li r11,0
	r11.s64 = 0;
loc_824E84EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3244
	ctx.r7.s64 = ctx.r10.s64 + 3244;
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

__attribute__((alias("__imp__sub_824E851C"))) PPC_WEAK_FUNC(sub_824E851C);
PPC_FUNC_IMPL(__imp__sub_824E851C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E8520"))) PPC_WEAK_FUNC(sub_824E8520);
PPC_FUNC_IMPL(__imp__sub_824E8520) {
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
	// bne cr6,0x824e8568
	if (!cr6.eq) goto loc_824E8568;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e8560
	if (cr0.eq) goto loc_824E8560;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E8560:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e856c
	goto loc_824E856C;
loc_824E8568:
	// li r11,0
	r11.s64 = 0;
loc_824E856C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3252
	ctx.r7.s64 = ctx.r10.s64 + 3252;
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

__attribute__((alias("__imp__sub_824E859C"))) PPC_WEAK_FUNC(sub_824E859C);
PPC_FUNC_IMPL(__imp__sub_824E859C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E85A0"))) PPC_WEAK_FUNC(sub_824E85A0);
PPC_FUNC_IMPL(__imp__sub_824E85A0) {
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
	// bne cr6,0x824e85e8
	if (!cr6.eq) goto loc_824E85E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e85e0
	if (cr0.eq) goto loc_824E85E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E85E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e85ec
	goto loc_824E85EC;
loc_824E85E8:
	// li r11,0
	r11.s64 = 0;
loc_824E85EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3260
	ctx.r7.s64 = ctx.r10.s64 + 3260;
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

__attribute__((alias("__imp__sub_824E861C"))) PPC_WEAK_FUNC(sub_824E861C);
PPC_FUNC_IMPL(__imp__sub_824E861C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E8620"))) PPC_WEAK_FUNC(sub_824E8620);
PPC_FUNC_IMPL(__imp__sub_824E8620) {
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
	// bne cr6,0x824e8668
	if (!cr6.eq) goto loc_824E8668;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e8660
	if (cr0.eq) goto loc_824E8660;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E8660:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e866c
	goto loc_824E866C;
loc_824E8668:
	// li r11,0
	r11.s64 = 0;
loc_824E866C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3268
	ctx.r7.s64 = ctx.r10.s64 + 3268;
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

__attribute__((alias("__imp__sub_824E869C"))) PPC_WEAK_FUNC(sub_824E869C);
PPC_FUNC_IMPL(__imp__sub_824E869C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E86A0"))) PPC_WEAK_FUNC(sub_824E86A0);
PPC_FUNC_IMPL(__imp__sub_824E86A0) {
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
	// bne cr6,0x824e86e8
	if (!cr6.eq) goto loc_824E86E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e86e0
	if (cr0.eq) goto loc_824E86E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E86E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e86ec
	goto loc_824E86EC;
loc_824E86E8:
	// li r11,0
	r11.s64 = 0;
loc_824E86EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3276
	ctx.r7.s64 = ctx.r10.s64 + 3276;
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

__attribute__((alias("__imp__sub_824E871C"))) PPC_WEAK_FUNC(sub_824E871C);
PPC_FUNC_IMPL(__imp__sub_824E871C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E8720"))) PPC_WEAK_FUNC(sub_824E8720);
PPC_FUNC_IMPL(__imp__sub_824E8720) {
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
	// bne cr6,0x824e8768
	if (!cr6.eq) goto loc_824E8768;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e8760
	if (cr0.eq) goto loc_824E8760;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E8760:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e876c
	goto loc_824E876C;
loc_824E8768:
	// li r11,0
	r11.s64 = 0;
loc_824E876C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3284
	ctx.r7.s64 = ctx.r10.s64 + 3284;
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

__attribute__((alias("__imp__sub_824E879C"))) PPC_WEAK_FUNC(sub_824E879C);
PPC_FUNC_IMPL(__imp__sub_824E879C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E87A0"))) PPC_WEAK_FUNC(sub_824E87A0);
PPC_FUNC_IMPL(__imp__sub_824E87A0) {
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
	// bne cr6,0x824e87e8
	if (!cr6.eq) goto loc_824E87E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e87e0
	if (cr0.eq) goto loc_824E87E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E87E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e87ec
	goto loc_824E87EC;
loc_824E87E8:
	// li r11,0
	r11.s64 = 0;
loc_824E87EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3292
	ctx.r7.s64 = ctx.r10.s64 + 3292;
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

__attribute__((alias("__imp__sub_824E881C"))) PPC_WEAK_FUNC(sub_824E881C);
PPC_FUNC_IMPL(__imp__sub_824E881C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E8820"))) PPC_WEAK_FUNC(sub_824E8820);
PPC_FUNC_IMPL(__imp__sub_824E8820) {
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
	// bne cr6,0x824e8868
	if (!cr6.eq) goto loc_824E8868;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e8860
	if (cr0.eq) goto loc_824E8860;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E8860:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e886c
	goto loc_824E886C;
loc_824E8868:
	// li r11,0
	r11.s64 = 0;
loc_824E886C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3300
	ctx.r7.s64 = ctx.r10.s64 + 3300;
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

__attribute__((alias("__imp__sub_824E889C"))) PPC_WEAK_FUNC(sub_824E889C);
PPC_FUNC_IMPL(__imp__sub_824E889C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E88A0"))) PPC_WEAK_FUNC(sub_824E88A0);
PPC_FUNC_IMPL(__imp__sub_824E88A0) {
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
	// bne cr6,0x824e88e8
	if (!cr6.eq) goto loc_824E88E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e88e0
	if (cr0.eq) goto loc_824E88E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E88E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e88ec
	goto loc_824E88EC;
loc_824E88E8:
	// li r11,0
	r11.s64 = 0;
loc_824E88EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3308
	ctx.r7.s64 = ctx.r10.s64 + 3308;
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

__attribute__((alias("__imp__sub_824E891C"))) PPC_WEAK_FUNC(sub_824E891C);
PPC_FUNC_IMPL(__imp__sub_824E891C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E8920"))) PPC_WEAK_FUNC(sub_824E8920);
PPC_FUNC_IMPL(__imp__sub_824E8920) {
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
	// bne cr6,0x824e8968
	if (!cr6.eq) goto loc_824E8968;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e8960
	if (cr0.eq) goto loc_824E8960;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E8960:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e896c
	goto loc_824E896C;
loc_824E8968:
	// li r11,0
	r11.s64 = 0;
loc_824E896C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3316
	ctx.r7.s64 = ctx.r10.s64 + 3316;
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

__attribute__((alias("__imp__sub_824E899C"))) PPC_WEAK_FUNC(sub_824E899C);
PPC_FUNC_IMPL(__imp__sub_824E899C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E89A0"))) PPC_WEAK_FUNC(sub_824E89A0);
PPC_FUNC_IMPL(__imp__sub_824E89A0) {
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
	// bne cr6,0x824e89e8
	if (!cr6.eq) goto loc_824E89E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e89e0
	if (cr0.eq) goto loc_824E89E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E89E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e89ec
	goto loc_824E89EC;
loc_824E89E8:
	// li r11,0
	r11.s64 = 0;
loc_824E89EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3324
	ctx.r7.s64 = ctx.r10.s64 + 3324;
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

__attribute__((alias("__imp__sub_824E8A1C"))) PPC_WEAK_FUNC(sub_824E8A1C);
PPC_FUNC_IMPL(__imp__sub_824E8A1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E8A20"))) PPC_WEAK_FUNC(sub_824E8A20);
PPC_FUNC_IMPL(__imp__sub_824E8A20) {
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
	// bne cr6,0x824e8a68
	if (!cr6.eq) goto loc_824E8A68;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e8a60
	if (cr0.eq) goto loc_824E8A60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E8A60:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e8a6c
	goto loc_824E8A6C;
loc_824E8A68:
	// li r11,0
	r11.s64 = 0;
loc_824E8A6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3332
	ctx.r7.s64 = ctx.r10.s64 + 3332;
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

__attribute__((alias("__imp__sub_824E8A9C"))) PPC_WEAK_FUNC(sub_824E8A9C);
PPC_FUNC_IMPL(__imp__sub_824E8A9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E8AA0"))) PPC_WEAK_FUNC(sub_824E8AA0);
PPC_FUNC_IMPL(__imp__sub_824E8AA0) {
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
	// bne cr6,0x824e8ae8
	if (!cr6.eq) goto loc_824E8AE8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e8ae0
	if (cr0.eq) goto loc_824E8AE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E8AE0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e8aec
	goto loc_824E8AEC;
loc_824E8AE8:
	// li r11,0
	r11.s64 = 0;
loc_824E8AEC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3340
	ctx.r7.s64 = ctx.r10.s64 + 3340;
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

__attribute__((alias("__imp__sub_824E8B1C"))) PPC_WEAK_FUNC(sub_824E8B1C);
PPC_FUNC_IMPL(__imp__sub_824E8B1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E8B20"))) PPC_WEAK_FUNC(sub_824E8B20);
PPC_FUNC_IMPL(__imp__sub_824E8B20) {
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
	// bne cr6,0x824e8b68
	if (!cr6.eq) goto loc_824E8B68;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e8b60
	if (cr0.eq) goto loc_824E8B60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E8B60:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e8b6c
	goto loc_824E8B6C;
loc_824E8B68:
	// li r11,0
	r11.s64 = 0;
loc_824E8B6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3348
	ctx.r7.s64 = ctx.r10.s64 + 3348;
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

__attribute__((alias("__imp__sub_824E8B9C"))) PPC_WEAK_FUNC(sub_824E8B9C);
PPC_FUNC_IMPL(__imp__sub_824E8B9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E8BA0"))) PPC_WEAK_FUNC(sub_824E8BA0);
PPC_FUNC_IMPL(__imp__sub_824E8BA0) {
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
	// bne cr6,0x824e8be8
	if (!cr6.eq) goto loc_824E8BE8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e8be0
	if (cr0.eq) goto loc_824E8BE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E8BE0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e8bec
	goto loc_824E8BEC;
loc_824E8BE8:
	// li r11,0
	r11.s64 = 0;
loc_824E8BEC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3356
	ctx.r7.s64 = ctx.r10.s64 + 3356;
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

__attribute__((alias("__imp__sub_824E8C1C"))) PPC_WEAK_FUNC(sub_824E8C1C);
PPC_FUNC_IMPL(__imp__sub_824E8C1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E8C20"))) PPC_WEAK_FUNC(sub_824E8C20);
PPC_FUNC_IMPL(__imp__sub_824E8C20) {
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
	// bne cr6,0x824e8c68
	if (!cr6.eq) goto loc_824E8C68;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e8c60
	if (cr0.eq) goto loc_824E8C60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E8C60:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e8c6c
	goto loc_824E8C6C;
loc_824E8C68:
	// li r11,0
	r11.s64 = 0;
loc_824E8C6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3364
	ctx.r7.s64 = ctx.r10.s64 + 3364;
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

__attribute__((alias("__imp__sub_824E8C9C"))) PPC_WEAK_FUNC(sub_824E8C9C);
PPC_FUNC_IMPL(__imp__sub_824E8C9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E8CA0"))) PPC_WEAK_FUNC(sub_824E8CA0);
PPC_FUNC_IMPL(__imp__sub_824E8CA0) {
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
	// bne cr6,0x824e8ce8
	if (!cr6.eq) goto loc_824E8CE8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e8ce0
	if (cr0.eq) goto loc_824E8CE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E8CE0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e8cec
	goto loc_824E8CEC;
loc_824E8CE8:
	// li r11,0
	r11.s64 = 0;
loc_824E8CEC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3372
	ctx.r7.s64 = ctx.r10.s64 + 3372;
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

__attribute__((alias("__imp__sub_824E8D1C"))) PPC_WEAK_FUNC(sub_824E8D1C);
PPC_FUNC_IMPL(__imp__sub_824E8D1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E8D20"))) PPC_WEAK_FUNC(sub_824E8D20);
PPC_FUNC_IMPL(__imp__sub_824E8D20) {
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
	// bne cr6,0x824e8d68
	if (!cr6.eq) goto loc_824E8D68;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e8d60
	if (cr0.eq) goto loc_824E8D60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E8D60:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e8d6c
	goto loc_824E8D6C;
loc_824E8D68:
	// li r11,0
	r11.s64 = 0;
loc_824E8D6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3380
	ctx.r7.s64 = ctx.r10.s64 + 3380;
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

__attribute__((alias("__imp__sub_824E8D9C"))) PPC_WEAK_FUNC(sub_824E8D9C);
PPC_FUNC_IMPL(__imp__sub_824E8D9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E8DA0"))) PPC_WEAK_FUNC(sub_824E8DA0);
PPC_FUNC_IMPL(__imp__sub_824E8DA0) {
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
	// bne cr6,0x824e8de8
	if (!cr6.eq) goto loc_824E8DE8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e8de0
	if (cr0.eq) goto loc_824E8DE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E8DE0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e8dec
	goto loc_824E8DEC;
loc_824E8DE8:
	// li r11,0
	r11.s64 = 0;
loc_824E8DEC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3388
	ctx.r7.s64 = ctx.r10.s64 + 3388;
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

__attribute__((alias("__imp__sub_824E8E1C"))) PPC_WEAK_FUNC(sub_824E8E1C);
PPC_FUNC_IMPL(__imp__sub_824E8E1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E8E20"))) PPC_WEAK_FUNC(sub_824E8E20);
PPC_FUNC_IMPL(__imp__sub_824E8E20) {
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
	// bne cr6,0x824e8e68
	if (!cr6.eq) goto loc_824E8E68;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e8e60
	if (cr0.eq) goto loc_824E8E60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E8E60:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e8e6c
	goto loc_824E8E6C;
loc_824E8E68:
	// li r11,0
	r11.s64 = 0;
loc_824E8E6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3396
	ctx.r7.s64 = ctx.r10.s64 + 3396;
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

__attribute__((alias("__imp__sub_824E8E9C"))) PPC_WEAK_FUNC(sub_824E8E9C);
PPC_FUNC_IMPL(__imp__sub_824E8E9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E8EA0"))) PPC_WEAK_FUNC(sub_824E8EA0);
PPC_FUNC_IMPL(__imp__sub_824E8EA0) {
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
	// bne cr6,0x824e8ee8
	if (!cr6.eq) goto loc_824E8EE8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e8ee0
	if (cr0.eq) goto loc_824E8EE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E8EE0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e8eec
	goto loc_824E8EEC;
loc_824E8EE8:
	// li r11,0
	r11.s64 = 0;
loc_824E8EEC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3404
	ctx.r7.s64 = ctx.r10.s64 + 3404;
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

__attribute__((alias("__imp__sub_824E8F1C"))) PPC_WEAK_FUNC(sub_824E8F1C);
PPC_FUNC_IMPL(__imp__sub_824E8F1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E8F20"))) PPC_WEAK_FUNC(sub_824E8F20);
PPC_FUNC_IMPL(__imp__sub_824E8F20) {
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
	// bne cr6,0x824e8f68
	if (!cr6.eq) goto loc_824E8F68;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e8f60
	if (cr0.eq) goto loc_824E8F60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E8F60:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e8f6c
	goto loc_824E8F6C;
loc_824E8F68:
	// li r11,0
	r11.s64 = 0;
loc_824E8F6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3412
	ctx.r7.s64 = ctx.r10.s64 + 3412;
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

__attribute__((alias("__imp__sub_824E8F9C"))) PPC_WEAK_FUNC(sub_824E8F9C);
PPC_FUNC_IMPL(__imp__sub_824E8F9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E8FA0"))) PPC_WEAK_FUNC(sub_824E8FA0);
PPC_FUNC_IMPL(__imp__sub_824E8FA0) {
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
	// bne cr6,0x824e8fe8
	if (!cr6.eq) goto loc_824E8FE8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e8fe0
	if (cr0.eq) goto loc_824E8FE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E8FE0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e8fec
	goto loc_824E8FEC;
loc_824E8FE8:
	// li r11,0
	r11.s64 = 0;
loc_824E8FEC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3420
	ctx.r7.s64 = ctx.r10.s64 + 3420;
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

__attribute__((alias("__imp__sub_824E901C"))) PPC_WEAK_FUNC(sub_824E901C);
PPC_FUNC_IMPL(__imp__sub_824E901C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E9020"))) PPC_WEAK_FUNC(sub_824E9020);
PPC_FUNC_IMPL(__imp__sub_824E9020) {
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
	// bne cr6,0x824e9068
	if (!cr6.eq) goto loc_824E9068;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e9060
	if (cr0.eq) goto loc_824E9060;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E9060:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e906c
	goto loc_824E906C;
loc_824E9068:
	// li r11,0
	r11.s64 = 0;
loc_824E906C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3428
	ctx.r7.s64 = ctx.r10.s64 + 3428;
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

__attribute__((alias("__imp__sub_824E909C"))) PPC_WEAK_FUNC(sub_824E909C);
PPC_FUNC_IMPL(__imp__sub_824E909C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E90A0"))) PPC_WEAK_FUNC(sub_824E90A0);
PPC_FUNC_IMPL(__imp__sub_824E90A0) {
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
	// bne cr6,0x824e90e8
	if (!cr6.eq) goto loc_824E90E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e90e0
	if (cr0.eq) goto loc_824E90E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E90E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e90ec
	goto loc_824E90EC;
loc_824E90E8:
	// li r11,0
	r11.s64 = 0;
loc_824E90EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3436
	ctx.r7.s64 = ctx.r10.s64 + 3436;
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

__attribute__((alias("__imp__sub_824E911C"))) PPC_WEAK_FUNC(sub_824E911C);
PPC_FUNC_IMPL(__imp__sub_824E911C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E9120"))) PPC_WEAK_FUNC(sub_824E9120);
PPC_FUNC_IMPL(__imp__sub_824E9120) {
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
	// bne cr6,0x824e9168
	if (!cr6.eq) goto loc_824E9168;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e9160
	if (cr0.eq) goto loc_824E9160;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E9160:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e916c
	goto loc_824E916C;
loc_824E9168:
	// li r11,0
	r11.s64 = 0;
loc_824E916C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3444
	ctx.r7.s64 = ctx.r10.s64 + 3444;
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

__attribute__((alias("__imp__sub_824E919C"))) PPC_WEAK_FUNC(sub_824E919C);
PPC_FUNC_IMPL(__imp__sub_824E919C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E91A0"))) PPC_WEAK_FUNC(sub_824E91A0);
PPC_FUNC_IMPL(__imp__sub_824E91A0) {
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
	// bne cr6,0x824e91e8
	if (!cr6.eq) goto loc_824E91E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e91e0
	if (cr0.eq) goto loc_824E91E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E91E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e91ec
	goto loc_824E91EC;
loc_824E91E8:
	// li r11,0
	r11.s64 = 0;
loc_824E91EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3452
	ctx.r7.s64 = ctx.r10.s64 + 3452;
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

__attribute__((alias("__imp__sub_824E921C"))) PPC_WEAK_FUNC(sub_824E921C);
PPC_FUNC_IMPL(__imp__sub_824E921C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E9220"))) PPC_WEAK_FUNC(sub_824E9220);
PPC_FUNC_IMPL(__imp__sub_824E9220) {
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
	// bne cr6,0x824e9268
	if (!cr6.eq) goto loc_824E9268;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e9260
	if (cr0.eq) goto loc_824E9260;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E9260:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e926c
	goto loc_824E926C;
loc_824E9268:
	// li r11,0
	r11.s64 = 0;
loc_824E926C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3460
	ctx.r7.s64 = ctx.r10.s64 + 3460;
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

__attribute__((alias("__imp__sub_824E929C"))) PPC_WEAK_FUNC(sub_824E929C);
PPC_FUNC_IMPL(__imp__sub_824E929C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E92A0"))) PPC_WEAK_FUNC(sub_824E92A0);
PPC_FUNC_IMPL(__imp__sub_824E92A0) {
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
	// bne cr6,0x824e92e8
	if (!cr6.eq) goto loc_824E92E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e92e0
	if (cr0.eq) goto loc_824E92E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E92E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e92ec
	goto loc_824E92EC;
loc_824E92E8:
	// li r11,0
	r11.s64 = 0;
loc_824E92EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3468
	ctx.r7.s64 = ctx.r10.s64 + 3468;
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

__attribute__((alias("__imp__sub_824E931C"))) PPC_WEAK_FUNC(sub_824E931C);
PPC_FUNC_IMPL(__imp__sub_824E931C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E9320"))) PPC_WEAK_FUNC(sub_824E9320);
PPC_FUNC_IMPL(__imp__sub_824E9320) {
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
	// bne cr6,0x824e9368
	if (!cr6.eq) goto loc_824E9368;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e9360
	if (cr0.eq) goto loc_824E9360;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E9360:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e936c
	goto loc_824E936C;
loc_824E9368:
	// li r11,0
	r11.s64 = 0;
loc_824E936C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3476
	ctx.r7.s64 = ctx.r10.s64 + 3476;
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

__attribute__((alias("__imp__sub_824E939C"))) PPC_WEAK_FUNC(sub_824E939C);
PPC_FUNC_IMPL(__imp__sub_824E939C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E93A0"))) PPC_WEAK_FUNC(sub_824E93A0);
PPC_FUNC_IMPL(__imp__sub_824E93A0) {
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
	// bne cr6,0x824e93e8
	if (!cr6.eq) goto loc_824E93E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e93e0
	if (cr0.eq) goto loc_824E93E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E93E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e93ec
	goto loc_824E93EC;
loc_824E93E8:
	// li r11,0
	r11.s64 = 0;
loc_824E93EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3484
	ctx.r7.s64 = ctx.r10.s64 + 3484;
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

__attribute__((alias("__imp__sub_824E941C"))) PPC_WEAK_FUNC(sub_824E941C);
PPC_FUNC_IMPL(__imp__sub_824E941C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E9420"))) PPC_WEAK_FUNC(sub_824E9420);
PPC_FUNC_IMPL(__imp__sub_824E9420) {
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
	// bne cr6,0x824e9468
	if (!cr6.eq) goto loc_824E9468;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e9460
	if (cr0.eq) goto loc_824E9460;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E9460:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e946c
	goto loc_824E946C;
loc_824E9468:
	// li r11,0
	r11.s64 = 0;
loc_824E946C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3492
	ctx.r7.s64 = ctx.r10.s64 + 3492;
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

__attribute__((alias("__imp__sub_824E949C"))) PPC_WEAK_FUNC(sub_824E949C);
PPC_FUNC_IMPL(__imp__sub_824E949C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E94A0"))) PPC_WEAK_FUNC(sub_824E94A0);
PPC_FUNC_IMPL(__imp__sub_824E94A0) {
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
	// bne cr6,0x824e94e8
	if (!cr6.eq) goto loc_824E94E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e94e0
	if (cr0.eq) goto loc_824E94E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E94E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e94ec
	goto loc_824E94EC;
loc_824E94E8:
	// li r11,0
	r11.s64 = 0;
loc_824E94EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3500
	ctx.r7.s64 = ctx.r10.s64 + 3500;
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

__attribute__((alias("__imp__sub_824E951C"))) PPC_WEAK_FUNC(sub_824E951C);
PPC_FUNC_IMPL(__imp__sub_824E951C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E9520"))) PPC_WEAK_FUNC(sub_824E9520);
PPC_FUNC_IMPL(__imp__sub_824E9520) {
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
	// bne cr6,0x824e9568
	if (!cr6.eq) goto loc_824E9568;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e9560
	if (cr0.eq) goto loc_824E9560;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E9560:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e956c
	goto loc_824E956C;
loc_824E9568:
	// li r11,0
	r11.s64 = 0;
loc_824E956C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3508
	ctx.r7.s64 = ctx.r10.s64 + 3508;
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

__attribute__((alias("__imp__sub_824E959C"))) PPC_WEAK_FUNC(sub_824E959C);
PPC_FUNC_IMPL(__imp__sub_824E959C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E95A0"))) PPC_WEAK_FUNC(sub_824E95A0);
PPC_FUNC_IMPL(__imp__sub_824E95A0) {
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
	// bne cr6,0x824e95e8
	if (!cr6.eq) goto loc_824E95E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e95e0
	if (cr0.eq) goto loc_824E95E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E95E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e95ec
	goto loc_824E95EC;
loc_824E95E8:
	// li r11,0
	r11.s64 = 0;
loc_824E95EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3516
	ctx.r7.s64 = ctx.r10.s64 + 3516;
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

__attribute__((alias("__imp__sub_824E961C"))) PPC_WEAK_FUNC(sub_824E961C);
PPC_FUNC_IMPL(__imp__sub_824E961C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E9620"))) PPC_WEAK_FUNC(sub_824E9620);
PPC_FUNC_IMPL(__imp__sub_824E9620) {
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
	// bne cr6,0x824e9668
	if (!cr6.eq) goto loc_824E9668;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e9660
	if (cr0.eq) goto loc_824E9660;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E9660:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e966c
	goto loc_824E966C;
loc_824E9668:
	// li r11,0
	r11.s64 = 0;
loc_824E966C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3524
	ctx.r7.s64 = ctx.r10.s64 + 3524;
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

__attribute__((alias("__imp__sub_824E969C"))) PPC_WEAK_FUNC(sub_824E969C);
PPC_FUNC_IMPL(__imp__sub_824E969C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E96A0"))) PPC_WEAK_FUNC(sub_824E96A0);
PPC_FUNC_IMPL(__imp__sub_824E96A0) {
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
	// bne cr6,0x824e96e8
	if (!cr6.eq) goto loc_824E96E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e96e0
	if (cr0.eq) goto loc_824E96E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E96E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e96ec
	goto loc_824E96EC;
loc_824E96E8:
	// li r11,0
	r11.s64 = 0;
loc_824E96EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3532
	ctx.r7.s64 = ctx.r10.s64 + 3532;
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

__attribute__((alias("__imp__sub_824E971C"))) PPC_WEAK_FUNC(sub_824E971C);
PPC_FUNC_IMPL(__imp__sub_824E971C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E9720"))) PPC_WEAK_FUNC(sub_824E9720);
PPC_FUNC_IMPL(__imp__sub_824E9720) {
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
	// bne cr6,0x824e9768
	if (!cr6.eq) goto loc_824E9768;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e9760
	if (cr0.eq) goto loc_824E9760;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E9760:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e976c
	goto loc_824E976C;
loc_824E9768:
	// li r11,0
	r11.s64 = 0;
loc_824E976C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3540
	ctx.r7.s64 = ctx.r10.s64 + 3540;
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

__attribute__((alias("__imp__sub_824E979C"))) PPC_WEAK_FUNC(sub_824E979C);
PPC_FUNC_IMPL(__imp__sub_824E979C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E97A0"))) PPC_WEAK_FUNC(sub_824E97A0);
PPC_FUNC_IMPL(__imp__sub_824E97A0) {
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
	// bne cr6,0x824e97e8
	if (!cr6.eq) goto loc_824E97E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e97e0
	if (cr0.eq) goto loc_824E97E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E97E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e97ec
	goto loc_824E97EC;
loc_824E97E8:
	// li r11,0
	r11.s64 = 0;
loc_824E97EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3548
	ctx.r7.s64 = ctx.r10.s64 + 3548;
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

__attribute__((alias("__imp__sub_824E981C"))) PPC_WEAK_FUNC(sub_824E981C);
PPC_FUNC_IMPL(__imp__sub_824E981C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E9820"))) PPC_WEAK_FUNC(sub_824E9820);
PPC_FUNC_IMPL(__imp__sub_824E9820) {
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
	// bne cr6,0x824e9868
	if (!cr6.eq) goto loc_824E9868;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e9860
	if (cr0.eq) goto loc_824E9860;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E9860:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e986c
	goto loc_824E986C;
loc_824E9868:
	// li r11,0
	r11.s64 = 0;
loc_824E986C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3556
	ctx.r7.s64 = ctx.r10.s64 + 3556;
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

__attribute__((alias("__imp__sub_824E989C"))) PPC_WEAK_FUNC(sub_824E989C);
PPC_FUNC_IMPL(__imp__sub_824E989C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E98A0"))) PPC_WEAK_FUNC(sub_824E98A0);
PPC_FUNC_IMPL(__imp__sub_824E98A0) {
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
	// bne cr6,0x824e98e8
	if (!cr6.eq) goto loc_824E98E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e98e0
	if (cr0.eq) goto loc_824E98E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E98E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e98ec
	goto loc_824E98EC;
loc_824E98E8:
	// li r11,0
	r11.s64 = 0;
loc_824E98EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3564
	ctx.r7.s64 = ctx.r10.s64 + 3564;
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

__attribute__((alias("__imp__sub_824E991C"))) PPC_WEAK_FUNC(sub_824E991C);
PPC_FUNC_IMPL(__imp__sub_824E991C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E9920"))) PPC_WEAK_FUNC(sub_824E9920);
PPC_FUNC_IMPL(__imp__sub_824E9920) {
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
	// bne cr6,0x824e9968
	if (!cr6.eq) goto loc_824E9968;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e9960
	if (cr0.eq) goto loc_824E9960;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E9960:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e996c
	goto loc_824E996C;
loc_824E9968:
	// li r11,0
	r11.s64 = 0;
loc_824E996C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3572
	ctx.r7.s64 = ctx.r10.s64 + 3572;
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

__attribute__((alias("__imp__sub_824E999C"))) PPC_WEAK_FUNC(sub_824E999C);
PPC_FUNC_IMPL(__imp__sub_824E999C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E99A0"))) PPC_WEAK_FUNC(sub_824E99A0);
PPC_FUNC_IMPL(__imp__sub_824E99A0) {
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
	// bne cr6,0x824e99e8
	if (!cr6.eq) goto loc_824E99E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e99e0
	if (cr0.eq) goto loc_824E99E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E99E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e99ec
	goto loc_824E99EC;
loc_824E99E8:
	// li r11,0
	r11.s64 = 0;
loc_824E99EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3580
	ctx.r7.s64 = ctx.r10.s64 + 3580;
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

__attribute__((alias("__imp__sub_824E9A1C"))) PPC_WEAK_FUNC(sub_824E9A1C);
PPC_FUNC_IMPL(__imp__sub_824E9A1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E9A20"))) PPC_WEAK_FUNC(sub_824E9A20);
PPC_FUNC_IMPL(__imp__sub_824E9A20) {
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
	// bne cr6,0x824e9a68
	if (!cr6.eq) goto loc_824E9A68;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e9a60
	if (cr0.eq) goto loc_824E9A60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E9A60:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e9a6c
	goto loc_824E9A6C;
loc_824E9A68:
	// li r11,0
	r11.s64 = 0;
loc_824E9A6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3588
	ctx.r7.s64 = ctx.r10.s64 + 3588;
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

__attribute__((alias("__imp__sub_824E9A9C"))) PPC_WEAK_FUNC(sub_824E9A9C);
PPC_FUNC_IMPL(__imp__sub_824E9A9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E9AA0"))) PPC_WEAK_FUNC(sub_824E9AA0);
PPC_FUNC_IMPL(__imp__sub_824E9AA0) {
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
	// bne cr6,0x824e9ae8
	if (!cr6.eq) goto loc_824E9AE8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e9ae0
	if (cr0.eq) goto loc_824E9AE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E9AE0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e9aec
	goto loc_824E9AEC;
loc_824E9AE8:
	// li r11,0
	r11.s64 = 0;
loc_824E9AEC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3596
	ctx.r7.s64 = ctx.r10.s64 + 3596;
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

__attribute__((alias("__imp__sub_824E9B1C"))) PPC_WEAK_FUNC(sub_824E9B1C);
PPC_FUNC_IMPL(__imp__sub_824E9B1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E9B20"))) PPC_WEAK_FUNC(sub_824E9B20);
PPC_FUNC_IMPL(__imp__sub_824E9B20) {
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
	// bne cr6,0x824e9b68
	if (!cr6.eq) goto loc_824E9B68;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e9b60
	if (cr0.eq) goto loc_824E9B60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E9B60:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e9b6c
	goto loc_824E9B6C;
loc_824E9B68:
	// li r11,0
	r11.s64 = 0;
loc_824E9B6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3604
	ctx.r7.s64 = ctx.r10.s64 + 3604;
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

__attribute__((alias("__imp__sub_824E9B9C"))) PPC_WEAK_FUNC(sub_824E9B9C);
PPC_FUNC_IMPL(__imp__sub_824E9B9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E9BA0"))) PPC_WEAK_FUNC(sub_824E9BA0);
PPC_FUNC_IMPL(__imp__sub_824E9BA0) {
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
	// bne cr6,0x824e9be8
	if (!cr6.eq) goto loc_824E9BE8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e9be0
	if (cr0.eq) goto loc_824E9BE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E9BE0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e9bec
	goto loc_824E9BEC;
loc_824E9BE8:
	// li r11,0
	r11.s64 = 0;
loc_824E9BEC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3612
	ctx.r7.s64 = ctx.r10.s64 + 3612;
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

__attribute__((alias("__imp__sub_824E9C1C"))) PPC_WEAK_FUNC(sub_824E9C1C);
PPC_FUNC_IMPL(__imp__sub_824E9C1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E9C20"))) PPC_WEAK_FUNC(sub_824E9C20);
PPC_FUNC_IMPL(__imp__sub_824E9C20) {
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
	// bne cr6,0x824e9c68
	if (!cr6.eq) goto loc_824E9C68;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e9c60
	if (cr0.eq) goto loc_824E9C60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E9C60:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e9c6c
	goto loc_824E9C6C;
loc_824E9C68:
	// li r11,0
	r11.s64 = 0;
loc_824E9C6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3620
	ctx.r7.s64 = ctx.r10.s64 + 3620;
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

__attribute__((alias("__imp__sub_824E9C9C"))) PPC_WEAK_FUNC(sub_824E9C9C);
PPC_FUNC_IMPL(__imp__sub_824E9C9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E9CA0"))) PPC_WEAK_FUNC(sub_824E9CA0);
PPC_FUNC_IMPL(__imp__sub_824E9CA0) {
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
	// bne cr6,0x824e9ce8
	if (!cr6.eq) goto loc_824E9CE8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e9ce0
	if (cr0.eq) goto loc_824E9CE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E9CE0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e9cec
	goto loc_824E9CEC;
loc_824E9CE8:
	// li r11,0
	r11.s64 = 0;
loc_824E9CEC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3628
	ctx.r7.s64 = ctx.r10.s64 + 3628;
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

__attribute__((alias("__imp__sub_824E9D1C"))) PPC_WEAK_FUNC(sub_824E9D1C);
PPC_FUNC_IMPL(__imp__sub_824E9D1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E9D20"))) PPC_WEAK_FUNC(sub_824E9D20);
PPC_FUNC_IMPL(__imp__sub_824E9D20) {
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
	// bne cr6,0x824e9d68
	if (!cr6.eq) goto loc_824E9D68;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e9d60
	if (cr0.eq) goto loc_824E9D60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E9D60:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e9d6c
	goto loc_824E9D6C;
loc_824E9D68:
	// li r11,0
	r11.s64 = 0;
loc_824E9D6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3636
	ctx.r7.s64 = ctx.r10.s64 + 3636;
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

__attribute__((alias("__imp__sub_824E9D9C"))) PPC_WEAK_FUNC(sub_824E9D9C);
PPC_FUNC_IMPL(__imp__sub_824E9D9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E9DA0"))) PPC_WEAK_FUNC(sub_824E9DA0);
PPC_FUNC_IMPL(__imp__sub_824E9DA0) {
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
	// bne cr6,0x824e9de8
	if (!cr6.eq) goto loc_824E9DE8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e9de0
	if (cr0.eq) goto loc_824E9DE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E9DE0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e9dec
	goto loc_824E9DEC;
loc_824E9DE8:
	// li r11,0
	r11.s64 = 0;
loc_824E9DEC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3644
	ctx.r7.s64 = ctx.r10.s64 + 3644;
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

__attribute__((alias("__imp__sub_824E9E1C"))) PPC_WEAK_FUNC(sub_824E9E1C);
PPC_FUNC_IMPL(__imp__sub_824E9E1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E9E20"))) PPC_WEAK_FUNC(sub_824E9E20);
PPC_FUNC_IMPL(__imp__sub_824E9E20) {
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
	// bne cr6,0x824e9e68
	if (!cr6.eq) goto loc_824E9E68;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e9e60
	if (cr0.eq) goto loc_824E9E60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E9E60:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e9e6c
	goto loc_824E9E6C;
loc_824E9E68:
	// li r11,0
	r11.s64 = 0;
loc_824E9E6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3652
	ctx.r7.s64 = ctx.r10.s64 + 3652;
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

__attribute__((alias("__imp__sub_824E9E9C"))) PPC_WEAK_FUNC(sub_824E9E9C);
PPC_FUNC_IMPL(__imp__sub_824E9E9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E9EA0"))) PPC_WEAK_FUNC(sub_824E9EA0);
PPC_FUNC_IMPL(__imp__sub_824E9EA0) {
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
	// bne cr6,0x824e9ee8
	if (!cr6.eq) goto loc_824E9EE8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e9ee0
	if (cr0.eq) goto loc_824E9EE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E9EE0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e9eec
	goto loc_824E9EEC;
loc_824E9EE8:
	// li r11,0
	r11.s64 = 0;
loc_824E9EEC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3660
	ctx.r7.s64 = ctx.r10.s64 + 3660;
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

__attribute__((alias("__imp__sub_824E9F1C"))) PPC_WEAK_FUNC(sub_824E9F1C);
PPC_FUNC_IMPL(__imp__sub_824E9F1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E9F20"))) PPC_WEAK_FUNC(sub_824E9F20);
PPC_FUNC_IMPL(__imp__sub_824E9F20) {
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
	// bne cr6,0x824e9f68
	if (!cr6.eq) goto loc_824E9F68;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e9f60
	if (cr0.eq) goto loc_824E9F60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E9F60:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e9f6c
	goto loc_824E9F6C;
loc_824E9F68:
	// li r11,0
	r11.s64 = 0;
loc_824E9F6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3668
	ctx.r7.s64 = ctx.r10.s64 + 3668;
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

__attribute__((alias("__imp__sub_824E9F9C"))) PPC_WEAK_FUNC(sub_824E9F9C);
PPC_FUNC_IMPL(__imp__sub_824E9F9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E9FA0"))) PPC_WEAK_FUNC(sub_824E9FA0);
PPC_FUNC_IMPL(__imp__sub_824E9FA0) {
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
	// bne cr6,0x824e9fe8
	if (!cr6.eq) goto loc_824E9FE8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e9fe0
	if (cr0.eq) goto loc_824E9FE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E9FE0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e9fec
	goto loc_824E9FEC;
loc_824E9FE8:
	// li r11,0
	r11.s64 = 0;
loc_824E9FEC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3676
	ctx.r7.s64 = ctx.r10.s64 + 3676;
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

__attribute__((alias("__imp__sub_824EA01C"))) PPC_WEAK_FUNC(sub_824EA01C);
PPC_FUNC_IMPL(__imp__sub_824EA01C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824EA020"))) PPC_WEAK_FUNC(sub_824EA020);
PPC_FUNC_IMPL(__imp__sub_824EA020) {
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
	// bne cr6,0x824ea068
	if (!cr6.eq) goto loc_824EA068;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824ea060
	if (cr0.eq) goto loc_824EA060;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824EA060:
	// li r11,1
	r11.s64 = 1;
	// b 0x824ea06c
	goto loc_824EA06C;
loc_824EA068:
	// li r11,0
	r11.s64 = 0;
loc_824EA06C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3684
	ctx.r7.s64 = ctx.r10.s64 + 3684;
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

__attribute__((alias("__imp__sub_824EA09C"))) PPC_WEAK_FUNC(sub_824EA09C);
PPC_FUNC_IMPL(__imp__sub_824EA09C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824EA0A0"))) PPC_WEAK_FUNC(sub_824EA0A0);
PPC_FUNC_IMPL(__imp__sub_824EA0A0) {
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
	// bne cr6,0x824ea0e8
	if (!cr6.eq) goto loc_824EA0E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824ea0e0
	if (cr0.eq) goto loc_824EA0E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824EA0E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824ea0ec
	goto loc_824EA0EC;
loc_824EA0E8:
	// li r11,0
	r11.s64 = 0;
loc_824EA0EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3692
	ctx.r7.s64 = ctx.r10.s64 + 3692;
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

__attribute__((alias("__imp__sub_824EA11C"))) PPC_WEAK_FUNC(sub_824EA11C);
PPC_FUNC_IMPL(__imp__sub_824EA11C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824EA120"))) PPC_WEAK_FUNC(sub_824EA120);
PPC_FUNC_IMPL(__imp__sub_824EA120) {
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
	// bne cr6,0x824ea168
	if (!cr6.eq) goto loc_824EA168;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824ea160
	if (cr0.eq) goto loc_824EA160;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824EA160:
	// li r11,1
	r11.s64 = 1;
	// b 0x824ea16c
	goto loc_824EA16C;
loc_824EA168:
	// li r11,0
	r11.s64 = 0;
loc_824EA16C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3700
	ctx.r7.s64 = ctx.r10.s64 + 3700;
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

__attribute__((alias("__imp__sub_824EA19C"))) PPC_WEAK_FUNC(sub_824EA19C);
PPC_FUNC_IMPL(__imp__sub_824EA19C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824EA1A0"))) PPC_WEAK_FUNC(sub_824EA1A0);
PPC_FUNC_IMPL(__imp__sub_824EA1A0) {
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
	// bne cr6,0x824ea1e8
	if (!cr6.eq) goto loc_824EA1E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824ea1e0
	if (cr0.eq) goto loc_824EA1E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824EA1E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824ea1ec
	goto loc_824EA1EC;
loc_824EA1E8:
	// li r11,0
	r11.s64 = 0;
loc_824EA1EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3708
	ctx.r7.s64 = ctx.r10.s64 + 3708;
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

__attribute__((alias("__imp__sub_824EA21C"))) PPC_WEAK_FUNC(sub_824EA21C);
PPC_FUNC_IMPL(__imp__sub_824EA21C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824EA220"))) PPC_WEAK_FUNC(sub_824EA220);
PPC_FUNC_IMPL(__imp__sub_824EA220) {
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
	// bne cr6,0x824ea268
	if (!cr6.eq) goto loc_824EA268;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824ea260
	if (cr0.eq) goto loc_824EA260;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824EA260:
	// li r11,1
	r11.s64 = 1;
	// b 0x824ea26c
	goto loc_824EA26C;
loc_824EA268:
	// li r11,0
	r11.s64 = 0;
loc_824EA26C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3716
	ctx.r7.s64 = ctx.r10.s64 + 3716;
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

__attribute__((alias("__imp__sub_824EA29C"))) PPC_WEAK_FUNC(sub_824EA29C);
PPC_FUNC_IMPL(__imp__sub_824EA29C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824EA2A0"))) PPC_WEAK_FUNC(sub_824EA2A0);
PPC_FUNC_IMPL(__imp__sub_824EA2A0) {
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
	// bne cr6,0x824ea2e8
	if (!cr6.eq) goto loc_824EA2E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824ea2e0
	if (cr0.eq) goto loc_824EA2E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824EA2E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824ea2ec
	goto loc_824EA2EC;
loc_824EA2E8:
	// li r11,0
	r11.s64 = 0;
loc_824EA2EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3724
	ctx.r7.s64 = ctx.r10.s64 + 3724;
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

__attribute__((alias("__imp__sub_824EA31C"))) PPC_WEAK_FUNC(sub_824EA31C);
PPC_FUNC_IMPL(__imp__sub_824EA31C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824EA320"))) PPC_WEAK_FUNC(sub_824EA320);
PPC_FUNC_IMPL(__imp__sub_824EA320) {
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
	// bne cr6,0x824ea368
	if (!cr6.eq) goto loc_824EA368;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824ea360
	if (cr0.eq) goto loc_824EA360;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824EA360:
	// li r11,1
	r11.s64 = 1;
	// b 0x824ea36c
	goto loc_824EA36C;
loc_824EA368:
	// li r11,0
	r11.s64 = 0;
loc_824EA36C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3732
	ctx.r7.s64 = ctx.r10.s64 + 3732;
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

__attribute__((alias("__imp__sub_824EA39C"))) PPC_WEAK_FUNC(sub_824EA39C);
PPC_FUNC_IMPL(__imp__sub_824EA39C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824EA3A0"))) PPC_WEAK_FUNC(sub_824EA3A0);
PPC_FUNC_IMPL(__imp__sub_824EA3A0) {
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
	// bne cr6,0x824ea3e8
	if (!cr6.eq) goto loc_824EA3E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824ea3e0
	if (cr0.eq) goto loc_824EA3E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824EA3E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824ea3ec
	goto loc_824EA3EC;
loc_824EA3E8:
	// li r11,0
	r11.s64 = 0;
loc_824EA3EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3740
	ctx.r7.s64 = ctx.r10.s64 + 3740;
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

__attribute__((alias("__imp__sub_824EA41C"))) PPC_WEAK_FUNC(sub_824EA41C);
PPC_FUNC_IMPL(__imp__sub_824EA41C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824EA420"))) PPC_WEAK_FUNC(sub_824EA420);
PPC_FUNC_IMPL(__imp__sub_824EA420) {
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
	// bne cr6,0x824ea468
	if (!cr6.eq) goto loc_824EA468;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824ea460
	if (cr0.eq) goto loc_824EA460;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824EA460:
	// li r11,1
	r11.s64 = 1;
	// b 0x824ea46c
	goto loc_824EA46C;
loc_824EA468:
	// li r11,0
	r11.s64 = 0;
loc_824EA46C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3748
	ctx.r7.s64 = ctx.r10.s64 + 3748;
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

__attribute__((alias("__imp__sub_824EA49C"))) PPC_WEAK_FUNC(sub_824EA49C);
PPC_FUNC_IMPL(__imp__sub_824EA49C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824EA4A0"))) PPC_WEAK_FUNC(sub_824EA4A0);
PPC_FUNC_IMPL(__imp__sub_824EA4A0) {
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
	// bne cr6,0x824ea4e8
	if (!cr6.eq) goto loc_824EA4E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824ea4e0
	if (cr0.eq) goto loc_824EA4E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824EA4E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824ea4ec
	goto loc_824EA4EC;
loc_824EA4E8:
	// li r11,0
	r11.s64 = 0;
loc_824EA4EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3756
	ctx.r7.s64 = ctx.r10.s64 + 3756;
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

__attribute__((alias("__imp__sub_824EA51C"))) PPC_WEAK_FUNC(sub_824EA51C);
PPC_FUNC_IMPL(__imp__sub_824EA51C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824EA520"))) PPC_WEAK_FUNC(sub_824EA520);
PPC_FUNC_IMPL(__imp__sub_824EA520) {
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
	// bne cr6,0x824ea568
	if (!cr6.eq) goto loc_824EA568;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824ea560
	if (cr0.eq) goto loc_824EA560;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824EA560:
	// li r11,1
	r11.s64 = 1;
	// b 0x824ea56c
	goto loc_824EA56C;
loc_824EA568:
	// li r11,0
	r11.s64 = 0;
loc_824EA56C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3764
	ctx.r7.s64 = ctx.r10.s64 + 3764;
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

__attribute__((alias("__imp__sub_824EA59C"))) PPC_WEAK_FUNC(sub_824EA59C);
PPC_FUNC_IMPL(__imp__sub_824EA59C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824EA5A0"))) PPC_WEAK_FUNC(sub_824EA5A0);
PPC_FUNC_IMPL(__imp__sub_824EA5A0) {
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
	// bne cr6,0x824ea5e8
	if (!cr6.eq) goto loc_824EA5E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824ea5e0
	if (cr0.eq) goto loc_824EA5E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824EA5E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824ea5ec
	goto loc_824EA5EC;
loc_824EA5E8:
	// li r11,0
	r11.s64 = 0;
loc_824EA5EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3772
	ctx.r7.s64 = ctx.r10.s64 + 3772;
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

__attribute__((alias("__imp__sub_824EA61C"))) PPC_WEAK_FUNC(sub_824EA61C);
PPC_FUNC_IMPL(__imp__sub_824EA61C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824EA620"))) PPC_WEAK_FUNC(sub_824EA620);
PPC_FUNC_IMPL(__imp__sub_824EA620) {
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
	// bne cr6,0x824ea668
	if (!cr6.eq) goto loc_824EA668;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824ea660
	if (cr0.eq) goto loc_824EA660;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824EA660:
	// li r11,1
	r11.s64 = 1;
	// b 0x824ea66c
	goto loc_824EA66C;
loc_824EA668:
	// li r11,0
	r11.s64 = 0;
loc_824EA66C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3780
	ctx.r7.s64 = ctx.r10.s64 + 3780;
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

__attribute__((alias("__imp__sub_824EA69C"))) PPC_WEAK_FUNC(sub_824EA69C);
PPC_FUNC_IMPL(__imp__sub_824EA69C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824EA6A0"))) PPC_WEAK_FUNC(sub_824EA6A0);
PPC_FUNC_IMPL(__imp__sub_824EA6A0) {
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
	// bne cr6,0x824ea6e8
	if (!cr6.eq) goto loc_824EA6E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824ea6e0
	if (cr0.eq) goto loc_824EA6E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824EA6E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824ea6ec
	goto loc_824EA6EC;
loc_824EA6E8:
	// li r11,0
	r11.s64 = 0;
loc_824EA6EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3788
	ctx.r7.s64 = ctx.r10.s64 + 3788;
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

__attribute__((alias("__imp__sub_824EA71C"))) PPC_WEAK_FUNC(sub_824EA71C);
PPC_FUNC_IMPL(__imp__sub_824EA71C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824EA720"))) PPC_WEAK_FUNC(sub_824EA720);
PPC_FUNC_IMPL(__imp__sub_824EA720) {
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
	// bne cr6,0x824ea768
	if (!cr6.eq) goto loc_824EA768;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824ea760
	if (cr0.eq) goto loc_824EA760;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824EA760:
	// li r11,1
	r11.s64 = 1;
	// b 0x824ea76c
	goto loc_824EA76C;
loc_824EA768:
	// li r11,0
	r11.s64 = 0;
loc_824EA76C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3796
	ctx.r7.s64 = ctx.r10.s64 + 3796;
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

__attribute__((alias("__imp__sub_824EA79C"))) PPC_WEAK_FUNC(sub_824EA79C);
PPC_FUNC_IMPL(__imp__sub_824EA79C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824EA7A0"))) PPC_WEAK_FUNC(sub_824EA7A0);
PPC_FUNC_IMPL(__imp__sub_824EA7A0) {
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
	// bne cr6,0x824ea7e8
	if (!cr6.eq) goto loc_824EA7E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824ea7e0
	if (cr0.eq) goto loc_824EA7E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824EA7E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824ea7ec
	goto loc_824EA7EC;
loc_824EA7E8:
	// li r11,0
	r11.s64 = 0;
loc_824EA7EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3804
	ctx.r7.s64 = ctx.r10.s64 + 3804;
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

__attribute__((alias("__imp__sub_824EA81C"))) PPC_WEAK_FUNC(sub_824EA81C);
PPC_FUNC_IMPL(__imp__sub_824EA81C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824EA820"))) PPC_WEAK_FUNC(sub_824EA820);
PPC_FUNC_IMPL(__imp__sub_824EA820) {
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
	// bne cr6,0x824ea868
	if (!cr6.eq) goto loc_824EA868;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824ea860
	if (cr0.eq) goto loc_824EA860;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824EA860:
	// li r11,1
	r11.s64 = 1;
	// b 0x824ea86c
	goto loc_824EA86C;
loc_824EA868:
	// li r11,0
	r11.s64 = 0;
loc_824EA86C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3812
	ctx.r7.s64 = ctx.r10.s64 + 3812;
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

__attribute__((alias("__imp__sub_824EA89C"))) PPC_WEAK_FUNC(sub_824EA89C);
PPC_FUNC_IMPL(__imp__sub_824EA89C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824EA8A0"))) PPC_WEAK_FUNC(sub_824EA8A0);
PPC_FUNC_IMPL(__imp__sub_824EA8A0) {
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
	// bne cr6,0x824ea8e8
	if (!cr6.eq) goto loc_824EA8E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824ea8e0
	if (cr0.eq) goto loc_824EA8E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824EA8E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824ea8ec
	goto loc_824EA8EC;
loc_824EA8E8:
	// li r11,0
	r11.s64 = 0;
loc_824EA8EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3820
	ctx.r7.s64 = ctx.r10.s64 + 3820;
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

__attribute__((alias("__imp__sub_824EA91C"))) PPC_WEAK_FUNC(sub_824EA91C);
PPC_FUNC_IMPL(__imp__sub_824EA91C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824EA920"))) PPC_WEAK_FUNC(sub_824EA920);
PPC_FUNC_IMPL(__imp__sub_824EA920) {
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
	// bne cr6,0x824ea968
	if (!cr6.eq) goto loc_824EA968;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824ea960
	if (cr0.eq) goto loc_824EA960;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824EA960:
	// li r11,1
	r11.s64 = 1;
	// b 0x824ea96c
	goto loc_824EA96C;
loc_824EA968:
	// li r11,0
	r11.s64 = 0;
loc_824EA96C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3828
	ctx.r7.s64 = ctx.r10.s64 + 3828;
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

__attribute__((alias("__imp__sub_824EA99C"))) PPC_WEAK_FUNC(sub_824EA99C);
PPC_FUNC_IMPL(__imp__sub_824EA99C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824EA9A0"))) PPC_WEAK_FUNC(sub_824EA9A0);
PPC_FUNC_IMPL(__imp__sub_824EA9A0) {
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
	// bne cr6,0x824ea9e8
	if (!cr6.eq) goto loc_824EA9E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824ea9e0
	if (cr0.eq) goto loc_824EA9E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824EA9E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824ea9ec
	goto loc_824EA9EC;
loc_824EA9E8:
	// li r11,0
	r11.s64 = 0;
loc_824EA9EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3836
	ctx.r7.s64 = ctx.r10.s64 + 3836;
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

__attribute__((alias("__imp__sub_824EAA1C"))) PPC_WEAK_FUNC(sub_824EAA1C);
PPC_FUNC_IMPL(__imp__sub_824EAA1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824EAA20"))) PPC_WEAK_FUNC(sub_824EAA20);
PPC_FUNC_IMPL(__imp__sub_824EAA20) {
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
	// bne cr6,0x824eaa68
	if (!cr6.eq) goto loc_824EAA68;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824eaa60
	if (cr0.eq) goto loc_824EAA60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824EAA60:
	// li r11,1
	r11.s64 = 1;
	// b 0x824eaa6c
	goto loc_824EAA6C;
loc_824EAA68:
	// li r11,0
	r11.s64 = 0;
loc_824EAA6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3844
	ctx.r7.s64 = ctx.r10.s64 + 3844;
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

__attribute__((alias("__imp__sub_824EAA9C"))) PPC_WEAK_FUNC(sub_824EAA9C);
PPC_FUNC_IMPL(__imp__sub_824EAA9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824EAAA0"))) PPC_WEAK_FUNC(sub_824EAAA0);
PPC_FUNC_IMPL(__imp__sub_824EAAA0) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// li r11,-1
	r11.s64 = -1;
	// li r30,1
	r30.s64 = 1;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r31.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r31.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, r31.u32);
	// stb r30,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, r30.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r30.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x824e54c8
	sub_824E54C8(ctx, base);
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
	// beq cr6,0x824eab48
	if (cr6.eq) goto loc_824EAB48;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824eab44
	if (cr6.eq) goto loc_824EAB44;
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
loc_824EAB44:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_824EAB48:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x824e1510
	sub_824E1510(ctx, base);
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
	// beq cr6,0x824eab9c
	if (cr6.eq) goto loc_824EAB9C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824eab98
	if (cr6.eq) goto loc_824EAB98;
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
loc_824EAB98:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_824EAB9C:
	// lis r11,-32169
	r11.s64 = -2108227584;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,-17528
	ctx.r10.s64 = r11.s64 + -17528;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
}

__attribute__((alias("__imp__sub_824EABC8"))) PPC_WEAK_FUNC(sub_824EABC8);
PPC_FUNC_IMPL(__imp__sub_824EABC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824EABCC"))) PPC_WEAK_FUNC(sub_824EABCC);
PPC_FUNC_IMPL(__imp__sub_824EABCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824EABD0"))) PPC_WEAK_FUNC(sub_824EABD0);
PPC_FUNC_IMPL(__imp__sub_824EABD0) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// li r11,-1
	r11.s64 = -1;
	// li r30,1
	r30.s64 = 1;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r31.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r31.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, r31.u32);
	// stb r30,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, r30.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r30.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x824e5548
	sub_824E5548(ctx, base);
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
	// beq cr6,0x824eac78
	if (cr6.eq) goto loc_824EAC78;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824eac74
	if (cr6.eq) goto loc_824EAC74;
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
loc_824EAC74:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_824EAC78:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x824e1d10
	sub_824E1D10(ctx, base);
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
	// beq cr6,0x824eaccc
	if (cr6.eq) goto loc_824EACCC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824eacc8
	if (cr6.eq) goto loc_824EACC8;
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
loc_824EACC8:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_824EACCC:
	// lis r11,-32169
	r11.s64 = -2108227584;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,-17528
	ctx.r10.s64 = r11.s64 + -17528;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
}

__attribute__((alias("__imp__sub_824EACF8"))) PPC_WEAK_FUNC(sub_824EACF8);
PPC_FUNC_IMPL(__imp__sub_824EACF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824EACFC"))) PPC_WEAK_FUNC(sub_824EACFC);
PPC_FUNC_IMPL(__imp__sub_824EACFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824EAD00"))) PPC_WEAK_FUNC(sub_824EAD00);
PPC_FUNC_IMPL(__imp__sub_824EAD00) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// li r11,-1
	r11.s64 = -1;
	// li r30,1
	r30.s64 = 1;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r31.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r31.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, r31.u32);
	// stb r30,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, r30.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r30.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x824e55c8
	sub_824E55C8(ctx, base);
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
	// beq cr6,0x824eada8
	if (cr6.eq) goto loc_824EADA8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824eada4
	if (cr6.eq) goto loc_824EADA4;
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
loc_824EADA4:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_824EADA8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x824e1d90
	sub_824E1D90(ctx, base);
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
	// beq cr6,0x824eadfc
	if (cr6.eq) goto loc_824EADFC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824eadf8
	if (cr6.eq) goto loc_824EADF8;
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
loc_824EADF8:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_824EADFC:
	// lis r11,-32169
	r11.s64 = -2108227584;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,-17528
	ctx.r10.s64 = r11.s64 + -17528;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
}

__attribute__((alias("__imp__sub_824EAE28"))) PPC_WEAK_FUNC(sub_824EAE28);
PPC_FUNC_IMPL(__imp__sub_824EAE28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824EAE2C"))) PPC_WEAK_FUNC(sub_824EAE2C);
PPC_FUNC_IMPL(__imp__sub_824EAE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824EAE30"))) PPC_WEAK_FUNC(sub_824EAE30);
PPC_FUNC_IMPL(__imp__sub_824EAE30) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// li r11,-1
	r11.s64 = -1;
	// li r30,1
	r30.s64 = 1;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r31.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r31.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, r31.u32);
	// stb r30,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, r30.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r30.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x824e56c8
	sub_824E56C8(ctx, base);
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
	// beq cr6,0x824eaed8
	if (cr6.eq) goto loc_824EAED8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824eaed4
	if (cr6.eq) goto loc_824EAED4;
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
loc_824EAED4:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_824EAED8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x824e1e90
	sub_824E1E90(ctx, base);
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
	// beq cr6,0x824eaf2c
	if (cr6.eq) goto loc_824EAF2C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824eaf28
	if (cr6.eq) goto loc_824EAF28;
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
loc_824EAF28:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_824EAF2C:
	// lis r11,-32169
	r11.s64 = -2108227584;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,-17528
	ctx.r10.s64 = r11.s64 + -17528;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
}

__attribute__((alias("__imp__sub_824EAF58"))) PPC_WEAK_FUNC(sub_824EAF58);
PPC_FUNC_IMPL(__imp__sub_824EAF58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824EAF5C"))) PPC_WEAK_FUNC(sub_824EAF5C);
PPC_FUNC_IMPL(__imp__sub_824EAF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824EAF60"))) PPC_WEAK_FUNC(sub_824EAF60);
PPC_FUNC_IMPL(__imp__sub_824EAF60) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// li r11,-1
	r11.s64 = -1;
	// li r30,1
	r30.s64 = 1;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r31.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r31.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, r31.u32);
	// stb r30,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, r30.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r30.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x824e5748
	sub_824E5748(ctx, base);
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
	// beq cr6,0x824eb008
	if (cr6.eq) goto loc_824EB008;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824eb004
	if (cr6.eq) goto loc_824EB004;
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
loc_824EB004:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_824EB008:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x824e1f10
	sub_824E1F10(ctx, base);
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
	// beq cr6,0x824eb05c
	if (cr6.eq) goto loc_824EB05C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824eb058
	if (cr6.eq) goto loc_824EB058;
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
loc_824EB058:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_824EB05C:
	// lis r11,-32169
	r11.s64 = -2108227584;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,-17528
	ctx.r10.s64 = r11.s64 + -17528;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
}

__attribute__((alias("__imp__sub_824EB088"))) PPC_WEAK_FUNC(sub_824EB088);
PPC_FUNC_IMPL(__imp__sub_824EB088) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824EB08C"))) PPC_WEAK_FUNC(sub_824EB08C);
PPC_FUNC_IMPL(__imp__sub_824EB08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824EB090"))) PPC_WEAK_FUNC(sub_824EB090);
PPC_FUNC_IMPL(__imp__sub_824EB090) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// li r11,-1
	r11.s64 = -1;
	// li r30,1
	r30.s64 = 1;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r31.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r31.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, r31.u32);
	// stb r30,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, r30.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r30.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x824e57c8
	sub_824E57C8(ctx, base);
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
	// beq cr6,0x824eb138
	if (cr6.eq) goto loc_824EB138;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824eb134
	if (cr6.eq) goto loc_824EB134;
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
loc_824EB134:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_824EB138:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x824e4510
	sub_824E4510(ctx, base);
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
	// beq cr6,0x824eb18c
	if (cr6.eq) goto loc_824EB18C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824eb188
	if (cr6.eq) goto loc_824EB188;
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
loc_824EB188:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_824EB18C:
	// lis r11,-32169
	r11.s64 = -2108227584;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,-17528
	ctx.r10.s64 = r11.s64 + -17528;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
}

__attribute__((alias("__imp__sub_824EB1B8"))) PPC_WEAK_FUNC(sub_824EB1B8);
PPC_FUNC_IMPL(__imp__sub_824EB1B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824EB1BC"))) PPC_WEAK_FUNC(sub_824EB1BC);
PPC_FUNC_IMPL(__imp__sub_824EB1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824EB1C0"))) PPC_WEAK_FUNC(sub_824EB1C0);
PPC_FUNC_IMPL(__imp__sub_824EB1C0) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// li r11,-1
	r11.s64 = -1;
	// li r30,1
	r30.s64 = 1;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r31.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r31.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, r31.u32);
	// stb r30,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, r30.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r30.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x824e5848
	sub_824E5848(ctx, base);
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
	// beq cr6,0x824eb268
	if (cr6.eq) goto loc_824EB268;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824eb264
	if (cr6.eq) goto loc_824EB264;
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
loc_824EB264:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_824EB268:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x824e4690
	sub_824E4690(ctx, base);
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
	// beq cr6,0x824eb2bc
	if (cr6.eq) goto loc_824EB2BC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824eb2b8
	if (cr6.eq) goto loc_824EB2B8;
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
loc_824EB2B8:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_824EB2BC:
	// lis r11,-32169
	r11.s64 = -2108227584;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,-17528
	ctx.r10.s64 = r11.s64 + -17528;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
}

__attribute__((alias("__imp__sub_824EB2E8"))) PPC_WEAK_FUNC(sub_824EB2E8);
PPC_FUNC_IMPL(__imp__sub_824EB2E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824EB2EC"))) PPC_WEAK_FUNC(sub_824EB2EC);
PPC_FUNC_IMPL(__imp__sub_824EB2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824EB2F0"))) PPC_WEAK_FUNC(sub_824EB2F0);
PPC_FUNC_IMPL(__imp__sub_824EB2F0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824e65e0
	sub_824E65E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824EB300"))) PPC_WEAK_FUNC(sub_824EB300);
PPC_FUNC_IMPL(__imp__sub_824EB300) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824e66d8
	sub_824E66D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824EB310"))) PPC_WEAK_FUNC(sub_824EB310);
PPC_FUNC_IMPL(__imp__sub_824EB310) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824e6800
	sub_824E6800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824EB320"))) PPC_WEAK_FUNC(sub_824EB320);
PPC_FUNC_IMPL(__imp__sub_824EB320) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824e68f8
	sub_824E68F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824EB330"))) PPC_WEAK_FUNC(sub_824EB330);
PPC_FUNC_IMPL(__imp__sub_824EB330) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824e69a8
	sub_824E69A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824EB340"))) PPC_WEAK_FUNC(sub_824EB340);
PPC_FUNC_IMPL(__imp__sub_824EB340) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824e6a58
	sub_824E6A58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824EB350"))) PPC_WEAK_FUNC(sub_824EB350);
PPC_FUNC_IMPL(__imp__sub_824EB350) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r4,r10,10028
	ctx.r4.s64 = ctx.r10.s64 + 10028;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// bl 0x822e9dd8
	sub_822E9DD8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r28,15
	r28.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// addi r4,r8,19272
	ctx.r4.s64 = ctx.r8.s64 + 19272;
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
	// blt cr6,0x824eb3d4
	if (cr6.lt) goto loc_824EB3D4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_824EB3D4:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82300080
	sub_82300080(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82300080
	sub_82300080(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
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
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_824EB420"))) PPC_WEAK_FUNC(sub_824EB420);
PPC_FUNC_IMPL(__imp__sub_824EB420) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824EB424"))) PPC_WEAK_FUNC(sub_824EB424);
PPC_FUNC_IMPL(__imp__sub_824EB424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824EB428"))) PPC_WEAK_FUNC(sub_824EB428);
PPC_FUNC_IMPL(__imp__sub_824EB428) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r4,r10,10028
	ctx.r4.s64 = ctx.r10.s64 + 10028;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// bl 0x822e9dd8
	sub_822E9DD8(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// li r28,15
	r28.s64 = 15;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// addi r4,r8,19272
	ctx.r4.s64 = ctx.r8.s64 + 19272;
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
	// blt cr6,0x824eb4ac
	if (cr6.lt) goto loc_824EB4AC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_824EB4AC:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82300080
	sub_82300080(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82300080
	sub_82300080(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82300080
	sub_82300080(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
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
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_824EB508"))) PPC_WEAK_FUNC(sub_824EB508);
PPC_FUNC_IMPL(__imp__sub_824EB508) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824EB50C"))) PPC_WEAK_FUNC(sub_824EB50C);
PPC_FUNC_IMPL(__imp__sub_824EB50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824EB510"))) PPC_WEAK_FUNC(sub_824EB510);
PPC_FUNC_IMPL(__imp__sub_824EB510) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r4,r10,10028
	ctx.r4.s64 = ctx.r10.s64 + 10028;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// bl 0x822e9dd8
	sub_822E9DD8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r28,15
	r28.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
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
	// blt cr6,0x824eb594
	if (cr6.lt) goto loc_824EB594;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_824EB594:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ed4e8
	sub_822ED4E8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
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
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_824EB5D0"))) PPC_WEAK_FUNC(sub_824EB5D0);
PPC_FUNC_IMPL(__imp__sub_824EB5D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824EB5D4"))) PPC_WEAK_FUNC(sub_824EB5D4);
PPC_FUNC_IMPL(__imp__sub_824EB5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824EB5D8"))) PPC_WEAK_FUNC(sub_824EB5D8);
PPC_FUNC_IMPL(__imp__sub_824EB5D8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r4,r10,10028
	ctx.r4.s64 = ctx.r10.s64 + 10028;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// bl 0x822e9dd8
	sub_822E9DD8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r28,15
	r28.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
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
	// blt cr6,0x824eb65c
	if (cr6.lt) goto loc_824EB65C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_824EB65C:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ed4e8
	sub_822ED4E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ed4e8
	sub_822ED4E8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
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
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_824EB6A8"))) PPC_WEAK_FUNC(sub_824EB6A8);
PPC_FUNC_IMPL(__imp__sub_824EB6A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824EB6AC"))) PPC_WEAK_FUNC(sub_824EB6AC);
PPC_FUNC_IMPL(__imp__sub_824EB6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824EB6B0"))) PPC_WEAK_FUNC(sub_824EB6B0);
PPC_FUNC_IMPL(__imp__sub_824EB6B0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r4,r10,10028
	ctx.r4.s64 = ctx.r10.s64 + 10028;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// bl 0x822e9dd8
	sub_822E9DD8(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// li r28,15
	r28.s64 = 15;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// addi r4,r8,19272
	ctx.r4.s64 = ctx.r8.s64 + 19272;
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
	// blt cr6,0x824eb734
	if (cr6.lt) goto loc_824EB734;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_824EB734:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ed4e8
	sub_822ED4E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ed4e8
	sub_822ED4E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ed4e8
	sub_822ED4E8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
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
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_824EB790"))) PPC_WEAK_FUNC(sub_824EB790);
PPC_FUNC_IMPL(__imp__sub_824EB790) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824EB794"))) PPC_WEAK_FUNC(sub_824EB794);
PPC_FUNC_IMPL(__imp__sub_824EB794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824EB798"))) PPC_WEAK_FUNC(sub_824EB798);
PPC_FUNC_IMPL(__imp__sub_824EB798) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r4,r10,10028
	ctx.r4.s64 = ctx.r10.s64 + 10028;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// bl 0x822e9dd8
	sub_822E9DD8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r28,15
	r28.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// addi r4,r8,24144
	ctx.r4.s64 = ctx.r8.s64 + 24144;
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
	// blt cr6,0x824eb81c
	if (cr6.lt) goto loc_824EB81C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_824EB81C:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82300080
	sub_82300080(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82300080
	sub_82300080(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
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
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_824EB868"))) PPC_WEAK_FUNC(sub_824EB868);
PPC_FUNC_IMPL(__imp__sub_824EB868) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824EB86C"))) PPC_WEAK_FUNC(sub_824EB86C);
PPC_FUNC_IMPL(__imp__sub_824EB86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824EB870"))) PPC_WEAK_FUNC(sub_824EB870);
PPC_FUNC_IMPL(__imp__sub_824EB870) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r4,r10,10028
	ctx.r4.s64 = ctx.r10.s64 + 10028;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// bl 0x822e9dd8
	sub_822E9DD8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r28,15
	r28.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// addi r4,r8,19272
	ctx.r4.s64 = ctx.r8.s64 + 19272;
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
	// blt cr6,0x824eb8f4
	if (cr6.lt) goto loc_824EB8F4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_824EB8F4:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82300128
	sub_82300128(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
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
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_824EB930"))) PPC_WEAK_FUNC(sub_824EB930);
PPC_FUNC_IMPL(__imp__sub_824EB930) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824EB934"))) PPC_WEAK_FUNC(sub_824EB934);
PPC_FUNC_IMPL(__imp__sub_824EB934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824EB938"))) PPC_WEAK_FUNC(sub_824EB938);
PPC_FUNC_IMPL(__imp__sub_824EB938) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r4,r10,10028
	ctx.r4.s64 = ctx.r10.s64 + 10028;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// bl 0x822e9dd8
	sub_822E9DD8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r28,15
	r28.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// addi r4,r8,24144
	ctx.r4.s64 = ctx.r8.s64 + 24144;
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
	// blt cr6,0x824eb9bc
	if (cr6.lt) goto loc_824EB9BC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_824EB9BC:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82300080
	sub_82300080(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
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
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_824EB9F8"))) PPC_WEAK_FUNC(sub_824EB9F8);
PPC_FUNC_IMPL(__imp__sub_824EB9F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824EB9FC"))) PPC_WEAK_FUNC(sub_824EB9FC);
PPC_FUNC_IMPL(__imp__sub_824EB9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824EBA00"))) PPC_WEAK_FUNC(sub_824EBA00);
PPC_FUNC_IMPL(__imp__sub_824EBA00) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r4,r10,10028
	ctx.r4.s64 = ctx.r10.s64 + 10028;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// bl 0x822e9dd8
	sub_822E9DD8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r28,15
	r28.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// addi r4,r8,19272
	ctx.r4.s64 = ctx.r8.s64 + 19272;
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
	// blt cr6,0x824eba84
	if (cr6.lt) goto loc_824EBA84;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_824EBA84:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ed4e8
	sub_822ED4E8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
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
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_824EBAC0"))) PPC_WEAK_FUNC(sub_824EBAC0);
PPC_FUNC_IMPL(__imp__sub_824EBAC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824EBAC4"))) PPC_WEAK_FUNC(sub_824EBAC4);
PPC_FUNC_IMPL(__imp__sub_824EBAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824EBAC8"))) PPC_WEAK_FUNC(sub_824EBAC8);
PPC_FUNC_IMPL(__imp__sub_824EBAC8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r4,r10,10028
	ctx.r4.s64 = ctx.r10.s64 + 10028;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// bl 0x822e9dd8
	sub_822E9DD8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r28,15
	r28.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// addi r4,r8,19272
	ctx.r4.s64 = ctx.r8.s64 + 19272;
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
	// blt cr6,0x824ebb4c
	if (cr6.lt) goto loc_824EBB4C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_824EBB4C:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ed4e8
	sub_822ED4E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0bf0
	sub_824E0BF0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
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
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_824EBB98"))) PPC_WEAK_FUNC(sub_824EBB98);
PPC_FUNC_IMPL(__imp__sub_824EBB98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824EBB9C"))) PPC_WEAK_FUNC(sub_824EBB9C);
PPC_FUNC_IMPL(__imp__sub_824EBB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824EBBA0"))) PPC_WEAK_FUNC(sub_824EBBA0);
PPC_FUNC_IMPL(__imp__sub_824EBBA0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r4,r10,10028
	ctx.r4.s64 = ctx.r10.s64 + 10028;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// bl 0x822e9dd8
	sub_822E9DD8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r28,15
	r28.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// addi r4,r8,19272
	ctx.r4.s64 = ctx.r8.s64 + 19272;
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
	// blt cr6,0x824ebc24
	if (cr6.lt) goto loc_824EBC24;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_824EBC24:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ed4e8
	sub_822ED4E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ed4e8
	sub_822ED4E8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
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
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_824EBC70"))) PPC_WEAK_FUNC(sub_824EBC70);
PPC_FUNC_IMPL(__imp__sub_824EBC70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824EBC74"))) PPC_WEAK_FUNC(sub_824EBC74);
PPC_FUNC_IMPL(__imp__sub_824EBC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824EBC78"))) PPC_WEAK_FUNC(sub_824EBC78);
PPC_FUNC_IMPL(__imp__sub_824EBC78) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r4,r10,10028
	ctx.r4.s64 = ctx.r10.s64 + 10028;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// bl 0x822e9dd8
	sub_822E9DD8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r28,15
	r28.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// addi r4,r8,19272
	ctx.r4.s64 = ctx.r8.s64 + 19272;
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
	// blt cr6,0x824ebcfc
	if (cr6.lt) goto loc_824EBCFC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_824EBCFC:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ed4e8
	sub_822ED4E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82300080
	sub_82300080(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
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
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_824EBD48"))) PPC_WEAK_FUNC(sub_824EBD48);
PPC_FUNC_IMPL(__imp__sub_824EBD48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824EBD4C"))) PPC_WEAK_FUNC(sub_824EBD4C);
PPC_FUNC_IMPL(__imp__sub_824EBD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

