#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82567754"))) PPC_WEAK_FUNC(sub_82567754);
PPC_FUNC_IMPL(__imp__sub_82567754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82567758"))) PPC_WEAK_FUNC(sub_82567758);
PPC_FUNC_IMPL(__imp__sub_82567758) {
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
	// beq cr6,0x825677ac
	if (cr6.eq) goto loc_825677AC;
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
	// bl 0x82566fe8
	sub_82566FE8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x825677b4
	if (!cr6.lt) goto loc_825677B4;
loc_825677AC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x825677d0
	goto loc_825677D0;
loc_825677B4:
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
	// bne cr6,0x825677d0
	if (!cr6.eq) goto loc_825677D0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_825677D0:
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

__attribute__((alias("__imp__sub_825677E4"))) PPC_WEAK_FUNC(sub_825677E4);
PPC_FUNC_IMPL(__imp__sub_825677E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825677E8"))) PPC_WEAK_FUNC(sub_825677E8);
PPC_FUNC_IMPL(__imp__sub_825677E8) {
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
	// bne cr6,0x82567830
	if (!cr6.eq) goto loc_82567830;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82567828
	if (cr0.eq) goto loc_82567828;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82567828:
	// li r11,1
	r11.s64 = 1;
	// b 0x82567834
	goto loc_82567834;
loc_82567830:
	// li r11,0
	r11.s64 = 0;
loc_82567834:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-22424
	ctx.r7.s64 = ctx.r10.s64 + -22424;
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

__attribute__((alias("__imp__sub_82567864"))) PPC_WEAK_FUNC(sub_82567864);
PPC_FUNC_IMPL(__imp__sub_82567864) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82567868"))) PPC_WEAK_FUNC(sub_82567868);
PPC_FUNC_IMPL(__imp__sub_82567868) {
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
	// bne cr6,0x825678b0
	if (!cr6.eq) goto loc_825678B0;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825678a8
	if (cr0.eq) goto loc_825678A8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_825678A8:
	// li r11,1
	r11.s64 = 1;
	// b 0x825678b4
	goto loc_825678B4;
loc_825678B0:
	// li r11,0
	r11.s64 = 0;
loc_825678B4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-22416
	ctx.r7.s64 = ctx.r10.s64 + -22416;
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

__attribute__((alias("__imp__sub_825678E4"))) PPC_WEAK_FUNC(sub_825678E4);
PPC_FUNC_IMPL(__imp__sub_825678E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825678E8"))) PPC_WEAK_FUNC(sub_825678E8);
PPC_FUNC_IMPL(__imp__sub_825678E8) {
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
	// bne cr6,0x82567930
	if (!cr6.eq) goto loc_82567930;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82567928
	if (cr0.eq) goto loc_82567928;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82567928:
	// li r11,1
	r11.s64 = 1;
	// b 0x82567934
	goto loc_82567934;
loc_82567930:
	// li r11,0
	r11.s64 = 0;
loc_82567934:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-22408
	ctx.r7.s64 = ctx.r10.s64 + -22408;
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

__attribute__((alias("__imp__sub_82567964"))) PPC_WEAK_FUNC(sub_82567964);
PPC_FUNC_IMPL(__imp__sub_82567964) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82567968"))) PPC_WEAK_FUNC(sub_82567968);
PPC_FUNC_IMPL(__imp__sub_82567968) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x825675f0
	sub_825675F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256797C"))) PPC_WEAK_FUNC(sub_8256797C);
PPC_FUNC_IMPL(__imp__sub_8256797C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82567980"))) PPC_WEAK_FUNC(sub_82567980);
PPC_FUNC_IMPL(__imp__sub_82567980) {
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
	// beq cr6,0x825679cc
	if (cr6.eq) goto loc_825679CC;
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
	// bl 0x82566fe8
	sub_82566FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x825679d0
	if (!cr6.lt) goto loc_825679D0;
loc_825679CC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_825679D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825679E0"))) PPC_WEAK_FUNC(sub_825679E0);
PPC_FUNC_IMPL(__imp__sub_825679E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825679E4"))) PPC_WEAK_FUNC(sub_825679E4);
PPC_FUNC_IMPL(__imp__sub_825679E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825679E8"))) PPC_WEAK_FUNC(sub_825679E8);
PPC_FUNC_IMPL(__imp__sub_825679E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_825679F4"))) PPC_WEAK_FUNC(sub_825679F4);
PPC_FUNC_IMPL(__imp__sub_825679F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x82567758
	sub_82567758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825679F8"))) PPC_WEAK_FUNC(sub_825679F8);
PPC_FUNC_IMPL(__imp__sub_825679F8) {
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
	// bne cr6,0x82567a40
	if (!cr6.eq) goto loc_82567A40;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82567a38
	if (cr0.eq) goto loc_82567A38;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82567A38:
	// li r11,1
	r11.s64 = 1;
	// b 0x82567a44
	goto loc_82567A44;
loc_82567A40:
	// li r11,0
	r11.s64 = 0;
loc_82567A44:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-22400
	ctx.r7.s64 = ctx.r10.s64 + -22400;
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

__attribute__((alias("__imp__sub_82567A74"))) PPC_WEAK_FUNC(sub_82567A74);
PPC_FUNC_IMPL(__imp__sub_82567A74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82567A78"))) PPC_WEAK_FUNC(sub_82567A78);
PPC_FUNC_IMPL(__imp__sub_82567A78) {
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
	// bne cr6,0x82567ac0
	if (!cr6.eq) goto loc_82567AC0;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82567ab8
	if (cr0.eq) goto loc_82567AB8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82567AB8:
	// li r11,1
	r11.s64 = 1;
	// b 0x82567ac4
	goto loc_82567AC4;
loc_82567AC0:
	// li r11,0
	r11.s64 = 0;
loc_82567AC4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-22392
	ctx.r7.s64 = ctx.r10.s64 + -22392;
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

__attribute__((alias("__imp__sub_82567AF4"))) PPC_WEAK_FUNC(sub_82567AF4);
PPC_FUNC_IMPL(__imp__sub_82567AF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82567AF8"))) PPC_WEAK_FUNC(sub_82567AF8);
PPC_FUNC_IMPL(__imp__sub_82567AF8) {
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
	// bne cr6,0x82567b40
	if (!cr6.eq) goto loc_82567B40;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82567b38
	if (cr0.eq) goto loc_82567B38;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82567B38:
	// li r11,1
	r11.s64 = 1;
	// b 0x82567b44
	goto loc_82567B44;
loc_82567B40:
	// li r11,0
	r11.s64 = 0;
loc_82567B44:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-22384
	ctx.r7.s64 = ctx.r10.s64 + -22384;
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

__attribute__((alias("__imp__sub_82567B74"))) PPC_WEAK_FUNC(sub_82567B74);
PPC_FUNC_IMPL(__imp__sub_82567B74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82567B78"))) PPC_WEAK_FUNC(sub_82567B78);
PPC_FUNC_IMPL(__imp__sub_82567B78) {
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
	// bl 0x825679f8
	sub_825679F8(ctx, base);
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
	// beq cr6,0x82567bf8
	if (cr6.eq) goto loc_82567BF8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82567bf4
	if (cr6.eq) goto loc_82567BF4;
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
loc_82567BF4:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82567BF8:
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
	// bl 0x825677e8
	sub_825677E8(ctx, base);
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
	// beq cr6,0x82567c4c
	if (cr6.eq) goto loc_82567C4C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82567c48
	if (cr6.eq) goto loc_82567C48;
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
loc_82567C48:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_82567C4C:
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

__attribute__((alias("__imp__sub_82567C78"))) PPC_WEAK_FUNC(sub_82567C78);
PPC_FUNC_IMPL(__imp__sub_82567C78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82567C7C"))) PPC_WEAK_FUNC(sub_82567C7C);
PPC_FUNC_IMPL(__imp__sub_82567C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82567C80"))) PPC_WEAK_FUNC(sub_82567C80);
PPC_FUNC_IMPL(__imp__sub_82567C80) {
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
	// bl 0x82567a78
	sub_82567A78(ctx, base);
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
	// beq cr6,0x82567d28
	if (cr6.eq) goto loc_82567D28;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82567d24
	if (cr6.eq) goto loc_82567D24;
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
loc_82567D24:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_82567D28:
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
	// bl 0x82567868
	sub_82567868(ctx, base);
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
	// beq cr6,0x82567d7c
	if (cr6.eq) goto loc_82567D7C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82567d78
	if (cr6.eq) goto loc_82567D78;
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
loc_82567D78:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_82567D7C:
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

__attribute__((alias("__imp__sub_82567DA8"))) PPC_WEAK_FUNC(sub_82567DA8);
PPC_FUNC_IMPL(__imp__sub_82567DA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82567DAC"))) PPC_WEAK_FUNC(sub_82567DAC);
PPC_FUNC_IMPL(__imp__sub_82567DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82567DB0"))) PPC_WEAK_FUNC(sub_82567DB0);
PPC_FUNC_IMPL(__imp__sub_82567DB0) {
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
	// bl 0x82567af8
	sub_82567AF8(ctx, base);
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
	// beq cr6,0x82567e30
	if (cr6.eq) goto loc_82567E30;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82567e2c
	if (cr6.eq) goto loc_82567E2C;
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
loc_82567E2C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_82567E30:
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
	// bl 0x825678e8
	sub_825678E8(ctx, base);
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
	// beq cr6,0x82567e84
	if (cr6.eq) goto loc_82567E84;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82567e80
	if (cr6.eq) goto loc_82567E80;
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
loc_82567E80:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_82567E84:
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

__attribute__((alias("__imp__sub_82567EB0"))) PPC_WEAK_FUNC(sub_82567EB0);
PPC_FUNC_IMPL(__imp__sub_82567EB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82567EB4"))) PPC_WEAK_FUNC(sub_82567EB4);
PPC_FUNC_IMPL(__imp__sub_82567EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82567EB8"))) PPC_WEAK_FUNC(sub_82567EB8);
PPC_FUNC_IMPL(__imp__sub_82567EB8) {
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
	// addi r28,r11,-22304
	r28.s64 = r11.s64 + -22304;
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
	// bl 0x82567578
	sub_82567578(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32170
	ctx.r7.s64 = -2108293120;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,26728
	ctx.r6.s64 = ctx.r7.s64 + 26728;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,7764
	ctx.r4.s64 = ctx.r10.s64 + 7764;
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
	// bl 0x82567b78
	sub_82567B78(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32170
	ctx.r7.s64 = -2108293120;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,25000
	ctx.r10.s64 = ctx.r7.s64 + 25000;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,-22328
	ctx.r4.s64 = ctx.r9.s64 + -22328;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82567c80
	sub_82567C80(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32170
	ctx.r6.s64 = -2108293120;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,25016
	ctx.r10.s64 = ctx.r6.s64 + 25016;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,-22344
	ctx.r4.s64 = ctx.r9.s64 + -22344;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82567c80
	sub_82567C80(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32170
	ctx.r6.s64 = -2108293120;
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// addi r4,r6,24968
	ctx.r4.s64 = ctx.r6.s64 + 24968;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r31.u8);
	// addi r4,r11,-22360
	ctx.r4.s64 = r11.s64 + -22360;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82567db0
	sub_82567DB0(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,-32170
	ctx.r8.s64 = -2108293120;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r8,25048
	ctx.r5.s64 = ctx.r8.s64 + 25048;
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
	// addi r4,r4,-22376
	ctx.r4.s64 = ctx.r4.s64 + -22376;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82567c80
	sub_82567C80(ctx, base);
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
	// bl 0x825676c8
	sub_825676C8(ctx, base);
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
	// beq cr6,0x825680f0
	if (cr6.eq) goto loc_825680F0;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_825680F0:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256810c
	if (cr6.eq) goto loc_8256810C;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x8256810c
	if (cr6.eq) goto loc_8256810C;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8256810C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82568110"))) PPC_WEAK_FUNC(sub_82568110);
PPC_FUNC_IMPL(__imp__sub_82568110) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82568114"))) PPC_WEAK_FUNC(sub_82568114);
PPC_FUNC_IMPL(__imp__sub_82568114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82568118"))) PPC_WEAK_FUNC(sub_82568118);
PPC_FUNC_IMPL(__imp__sub_82568118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lbz r11,65(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 65);
	// lbz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
}

__attribute__((alias("__imp__sub_8256812C"))) PPC_WEAK_FUNC(sub_8256812C);
PPC_FUNC_IMPL(__imp__sub_8256812C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82568130"))) PPC_WEAK_FUNC(sub_82568130);
PPC_FUNC_IMPL(__imp__sub_82568130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// std r4,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r4.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
}

__attribute__((alias("__imp__sub_8256813C"))) PPC_WEAK_FUNC(sub_8256813C);
PPC_FUNC_IMPL(__imp__sub_8256813C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82568140"))) PPC_WEAK_FUNC(sub_82568140);
PPC_FUNC_IMPL(__imp__sub_82568140) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
}

__attribute__((alias("__imp__sub_82568144"))) PPC_WEAK_FUNC(sub_82568144);
PPC_FUNC_IMPL(__imp__sub_82568144) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82568148"))) PPC_WEAK_FUNC(sub_82568148);
PPC_FUNC_IMPL(__imp__sub_82568148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// b 0x82418040
	sub_82418040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256815C"))) PPC_WEAK_FUNC(sub_8256815C);
PPC_FUNC_IMPL(__imp__sub_8256815C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82568160"))) PPC_WEAK_FUNC(sub_82568160);
PPC_FUNC_IMPL(__imp__sub_82568160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// b 0x82418040
	sub_82418040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82568174"))) PPC_WEAK_FUNC(sub_82568174);
PPC_FUNC_IMPL(__imp__sub_82568174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82568178"))) PPC_WEAK_FUNC(sub_82568178);
PPC_FUNC_IMPL(__imp__sub_82568178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8256818c
	if (cr6.lt) goto loc_8256818C;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82568190
	if (cr6.lt) goto loc_82568190;
loc_8256818C:
	// li r11,0
	r11.s64 = 0;
loc_82568190:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
}

__attribute__((alias("__imp__sub_82568194"))) PPC_WEAK_FUNC(sub_82568194);
PPC_FUNC_IMPL(__imp__sub_82568194) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82568198"))) PPC_WEAK_FUNC(sub_82568198);
PPC_FUNC_IMPL(__imp__sub_82568198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
}

__attribute__((alias("__imp__sub_825681A0"))) PPC_WEAK_FUNC(sub_825681A0);
PPC_FUNC_IMPL(__imp__sub_825681A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825681A4"))) PPC_WEAK_FUNC(sub_825681A4);
PPC_FUNC_IMPL(__imp__sub_825681A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825681A8"))) PPC_WEAK_FUNC(sub_825681A8);
PPC_FUNC_IMPL(__imp__sub_825681A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// ld r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// li r11,1
	r11.s64 = 1;
	// cmpldi cr6,r9,0
	cr6.compare<uint64_t>(ctx.r9.u64, 0, xer);
	// bne cr6,0x825681bc
	if (!cr6.eq) goto loc_825681BC;
	// li r11,0
	r11.s64 = 0;
loc_825681BC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825681f4
	if (cr6.eq) goto loc_825681F4;
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// li r11,1
	r11.s64 = 1;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// bne cr6,0x825681dc
	if (!cr6.eq) goto loc_825681DC;
	// li r11,0
	r11.s64 = 0;
loc_825681DC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825681f4
	if (cr6.eq) goto loc_825681F4;
	// cmpld cr6,r9,r10
	cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x825681f8
	if (!cr6.eq) goto loc_825681F8;
loc_825681F4:
	// li r11,0
	r11.s64 = 0;
loc_825681F8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82568200"))) PPC_WEAK_FUNC(sub_82568200);
PPC_FUNC_IMPL(__imp__sub_82568200) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82568204"))) PPC_WEAK_FUNC(sub_82568204);
PPC_FUNC_IMPL(__imp__sub_82568204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82568208"))) PPC_WEAK_FUNC(sub_82568208);
PPC_FUNC_IMPL(__imp__sub_82568208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lbz r11,66(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 66);
	// stb r4,66(r3)
	PPC_STORE_U8(ctx.r3.u32 + 66, ctx.r4.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82568238
	if (cr6.eq) goto loc_82568238;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r3,21636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82568238:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,21636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
}

__attribute__((alias("__imp__sub_8256825C"))) PPC_WEAK_FUNC(sub_8256825C);
PPC_FUNC_IMPL(__imp__sub_8256825C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82568260"))) PPC_WEAK_FUNC(sub_82568260);
PPC_FUNC_IMPL(__imp__sub_82568260) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82568264"))) PPC_WEAK_FUNC(sub_82568264);
PPC_FUNC_IMPL(__imp__sub_82568264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82568268"))) PPC_WEAK_FUNC(sub_82568268);
PPC_FUNC_IMPL(__imp__sub_82568268) {
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
	// lwz r31,32(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82568290
	if (cr6.lt) goto loc_82568290;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82568294
	if (cr6.lt) goto loc_82568294;
loc_82568290:
	// li r11,0
	r11.s64 = 0;
loc_82568294:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825682c4
	if (cr6.eq) goto loc_825682C4;
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x825682b4
	if (!cr6.eq) goto loc_825682B4;
	// li r11,0
	r11.s64 = 0;
loc_825682B4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x825682c8
	if (!cr6.eq) goto loc_825682C8;
loc_825682C4:
	// li r11,0
	r11.s64 = 0;
loc_825682C8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825682f8
	if (cr6.eq) goto loc_825682F8;
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
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x825682fc
	if (cr6.eq) goto loc_825682FC;
loc_825682F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825682FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256830C"))) PPC_WEAK_FUNC(sub_8256830C);
PPC_FUNC_IMPL(__imp__sub_8256830C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82568310"))) PPC_WEAK_FUNC(sub_82568310);
PPC_FUNC_IMPL(__imp__sub_82568310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r11,0
	r11.s64 = 0;
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8256832c
	if (cr6.lt) goto loc_8256832C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8256832C:
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// stb r11,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, r11.u8);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, r11.u8);
	// stb r11,66(r3)
	PPC_STORE_U8(ctx.r3.u32 + 66, r11.u8);
}

__attribute__((alias("__imp__sub_82568344"))) PPC_WEAK_FUNC(sub_82568344);
PPC_FUNC_IMPL(__imp__sub_82568344) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82568348"))) PPC_WEAK_FUNC(sub_82568348);
PPC_FUNC_IMPL(__imp__sub_82568348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-22284
	ctx.r9.s64 = ctx.r10.s64 + -22284;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,15
	ctx.r7.s64 = 15;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// stw r7,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, r11.u8);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, r11.u8);
	// stb r11,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, r11.u8);
	// stb r11,66(r3)
	PPC_STORE_U8(ctx.r3.u32 + 66, r11.u8);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, r11.u8);
	// stb r11,77(r3)
	PPC_STORE_U8(ctx.r3.u32 + 77, r11.u8);
	// stb r11,78(r3)
	PPC_STORE_U8(ctx.r3.u32 + 78, r11.u8);
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// blt cr6,0x825683b8
	if (cr6.lt) goto loc_825683B8;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_825683B8:
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// stb r11,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, r11.u8);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, r11.u8);
	// stb r11,66(r3)
	PPC_STORE_U8(ctx.r3.u32 + 66, r11.u8);
}

__attribute__((alias("__imp__sub_825683D0"))) PPC_WEAK_FUNC(sub_825683D0);
PPC_FUNC_IMPL(__imp__sub_825683D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825683D4"))) PPC_WEAK_FUNC(sub_825683D4);
PPC_FUNC_IMPL(__imp__sub_825683D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825683D8"))) PPC_WEAK_FUNC(sub_825683D8);
PPC_FUNC_IMPL(__imp__sub_825683D8) {
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
	// addi r31,r3,36
	r31.s64 = ctx.r3.s64 + 36;
	// addi r10,r11,-22284
	ctx.r10.s64 = r11.s64 + -22284;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8256840c
	if (cr6.lt) goto loc_8256840C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8256840C:
	// li r11,0
	r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82568430"))) PPC_WEAK_FUNC(sub_82568430);
PPC_FUNC_IMPL(__imp__sub_82568430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82568434"))) PPC_WEAK_FUNC(sub_82568434);
PPC_FUNC_IMPL(__imp__sub_82568434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82568438"))) PPC_WEAK_FUNC(sub_82568438);
PPC_FUNC_IMPL(__imp__sub_82568438) {
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
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stb r4,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r4.u8);
	// stb r4,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r4.u8);
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r11,20316(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20316);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x82568488
	if (cr6.eq) goto loc_82568488;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256848c
	if (!cr6.eq) goto loc_8256848C;
loc_82568488:
	// li r11,0
	r11.s64 = 0;
loc_8256848C:
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
	// beq cr6,0x825684d8
	if (cr6.eq) goto loc_825684D8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825684d8
	if (!cr6.eq) goto loc_825684D8;
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
loc_825684D8:
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

__attribute__((alias("__imp__sub_825684EC"))) PPC_WEAK_FUNC(sub_825684EC);
PPC_FUNC_IMPL(__imp__sub_825684EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825684F0"))) PPC_WEAK_FUNC(sub_825684F0);
PPC_FUNC_IMPL(__imp__sub_825684F0) {
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
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stb r4,77(r3)
	PPC_STORE_U8(ctx.r3.u32 + 77, ctx.r4.u8);
	// stb r4,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r4.u8);
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r11,20312(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20312);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x82568540
	if (cr6.eq) goto loc_82568540;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82568544
	if (!cr6.eq) goto loc_82568544;
loc_82568540:
	// li r11,0
	r11.s64 = 0;
loc_82568544:
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
	// beq cr6,0x82568590
	if (cr6.eq) goto loc_82568590;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82568590
	if (!cr6.eq) goto loc_82568590;
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
loc_82568590:
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

__attribute__((alias("__imp__sub_825685A4"))) PPC_WEAK_FUNC(sub_825685A4);
PPC_FUNC_IMPL(__imp__sub_825685A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825685A8"))) PPC_WEAK_FUNC(sub_825685A8);
PPC_FUNC_IMPL(__imp__sub_825685A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stw r4,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// ble cr6,0x825685d0
	if (!cr6.gt) goto loc_825685D0;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82568438
	sub_82568438(ctx, base);
	return;
loc_825685D0:
	// li r4,0
	ctx.r4.s64 = 0;
}

__attribute__((alias("__imp__sub_825685D4"))) PPC_WEAK_FUNC(sub_825685D4);
PPC_FUNC_IMPL(__imp__sub_825685D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x82568438
	sub_82568438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825685D8"))) PPC_WEAK_FUNC(sub_825685D8);
PPC_FUNC_IMPL(__imp__sub_825685D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825685DC"))) PPC_WEAK_FUNC(sub_825685DC);
PPC_FUNC_IMPL(__imp__sub_825685DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825685E0"))) PPC_WEAK_FUNC(sub_825685E0);
PPC_FUNC_IMPL(__imp__sub_825685E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stw r4,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r4.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// ble cr6,0x82568608
	if (!cr6.gt) goto loc_82568608;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x825684f0
	sub_825684F0(ctx, base);
	return;
loc_82568608:
	// li r4,0
	ctx.r4.s64 = 0;
}

__attribute__((alias("__imp__sub_8256860C"))) PPC_WEAK_FUNC(sub_8256860C);
PPC_FUNC_IMPL(__imp__sub_8256860C) {
	PPC_FUNC_PROLOGUE();
	// b 0x825684f0
	sub_825684F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82568610"))) PPC_WEAK_FUNC(sub_82568610);
PPC_FUNC_IMPL(__imp__sub_82568610) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82568614"))) PPC_WEAK_FUNC(sub_82568614);
PPC_FUNC_IMPL(__imp__sub_82568614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82568618"))) PPC_WEAK_FUNC(sub_82568618);
PPC_FUNC_IMPL(__imp__sub_82568618) {
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
	// lbz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stb r10,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r10.u8);
	// beq cr6,0x825686bc
	if (cr6.eq) goto loc_825686BC;
	// li r11,1
	r11.s64 = 1;
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r30,-31934
	r30.s64 = -2092826624;
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, r11.u8);
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// ld r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// std r3,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r3.u64);
	// std r8,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r8.u64);
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,96(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 96);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82568694:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82568694
	if (!cr6.eq) goto loc_82568694;
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
	// b 0x825686ec
	goto loc_825686EC;
loc_825686BC:
	// li r10,0
	ctx.r10.s64 = 0;
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// addi r11,r31,36
	r11.s64 = r31.s64 + 36;
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// stb r10,64(r31)
	PPC_STORE_U8(r31.u32 + 64, ctx.r10.u8);
	// std r9,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r9.u64);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x825686e8
	if (cr6.lt) goto loc_825686E8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_825686E8:
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
loc_825686EC:
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

__attribute__((alias("__imp__sub_82568700"))) PPC_WEAK_FUNC(sub_82568700);
PPC_FUNC_IMPL(__imp__sub_82568700) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82568704"))) PPC_WEAK_FUNC(sub_82568704);
PPC_FUNC_IMPL(__imp__sub_82568704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82568708"))) PPC_WEAK_FUNC(sub_82568708);
PPC_FUNC_IMPL(__imp__sub_82568708) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r10,r11,-22284
	ctx.r10.s64 = r11.s64 + -22284;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r31,r3,36
	r31.s64 = ctx.r3.s64 + 36;
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82568740
	if (cr6.lt) goto loc_82568740;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82568740:
	// li r11,0
	r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// clrlwi r9,r29,31
	ctx.r9.u64 = r29.u32 & 0x1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8256876c
	if (cr6.eq) goto loc_8256876C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8256876C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82568770"))) PPC_WEAK_FUNC(sub_82568770);
PPC_FUNC_IMPL(__imp__sub_82568770) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82568774"))) PPC_WEAK_FUNC(sub_82568774);
PPC_FUNC_IMPL(__imp__sub_82568774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82568778"))) PPC_WEAK_FUNC(sub_82568778);
PPC_FUNC_IMPL(__imp__sub_82568778) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256877C"))) PPC_WEAK_FUNC(sub_8256877C);
PPC_FUNC_IMPL(__imp__sub_8256877C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82568780"))) PPC_WEAK_FUNC(sub_82568780);
PPC_FUNC_IMPL(__imp__sub_82568780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,178(r3)
	PPC_STORE_U8(ctx.r3.u32 + 178, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256878C"))) PPC_WEAK_FUNC(sub_8256878C);
PPC_FUNC_IMPL(__imp__sub_8256878C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82568790"))) PPC_WEAK_FUNC(sub_82568790);
PPC_FUNC_IMPL(__imp__sub_82568790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,178(r3)
	PPC_STORE_U8(ctx.r3.u32 + 178, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256879C"))) PPC_WEAK_FUNC(sub_8256879C);
PPC_FUNC_IMPL(__imp__sub_8256879C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825687A0"))) PPC_WEAK_FUNC(sub_825687A0);
PPC_FUNC_IMPL(__imp__sub_825687A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// li r29,4
	r29.s64 = 4;
loc_825687B4:
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825687e0
	if (cr6.eq) goto loc_825687E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825685a8
	sub_825685A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825685e0
	sub_825685E0(ctx, base);
loc_825687E0:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x825687b4
	if (!cr0.eq) goto loc_825687B4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825687F0"))) PPC_WEAK_FUNC(sub_825687F0);
PPC_FUNC_IMPL(__imp__sub_825687F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825687F4"))) PPC_WEAK_FUNC(sub_825687F4);
PPC_FUNC_IMPL(__imp__sub_825687F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825687F8"))) PPC_WEAK_FUNC(sub_825687F8);
PPC_FUNC_IMPL(__imp__sub_825687F8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82568828
	if (cr6.lt) goto loc_82568828;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x8256882c
	if (cr6.lt) goto loc_8256882C;
loc_82568828:
	// li r11,0
	r11.s64 = 0;
loc_8256882C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82568878
	if (cr6.eq) goto loc_82568878;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// beq cr6,0x82568878
	if (cr6.eq) goto loc_82568878;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8256887c
	goto loc_8256887C;
loc_82568878:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256887C:
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

__attribute__((alias("__imp__sub_82568890"))) PPC_WEAK_FUNC(sub_82568890);
PPC_FUNC_IMPL(__imp__sub_82568890) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82568894"))) PPC_WEAK_FUNC(sub_82568894);
PPC_FUNC_IMPL(__imp__sub_82568894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82568898"))) PPC_WEAK_FUNC(sub_82568898);
PPC_FUNC_IMPL(__imp__sub_82568898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x825688a8
	if (!cr6.eq) goto loc_825688A8;
	// li r11,0
	r11.s64 = 0;
loc_825688A8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825688B0"))) PPC_WEAK_FUNC(sub_825688B0);
PPC_FUNC_IMPL(__imp__sub_825688B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x825688c4
	if (cr6.lt) goto loc_825688C4;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x825688c8
	if (cr6.lt) goto loc_825688C8;
loc_825688C4:
	// li r11,0
	r11.s64 = 0;
loc_825688C8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825688e4
	if (cr6.eq) goto loc_825688E4;
	// addi r11,r4,2
	r11.s64 = ctx.r4.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_825688E4:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_825688E8"))) PPC_WEAK_FUNC(sub_825688E8);
PPC_FUNC_IMPL(__imp__sub_825688E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825688EC"))) PPC_WEAK_FUNC(sub_825688EC);
PPC_FUNC_IMPL(__imp__sub_825688EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825688F0"))) PPC_WEAK_FUNC(sub_825688F0);
PPC_FUNC_IMPL(__imp__sub_825688F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_825688F4"))) PPC_WEAK_FUNC(sub_825688F4);
PPC_FUNC_IMPL(__imp__sub_825688F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825688F8"))) PPC_WEAK_FUNC(sub_825688F8);
PPC_FUNC_IMPL(__imp__sub_825688F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825688FC"))) PPC_WEAK_FUNC(sub_825688FC);
PPC_FUNC_IMPL(__imp__sub_825688FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82568900"))) PPC_WEAK_FUNC(sub_82568900);
PPC_FUNC_IMPL(__imp__sub_82568900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,180(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,2
	r11.s64 = 2;
	// stw r11,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, r11.u32);
}

__attribute__((alias("__imp__sub_82568914"))) PPC_WEAK_FUNC(sub_82568914);
PPC_FUNC_IMPL(__imp__sub_82568914) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82568918"))) PPC_WEAK_FUNC(sub_82568918);
PPC_FUNC_IMPL(__imp__sub_82568918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,180(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,1
	r11.s64 = 1;
	// stw r11,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, r11.u32);
}

__attribute__((alias("__imp__sub_8256892C"))) PPC_WEAK_FUNC(sub_8256892C);
PPC_FUNC_IMPL(__imp__sub_8256892C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82568930"))) PPC_WEAK_FUNC(sub_82568930);
PPC_FUNC_IMPL(__imp__sub_82568930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// li r30,4
	r30.s64 = 4;
loc_8256894C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256895c
	if (cr6.eq) goto loc_8256895C;
	// bl 0x82568310
	sub_82568310(ctx, base);
loc_8256895C:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x8256894c
	if (!cr0.eq) goto loc_8256894C;
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

__attribute__((alias("__imp__sub_8256897C"))) PPC_WEAK_FUNC(sub_8256897C);
PPC_FUNC_IMPL(__imp__sub_8256897C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82568980"))) PPC_WEAK_FUNC(sub_82568980);
PPC_FUNC_IMPL(__imp__sub_82568980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
loc_82568988:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825689a0
	if (cr6.eq) goto loc_825689A0;
	// ld r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// cmpld cr6,r9,r4
	cr6.compare<uint64_t>(ctx.r9.u64, ctx.r4.u64, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_825689A0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x82568988
	if (cr6.lt) goto loc_82568988;
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_825689B4"))) PPC_WEAK_FUNC(sub_825689B4);
PPC_FUNC_IMPL(__imp__sub_825689B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825689B8"))) PPC_WEAK_FUNC(sub_825689B8);
PPC_FUNC_IMPL(__imp__sub_825689B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
loc_825689D0:
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825689ec
	if (cr6.eq) goto loc_825689EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82568198
	sub_82568198(ctx, base);
	// cmpw cr6,r3,r28
	cr6.compare<int32_t>(ctx.r3.s32, r28.s32, xer);
	// beq cr6,0x82568a08
	if (cr6.eq) goto loc_82568A08;
loc_825689EC:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(r29.u32, 4, xer);
	// blt cr6,0x825689d0
	if (cr6.lt) goto loc_825689D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_82568A08:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82568A10"))) PPC_WEAK_FUNC(sub_82568A10);
PPC_FUNC_IMPL(__imp__sub_82568A10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82568A14"))) PPC_WEAK_FUNC(sub_82568A14);
PPC_FUNC_IMPL(__imp__sub_82568A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82568A18"))) PPC_WEAK_FUNC(sub_82568A18);
PPC_FUNC_IMPL(__imp__sub_82568A18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
loc_82568A20:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82568a38
	if (cr6.eq) goto loc_82568A38;
	// lbz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82568A38:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x82568a20
	if (cr6.lt) goto loc_82568A20;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82568A50"))) PPC_WEAK_FUNC(sub_82568A50);
PPC_FUNC_IMPL(__imp__sub_82568A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
loc_82568A58:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82568a70
	if (cr6.eq) goto loc_82568A70;
	// lbz r9,66(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 66);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82568A70:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x82568a58
	if (cr6.lt) goto loc_82568A58;
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_82568A84"))) PPC_WEAK_FUNC(sub_82568A84);
PPC_FUNC_IMPL(__imp__sub_82568A84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82568A88"))) PPC_WEAK_FUNC(sub_82568A88);
PPC_FUNC_IMPL(__imp__sub_82568A88) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82568ab0
	if (cr6.lt) goto loc_82568AB0;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82568ab4
	if (cr6.lt) goto loc_82568AB4;
loc_82568AB0:
	// li r11,0
	r11.s64 = 0;
loc_82568AB4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82568bc4
	if (cr6.eq) goto loc_82568BC4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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
	// beq cr6,0x82568bc4
	if (cr6.eq) goto loc_82568BC4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpld cr6,r9,r3
	cr6.compare<uint64_t>(ctx.r9.u64, ctx.r3.u64, xer);
	// beq cr6,0x82568bc4
	if (cr6.eq) goto loc_82568BC4;
	// cmpldi cr6,r9,0
	cr6.compare<uint64_t>(ctx.r9.u64, 0, xer);
	// beq cr6,0x82568b50
	if (cr6.eq) goto loc_82568B50;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
loc_82568B1C:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82568b34
	if (cr6.eq) goto loc_82568B34;
	// ld r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// cmpld cr6,r8,r9
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, xer);
	// beq cr6,0x82568b48
	if (cr6.eq) goto loc_82568B48;
loc_82568B34:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x82568b1c
	if (cr6.lt) goto loc_82568B1C;
	// b 0x82568b50
	goto loc_82568B50;
loc_82568B48:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82568208
	sub_82568208(ctx, base);
loc_82568B50:
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r31
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82568130
	sub_82568130(ctx, base);
	// std r29,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r29.u64);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82568208
	sub_82568208(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r10,5381
	ctx.r10.s64 = 5381;
	// extsb r11,r7
	r11.s64 = ctx.r7.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82568bc0
	if (cr6.eq) goto loc_82568BC0;
loc_82568BA4:
	// rlwinm r8,r10,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r9,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82568ba4
	if (!cr6.eq) goto loc_82568BA4;
loc_82568BC0:
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
loc_82568BC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82568BC8"))) PPC_WEAK_FUNC(sub_82568BC8);
PPC_FUNC_IMPL(__imp__sub_82568BC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82568BCC"))) PPC_WEAK_FUNC(sub_82568BCC);
PPC_FUNC_IMPL(__imp__sub_82568BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82568BD0"))) PPC_WEAK_FUNC(sub_82568BD0);
PPC_FUNC_IMPL(__imp__sub_82568BD0) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,-1
	r30.s64 = -1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
loc_82568C08:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82568c20
	if (cr6.eq) goto loc_82568C20;
	// lbz r8,66(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 66);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82568c38
	if (!cr6.eq) goto loc_82568C38;
loc_82568C20:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// blt cr6,0x82568c08
	if (cr6.lt) goto loc_82568C08;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82568c3c
	goto loc_82568C3C;
loc_82568C38:
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
loc_82568C3C:
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

__attribute__((alias("__imp__sub_82568C50"))) PPC_WEAK_FUNC(sub_82568C50);
PPC_FUNC_IMPL(__imp__sub_82568C50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82568C54"))) PPC_WEAK_FUNC(sub_82568C54);
PPC_FUNC_IMPL(__imp__sub_82568C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82568C58"))) PPC_WEAK_FUNC(sub_82568C58);
PPC_FUNC_IMPL(__imp__sub_82568C58) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
	// addi r31,r4,20
	r31.s64 = ctx.r4.s64 + 20;
	// li r29,4
	r29.s64 = 4;
	// li r27,-1
	r27.s64 = -1;
	// li r26,0
	r26.s64 = 0;
loc_82568C7C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// std r10,-12(r31)
	PPC_STORE_U64(r31.u32 + -12, ctx.r10.u64);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// stw r9,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, ctx.r9.u32);
	// lbz r8,66(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 66);
	// stb r8,50(r31)
	PPC_STORE_U8(r31.u32 + 50, ctx.r8.u8);
	// lbz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 64);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82568cd4
	if (cr6.eq) goto loc_82568CD4;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// b 0x82568cd8
	goto loc_82568CD8;
loc_82568CD4:
	// stb r26,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r26.u8);
loc_82568CD8:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r31,r31,72
	r31.s64 = r31.s64 + 72;
	// bne 0x82568c7c
	if (!cr0.eq) goto loc_82568C7C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82568CEC"))) PPC_WEAK_FUNC(sub_82568CEC);
PPC_FUNC_IMPL(__imp__sub_82568CEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82568CF0"))) PPC_WEAK_FUNC(sub_82568CF0);
PPC_FUNC_IMPL(__imp__sub_82568CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82568d14
	if (cr6.eq) goto loc_82568D14;
	// lbz r11,64(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82568d14
	if (cr6.eq) goto loc_82568D14;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82568D14:
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82568d30
	if (cr6.eq) goto loc_82568D30;
	// lbz r11,64(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82568d30
	if (cr6.eq) goto loc_82568D30;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82568D30:
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82568d4c
	if (cr6.eq) goto loc_82568D4C;
	// lbz r11,64(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82568d4c
	if (cr6.eq) goto loc_82568D4C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82568D4C:
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,64(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
}

__attribute__((alias("__imp__sub_82568D68"))) PPC_WEAK_FUNC(sub_82568D68);
PPC_FUNC_IMPL(__imp__sub_82568D68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82568D6C"))) PPC_WEAK_FUNC(sub_82568D6C);
PPC_FUNC_IMPL(__imp__sub_82568D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82568D70"))) PPC_WEAK_FUNC(sub_82568D70);
PPC_FUNC_IMPL(__imp__sub_82568D70) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// lis r30,-31934
	r30.s64 = -2092826624;
loc_82568D88:
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
	// beq cr6,0x82568dcc
	if (cr6.eq) goto loc_82568DCC;
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpld cr6,r3,r29
	cr6.compare<uint64_t>(ctx.r3.u64, r29.u64, xer);
	// beq cr6,0x82568de4
	if (cr6.eq) goto loc_82568DE4;
loc_82568DCC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x82568d88
	if (cr6.lt) goto loc_82568D88;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82568DE4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82568DEC"))) PPC_WEAK_FUNC(sub_82568DEC);
PPC_FUNC_IMPL(__imp__sub_82568DEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82568DF0"))) PPC_WEAK_FUNC(sub_82568DF0);
PPC_FUNC_IMPL(__imp__sub_82568DF0) {
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
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82568e20
	if (!cr6.eq) goto loc_82568E20;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82568E20:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82568e6c
	if (!cr6.eq) goto loc_82568E6C;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
loc_82568E34:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82568e4c
	if (cr6.eq) goto loc_82568E4C;
	// lbz r8,64(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 64);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82568e60
	if (!cr6.eq) goto loc_82568E60;
loc_82568E4C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// blt cr6,0x82568e34
	if (cr6.lt) goto loc_82568E34;
	// b 0x82568e6c
	goto loc_82568E6C;
loc_82568E60:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,32(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// bl 0x82568a88
	sub_82568A88(ctx, base);
loc_82568E6C:
	// stb r30,177(r31)
	PPC_STORE_U8(r31.u32 + 177, r30.u8);
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

__attribute__((alias("__imp__sub_82568E84"))) PPC_WEAK_FUNC(sub_82568E84);
PPC_FUNC_IMPL(__imp__sub_82568E84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82568E88"))) PPC_WEAK_FUNC(sub_82568E88);
PPC_FUNC_IMPL(__imp__sub_82568E88) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,21636(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// std r30,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r30.u64);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stb r30,176(r31)
	PPC_STORE_U8(r31.u32 + 176, r30.u8);
	// stb r30,177(r31)
	PPC_STORE_U8(r31.u32 + 177, r30.u8);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stb r30,178(r31)
	PPC_STORE_U8(r31.u32 + 178, r30.u8);
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// ori r4,r4,65280
	ctx.r4.u64 = ctx.r4.u64 | 65280;
	// bl 0x826dadb8
	sub_826DADB8(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stw r30,216(r31)
	PPC_STORE_U32(r31.u32 + 216, r30.u32);
	// addi r11,r31,212
	r11.s64 = r31.s64 + 212;
	// addi r7,r8,-22256
	ctx.r7.s64 = ctx.r8.s64 + -22256;
	// stw r30,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r30.u32);
	// stw r7,212(r31)
	PPC_STORE_U32(r31.u32 + 212, ctx.r7.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r6,228(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// or r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 | ctx.r3.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r3,17
	ctx.r3.s64 = 17;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r5,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r5.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r29,r30
	r29.u64 = r30.u64;
	// ld r26,88(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r27,r31,4
	r27.s64 = r31.s64 + 4;
	// ld r25,80(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r28,r11,-22248
	r28.s64 = r11.s64 + -22248;
	// stw r30,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r30.u32);
	// stw r4,240(r31)
	PPC_STORE_U32(r31.u32 + 240, ctx.r4.u32);
loc_82568F70:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r8,55
	ctx.r8.s64 = 55;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82568fa0
	if (cr6.eq) goto loc_82568FA0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82568348
	sub_82568348(ctx, base);
	// b 0x82568fa4
	goto loc_82568FA4;
loc_82568FA0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82568FA4:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwu r3,4(r27)
	ea = 4 + r27.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r27.u32 = ea;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(r29.u32, 4, xer);
	// blt cr6,0x82568f70
	if (cr6.lt) goto loc_82568F70;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82568FBC"))) PPC_WEAK_FUNC(sub_82568FBC);
PPC_FUNC_IMPL(__imp__sub_82568FBC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82568FC0"))) PPC_WEAK_FUNC(sub_82568FC0);
PPC_FUNC_IMPL(__imp__sub_82568FC0) {
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
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpldi cr6,r9,0
	cr6.compare<uint64_t>(ctx.r9.u64, 0, xer);
	// beq cr6,0x8256901c
	if (cr6.eq) goto loc_8256901C;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
loc_82568FE8:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82569000
	if (cr6.eq) goto loc_82569000;
	// ld r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// cmpld cr6,r8,r9
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, xer);
	// beq cr6,0x82569014
	if (cr6.eq) goto loc_82569014;
loc_82569000:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x82568fe8
	if (cr6.lt) goto loc_82568FE8;
	// b 0x8256901c
	goto loc_8256901C;
loc_82569014:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82568208
	sub_82568208(ctx, base);
loc_8256901C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// std r9,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r9.u64);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r8,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256905C"))) PPC_WEAK_FUNC(sub_8256905C);
PPC_FUNC_IMPL(__imp__sub_8256905C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82569060"))) PPC_WEAK_FUNC(sub_82569060);
PPC_FUNC_IMPL(__imp__sub_82569060) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// ld r11,16(r4)
	r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// cmpld cr6,r11,r5
	cr6.compare<uint64_t>(r11.u64, ctx.r5.u64, xer);
	// beq cr6,0x825690bc
	if (cr6.eq) goto loc_825690BC;
	// lwz r11,56(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// addi r9,r4,36
	ctx.r9.s64 = ctx.r4.s64 + 36;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82569080
	if (cr6.lt) goto loc_82569080;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82569080:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825690b0
	if (cr6.eq) goto loc_825690B0;
loc_82569094:
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
	// bne cr6,0x82569094
	if (!cr6.eq) goto loc_82569094;
loc_825690B0:
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!cr6.eq) return;
loc_825690BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825690C4"))) PPC_WEAK_FUNC(sub_825690C4);
PPC_FUNC_IMPL(__imp__sub_825690C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825690C8"))) PPC_WEAK_FUNC(sub_825690C8);
PPC_FUNC_IMPL(__imp__sub_825690C8) {
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
	// lbz r11,176(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 176);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825691a8
	if (cr6.eq) goto loc_825691A8;
	// lis r31,-31970
	r31.s64 = -2095185920;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256910c
	if (cr6.eq) goto loc_8256910C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82569110
	if (!cr6.eq) goto loc_82569110;
loc_8256910C:
	// li r11,0
	r11.s64 = 0;
loc_82569110:
	// addi r4,r30,36
	ctx.r4.s64 = r30.s64 + 36;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x82513058
	sub_82513058(ctx, base);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82569138
	if (cr6.eq) goto loc_82569138;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256913c
	if (!cr6.eq) goto loc_8256913C;
loc_82569138:
	// li r11,0
	r11.s64 = 0;
loc_8256913C:
	// addi r4,r30,64
	ctx.r4.s64 = r30.s64 + 64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x825130c0
	sub_825130C0(ctx, base);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82569164
	if (cr6.eq) goto loc_82569164;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82569168
	if (!cr6.eq) goto loc_82569168;
loc_82569164:
	// li r11,0
	r11.s64 = 0;
loc_82569168:
	// addi r4,r30,92
	ctx.r4.s64 = r30.s64 + 92;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x824238c0
	sub_824238C0(ctx, base);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82569190
	if (cr6.eq) goto loc_82569190;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82569194
	if (!cr6.eq) goto loc_82569194;
loc_82569190:
	// li r11,0
	r11.s64 = 0;
loc_82569194:
	// addi r4,r30,148
	ctx.r4.s64 = r30.s64 + 148;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x8256a0b8
	sub_8256A0B8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,176(r30)
	PPC_STORE_U8(r30.u32 + 176, r11.u8);
loc_825691A8:
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

__attribute__((alias("__imp__sub_825691BC"))) PPC_WEAK_FUNC(sub_825691BC);
PPC_FUNC_IMPL(__imp__sub_825691BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825691C0"))) PPC_WEAK_FUNC(sub_825691C0);
PPC_FUNC_IMPL(__imp__sub_825691C0) {
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
	// li r11,1
	r11.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r11,177(r3)
	PPC_STORE_U8(ctx.r3.u32 + 177, r11.u8);
	// bl 0x82568fc0
	sub_82568FC0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,240(r31)
	PPC_STORE_U32(r31.u32 + 240, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825691F8"))) PPC_WEAK_FUNC(sub_825691F8);
PPC_FUNC_IMPL(__imp__sub_825691F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825691FC"))) PPC_WEAK_FUNC(sub_825691FC);
PPC_FUNC_IMPL(__imp__sub_825691FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82569200"))) PPC_WEAK_FUNC(sub_82569200);
PPC_FUNC_IMPL(__imp__sub_82569200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f0
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r10.u32);
	// bl 0x82561dd0
	sub_82561DD0(ctx, base);
	// li r19,0
	r19.s64 = 0;
	// mr r31,r19
	r31.u64 = r19.u64;
loc_82569230:
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 4);
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
	// beq cr6,0x8256926c
	if (cr6.eq) goto loc_8256926C;
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8256926C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x82569230
	if (cr6.lt) goto loc_82569230;
	// addi r29,r21,8
	r29.s64 = r21.s64 + 8;
	// addi r26,r1,172
	r26.s64 = ctx.r1.s64 + 172;
	// mr r23,r29
	r23.u64 = r29.u64;
	// li r22,4
	r22.s64 = 4;
	// li r20,1
	r20.s64 = 1;
	// lis r24,-31933
	r24.s64 = -2092761088;
	// li r25,2
	r25.s64 = 2;
loc_82569294:
	// lwz r27,0(r23)
	r27.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,32(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 32);
	// bl 0x82568178
	sub_82568178(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825692d4
	if (cr6.eq) goto loc_825692D4;
	// ld r11,16(r27)
	r11.u64 = PPC_LOAD_U64(r27.u32 + 16);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// mr r11,r20
	r11.u64 = r20.u64;
	// bne cr6,0x825692c4
	if (!cr6.eq) goto loc_825692C4;
	// mr r11,r19
	r11.u64 = r19.u64;
loc_825692C4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r20
	r11.u64 = r20.u64;
	// bne cr6,0x825692d8
	if (!cr6.eq) goto loc_825692D8;
loc_825692D4:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_825692D8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825694a4
	if (cr6.eq) goto loc_825694A4;
	// mr r28,r19
	r28.u64 = r19.u64;
	// mr r30,r19
	r30.u64 = r19.u64;
loc_825692EC:
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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
	// beq cr6,0x825693e4
	if (cr6.eq) goto loc_825693E4;
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r21)
	ctx.r9.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,96(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r6,5381
	ctx.r6.s64 = 5381;
	// extsb r11,r5
	r11.s64 = ctx.r5.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82569378
	if (cr6.eq) goto loc_82569378;
loc_8256935C:
	// rlwinm r9,r6,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + r11.u64;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8256935c
	if (!cr6.eq) goto loc_8256935C;
loc_82569378:
	// ld r11,16(r27)
	r11.u64 = PPC_LOAD_U64(r27.u32 + 16);
	// cmpld cr6,r11,r31
	cr6.compare<uint64_t>(r11.u64, r31.u64, xer);
	// beq cr6,0x825693d4
	if (cr6.eq) goto loc_825693D4;
	// lwz r11,56(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 56);
	// addi r9,r27,36
	ctx.r9.s64 = r27.s64 + 36;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82569398
	if (cr6.lt) goto loc_82569398;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82569398:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825693c8
	if (cr6.eq) goto loc_825693C8;
loc_825693AC:
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
	// bne cr6,0x825693ac
	if (!cr6.eq) goto loc_825693AC;
loc_825693C8:
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// mr r11,r19
	r11.u64 = r19.u64;
	// bne cr6,0x825693d8
	if (!cr6.eq) goto loc_825693D8;
loc_825693D4:
	// mr r11,r20
	r11.u64 = r20.u64;
loc_825693D8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x825693f4
	if (cr6.eq) goto loc_825693F4;
loc_825693E4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(r30.u32, 4, xer);
	// blt cr6,0x825692ec
	if (cr6.lt) goto loc_825692EC;
	// b 0x825693f8
	goto loc_825693F8;
loc_825693F4:
	// mr r28,r20
	r28.u64 = r20.u64;
loc_825693F8:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825694a4
	if (!cr6.eq) goto loc_825694A4;
	// ld r11,24(r21)
	r11.u64 = PPC_LOAD_U64(r21.u32 + 24);
	// stb r20,397(r1)
	PPC_STORE_U8(ctx.r1.u32 + 397, r20.u8);
	// stw r25,-4(r26)
	PPC_STORE_U32(r26.u32 + -4, r25.u32);
	// stb r20,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r20.u8);
	// ld r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U64(r27.u32 + 16);
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, r11.u64, xer);
	// lwz r6,32(r21)
	ctx.r6.u64 = PPC_LOAD_U32(r21.u32 + 32);
	// beq cr6,0x82569474
	if (cr6.eq) goto loc_82569474;
	// lwz r11,56(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 56);
	// addi r9,r27,36
	ctx.r9.s64 = r27.s64 + 36;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82569438
	if (cr6.lt) goto loc_82569438;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82569438:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82569468
	if (cr6.eq) goto loc_82569468;
loc_8256944C:
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
	// bne cr6,0x8256944c
	if (!cr6.eq) goto loc_8256944C;
loc_82569468:
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// mr r11,r19
	r11.u64 = r19.u64;
	// bne cr6,0x82569478
	if (!cr6.eq) goto loc_82569478;
loc_82569474:
	// mr r11,r20
	r11.u64 = r20.u64;
loc_82569478:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x825694a4
	if (!cr6.eq) goto loc_825694A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82568208
	sub_82568208(ctx, base);
	// lwz r11,-22212(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + -22212);
	// std r19,24(r21)
	PPC_STORE_U64(r21.u32 + 24, r19.u64);
	// stw r25,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, r25.u32);
	// stb r20,396(r1)
	PPC_STORE_U8(ctx.r1.u32 + 396, r20.u8);
	// stw r11,32(r21)
	PPC_STORE_U32(r21.u32 + 32, r11.u32);
loc_825694A4:
	// addic. r22,r22,-1
	xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// addi r26,r26,72
	r26.s64 = r26.s64 + 72;
	// bne 0x82569294
	if (!cr0.eq) goto loc_82569294;
	// mr r31,r19
	r31.u64 = r19.u64;
	// addi r27,r1,172
	r27.s64 = ctx.r1.s64 + 172;
loc_825694BC:
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 4);
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
	// beq cr6,0x825695f4
	if (cr6.eq) goto loc_825695F4;
	// stw r20,-4(r27)
	PPC_STORE_U32(r27.u32 + -4, r20.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// mr r28,r19
	r28.u64 = r19.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r21)
	ctx.r9.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,96(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r6,5381
	ctx.r6.s64 = 5381;
	// extsb r11,r5
	r11.s64 = ctx.r5.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82569550
	if (cr6.eq) goto loc_82569550;
loc_82569534:
	// rlwinm r9,r6,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + r11.u64;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82569534
	if (!cr6.eq) goto loc_82569534;
loc_82569550:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_82569558:
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// cmpld cr6,r10,r30
	cr6.compare<uint64_t>(ctx.r10.u64, r30.u64, xer);
	// beq cr6,0x825695b8
	if (cr6.eq) goto loc_825695B8;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// addi r9,r11,36
	ctx.r9.s64 = r11.s64 + 36;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8256957c
	if (cr6.lt) goto loc_8256957C;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8256957C:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825695ac
	if (cr6.eq) goto loc_825695AC;
loc_82569590:
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
	// bne cr6,0x82569590
	if (!cr6.eq) goto loc_82569590;
loc_825695AC:
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// mr r11,r19
	r11.u64 = r19.u64;
	// bne cr6,0x825695bc
	if (!cr6.eq) goto loc_825695BC;
loc_825695B8:
	// mr r11,r20
	r11.u64 = r20.u64;
loc_825695BC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x825695dc
	if (cr6.eq) goto loc_825695DC;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// blt cr6,0x82569558
	if (cr6.lt) goto loc_82569558;
	// b 0x825695e0
	goto loc_825695E0;
loc_825695DC:
	// mr r28,r20
	r28.u64 = r20.u64;
loc_825695E0:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825695f4
	if (!cr6.eq) goto loc_825695F4;
	// stb r20,397(r1)
	PPC_STORE_U8(ctx.r1.u32 + 397, r20.u8);
	// stb r20,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r20.u8);
loc_825695F4:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r27,r27,72
	r27.s64 = r27.s64 + 72;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x825694bc
	if (cr6.lt) goto loc_825694BC;
	// mr r30,r19
	r30.u64 = r19.u64;
loc_82569608:
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82568310
	sub_82568310(ctx, base);
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82568618
	sub_82568618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82568118
	sub_82568118(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8256965c
	if (cr6.eq) goto loc_8256965C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825685a8
	sub_825685A8(ctx, base);
loc_8256965C:
	// lbz r11,64(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825696e0
	if (cr6.eq) goto loc_825696E0;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ld r10,24(r21)
	ctx.r10.u64 = PPC_LOAD_U64(r21.u32 + 24);
	// lwz r6,32(r21)
	ctx.r6.u64 = PPC_LOAD_U32(r21.u32 + 32);
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(r11.u64, ctx.r10.u64, xer);
	// beq cr6,0x825696cc
	if (cr6.eq) goto loc_825696CC;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r9,r31,36
	ctx.r9.s64 = r31.s64 + 36;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82569690
	if (cr6.lt) goto loc_82569690;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82569690:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825696c0
	if (cr6.eq) goto loc_825696C0;
loc_825696A4:
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
	// bne cr6,0x825696a4
	if (!cr6.eq) goto loc_825696A4;
loc_825696C0:
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// mr r11,r19
	r11.u64 = r19.u64;
	// bne cr6,0x825696d0
	if (!cr6.eq) goto loc_825696D0;
loc_825696CC:
	// mr r11,r20
	r11.u64 = r20.u64;
loc_825696D0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x825696e4
	if (cr6.eq) goto loc_825696E4;
loc_825696E0:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
loc_825696E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82568208
	sub_82568208(ctx, base);
	// lbz r11,64(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8256972c
	if (cr6.eq) goto loc_8256972C;
	// add r11,r30,r18
	r11.u64 = r30.u64 + r18.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8256972c
	if (cr6.eq) goto loc_8256972C;
	// ld r11,24(r21)
	r11.u64 = PPC_LOAD_U64(r21.u32 + 24);
	// stw r30,240(r21)
	PPC_STORE_U32(r21.u32 + 240, r30.u32);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// bne cr6,0x8256972c
	if (!cr6.eq) goto loc_8256972C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82568a88
	sub_82568A88(ctx, base);
	// stw r20,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, r20.u32);
	// stb r20,396(r1)
	PPC_STORE_U8(ctx.r1.u32 + 396, r20.u8);
loc_8256972C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(r30.u32, 4, xer);
	// blt cr6,0x82569608
	if (cr6.lt) goto loc_82569608;
	// lwz r11,392(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lbz r10,397(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 397);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addic r9,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r9.s64 = r11.s64 + -1;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stb r7,397(r1)
	PPC_STORE_U8(ctx.r1.u32 + 397, ctx.r7.u8);
	// bl 0x82568c58
	sub_82568C58(ctx, base);
	// lis r6,-31970
	ctx.r6.s64 = -2095185920;
	// lwz r3,-14756(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82569780
	if (cr6.eq) goto loc_82569780;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82569784
	if (!cr6.eq) goto loc_82569784;
loc_82569780:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_82569784:
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
	// beq cr6,0x825697d0
	if (cr6.eq) goto loc_825697D0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825697d0
	if (!cr6.eq) goto loc_825697D0;
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
loc_825697D0:
	// lwz r3,400(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
}

__attribute__((alias("__imp__sub_825697DC"))) PPC_WEAK_FUNC(sub_825697DC);
PPC_FUNC_IMPL(__imp__sub_825697DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_825697E0"))) PPC_WEAK_FUNC(sub_825697E0);
PPC_FUNC_IMPL(__imp__sub_825697E0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825690c8
	sub_825690C8(ctx, base);
	// addi r31,r29,8
	r31.s64 = r29.s64 + 8;
	// li r30,4
	r30.s64 = 4;
	// li r28,0
	r28.s64 = 0;
loc_82569800:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82569824
	if (cr6.eq) goto loc_82569824;
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
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
loc_82569824:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x82569800
	if (!cr0.eq) goto loc_82569800;
	// addi r3,r29,212
	ctx.r3.s64 = r29.s64 + 212;
	// bl 0x82569ed0
	sub_82569ED0(ctx, base);
	// addi r3,r29,184
	ctx.r3.s64 = r29.s64 + 184;
	// bl 0x826dade8
	sub_826DADE8(ctx, base);
	// addi r3,r29,148
	ctx.r3.s64 = r29.s64 + 148;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r29,120
	ctx.r3.s64 = r29.s64 + 120;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r29,92
	ctx.r3.s64 = r29.s64 + 92;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8256986C"))) PPC_WEAK_FUNC(sub_8256986C);
PPC_FUNC_IMPL(__imp__sub_8256986C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82569870"))) PPC_WEAK_FUNC(sub_82569870);
PPC_FUNC_IMPL(__imp__sub_82569870) {
	PPC_FUNC_PROLOGUE();
	// b 0x825690c8
	sub_825690C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82569870"))) PPC_WEAK_FUNC(sub_82569870);
PPC_FUNC_IMPL(__imp__sub_82569870) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82569874"))) PPC_WEAK_FUNC(sub_82569874);
PPC_FUNC_IMPL(__imp__sub_82569874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82569878"))) PPC_WEAK_FUNC(sub_82569878);
PPC_FUNC_IMPL(__imp__sub_82569878) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// li r11,0
	r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,17948(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17948);
	// lwz r7,24192(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24192);
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r11.u8);
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, r11.u8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stb r11,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, r11.u8);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r11.u8);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// bl 0x82569200
	sub_82569200(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825698D4"))) PPC_WEAK_FUNC(sub_825698D4);
PPC_FUNC_IMPL(__imp__sub_825698D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825698D8"))) PPC_WEAK_FUNC(sub_825698D8);
PPC_FUNC_IMPL(__imp__sub_825698D8) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r17,r3,184
	r17.s64 = ctx.r3.s64 + 184;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r22,0
	r22.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// mr r26,r22
	r26.u64 = r22.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lwz r10,224(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 224);
	// lwz r11,216(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 216);
	// addi r30,r23,212
	r30.s64 = r23.s64 + 212;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r27,r11
	r27.s64 = r11.s32;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(r27.u32, ctx.r9.u32, xer);
	// beq cr6,0x82569bcc
	if (cr6.eq) goto loc_82569BCC;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r24,-31970
	r24.s64 = -2095185920;
	// li r18,-1
	r18.s64 = -1;
	// lis r25,-31934
	r25.s64 = -2092826624;
	// lis r20,-31934
	r20.s64 = -2092826624;
	// lis r21,-31934
	r21.s64 = -2092826624;
	// addi r19,r11,-26796
	r19.s64 = r11.s64 + -26796;
loc_82569938:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82569950
	if (cr6.lt) goto loc_82569950;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82569954
	if (cr6.lt) goto loc_82569954;
loc_82569950:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82569954:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82569ae4
	if (cr6.eq) goto loc_82569AE4;
	// addi r11,r10,2
	r11.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r23
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + r23.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82569ae4
	if (cr6.eq) goto loc_82569AE4;
	// lwz r11,180(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 180);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82569a10
	if (!cr6.eq) goto loc_82569A10;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82568198
	sub_82568198(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82568140
	sub_82568140(ctx, base);
	// lwz r11,20516(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 20516);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// bl 0x82418040
	sub_82418040(ctx, base);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// lwz r3,20992(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + 20992);
	// bl 0x82320d20
	sub_82320D20(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82569a10
	if (cr6.eq) goto loc_82569A10;
	// stw r19,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r19.u32);
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r9,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r9.u32);
	// bl 0x82418040
	sub_82418040(ctx, base);
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// stw r22,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r22.u32);
	// stw r22,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r22.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_82569A10:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82568198
	sub_82568198(ctx, base);
	// lwz r10,20396(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 20396);
	// lwz r11,-14756(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + -14756);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x82569a44
	if (cr6.eq) goto loc_82569A44;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82569a48
	if (!cr6.eq) goto loc_82569A48;
loc_82569A44:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82569A48:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82569a94
	if (cr6.eq) goto loc_82569A94;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82569a94
	if (!cr6.eq) goto loc_82569A94;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82569A94:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// subf r9,r10,r27
	ctx.r9.s64 = r27.s64 - ctx.r10.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// srawi r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	r11.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82569ba8
	if (!cr6.lt) goto loc_82569BA8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82569AB8:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x82569ab8
	if (cr6.lt) goto loc_82569AB8;
	// b 0x82569ba8
	goto loc_82569BA8;
loc_82569AE4:
	// lwz r11,20396(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 20396);
	// lwz r3,-14756(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -14756);
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r18.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x82569b0c
	if (cr6.eq) goto loc_82569B0C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82569b10
	if (!cr6.eq) goto loc_82569B10;
loc_82569B0C:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82569B10:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82569b5c
	if (cr6.eq) goto loc_82569B5C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82569b5c
	if (!cr6.eq) goto loc_82569B5C;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82569B5C:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// subf r9,r10,r27
	ctx.r9.s64 = r27.s64 - ctx.r10.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// srawi r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	r11.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82569ba8
	if (!cr6.lt) goto loc_82569BA8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82569B80:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x82569b80
	if (cr6.lt) goto loc_82569B80;
loc_82569BA8:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x82569938
	if (!cr6.eq) goto loc_82569938;
loc_82569BCC:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// lwz r11,236(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 236);
	// subf r10,r26,r11
	ctx.r10.s64 = r11.s64 - r26.s64;
	// stw r10,236(r23)
	PPC_STORE_U32(r23.u32 + 236, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_82569BE4"))) PPC_WEAK_FUNC(sub_82569BE4);
PPC_FUNC_IMPL(__imp__sub_82569BE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e943c
	return;
}

__attribute__((alias("__imp__sub_82569BE8"))) PPC_WEAK_FUNC(sub_82569BE8);
PPC_FUNC_IMPL(__imp__sub_82569BE8) {
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
	// lwz r11,180(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82569c14
	if (!cr6.eq) goto loc_82569C14;
	// li r11,1
	r11.s64 = 1;
	// stw r11,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, r11.u32);
loc_82569C14:
	// lwz r11,180(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82569c64
	if (!cr6.eq) goto loc_82569C64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x825689b8
	sub_825689B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82569c64
	if (cr6.eq) goto loc_82569C64;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r31,20992(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 20992);
	// bl 0x82568140
	sub_82568140(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823322a0
	sub_823322A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82320d20
	sub_82320D20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82332610
	sub_82332610(ctx, base);
loc_82569C64:
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

__attribute__((alias("__imp__sub_82569C78"))) PPC_WEAK_FUNC(sub_82569C78);
PPC_FUNC_IMPL(__imp__sub_82569C78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82569C7C"))) PPC_WEAK_FUNC(sub_82569C7C);
PPC_FUNC_IMPL(__imp__sub_82569C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82569C80"))) PPC_WEAK_FUNC(sub_82569C80);
PPC_FUNC_IMPL(__imp__sub_82569C80) {
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
	// lbz r11,176(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 176);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82569dc8
	if (!cr6.eq) goto loc_82569DC8;
	// lis r30,-31970
	r30.s64 = -2095185920;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r11,-32169
	r11.s64 = -2108227584;
	// addi r10,r11,-30848
	ctx.r10.s64 = r11.s64 + -30848;
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82569cd4
	if (cr6.eq) goto loc_82569CD4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82569cd8
	if (!cr6.eq) goto loc_82569CD8;
loc_82569CD4:
	// li r11,0
	r11.s64 = 0;
loc_82569CD8:
	// li r6,50
	ctx.r6.s64 = 50;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// bl 0x82513248
	sub_82513248(ctx, base);
	// lis r11,-32169
	r11.s64 = -2108227584;
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// addi r10,r11,-30832
	ctx.r10.s64 = r11.s64 + -30832;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// beq cr6,0x82569d18
	if (cr6.eq) goto loc_82569D18;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82569d1c
	if (!cr6.eq) goto loc_82569D1C;
loc_82569D18:
	// li r11,0
	r11.s64 = 0;
loc_82569D1C:
	// li r6,50
	ctx.r6.s64 = 50;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,64
	ctx.r4.s64 = r31.s64 + 64;
	// bl 0x825132c0
	sub_825132C0(ctx, base);
	// lis r11,-32169
	r11.s64 = -2108227584;
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// addi r10,r11,-28160
	ctx.r10.s64 = r11.s64 + -28160;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// beq cr6,0x82569d5c
	if (cr6.eq) goto loc_82569D5C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82569d60
	if (!cr6.eq) goto loc_82569D60;
loc_82569D5C:
	// li r11,0
	r11.s64 = 0;
loc_82569D60:
	// li r6,50
	ctx.r6.s64 = 50;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,92
	ctx.r4.s64 = r31.s64 + 92;
	// bl 0x82423928
	sub_82423928(ctx, base);
	// lis r11,-32169
	r11.s64 = -2108227584;
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// addi r10,r11,-25624
	ctx.r10.s64 = r11.s64 + -25624;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// beq cr6,0x82569da0
	if (cr6.eq) goto loc_82569DA0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82569da4
	if (!cr6.eq) goto loc_82569DA4;
loc_82569DA0:
	// li r11,0
	r11.s64 = 0;
loc_82569DA4:
	// li r6,50
	ctx.r6.s64 = 50;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,148
	ctx.r4.s64 = r31.s64 + 148;
	// bl 0x8256a120
	sub_8256A120(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,176(r31)
	PPC_STORE_U8(r31.u32 + 176, r11.u8);
	// bl 0x82569878
	sub_82569878(ctx, base);
loc_82569DC8:
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

__attribute__((alias("__imp__sub_82569DDC"))) PPC_WEAK_FUNC(sub_82569DDC);
PPC_FUNC_IMPL(__imp__sub_82569DDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82569DE0"))) PPC_WEAK_FUNC(sub_82569DE0);
PPC_FUNC_IMPL(__imp__sub_82569DE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,176(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x825698d8
	sub_825698D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82569DF0"))) PPC_WEAK_FUNC(sub_82569DF0);
PPC_FUNC_IMPL(__imp__sub_82569DF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82569DF4"))) PPC_WEAK_FUNC(sub_82569DF4);
PPC_FUNC_IMPL(__imp__sub_82569DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82569DF8"))) PPC_WEAK_FUNC(sub_82569DF8);
PPC_FUNC_IMPL(__imp__sub_82569DF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82569fb8
	sub_82569FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82569DF8"))) PPC_WEAK_FUNC(sub_82569DF8);
PPC_FUNC_IMPL(__imp__sub_82569DF8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82569DFC"))) PPC_WEAK_FUNC(sub_82569DFC);
PPC_FUNC_IMPL(__imp__sub_82569DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82569E00"))) PPC_WEAK_FUNC(sub_82569E00);
PPC_FUNC_IMPL(__imp__sub_82569E00) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-22268
	ctx.r9.s64 = r11.s64 + -22268;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x82569e44
	if (!cr6.gt) goto loc_82569E44;
loc_82569E2C:
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
	// bgt cr6,0x82569e2c
	if (cr6.gt) goto loc_82569E2C;
loc_82569E44:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82569e5c
	if (cr6.eq) goto loc_82569E5C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82569E5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82569E6C"))) PPC_WEAK_FUNC(sub_82569E6C);
PPC_FUNC_IMPL(__imp__sub_82569E6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82569E70"))) PPC_WEAK_FUNC(sub_82569E70);
PPC_FUNC_IMPL(__imp__sub_82569E70) {
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
	// addi r9,r10,-22256
	ctx.r9.s64 = ctx.r10.s64 + -22256;
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

__attribute__((alias("__imp__sub_82569EC8"))) PPC_WEAK_FUNC(sub_82569EC8);
PPC_FUNC_IMPL(__imp__sub_82569EC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82569ECC"))) PPC_WEAK_FUNC(sub_82569ECC);
PPC_FUNC_IMPL(__imp__sub_82569ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82569ED0"))) PPC_WEAK_FUNC(sub_82569ED0);
PPC_FUNC_IMPL(__imp__sub_82569ED0) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-22256
	ctx.r9.s64 = r11.s64 + -22256;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x82569f14
	if (!cr6.gt) goto loc_82569F14;
loc_82569EFC:
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
	// bgt cr6,0x82569efc
	if (cr6.gt) goto loc_82569EFC;
loc_82569F14:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82569fb8
	sub_82569FB8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,-22268
	ctx.r10.s64 = r11.s64 + -22268;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x82569f50
	if (!cr6.gt) goto loc_82569F50;
loc_82569F38:
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
	// bgt cr6,0x82569f38
	if (cr6.gt) goto loc_82569F38;
loc_82569F50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82569F60"))) PPC_WEAK_FUNC(sub_82569F60);
PPC_FUNC_IMPL(__imp__sub_82569F60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82569F64"))) PPC_WEAK_FUNC(sub_82569F64);
PPC_FUNC_IMPL(__imp__sub_82569F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82569F68"))) PPC_WEAK_FUNC(sub_82569F68);
PPC_FUNC_IMPL(__imp__sub_82569F68) {
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
	// bl 0x82569ed0
	sub_82569ED0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82569fa0
	if (cr6.eq) goto loc_82569FA0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82569FA0:
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

__attribute__((alias("__imp__sub_82569FB4"))) PPC_WEAK_FUNC(sub_82569FB4);
PPC_FUNC_IMPL(__imp__sub_82569FB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82569FB8"))) PPC_WEAK_FUNC(sub_82569FB8);
PPC_FUNC_IMPL(__imp__sub_82569FB8) {
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
	// beq cr6,0x8256a09c
	if (cr6.eq) goto loc_8256A09C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256a02c
	if (!cr6.eq) goto loc_8256A02C;
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
	// beq cr6,0x8256a09c
	if (cr6.eq) goto loc_8256A09C;
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
	// b 0x8256a09c
	goto loc_8256A09C;
loc_8256A02C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82569e70
	sub_82569E70(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x8256a058
	if (!cr6.gt) goto loc_8256A058;
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
loc_8256A058:
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
	// bl 0x82569ed0
	sub_82569ED0(ctx, base);
loc_8256A09C:
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

__attribute__((alias("__imp__sub_8256A0B0"))) PPC_WEAK_FUNC(sub_8256A0B0);
PPC_FUNC_IMPL(__imp__sub_8256A0B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256A0B4"))) PPC_WEAK_FUNC(sub_8256A0B4);
PPC_FUNC_IMPL(__imp__sub_8256A0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256A0B8"))) PPC_WEAK_FUNC(sub_8256A0B8);
PPC_FUNC_IMPL(__imp__sub_8256A0B8) {
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
	// lis r29,-31934
	r29.s64 = -2092826624;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,20508(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20508);
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
	// bne cr6,0x8256a118
	if (!cr6.eq) goto loc_8256A118;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256a118
	if (!cr6.eq) goto loc_8256A118;
	// lwz r11,20508(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20508);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8256A118:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8256A11C"))) PPC_WEAK_FUNC(sub_8256A11C);
PPC_FUNC_IMPL(__imp__sub_8256A11C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8256A120"))) PPC_WEAK_FUNC(sub_8256A120);
PPC_FUNC_IMPL(__imp__sub_8256A120) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,14808
	ctx.r3.s64 = ctx.r10.s64 + 14808;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20508(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20508);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8256A190"))) PPC_WEAK_FUNC(sub_8256A190);
PPC_FUNC_IMPL(__imp__sub_8256A190) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8256A194"))) PPC_WEAK_FUNC(sub_8256A194);
PPC_FUNC_IMPL(__imp__sub_8256A194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256A198"))) PPC_WEAK_FUNC(sub_8256A198);
PPC_FUNC_IMPL(__imp__sub_8256A198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256a1a8
	if (cr6.eq) goto loc_8256A1A8;
	// b 0x8256c0c8
	sub_8256C0C8(ctx, base);
	return;
loc_8256A1A8:
	// li r3,5
	ctx.r3.s64 = 5;
}

__attribute__((alias("__imp__sub_8256A1AC"))) PPC_WEAK_FUNC(sub_8256A1AC);
PPC_FUNC_IMPL(__imp__sub_8256A1AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256A1B0"))) PPC_WEAK_FUNC(sub_8256A1B0);
PPC_FUNC_IMPL(__imp__sub_8256A1B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
}

__attribute__((alias("__imp__sub_8256A1B4"))) PPC_WEAK_FUNC(sub_8256A1B4);
PPC_FUNC_IMPL(__imp__sub_8256A1B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256A1B8"))) PPC_WEAK_FUNC(sub_8256A1B8);
PPC_FUNC_IMPL(__imp__sub_8256A1B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r4,56(r11)
	PPC_STORE_U8(r11.u32 + 56, ctx.r4.u8);
}

__attribute__((alias("__imp__sub_8256A1C0"))) PPC_WEAK_FUNC(sub_8256A1C0);
PPC_FUNC_IMPL(__imp__sub_8256A1C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256A1C4"))) PPC_WEAK_FUNC(sub_8256A1C4);
PPC_FUNC_IMPL(__imp__sub_8256A1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256A1C8"))) PPC_WEAK_FUNC(sub_8256A1C8);
PPC_FUNC_IMPL(__imp__sub_8256A1C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// stb r4,57(r11)
	PPC_STORE_U8(r11.u32 + 57, ctx.r4.u8);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8256A1E8"))) PPC_WEAK_FUNC(sub_8256A1E8);
PPC_FUNC_IMPL(__imp__sub_8256A1E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256A1EC"))) PPC_WEAK_FUNC(sub_8256A1EC);
PPC_FUNC_IMPL(__imp__sub_8256A1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256A1F0"))) PPC_WEAK_FUNC(sub_8256A1F0);
PPC_FUNC_IMPL(__imp__sub_8256A1F0) {
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
	// lwz r31,44(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8256a230
	if (cr6.eq) goto loc_8256A230;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// stw r11,44(r28)
	PPC_STORE_U32(r28.u32 + 44, r11.u32);
loc_8256A230:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// addi r30,r28,4
	r30.s64 = r28.s64 + 4;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r10
	r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x8256a2b4
	if (cr6.eq) goto loc_8256A2B4;
loc_8256A250:
	// lwz r11,44(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256a2b4
	if (!cr6.eq) goto loc_8256A2B4;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8256c0c8
	sub_8256C0C8(ctx, base);
	// cmplw cr6,r3,r27
	cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, xer);
	// beq cr6,0x8256a294
	if (cr6.eq) goto loc_8256A294;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8256a250
	if (!cr6.eq) goto loc_8256A250;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_8256A294:
	// stw r29,44(r28)
	PPC_STORE_U32(r28.u32 + 44, r29.u32);
	// li r11,1
	r11.s64 = 1;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,12(r29)
	PPC_STORE_U8(r29.u32 + 12, r11.u8);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8256A2B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8256A2B8"))) PPC_WEAK_FUNC(sub_8256A2B8);
PPC_FUNC_IMPL(__imp__sub_8256A2B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8256A2BC"))) PPC_WEAK_FUNC(sub_8256A2BC);
PPC_FUNC_IMPL(__imp__sub_8256A2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256A2C0"))) PPC_WEAK_FUNC(sub_8256A2C0);
PPC_FUNC_IMPL(__imp__sub_8256A2C0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8256a440
	if (cr6.eq) goto loc_8256A440;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8256a440
	if (cr6.eq) goto loc_8256A440;
	// lbz r11,300(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 300);
	// li r29,1
	r29.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8256a32c
	if (cr6.eq) goto loc_8256A32C;
	// lwz r11,296(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 296);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addic r9,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r9.s64 = r11.s64 + -1;
	// subfe r4,r9,r11
	temp.u8 = (~ctx.r9.u32 + r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, r29.u32);
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8256A32C:
	// addi r31,r31,72
	r31.s64 = r31.s64 + 72;
	// li r28,4
	r28.s64 = 4;
	// lis r27,-31970
	r27.s64 = -2095185920;
loc_8256A338:
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8256a3dc
	if (cr6.eq) goto loc_8256A3DC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r6,r11,2
	ctx.r6.s64 = r11.s64 + 2;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r5,r7
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, r29.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,-56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -56);
	// stw r3,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r3.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8256a3dc
	if (!cr6.eq) goto loc_8256A3DC;
	// bl 0x8254aa28
	sub_8254AA28(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x8254b9c8
	sub_8254B9C8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,-56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + -56);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8254b0a0
	sub_8254B0A0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8254ae48
	sub_8254AE48(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8256a3dc
	if (!cr6.eq) goto loc_8256A3DC;
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256a3d0
	if (cr6.eq) goto loc_8256A3D0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256a3d4
	if (!cr6.eq) goto loc_8256A3D4;
loc_8256A3D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256A3D4:
	// lwz r4,-56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -56);
	// bl 0x825139a0
	sub_825139A0(ctx, base);
loc_8256A3DC:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r31,r31,72
	r31.s64 = r31.s64 + 72;
	// bne 0x8256a338
	if (!cr0.eq) goto loc_8256A338;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x8256a414
	if (!cr6.eq) goto loc_8256A414;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8256A414:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x8256a440
	if (!cr6.eq) goto loc_8256A440;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8256A440:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8256A444"))) PPC_WEAK_FUNC(sub_8256A444);
PPC_FUNC_IMPL(__imp__sub_8256A444) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8256A448"))) PPC_WEAK_FUNC(sub_8256A448);
PPC_FUNC_IMPL(__imp__sub_8256A448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8256A478"))) PPC_WEAK_FUNC(sub_8256A478);
PPC_FUNC_IMPL(__imp__sub_8256A478) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256A47C"))) PPC_WEAK_FUNC(sub_8256A47C);
PPC_FUNC_IMPL(__imp__sub_8256A47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256A480"))) PPC_WEAK_FUNC(sub_8256A480);
PPC_FUNC_IMPL(__imp__sub_8256A480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,52(r8)
	PPC_STORE_U32(ctx.r8.u32 + 52, ctx.r7.u32);
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8256A4BC"))) PPC_WEAK_FUNC(sub_8256A4BC);
PPC_FUNC_IMPL(__imp__sub_8256A4BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256A4C0"))) PPC_WEAK_FUNC(sub_8256A4C0);
PPC_FUNC_IMPL(__imp__sub_8256A4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// stb r7,58(r8)
	PPC_STORE_U8(ctx.r8.u32 + 58, ctx.r7.u8);
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8256A4FC"))) PPC_WEAK_FUNC(sub_8256A4FC);
PPC_FUNC_IMPL(__imp__sub_8256A4FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256A500"))) PPC_WEAK_FUNC(sub_8256A500);
PPC_FUNC_IMPL(__imp__sub_8256A500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256A514"))) PPC_WEAK_FUNC(sub_8256A514);
PPC_FUNC_IMPL(__imp__sub_8256A514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256A518"))) PPC_WEAK_FUNC(sub_8256A518);
PPC_FUNC_IMPL(__imp__sub_8256A518) {
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
	// li r29,0
	r29.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_8256A530:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8256a580
	if (cr6.eq) goto loc_8256A580;
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256a578
	if (cr6.eq) goto loc_8256A578;
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
loc_8256A578:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stwx r29,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, r29.u32);
loc_8256A580:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r31,20
	cr6.compare<uint32_t>(r31.u32, 20, xer);
	// blt cr6,0x8256a530
	if (cr6.lt) goto loc_8256A530;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8256a5ac
	if (cr6.eq) goto loc_8256A5AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256b628
	sub_8256B628(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_8256A5AC:
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// addi r9,r10,-22152
	ctx.r9.s64 = ctx.r10.s64 + -22152;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// ble cr6,0x8256a608
	if (!cr6.gt) goto loc_8256A608;
loc_8256A5F0:
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
	// bgt cr6,0x8256a5f0
	if (cr6.gt) goto loc_8256A5F0;
loc_8256A608:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r8,r10,-22176
	ctx.r8.s64 = ctx.r10.s64 + -22176;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// ble cr6,0x8256a638
	if (!cr6.gt) goto loc_8256A638;
loc_8256A620:
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
	// bgt cr6,0x8256a620
	if (cr6.gt) goto loc_8256A620;
loc_8256A638:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8256A63C"))) PPC_WEAK_FUNC(sub_8256A63C);
PPC_FUNC_IMPL(__imp__sub_8256A63C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8256A640"))) PPC_WEAK_FUNC(sub_8256A640);
PPC_FUNC_IMPL(__imp__sub_8256A640) {
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
	// beq cr6,0x8256a670
	if (cr6.eq) goto loc_8256A670;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256a674
	if (!cr6.eq) goto loc_8256A674;
loc_8256A670:
	// li r11,0
	r11.s64 = 0;
loc_8256A674:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r31,12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20400(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20400);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,48
	ctx.r4.s64 = r28.s64 + 48;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256a6c8
	if (!cr6.eq) goto loc_8256A6C8;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256a6c8
	if (!cr6.eq) goto loc_8256A6C8;
	// lwz r11,20400(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20400);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8256A6C8:
	// lis r29,-31933
	r29.s64 = -2092761088;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-22184(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -22184);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,76
	ctx.r4.s64 = r28.s64 + 76;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256a718
	if (!cr6.eq) goto loc_8256A718;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256a718
	if (!cr6.eq) goto loc_8256A718;
	// lwz r11,-22184(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -22184);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8256A718:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,17932(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17932);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,104
	ctx.r4.s64 = r28.s64 + 104;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256a768
	if (!cr6.eq) goto loc_8256A768;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256a768
	if (!cr6.eq) goto loc_8256A768;
	// lwz r11,17932(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17932);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8256A768:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,19360(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19360);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,132
	ctx.r4.s64 = r28.s64 + 132;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256a7b8
	if (!cr6.eq) goto loc_8256A7B8;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256a7b8
	if (!cr6.eq) goto loc_8256A7B8;
	// lwz r11,19360(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19360);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8256A7B8:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,19372(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19372);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,160
	ctx.r4.s64 = r28.s64 + 160;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256a808
	if (!cr6.eq) goto loc_8256A808;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256a808
	if (!cr6.eq) goto loc_8256A808;
	// lwz r11,19372(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19372);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8256A808:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8256A80C"))) PPC_WEAK_FUNC(sub_8256A80C);
PPC_FUNC_IMPL(__imp__sub_8256A80C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8256A810"))) PPC_WEAK_FUNC(sub_8256A810);
PPC_FUNC_IMPL(__imp__sub_8256A810) {
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
	// li r30,0
	r30.s64 = 0;
loc_8256A824:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r30,20
	cr6.compare<uint32_t>(r30.u32, 20, xer);
	// blt cr6,0x8256a824
	if (cr6.lt) goto loc_8256A824;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256a868
	if (cr6.eq) goto loc_8256A868;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256a86c
	if (!cr6.eq) goto loc_8256A86C;
loc_8256A868:
	// li r11,0
	r11.s64 = 0;
loc_8256A86C:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r28,r10,-3784
	r28.s64 = ctx.r10.s64 + -3784;
	// lis r11,-32169
	r11.s64 = -2108227584;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r9,12528
	ctx.r3.s64 = ctx.r9.s64 + 12528;
	// addi r30,r11,-23872
	r30.s64 = r11.s64 + -23872;
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
	// lwz r11,20400(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20400);
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
	// lis r7,-31965
	ctx.r7.s64 = -2094858240;
	// lis r11,-32169
	r11.s64 = -2108227584;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r7,-5820
	ctx.r3.s64 = ctx.r7.s64 + -5820;
	// addi r30,r11,-23480
	r30.s64 = r11.s64 + -23480;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,-22184(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22184);
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
	// lis r11,-32169
	r11.s64 = -2108227584;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r5,-12684
	ctx.r3.s64 = ctx.r5.s64 + -12684;
	// addi r30,r11,-23424
	r30.s64 = r11.s64 + -23424;
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
	// lwz r11,17932(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17932);
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
	// lis r11,-32169
	r11.s64 = -2108227584;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r10,2280
	ctx.r3.s64 = ctx.r10.s64 + 2280;
	// addi r30,r11,-23360
	r30.s64 = r11.s64 + -23360;
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
	// lwz r11,19360(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19360);
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
	// lis r11,-32169
	r11.s64 = -2108227584;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r8,2144
	ctx.r3.s64 = ctx.r8.s64 + 2144;
	// addi r30,r11,-23296
	r30.s64 = r11.s64 + -23296;
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
	// lwz r11,19372(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19372);
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
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8256A9F8"))) PPC_WEAK_FUNC(sub_8256A9F8);
PPC_FUNC_IMPL(__imp__sub_8256A9F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8256A9FC"))) PPC_WEAK_FUNC(sub_8256A9FC);
PPC_FUNC_IMPL(__imp__sub_8256A9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256AA00"))) PPC_WEAK_FUNC(sub_8256AA00);
PPC_FUNC_IMPL(__imp__sub_8256AA00) {
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
	// addi r28,r11,-22044
	r28.s64 = r11.s64 + -22044;
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
	// bl 0x8256bb10
	sub_8256BB10(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,-24168
	ctx.r6.s64 = ctx.r7.s64 + -24168;
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
	// addi r4,r10,-22060
	ctx.r4.s64 = ctx.r10.s64 + -22060;
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
	// bl 0x8256bf78
	sub_8256BF78(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-24136
	ctx.r10.s64 = ctx.r7.s64 + -24136;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,-22080
	ctx.r4.s64 = ctx.r9.s64 + -22080;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8256be70
	sub_8256BE70(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r6,-24120
	ctx.r10.s64 = ctx.r6.s64 + -24120;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stb r31,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,-22100
	ctx.r4.s64 = ctx.r9.s64 + -22100;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8256be70
	sub_8256BE70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x8256b7f0
	sub_8256B7F0(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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
	// beq cr6,0x8256abb8
	if (cr6.eq) goto loc_8256ABB8;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8256ABB8:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256abd4
	if (cr6.eq) goto loc_8256ABD4;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x8256abd4
	if (cr6.eq) goto loc_8256ABD4;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8256ABD4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8256ABD8"))) PPC_WEAK_FUNC(sub_8256ABD8);
PPC_FUNC_IMPL(__imp__sub_8256ABD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8256ABDC"))) PPC_WEAK_FUNC(sub_8256ABDC);
PPC_FUNC_IMPL(__imp__sub_8256ABDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256ABE0"))) PPC_WEAK_FUNC(sub_8256ABE0);
PPC_FUNC_IMPL(__imp__sub_8256ABE0) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r31,0
	r31.s64 = 0;
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// addi r9,r11,-22152
	ctx.r9.s64 = r11.s64 + -22152;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r8,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r8.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r7,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r7.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x822dec68
	sub_822DEC68(ctx, base);
	// stw r31,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r31.u32);
	// addi r3,r30,48
	ctx.r3.s64 = r30.s64 + 48;
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
	// lis r6,-31970
	ctx.r6.s64 = -2095185920;
	// lwz r3,-14756(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256ac80
	if (cr6.eq) goto loc_8256AC80;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256ac84
	if (!cr6.eq) goto loc_8256AC84;
loc_8256AC80:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8256AC84:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8256aa00
	sub_8256AA00(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r28,17
	r28.s64 = 17;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// addi r29,r10,-22036
	r29.s64 = ctx.r10.s64 + -22036;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r8,47
	ctx.r8.s64 = 47;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// li r3,64
	ctx.r3.s64 = 64;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256acdc
	if (cr6.eq) goto loc_8256ACDC;
	// bl 0x8256b730
	sub_8256B730(ctx, base);
	// b 0x8256ace0
	goto loc_8256ACE0;
loc_8256ACDC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8256ACE0:
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// mr r27,r31
	r27.u64 = r31.u64;
loc_8256ACE8:
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(r27.u32, 4, xer);
	// bgt cr6,0x8256aed4
	if (cr6.gt) goto loc_8256AED4;
	// mtctr r27
	ctr.u64 = r27.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8256ad64
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8256AD64;
	// bdzf 4*cr6+eq,0x8256adc0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8256ADC0;
	// bdzf 4*cr6+eq,0x8256ae1c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8256AE1C;
	// bne cr6,0x8256ae78
	if (!cr6.eq) goto loc_8256AE78;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r8,53
	ctx.r8.s64 = 53;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256ad54
	if (cr6.eq) goto loc_8256AD54;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8256cf38
	sub_8256CF38(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
	// b 0x8256af28
	goto loc_8256AF28;
loc_8256AD54:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// b 0x8256af28
	goto loc_8256AF28;
loc_8256AD64:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r28.u32);
	// li r8,56
	ctx.r8.s64 = 56;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r31.u32);
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256adb0
	if (cr6.eq) goto loc_8256ADB0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8256c9d8
	sub_8256C9D8(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// b 0x8256af28
	goto loc_8256AF28;
loc_8256ADB0:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
	// b 0x8256af28
	goto loc_8256AF28;
loc_8256ADC0:
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r28.u32);
	// li r8,59
	ctx.r8.s64 = 59;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256ae0c
	if (cr6.eq) goto loc_8256AE0C;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8256e0d0
	sub_8256E0D0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r3,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r3.u32);
	// b 0x8256af28
	goto loc_8256AF28;
loc_8256AE0C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// b 0x8256af28
	goto loc_8256AF28;
loc_8256AE1C:
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r28.u32);
	// li r8,62
	ctx.r8.s64 = 62;
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r31.u32);
	// li r3,136
	ctx.r3.s64 = 136;
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// ld r5,200(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256ae68
	if (cr6.eq) goto loc_8256AE68;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8256d5f8
	sub_8256D5F8(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r3,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r3.u32);
	// b 0x8256af28
	goto loc_8256AF28;
loc_8256AE68:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// b 0x8256af28
	goto loc_8256AF28;
loc_8256AE78:
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r28.u32);
	// li r8,65
	ctx.r8.s64 = 65;
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r31.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// ld r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256aec4
	if (cr6.eq) goto loc_8256AEC4;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8256ded8
	sub_8256DED8(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r3,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r3.u32);
	// b 0x8256af28
	goto loc_8256AF28;
loc_8256AEC4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r31,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r31.u32);
	// b 0x8256af28
	goto loc_8256AF28;
loc_8256AED4:
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, r28.u32);
	// li r8,70
	ctx.r8.s64 = 70;
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, r31.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// ld r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256af18
	if (cr6.eq) goto loc_8256AF18;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8256c0a8
	sub_8256C0A8(ctx, base);
	// b 0x8256af1c
	goto loc_8256AF1C;
loc_8256AF18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8256AF1C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r3.u32);
loc_8256AF28:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplwi cr6,r27,5
	cr6.compare<uint32_t>(r27.u32, 5, xer);
	// blt cr6,0x8256ace8
	if (cr6.lt) goto loc_8256ACE8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_8256AF3C"))) PPC_WEAK_FUNC(sub_8256AF3C);
PPC_FUNC_IMPL(__imp__sub_8256AF3C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8256AF40"))) PPC_WEAK_FUNC(sub_8256AF40);
PPC_FUNC_IMPL(__imp__sub_8256AF40) {
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
	// bne cr6,0x8256af78
	if (!cr6.eq) goto loc_8256AF78;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8256afa4
	if (cr6.eq) goto loc_8256AFA4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x8256afa4
	goto loc_8256AFA4;
loc_8256AF78:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8256afa4
	if (cr6.eq) goto loc_8256AFA4;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-5768
	ctx.r4.s64 = r11.s64 + -5768;
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
loc_8256AFA4:
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

__attribute__((alias("__imp__sub_8256AFB8"))) PPC_WEAK_FUNC(sub_8256AFB8);
PPC_FUNC_IMPL(__imp__sub_8256AFB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256AFBC"))) PPC_WEAK_FUNC(sub_8256AFBC);
PPC_FUNC_IMPL(__imp__sub_8256AFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256AFC0"))) PPC_WEAK_FUNC(sub_8256AFC0);
PPC_FUNC_IMPL(__imp__sub_8256AFC0) {
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
	// bne cr6,0x8256aff8
	if (!cr6.eq) goto loc_8256AFF8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8256b024
	if (cr6.eq) goto loc_8256B024;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x8256b024
	goto loc_8256B024;
loc_8256AFF8:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8256b024
	if (cr6.eq) goto loc_8256B024;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-5632
	ctx.r4.s64 = r11.s64 + -5632;
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
loc_8256B024:
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

__attribute__((alias("__imp__sub_8256B038"))) PPC_WEAK_FUNC(sub_8256B038);
PPC_FUNC_IMPL(__imp__sub_8256B038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B03C"))) PPC_WEAK_FUNC(sub_8256B03C);
PPC_FUNC_IMPL(__imp__sub_8256B03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256B040"))) PPC_WEAK_FUNC(sub_8256B040);
PPC_FUNC_IMPL(__imp__sub_8256B040) {
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
	// bne cr6,0x8256b078
	if (!cr6.eq) goto loc_8256B078;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8256b0a4
	if (cr6.eq) goto loc_8256B0A4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x8256b0a4
	goto loc_8256B0A4;
loc_8256B078:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8256b0a4
	if (cr6.eq) goto loc_8256B0A4;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-5496
	ctx.r4.s64 = r11.s64 + -5496;
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
loc_8256B0A4:
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

__attribute__((alias("__imp__sub_8256B0B8"))) PPC_WEAK_FUNC(sub_8256B0B8);
PPC_FUNC_IMPL(__imp__sub_8256B0B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B0BC"))) PPC_WEAK_FUNC(sub_8256B0BC);
PPC_FUNC_IMPL(__imp__sub_8256B0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256B0C0"))) PPC_WEAK_FUNC(sub_8256B0C0);
PPC_FUNC_IMPL(__imp__sub_8256B0C0) {
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
	// bne cr6,0x8256b0f8
	if (!cr6.eq) goto loc_8256B0F8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8256b124
	if (cr6.eq) goto loc_8256B124;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x8256b124
	goto loc_8256B124;
loc_8256B0F8:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8256b124
	if (cr6.eq) goto loc_8256B124;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-5376
	ctx.r4.s64 = r11.s64 + -5376;
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
loc_8256B124:
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

__attribute__((alias("__imp__sub_8256B138"))) PPC_WEAK_FUNC(sub_8256B138);
PPC_FUNC_IMPL(__imp__sub_8256B138) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B13C"))) PPC_WEAK_FUNC(sub_8256B13C);
PPC_FUNC_IMPL(__imp__sub_8256B13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256B140"))) PPC_WEAK_FUNC(sub_8256B140);
PPC_FUNC_IMPL(__imp__sub_8256B140) {
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x8256b1d4
	if (!cr6.eq) goto loc_8256B1D4;
	// bl 0x826a24b0
	sub_826A24B0(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r31,r11,-5260
	r31.s64 = r11.s64 + -5260;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826a2768
	sub_826A2768(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256b198
	if (!cr6.eq) goto loc_8256B198;
loc_8256B190:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8256b278
	goto loc_8256B278;
loc_8256B198:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8256b1b8
	if (cr6.eq) goto loc_8256B1B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8256b278
	goto loc_8256B278;
loc_8256B1B8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8256b278
	goto loc_8256B278;
loc_8256B1D4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822e8c70
	sub_822E8C70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256b190
	if (cr6.eq) goto loc_8256B190;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r30,r11,-5260
	r30.s64 = r11.s64 + -5260;
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
	// beq cr6,0x8256b220
	if (cr6.eq) goto loc_8256B220;
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
	// b 0x8256b278
	goto loc_8256B278;
loc_8256B220:
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
	// beq cr6,0x8256b24c
	if (cr6.eq) goto loc_8256B24C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// not r10,r11
	ctx.r10.u64 = ~r11.u64;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// b 0x8256b278
	goto loc_8256B278;
loc_8256B24C:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x826a9428
	sub_826A9428(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256b190
	if (cr6.eq) goto loc_8256B190;
	// not r11,r31
	r11.u64 = ~r31.u64;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// add r3,r11,r3
	ctx.r3.u64 = r11.u64 + ctx.r3.u64;
loc_8256B278:
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

__attribute__((alias("__imp__sub_8256B28C"))) PPC_WEAK_FUNC(sub_8256B28C);
PPC_FUNC_IMPL(__imp__sub_8256B28C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B290"))) PPC_WEAK_FUNC(sub_8256B290);
PPC_FUNC_IMPL(__imp__sub_8256B290) {
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
	// beq cr6,0x8256b368
	if (cr6.eq) goto loc_8256B368;
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
	// bne cr6,0x8256b2dc
	if (!cr6.eq) goto loc_8256B2DC;
loc_8256B2D4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8256b368
	goto loc_8256B368;
loc_8256B2DC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8256b2d4
	if (!cr6.eq) goto loc_8256B2D4;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r11,-5260
	r30.s64 = r11.s64 + -5260;
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
	// beq cr6,0x8256b324
	if (cr6.eq) goto loc_8256B324;
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
	// b 0x8256b368
	goto loc_8256B368;
loc_8256B324:
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
	// beq cr6,0x8256b354
	if (cr6.eq) goto loc_8256B354;
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
	// b 0x8256b368
	goto loc_8256B368;
loc_8256B354:
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
loc_8256B368:
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

__attribute__((alias("__imp__sub_8256B37C"))) PPC_WEAK_FUNC(sub_8256B37C);
PPC_FUNC_IMPL(__imp__sub_8256B37C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B380"))) PPC_WEAK_FUNC(sub_8256B380);
PPC_FUNC_IMPL(__imp__sub_8256B380) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-22176
	ctx.r9.s64 = r11.s64 + -22176;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8256b3c4
	if (!cr6.gt) goto loc_8256B3C4;
loc_8256B3AC:
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
	// bgt cr6,0x8256b3ac
	if (cr6.gt) goto loc_8256B3AC;
loc_8256B3C4:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8256b3dc
	if (cr6.eq) goto loc_8256B3DC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8256B3DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256B3EC"))) PPC_WEAK_FUNC(sub_8256B3EC);
PPC_FUNC_IMPL(__imp__sub_8256B3EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B3F0"))) PPC_WEAK_FUNC(sub_8256B3F0);
PPC_FUNC_IMPL(__imp__sub_8256B3F0) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-22164
	ctx.r9.s64 = r11.s64 + -22164;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8256b434
	if (!cr6.gt) goto loc_8256B434;
loc_8256B41C:
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
	// bgt cr6,0x8256b41c
	if (cr6.gt) goto loc_8256B41C;
loc_8256B434:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8256b44c
	if (cr6.eq) goto loc_8256B44C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8256B44C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256B45C"))) PPC_WEAK_FUNC(sub_8256B45C);
PPC_FUNC_IMPL(__imp__sub_8256B45C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B460"))) PPC_WEAK_FUNC(sub_8256B460);
PPC_FUNC_IMPL(__imp__sub_8256B460) {
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
	// beq cr6,0x8256b498
	if (cr6.eq) goto loc_8256B498;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8256af40
	sub_8256AF40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8256B498:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-5768
	ctx.r10.s64 = r11.s64 + -5768;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8256B4B0"))) PPC_WEAK_FUNC(sub_8256B4B0);
PPC_FUNC_IMPL(__imp__sub_8256B4B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B4B4"))) PPC_WEAK_FUNC(sub_8256B4B4);
PPC_FUNC_IMPL(__imp__sub_8256B4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256B4B8"))) PPC_WEAK_FUNC(sub_8256B4B8);
PPC_FUNC_IMPL(__imp__sub_8256B4B8) {
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
	// beq cr6,0x8256b4f0
	if (cr6.eq) goto loc_8256B4F0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8256afc0
	sub_8256AFC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8256B4F0:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-5632
	ctx.r10.s64 = r11.s64 + -5632;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8256B508"))) PPC_WEAK_FUNC(sub_8256B508);
PPC_FUNC_IMPL(__imp__sub_8256B508) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B50C"))) PPC_WEAK_FUNC(sub_8256B50C);
PPC_FUNC_IMPL(__imp__sub_8256B50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256B510"))) PPC_WEAK_FUNC(sub_8256B510);
PPC_FUNC_IMPL(__imp__sub_8256B510) {
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
	// beq cr6,0x8256b548
	if (cr6.eq) goto loc_8256B548;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8256b040
	sub_8256B040(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8256B548:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-5496
	ctx.r10.s64 = r11.s64 + -5496;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8256B560"))) PPC_WEAK_FUNC(sub_8256B560);
PPC_FUNC_IMPL(__imp__sub_8256B560) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B564"))) PPC_WEAK_FUNC(sub_8256B564);
PPC_FUNC_IMPL(__imp__sub_8256B564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256B568"))) PPC_WEAK_FUNC(sub_8256B568);
PPC_FUNC_IMPL(__imp__sub_8256B568) {
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
	// beq cr6,0x8256b5a0
	if (cr6.eq) goto loc_8256B5A0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8256b0c0
	sub_8256B0C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8256B5A0:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-5376
	ctx.r10.s64 = r11.s64 + -5376;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8256B5B8"))) PPC_WEAK_FUNC(sub_8256B5B8);
PPC_FUNC_IMPL(__imp__sub_8256B5B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B5BC"))) PPC_WEAK_FUNC(sub_8256B5BC);
PPC_FUNC_IMPL(__imp__sub_8256B5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256B5C0"))) PPC_WEAK_FUNC(sub_8256B5C0);
PPC_FUNC_IMPL(__imp__sub_8256B5C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,-22152
	ctx.r9.s64 = r11.s64 + -22152;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8256b5f0
	if (!cr6.gt) goto loc_8256B5F0;
loc_8256B5D8:
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
	// bgt cr6,0x8256b5d8
	if (cr6.gt) goto loc_8256B5D8;
loc_8256B5F0:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,-22176
	ctx.r9.s64 = r11.s64 + -22176;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blelr cr6
	if (!cr6.gt) return;
loc_8256B608:
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
	// bgt cr6,0x8256b608
	if (cr6.gt) goto loc_8256B608;
}

__attribute__((alias("__imp__sub_8256B620"))) PPC_WEAK_FUNC(sub_8256B620);
PPC_FUNC_IMPL(__imp__sub_8256B620) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B624"))) PPC_WEAK_FUNC(sub_8256B624);
PPC_FUNC_IMPL(__imp__sub_8256B624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256B628"))) PPC_WEAK_FUNC(sub_8256B628);
PPC_FUNC_IMPL(__imp__sub_8256B628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,-22140
	ctx.r9.s64 = r11.s64 + -22140;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8256b658
	if (!cr6.gt) goto loc_8256B658;
loc_8256B640:
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
	// bgt cr6,0x8256b640
	if (cr6.gt) goto loc_8256B640;
loc_8256B658:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,-22164
	ctx.r9.s64 = r11.s64 + -22164;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blelr cr6
	if (!cr6.gt) return;
loc_8256B670:
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
	// bgt cr6,0x8256b670
	if (cr6.gt) goto loc_8256B670;
}

