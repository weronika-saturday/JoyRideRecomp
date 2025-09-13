#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_824E5948"))) PPC_WEAK_FUNC(sub_824E5948);
PPC_FUNC_IMPL(__imp__sub_824E5948) {
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
	// bne cr6,0x824e5990
	if (!cr6.eq) goto loc_824E5990;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e5988
	if (cr0.eq) goto loc_824E5988;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E5988:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e5994
	goto loc_824E5994;
loc_824E5990:
	// li r11,0
	r11.s64 = 0;
loc_824E5994:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,2828
	ctx.r7.s64 = ctx.r10.s64 + 2828;
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

__attribute__((alias("__imp__sub_824E59C4"))) PPC_WEAK_FUNC(sub_824E59C4);
PPC_FUNC_IMPL(__imp__sub_824E59C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E59C8"))) PPC_WEAK_FUNC(sub_824E59C8);
PPC_FUNC_IMPL(__imp__sub_824E59C8) {
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
	// beq cr6,0x824e5a14
	if (cr6.eq) goto loc_824E5A14;
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
	// bl 0x824cb8d8
	sub_824CB8D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x824e5a18
	if (!cr6.lt) goto loc_824E5A18;
loc_824E5A14:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_824E5A18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824E5A28"))) PPC_WEAK_FUNC(sub_824E5A28);
PPC_FUNC_IMPL(__imp__sub_824E5A28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E5A2C"))) PPC_WEAK_FUNC(sub_824E5A2C);
PPC_FUNC_IMPL(__imp__sub_824E5A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5A30"))) PPC_WEAK_FUNC(sub_824E5A30);
PPC_FUNC_IMPL(__imp__sub_824E5A30) {
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
	// beq cr6,0x824e5a7c
	if (cr6.eq) goto loc_824E5A7C;
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
	// bl 0x824cb9c8
	sub_824CB9C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x824e5a80
	if (!cr6.lt) goto loc_824E5A80;
loc_824E5A7C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_824E5A80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824E5A90"))) PPC_WEAK_FUNC(sub_824E5A90);
PPC_FUNC_IMPL(__imp__sub_824E5A90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E5A94"))) PPC_WEAK_FUNC(sub_824E5A94);
PPC_FUNC_IMPL(__imp__sub_824E5A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5A98"))) PPC_WEAK_FUNC(sub_824E5A98);
PPC_FUNC_IMPL(__imp__sub_824E5A98) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824db3a8
	sub_824DB3A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5AAC"))) PPC_WEAK_FUNC(sub_824E5AAC);
PPC_FUNC_IMPL(__imp__sub_824E5AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5AB0"))) PPC_WEAK_FUNC(sub_824E5AB0);
PPC_FUNC_IMPL(__imp__sub_824E5AB0) {
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
	// beq cr6,0x824e5afc
	if (cr6.eq) goto loc_824E5AFC;
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
	// bl 0x824cbab8
	sub_824CBAB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x824e5b00
	if (!cr6.lt) goto loc_824E5B00;
loc_824E5AFC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_824E5B00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824E5B10"))) PPC_WEAK_FUNC(sub_824E5B10);
PPC_FUNC_IMPL(__imp__sub_824E5B10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E5B14"))) PPC_WEAK_FUNC(sub_824E5B14);
PPC_FUNC_IMPL(__imp__sub_824E5B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5B18"))) PPC_WEAK_FUNC(sub_824E5B18);
PPC_FUNC_IMPL(__imp__sub_824E5B18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_824E5B24"))) PPC_WEAK_FUNC(sub_824E5B24);
PPC_FUNC_IMPL(__imp__sub_824E5B24) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e0020
	sub_824E0020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5B28"))) PPC_WEAK_FUNC(sub_824E5B28);
PPC_FUNC_IMPL(__imp__sub_824E5B28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_824E5B34"))) PPC_WEAK_FUNC(sub_824E5B34);
PPC_FUNC_IMPL(__imp__sub_824E5B34) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e00b0
	sub_824E00B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5B38"))) PPC_WEAK_FUNC(sub_824E5B38);
PPC_FUNC_IMPL(__imp__sub_824E5B38) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824db438
	sub_824DB438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5B4C"))) PPC_WEAK_FUNC(sub_824E5B4C);
PPC_FUNC_IMPL(__imp__sub_824E5B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5B50"))) PPC_WEAK_FUNC(sub_824E5B50);
PPC_FUNC_IMPL(__imp__sub_824E5B50) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824db508
	sub_824DB508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5B64"))) PPC_WEAK_FUNC(sub_824E5B64);
PPC_FUNC_IMPL(__imp__sub_824E5B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5B68"))) PPC_WEAK_FUNC(sub_824E5B68);
PPC_FUNC_IMPL(__imp__sub_824E5B68) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824db610
	sub_824DB610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5B7C"))) PPC_WEAK_FUNC(sub_824E5B7C);
PPC_FUNC_IMPL(__imp__sub_824E5B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5B80"))) PPC_WEAK_FUNC(sub_824E5B80);
PPC_FUNC_IMPL(__imp__sub_824E5B80) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824db6b8
	sub_824DB6B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5B94"))) PPC_WEAK_FUNC(sub_824E5B94);
PPC_FUNC_IMPL(__imp__sub_824E5B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5B98"))) PPC_WEAK_FUNC(sub_824E5B98);
PPC_FUNC_IMPL(__imp__sub_824E5B98) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824db748
	sub_824DB748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5BAC"))) PPC_WEAK_FUNC(sub_824E5BAC);
PPC_FUNC_IMPL(__imp__sub_824E5BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5BB0"))) PPC_WEAK_FUNC(sub_824E5BB0);
PPC_FUNC_IMPL(__imp__sub_824E5BB0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824db830
	sub_824DB830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5BC4"))) PPC_WEAK_FUNC(sub_824E5BC4);
PPC_FUNC_IMPL(__imp__sub_824E5BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5BC8"))) PPC_WEAK_FUNC(sub_824E5BC8);
PPC_FUNC_IMPL(__imp__sub_824E5BC8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824db8c8
	sub_824DB8C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5BDC"))) PPC_WEAK_FUNC(sub_824E5BDC);
PPC_FUNC_IMPL(__imp__sub_824E5BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5BE0"))) PPC_WEAK_FUNC(sub_824E5BE0);
PPC_FUNC_IMPL(__imp__sub_824E5BE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_824E5BEC"))) PPC_WEAK_FUNC(sub_824E5BEC);
PPC_FUNC_IMPL(__imp__sub_824E5BEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e0140
	sub_824E0140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5BF0"))) PPC_WEAK_FUNC(sub_824E5BF0);
PPC_FUNC_IMPL(__imp__sub_824E5BF0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824db980
	sub_824DB980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5C04"))) PPC_WEAK_FUNC(sub_824E5C04);
PPC_FUNC_IMPL(__imp__sub_824E5C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5C08"))) PPC_WEAK_FUNC(sub_824E5C08);
PPC_FUNC_IMPL(__imp__sub_824E5C08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_824E5C14"))) PPC_WEAK_FUNC(sub_824E5C14);
PPC_FUNC_IMPL(__imp__sub_824E5C14) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e01d0
	sub_824E01D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5C18"))) PPC_WEAK_FUNC(sub_824E5C18);
PPC_FUNC_IMPL(__imp__sub_824E5C18) {
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
	// beq cr6,0x824e5c64
	if (cr6.eq) goto loc_824E5C64;
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
	// bl 0x824cbba8
	sub_824CBBA8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x824e5c68
	if (!cr6.lt) goto loc_824E5C68;
loc_824E5C64:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_824E5C68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824E5C78"))) PPC_WEAK_FUNC(sub_824E5C78);
PPC_FUNC_IMPL(__imp__sub_824E5C78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E5C7C"))) PPC_WEAK_FUNC(sub_824E5C7C);
PPC_FUNC_IMPL(__imp__sub_824E5C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5C80"))) PPC_WEAK_FUNC(sub_824E5C80);
PPC_FUNC_IMPL(__imp__sub_824E5C80) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dba28
	sub_824DBA28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5C94"))) PPC_WEAK_FUNC(sub_824E5C94);
PPC_FUNC_IMPL(__imp__sub_824E5C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5C98"))) PPC_WEAK_FUNC(sub_824E5C98);
PPC_FUNC_IMPL(__imp__sub_824E5C98) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dbb00
	sub_824DBB00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5CAC"))) PPC_WEAK_FUNC(sub_824E5CAC);
PPC_FUNC_IMPL(__imp__sub_824E5CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5CB0"))) PPC_WEAK_FUNC(sub_824E5CB0);
PPC_FUNC_IMPL(__imp__sub_824E5CB0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dbba8
	sub_824DBBA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5CC4"))) PPC_WEAK_FUNC(sub_824E5CC4);
PPC_FUNC_IMPL(__imp__sub_824E5CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5CC8"))) PPC_WEAK_FUNC(sub_824E5CC8);
PPC_FUNC_IMPL(__imp__sub_824E5CC8) {
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
	// beq cr6,0x824e5d14
	if (cr6.eq) goto loc_824E5D14;
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
	// bl 0x824cbc98
	sub_824CBC98(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x824e5d18
	if (!cr6.lt) goto loc_824E5D18;
loc_824E5D14:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_824E5D18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824E5D28"))) PPC_WEAK_FUNC(sub_824E5D28);
PPC_FUNC_IMPL(__imp__sub_824E5D28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E5D2C"))) PPC_WEAK_FUNC(sub_824E5D2C);
PPC_FUNC_IMPL(__imp__sub_824E5D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5D30"))) PPC_WEAK_FUNC(sub_824E5D30);
PPC_FUNC_IMPL(__imp__sub_824E5D30) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dbc38
	sub_824DBC38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5D44"))) PPC_WEAK_FUNC(sub_824E5D44);
PPC_FUNC_IMPL(__imp__sub_824E5D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5D48"))) PPC_WEAK_FUNC(sub_824E5D48);
PPC_FUNC_IMPL(__imp__sub_824E5D48) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dbd08
	sub_824DBD08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5D5C"))) PPC_WEAK_FUNC(sub_824E5D5C);
PPC_FUNC_IMPL(__imp__sub_824E5D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5D60"))) PPC_WEAK_FUNC(sub_824E5D60);
PPC_FUNC_IMPL(__imp__sub_824E5D60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_824E5D6C"))) PPC_WEAK_FUNC(sub_824E5D6C);
PPC_FUNC_IMPL(__imp__sub_824E5D6C) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e0260
	sub_824E0260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5D70"))) PPC_WEAK_FUNC(sub_824E5D70);
PPC_FUNC_IMPL(__imp__sub_824E5D70) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dbd98
	sub_824DBD98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5D84"))) PPC_WEAK_FUNC(sub_824E5D84);
PPC_FUNC_IMPL(__imp__sub_824E5D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5D88"))) PPC_WEAK_FUNC(sub_824E5D88);
PPC_FUNC_IMPL(__imp__sub_824E5D88) {
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
	// beq cr6,0x824e5dd4
	if (cr6.eq) goto loc_824E5DD4;
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
	// bl 0x824cbe78
	sub_824CBE78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x824e5dd8
	if (!cr6.lt) goto loc_824E5DD8;
loc_824E5DD4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_824E5DD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824E5DE8"))) PPC_WEAK_FUNC(sub_824E5DE8);
PPC_FUNC_IMPL(__imp__sub_824E5DE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E5DEC"))) PPC_WEAK_FUNC(sub_824E5DEC);
PPC_FUNC_IMPL(__imp__sub_824E5DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5DF0"))) PPC_WEAK_FUNC(sub_824E5DF0);
PPC_FUNC_IMPL(__imp__sub_824E5DF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_824E5DFC"))) PPC_WEAK_FUNC(sub_824E5DFC);
PPC_FUNC_IMPL(__imp__sub_824E5DFC) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e02f0
	sub_824E02F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5E00"))) PPC_WEAK_FUNC(sub_824E5E00);
PPC_FUNC_IMPL(__imp__sub_824E5E00) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dbe70
	sub_824DBE70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5E14"))) PPC_WEAK_FUNC(sub_824E5E14);
PPC_FUNC_IMPL(__imp__sub_824E5E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5E18"))) PPC_WEAK_FUNC(sub_824E5E18);
PPC_FUNC_IMPL(__imp__sub_824E5E18) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dbf00
	sub_824DBF00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5E2C"))) PPC_WEAK_FUNC(sub_824E5E2C);
PPC_FUNC_IMPL(__imp__sub_824E5E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5E30"))) PPC_WEAK_FUNC(sub_824E5E30);
PPC_FUNC_IMPL(__imp__sub_824E5E30) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dbfa8
	sub_824DBFA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5E44"))) PPC_WEAK_FUNC(sub_824E5E44);
PPC_FUNC_IMPL(__imp__sub_824E5E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5E48"))) PPC_WEAK_FUNC(sub_824E5E48);
PPC_FUNC_IMPL(__imp__sub_824E5E48) {
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
	// beq cr6,0x824e5e94
	if (cr6.eq) goto loc_824E5E94;
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
	// bl 0x824cbf68
	sub_824CBF68(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x824e5e98
	if (!cr6.lt) goto loc_824E5E98;
loc_824E5E94:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_824E5E98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824E5EA8"))) PPC_WEAK_FUNC(sub_824E5EA8);
PPC_FUNC_IMPL(__imp__sub_824E5EA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E5EAC"))) PPC_WEAK_FUNC(sub_824E5EAC);
PPC_FUNC_IMPL(__imp__sub_824E5EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5EB0"))) PPC_WEAK_FUNC(sub_824E5EB0);
PPC_FUNC_IMPL(__imp__sub_824E5EB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_824E5EBC"))) PPC_WEAK_FUNC(sub_824E5EBC);
PPC_FUNC_IMPL(__imp__sub_824E5EBC) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e0380
	sub_824E0380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5EC0"))) PPC_WEAK_FUNC(sub_824E5EC0);
PPC_FUNC_IMPL(__imp__sub_824E5EC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_824E5ECC"))) PPC_WEAK_FUNC(sub_824E5ECC);
PPC_FUNC_IMPL(__imp__sub_824E5ECC) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e0410
	sub_824E0410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5ED0"))) PPC_WEAK_FUNC(sub_824E5ED0);
PPC_FUNC_IMPL(__imp__sub_824E5ED0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dc038
	sub_824DC038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5EE4"))) PPC_WEAK_FUNC(sub_824E5EE4);
PPC_FUNC_IMPL(__imp__sub_824E5EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5EE8"))) PPC_WEAK_FUNC(sub_824E5EE8);
PPC_FUNC_IMPL(__imp__sub_824E5EE8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dc0c8
	sub_824DC0C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5EFC"))) PPC_WEAK_FUNC(sub_824E5EFC);
PPC_FUNC_IMPL(__imp__sub_824E5EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5F00"))) PPC_WEAK_FUNC(sub_824E5F00);
PPC_FUNC_IMPL(__imp__sub_824E5F00) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dc158
	sub_824DC158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5F14"))) PPC_WEAK_FUNC(sub_824E5F14);
PPC_FUNC_IMPL(__imp__sub_824E5F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5F18"))) PPC_WEAK_FUNC(sub_824E5F18);
PPC_FUNC_IMPL(__imp__sub_824E5F18) {
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
	// beq cr6,0x824e5f64
	if (cr6.eq) goto loc_824E5F64;
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
	// bl 0x824cc058
	sub_824CC058(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x824e5f68
	if (!cr6.lt) goto loc_824E5F68;
loc_824E5F64:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_824E5F68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824E5F78"))) PPC_WEAK_FUNC(sub_824E5F78);
PPC_FUNC_IMPL(__imp__sub_824E5F78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E5F7C"))) PPC_WEAK_FUNC(sub_824E5F7C);
PPC_FUNC_IMPL(__imp__sub_824E5F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5F80"))) PPC_WEAK_FUNC(sub_824E5F80);
PPC_FUNC_IMPL(__imp__sub_824E5F80) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dc1e8
	sub_824DC1E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5F94"))) PPC_WEAK_FUNC(sub_824E5F94);
PPC_FUNC_IMPL(__imp__sub_824E5F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5F98"))) PPC_WEAK_FUNC(sub_824E5F98);
PPC_FUNC_IMPL(__imp__sub_824E5F98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_824E5FA4"))) PPC_WEAK_FUNC(sub_824E5FA4);
PPC_FUNC_IMPL(__imp__sub_824E5FA4) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e04a0
	sub_824E04A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5FA8"))) PPC_WEAK_FUNC(sub_824E5FA8);
PPC_FUNC_IMPL(__imp__sub_824E5FA8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dc280
	sub_824DC280(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5FBC"))) PPC_WEAK_FUNC(sub_824E5FBC);
PPC_FUNC_IMPL(__imp__sub_824E5FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5FC0"))) PPC_WEAK_FUNC(sub_824E5FC0);
PPC_FUNC_IMPL(__imp__sub_824E5FC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_824E5FCC"))) PPC_WEAK_FUNC(sub_824E5FCC);
PPC_FUNC_IMPL(__imp__sub_824E5FCC) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e0530
	sub_824E0530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5FD0"))) PPC_WEAK_FUNC(sub_824E5FD0);
PPC_FUNC_IMPL(__imp__sub_824E5FD0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dc310
	sub_824DC310(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5FE4"))) PPC_WEAK_FUNC(sub_824E5FE4);
PPC_FUNC_IMPL(__imp__sub_824E5FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E5FE8"))) PPC_WEAK_FUNC(sub_824E5FE8);
PPC_FUNC_IMPL(__imp__sub_824E5FE8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dc3a8
	sub_824DC3A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E5FFC"))) PPC_WEAK_FUNC(sub_824E5FFC);
PPC_FUNC_IMPL(__imp__sub_824E5FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E6000"))) PPC_WEAK_FUNC(sub_824E6000);
PPC_FUNC_IMPL(__imp__sub_824E6000) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dc460
	sub_824DC460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E6014"))) PPC_WEAK_FUNC(sub_824E6014);
PPC_FUNC_IMPL(__imp__sub_824E6014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E6018"))) PPC_WEAK_FUNC(sub_824E6018);
PPC_FUNC_IMPL(__imp__sub_824E6018) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dc508
	sub_824DC508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E602C"))) PPC_WEAK_FUNC(sub_824E602C);
PPC_FUNC_IMPL(__imp__sub_824E602C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E6030"))) PPC_WEAK_FUNC(sub_824E6030);
PPC_FUNC_IMPL(__imp__sub_824E6030) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dc5c0
	sub_824DC5C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E6044"))) PPC_WEAK_FUNC(sub_824E6044);
PPC_FUNC_IMPL(__imp__sub_824E6044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E6048"))) PPC_WEAK_FUNC(sub_824E6048);
PPC_FUNC_IMPL(__imp__sub_824E6048) {
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
	// beq cr6,0x824e6094
	if (cr6.eq) goto loc_824E6094;
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
	// bl 0x824cc238
	sub_824CC238(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x824e6098
	if (!cr6.lt) goto loc_824E6098;
loc_824E6094:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_824E6098:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824E60A8"))) PPC_WEAK_FUNC(sub_824E60A8);
PPC_FUNC_IMPL(__imp__sub_824E60A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E60AC"))) PPC_WEAK_FUNC(sub_824E60AC);
PPC_FUNC_IMPL(__imp__sub_824E60AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E60B0"))) PPC_WEAK_FUNC(sub_824E60B0);
PPC_FUNC_IMPL(__imp__sub_824E60B0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dc690
	sub_824DC690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E60C4"))) PPC_WEAK_FUNC(sub_824E60C4);
PPC_FUNC_IMPL(__imp__sub_824E60C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E60C8"))) PPC_WEAK_FUNC(sub_824E60C8);
PPC_FUNC_IMPL(__imp__sub_824E60C8) {
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
	// beq cr6,0x824e6114
	if (cr6.eq) goto loc_824E6114;
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
	// bl 0x824cc328
	sub_824CC328(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x824e6118
	if (!cr6.lt) goto loc_824E6118;
loc_824E6114:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_824E6118:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824E6128"))) PPC_WEAK_FUNC(sub_824E6128);
PPC_FUNC_IMPL(__imp__sub_824E6128) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E612C"))) PPC_WEAK_FUNC(sub_824E612C);
PPC_FUNC_IMPL(__imp__sub_824E612C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E6130"))) PPC_WEAK_FUNC(sub_824E6130);
PPC_FUNC_IMPL(__imp__sub_824E6130) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dc738
	sub_824DC738(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E6144"))) PPC_WEAK_FUNC(sub_824E6144);
PPC_FUNC_IMPL(__imp__sub_824E6144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E6148"))) PPC_WEAK_FUNC(sub_824E6148);
PPC_FUNC_IMPL(__imp__sub_824E6148) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_824E6154"))) PPC_WEAK_FUNC(sub_824E6154);
PPC_FUNC_IMPL(__imp__sub_824E6154) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e05c0
	sub_824E05C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E6158"))) PPC_WEAK_FUNC(sub_824E6158);
PPC_FUNC_IMPL(__imp__sub_824E6158) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_824E6164"))) PPC_WEAK_FUNC(sub_824E6164);
PPC_FUNC_IMPL(__imp__sub_824E6164) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e0650
	sub_824E0650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E6168"))) PPC_WEAK_FUNC(sub_824E6168);
PPC_FUNC_IMPL(__imp__sub_824E6168) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dc7c8
	sub_824DC7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E617C"))) PPC_WEAK_FUNC(sub_824E617C);
PPC_FUNC_IMPL(__imp__sub_824E617C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E6180"))) PPC_WEAK_FUNC(sub_824E6180);
PPC_FUNC_IMPL(__imp__sub_824E6180) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dc858
	sub_824DC858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E6194"))) PPC_WEAK_FUNC(sub_824E6194);
PPC_FUNC_IMPL(__imp__sub_824E6194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E6198"))) PPC_WEAK_FUNC(sub_824E6198);
PPC_FUNC_IMPL(__imp__sub_824E6198) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dc910
	sub_824DC910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E61AC"))) PPC_WEAK_FUNC(sub_824E61AC);
PPC_FUNC_IMPL(__imp__sub_824E61AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E61B0"))) PPC_WEAK_FUNC(sub_824E61B0);
PPC_FUNC_IMPL(__imp__sub_824E61B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_824E61BC"))) PPC_WEAK_FUNC(sub_824E61BC);
PPC_FUNC_IMPL(__imp__sub_824E61BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e06e0
	sub_824E06E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E61C0"))) PPC_WEAK_FUNC(sub_824E61C0);
PPC_FUNC_IMPL(__imp__sub_824E61C0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dc9a0
	sub_824DC9A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E61D4"))) PPC_WEAK_FUNC(sub_824E61D4);
PPC_FUNC_IMPL(__imp__sub_824E61D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E61D8"))) PPC_WEAK_FUNC(sub_824E61D8);
PPC_FUNC_IMPL(__imp__sub_824E61D8) {
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
	// beq cr6,0x824e6224
	if (cr6.eq) goto loc_824E6224;
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
	// bl 0x824cc6e8
	sub_824CC6E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x824e6228
	if (!cr6.lt) goto loc_824E6228;
loc_824E6224:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_824E6228:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824E6238"))) PPC_WEAK_FUNC(sub_824E6238);
PPC_FUNC_IMPL(__imp__sub_824E6238) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E623C"))) PPC_WEAK_FUNC(sub_824E623C);
PPC_FUNC_IMPL(__imp__sub_824E623C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E6240"))) PPC_WEAK_FUNC(sub_824E6240);
PPC_FUNC_IMPL(__imp__sub_824E6240) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_824E624C"))) PPC_WEAK_FUNC(sub_824E624C);
PPC_FUNC_IMPL(__imp__sub_824E624C) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e0770
	sub_824E0770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E6250"))) PPC_WEAK_FUNC(sub_824E6250);
PPC_FUNC_IMPL(__imp__sub_824E6250) {
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
	// beq cr6,0x824e629c
	if (cr6.eq) goto loc_824E629C;
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
	// bl 0x824cc7d8
	sub_824CC7D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x824e62a0
	if (!cr6.lt) goto loc_824E62A0;
loc_824E629C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_824E62A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824E62B0"))) PPC_WEAK_FUNC(sub_824E62B0);
PPC_FUNC_IMPL(__imp__sub_824E62B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E62B4"))) PPC_WEAK_FUNC(sub_824E62B4);
PPC_FUNC_IMPL(__imp__sub_824E62B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E62B8"))) PPC_WEAK_FUNC(sub_824E62B8);
PPC_FUNC_IMPL(__imp__sub_824E62B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_824E62C4"))) PPC_WEAK_FUNC(sub_824E62C4);
PPC_FUNC_IMPL(__imp__sub_824E62C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e0800
	sub_824E0800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E62C8"))) PPC_WEAK_FUNC(sub_824E62C8);
PPC_FUNC_IMPL(__imp__sub_824E62C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_824E62D4"))) PPC_WEAK_FUNC(sub_824E62D4);
PPC_FUNC_IMPL(__imp__sub_824E62D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e0890
	sub_824E0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E62D8"))) PPC_WEAK_FUNC(sub_824E62D8);
PPC_FUNC_IMPL(__imp__sub_824E62D8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dca30
	sub_824DCA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E62EC"))) PPC_WEAK_FUNC(sub_824E62EC);
PPC_FUNC_IMPL(__imp__sub_824E62EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E62F0"))) PPC_WEAK_FUNC(sub_824E62F0);
PPC_FUNC_IMPL(__imp__sub_824E62F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_824E62FC"))) PPC_WEAK_FUNC(sub_824E62FC);
PPC_FUNC_IMPL(__imp__sub_824E62FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e0920
	sub_824E0920(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E6300"))) PPC_WEAK_FUNC(sub_824E6300);
PPC_FUNC_IMPL(__imp__sub_824E6300) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dcac0
	sub_824DCAC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E6314"))) PPC_WEAK_FUNC(sub_824E6314);
PPC_FUNC_IMPL(__imp__sub_824E6314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E6318"))) PPC_WEAK_FUNC(sub_824E6318);
PPC_FUNC_IMPL(__imp__sub_824E6318) {
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
	// beq cr6,0x824e6364
	if (cr6.eq) goto loc_824E6364;
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
	// bl 0x824cc8c8
	sub_824CC8C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x824e6368
	if (!cr6.lt) goto loc_824E6368;
loc_824E6364:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_824E6368:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824E6378"))) PPC_WEAK_FUNC(sub_824E6378);
PPC_FUNC_IMPL(__imp__sub_824E6378) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E637C"))) PPC_WEAK_FUNC(sub_824E637C);
PPC_FUNC_IMPL(__imp__sub_824E637C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E6380"))) PPC_WEAK_FUNC(sub_824E6380);
PPC_FUNC_IMPL(__imp__sub_824E6380) {
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
	// beq cr6,0x824e63cc
	if (cr6.eq) goto loc_824E63CC;
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
	// bl 0x824cc9b8
	sub_824CC9B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x824e63d0
	if (!cr6.lt) goto loc_824E63D0;
loc_824E63CC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_824E63D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824E63E0"))) PPC_WEAK_FUNC(sub_824E63E0);
PPC_FUNC_IMPL(__imp__sub_824E63E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E63E4"))) PPC_WEAK_FUNC(sub_824E63E4);
PPC_FUNC_IMPL(__imp__sub_824E63E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E63E8"))) PPC_WEAK_FUNC(sub_824E63E8);
PPC_FUNC_IMPL(__imp__sub_824E63E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_824E63F4"))) PPC_WEAK_FUNC(sub_824E63F4);
PPC_FUNC_IMPL(__imp__sub_824E63F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e09b0
	sub_824E09B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E63F8"))) PPC_WEAK_FUNC(sub_824E63F8);
PPC_FUNC_IMPL(__imp__sub_824E63F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_824E6404"))) PPC_WEAK_FUNC(sub_824E6404);
PPC_FUNC_IMPL(__imp__sub_824E6404) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e0a40
	sub_824E0A40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E6408"))) PPC_WEAK_FUNC(sub_824E6408);
PPC_FUNC_IMPL(__imp__sub_824E6408) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_824E6414"))) PPC_WEAK_FUNC(sub_824E6414);
PPC_FUNC_IMPL(__imp__sub_824E6414) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e0ad0
	sub_824E0AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E6418"))) PPC_WEAK_FUNC(sub_824E6418);
PPC_FUNC_IMPL(__imp__sub_824E6418) {
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
	// beq cr6,0x824e6464
	if (cr6.eq) goto loc_824E6464;
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
	// bl 0x824ccaa8
	sub_824CCAA8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x824e6468
	if (!cr6.lt) goto loc_824E6468;
loc_824E6464:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_824E6468:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824E6478"))) PPC_WEAK_FUNC(sub_824E6478);
PPC_FUNC_IMPL(__imp__sub_824E6478) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E647C"))) PPC_WEAK_FUNC(sub_824E647C);
PPC_FUNC_IMPL(__imp__sub_824E647C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E6480"))) PPC_WEAK_FUNC(sub_824E6480);
PPC_FUNC_IMPL(__imp__sub_824E6480) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dcb68
	sub_824DCB68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E6494"))) PPC_WEAK_FUNC(sub_824E6494);
PPC_FUNC_IMPL(__imp__sub_824E6494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E6498"))) PPC_WEAK_FUNC(sub_824E6498);
PPC_FUNC_IMPL(__imp__sub_824E6498) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dcbf8
	sub_824DCBF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E64AC"))) PPC_WEAK_FUNC(sub_824E64AC);
PPC_FUNC_IMPL(__imp__sub_824E64AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E64B0"))) PPC_WEAK_FUNC(sub_824E64B0);
PPC_FUNC_IMPL(__imp__sub_824E64B0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dcca0
	sub_824DCCA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E64C4"))) PPC_WEAK_FUNC(sub_824E64C4);
PPC_FUNC_IMPL(__imp__sub_824E64C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E64C8"))) PPC_WEAK_FUNC(sub_824E64C8);
PPC_FUNC_IMPL(__imp__sub_824E64C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_824E64D4"))) PPC_WEAK_FUNC(sub_824E64D4);
PPC_FUNC_IMPL(__imp__sub_824E64D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e0b60
	sub_824E0B60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E64D8"))) PPC_WEAK_FUNC(sub_824E64D8);
PPC_FUNC_IMPL(__imp__sub_824E64D8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824dcd80
	sub_824DCD80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E64EC"))) PPC_WEAK_FUNC(sub_824E64EC);
PPC_FUNC_IMPL(__imp__sub_824E64EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E64F0"))) PPC_WEAK_FUNC(sub_824E64F0);
PPC_FUNC_IMPL(__imp__sub_824E64F0) {
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
	// beq cr6,0x824e653c
	if (cr6.eq) goto loc_824E653C;
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
	// bl 0x824ccb98
	sub_824CCB98(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x824e6540
	if (!cr6.lt) goto loc_824E6540;
loc_824E653C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_824E6540:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824E6550"))) PPC_WEAK_FUNC(sub_824E6550);
PPC_FUNC_IMPL(__imp__sub_824E6550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E6554"))) PPC_WEAK_FUNC(sub_824E6554);
PPC_FUNC_IMPL(__imp__sub_824E6554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E6558"))) PPC_WEAK_FUNC(sub_824E6558);
PPC_FUNC_IMPL(__imp__sub_824E6558) {
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
	// beq cr6,0x824e65a4
	if (cr6.eq) goto loc_824E65A4;
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
	// bl 0x824ccc88
	sub_824CCC88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x824e65a8
	if (!cr6.lt) goto loc_824E65A8;
loc_824E65A4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_824E65A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824E65B8"))) PPC_WEAK_FUNC(sub_824E65B8);
PPC_FUNC_IMPL(__imp__sub_824E65B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E65BC"))) PPC_WEAK_FUNC(sub_824E65BC);
PPC_FUNC_IMPL(__imp__sub_824E65BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E65C0"))) PPC_WEAK_FUNC(sub_824E65C0);
PPC_FUNC_IMPL(__imp__sub_824E65C0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_824E65CC"))) PPC_WEAK_FUNC(sub_824E65CC);
PPC_FUNC_IMPL(__imp__sub_824E65CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e5148
	sub_824E5148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E65D0"))) PPC_WEAK_FUNC(sub_824E65D0);
PPC_FUNC_IMPL(__imp__sub_824E65D0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_824E65DC"))) PPC_WEAK_FUNC(sub_824E65DC);
PPC_FUNC_IMPL(__imp__sub_824E65DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e5208
	sub_824E5208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824E65E0"))) PPC_WEAK_FUNC(sub_824E65E0);
PPC_FUNC_IMPL(__imp__sub_824E65E0) {
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
	// blt cr6,0x824e6664
	if (cr6.lt) goto loc_824E6664;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_824E6664:
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
	// bl 0x824e0bf0
	sub_824E0BF0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0bf0
	sub_824E0BF0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0bf0
	sub_824E0BF0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_824E66D0"))) PPC_WEAK_FUNC(sub_824E66D0);
PPC_FUNC_IMPL(__imp__sub_824E66D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824E66D4"))) PPC_WEAK_FUNC(sub_824E66D4);
PPC_FUNC_IMPL(__imp__sub_824E66D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E66D8"))) PPC_WEAK_FUNC(sub_824E66D8);
PPC_FUNC_IMPL(__imp__sub_824E66D8) {
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
	// blt cr6,0x824e675c
	if (cr6.lt) goto loc_824E675C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_824E675C:
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
	// bl 0x824e0bf0
	sub_824E0BF0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0bf0
	sub_824E0BF0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0bf0
	sub_824E0BF0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0bf0
	sub_824E0BF0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0bf0
	sub_824E0BF0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0bf0
	sub_824E0BF0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_824E67F8"))) PPC_WEAK_FUNC(sub_824E67F8);
PPC_FUNC_IMPL(__imp__sub_824E67F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824E67FC"))) PPC_WEAK_FUNC(sub_824E67FC);
PPC_FUNC_IMPL(__imp__sub_824E67FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E6800"))) PPC_WEAK_FUNC(sub_824E6800);
PPC_FUNC_IMPL(__imp__sub_824E6800) {
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
	// blt cr6,0x824e6884
	if (cr6.lt) goto loc_824E6884;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_824E6884:
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
	// bl 0x824e0bf0
	sub_824E0BF0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0bf0
	sub_824E0BF0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0bf0
	sub_824E0BF0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_824E68F0"))) PPC_WEAK_FUNC(sub_824E68F0);
PPC_FUNC_IMPL(__imp__sub_824E68F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824E68F4"))) PPC_WEAK_FUNC(sub_824E68F4);
PPC_FUNC_IMPL(__imp__sub_824E68F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E68F8"))) PPC_WEAK_FUNC(sub_824E68F8);
PPC_FUNC_IMPL(__imp__sub_824E68F8) {
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
	// blt cr6,0x824e6978
	if (cr6.lt) goto loc_824E6978;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_824E6978:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// addi r4,r11,2716
	ctx.r4.s64 = r11.s64 + 2716;
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

__attribute__((alias("__imp__sub_824E69A4"))) PPC_WEAK_FUNC(sub_824E69A4);
PPC_FUNC_IMPL(__imp__sub_824E69A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824E69A8"))) PPC_WEAK_FUNC(sub_824E69A8);
PPC_FUNC_IMPL(__imp__sub_824E69A8) {
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
	// blt cr6,0x824e6a28
	if (cr6.lt) goto loc_824E6A28;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_824E6A28:
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

__attribute__((alias("__imp__sub_824E6A54"))) PPC_WEAK_FUNC(sub_824E6A54);
PPC_FUNC_IMPL(__imp__sub_824E6A54) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824E6A58"))) PPC_WEAK_FUNC(sub_824E6A58);
PPC_FUNC_IMPL(__imp__sub_824E6A58) {
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
	// blt cr6,0x824e6adc
	if (cr6.lt) goto loc_824E6ADC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_824E6ADC:
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

__attribute__((alias("__imp__sub_824E6B18"))) PPC_WEAK_FUNC(sub_824E6B18);
PPC_FUNC_IMPL(__imp__sub_824E6B18) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824E6B1C"))) PPC_WEAK_FUNC(sub_824E6B1C);
PPC_FUNC_IMPL(__imp__sub_824E6B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824E6B20"))) PPC_WEAK_FUNC(sub_824E6B20);
PPC_FUNC_IMPL(__imp__sub_824E6B20) {
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
	// bne cr6,0x824e6b68
	if (!cr6.eq) goto loc_824E6B68;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e6b60
	if (cr0.eq) goto loc_824E6B60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E6B60:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e6b6c
	goto loc_824E6B6C;
loc_824E6B68:
	// li r11,0
	r11.s64 = 0;
loc_824E6B6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,2836
	ctx.r7.s64 = ctx.r10.s64 + 2836;
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

__attribute__((alias("__imp__sub_824E6B9C"))) PPC_WEAK_FUNC(sub_824E6B9C);
PPC_FUNC_IMPL(__imp__sub_824E6B9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E6BA0"))) PPC_WEAK_FUNC(sub_824E6BA0);
PPC_FUNC_IMPL(__imp__sub_824E6BA0) {
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
	// bne cr6,0x824e6be8
	if (!cr6.eq) goto loc_824E6BE8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e6be0
	if (cr0.eq) goto loc_824E6BE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E6BE0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e6bec
	goto loc_824E6BEC;
loc_824E6BE8:
	// li r11,0
	r11.s64 = 0;
loc_824E6BEC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,2844
	ctx.r7.s64 = ctx.r10.s64 + 2844;
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

__attribute__((alias("__imp__sub_824E6C1C"))) PPC_WEAK_FUNC(sub_824E6C1C);
PPC_FUNC_IMPL(__imp__sub_824E6C1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E6C20"))) PPC_WEAK_FUNC(sub_824E6C20);
PPC_FUNC_IMPL(__imp__sub_824E6C20) {
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
	// bne cr6,0x824e6c68
	if (!cr6.eq) goto loc_824E6C68;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e6c60
	if (cr0.eq) goto loc_824E6C60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E6C60:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e6c6c
	goto loc_824E6C6C;
loc_824E6C68:
	// li r11,0
	r11.s64 = 0;
loc_824E6C6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,2852
	ctx.r7.s64 = ctx.r10.s64 + 2852;
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

__attribute__((alias("__imp__sub_824E6C9C"))) PPC_WEAK_FUNC(sub_824E6C9C);
PPC_FUNC_IMPL(__imp__sub_824E6C9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E6CA0"))) PPC_WEAK_FUNC(sub_824E6CA0);
PPC_FUNC_IMPL(__imp__sub_824E6CA0) {
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
	// bne cr6,0x824e6ce8
	if (!cr6.eq) goto loc_824E6CE8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e6ce0
	if (cr0.eq) goto loc_824E6CE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E6CE0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e6cec
	goto loc_824E6CEC;
loc_824E6CE8:
	// li r11,0
	r11.s64 = 0;
loc_824E6CEC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,2860
	ctx.r7.s64 = ctx.r10.s64 + 2860;
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

__attribute__((alias("__imp__sub_824E6D1C"))) PPC_WEAK_FUNC(sub_824E6D1C);
PPC_FUNC_IMPL(__imp__sub_824E6D1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E6D20"))) PPC_WEAK_FUNC(sub_824E6D20);
PPC_FUNC_IMPL(__imp__sub_824E6D20) {
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
	// bne cr6,0x824e6d68
	if (!cr6.eq) goto loc_824E6D68;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e6d60
	if (cr0.eq) goto loc_824E6D60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E6D60:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e6d6c
	goto loc_824E6D6C;
loc_824E6D68:
	// li r11,0
	r11.s64 = 0;
loc_824E6D6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,2868
	ctx.r7.s64 = ctx.r10.s64 + 2868;
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

__attribute__((alias("__imp__sub_824E6D9C"))) PPC_WEAK_FUNC(sub_824E6D9C);
PPC_FUNC_IMPL(__imp__sub_824E6D9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E6DA0"))) PPC_WEAK_FUNC(sub_824E6DA0);
PPC_FUNC_IMPL(__imp__sub_824E6DA0) {
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
	// bne cr6,0x824e6de8
	if (!cr6.eq) goto loc_824E6DE8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e6de0
	if (cr0.eq) goto loc_824E6DE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E6DE0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e6dec
	goto loc_824E6DEC;
loc_824E6DE8:
	// li r11,0
	r11.s64 = 0;
loc_824E6DEC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,2876
	ctx.r7.s64 = ctx.r10.s64 + 2876;
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

__attribute__((alias("__imp__sub_824E6E1C"))) PPC_WEAK_FUNC(sub_824E6E1C);
PPC_FUNC_IMPL(__imp__sub_824E6E1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E6E20"))) PPC_WEAK_FUNC(sub_824E6E20);
PPC_FUNC_IMPL(__imp__sub_824E6E20) {
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
	// bne cr6,0x824e6e68
	if (!cr6.eq) goto loc_824E6E68;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e6e60
	if (cr0.eq) goto loc_824E6E60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E6E60:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e6e6c
	goto loc_824E6E6C;
loc_824E6E68:
	// li r11,0
	r11.s64 = 0;
loc_824E6E6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,2884
	ctx.r7.s64 = ctx.r10.s64 + 2884;
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

__attribute__((alias("__imp__sub_824E6E9C"))) PPC_WEAK_FUNC(sub_824E6E9C);
PPC_FUNC_IMPL(__imp__sub_824E6E9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E6EA0"))) PPC_WEAK_FUNC(sub_824E6EA0);
PPC_FUNC_IMPL(__imp__sub_824E6EA0) {
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
	// bne cr6,0x824e6ee8
	if (!cr6.eq) goto loc_824E6EE8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e6ee0
	if (cr0.eq) goto loc_824E6EE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E6EE0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e6eec
	goto loc_824E6EEC;
loc_824E6EE8:
	// li r11,0
	r11.s64 = 0;
loc_824E6EEC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,2892
	ctx.r7.s64 = ctx.r10.s64 + 2892;
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

__attribute__((alias("__imp__sub_824E6F1C"))) PPC_WEAK_FUNC(sub_824E6F1C);
PPC_FUNC_IMPL(__imp__sub_824E6F1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E6F20"))) PPC_WEAK_FUNC(sub_824E6F20);
PPC_FUNC_IMPL(__imp__sub_824E6F20) {
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
	// bne cr6,0x824e6f68
	if (!cr6.eq) goto loc_824E6F68;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e6f60
	if (cr0.eq) goto loc_824E6F60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E6F60:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e6f6c
	goto loc_824E6F6C;
loc_824E6F68:
	// li r11,0
	r11.s64 = 0;
loc_824E6F6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,2900
	ctx.r7.s64 = ctx.r10.s64 + 2900;
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

__attribute__((alias("__imp__sub_824E6F9C"))) PPC_WEAK_FUNC(sub_824E6F9C);
PPC_FUNC_IMPL(__imp__sub_824E6F9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E6FA0"))) PPC_WEAK_FUNC(sub_824E6FA0);
PPC_FUNC_IMPL(__imp__sub_824E6FA0) {
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
	// bne cr6,0x824e6fe8
	if (!cr6.eq) goto loc_824E6FE8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e6fe0
	if (cr0.eq) goto loc_824E6FE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E6FE0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e6fec
	goto loc_824E6FEC;
loc_824E6FE8:
	// li r11,0
	r11.s64 = 0;
loc_824E6FEC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,2908
	ctx.r7.s64 = ctx.r10.s64 + 2908;
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

__attribute__((alias("__imp__sub_824E701C"))) PPC_WEAK_FUNC(sub_824E701C);
PPC_FUNC_IMPL(__imp__sub_824E701C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E7020"))) PPC_WEAK_FUNC(sub_824E7020);
PPC_FUNC_IMPL(__imp__sub_824E7020) {
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
	// bne cr6,0x824e7068
	if (!cr6.eq) goto loc_824E7068;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e7060
	if (cr0.eq) goto loc_824E7060;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E7060:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e706c
	goto loc_824E706C;
loc_824E7068:
	// li r11,0
	r11.s64 = 0;
loc_824E706C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,2916
	ctx.r7.s64 = ctx.r10.s64 + 2916;
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

__attribute__((alias("__imp__sub_824E709C"))) PPC_WEAK_FUNC(sub_824E709C);
PPC_FUNC_IMPL(__imp__sub_824E709C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E70A0"))) PPC_WEAK_FUNC(sub_824E70A0);
PPC_FUNC_IMPL(__imp__sub_824E70A0) {
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
	// bne cr6,0x824e70e8
	if (!cr6.eq) goto loc_824E70E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e70e0
	if (cr0.eq) goto loc_824E70E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E70E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e70ec
	goto loc_824E70EC;
loc_824E70E8:
	// li r11,0
	r11.s64 = 0;
loc_824E70EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,2924
	ctx.r7.s64 = ctx.r10.s64 + 2924;
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

__attribute__((alias("__imp__sub_824E711C"))) PPC_WEAK_FUNC(sub_824E711C);
PPC_FUNC_IMPL(__imp__sub_824E711C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E7120"))) PPC_WEAK_FUNC(sub_824E7120);
PPC_FUNC_IMPL(__imp__sub_824E7120) {
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
	// bne cr6,0x824e7168
	if (!cr6.eq) goto loc_824E7168;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e7160
	if (cr0.eq) goto loc_824E7160;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E7160:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e716c
	goto loc_824E716C;
loc_824E7168:
	// li r11,0
	r11.s64 = 0;
loc_824E716C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,2932
	ctx.r7.s64 = ctx.r10.s64 + 2932;
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

__attribute__((alias("__imp__sub_824E719C"))) PPC_WEAK_FUNC(sub_824E719C);
PPC_FUNC_IMPL(__imp__sub_824E719C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E71A0"))) PPC_WEAK_FUNC(sub_824E71A0);
PPC_FUNC_IMPL(__imp__sub_824E71A0) {
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
	// bne cr6,0x824e71e8
	if (!cr6.eq) goto loc_824E71E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e71e0
	if (cr0.eq) goto loc_824E71E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E71E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e71ec
	goto loc_824E71EC;
loc_824E71E8:
	// li r11,0
	r11.s64 = 0;
loc_824E71EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,2940
	ctx.r7.s64 = ctx.r10.s64 + 2940;
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

__attribute__((alias("__imp__sub_824E721C"))) PPC_WEAK_FUNC(sub_824E721C);
PPC_FUNC_IMPL(__imp__sub_824E721C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E7220"))) PPC_WEAK_FUNC(sub_824E7220);
PPC_FUNC_IMPL(__imp__sub_824E7220) {
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
	// bne cr6,0x824e7268
	if (!cr6.eq) goto loc_824E7268;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e7260
	if (cr0.eq) goto loc_824E7260;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E7260:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e726c
	goto loc_824E726C;
loc_824E7268:
	// li r11,0
	r11.s64 = 0;
loc_824E726C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,2948
	ctx.r7.s64 = ctx.r10.s64 + 2948;
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

__attribute__((alias("__imp__sub_824E729C"))) PPC_WEAK_FUNC(sub_824E729C);
PPC_FUNC_IMPL(__imp__sub_824E729C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E72A0"))) PPC_WEAK_FUNC(sub_824E72A0);
PPC_FUNC_IMPL(__imp__sub_824E72A0) {
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
	// bne cr6,0x824e72e8
	if (!cr6.eq) goto loc_824E72E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e72e0
	if (cr0.eq) goto loc_824E72E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E72E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e72ec
	goto loc_824E72EC;
loc_824E72E8:
	// li r11,0
	r11.s64 = 0;
loc_824E72EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,2956
	ctx.r7.s64 = ctx.r10.s64 + 2956;
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

__attribute__((alias("__imp__sub_824E731C"))) PPC_WEAK_FUNC(sub_824E731C);
PPC_FUNC_IMPL(__imp__sub_824E731C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E7320"))) PPC_WEAK_FUNC(sub_824E7320);
PPC_FUNC_IMPL(__imp__sub_824E7320) {
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
	// bne cr6,0x824e7368
	if (!cr6.eq) goto loc_824E7368;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e7360
	if (cr0.eq) goto loc_824E7360;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E7360:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e736c
	goto loc_824E736C;
loc_824E7368:
	// li r11,0
	r11.s64 = 0;
loc_824E736C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,2964
	ctx.r7.s64 = ctx.r10.s64 + 2964;
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

__attribute__((alias("__imp__sub_824E739C"))) PPC_WEAK_FUNC(sub_824E739C);
PPC_FUNC_IMPL(__imp__sub_824E739C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E73A0"))) PPC_WEAK_FUNC(sub_824E73A0);
PPC_FUNC_IMPL(__imp__sub_824E73A0) {
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
	// bne cr6,0x824e73e8
	if (!cr6.eq) goto loc_824E73E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e73e0
	if (cr0.eq) goto loc_824E73E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E73E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e73ec
	goto loc_824E73EC;
loc_824E73E8:
	// li r11,0
	r11.s64 = 0;
loc_824E73EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,2972
	ctx.r7.s64 = ctx.r10.s64 + 2972;
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

__attribute__((alias("__imp__sub_824E741C"))) PPC_WEAK_FUNC(sub_824E741C);
PPC_FUNC_IMPL(__imp__sub_824E741C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E7420"))) PPC_WEAK_FUNC(sub_824E7420);
PPC_FUNC_IMPL(__imp__sub_824E7420) {
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
	// bne cr6,0x824e7468
	if (!cr6.eq) goto loc_824E7468;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e7460
	if (cr0.eq) goto loc_824E7460;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E7460:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e746c
	goto loc_824E746C;
loc_824E7468:
	// li r11,0
	r11.s64 = 0;
loc_824E746C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,2980
	ctx.r7.s64 = ctx.r10.s64 + 2980;
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

__attribute__((alias("__imp__sub_824E749C"))) PPC_WEAK_FUNC(sub_824E749C);
PPC_FUNC_IMPL(__imp__sub_824E749C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E74A0"))) PPC_WEAK_FUNC(sub_824E74A0);
PPC_FUNC_IMPL(__imp__sub_824E74A0) {
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
	// bne cr6,0x824e74e8
	if (!cr6.eq) goto loc_824E74E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e74e0
	if (cr0.eq) goto loc_824E74E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E74E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e74ec
	goto loc_824E74EC;
loc_824E74E8:
	// li r11,0
	r11.s64 = 0;
loc_824E74EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,2988
	ctx.r7.s64 = ctx.r10.s64 + 2988;
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

__attribute__((alias("__imp__sub_824E751C"))) PPC_WEAK_FUNC(sub_824E751C);
PPC_FUNC_IMPL(__imp__sub_824E751C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E7520"))) PPC_WEAK_FUNC(sub_824E7520);
PPC_FUNC_IMPL(__imp__sub_824E7520) {
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
	// bne cr6,0x824e7568
	if (!cr6.eq) goto loc_824E7568;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e7560
	if (cr0.eq) goto loc_824E7560;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E7560:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e756c
	goto loc_824E756C;
loc_824E7568:
	// li r11,0
	r11.s64 = 0;
loc_824E756C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,2996
	ctx.r7.s64 = ctx.r10.s64 + 2996;
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

__attribute__((alias("__imp__sub_824E759C"))) PPC_WEAK_FUNC(sub_824E759C);
PPC_FUNC_IMPL(__imp__sub_824E759C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E75A0"))) PPC_WEAK_FUNC(sub_824E75A0);
PPC_FUNC_IMPL(__imp__sub_824E75A0) {
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
	// bne cr6,0x824e75e8
	if (!cr6.eq) goto loc_824E75E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e75e0
	if (cr0.eq) goto loc_824E75E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E75E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e75ec
	goto loc_824E75EC;
loc_824E75E8:
	// li r11,0
	r11.s64 = 0;
loc_824E75EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3004
	ctx.r7.s64 = ctx.r10.s64 + 3004;
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

__attribute__((alias("__imp__sub_824E761C"))) PPC_WEAK_FUNC(sub_824E761C);
PPC_FUNC_IMPL(__imp__sub_824E761C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E7620"))) PPC_WEAK_FUNC(sub_824E7620);
PPC_FUNC_IMPL(__imp__sub_824E7620) {
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
	// bne cr6,0x824e7668
	if (!cr6.eq) goto loc_824E7668;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e7660
	if (cr0.eq) goto loc_824E7660;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E7660:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e766c
	goto loc_824E766C;
loc_824E7668:
	// li r11,0
	r11.s64 = 0;
loc_824E766C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3012
	ctx.r7.s64 = ctx.r10.s64 + 3012;
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

__attribute__((alias("__imp__sub_824E769C"))) PPC_WEAK_FUNC(sub_824E769C);
PPC_FUNC_IMPL(__imp__sub_824E769C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E76A0"))) PPC_WEAK_FUNC(sub_824E76A0);
PPC_FUNC_IMPL(__imp__sub_824E76A0) {
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
	// bne cr6,0x824e76e8
	if (!cr6.eq) goto loc_824E76E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e76e0
	if (cr0.eq) goto loc_824E76E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E76E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e76ec
	goto loc_824E76EC;
loc_824E76E8:
	// li r11,0
	r11.s64 = 0;
loc_824E76EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3020
	ctx.r7.s64 = ctx.r10.s64 + 3020;
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

__attribute__((alias("__imp__sub_824E771C"))) PPC_WEAK_FUNC(sub_824E771C);
PPC_FUNC_IMPL(__imp__sub_824E771C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E7720"))) PPC_WEAK_FUNC(sub_824E7720);
PPC_FUNC_IMPL(__imp__sub_824E7720) {
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
	// bne cr6,0x824e7768
	if (!cr6.eq) goto loc_824E7768;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e7760
	if (cr0.eq) goto loc_824E7760;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E7760:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e776c
	goto loc_824E776C;
loc_824E7768:
	// li r11,0
	r11.s64 = 0;
loc_824E776C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3028
	ctx.r7.s64 = ctx.r10.s64 + 3028;
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

__attribute__((alias("__imp__sub_824E779C"))) PPC_WEAK_FUNC(sub_824E779C);
PPC_FUNC_IMPL(__imp__sub_824E779C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E77A0"))) PPC_WEAK_FUNC(sub_824E77A0);
PPC_FUNC_IMPL(__imp__sub_824E77A0) {
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
	// bne cr6,0x824e77e8
	if (!cr6.eq) goto loc_824E77E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e77e0
	if (cr0.eq) goto loc_824E77E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E77E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e77ec
	goto loc_824E77EC;
loc_824E77E8:
	// li r11,0
	r11.s64 = 0;
loc_824E77EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3036
	ctx.r7.s64 = ctx.r10.s64 + 3036;
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

__attribute__((alias("__imp__sub_824E781C"))) PPC_WEAK_FUNC(sub_824E781C);
PPC_FUNC_IMPL(__imp__sub_824E781C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E7820"))) PPC_WEAK_FUNC(sub_824E7820);
PPC_FUNC_IMPL(__imp__sub_824E7820) {
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
	// bne cr6,0x824e7868
	if (!cr6.eq) goto loc_824E7868;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e7860
	if (cr0.eq) goto loc_824E7860;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E7860:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e786c
	goto loc_824E786C;
loc_824E7868:
	// li r11,0
	r11.s64 = 0;
loc_824E786C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3044
	ctx.r7.s64 = ctx.r10.s64 + 3044;
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

__attribute__((alias("__imp__sub_824E789C"))) PPC_WEAK_FUNC(sub_824E789C);
PPC_FUNC_IMPL(__imp__sub_824E789C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E78A0"))) PPC_WEAK_FUNC(sub_824E78A0);
PPC_FUNC_IMPL(__imp__sub_824E78A0) {
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
	// bne cr6,0x824e78e8
	if (!cr6.eq) goto loc_824E78E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e78e0
	if (cr0.eq) goto loc_824E78E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E78E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e78ec
	goto loc_824E78EC;
loc_824E78E8:
	// li r11,0
	r11.s64 = 0;
loc_824E78EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3052
	ctx.r7.s64 = ctx.r10.s64 + 3052;
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

__attribute__((alias("__imp__sub_824E791C"))) PPC_WEAK_FUNC(sub_824E791C);
PPC_FUNC_IMPL(__imp__sub_824E791C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E7920"))) PPC_WEAK_FUNC(sub_824E7920);
PPC_FUNC_IMPL(__imp__sub_824E7920) {
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
	// bne cr6,0x824e7968
	if (!cr6.eq) goto loc_824E7968;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e7960
	if (cr0.eq) goto loc_824E7960;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E7960:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e796c
	goto loc_824E796C;
loc_824E7968:
	// li r11,0
	r11.s64 = 0;
loc_824E796C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3060
	ctx.r7.s64 = ctx.r10.s64 + 3060;
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

__attribute__((alias("__imp__sub_824E799C"))) PPC_WEAK_FUNC(sub_824E799C);
PPC_FUNC_IMPL(__imp__sub_824E799C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E79A0"))) PPC_WEAK_FUNC(sub_824E79A0);
PPC_FUNC_IMPL(__imp__sub_824E79A0) {
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
	// bne cr6,0x824e79e8
	if (!cr6.eq) goto loc_824E79E8;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e79e0
	if (cr0.eq) goto loc_824E79E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E79E0:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e79ec
	goto loc_824E79EC;
loc_824E79E8:
	// li r11,0
	r11.s64 = 0;
loc_824E79EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3068
	ctx.r7.s64 = ctx.r10.s64 + 3068;
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

__attribute__((alias("__imp__sub_824E7A1C"))) PPC_WEAK_FUNC(sub_824E7A1C);
PPC_FUNC_IMPL(__imp__sub_824E7A1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824E7A20"))) PPC_WEAK_FUNC(sub_824E7A20);
PPC_FUNC_IMPL(__imp__sub_824E7A20) {
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
	// bne cr6,0x824e7a68
	if (!cr6.eq) goto loc_824E7A68;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824e7a60
	if (cr0.eq) goto loc_824E7A60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824E7A60:
	// li r11,1
	r11.s64 = 1;
	// b 0x824e7a6c
	goto loc_824E7A6C;
loc_824E7A68:
	// li r11,0
	r11.s64 = 0;
loc_824E7A6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,3076
	ctx.r7.s64 = ctx.r10.s64 + 3076;
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

