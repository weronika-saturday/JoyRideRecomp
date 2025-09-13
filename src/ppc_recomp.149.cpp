#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8256B688"))) PPC_WEAK_FUNC(sub_8256B688);
PPC_FUNC_IMPL(__imp__sub_8256B688) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B68C"))) PPC_WEAK_FUNC(sub_8256B68C);
PPC_FUNC_IMPL(__imp__sub_8256B68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256B690"))) PPC_WEAK_FUNC(sub_8256B690);
PPC_FUNC_IMPL(__imp__sub_8256B690) {
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
	// bl 0x8256b5c0
	sub_8256B5C0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8256b6c8
	if (cr6.eq) goto loc_8256B6C8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8256B6C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256B6DC"))) PPC_WEAK_FUNC(sub_8256B6DC);
PPC_FUNC_IMPL(__imp__sub_8256B6DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B6E0"))) PPC_WEAK_FUNC(sub_8256B6E0);
PPC_FUNC_IMPL(__imp__sub_8256B6E0) {
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
	// bl 0x8256b628
	sub_8256B628(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8256b718
	if (cr6.eq) goto loc_8256B718;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8256B718:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256B72C"))) PPC_WEAK_FUNC(sub_8256B72C);
PPC_FUNC_IMPL(__imp__sub_8256B72C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B730"))) PPC_WEAK_FUNC(sub_8256B730);
PPC_FUNC_IMPL(__imp__sub_8256B730) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// addi r9,r11,-22140
	ctx.r9.s64 = r11.s64 + -22140;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822dec68
	sub_822DEC68(ctx, base);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r30,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r30.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r30.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r30,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r30.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r30,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r30.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r30,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, r30.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r30,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stb r30,56(r31)
	PPC_STORE_U8(r31.u32 + 56, r30.u8);
	// stb r30,57(r31)
	PPC_STORE_U8(r31.u32 + 57, r30.u8);
	// stb r30,58(r31)
	PPC_STORE_U8(r31.u32 + 58, r30.u8);
	// stw r6,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256B7EC"))) PPC_WEAK_FUNC(sub_8256B7EC);
PPC_FUNC_IMPL(__imp__sub_8256B7EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B7F0"))) PPC_WEAK_FUNC(sub_8256B7F0);
PPC_FUNC_IMPL(__imp__sub_8256B7F0) {
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
	// bne cr6,0x8256b81c
	if (!cr6.eq) goto loc_8256B81C;
	// bl 0x826aca08
	sub_826ACA08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8256B81C:
	// bl 0x826a24b0
	sub_826A24B0(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r4,r11,-5260
	ctx.r4.s64 = r11.s64 + -5260;
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
	// beq cr6,0x8256b858
	if (cr6.eq) goto loc_8256B858;
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
loc_8256B858:
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

__attribute__((alias("__imp__sub_8256B878"))) PPC_WEAK_FUNC(sub_8256B878);
PPC_FUNC_IMPL(__imp__sub_8256B878) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8256B87C"))) PPC_WEAK_FUNC(sub_8256B87C);
PPC_FUNC_IMPL(__imp__sub_8256B87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256B880"))) PPC_WEAK_FUNC(sub_8256B880);
PPC_FUNC_IMPL(__imp__sub_8256B880) {
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
	// beq cr6,0x8256b8d4
	if (cr6.eq) goto loc_8256B8D4;
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
	// bl 0x8256b290
	sub_8256B290(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8256b8dc
	if (!cr6.lt) goto loc_8256B8DC;
loc_8256B8D4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8256b8f8
	goto loc_8256B8F8;
loc_8256B8DC:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x8256b8f8
	if (!cr6.eq) goto loc_8256B8F8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8256B8F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256B90C"))) PPC_WEAK_FUNC(sub_8256B90C);
PPC_FUNC_IMPL(__imp__sub_8256B90C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B910"))) PPC_WEAK_FUNC(sub_8256B910);
PPC_FUNC_IMPL(__imp__sub_8256B910) {
	PPC_FUNC_PROLOGUE();
	// b 0x8256a518
	sub_8256A518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256B914"))) PPC_WEAK_FUNC(sub_8256B914);
PPC_FUNC_IMPL(__imp__sub_8256B914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256B918"))) PPC_WEAK_FUNC(sub_8256B918);
PPC_FUNC_IMPL(__imp__sub_8256B918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256b940
	if (cr6.eq) goto loc_8256B940;
	// bl 0x8256a518
	sub_8256A518(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8256B940:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256B950"))) PPC_WEAK_FUNC(sub_8256B950);
PPC_FUNC_IMPL(__imp__sub_8256B950) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B954"))) PPC_WEAK_FUNC(sub_8256B954);
PPC_FUNC_IMPL(__imp__sub_8256B954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256B958"))) PPC_WEAK_FUNC(sub_8256B958);
PPC_FUNC_IMPL(__imp__sub_8256B958) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r4,-22208(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + -22208);
	// bl 0x8256b140
	sub_8256B140(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8256b984
	if (!cr6.lt) goto loc_8256B984;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8256B984:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8256B990"))) PPC_WEAK_FUNC(sub_8256B990);
PPC_FUNC_IMPL(__imp__sub_8256B990) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B994"))) PPC_WEAK_FUNC(sub_8256B994);
PPC_FUNC_IMPL(__imp__sub_8256B994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256B998"))) PPC_WEAK_FUNC(sub_8256B998);
PPC_FUNC_IMPL(__imp__sub_8256B998) {
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
	// bne cr6,0x8256b9e0
	if (!cr6.eq) goto loc_8256B9E0;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256b9d8
	if (cr0.eq) goto loc_8256B9D8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8256B9D8:
	// li r11,1
	r11.s64 = 1;
	// b 0x8256b9e4
	goto loc_8256B9E4;
loc_8256B9E0:
	// li r11,0
	r11.s64 = 0;
loc_8256B9E4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-22132
	ctx.r7.s64 = ctx.r10.s64 + -22132;
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

__attribute__((alias("__imp__sub_8256BA14"))) PPC_WEAK_FUNC(sub_8256BA14);
PPC_FUNC_IMPL(__imp__sub_8256BA14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256BA18"))) PPC_WEAK_FUNC(sub_8256BA18);
PPC_FUNC_IMPL(__imp__sub_8256BA18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_8256BA24"))) PPC_WEAK_FUNC(sub_8256BA24);
PPC_FUNC_IMPL(__imp__sub_8256BA24) {
	PPC_FUNC_PROLOGUE();
	// b 0x8256b880
	sub_8256B880(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256BA28"))) PPC_WEAK_FUNC(sub_8256BA28);
PPC_FUNC_IMPL(__imp__sub_8256BA28) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826ac6b0
	sub_826AC6B0(ctx, base);
	// addi r8,r3,-1
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r28,r7,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8256bac8
	if (cr6.eq) goto loc_8256BAC8;
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
	// addi r4,r10,-5260
	ctx.r4.s64 = ctx.r10.s64 + -5260;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x8256bac8
	if (!cr6.eq) goto loc_8256BAC8;
	// lis r11,-32169
	r11.s64 = -2108227584;
	// addi r10,r11,-18160
	ctx.r10.s64 = r11.s64 + -18160;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_8256BAC8:
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
	// beq cr6,0x8256baf8
	if (cr6.eq) goto loc_8256BAF8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8256BAF8:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8256BB08"))) PPC_WEAK_FUNC(sub_8256BB08);
PPC_FUNC_IMPL(__imp__sub_8256BB08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8256BB0C"))) PPC_WEAK_FUNC(sub_8256BB0C);
PPC_FUNC_IMPL(__imp__sub_8256BB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256BB10"))) PPC_WEAK_FUNC(sub_8256BB10);
PPC_FUNC_IMPL(__imp__sub_8256BB10) {
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
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r10,-18152
	ctx.r10.s64 = ctx.r10.s64 + -18152;
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
	// addi r4,r7,-5260
	ctx.r4.s64 = ctx.r7.s64 + -5260;
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

__attribute__((alias("__imp__sub_8256BB84"))) PPC_WEAK_FUNC(sub_8256BB84);
PPC_FUNC_IMPL(__imp__sub_8256BB84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256BB88"))) PPC_WEAK_FUNC(sub_8256BB88);
PPC_FUNC_IMPL(__imp__sub_8256BB88) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r10,2716
	ctx.r4.s64 = ctx.r10.s64 + 2716;
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

__attribute__((alias("__imp__sub_8256BBD4"))) PPC_WEAK_FUNC(sub_8256BBD4);
PPC_FUNC_IMPL(__imp__sub_8256BBD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256BBD8"))) PPC_WEAK_FUNC(sub_8256BBD8);
PPC_FUNC_IMPL(__imp__sub_8256BBD8) {
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
	// bne cr6,0x8256bc20
	if (!cr6.eq) goto loc_8256BC20;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256bc18
	if (cr0.eq) goto loc_8256BC18;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8256BC18:
	// li r11,1
	r11.s64 = 1;
	// b 0x8256bc24
	goto loc_8256BC24;
loc_8256BC20:
	// li r11,0
	r11.s64 = 0;
loc_8256BC24:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-22124
	ctx.r7.s64 = ctx.r10.s64 + -22124;
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

__attribute__((alias("__imp__sub_8256BC54"))) PPC_WEAK_FUNC(sub_8256BC54);
PPC_FUNC_IMPL(__imp__sub_8256BC54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256BC58"))) PPC_WEAK_FUNC(sub_8256BC58);
PPC_FUNC_IMPL(__imp__sub_8256BC58) {
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
	// beq cr6,0x8256bce0
	if (cr6.eq) goto loc_8256BCE0;
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
	// addi r4,r10,-5260
	ctx.r4.s64 = ctx.r10.s64 + -5260;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x8256bce0
	if (!cr6.eq) goto loc_8256BCE0;
	// lis r11,-32169
	r11.s64 = -2108227584;
	// addi r10,r11,-18160
	ctx.r10.s64 = r11.s64 + -18160;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_8256BCE0:
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
	// beq cr6,0x8256bd28
	if (cr6.eq) goto loc_8256BD28;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8256BD28:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8256BD38"))) PPC_WEAK_FUNC(sub_8256BD38);
PPC_FUNC_IMPL(__imp__sub_8256BD38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8256BD3C"))) PPC_WEAK_FUNC(sub_8256BD3C);
PPC_FUNC_IMPL(__imp__sub_8256BD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256BD40"))) PPC_WEAK_FUNC(sub_8256BD40);
PPC_FUNC_IMPL(__imp__sub_8256BD40) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8256ba28
	sub_8256BA28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256BD54"))) PPC_WEAK_FUNC(sub_8256BD54);
PPC_FUNC_IMPL(__imp__sub_8256BD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256BD58"))) PPC_WEAK_FUNC(sub_8256BD58);
PPC_FUNC_IMPL(__imp__sub_8256BD58) {
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
	// bne cr6,0x8256bda0
	if (!cr6.eq) goto loc_8256BDA0;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256bd98
	if (cr0.eq) goto loc_8256BD98;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8256BD98:
	// li r11,1
	r11.s64 = 1;
	// b 0x8256bda4
	goto loc_8256BDA4;
loc_8256BDA0:
	// li r11,0
	r11.s64 = 0;
loc_8256BDA4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-22116
	ctx.r7.s64 = ctx.r10.s64 + -22116;
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

__attribute__((alias("__imp__sub_8256BDD4"))) PPC_WEAK_FUNC(sub_8256BDD4);
PPC_FUNC_IMPL(__imp__sub_8256BDD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256BDD8"))) PPC_WEAK_FUNC(sub_8256BDD8);
PPC_FUNC_IMPL(__imp__sub_8256BDD8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8256bc58
	sub_8256BC58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256BDEC"))) PPC_WEAK_FUNC(sub_8256BDEC);
PPC_FUNC_IMPL(__imp__sub_8256BDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256BDF0"))) PPC_WEAK_FUNC(sub_8256BDF0);
PPC_FUNC_IMPL(__imp__sub_8256BDF0) {
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
	// bne cr6,0x8256be38
	if (!cr6.eq) goto loc_8256BE38;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256be30
	if (cr0.eq) goto loc_8256BE30;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8256BE30:
	// li r11,1
	r11.s64 = 1;
	// b 0x8256be3c
	goto loc_8256BE3C;
loc_8256BE38:
	// li r11,0
	r11.s64 = 0;
loc_8256BE3C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-22108
	ctx.r7.s64 = ctx.r10.s64 + -22108;
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

__attribute__((alias("__imp__sub_8256BE6C"))) PPC_WEAK_FUNC(sub_8256BE6C);
PPC_FUNC_IMPL(__imp__sub_8256BE6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256BE70"))) PPC_WEAK_FUNC(sub_8256BE70);
PPC_FUNC_IMPL(__imp__sub_8256BE70) {
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
	// bl 0x824de128
	sub_824DE128(ctx, base);
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
	// bl 0x8256bbd8
	sub_8256BBD8(ctx, base);
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
	// beq cr6,0x8256bef0
	if (cr6.eq) goto loc_8256BEF0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8256beec
	if (cr6.eq) goto loc_8256BEEC;
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
loc_8256BEEC:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_8256BEF0:
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
	// bl 0x8256bd58
	sub_8256BD58(ctx, base);
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
	// beq cr6,0x8256bf44
	if (cr6.eq) goto loc_8256BF44;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8256bf40
	if (cr6.eq) goto loc_8256BF40;
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
loc_8256BF40:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_8256BF44:
	// lis r11,-32176
	r11.s64 = -2108686336;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,23376
	ctx.r10.s64 = r11.s64 + 23376;
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

__attribute__((alias("__imp__sub_8256BF70"))) PPC_WEAK_FUNC(sub_8256BF70);
PPC_FUNC_IMPL(__imp__sub_8256BF70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8256BF74"))) PPC_WEAK_FUNC(sub_8256BF74);
PPC_FUNC_IMPL(__imp__sub_8256BF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256BF78"))) PPC_WEAK_FUNC(sub_8256BF78);
PPC_FUNC_IMPL(__imp__sub_8256BF78) {
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
	// bl 0x8256b998
	sub_8256B998(ctx, base);
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
	// beq cr6,0x8256c020
	if (cr6.eq) goto loc_8256C020;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8256c01c
	if (cr6.eq) goto loc_8256C01C;
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
loc_8256C01C:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_8256C020:
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
	// bl 0x8256bdf0
	sub_8256BDF0(ctx, base);
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
	// beq cr6,0x8256c074
	if (cr6.eq) goto loc_8256C074;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8256c070
	if (cr6.eq) goto loc_8256C070;
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
loc_8256C070:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_8256C074:
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

__attribute__((alias("__imp__sub_8256C0A0"))) PPC_WEAK_FUNC(sub_8256C0A0);
PPC_FUNC_IMPL(__imp__sub_8256C0A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8256C0A4"))) PPC_WEAK_FUNC(sub_8256C0A4);
PPC_FUNC_IMPL(__imp__sub_8256C0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256C0A8"))) PPC_WEAK_FUNC(sub_8256C0A8);
PPC_FUNC_IMPL(__imp__sub_8256C0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r9,r11,-21968
	ctx.r9.s64 = r11.s64 + -21968;
	// stb r10,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r10.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_8256C0C4"))) PPC_WEAK_FUNC(sub_8256C0C4);
PPC_FUNC_IMPL(__imp__sub_8256C0C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256C0C8"))) PPC_WEAK_FUNC(sub_8256C0C8);
PPC_FUNC_IMPL(__imp__sub_8256C0C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
}

__attribute__((alias("__imp__sub_8256C0CC"))) PPC_WEAK_FUNC(sub_8256C0CC);
PPC_FUNC_IMPL(__imp__sub_8256C0CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256C0D0"))) PPC_WEAK_FUNC(sub_8256C0D0);
PPC_FUNC_IMPL(__imp__sub_8256C0D0) {
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
	// lis r29,-31970
	r29.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256c100
	if (cr6.eq) goto loc_8256C100;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256c104
	if (!cr6.eq) goto loc_8256C104;
loc_8256C100:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8256C104:
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x8250dd08
	sub_8250DD08(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bne cr6,0x8256c1a0
	if (!cr6.eq) goto loc_8256C1A0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r30,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, r30.u32);
	// lbz r9,18(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 18);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8256c134
	if (cr6.eq) goto loc_8256C134;
	// stb r30,18(r31)
	PPC_STORE_U8(r31.u32 + 18, r30.u8);
loc_8256C134:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r30,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, r30.u32);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256c15c
	if (cr6.eq) goto loc_8256C15C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256c160
	if (!cr6.eq) goto loc_8256C160;
loc_8256C15C:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8256C160:
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// bl 0x82574238
	sub_82574238(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r11,-21908
	ctx.r5.s64 = r11.s64 + -21908;
	// addi r4,r10,15972
	ctx.r4.s64 = ctx.r10.s64 + 15972;
	// addi r3,r9,16564
	ctx.r3.s64 = ctx.r9.s64 + 16564;
	// lwz r6,52(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r7,48(r6)
	PPC_STORE_U32(ctx.r6.u32 + 48, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8256C1A0:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r5,r10,-21936
	ctx.r5.s64 = ctx.r10.s64 + -21936;
	// addi r4,r9,22032
	ctx.r4.s64 = ctx.r9.s64 + 22032;
	// stw r30,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, r30.u32);
	// addi r3,r8,16564
	ctx.r3.s64 = ctx.r8.s64 + 16564;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8256C1C8"))) PPC_WEAK_FUNC(sub_8256C1C8);
PPC_FUNC_IMPL(__imp__sub_8256C1C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8256C1CC"))) PPC_WEAK_FUNC(sub_8256C1CC);
PPC_FUNC_IMPL(__imp__sub_8256C1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256C1D0"))) PPC_WEAK_FUNC(sub_8256C1D0);
PPC_FUNC_IMPL(__imp__sub_8256C1D0) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256c208
	if (cr6.eq) goto loc_8256C208;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256c20c
	if (!cr6.eq) goto loc_8256C20C;
loc_8256C208:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8256C20C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r27,92(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r30,r11,13435
	r30.s64 = r11.s64 + 13435;
	// addi r3,r10,-28228
	ctx.r3.s64 = ctx.r10.s64 + -28228;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r29,56(r9)
	PPC_STORE_U8(ctx.r9.u32 + 56, r29.u8);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stb r29,57(r8)
	PPC_STORE_U8(ctx.r8.u32 + 57, r29.u8);
	// bl 0x825102f8
	sub_825102F8(ctx, base);
	// clrlwi r7,r28,24
	ctx.r7.u64 = r28.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8256c264
	if (cr6.eq) goto loc_8256C264;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-21888
	ctx.r3.s64 = r11.s64 + -21888;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_8256C264:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,18572
	ctx.r3.s64 = r11.s64 + 18572;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8256C274"))) PPC_WEAK_FUNC(sub_8256C274);
PPC_FUNC_IMPL(__imp__sub_8256C274) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8256C278"))) PPC_WEAK_FUNC(sub_8256C278);
PPC_FUNC_IMPL(__imp__sub_8256C278) {
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
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// beq cr6,0x8256c2a0
	if (cr6.eq) goto loc_8256C2A0;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bne cr6,0x8256c2e0
	if (!cr6.eq) goto loc_8256C2E0;
loc_8256C2A0:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// li r31,0
	r31.s64 = 0;
	// stb r31,56(r11)
	PPC_STORE_U8(r11.u32 + 56, r31.u8);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256c2cc
	if (cr6.eq) goto loc_8256C2CC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256c2d0
	if (!cr6.eq) goto loc_8256C2D0;
loc_8256C2CC:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8256C2D0:
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x825102f8
	sub_825102F8(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r31,48(r11)
	PPC_STORE_U32(r11.u32 + 48, r31.u32);
loc_8256C2E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256C2F4"))) PPC_WEAK_FUNC(sub_8256C2F4);
PPC_FUNC_IMPL(__imp__sub_8256C2F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256C2F8"))) PPC_WEAK_FUNC(sub_8256C2F8);
PPC_FUNC_IMPL(__imp__sub_8256C2F8) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r10.u32);
	// lwz r3,21636(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21636);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,88(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 88);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8256c354
	if (!cr6.eq) goto loc_8256C354;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lbz r10,58(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 58);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8256c354
	if (!cr6.eq) goto loc_8256C354;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,58(r11)
	PPC_STORE_U8(r11.u32 + 58, ctx.r10.u8);
loc_8256C354:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r5,r10,-21856
	ctx.r5.s64 = ctx.r10.s64 + -21856;
	// addi r4,r9,-21860
	ctx.r4.s64 = ctx.r9.s64 + -21860;
	// addi r3,r8,16564
	ctx.r3.s64 = ctx.r8.s64 + 16564;
	// lbz r6,58(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 58);
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256C388"))) PPC_WEAK_FUNC(sub_8256C388);
PPC_FUNC_IMPL(__imp__sub_8256C388) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256C38C"))) PPC_WEAK_FUNC(sub_8256C38C);
PPC_FUNC_IMPL(__imp__sub_8256C38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256C390"))) PPC_WEAK_FUNC(sub_8256C390);
PPC_FUNC_IMPL(__imp__sub_8256C390) {
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
	// lis r31,-31970
	r31.s64 = -2095185920;
	// li r11,1
	r11.s64 = 1;
	// stb r11,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, r11.u8);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256c3c8
	if (cr6.eq) goto loc_8256C3C8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256c3cc
	if (!cr6.eq) goto loc_8256C3CC;
loc_8256C3C8:
	// li r11,0
	r11.s64 = 0;
loc_8256C3CC:
	// lwz r3,188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// bl 0x825691c0
	sub_825691C0(ctx, base);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256c3ec
	if (cr6.eq) goto loc_8256C3EC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256c3f0
	if (!cr6.eq) goto loc_8256C3F0;
loc_8256C3EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256C3F0:
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x8254aba8
	sub_8254ABA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256C408"))) PPC_WEAK_FUNC(sub_8256C408);
PPC_FUNC_IMPL(__imp__sub_8256C408) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256C40C"))) PPC_WEAK_FUNC(sub_8256C40C);
PPC_FUNC_IMPL(__imp__sub_8256C40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256C410"))) PPC_WEAK_FUNC(sub_8256C410);
PPC_FUNC_IMPL(__imp__sub_8256C410) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r10.u8);
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256c440
	if (cr6.eq) goto loc_8256C440;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256c444
	if (!cr6.eq) goto loc_8256C444;
loc_8256C440:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256C444:
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// bl 0x82568df0
	sub_82568DF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8256C458"))) PPC_WEAK_FUNC(sub_8256C458);
PPC_FUNC_IMPL(__imp__sub_8256C458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256C45C"))) PPC_WEAK_FUNC(sub_8256C45C);
PPC_FUNC_IMPL(__imp__sub_8256C45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256C460"))) PPC_WEAK_FUNC(sub_8256C460);
PPC_FUNC_IMPL(__imp__sub_8256C460) {
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
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// bgt cr6,0x8256c898
	if (cr6.gt) goto loc_8256C898;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x8256c5b4
	if (cr6.eq) goto loc_8256C5B4;
	// bdz 0x8256c49c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8256C49C;
	// bdz 0x8256c67c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8256C67C;
	// bdz 0x8256c7d4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8256C7D4;
	// bdz 0x8256c7ec
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8256C7EC;
	// bdz 0x8256c880
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8256C880;
	// b 0x8256c890
	goto loc_8256C890;
loc_8256C49C:
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// li r25,0
	r25.s64 = 0;
	// lis r31,-31970
	r31.s64 = -2095185920;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r25,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, r25.u32);
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r25,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, r25.u32);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256c4d8
	if (cr6.eq) goto loc_8256C4D8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256c4dc
	if (!cr6.eq) goto loc_8256C4DC;
loc_8256C4D8:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8256C4DC:
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// bl 0x8254ac40
	sub_8254AC40(ctx, base);
	// lbz r11,18(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 18);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256c5a0
	if (!cr6.eq) goto loc_8256C5A0;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256c50c
	if (cr6.eq) goto loc_8256C50C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256c510
	if (!cr6.eq) goto loc_8256C510;
loc_8256C50C:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8256C510:
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x825102f8
	sub_825102F8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r10,-21888
	ctx.r3.s64 = ctx.r10.s64 + -21888;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256c548
	if (cr6.eq) goto loc_8256C548;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256c54c
	if (!cr6.eq) goto loc_8256C54C;
loc_8256C548:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8256C54C:
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// bl 0x82574460
	sub_82574460(ctx, base);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256c570
	if (cr6.eq) goto loc_8256C570;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256c574
	if (!cr6.eq) goto loc_8256C574;
loc_8256C570:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8256C574:
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// bl 0x82577340
	sub_82577340(ctx, base);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256c594
	if (cr6.eq) goto loc_8256C594;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256c598
	if (!cr6.eq) goto loc_8256C598;
loc_8256C594:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_8256C598:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x82574238
	sub_82574238(ctx, base);
loc_8256C5A0:
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_8256C5B4:
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// li r25,0
	r25.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r25,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, r25.u32);
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r25,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, r25.u32);
	// lbz r7,18(r24)
	ctx.r7.u64 = PPC_LOAD_U8(r24.u32 + 18);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8256c668
	if (!cr6.eq) goto loc_8256C668;
	// lis r31,-31970
	r31.s64 = -2095185920;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256c5fc
	if (cr6.eq) goto loc_8256C5FC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256c600
	if (!cr6.eq) goto loc_8256C600;
loc_8256C5FC:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8256C600:
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x825102f8
	sub_825102F8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r10,-21888
	ctx.r3.s64 = ctx.r10.s64 + -21888;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256c638
	if (cr6.eq) goto loc_8256C638;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256c63c
	if (!cr6.eq) goto loc_8256C63C;
loc_8256C638:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8256C63C:
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// bl 0x82577340
	sub_82577340(ctx, base);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256c65c
	if (cr6.eq) goto loc_8256C65C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256c660
	if (!cr6.eq) goto loc_8256C660;
loc_8256C65C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_8256C660:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x82574238
	sub_82574238(ctx, base);
loc_8256C668:
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_8256C67C:
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// li r25,0
	r25.s64 = 0;
	// lis r28,-31970
	r28.s64 = -2095185920;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r25,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r25.u32);
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// beq cr6,0x8256c6d0
	if (cr6.eq) goto loc_8256C6D0;
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256c6bc
	if (cr6.eq) goto loc_8256C6BC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256c6c0
	if (!cr6.eq) goto loc_8256C6C0;
loc_8256C6BC:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8256C6C0:
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// lwz r4,60(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// bl 0x8254b168
	sub_8254B168(ctx, base);
loc_8256C6D0:
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lbz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 56);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8256c898
	if (!cr6.eq) goto loc_8256C898;
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256c6fc
	if (cr6.eq) goto loc_8256C6FC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256c700
	if (!cr6.eq) goto loc_8256C700;
loc_8256C6FC:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8256C700:
	// lwz r26,176(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8256c898
	if (cr6.eq) goto loc_8256C898;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lis r27,-31934
	r27.s64 = -2092826624;
	// addi r31,r11,-21788
	r31.s64 = r11.s64 + -21788;
	// addi r30,r10,13435
	r30.s64 = ctx.r10.s64 + 13435;
loc_8256C724:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82573b40
	sub_82573B40(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8256c7c0
	if (cr6.eq) goto loc_8256C7C0;
	// lwz r3,21636(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 21636);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8256c7c0
	if (!cr6.eq) goto loc_8256C7C0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// stb r25,56(r11)
	PPC_STORE_U8(r11.u32 + 56, r25.u8);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256c790
	if (cr6.eq) goto loc_8256C790;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256c794
	if (!cr6.eq) goto loc_8256C794;
loc_8256C790:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8256C794:
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// bl 0x82577340
	sub_82577340(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256c7b4
	if (cr6.eq) goto loc_8256C7B4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256c7b8
	if (!cr6.eq) goto loc_8256C7B8;
loc_8256C7B4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_8256C7B8:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x82574238
	sub_82574238(ctx, base);
loc_8256C7C0:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(r29.u32, 4, xer);
	// blt cr6,0x8256c724
	if (cr6.lt) goto loc_8256C724;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_8256C7D4:
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_8256C7EC:
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// li r25,0
	r25.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r25,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, r25.u32);
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r25,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, r25.u32);
	// lwz r7,8(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lbz r6,56(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 56);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x8256c898
	if (!cr6.eq) goto loc_8256C898;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r10,-21816
	ctx.r3.s64 = ctx.r10.s64 + -21816;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r5,r9,-21836
	ctx.r5.s64 = ctx.r9.s64 + -21836;
	// addi r4,r8,22032
	ctx.r4.s64 = ctx.r8.s64 + 22032;
	// addi r3,r7,16564
	ctx.r3.s64 = ctx.r7.s64 + 16564;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lwz r5,8(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lis r6,-31970
	ctx.r6.s64 = -2095185920;
	// stb r25,56(r5)
	PPC_STORE_U8(ctx.r5.u32 + 56, r25.u8);
	// lwz r3,-14756(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256c86c
	if (cr6.eq) goto loc_8256C86C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256c870
	if (!cr6.eq) goto loc_8256C870;
loc_8256C86C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_8256C870:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x82574238
	sub_82574238(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_8256C880:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8256c0d0
	sub_8256C0D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_8256C890:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8256c2f8
	sub_8256C2F8(ctx, base);
loc_8256C898:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8256C89C"))) PPC_WEAK_FUNC(sub_8256C89C);
PPC_FUNC_IMPL(__imp__sub_8256C89C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8256C8A0"))) PPC_WEAK_FUNC(sub_8256C8A0);
PPC_FUNC_IMPL(__imp__sub_8256C8A0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r28,-31970
	r28.s64 = -2095185920;
	// addi r10,r11,-21752
	ctx.r10.s64 = r11.s64 + -21752;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256c8dc
	if (cr6.eq) goto loc_8256C8DC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256c8e0
	if (!cr6.eq) goto loc_8256C8E0;
loc_8256C8DC:
	// li r11,0
	r11.s64 = 0;
loc_8256C8E0:
	// lis r29,-31933
	r29.s64 = -2092761088;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-22320(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -22320);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r26,r27,20
	r26.s64 = r27.s64 + 20;
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
	// bne cr6,0x8256c938
	if (!cr6.eq) goto loc_8256C938;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256c938
	if (!cr6.eq) goto loc_8256C938;
	// lwz r11,-22320(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -22320);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8256C938:
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256c954
	if (cr6.eq) goto loc_8256C954;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256c958
	if (!cr6.eq) goto loc_8256C958;
loc_8256C954:
	// li r11,0
	r11.s64 = 0;
loc_8256C958:
	// lis r29,-31933
	r29.s64 = -2092761088;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-22324(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -22324);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r28,r27,48
	r28.s64 = r27.s64 + 48;
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
	// bne cr6,0x8256c9b0
	if (!cr6.eq) goto loc_8256C9B0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256c9b0
	if (!cr6.eq) goto loc_8256C9B0;
	// lwz r11,-22324(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -22324);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8256C9B0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-21968
	ctx.r10.s64 = r11.s64 + -21968;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8256C9D0"))) PPC_WEAK_FUNC(sub_8256C9D0);
PPC_FUNC_IMPL(__imp__sub_8256C9D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8256C9D4"))) PPC_WEAK_FUNC(sub_8256C9D4);
PPC_FUNC_IMPL(__imp__sub_8256C9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256C9D8"))) PPC_WEAK_FUNC(sub_8256C9D8);
PPC_FUNC_IMPL(__imp__sub_8256C9D8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8256c0a8
	sub_8256C0A8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r26,0
	r26.s64 = 0;
	// addi r10,r11,-21752
	ctx.r10.s64 = r11.s64 + -21752;
	// stb r26,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r26.u8);
	// addi r29,r31,20
	r29.s64 = r31.s64 + 20;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stb r26,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r26.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r26,18(r31)
	PPC_STORE_U8(r31.u32 + 18, r26.u8);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r25,r31,48
	r25.s64 = r31.s64 + 48;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r28,-31970
	r28.s64 = -2095185920;
	// lis r11,-32169
	r11.s64 = -2108227584;
	// addi r27,r11,-15472
	r27.s64 = r11.s64 + -15472;
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256ca48
	if (cr6.eq) goto loc_8256CA48;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256ca4c
	if (!cr6.eq) goto loc_8256CA4C;
loc_8256CA48:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_8256CA4C:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r24,12(r10)
	r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r30,r11,-3784
	r30.s64 = r11.s64 + -3784;
	// addi r3,r10,-10860
	ctx.r3.s64 = ctx.r10.s64 + -10860;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,-22320(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22320);
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
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32169
	r11.s64 = -2108227584;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r29,r11,-15344
	r29.s64 = r11.s64 + -15344;
	// beq cr6,0x8256cac0
	if (cr6.eq) goto loc_8256CAC0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256cac4
	if (!cr6.eq) goto loc_8256CAC4;
loc_8256CAC0:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8256CAC4:
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,-10812
	ctx.r3.s64 = ctx.r10.s64 + -10812;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,-22324(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22324);
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
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8256CB14"))) PPC_WEAK_FUNC(sub_8256CB14);
PPC_FUNC_IMPL(__imp__sub_8256CB14) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8256CB18"))) PPC_WEAK_FUNC(sub_8256CB18);
PPC_FUNC_IMPL(__imp__sub_8256CB18) {
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
	// li r30,0
	r30.s64 = 0;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256cb54
	if (cr6.eq) goto loc_8256CB54;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256cb58
	if (!cr6.eq) goto loc_8256CB58;
loc_8256CB54:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8256CB58:
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// bl 0x82573be0
	sub_82573BE0(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,-22156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -22156);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,18436(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18436);
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// bl 0x8256cdd0
	sub_8256CDD0(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,48(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// bl 0x8256c278
	sub_8256C278(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r30,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r30.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r30,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r30.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x8256cbf4
	if (!cr6.eq) goto loc_8256CBF4;
	// rotlwi r11,r3,0
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x8256cbd8
	if (cr6.eq) goto loc_8256CBD8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256c1d0
	sub_8256C1D0(ctx, base);
loc_8256CBD8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r30,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, r30.u32);
	// b 0x8256ccd8
	goto loc_8256CCD8;
loc_8256CBF4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x8256cc3c
	if (!cr6.eq) goto loc_8256CC3C;
	// lwz r11,48(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8256cc20
	if (cr6.eq) goto loc_8256CC20;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256c1d0
	sub_8256C1D0(ctx, base);
loc_8256CC20:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r30,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, r30.u32);
	// b 0x8256ccd8
	goto loc_8256CCD8;
loc_8256CC3C:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x8256ccac
	if (!cr6.eq) goto loc_8256CCAC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r30,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, r30.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lbz r8,57(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 57);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x8256ccd8
	if (!cr6.eq) goto loc_8256CCD8;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r4,r10,13435
	ctx.r4.s64 = ctx.r10.s64 + 13435;
	// addi r3,r9,-21816
	ctx.r3.s64 = ctx.r9.s64 + -21816;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r30,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, r30.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r30,48(r7)
	PPC_STORE_U32(ctx.r7.u32 + 48, r30.u32);
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// addi r5,r6,-21836
	ctx.r5.s64 = ctx.r6.s64 + -21836;
	// addi r4,r4,22032
	ctx.r4.s64 = ctx.r4.s64 + 22032;
	// addi r3,r3,16564
	ctx.r3.s64 = ctx.r3.s64 + 16564;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// b 0x8256ccd8
	goto loc_8256CCD8;
loc_8256CCAC:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x8256ccc4
	if (!cr6.eq) goto loc_8256CCC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256c0d0
	sub_8256C0D0(ctx, base);
	// b 0x8256ccd8
	goto loc_8256CCD8;
loc_8256CCC4:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8256ccd8
	if (!cr6.eq) goto loc_8256CCD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256c2f8
	sub_8256C2F8(ctx, base);
loc_8256CCD8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stb r30,57(r11)
	PPC_STORE_U8(r11.u32 + 57, r30.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256CCF4"))) PPC_WEAK_FUNC(sub_8256CCF4);
PPC_FUNC_IMPL(__imp__sub_8256CCF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256CCF8"))) PPC_WEAK_FUNC(sub_8256CCF8);
PPC_FUNC_IMPL(__imp__sub_8256CCF8) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r31,-31934
	r31.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,-22160(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22160);
	// lwz r10,18436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 18436);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r3,100(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// bl 0x8256ce48
	sub_8256CE48(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r11,18436(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 18436);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// lwz r10,-22152(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22152);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x8256cec0
	sub_8256CEC0(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256cd60
	if (cr6.eq) goto loc_8256CD60;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256cd64
	if (!cr6.eq) goto loc_8256CD64;
loc_8256CD60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256CD64:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x82574430
	sub_82574430(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256CD7C"))) PPC_WEAK_FUNC(sub_8256CD7C);
PPC_FUNC_IMPL(__imp__sub_8256CD7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256CD80"))) PPC_WEAK_FUNC(sub_8256CD80);
PPC_FUNC_IMPL(__imp__sub_8256CD80) {
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
	// bl 0x8256c8a0
	sub_8256C8A0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8256cdb8
	if (cr6.eq) goto loc_8256CDB8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8256CDB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256CDCC"))) PPC_WEAK_FUNC(sub_8256CDCC);
PPC_FUNC_IMPL(__imp__sub_8256CDCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256CDD0"))) PPC_WEAK_FUNC(sub_8256CDD0);
PPC_FUNC_IMPL(__imp__sub_8256CDD0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256ce2c
	if (cr6.eq) goto loc_8256CE2C;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-21720
	ctx.r8.s64 = ctx.r9.s64 + -21720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8256CE2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256CE40"))) PPC_WEAK_FUNC(sub_8256CE40);
PPC_FUNC_IMPL(__imp__sub_8256CE40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256CE44"))) PPC_WEAK_FUNC(sub_8256CE44);
PPC_FUNC_IMPL(__imp__sub_8256CE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256CE48"))) PPC_WEAK_FUNC(sub_8256CE48);
PPC_FUNC_IMPL(__imp__sub_8256CE48) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256cea4
	if (cr6.eq) goto loc_8256CEA4;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-21708
	ctx.r8.s64 = ctx.r9.s64 + -21708;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8256CEA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256CEB8"))) PPC_WEAK_FUNC(sub_8256CEB8);
PPC_FUNC_IMPL(__imp__sub_8256CEB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256CEBC"))) PPC_WEAK_FUNC(sub_8256CEBC);
PPC_FUNC_IMPL(__imp__sub_8256CEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256CEC0"))) PPC_WEAK_FUNC(sub_8256CEC0);
PPC_FUNC_IMPL(__imp__sub_8256CEC0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256cf1c
	if (cr6.eq) goto loc_8256CF1C;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-21696
	ctx.r8.s64 = ctx.r9.s64 + -21696;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8256CF1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256CF30"))) PPC_WEAK_FUNC(sub_8256CF30);
PPC_FUNC_IMPL(__imp__sub_8256CF30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256CF34"))) PPC_WEAK_FUNC(sub_8256CF34);
PPC_FUNC_IMPL(__imp__sub_8256CF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256CF38"))) PPC_WEAK_FUNC(sub_8256CF38);
PPC_FUNC_IMPL(__imp__sub_8256CF38) {
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
	// bl 0x8256c0a8
	sub_8256C0A8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-21684
	ctx.r10.s64 = r11.s64 + -21684;
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

__attribute__((alias("__imp__sub_8256CF70"))) PPC_WEAK_FUNC(sub_8256CF70);
PPC_FUNC_IMPL(__imp__sub_8256CF70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256CF74"))) PPC_WEAK_FUNC(sub_8256CF74);
PPC_FUNC_IMPL(__imp__sub_8256CF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256CF78"))) PPC_WEAK_FUNC(sub_8256CF78);
PPC_FUNC_IMPL(__imp__sub_8256CF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r10,-28228
	ctx.r3.s64 = ctx.r10.s64 + -28228;
}

__attribute__((alias("__imp__sub_8256CF88"))) PPC_WEAK_FUNC(sub_8256CF88);
PPC_FUNC_IMPL(__imp__sub_8256CF88) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256CF8C"))) PPC_WEAK_FUNC(sub_8256CF8C);
PPC_FUNC_IMPL(__imp__sub_8256CF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256CF90"))) PPC_WEAK_FUNC(sub_8256CF90);
PPC_FUNC_IMPL(__imp__sub_8256CF90) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r28,r11,13435
	r28.s64 = r11.s64 + 13435;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8256cfc4
	if (cr6.eq) goto loc_8256CFC4;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,-28228
	ctx.r3.s64 = r11.s64 + -28228;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
loc_8256CFC4:
	// lis r29,-31970
	r29.s64 = -2095185920;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256cfe8
	if (cr6.eq) goto loc_8256CFE8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256cfec
	if (!cr6.eq) goto loc_8256CFEC;
loc_8256CFE8:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8256CFEC:
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// bl 0x8254ac40
	sub_8254AC40(ctx, base);
	// li r27,1
	r27.s64 = 1;
	// stw r27,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r27.u32);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256d018
	if (cr6.eq) goto loc_8256D018;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256d01c
	if (!cr6.eq) goto loc_8256D01C;
loc_8256D018:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8256D01C:
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// bl 0x82574460
	sub_82574460(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r30,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, r30.u32);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256d04c
	if (cr6.eq) goto loc_8256D04C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256d050
	if (!cr6.eq) goto loc_8256D050;
loc_8256D04C:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8256D050:
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// bl 0x82577340
	sub_82577340(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r30,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r30.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r30,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r30.u32);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256d08c
	if (cr6.eq) goto loc_8256D08C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256d090
	if (!cr6.eq) goto loc_8256D090;
loc_8256D08C:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8256D090:
	// lwz r26,92(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8250f918
	sub_8250F918(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8250ef00
	sub_8250EF00(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,-21888
	ctx.r3.s64 = r11.s64 + -21888;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256d0d4
	if (cr6.eq) goto loc_8256D0D4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256d0d8
	if (!cr6.eq) goto loc_8256D0D8;
loc_8256D0D4:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8256D0D8:
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// bl 0x82521128
	sub_82521128(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256d0fc
	if (cr6.eq) goto loc_8256D0FC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256d100
	if (!cr6.eq) goto loc_8256D100;
loc_8256D0FC:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8256D100:
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// bl 0x825218d8
	sub_825218D8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r30,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r30.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r27,48(r7)
	PPC_STORE_U32(ctx.r7.u32 + 48, r27.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lbz r6,57(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 57);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x8256d168
	if (!cr6.eq) goto loc_8256D168;
	// stb r30,57(r11)
	PPC_STORE_U8(r11.u32 + 57, r30.u8);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stb r30,56(r11)
	PPC_STORE_U8(r11.u32 + 56, r30.u8);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256d15c
	if (cr6.eq) goto loc_8256D15C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256d160
	if (!cr6.eq) goto loc_8256D160;
loc_8256D15C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8256D160:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x82577340
	sub_82577340(ctx, base);
loc_8256D168:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8256D16C"))) PPC_WEAK_FUNC(sub_8256D16C);
PPC_FUNC_IMPL(__imp__sub_8256D16C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8256D170"))) PPC_WEAK_FUNC(sub_8256D170);
PPC_FUNC_IMPL(__imp__sub_8256D170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256D184"))) PPC_WEAK_FUNC(sub_8256D184);
PPC_FUNC_IMPL(__imp__sub_8256D184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256D188"))) PPC_WEAK_FUNC(sub_8256D188);
PPC_FUNC_IMPL(__imp__sub_8256D188) {
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
	// lis r31,-31970
	r31.s64 = -2095185920;
	// li r11,5
	r11.s64 = 5;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256d1c8
	if (cr6.eq) goto loc_8256D1C8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256d1cc
	if (!cr6.eq) goto loc_8256D1CC;
loc_8256D1C8:
	// li r11,0
	r11.s64 = 0;
loc_8256D1CC:
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// bl 0x82577340
	sub_82577340(ctx, base);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256d1f0
	if (cr6.eq) goto loc_8256D1F0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256d1f4
	if (!cr6.eq) goto loc_8256D1F4;
loc_8256D1F0:
	// li r11,0
	r11.s64 = 0;
loc_8256D1F4:
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x825107d8
	sub_825107D8(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r11,2
	r11.s64 = 2;
	// stw r11,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256D21C"))) PPC_WEAK_FUNC(sub_8256D21C);
PPC_FUNC_IMPL(__imp__sub_8256D21C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256D220"))) PPC_WEAK_FUNC(sub_8256D220);
PPC_FUNC_IMPL(__imp__sub_8256D220) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r28,r11,13435
	r28.s64 = r11.s64 + 13435;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x8256d390
	if (!cr6.eq) goto loc_8256D390;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,-28228
	ctx.r3.s64 = r11.s64 + -28228;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
loc_8256D254:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r29,-31970
	r29.s64 = -2095185920;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r30,0
	r30.s64 = 0;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r30,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, r30.u32);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256d28c
	if (cr6.eq) goto loc_8256D28C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256d290
	if (!cr6.eq) goto loc_8256D290;
loc_8256D28C:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8256D290:
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// bl 0x82577340
	sub_82577340(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lbz r10,57(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 57);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8256d388
	if (!cr6.eq) goto loc_8256D388;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r30,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r30.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r30,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, r30.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stb r30,57(r8)
	PPC_STORE_U8(ctx.r8.u32 + 57, r30.u8);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stb r30,56(r7)
	PPC_STORE_U8(ctx.r7.u32 + 56, r30.u8);
	// lwz r3,20992(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20992);
	// bl 0x82320d20
	sub_82320D20(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256d310
	if (cr6.eq) goto loc_8256D310;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r9,-27972
	ctx.r8.s64 = ctx.r9.s64 + -27972;
	// stb r10,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8256D310:
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256d32c
	if (cr6.eq) goto loc_8256D32C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256d330
	if (!cr6.eq) goto loc_8256D330;
loc_8256D32C:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8256D330:
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// bl 0x82521128
	sub_82521128(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256d354
	if (cr6.eq) goto loc_8256D354;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256d354
	if (cr6.eq) goto loc_8256D354;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8256D354:
	// lwz r3,152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// bl 0x825218d8
	sub_825218D8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,-21816
	ctx.r3.s64 = r11.s64 + -21816;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r5,r10,-21836
	ctx.r5.s64 = ctx.r10.s64 + -21836;
	// addi r4,r9,22032
	ctx.r4.s64 = ctx.r9.s64 + 22032;
	// addi r3,r8,16564
	ctx.r3.s64 = ctx.r8.s64 + 16564;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
loc_8256D388:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8256D390:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8256d254
	if (!cr6.eq) goto loc_8256D254;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8256D3AC"))) PPC_WEAK_FUNC(sub_8256D3AC);
PPC_FUNC_IMPL(__imp__sub_8256D3AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8256D3B0"))) PPC_WEAK_FUNC(sub_8256D3B0);
PPC_FUNC_IMPL(__imp__sub_8256D3B0) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8256d4c0
	if (!cr6.eq) goto loc_8256D4C0;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lbz r9,57(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 57);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8256d4c0
	if (!cr6.eq) goto loc_8256D4C0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r30,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r30.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r30,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, r30.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r30,56(r8)
	PPC_STORE_U8(ctx.r8.u32 + 56, r30.u8);
	// lwz r3,20992(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20992);
	// bl 0x82320d20
	sub_82320D20(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256d448
	if (cr6.eq) goto loc_8256D448;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r9,-27972
	ctx.r8.s64 = ctx.r9.s64 + -27972;
	// stb r10,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8256D448:
	// lis r31,-31970
	r31.s64 = -2095185920;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256d468
	if (cr6.eq) goto loc_8256D468;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256d46c
	if (!cr6.eq) goto loc_8256D46C;
loc_8256D468:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8256D46C:
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// bl 0x82521128
	sub_82521128(ctx, base);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256d490
	if (cr6.eq) goto loc_8256D490;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256d494
	if (!cr6.eq) goto loc_8256D494;
loc_8256D490:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8256D494:
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// bl 0x825218d8
	sub_825218D8(ctx, base);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r11,-21856
	ctx.r5.s64 = r11.s64 + -21856;
	// addi r4,r10,-21860
	ctx.r4.s64 = ctx.r10.s64 + -21860;
	// addi r3,r9,16564
	ctx.r3.s64 = ctx.r9.s64 + 16564;
	// lbz r6,58(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 58);
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
loc_8256D4C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8256D4C4"))) PPC_WEAK_FUNC(sub_8256D4C4);
PPC_FUNC_IMPL(__imp__sub_8256D4C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8256D4C8"))) PPC_WEAK_FUNC(sub_8256D4C8);
PPC_FUNC_IMPL(__imp__sub_8256D4C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r11,r3,48
	r11.s64 = ctx.r3.s64 + 48;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
loc_8256D4D8:
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
	// bgt cr6,0x8256d4d8
	if (cr6.gt) goto loc_8256D4D8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256D4F4"))) PPC_WEAK_FUNC(sub_8256D4F4);
PPC_FUNC_IMPL(__imp__sub_8256D4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256D4F8"))) PPC_WEAK_FUNC(sub_8256D4F8);
PPC_FUNC_IMPL(__imp__sub_8256D4F8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// beq cr6,0x8256d52c
	if (cr6.eq) goto loc_8256D52C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256d530
	if (!cr6.eq) goto loc_8256D530;
loc_8256D52C:
	// li r11,0
	r11.s64 = 0;
loc_8256D530:
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// lwz r28,188(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8256d55c
	if (!cr6.gt) goto loc_8256D55C;
loc_8256D544:
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
	// bgt cr6,0x8256d544
	if (cr6.gt) goto loc_8256D544;
loc_8256D55C:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// li r29,4
	r29.s64 = 4;
loc_8256D564:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x825689b8
	sub_825689B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256d5e0
	if (cr6.eq) goto loc_8256D5E0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ld r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// ble cr6,0x8256d5b0
	if (!cr6.gt) goto loc_8256D5B0;
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
loc_8256D5B0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256d5e0
	if (cr0.eq) goto loc_8256D5E0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r8.u64);
loc_8256D5E0:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8256d564
	if (!cr0.eq) goto loc_8256D564;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8256D5F0"))) PPC_WEAK_FUNC(sub_8256D5F0);
PPC_FUNC_IMPL(__imp__sub_8256D5F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8256D5F4"))) PPC_WEAK_FUNC(sub_8256D5F4);
PPC_FUNC_IMPL(__imp__sub_8256D5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256D5F8"))) PPC_WEAK_FUNC(sub_8256D5F8);
PPC_FUNC_IMPL(__imp__sub_8256D5F8) {
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
	// bl 0x8256c0a8
	sub_8256C0A8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r29,0
	r29.s64 = 0;
	// addi r10,r11,-21612
	ctx.r10.s64 = r11.s64 + -21612;
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// addi r30,r31,20
	r30.s64 = r31.s64 + 20;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r11,r31,48
	r11.s64 = r31.s64 + 48;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r29,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r29.u32);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// addi r7,r11,24
	ctx.r7.s64 = r11.s64 + 24;
	// addi r6,r9,-21636
	ctx.r6.s64 = ctx.r9.s64 + -21636;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r7,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r7.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r6,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r6.u32);
	// lis r11,-32169
	r11.s64 = -2108227584;
	// stw r5,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r5.u32);
	// stw r4,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r4.u32);
	// lwz r3,-14756(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14756);
	// addi r28,r11,-11016
	r28.s64 = r11.s64 + -11016;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256d680
	if (cr6.eq) goto loc_8256D680;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256d680
	if (cr6.eq) goto loc_8256D680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8256D680:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r29,12(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,13476
	ctx.r3.s64 = ctx.r10.s64 + 13476;
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
	// lwz r11,20328(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20328);
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

__attribute__((alias("__imp__sub_8256D6D4"))) PPC_WEAK_FUNC(sub_8256D6D4);
PPC_FUNC_IMPL(__imp__sub_8256D6D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8256D6D8"))) PPC_WEAK_FUNC(sub_8256D6D8);
PPC_FUNC_IMPL(__imp__sub_8256D6D8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r9,r11,-21612
	ctx.r9.s64 = r11.s64 + -21612;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256d714
	if (cr6.eq) goto loc_8256D714;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256d718
	if (!cr6.eq) goto loc_8256D718;
loc_8256D714:
	// li r11,0
	r11.s64 = 0;
loc_8256D718:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20328(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20328);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r28,r27,20
	r28.s64 = r27.s64 + 20;
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
	// bne cr6,0x8256d770
	if (!cr6.eq) goto loc_8256D770;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256d770
	if (!cr6.eq) goto loc_8256D770;
	// lwz r11,20328(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20328);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8256D770:
	// addi r3,r27,48
	ctx.r3.s64 = r27.s64 + 48;
	// bl 0x8256dce8
	sub_8256DCE8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-21968
	ctx.r10.s64 = r11.s64 + -21968;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8256D790"))) PPC_WEAK_FUNC(sub_8256D790);
PPC_FUNC_IMPL(__imp__sub_8256D790) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8256D794"))) PPC_WEAK_FUNC(sub_8256D794);
PPC_FUNC_IMPL(__imp__sub_8256D794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256D798"))) PPC_WEAK_FUNC(sub_8256D798);
PPC_FUNC_IMPL(__imp__sub_8256D798) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8256dadc
	if (cr6.eq) goto loc_8256DADC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r21,0
	r21.s64 = 0;
	// lis r22,-31970
	r22.s64 = -2095185920;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x8256d7fc
	if (cr6.eq) goto loc_8256D7FC;
	// lwz r3,-14756(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256d7e8
	if (cr6.eq) goto loc_8256D7E8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256d7ec
	if (!cr6.eq) goto loc_8256D7EC;
loc_8256D7E8:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_8256D7EC:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// lwz r4,60(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// bl 0x8254b168
	sub_8254B168(ctx, base);
loc_8256D7FC:
	// lwz r3,-14756(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256d81c
	if (cr6.eq) goto loc_8256D81C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,-14756(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + -14756);
	// bne cr6,0x8256d820
	if (!cr6.eq) goto loc_8256D820;
loc_8256D81C:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_8256D820:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lis r26,-31934
	r26.s64 = -2092826624;
	// lwz r23,188(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r25,-31934
	r25.s64 = -2092826624;
	// addi r24,r11,13435
	r24.s64 = r11.s64 + 13435;
	// lbz r9,57(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 57);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8256d8cc
	if (!cr6.eq) goto loc_8256D8CC;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256d85c
	if (cr6.eq) goto loc_8256D85C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256d860
	if (!cr6.eq) goto loc_8256D860;
loc_8256D85C:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_8256D860:
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// bl 0x82573b60
	sub_82573B60(ctx, base);
	// lwz r3,-14756(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256d884
	if (cr6.eq) goto loc_8256D884;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256d888
	if (!cr6.eq) goto loc_8256D888;
loc_8256D884:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_8256D888:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// lwz r4,60(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// bl 0x82573b40
	sub_82573B40(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8256d978
	if (cr6.eq) goto loc_8256D978;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x8256d8c0
	if (!cr6.eq) goto loc_8256D8C0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r11,-28228
	ctx.r3.s64 = r11.s64 + -28228;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
loc_8256D8C0:
	// li r11,4
	r11.s64 = 4;
	// stw r11,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r11.u32);
	// b 0x8256d978
	goto loc_8256D978;
loc_8256D8CC:
	// lwz r10,60(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 60);
	// addi r30,r28,48
	r30.s64 = r28.s64 + 48;
	// lwz r11,52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// extsw r31,r11
	r31.s64 = r11.s32;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x8256d97c
	if (cr6.eq) goto loc_8256D97C;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r29,4
	r29.s64 = 4;
	// addi r27,r11,-28228
	r27.s64 = r11.s64 + -28228;
loc_8256D8F8:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// bl 0x82568980
	sub_82568980(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256d918
	if (cr6.eq) goto loc_8256D918;
	// lbz r11,64(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256d95c
	if (!cr6.eq) goto loc_8256D95C;
loc_8256D918:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8256d938
	if (cr6.eq) goto loc_8256D938;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x8256d938
	if (cr6.eq) goto loc_8256D938;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
loc_8256D938:
	// stw r29,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r29.u32);
	// lwz r11,20512(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 20512);
	// lwz r3,20992(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 20992);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82320d20
	sub_82320D20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8256de08
	sub_8256DE08(ctx, base);
loc_8256D95C:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8256d8f8
	if (!cr6.eq) goto loc_8256D8F8;
loc_8256D978:
	// lwz r3,-14756(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + -14756);
loc_8256D97C:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x8256da84
	if (!cr6.eq) goto loc_8256DA84;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256d9a0
	if (cr6.eq) goto loc_8256D9A0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256d9a4
	if (!cr6.eq) goto loc_8256D9A4;
loc_8256D9A0:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_8256D9A4:
	// lwz r31,92(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250f918
	sub_8250F918(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ef00
	sub_8250EF00(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r11,-21584
	ctx.r3.s64 = r11.s64 + -21584;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lwz r3,-14756(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256d9e8
	if (cr6.eq) goto loc_8256D9E8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256d9ec
	if (!cr6.eq) goto loc_8256D9EC;
loc_8256D9E8:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_8256D9EC:
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// bl 0x82521128
	sub_82521128(ctx, base);
	// lwz r3,-14756(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256da10
	if (cr6.eq) goto loc_8256DA10;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256da14
	if (!cr6.eq) goto loc_8256DA14;
loc_8256DA10:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_8256DA14:
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// bl 0x82521860
	sub_82521860(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r21,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r21.u32);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r21,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r21.u32);
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r21,48(r7)
	PPC_STORE_U32(ctx.r7.u32 + 48, r21.u32);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lbz r6,57(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 57);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x8256dadc
	if (!cr6.eq) goto loc_8256DADC;
	// stb r21,57(r11)
	PPC_STORE_U8(r11.u32 + 57, r21.u8);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stb r21,56(r11)
	PPC_STORE_U8(r11.u32 + 56, r21.u8);
	// lwz r3,-14756(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256da70
	if (cr6.eq) goto loc_8256DA70;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256da74
	if (!cr6.eq) goto loc_8256DA74;
loc_8256DA70:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_8256DA74:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x82577340
	sub_82577340(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e944c
	return;
loc_8256DA84:
	// mr r31,r21
	r31.u64 = r21.u64;
loc_8256DA88:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825688b0
	sub_825688B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256dad0
	if (cr6.eq) goto loc_8256DAD0;
	// lbz r11,64(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256dad0
	if (!cr6.eq) goto loc_8256DAD0;
	// bl 0x82568198
	sub_82568198(ctx, base);
	// lwz r10,20512(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 20512);
	// lwz r11,20992(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 20992);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82320d20
	sub_82320D20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8256de08
	sub_8256DE08(ctx, base);
loc_8256DAD0:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x8256da88
	if (cr6.lt) goto loc_8256DA88;
loc_8256DADC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8256DAE0"))) PPC_WEAK_FUNC(sub_8256DAE0);
PPC_FUNC_IMPL(__imp__sub_8256DAE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_8256DAE4"))) PPC_WEAK_FUNC(sub_8256DAE4);
PPC_FUNC_IMPL(__imp__sub_8256DAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256DAE8"))) PPC_WEAK_FUNC(sub_8256DAE8);
PPC_FUNC_IMPL(__imp__sub_8256DAE8) {
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
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8256db50
	if (!cr6.eq) goto loc_8256DB50;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8256db50
	if (!cr6.eq) goto loc_8256DB50;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8256db3c
	if (cr6.eq) goto loc_8256DB3C;
	// bl 0x8256d798
	sub_8256D798(ctx, base);
	// b 0x8256db58
	goto loc_8256DB58;
loc_8256DB3C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8256db58
	if (cr6.eq) goto loc_8256DB58;
	// stw r30,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r30.u32);
	// b 0x8256db58
	goto loc_8256DB58;
loc_8256DB50:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256cf90
	sub_8256CF90(ctx, base);
loc_8256DB58:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x8256db74
	if (!cr6.eq) goto loc_8256DB74;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256d220
	sub_8256D220(ctx, base);
loc_8256DB74:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x8256db90
	if (!cr6.eq) goto loc_8256DB90;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256d188
	sub_8256D188(ctx, base);
loc_8256DB90:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x8256dbac
	if (!cr6.eq) goto loc_8256DBAC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256d3b0
	sub_8256D3B0(ctx, base);
loc_8256DBAC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lbz r10,57(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 57);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8256dc08
	if (!cr6.eq) goto loc_8256DC08;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256dbdc
	if (cr6.eq) goto loc_8256DBDC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256dbe0
	if (!cr6.eq) goto loc_8256DBE0;
loc_8256DBDC:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8256DBE0:
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// bl 0x82574448
	sub_82574448(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,-23612(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -23612);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,18436(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18436);
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// bl 0x8251e3d8
	sub_8251E3D8(ctx, base);
loc_8256DC08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256DC1C"))) PPC_WEAK_FUNC(sub_8256DC1C);
PPC_FUNC_IMPL(__imp__sub_8256DC1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256DC20"))) PPC_WEAK_FUNC(sub_8256DC20);
PPC_FUNC_IMPL(__imp__sub_8256DC20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x8256dc70
	if (cr6.eq) goto loc_8256DC70;
	// bdz 0x8256dc4c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8256DC4C;
	// bdz 0x8256dc64
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8256DC64;
	// bdz 0x8256dc50
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8256DC50;
	// bdz 0x8256dc68
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8256DC68;
	// bdz 0x8256dc6c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8256DC6C;
	// b 0x8256dc74
	goto loc_8256DC74;
loc_8256DC4C:
	// b 0x8256cf90
	sub_8256CF90(ctx, base);
	return;
loc_8256DC50:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// blr 
	return;
loc_8256DC64:
	// b 0x8256d798
	sub_8256D798(ctx, base);
	return;
loc_8256DC68:
	// b 0x8256d220
	sub_8256D220(ctx, base);
	return;
loc_8256DC6C:
	// b 0x8256d188
	sub_8256D188(ctx, base);
	return;
loc_8256DC70:
	// b 0x8256cf90
	sub_8256CF90(ctx, base);
	return;
loc_8256DC74:
	// b 0x8256d3b0
	sub_8256D3B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256DC78"))) PPC_WEAK_FUNC(sub_8256DC78);
PPC_FUNC_IMPL(__imp__sub_8256DC78) {
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
	// addi r9,r11,-21648
	ctx.r9.s64 = r11.s64 + -21648;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8256dcbc
	if (!cr6.gt) goto loc_8256DCBC;
loc_8256DCA4:
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
	// bgt cr6,0x8256dca4
	if (cr6.gt) goto loc_8256DCA4;
loc_8256DCBC:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8256dcd4
	if (cr6.eq) goto loc_8256DCD4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8256DCD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256DCE4"))) PPC_WEAK_FUNC(sub_8256DCE4);
PPC_FUNC_IMPL(__imp__sub_8256DCE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256DCE8"))) PPC_WEAK_FUNC(sub_8256DCE8);
PPC_FUNC_IMPL(__imp__sub_8256DCE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,-21636
	ctx.r9.s64 = r11.s64 + -21636;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8256dd18
	if (!cr6.gt) goto loc_8256DD18;
loc_8256DD00:
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
	// bgt cr6,0x8256dd00
	if (cr6.gt) goto loc_8256DD00;
loc_8256DD18:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,-21648
	ctx.r9.s64 = r11.s64 + -21648;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blelr cr6
	if (!cr6.gt) return;
loc_8256DD30:
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
	// bgt cr6,0x8256dd30
	if (cr6.gt) goto loc_8256DD30;
}

__attribute__((alias("__imp__sub_8256DD48"))) PPC_WEAK_FUNC(sub_8256DD48);
PPC_FUNC_IMPL(__imp__sub_8256DD48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256DD4C"))) PPC_WEAK_FUNC(sub_8256DD4C);
PPC_FUNC_IMPL(__imp__sub_8256DD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256DD50"))) PPC_WEAK_FUNC(sub_8256DD50);
PPC_FUNC_IMPL(__imp__sub_8256DD50) {
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
	// bl 0x8256dce8
	sub_8256DCE8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8256dd88
	if (cr6.eq) goto loc_8256DD88;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8256DD88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256DD9C"))) PPC_WEAK_FUNC(sub_8256DD9C);
PPC_FUNC_IMPL(__imp__sub_8256DD9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256DDA0"))) PPC_WEAK_FUNC(sub_8256DDA0);
PPC_FUNC_IMPL(__imp__sub_8256DDA0) {
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
	// beq cr6,0x8256ddd0
	if (cr6.eq) goto loc_8256DDD0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256ddd4
	if (!cr6.eq) goto loc_8256DDD4;
loc_8256DDD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256DDD4:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256ddf0
	if (cr6.eq) goto loc_8256DDF0;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82379520
	sub_82379520(ctx, base);
loc_8256DDF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256DE00"))) PPC_WEAK_FUNC(sub_8256DE00);
PPC_FUNC_IMPL(__imp__sub_8256DE00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256DE04"))) PPC_WEAK_FUNC(sub_8256DE04);
PPC_FUNC_IMPL(__imp__sub_8256DE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256DE08"))) PPC_WEAK_FUNC(sub_8256DE08);
PPC_FUNC_IMPL(__imp__sub_8256DE08) {
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
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256de6c
	if (cr6.eq) goto loc_8256DE6C;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-21624
	ctx.r8.s64 = ctx.r9.s64 + -21624;
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
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8256DE6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256DE80"))) PPC_WEAK_FUNC(sub_8256DE80);
PPC_FUNC_IMPL(__imp__sub_8256DE80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256DE84"))) PPC_WEAK_FUNC(sub_8256DE84);
PPC_FUNC_IMPL(__imp__sub_8256DE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256DE88"))) PPC_WEAK_FUNC(sub_8256DE88);
PPC_FUNC_IMPL(__imp__sub_8256DE88) {
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
	// bl 0x8256d6d8
	sub_8256D6D8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8256dec0
	if (cr6.eq) goto loc_8256DEC0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8256DEC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256DED4"))) PPC_WEAK_FUNC(sub_8256DED4);
PPC_FUNC_IMPL(__imp__sub_8256DED4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256DED8"))) PPC_WEAK_FUNC(sub_8256DED8);
PPC_FUNC_IMPL(__imp__sub_8256DED8) {
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
	// bl 0x8256c0a8
	sub_8256C0A8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-21556
	ctx.r10.s64 = r11.s64 + -21556;
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

__attribute__((alias("__imp__sub_8256DF10"))) PPC_WEAK_FUNC(sub_8256DF10);
PPC_FUNC_IMPL(__imp__sub_8256DF10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256DF14"))) PPC_WEAK_FUNC(sub_8256DF14);
PPC_FUNC_IMPL(__imp__sub_8256DF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256DF18"))) PPC_WEAK_FUNC(sub_8256DF18);
PPC_FUNC_IMPL(__imp__sub_8256DF18) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,-22124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22124);
	// lwz r10,18436(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18436);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r3,100(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// bl 0x8256dfe0
	sub_8256DFE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8256DF50"))) PPC_WEAK_FUNC(sub_8256DF50);
PPC_FUNC_IMPL(__imp__sub_8256DF50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256DF54"))) PPC_WEAK_FUNC(sub_8256DF54);
PPC_FUNC_IMPL(__imp__sub_8256DF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256DF58"))) PPC_WEAK_FUNC(sub_8256DF58);
PPC_FUNC_IMPL(__imp__sub_8256DF58) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,-22128(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22128);
	// lwz r10,18436(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18436);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r3,100(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// bl 0x8256e058
	sub_8256E058(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8256DF90"))) PPC_WEAK_FUNC(sub_8256DF90);
PPC_FUNC_IMPL(__imp__sub_8256DF90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256DF94"))) PPC_WEAK_FUNC(sub_8256DF94);
PPC_FUNC_IMPL(__imp__sub_8256DF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256DF98"))) PPC_WEAK_FUNC(sub_8256DF98);
PPC_FUNC_IMPL(__imp__sub_8256DF98) {
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
	// addi r9,r11,-21968
	ctx.r9.s64 = r11.s64 + -21968;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8256dfcc
	if (cr6.eq) goto loc_8256DFCC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8256DFCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256DFDC"))) PPC_WEAK_FUNC(sub_8256DFDC);
PPC_FUNC_IMPL(__imp__sub_8256DFDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256DFE0"))) PPC_WEAK_FUNC(sub_8256DFE0);
PPC_FUNC_IMPL(__imp__sub_8256DFE0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256e03c
	if (cr6.eq) goto loc_8256E03C;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-21524
	ctx.r8.s64 = ctx.r9.s64 + -21524;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8256E03C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256E050"))) PPC_WEAK_FUNC(sub_8256E050);
PPC_FUNC_IMPL(__imp__sub_8256E050) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256E054"))) PPC_WEAK_FUNC(sub_8256E054);
PPC_FUNC_IMPL(__imp__sub_8256E054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256E058"))) PPC_WEAK_FUNC(sub_8256E058);
PPC_FUNC_IMPL(__imp__sub_8256E058) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256e0b4
	if (cr6.eq) goto loc_8256E0B4;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-21512
	ctx.r8.s64 = ctx.r9.s64 + -21512;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8256E0B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256E0C8"))) PPC_WEAK_FUNC(sub_8256E0C8);
PPC_FUNC_IMPL(__imp__sub_8256E0C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256E0CC"))) PPC_WEAK_FUNC(sub_8256E0CC);
PPC_FUNC_IMPL(__imp__sub_8256E0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256E0D0"))) PPC_WEAK_FUNC(sub_8256E0D0);
PPC_FUNC_IMPL(__imp__sub_8256E0D0) {
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
	// bl 0x8256c0a8
	sub_8256C0A8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-21500
	ctx.r10.s64 = r11.s64 + -21500;
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

__attribute__((alias("__imp__sub_8256E108"))) PPC_WEAK_FUNC(sub_8256E108);
PPC_FUNC_IMPL(__imp__sub_8256E108) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256E10C"))) PPC_WEAK_FUNC(sub_8256E10C);
PPC_FUNC_IMPL(__imp__sub_8256E10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256E110"))) PPC_WEAK_FUNC(sub_8256E110);
PPC_FUNC_IMPL(__imp__sub_8256E110) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256E114"))) PPC_WEAK_FUNC(sub_8256E114);
PPC_FUNC_IMPL(__imp__sub_8256E114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256E118"))) PPC_WEAK_FUNC(sub_8256E118);
PPC_FUNC_IMPL(__imp__sub_8256E118) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256E11C"))) PPC_WEAK_FUNC(sub_8256E11C);
PPC_FUNC_IMPL(__imp__sub_8256E11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256E120"))) PPC_WEAK_FUNC(sub_8256E120);
PPC_FUNC_IMPL(__imp__sub_8256E120) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256E124"))) PPC_WEAK_FUNC(sub_8256E124);
PPC_FUNC_IMPL(__imp__sub_8256E124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256E128"))) PPC_WEAK_FUNC(sub_8256E128);
PPC_FUNC_IMPL(__imp__sub_8256E128) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256E130"))) PPC_WEAK_FUNC(sub_8256E130);
PPC_FUNC_IMPL(__imp__sub_8256E130) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256E138"))) PPC_WEAK_FUNC(sub_8256E138);
PPC_FUNC_IMPL(__imp__sub_8256E138) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82881c18
	sub_82881C18(ctx, base);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
	// mulli r11,r9,936
	r11.s64 = ctx.r9.s64 * 936;
	// extsw r31,r10
	r31.s64 = ctx.r10.s32;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// beq cr6,0x8256e1c0
	if (cr6.eq) goto loc_8256E1C0;
loc_8256E18C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82881ad0
	sub_82881AD0(ctx, base);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r31,r31,936
	r31.s64 = r31.s64 + 936;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mulli r11,r9,936
	r11.s64 = ctx.r9.s64 * 936;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// bne cr6,0x8256e18c
	if (!cr6.eq) goto loc_8256E18C;
loc_8256E1C0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8254da90
	sub_8254DA90(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82881cc8
	sub_82881CC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8256E1E4"))) PPC_WEAK_FUNC(sub_8256E1E4);
PPC_FUNC_IMPL(__imp__sub_8256E1E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8256E1E8"))) PPC_WEAK_FUNC(sub_8256E1E8);
PPC_FUNC_IMPL(__imp__sub_8256E1E8) {
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
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// mulli r9,r9,936
	ctx.r9.s64 = ctx.r9.s64 * 936;
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x8256e260
	if (cr6.eq) goto loc_8256E260;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mulli r11,r8,936
	r11.s64 = ctx.r8.s64 * 936;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
loc_8256E238:
	// lbz r9,136(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 136);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8256e250
	if (cr6.eq) goto loc_8256E250;
	// lwz r9,148(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x8256e254
	if (!cr6.eq) goto loc_8256E254;
loc_8256E250:
	// lwz r30,0(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8256E254:
	// addi r10,r10,936
	ctx.r10.s64 = ctx.r10.s64 + 936;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8256e238
	if (!cr6.eq) goto loc_8256E238;
loc_8256E260:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8256E270"))) PPC_WEAK_FUNC(sub_8256E270);
PPC_FUNC_IMPL(__imp__sub_8256E270) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8256E274"))) PPC_WEAK_FUNC(sub_8256E274);
PPC_FUNC_IMPL(__imp__sub_8256E274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256E278"))) PPC_WEAK_FUNC(sub_8256E278);
PPC_FUNC_IMPL(__imp__sub_8256E278) {
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
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mulli r11,r11,936
	r11.s64 = r11.s64 * 936;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// beq cr6,0x8256e310
	if (cr6.eq) goto loc_8256E310;
loc_8256E2B4:
	// lwz r11,148(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8256e2cc
	if (cr6.eq) goto loc_8256E2CC;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x8256e2d0
	if (!cr6.eq) goto loc_8256E2D0;
loc_8256E2CC:
	// li r11,0
	r11.s64 = 0;
loc_8256E2D0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256e2e8
	if (!cr6.eq) goto loc_8256E2E8;
	// addi r4,r4,936
	ctx.r4.s64 = ctx.r4.s64 + 936;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x8256e2b4
	if (!cr6.eq) goto loc_8256E2B4;
loc_8256E2E8:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// beq cr6,0x8256e310
	if (cr6.eq) goto loc_8256E310;
	// li r5,936
	ctx.r5.s64 = 936;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8256E310:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8256E320"))) PPC_WEAK_FUNC(sub_8256E320);
PPC_FUNC_IMPL(__imp__sub_8256E320) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8256E324"))) PPC_WEAK_FUNC(sub_8256E324);
PPC_FUNC_IMPL(__imp__sub_8256E324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256E328"))) PPC_WEAK_FUNC(sub_8256E328);
PPC_FUNC_IMPL(__imp__sub_8256E328) {
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
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mulli r11,r11,936
	r11.s64 = r11.s64 * 936;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8256e3ac
	if (cr6.eq) goto loc_8256E3AC;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_8256E36C:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x8256e384
	if (cr6.eq) goto loc_8256E384;
	// addi r4,r4,936
	ctx.r4.s64 = ctx.r4.s64 + 936;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x8256e36c
	if (!cr6.eq) goto loc_8256E36C;
loc_8256E384:
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x8256e3ac
	if (cr6.eq) goto loc_8256E3AC;
	// li r5,936
	ctx.r5.s64 = 936;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8256E3AC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8256E3BC"))) PPC_WEAK_FUNC(sub_8256E3BC);
PPC_FUNC_IMPL(__imp__sub_8256E3BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8256E3C0"))) PPC_WEAK_FUNC(sub_8256E3C0);
PPC_FUNC_IMPL(__imp__sub_8256E3C0) {
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
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mulli r10,r10,936
	ctx.r10.s64 = ctx.r10.s64 * 936;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x8256e438
	if (cr6.eq) goto loc_8256E438;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_8256E400:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x8256e418
	if (cr6.eq) goto loc_8256E418;
	// addi r11,r11,936
	r11.s64 = r11.s64 + 936;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8256e400
	if (!cr6.eq) goto loc_8256E400;
loc_8256E418:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8256e438
	if (cr6.eq) goto loc_8256E438;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lbz r31,136(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 136);
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8256E438:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8256E448"))) PPC_WEAK_FUNC(sub_8256E448);
PPC_FUNC_IMPL(__imp__sub_8256E448) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8256E44C"))) PPC_WEAK_FUNC(sub_8256E44C);
PPC_FUNC_IMPL(__imp__sub_8256E44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256E450"))) PPC_WEAK_FUNC(sub_8256E450);
PPC_FUNC_IMPL(__imp__sub_8256E450) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,1128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1128, ctx.r10.u32);
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82880e70
	sub_82880E70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82354cb8
	sub_82354CB8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256e328
	sub_8256E328(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8256e59c
	if (cr6.eq) goto loc_8256E59C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// addi r4,r11,20016
	ctx.r4.s64 = r11.s64 + 20016;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lwz r8,332(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-21348
	ctx.r4.s64 = ctx.r10.s64 + -21348;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// lwz r5,336(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r6,-21364
	ctx.r4.s64 = ctx.r6.s64 + -21364;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f13
	ctx.f1.f64 = double(ctx.f13.s64);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lbz r5,328(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 328);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r4,-21376
	ctx.r4.s64 = ctx.r4.s64 + -21376;
	// bl 0x82880f10
	sub_82880F10(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// addi r4,r11,-21388
	ctx.r4.s64 = r11.s64 + -21388;
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f12
	ctx.f1.f64 = double(ctx.f12.s64);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r5,r1,868
	ctx.r5.s64 = ctx.r1.s64 + 868;
	// addi r4,r8,-21400
	ctx.r4.s64 = ctx.r8.s64 + -21400;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lwz r6,344(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r4,r7,-21412
	ctx.r4.s64 = ctx.r7.s64 + -21412;
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f11
	ctx.f1.f64 = double(ctx.f11.s64);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// addi r4,r4,-21428
	ctx.r4.s64 = ctx.r4.s64 + -21428;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// addi r5,r1,348
	ctx.r5.s64 = ctx.r1.s64 + 348;
	// addi r4,r3,-21440
	ctx.r4.s64 = ctx.r3.s64 + -21440;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82881060
	sub_82881060(ctx, base);
loc_8256E59C:
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// lwz r3,1128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1128);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
}

__attribute__((alias("__imp__sub_8256E5C8"))) PPC_WEAK_FUNC(sub_8256E5C8);
PPC_FUNC_IMPL(__imp__sub_8256E5C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8256E5CC"))) PPC_WEAK_FUNC(sub_8256E5CC);
PPC_FUNC_IMPL(__imp__sub_8256E5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256E5D0"))) PPC_WEAK_FUNC(sub_8256E5D0);
PPC_FUNC_IMPL(__imp__sub_8256E5D0) {
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
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r28,0
	r28.s64 = 0;
	// mulli r10,r10,936
	ctx.r10.s64 = ctx.r10.s64 * 936;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x8256e634
	if (cr6.eq) goto loc_8256E634;
loc_8256E610:
	// lwz r9,152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, xer);
	// beq cr6,0x8256e628
	if (cr6.eq) goto loc_8256E628;
	// addi r11,r11,936
	r11.s64 = r11.s64 + 936;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8256e610
	if (!cr6.eq) goto loc_8256E610;
loc_8256E628:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8256e634
	if (cr6.eq) goto loc_8256E634;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8256E634:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8256E644"))) PPC_WEAK_FUNC(sub_8256E644);
PPC_FUNC_IMPL(__imp__sub_8256E644) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8256E648"))) PPC_WEAK_FUNC(sub_8256E648);
PPC_FUNC_IMPL(__imp__sub_8256E648) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r9,r10,-21180
	ctx.r9.s64 = ctx.r10.s64 + -21180;
	// stw r3,-22120(r11)
	PPC_STORE_U32(r11.u32 + -22120, ctx.r3.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r9,0(r19)
	PPC_STORE_U32(r19.u32 + 0, ctx.r9.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// ori r4,r4,65280
	ctx.r4.u64 = ctx.r4.u64 | 65280;
	// bl 0x826dadb8
	sub_826DADB8(ctx, base);
	// addi r29,r19,32
	r29.s64 = r19.s64 + 32;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// li r30,0
	r30.s64 = 0;
	// li r18,1
	r18.s64 = 1;
	// addi r6,r8,-21328
	ctx.r6.s64 = ctx.r8.s64 + -21328;
	// stw r30,44(r19)
	PPC_STORE_U32(r19.u32 + 44, r30.u32);
	// addi r5,r29,20
	ctx.r5.s64 = r29.s64 + 20;
	// stw r18,48(r19)
	PPC_STORE_U32(r19.u32 + 48, r18.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// stw r6,32(r19)
	PPC_STORE_U32(r19.u32 + 32, ctx.r6.u32);
	// stw r5,36(r19)
	PPC_STORE_U32(r19.u32 + 36, ctx.r5.u32);
	// stw r4,40(r19)
	PPC_STORE_U32(r19.u32 + 40, ctx.r4.u32);
	// lwz r3,-14756(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256e6c4
	if (cr6.eq) goto loc_8256E6C4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
loc_8256E6C4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,14000
	ctx.r4.s64 = r11.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r10,-21220
	ctx.r5.s64 = ctx.r10.s64 + -21220;
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
	// bne cr6,0x8256e984
	if (!cr6.eq) goto loc_8256E984;
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
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// addi r28,r11,-21236
	r28.s64 = r11.s64 + -21236;
	// addi r27,r10,-21252
	r27.s64 = ctx.r10.s64 + -21252;
	// addi r26,r9,-21264
	r26.s64 = ctx.r9.s64 + -21264;
	// addi r25,r8,-21276
	r25.s64 = ctx.r8.s64 + -21276;
	// addi r24,r7,-21292
	r24.s64 = ctx.r7.s64 + -21292;
	// addi r23,r6,-21304
	r23.s64 = ctx.r6.s64 + -21304;
	// addi r22,r5,14076
	r22.s64 = ctx.r5.s64 + 14076;
	// addi r21,r4,-21320
	r21.s64 = ctx.r4.s64 + -21320;
	// addi r20,r3,21820
	r20.s64 = ctx.r3.s64 + 21820;
loc_8256E740:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8256e768
	if (!cr6.gt) goto loc_8256E768;
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
loc_8256E768:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r9,r11,936
	ctx.r9.s64 = r11.s64 * 936;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add. r31,r9,r10
	r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// beq 0x8256e7c4
	if (cr0.eq) goto loc_8256E7C4;
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// stb r18,136(r31)
	PPC_STORE_U8(r31.u32 + 136, r18.u8);
	// stw r30,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r30.u32);
	// stb r30,156(r31)
	PPC_STORE_U8(r31.u32 + 156, r30.u8);
	// stb r30,416(r31)
	PPC_STORE_U8(r31.u32 + 416, r30.u8);
	// stb r30,676(r31)
	PPC_STORE_U8(r31.u32 + 676, r30.u8);
	// b 0x8256e7c8
	goto loc_8256E7C8;
loc_8256E7C4:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8256E7C8:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
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
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
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
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
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
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,136(r31)
	PPC_STORE_U8(r31.u32 + 136, ctx.r9.u8);
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// stw r30,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,152(r31)
	PPC_STORE_U32(r31.u32 + 152, ctx.r3.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
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
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
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
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
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
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r31,676
	ctx.r3.s64 = r31.s64 + 676;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8256e740
	if (cr6.eq) goto loc_8256E740;
loc_8256E984:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
}

__attribute__((alias("__imp__sub_8256E99C"))) PPC_WEAK_FUNC(sub_8256E99C);
PPC_FUNC_IMPL(__imp__sub_8256E99C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_8256E9A0"))) PPC_WEAK_FUNC(sub_8256E9A0);
PPC_FUNC_IMPL(__imp__sub_8256E9A0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-21180
	ctx.r10.s64 = r11.s64 + -21180;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// bl 0x8256eae0
	sub_8256EAE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826dade8
	sub_826DADE8(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// addi r7,r9,-21456
	ctx.r7.s64 = ctx.r9.s64 + -21456;
	// li r11,0
	r11.s64 = 0;
	// stw r7,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r7.u32);
	// stw r11,-22120(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22120, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256EA14"))) PPC_WEAK_FUNC(sub_8256EA14);
PPC_FUNC_IMPL(__imp__sub_8256EA14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256EA18"))) PPC_WEAK_FUNC(sub_8256EA18);
PPC_FUNC_IMPL(__imp__sub_8256EA18) {
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
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r9,r11,-21456
	ctx.r9.s64 = r11.s64 + -21456;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// li r11,0
	r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r11,-22120(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22120, r11.u32);
	// beq cr6,0x8256ea58
	if (cr6.eq) goto loc_8256EA58;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8256EA58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256EA68"))) PPC_WEAK_FUNC(sub_8256EA68);
PPC_FUNC_IMPL(__imp__sub_8256EA68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256EA6C"))) PPC_WEAK_FUNC(sub_8256EA6C);
PPC_FUNC_IMPL(__imp__sub_8256EA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256EA70"))) PPC_WEAK_FUNC(sub_8256EA70);
PPC_FUNC_IMPL(__imp__sub_8256EA70) {
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
	// addi r9,r11,-21448
	ctx.r9.s64 = r11.s64 + -21448;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8256eab4
	if (!cr6.gt) goto loc_8256EAB4;
loc_8256EA9C:
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
	// bgt cr6,0x8256ea9c
	if (cr6.gt) goto loc_8256EA9C;
loc_8256EAB4:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8256eacc
	if (cr6.eq) goto loc_8256EACC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8256EACC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256EADC"))) PPC_WEAK_FUNC(sub_8256EADC);
PPC_FUNC_IMPL(__imp__sub_8256EADC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256EAE0"))) PPC_WEAK_FUNC(sub_8256EAE0);
PPC_FUNC_IMPL(__imp__sub_8256EAE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,-21328
	ctx.r9.s64 = r11.s64 + -21328;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8256eb10
	if (!cr6.gt) goto loc_8256EB10;
loc_8256EAF8:
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
	// bgt cr6,0x8256eaf8
	if (cr6.gt) goto loc_8256EAF8;
loc_8256EB10:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,-21448
	ctx.r9.s64 = r11.s64 + -21448;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blelr cr6
	if (!cr6.gt) return;
loc_8256EB28:
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
	// bgt cr6,0x8256eb28
	if (cr6.gt) goto loc_8256EB28;
}

__attribute__((alias("__imp__sub_8256EB40"))) PPC_WEAK_FUNC(sub_8256EB40);
PPC_FUNC_IMPL(__imp__sub_8256EB40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256EB44"))) PPC_WEAK_FUNC(sub_8256EB44);
PPC_FUNC_IMPL(__imp__sub_8256EB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256EB48"))) PPC_WEAK_FUNC(sub_8256EB48);
PPC_FUNC_IMPL(__imp__sub_8256EB48) {
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
	// bl 0x8256eae0
	sub_8256EAE0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8256eb80
	if (cr6.eq) goto loc_8256EB80;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8256EB80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256EB94"))) PPC_WEAK_FUNC(sub_8256EB94);
PPC_FUNC_IMPL(__imp__sub_8256EB94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256EB98"))) PPC_WEAK_FUNC(sub_8256EB98);
PPC_FUNC_IMPL(__imp__sub_8256EB98) {
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
	// bl 0x8256e9a0
	sub_8256E9A0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8256ebd0
	if (cr6.eq) goto loc_8256EBD0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8256EBD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256EBE4"))) PPC_WEAK_FUNC(sub_8256EBE4);
PPC_FUNC_IMPL(__imp__sub_8256EBE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256EBE8"))) PPC_WEAK_FUNC(sub_8256EBE8);
PPC_FUNC_IMPL(__imp__sub_8256EBE8) {
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,18
	ctx.r10.s64 = 18;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r4,r11,-1000
	ctx.r4.s64 = r11.s64 + -1000;
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// divw r4,r4,r10
	ctx.r4.s32 = ctx.r4.s32 / ctx.r10.s32;
	// bl 0x82574320
	sub_82574320(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8256EC3C"))) PPC_WEAK_FUNC(sub_8256EC3C);
PPC_FUNC_IMPL(__imp__sub_8256EC3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256EC40"))) PPC_WEAK_FUNC(sub_8256EC40);
PPC_FUNC_IMPL(__imp__sub_8256EC40) {
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
	// addi r29,r3,272
	r29.s64 = ctx.r3.s64 + 272;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r28,0
	r28.s64 = 0;
	// bl 0x826dad80
	sub_826DAD80(ctx, base);
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addi r11,r31,64
	r11.s64 = r31.s64 + 64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x8256eccc
	if (cr6.eq) goto loc_8256ECCC;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
loc_8256EC98:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpw cr6,r8,r30
	cr6.compare<int32_t>(ctx.r8.s32, r30.s32, xer);
	// beq cr6,0x8256ecc8
	if (cr6.eq) goto loc_8256ECC8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8256ec98
	if (!cr6.eq) goto loc_8256EC98;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826dadb0
	sub_826DADB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8256ECC8:
	// mr r28,r11
	r28.u64 = r11.u64;
loc_8256ECCC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826dadb0
	sub_826DADB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8256ECDC"))) PPC_WEAK_FUNC(sub_8256ECDC);
PPC_FUNC_IMPL(__imp__sub_8256ECDC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8256ECE0"))) PPC_WEAK_FUNC(sub_8256ECE0);
PPC_FUNC_IMPL(__imp__sub_8256ECE0) {
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
	// addi r29,r3,272
	r29.s64 = ctx.r3.s64 + 272;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826dad80
	sub_826DAD80(ctx, base);
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addi r11,r31,64
	r11.s64 = r31.s64 + 64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x8256eda0
	if (cr6.eq) goto loc_8256EDA0;
loc_8256ED24:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, xer);
	// beq cr6,0x8256ed4c
	if (cr6.eq) goto loc_8256ED4C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8256ed24
	if (!cr6.eq) goto loc_8256ED24;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826dadb0
	sub_826DADB0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8256ED4C:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// srawi r10,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x8256ed94
	if (!cr6.lt) goto loc_8256ED94;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_8256ED6C:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// blt cr6,0x8256ed6c
	if (cr6.lt) goto loc_8256ED6C;
loc_8256ED94:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
loc_8256EDA0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826dadb0
	sub_826DADB0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8256EDAC"))) PPC_WEAK_FUNC(sub_8256EDAC);
PPC_FUNC_IMPL(__imp__sub_8256EDAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8256EDB0"))) PPC_WEAK_FUNC(sub_8256EDB0);
PPC_FUNC_IMPL(__imp__sub_8256EDB0) {
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
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// lwz r8,132(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,124(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// extsw r31,r11
	r31.s64 = r11.s32;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r7,24192(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24192);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r28,r3,120
	r28.s64 = ctx.r3.s64 + 120;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// stw r7,1092(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1092, ctx.r7.u32);
	// beq cr6,0x8256eeb4
	if (cr6.eq) goto loc_8256EEB4;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_8256EDF4:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x8256ee1c
	if (cr6.eq) goto loc_8256EE1C;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8256edf4
	if (!cr6.eq) goto loc_8256EDF4;
	// lwz r3,1092(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1092);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x828e9468
	return;
loc_8256EE1C:
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r11,1
	r11.s64 = 1;
	// li r8,18
	ctx.r8.s64 = 18;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r11.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// beq cr6,0x8256ee88
	if (cr6.eq) goto loc_8256EE88;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// b 0x8256ee8c
	goto loc_8256EE8C;
loc_8256EE88:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
loc_8256EE8C:
	// li r8,-1
	ctx.r8.s64 = -1;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,1012
	ctx.r6.s64 = 1012;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x825742b8
	sub_825742B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8256f510
	sub_8256F510(ctx, base);
loc_8256EEB4:
	// lwz r3,1092(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1092);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
}

__attribute__((alias("__imp__sub_8256EEC0"))) PPC_WEAK_FUNC(sub_8256EEC0);
PPC_FUNC_IMPL(__imp__sub_8256EEC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8256EEC4"))) PPC_WEAK_FUNC(sub_8256EEC4);
PPC_FUNC_IMPL(__imp__sub_8256EEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256EEC8"))) PPC_WEAK_FUNC(sub_8256EEC8);
PPC_FUNC_IMPL(__imp__sub_8256EEC8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r11,-21096
	ctx.r9.s64 = r11.s64 + -21096;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,26076(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26076);
	// lwz r3,136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// bl 0x827236c8
	sub_827236C8(ctx, base);
	// lis r27,-31970
	r27.s64 = -2095185920;
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256ef18
	if (cr6.eq) goto loc_8256EF18;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256ef1c
	if (!cr6.eq) goto loc_8256EF1C;
loc_8256EF18:
	// li r11,0
	r11.s64 = 0;
loc_8256EF1C:
	// lis r28,-31933
	r28.s64 = -2092761088;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-22080(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -22080);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r26,r29,8
	r26.s64 = r29.s64 + 8;
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
	// bne cr6,0x8256ef74
	if (!cr6.eq) goto loc_8256EF74;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256ef74
	if (!cr6.eq) goto loc_8256EF74;
	// lwz r11,-22080(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -22080);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8256EF74:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256ef90
	if (cr6.eq) goto loc_8256EF90;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256ef94
	if (!cr6.eq) goto loc_8256EF94;
loc_8256EF90:
	// li r11,0
	r11.s64 = 0;
loc_8256EF94:
	// lis r28,-31933
	r28.s64 = -2092761088;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-22076(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -22076);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r27,r29,36
	r27.s64 = r29.s64 + 36;
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
	// bne cr6,0x8256efec
	if (!cr6.eq) goto loc_8256EFEC;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256efec
	if (!cr6.eq) goto loc_8256EFEC;
	// lwz r11,-22076(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -22076);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8256EFEC:
	// addi r3,r29,272
	ctx.r3.s64 = r29.s64 + 272;
	// bl 0x826dad78
	sub_826DAD78(ctx, base);
	// addi r3,r29,120
	ctx.r3.s64 = r29.s64 + 120;
	// bl 0x8256f720
	sub_8256F720(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x8256f6b8
	sub_8256F6B8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8256F018"))) PPC_WEAK_FUNC(sub_8256F018);
PPC_FUNC_IMPL(__imp__sub_8256F018) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8256F01C"))) PPC_WEAK_FUNC(sub_8256F01C);
PPC_FUNC_IMPL(__imp__sub_8256F01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256F020"))) PPC_WEAK_FUNC(sub_8256F020);
PPC_FUNC_IMPL(__imp__sub_8256F020) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,-21096
	ctx.r10.s64 = r11.s64 + -21096;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r25,r31,36
	r25.s64 = r31.s64 + 36;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r11,r31,120
	r11.s64 = r31.s64 + 120;
	// addi r30,r31,64
	r30.s64 = r31.s64 + 64;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r4,r11,24
	ctx.r4.s64 = r11.s64 + 24;
	// stw r9,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r9.u32);
	// li r24,0
	r24.s64 = 0;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// addi r6,r8,-21120
	ctx.r6.s64 = ctx.r8.s64 + -21120;
	// addi r5,r30,20
	ctx.r5.s64 = r30.s64 + 20;
	// stw r24,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r24.u32);
	// addi r11,r7,-21108
	r11.s64 = ctx.r7.s64 + -21108;
	// stw r6,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r6.u32);
	// stw r5,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r5.u32);
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// stw r24,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r24.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stw r4,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r4.u32);
	// stw r9,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r9.u32);
	// stw r10,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r10.u32);
	// bl 0x826dad38
	sub_826DAD38(ctx, base);
	// lis r28,-31970
	r28.s64 = -2095185920;
	// lis r11,-32169
	r11.s64 = -2108227584;
	// addi r26,r11,-5144
	r26.s64 = r11.s64 + -5144;
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8256f0dc
	if (cr6.eq) goto loc_8256F0DC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256f0e0
	if (!cr6.eq) goto loc_8256F0E0;
loc_8256F0DC:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_8256F0E0:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r23,12(r10)
	r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r27,r11,-3784
	r27.s64 = r11.s64 + -3784;
	// addi r3,r10,-2588
	ctx.r3.s64 = ctx.r10.s64 + -2588;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,-22080(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22080);
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
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32169
	r11.s64 = -2108227584;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r29,r11,-4688
	r29.s64 = r11.s64 + -4688;
	// beq cr6,0x8256f154
	if (cr6.eq) goto loc_8256F154;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8256f158
	if (!cr6.eq) goto loc_8256F158;
loc_8256F154:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8256F158:
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r10,-2640
	ctx.r3.s64 = ctx.r10.s64 + -2640;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,-22076(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22076);
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
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r8,8
	cr6.compare<uint32_t>(ctx.r8.u32, 8, xer);
	// bge cr6,0x8256f1c4
	if (!cr6.lt) goto loc_8256F1C4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8256F1C4:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,26076(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 26076);
	// lwz r3,136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// bl 0x827236b0
	sub_827236B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8256F1E0"))) PPC_WEAK_FUNC(sub_8256F1E0);
PPC_FUNC_IMPL(__imp__sub_8256F1E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8256F1E4"))) PPC_WEAK_FUNC(sub_8256F1E4);
PPC_FUNC_IMPL(__imp__sub_8256F1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256F1E8"))) PPC_WEAK_FUNC(sub_8256F1E8);
PPC_FUNC_IMPL(__imp__sub_8256F1E8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,272
	r26.s64 = ctx.r3.s64 + 272;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x826dad80
	sub_826DAD80(ctx, base);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bge cr6,0x8256f298
	if (!cr6.lt) goto loc_8256F298;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// li r9,28
	ctx.r9.s64 = 28;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// addi r7,r10,-21068
	ctx.r7.s64 = ctx.r10.s64 + -21068;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// li r8,205
	ctx.r8.s64 = 205;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256f288
	if (cr6.eq) goto loc_8256F288;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r27.u32);
	// addi r9,r11,-21148
	ctx.r9.s64 = r11.s64 + -21148;
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r28.u32);
loc_8256F288:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_8256F298:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826dadb0
	sub_826DADB0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8256f2cc
	if (cr6.eq) goto loc_8256F2CC;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,-22080(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22080);
	// lwz r10,18436(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18436);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r3,100(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// bl 0x8256f868
	sub_8256F868(ctx, base);
loc_8256F2CC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8256F2D4"))) PPC_WEAK_FUNC(sub_8256F2D4);
PPC_FUNC_IMPL(__imp__sub_8256F2D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8256F2D8"))) PPC_WEAK_FUNC(sub_8256F2D8);
PPC_FUNC_IMPL(__imp__sub_8256F2D8) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,-22076(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22076);
	// lwz r10,18436(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18436);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r3,100(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// bl 0x8256f8e8
	sub_8256F8E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8256F318"))) PPC_WEAK_FUNC(sub_8256F318);
PPC_FUNC_IMPL(__imp__sub_8256F318) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256F31C"))) PPC_WEAK_FUNC(sub_8256F31C);
PPC_FUNC_IMPL(__imp__sub_8256F31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256F320"))) PPC_WEAK_FUNC(sub_8256F320);
PPC_FUNC_IMPL(__imp__sub_8256F320) {
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
	// lis r11,-32169
	r11.s64 = -2108227584;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r11,-3368
	ctx.r9.s64 = r11.s64 + -3368;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,26076(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26076);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// bl 0x827236f8
	sub_827236F8(ctx, base);
	// lwz r8,132(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r8,8
	cr6.compare<uint32_t>(ctx.r8.u32, 8, xer);
	// bge cr6,0x8256f374
	if (!cr6.lt) goto loc_8256F374;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// b 0x8256f388
	goto loc_8256F388;
loc_8256F374:
	// addi r29,r31,120
	r29.s64 = r31.s64 + 120;
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8256f510
	sub_8256F510(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8256F388:
	// std r28,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r28.u64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// bl 0x8256f488
	sub_8256F488(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8256F39C"))) PPC_WEAK_FUNC(sub_8256F39C);
PPC_FUNC_IMPL(__imp__sub_8256F39C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8256F3A0"))) PPC_WEAK_FUNC(sub_8256F3A0);
PPC_FUNC_IMPL(__imp__sub_8256F3A0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,1(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8256f408
	if (cr6.lt) goto loc_8256F408;
	// bne cr6,0x8256f448
	if (!cr6.eq) goto loc_8256F448;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8256ec40
	sub_8256EC40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256f448
	if (cr6.eq) goto loc_8256F448;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8256f3f8
	if (!cr6.eq) goto loc_8256F3F8;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// bl 0x8256f660
	sub_8256F660(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_8256F3F8:
	// li r11,4
	r11.s64 = 4;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_8256F408:
	// li r11,0
	r11.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8256f320
	sub_8256F320(ctx, base);
loc_8256F448:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8256F44C"))) PPC_WEAK_FUNC(sub_8256F44C);
PPC_FUNC_IMPL(__imp__sub_8256F44C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8256F450"))) PPC_WEAK_FUNC(sub_8256F450);
PPC_FUNC_IMPL(__imp__sub_8256F450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8256f468
	if (cr6.eq) goto loc_8256F468;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8256f46c
	if (!cr6.eq) goto loc_8256F46C;
loc_8256F468:
	// li r11,1
	r11.s64 = 1;
loc_8256F46C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256F474"))) PPC_WEAK_FUNC(sub_8256F474);
PPC_FUNC_IMPL(__imp__sub_8256F474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256F478"))) PPC_WEAK_FUNC(sub_8256F478);
PPC_FUNC_IMPL(__imp__sub_8256F478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
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

__attribute__((alias("__imp__sub_8256F488"))) PPC_WEAK_FUNC(sub_8256F488);
PPC_FUNC_IMPL(__imp__sub_8256F488) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8256f4c8
	if (!cr6.gt) goto loc_8256F4C8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8256F4C8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256f4f4
	if (cr0.eq) goto loc_8256F4F4;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// std r9,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r9.u64);
loc_8256F4F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256F508"))) PPC_WEAK_FUNC(sub_8256F508);
PPC_FUNC_IMPL(__imp__sub_8256F508) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256F50C"))) PPC_WEAK_FUNC(sub_8256F50C);
PPC_FUNC_IMPL(__imp__sub_8256F50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256F510"))) PPC_WEAK_FUNC(sub_8256F510);
PPC_FUNC_IMPL(__imp__sub_8256F510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r8,r10,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r10.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// srawi r10,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x8256f568
	if (!cr6.lt) goto loc_8256F568;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
loc_8256F534:
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r7,r11,16
	ctx.r7.s64 = r11.s64 + 16;
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// std r6,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r6.u64);
	// ld r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// std r5,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r5.u64);
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// blt cr6,0x8256f534
	if (cr6.lt) goto loc_8256F534;
loc_8256F568:
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r11.u32);
}

__attribute__((alias("__imp__sub_8256F578"))) PPC_WEAK_FUNC(sub_8256F578);
PPC_FUNC_IMPL(__imp__sub_8256F578) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256F57C"))) PPC_WEAK_FUNC(sub_8256F57C);
PPC_FUNC_IMPL(__imp__sub_8256F57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256F580"))) PPC_WEAK_FUNC(sub_8256F580);
PPC_FUNC_IMPL(__imp__sub_8256F580) {
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
	// addi r9,r11,-21172
	ctx.r9.s64 = r11.s64 + -21172;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8256f5c4
	if (!cr6.gt) goto loc_8256F5C4;
loc_8256F5AC:
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
	// bgt cr6,0x8256f5ac
	if (cr6.gt) goto loc_8256F5AC;
loc_8256F5C4:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8256f5dc
	if (cr6.eq) goto loc_8256F5DC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8256F5DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256F5EC"))) PPC_WEAK_FUNC(sub_8256F5EC);
PPC_FUNC_IMPL(__imp__sub_8256F5EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256F5F0"))) PPC_WEAK_FUNC(sub_8256F5F0);
PPC_FUNC_IMPL(__imp__sub_8256F5F0) {
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
	// addi r9,r11,-21160
	ctx.r9.s64 = r11.s64 + -21160;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8256f634
	if (!cr6.gt) goto loc_8256F634;
loc_8256F61C:
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
	// bgt cr6,0x8256f61c
	if (cr6.gt) goto loc_8256F61C;
loc_8256F634:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8256f64c
	if (cr6.eq) goto loc_8256F64C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8256F64C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256F65C"))) PPC_WEAK_FUNC(sub_8256F65C);
PPC_FUNC_IMPL(__imp__sub_8256F65C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256F660"))) PPC_WEAK_FUNC(sub_8256F660);
PPC_FUNC_IMPL(__imp__sub_8256F660) {
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
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// addi r11,r3,20
	r11.s64 = ctx.r3.s64 + 20;
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// blt cr6,0x8256f68c
	if (cr6.lt) goto loc_8256F68C;
	// addi r11,r1,132
	r11.s64 = ctx.r1.s64 + 132;
loc_8256F68C:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82605748
	sub_82605748(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256F6B0"))) PPC_WEAK_FUNC(sub_8256F6B0);
PPC_FUNC_IMPL(__imp__sub_8256F6B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256F6B4"))) PPC_WEAK_FUNC(sub_8256F6B4);
PPC_FUNC_IMPL(__imp__sub_8256F6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256F6B8"))) PPC_WEAK_FUNC(sub_8256F6B8);
PPC_FUNC_IMPL(__imp__sub_8256F6B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,-21120
	ctx.r9.s64 = r11.s64 + -21120;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8256f6e8
	if (!cr6.gt) goto loc_8256F6E8;
loc_8256F6D0:
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
	// bgt cr6,0x8256f6d0
	if (cr6.gt) goto loc_8256F6D0;
loc_8256F6E8:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,-21172
	ctx.r9.s64 = r11.s64 + -21172;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blelr cr6
	if (!cr6.gt) return;
loc_8256F700:
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
	// bgt cr6,0x8256f700
	if (cr6.gt) goto loc_8256F700;
}

__attribute__((alias("__imp__sub_8256F718"))) PPC_WEAK_FUNC(sub_8256F718);
PPC_FUNC_IMPL(__imp__sub_8256F718) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256F71C"))) PPC_WEAK_FUNC(sub_8256F71C);
PPC_FUNC_IMPL(__imp__sub_8256F71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256F720"))) PPC_WEAK_FUNC(sub_8256F720);
PPC_FUNC_IMPL(__imp__sub_8256F720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,-21108
	ctx.r9.s64 = r11.s64 + -21108;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8256f750
	if (!cr6.gt) goto loc_8256F750;
loc_8256F738:
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
	// bgt cr6,0x8256f738
	if (cr6.gt) goto loc_8256F738;
loc_8256F750:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,-21160
	ctx.r9.s64 = r11.s64 + -21160;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blelr cr6
	if (!cr6.gt) return;
loc_8256F768:
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
	// bgt cr6,0x8256f768
	if (cr6.gt) goto loc_8256F768;
}

__attribute__((alias("__imp__sub_8256F780"))) PPC_WEAK_FUNC(sub_8256F780);
PPC_FUNC_IMPL(__imp__sub_8256F780) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256F784"))) PPC_WEAK_FUNC(sub_8256F784);
PPC_FUNC_IMPL(__imp__sub_8256F784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256F788"))) PPC_WEAK_FUNC(sub_8256F788);
PPC_FUNC_IMPL(__imp__sub_8256F788) {
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
	// bl 0x8256f6b8
	sub_8256F6B8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8256f7c0
	if (cr6.eq) goto loc_8256F7C0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8256F7C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256F7D4"))) PPC_WEAK_FUNC(sub_8256F7D4);
PPC_FUNC_IMPL(__imp__sub_8256F7D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256F7D8"))) PPC_WEAK_FUNC(sub_8256F7D8);
PPC_FUNC_IMPL(__imp__sub_8256F7D8) {
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
	// bl 0x8256f720
	sub_8256F720(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8256f810
	if (cr6.eq) goto loc_8256F810;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8256F810:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256F824"))) PPC_WEAK_FUNC(sub_8256F824);
PPC_FUNC_IMPL(__imp__sub_8256F824) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256F828"))) PPC_WEAK_FUNC(sub_8256F828);
PPC_FUNC_IMPL(__imp__sub_8256F828) {
	PPC_FUNC_PROLOGUE();
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8256ece0
	sub_8256ECE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8256F860"))) PPC_WEAK_FUNC(sub_8256F860);
PPC_FUNC_IMPL(__imp__sub_8256F860) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256F864"))) PPC_WEAK_FUNC(sub_8256F864);
PPC_FUNC_IMPL(__imp__sub_8256F864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256F868"))) PPC_WEAK_FUNC(sub_8256F868);
PPC_FUNC_IMPL(__imp__sub_8256F868) {
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
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256f8cc
	if (cr6.eq) goto loc_8256F8CC;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-21088
	ctx.r8.s64 = ctx.r9.s64 + -21088;
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
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8256F8CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

