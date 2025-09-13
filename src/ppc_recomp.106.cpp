#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_824B2098"))) PPC_WEAK_FUNC(sub_824B2098);
PPC_FUNC_IMPL(__imp__sub_824B2098) {
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
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 212);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x824b2170
	if (cr6.eq) goto loc_824B2170;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x824b2170
	if (cr6.eq) goto loc_824B2170;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x824b20f0
	if (!cr6.gt) goto loc_824B20F0;
loc_824B20D8:
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
	// bgt cr6,0x824b20d8
	if (cr6.gt) goto loc_824B20D8;
loc_824B20F0:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lbz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 128);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x824b2108
	if (!cr6.eq) goto loc_824B2108;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b1f80
	sub_824B1F80(ctx, base);
loc_824B2108:
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lis r8,-32181
	ctx.r8.s64 = -2109014016;
	// addi r6,r8,7808
	ctx.r6.s64 = ctx.r8.s64 + 7808;
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// subf r5,r10,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r10.s64;
	// srawi r5,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// bl 0x823bb9a8
	sub_823BB9A8(ctx, base);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,96(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// ble cr6,0x824b2170
	if (!cr6.gt) goto loc_824B2170;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// ble cr6,0x824b2170
	if (!cr6.gt) goto loc_824B2170;
loc_824B2154:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// bgt cr6,0x824b2154
	if (cr6.gt) goto loc_824B2154;
loc_824B2170:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B2180"))) PPC_WEAK_FUNC(sub_824B2180);
PPC_FUNC_IMPL(__imp__sub_824B2180) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B2184"))) PPC_WEAK_FUNC(sub_824B2184);
PPC_FUNC_IMPL(__imp__sub_824B2184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B2188"))) PPC_WEAK_FUNC(sub_824B2188);
PPC_FUNC_IMPL(__imp__sub_824B2188) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
}

__attribute__((alias("__imp__sub_824B218C"))) PPC_WEAK_FUNC(sub_824B218C);
PPC_FUNC_IMPL(__imp__sub_824B218C) {
	PPC_FUNC_PROLOGUE();
	// b 0x822b59f0
	sub_822B59F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824B2190"))) PPC_WEAK_FUNC(sub_824B2190);
PPC_FUNC_IMPL(__imp__sub_824B2190) {
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
	// bl 0x826eda38
	sub_826EDA38(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x824b4ce8
	sub_824B4CE8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B21D0"))) PPC_WEAK_FUNC(sub_824B21D0);
PPC_FUNC_IMPL(__imp__sub_824B21D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B21D4"))) PPC_WEAK_FUNC(sub_824B21D4);
PPC_FUNC_IMPL(__imp__sub_824B21D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B21D8"))) PPC_WEAK_FUNC(sub_824B21D8);
PPC_FUNC_IMPL(__imp__sub_824B21D8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-2300
	ctx.r9.s64 = r11.s64 + -2300;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826ed958
	sub_826ED958(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x824b2228
	if (cr6.eq) goto loc_824B2228;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824B2228:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B223C"))) PPC_WEAK_FUNC(sub_824B223C);
PPC_FUNC_IMPL(__imp__sub_824B223C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B2240"))) PPC_WEAK_FUNC(sub_824B2240);
PPC_FUNC_IMPL(__imp__sub_824B2240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-2300
	ctx.r9.s64 = r11.s64 + -2300;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// b 0x826ed958
	sub_826ED958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824B225C"))) PPC_WEAK_FUNC(sub_824B225C);
PPC_FUNC_IMPL(__imp__sub_824B225C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B2260"))) PPC_WEAK_FUNC(sub_824B2260);
PPC_FUNC_IMPL(__imp__sub_824B2260) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826ed908
	sub_826ED908(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3416
	ctx.r7.s64 = ctx.r10.s64 + 3416;
	// addi r6,r9,-2244
	ctx.r6.s64 = ctx.r9.s64 + -2244;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// addi r5,r8,-2260
	ctx.r5.s64 = ctx.r8.s64 + -2260;
	// stw r7,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r7.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B22C8"))) PPC_WEAK_FUNC(sub_824B22C8);
PPC_FUNC_IMPL(__imp__sub_824B22C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B22CC"))) PPC_WEAK_FUNC(sub_824B22CC);
PPC_FUNC_IMPL(__imp__sub_824B22CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B22D0"))) PPC_WEAK_FUNC(sub_824B22D0);
PPC_FUNC_IMPL(__imp__sub_824B22D0) {
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
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r11
	r31.s64 = r11.s32;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r7
	cr6.compare<uint32_t>(r31.u32, ctx.r7.u32, xer);
	// beq cr6,0x824b2398
	if (cr6.eq) goto loc_824B2398;
loc_824B2308:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x824b56f8
	sub_824B56F8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b2378
	if (!cr6.eq) goto loc_824B2378;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// subf r8,r9,r31
	ctx.r8.s64 = r31.s64 - ctx.r9.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// srawi r11,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	r11.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x824b2368
	if (!cr6.lt) goto loc_824B2368;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_824B2340:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// blt cr6,0x824b2340
	if (cr6.lt) goto loc_824B2340;
loc_824B2368:
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// b 0x824b237c
	goto loc_824B237C;
loc_824B2378:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_824B237C:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// bne cr6,0x824b2308
	if (!cr6.eq) goto loc_824B2308;
loc_824B2398:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B23AC"))) PPC_WEAK_FUNC(sub_824B23AC);
PPC_FUNC_IMPL(__imp__sub_824B23AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B23B0"))) PPC_WEAK_FUNC(sub_824B23B0);
PPC_FUNC_IMPL(__imp__sub_824B23B0) {
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
	// lwz r30,4(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824b4dc8
	sub_824B4DC8(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// bl 0x826ed9f0
	sub_826ED9F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B240C"))) PPC_WEAK_FUNC(sub_824B240C);
PPC_FUNC_IMPL(__imp__sub_824B240C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B2410"))) PPC_WEAK_FUNC(sub_824B2410);
PPC_FUNC_IMPL(__imp__sub_824B2410) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
}

__attribute__((alias("__imp__sub_824B2414"))) PPC_WEAK_FUNC(sub_824B2414);
PPC_FUNC_IMPL(__imp__sub_824B2414) {
	PPC_FUNC_PROLOGUE();
	// b 0x824b21d8
	sub_824B21D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824B2418"))) PPC_WEAK_FUNC(sub_824B2418);
PPC_FUNC_IMPL(__imp__sub_824B2418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-2300
	ctx.r9.s64 = r11.s64 + -2300;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// b 0x826ed958
	sub_826ED958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824B2434"))) PPC_WEAK_FUNC(sub_824B2434);
PPC_FUNC_IMPL(__imp__sub_824B2434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B2438"))) PPC_WEAK_FUNC(sub_824B2438);
PPC_FUNC_IMPL(__imp__sub_824B2438) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826ed908
	sub_826ED908(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3416
	ctx.r7.s64 = ctx.r10.s64 + 3416;
	// addi r6,r9,-2188
	ctx.r6.s64 = ctx.r9.s64 + -2188;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// addi r5,r8,-2204
	ctx.r5.s64 = ctx.r8.s64 + -2204;
	// stw r7,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r7.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B24A0"))) PPC_WEAK_FUNC(sub_824B24A0);
PPC_FUNC_IMPL(__imp__sub_824B24A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B24A4"))) PPC_WEAK_FUNC(sub_824B24A4);
PPC_FUNC_IMPL(__imp__sub_824B24A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B24A8"))) PPC_WEAK_FUNC(sub_824B24A8);
PPC_FUNC_IMPL(__imp__sub_824B24A8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// ble cr6,0x824b24ec
	if (!cr6.gt) goto loc_824B24EC;
loc_824B24D4:
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
	// bgt cr6,0x824b24d4
	if (cr6.gt) goto loc_824B24D4;
loc_824B24EC:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r3,r11,296
	ctx.r3.s64 = r11.s64 + 296;
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x824b250c
	if (cr6.eq) goto loc_824B250C;
	// lwz r4,260(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// bl 0x824b59d8
	sub_824B59D8(ctx, base);
	// b 0x824b2514
	goto loc_824B2514;
loc_824B250C:
	// lwz r4,264(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 264);
	// bl 0x824b5a30
	sub_824B5A30(ctx, base);
loc_824B2514:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b252c
	if (cr6.eq) goto loc_824B252C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_824B252C:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lis r29,-31970
	r29.s64 = -2095185920;
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x824b2584
	if (cr6.eq) goto loc_824B2584;
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824b255c
	if (cr6.eq) goto loc_824B255C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b2560
	if (!cr6.eq) goto loc_824B2560;
loc_824B255C:
	// li r11,0
	r11.s64 = 0;
loc_824B2560:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,84(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x822b4af0
	sub_822B4AF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822b4bc0
	sub_822B4BC0(ctx, base);
loc_824B2584:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r30,24(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// beq cr6,0x824b25a8
	if (cr6.eq) goto loc_824B25A8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b25ac
	if (!cr6.eq) goto loc_824B25AC;
loc_824B25A8:
	// li r11,0
	r11.s64 = 0;
loc_824B25AC:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,84(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,220(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 220);
	// bl 0x822b2d40
	sub_822B2D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822b2e20
	sub_822B2E20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826edad8
	sub_826EDAD8(ctx, base);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_824B25F4"))) PPC_WEAK_FUNC(sub_824B25F4);
PPC_FUNC_IMPL(__imp__sub_824B25F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824B25F8"))) PPC_WEAK_FUNC(sub_824B25F8);
PPC_FUNC_IMPL(__imp__sub_824B25F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B25FC"))) PPC_WEAK_FUNC(sub_824B25FC);
PPC_FUNC_IMPL(__imp__sub_824B25FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B2600"))) PPC_WEAK_FUNC(sub_824B2600);
PPC_FUNC_IMPL(__imp__sub_824B2600) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B2604"))) PPC_WEAK_FUNC(sub_824B2604);
PPC_FUNC_IMPL(__imp__sub_824B2604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B2608"))) PPC_WEAK_FUNC(sub_824B2608);
PPC_FUNC_IMPL(__imp__sub_824B2608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,4448
	ctx.r9.s64 = r11.s64 + 4448;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824B2624"))) PPC_WEAK_FUNC(sub_824B2624);
PPC_FUNC_IMPL(__imp__sub_824B2624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B2628"))) PPC_WEAK_FUNC(sub_824B2628);
PPC_FUNC_IMPL(__imp__sub_824B2628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 212);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 172, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B2660"))) PPC_WEAK_FUNC(sub_824B2660);
PPC_FUNC_IMPL(__imp__sub_824B2660) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3416
	ctx.r7.s64 = ctx.r10.s64 + 3416;
	// addi r6,r9,-2132
	ctx.r6.s64 = ctx.r9.s64 + -2132;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r5,r8,-2148
	ctx.r5.s64 = ctx.r8.s64 + -2148;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B26C8"))) PPC_WEAK_FUNC(sub_824B26C8);
PPC_FUNC_IMPL(__imp__sub_824B26C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B26CC"))) PPC_WEAK_FUNC(sub_824B26CC);
PPC_FUNC_IMPL(__imp__sub_824B26CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B26D0"))) PPC_WEAK_FUNC(sub_824B26D0);
PPC_FUNC_IMPL(__imp__sub_824B26D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 212);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
}

__attribute__((alias("__imp__sub_824B26E4"))) PPC_WEAK_FUNC(sub_824B26E4);
PPC_FUNC_IMPL(__imp__sub_824B26E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x822b5ec0
	sub_822B5EC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824B26E8"))) PPC_WEAK_FUNC(sub_824B26E8);
PPC_FUNC_IMPL(__imp__sub_824B26E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B26EC"))) PPC_WEAK_FUNC(sub_824B26EC);
PPC_FUNC_IMPL(__imp__sub_824B26EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B26F0"))) PPC_WEAK_FUNC(sub_824B26F0);
PPC_FUNC_IMPL(__imp__sub_824B26F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B26F4"))) PPC_WEAK_FUNC(sub_824B26F4);
PPC_FUNC_IMPL(__imp__sub_824B26F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B26F8"))) PPC_WEAK_FUNC(sub_824B26F8);
PPC_FUNC_IMPL(__imp__sub_824B26F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B26FC"))) PPC_WEAK_FUNC(sub_824B26FC);
PPC_FUNC_IMPL(__imp__sub_824B26FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B2700"))) PPC_WEAK_FUNC(sub_824B2700);
PPC_FUNC_IMPL(__imp__sub_824B2700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,4448
	ctx.r9.s64 = r11.s64 + 4448;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824B271C"))) PPC_WEAK_FUNC(sub_824B271C);
PPC_FUNC_IMPL(__imp__sub_824B271C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B2720"))) PPC_WEAK_FUNC(sub_824B2720);
PPC_FUNC_IMPL(__imp__sub_824B2720) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3416
	ctx.r7.s64 = ctx.r10.s64 + 3416;
	// addi r6,r9,-2068
	ctx.r6.s64 = ctx.r9.s64 + -2068;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r5,r8,-2084
	ctx.r5.s64 = ctx.r8.s64 + -2084;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B2788"))) PPC_WEAK_FUNC(sub_824B2788);
PPC_FUNC_IMPL(__imp__sub_824B2788) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B278C"))) PPC_WEAK_FUNC(sub_824B278C);
PPC_FUNC_IMPL(__imp__sub_824B278C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B2790"))) PPC_WEAK_FUNC(sub_824B2790);
PPC_FUNC_IMPL(__imp__sub_824B2790) {
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
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 212);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x824b2888
	if (cr6.eq) goto loc_824B2888;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x824b2888
	if (cr6.eq) goto loc_824B2888;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x824b27ec
	if (!cr6.gt) goto loc_824B27EC;
loc_824B27D4:
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
	// bgt cr6,0x824b27d4
	if (cr6.gt) goto loc_824B27D4;
loc_824B27EC:
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x824b4cf8
	sub_824B4CF8(ctx, base);
	// lwz r11,220(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b2888
	if (cr6.eq) goto loc_824B2888;
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r4,224(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// addi r3,r10,296
	ctx.r3.s64 = ctx.r10.s64 + 296;
	// bl 0x824b5a30
	sub_824B5A30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b2888
	if (cr6.eq) goto loc_824B2888;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x824b2888
	if (!cr6.gt) goto loc_824B2888;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,296
	ctx.r4.s64 = r11.s64 + 296;
	// bl 0x82700f60
	sub_82700F60(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x824b2888
	if (cr6.eq) goto loc_824B2888;
loc_824B2844:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822b5dd0
	sub_822B5DD0(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x824b287c
	if (cr6.eq) goto loc_824B287C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822b5ac0
	sub_822B5AC0(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x824b2844
	if (!cr6.eq) goto loc_824B2844;
	// b 0x824b2888
	goto loc_824B2888;
loc_824B287C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_824B2888:
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

__attribute__((alias("__imp__sub_824B289C"))) PPC_WEAK_FUNC(sub_824B289C);
PPC_FUNC_IMPL(__imp__sub_824B289C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B28A0"))) PPC_WEAK_FUNC(sub_824B28A0);
PPC_FUNC_IMPL(__imp__sub_824B28A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 212);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
}

__attribute__((alias("__imp__sub_824B28B4"))) PPC_WEAK_FUNC(sub_824B28B4);
PPC_FUNC_IMPL(__imp__sub_824B28B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x822b5ec0
	sub_822B5EC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824B28B8"))) PPC_WEAK_FUNC(sub_824B28B8);
PPC_FUNC_IMPL(__imp__sub_824B28B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B28BC"))) PPC_WEAK_FUNC(sub_824B28BC);
PPC_FUNC_IMPL(__imp__sub_824B28BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B28C0"))) PPC_WEAK_FUNC(sub_824B28C0);
PPC_FUNC_IMPL(__imp__sub_824B28C0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_824B28C0"))) PPC_WEAK_FUNC(sub_824B28C0);
PPC_FUNC_IMPL(__imp__sub_824B28C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x824b2f48
	sub_824B2F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824B28C4"))) PPC_WEAK_FUNC(sub_824B28C4);
PPC_FUNC_IMPL(__imp__sub_824B28C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B28C8"))) PPC_WEAK_FUNC(sub_824B28C8);
PPC_FUNC_IMPL(__imp__sub_824B28C8) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x824b2900
	if (!cr6.gt) goto loc_824B2900;
loc_824B28E8:
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
	// bgt cr6,0x824b28e8
	if (cr6.gt) goto loc_824B28E8;
loc_824B2900:
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x824b2924
	if (!cr6.gt) goto loc_824B2924;
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
loc_824B2924:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r11
	r30.u64 = r11.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x824b29a8
	if (cr6.eq) goto loc_824B29A8;
loc_824B2940:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x824b2968
	if (!cr6.gt) goto loc_824B2968;
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
loc_824B2968:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824b298c
	if (cr0.eq) goto loc_824B298C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824B298C:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x824b2940
	if (!cr6.eq) goto loc_824B2940;
loc_824B29A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_824B29AC"))) PPC_WEAK_FUNC(sub_824B29AC);
PPC_FUNC_IMPL(__imp__sub_824B29AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824B29B0"))) PPC_WEAK_FUNC(sub_824B29B0);
PPC_FUNC_IMPL(__imp__sub_824B29B0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r28,r3,52
	r28.s64 = ctx.r3.s64 + 52;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r29,r11
	r29.s64 = r11.s32;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, xer);
	// beq cr6,0x824b2a88
	if (cr6.eq) goto loc_824B2A88;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r25,-31970
	r25.s64 = -2095185920;
	// addi r26,r11,23480
	r26.s64 = r11.s64 + 23480;
loc_824B29EC:
	// lwz r3,-14368(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -14368);
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824b2a0c
	if (cr6.eq) goto loc_824B2A0C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b2a10
	if (!cr6.eq) goto loc_824B2A10;
loc_824B2A0C:
	// li r11,0
	r11.s64 = 0;
loc_824B2A10:
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x826e53d0
	sub_826E53D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b2a6c
	if (cr6.eq) goto loc_824B2A6C;
	// lwz r11,100(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b2a6c
	if (cr6.eq) goto loc_824B2A6C;
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,28(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 28);
	// bl 0x824b4d20
	sub_824B4D20(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824B2A6C:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x824b29ec
	if (!cr6.eq) goto loc_824B29EC;
loc_824B2A88:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x824b2aac
	if (!cr6.gt) goto loc_824B2AAC;
loc_824B2A94:
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
	// bgt cr6,0x824b2a94
	if (cr6.gt) goto loc_824B2A94;
loc_824B2AAC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_824B2AB0"))) PPC_WEAK_FUNC(sub_824B2AB0);
PPC_FUNC_IMPL(__imp__sub_824B2AB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_824B2AB4"))) PPC_WEAK_FUNC(sub_824B2AB4);
PPC_FUNC_IMPL(__imp__sub_824B2AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B2AB8"))) PPC_WEAK_FUNC(sub_824B2AB8);
PPC_FUNC_IMPL(__imp__sub_824B2AB8) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824b2ae8
	if (cr6.eq) goto loc_824B2AE8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b2aec
	if (!cr6.eq) goto loc_824B2AEC;
loc_824B2AE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824B2AEC:
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x826e53d0
	sub_826E53D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b2b4c
	if (cr6.eq) goto loc_824B2B4C;
	// lwz r11,100(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,23480
	ctx.r4.s64 = ctx.r9.s64 + 23480;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b2b4c
	if (cr6.eq) goto loc_824B2B4C;
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// bl 0x824b4d20
	sub_824B4D20(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824B2B4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_824B2B50"))) PPC_WEAK_FUNC(sub_824B2B50);
PPC_FUNC_IMPL(__imp__sub_824B2B50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824B2B54"))) PPC_WEAK_FUNC(sub_824B2B54);
PPC_FUNC_IMPL(__imp__sub_824B2B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B2B58"))) PPC_WEAK_FUNC(sub_824B2B58);
PPC_FUNC_IMPL(__imp__sub_824B2B58) {
	PPC_FUNC_PROLOGUE();
	// b 0x824b29b0
	sub_824B29B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824B2B5C"))) PPC_WEAK_FUNC(sub_824B2B5C);
PPC_FUNC_IMPL(__imp__sub_824B2B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B2B60"))) PPC_WEAK_FUNC(sub_824B2B60);
PPC_FUNC_IMPL(__imp__sub_824B2B60) {
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
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// lwz r10,-24460(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24460);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824b2c48
	if (cr6.eq) goto loc_824B2C48;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r10,-24456(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24456);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x824b2bd4
	if (!cr6.eq) goto loc_824B2BD4;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x824b2c48
	if (!cr6.gt) goto loc_824B2C48;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x824b2ab8
	sub_824B2AB8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_824B2BD4:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r10,-24452(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24452);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x824b2c48
	if (!cr6.eq) goto loc_824B2C48;
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r11
	r31.s64 = r11.s32;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r7
	cr6.compare<uint32_t>(r31.u32, ctx.r7.u32, xer);
	// beq cr6,0x824b2c48
	if (cr6.eq) goto loc_824B2C48;
	// addi r28,r30,52
	r28.s64 = r30.s64 + 52;
loc_824B2C08:
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x824b2ab8
	sub_824B2AB8(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x824b2c08
	if (!cr6.eq) goto loc_824B2C08;
loc_824B2C48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824B2C4C"))) PPC_WEAK_FUNC(sub_824B2C4C);
PPC_FUNC_IMPL(__imp__sub_824B2C4C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824B2C50"))) PPC_WEAK_FUNC(sub_824B2C50);
PPC_FUNC_IMPL(__imp__sub_824B2C50) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826ed908
	sub_826ED908(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r6,r10,3416
	ctx.r6.s64 = ctx.r10.s64 + 3416;
	// addi r5,r9,-1980
	ctx.r5.s64 = ctx.r9.s64 + -1980;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// addi r4,r8,-1996
	ctx.r4.s64 = ctx.r8.s64 + -1996;
	// stw r6,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r6.u32);
	// addi r3,r7,-2008
	ctx.r3.s64 = ctx.r7.s64 + -2008;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// addi r10,r31,52
	ctx.r10.s64 = r31.s64 + 52;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// stw r4,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r4.u32);
	// stw r3,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B2CE8"))) PPC_WEAK_FUNC(sub_824B2CE8);
PPC_FUNC_IMPL(__imp__sub_824B2CE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B2CEC"))) PPC_WEAK_FUNC(sub_824B2CEC);
PPC_FUNC_IMPL(__imp__sub_824B2CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B2CF0"))) PPC_WEAK_FUNC(sub_824B2CF0);
PPC_FUNC_IMPL(__imp__sub_824B2CF0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-1980
	ctx.r9.s64 = r11.s64 + -1980;
	// addi r8,r10,-1996
	ctx.r8.s64 = ctx.r10.s64 + -1996;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// stw r8,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r8.u32);
	// bl 0x824b2e60
	sub_824B2E60(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r7,-2300
	ctx.r5.s64 = ctx.r7.s64 + -2300;
	// addi r4,r6,3368
	ctx.r4.s64 = ctx.r6.s64 + 3368;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r4.u32);
	// bl 0x826ed958
	sub_826ED958(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B2D54"))) PPC_WEAK_FUNC(sub_824B2D54);
PPC_FUNC_IMPL(__imp__sub_824B2D54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B2D58"))) PPC_WEAK_FUNC(sub_824B2D58);
PPC_FUNC_IMPL(__imp__sub_824B2D58) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824b29b0
	sub_824B29B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b2b60
	sub_824B2B60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B2D88"))) PPC_WEAK_FUNC(sub_824B2D88);
PPC_FUNC_IMPL(__imp__sub_824B2D88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B2D8C"))) PPC_WEAK_FUNC(sub_824B2D8C);
PPC_FUNC_IMPL(__imp__sub_824B2D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B2D90"))) PPC_WEAK_FUNC(sub_824B2D90);
PPC_FUNC_IMPL(__imp__sub_824B2D90) {
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
	// addi r9,r11,-2020
	ctx.r9.s64 = r11.s64 + -2020;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x824b2dd4
	if (!cr6.gt) goto loc_824B2DD4;
loc_824B2DBC:
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
	// bgt cr6,0x824b2dbc
	if (cr6.gt) goto loc_824B2DBC;
loc_824B2DD4:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b2dec
	if (cr6.eq) goto loc_824B2DEC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824B2DEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B2DFC"))) PPC_WEAK_FUNC(sub_824B2DFC);
PPC_FUNC_IMPL(__imp__sub_824B2DFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B2E00"))) PPC_WEAK_FUNC(sub_824B2E00);
PPC_FUNC_IMPL(__imp__sub_824B2E00) {
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
	// addi r9,r10,-2008
	ctx.r9.s64 = ctx.r10.s64 + -2008;
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

__attribute__((alias("__imp__sub_824B2E58"))) PPC_WEAK_FUNC(sub_824B2E58);
PPC_FUNC_IMPL(__imp__sub_824B2E58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B2E5C"))) PPC_WEAK_FUNC(sub_824B2E5C);
PPC_FUNC_IMPL(__imp__sub_824B2E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B2E60"))) PPC_WEAK_FUNC(sub_824B2E60);
PPC_FUNC_IMPL(__imp__sub_824B2E60) {
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
	// addi r9,r11,-2008
	ctx.r9.s64 = r11.s64 + -2008;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x824b2ea4
	if (!cr6.gt) goto loc_824B2EA4;
loc_824B2E8C:
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
	// bgt cr6,0x824b2e8c
	if (cr6.gt) goto loc_824B2E8C;
loc_824B2EA4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b2f48
	sub_824B2F48(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,-2020
	ctx.r10.s64 = r11.s64 + -2020;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x824b2ee0
	if (!cr6.gt) goto loc_824B2EE0;
loc_824B2EC8:
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
	// bgt cr6,0x824b2ec8
	if (cr6.gt) goto loc_824B2EC8;
loc_824B2EE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B2EF0"))) PPC_WEAK_FUNC(sub_824B2EF0);
PPC_FUNC_IMPL(__imp__sub_824B2EF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B2EF4"))) PPC_WEAK_FUNC(sub_824B2EF4);
PPC_FUNC_IMPL(__imp__sub_824B2EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B2EF8"))) PPC_WEAK_FUNC(sub_824B2EF8);
PPC_FUNC_IMPL(__imp__sub_824B2EF8) {
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
	// bl 0x824b2e60
	sub_824B2E60(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b2f30
	if (cr6.eq) goto loc_824B2F30;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824B2F30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B2F44"))) PPC_WEAK_FUNC(sub_824B2F44);
PPC_FUNC_IMPL(__imp__sub_824B2F44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B2F48"))) PPC_WEAK_FUNC(sub_824B2F48);
PPC_FUNC_IMPL(__imp__sub_824B2F48) {
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
	// beq cr6,0x824b302c
	if (cr6.eq) goto loc_824B302C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b2fbc
	if (!cr6.eq) goto loc_824B2FBC;
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
	// beq cr6,0x824b302c
	if (cr6.eq) goto loc_824B302C;
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
	// b 0x824b302c
	goto loc_824B302C;
loc_824B2FBC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824b2e00
	sub_824B2E00(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x824b2fe8
	if (!cr6.gt) goto loc_824B2FE8;
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
loc_824B2FE8:
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
	// bl 0x824b2e60
	sub_824B2E60(ctx, base);
loc_824B302C:
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

__attribute__((alias("__imp__sub_824B3040"))) PPC_WEAK_FUNC(sub_824B3040);
PPC_FUNC_IMPL(__imp__sub_824B3040) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B3044"))) PPC_WEAK_FUNC(sub_824B3044);
PPC_FUNC_IMPL(__imp__sub_824B3044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B3048"))) PPC_WEAK_FUNC(sub_824B3048);
PPC_FUNC_IMPL(__imp__sub_824B3048) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
}

__attribute__((alias("__imp__sub_824B304C"))) PPC_WEAK_FUNC(sub_824B304C);
PPC_FUNC_IMPL(__imp__sub_824B304C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x824b3050
	goto loc_824B3050;
loc_824B3050:
	// mflr r12
	// stw r12,-8(r1)
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-1980
	ctx.r9.s64 = r11.s64 + -1980;
	// addi r8,r10,-1996
	ctx.r8.s64 = ctx.r10.s64 + -1996;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// stw r8,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x824b2e60
	sub_824B2E60(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r7,-2300
	ctx.r5.s64 = ctx.r7.s64 + -2300;
	// addi r4,r6,3368
	ctx.r4.s64 = ctx.r6.s64 + 3368;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r4.u32);
	// bl 0x826ed958
	sub_826ED958(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x824b30c4
	if (cr6.eq) goto loc_824B30C4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824B30C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B3050"))) PPC_WEAK_FUNC(sub_824B3050);
PPC_FUNC_IMPL(__imp__sub_824B3050) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-1980
	ctx.r9.s64 = r11.s64 + -1980;
	// addi r8,r10,-1996
	ctx.r8.s64 = ctx.r10.s64 + -1996;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// stw r8,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x824b2e60
	sub_824B2E60(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r7,-2300
	ctx.r5.s64 = ctx.r7.s64 + -2300;
	// addi r4,r6,3368
	ctx.r4.s64 = ctx.r6.s64 + 3368;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r4.u32);
	// bl 0x826ed958
	sub_826ED958(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x824b30c4
	if (cr6.eq) goto loc_824B30C4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824B30C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B30DC"))) PPC_WEAK_FUNC(sub_824B30DC);
PPC_FUNC_IMPL(__imp__sub_824B30DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B30E0"))) PPC_WEAK_FUNC(sub_824B30E0);
PPC_FUNC_IMPL(__imp__sub_824B30E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B30E4"))) PPC_WEAK_FUNC(sub_824B30E4);
PPC_FUNC_IMPL(__imp__sub_824B30E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B30E8"))) PPC_WEAK_FUNC(sub_824B30E8);
PPC_FUNC_IMPL(__imp__sub_824B30E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B30EC"))) PPC_WEAK_FUNC(sub_824B30EC);
PPC_FUNC_IMPL(__imp__sub_824B30EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B30F0"))) PPC_WEAK_FUNC(sub_824B30F0);
PPC_FUNC_IMPL(__imp__sub_824B30F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,4448
	ctx.r9.s64 = r11.s64 + 4448;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824B310C"))) PPC_WEAK_FUNC(sub_824B310C);
PPC_FUNC_IMPL(__imp__sub_824B310C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B3110"))) PPC_WEAK_FUNC(sub_824B3110);
PPC_FUNC_IMPL(__imp__sub_824B3110) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3416
	ctx.r7.s64 = ctx.r10.s64 + 3416;
	// addi r6,r9,-1916
	ctx.r6.s64 = ctx.r9.s64 + -1916;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r5,r8,-1932
	ctx.r5.s64 = ctx.r8.s64 + -1932;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B3178"))) PPC_WEAK_FUNC(sub_824B3178);
PPC_FUNC_IMPL(__imp__sub_824B3178) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B317C"))) PPC_WEAK_FUNC(sub_824B317C);
PPC_FUNC_IMPL(__imp__sub_824B317C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B3180"))) PPC_WEAK_FUNC(sub_824B3180);
PPC_FUNC_IMPL(__imp__sub_824B3180) {
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
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 212);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x824b3284
	if (cr6.eq) goto loc_824B3284;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x824b3284
	if (cr6.eq) goto loc_824B3284;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x824b31d4
	if (!cr6.gt) goto loc_824B31D4;
loc_824B31BC:
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
	// bgt cr6,0x824b31bc
	if (cr6.gt) goto loc_824B31BC;
loc_824B31D4:
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x824b4cf8
	sub_824B4CF8(ctx, base);
	// lwz r10,220(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824b3284
	if (cr6.eq) goto loc_824B3284;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r28,224(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 224);
	// addi r4,r11,296
	ctx.r4.s64 = r11.s64 + 296;
	// bl 0x82700f60
	sub_82700F60(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x824b3284
	if (cr6.eq) goto loc_824B3284;
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_824B320C:
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r3,r11,84
	ctx.r3.s64 = r11.s64 + 84;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x824b6858
	sub_824B6858(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x824b3260
	if (!cr6.eq) goto loc_824B3260;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_824B3260:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x824b320c
	if (!cr6.eq) goto loc_824B320C;
loc_824B3284:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824B3288"))) PPC_WEAK_FUNC(sub_824B3288);
PPC_FUNC_IMPL(__imp__sub_824B3288) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824B328C"))) PPC_WEAK_FUNC(sub_824B328C);
PPC_FUNC_IMPL(__imp__sub_824B328C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B3290"))) PPC_WEAK_FUNC(sub_824B3290);
PPC_FUNC_IMPL(__imp__sub_824B3290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 212);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
}

__attribute__((alias("__imp__sub_824B32A4"))) PPC_WEAK_FUNC(sub_824B32A4);
PPC_FUNC_IMPL(__imp__sub_824B32A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x822b5ec0
	sub_822B5EC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824B32A8"))) PPC_WEAK_FUNC(sub_824B32A8);
PPC_FUNC_IMPL(__imp__sub_824B32A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B32AC"))) PPC_WEAK_FUNC(sub_824B32AC);
PPC_FUNC_IMPL(__imp__sub_824B32AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B32B0"))) PPC_WEAK_FUNC(sub_824B32B0);
PPC_FUNC_IMPL(__imp__sub_824B32B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B32B4"))) PPC_WEAK_FUNC(sub_824B32B4);
PPC_FUNC_IMPL(__imp__sub_824B32B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B32B8"))) PPC_WEAK_FUNC(sub_824B32B8);
PPC_FUNC_IMPL(__imp__sub_824B32B8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-1852
	ctx.r9.s64 = r11.s64 + -1852;
	// addi r8,r10,-1868
	ctx.r8.s64 = ctx.r10.s64 + -1868;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r7,4448
	ctx.r5.s64 = ctx.r7.s64 + 4448;
	// addi r4,r6,3368
	ctx.r4.s64 = ctx.r6.s64 + 3368;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B331C"))) PPC_WEAK_FUNC(sub_824B331C);
PPC_FUNC_IMPL(__imp__sub_824B331C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B3320"))) PPC_WEAK_FUNC(sub_824B3320);
PPC_FUNC_IMPL(__imp__sub_824B3320) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3416
	ctx.r7.s64 = ctx.r10.s64 + 3416;
	// addi r6,r9,-1852
	ctx.r6.s64 = ctx.r9.s64 + -1852;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r5,r8,-1868
	ctx.r5.s64 = ctx.r8.s64 + -1868;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
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

__attribute__((alias("__imp__sub_824B3390"))) PPC_WEAK_FUNC(sub_824B3390);
PPC_FUNC_IMPL(__imp__sub_824B3390) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B3394"))) PPC_WEAK_FUNC(sub_824B3394);
PPC_FUNC_IMPL(__imp__sub_824B3394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B3398"))) PPC_WEAK_FUNC(sub_824B3398);
PPC_FUNC_IMPL(__imp__sub_824B3398) {
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
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r9,220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x824b3438
	if (!cr6.eq) goto loc_824B3438;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x824b33e8
	if (!cr6.gt) goto loc_824B33E8;
loc_824B33D0:
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
	// bgt cr6,0x824b33d0
	if (cr6.gt) goto loc_824B33D0;
loc_824B33E8:
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x824b3438
	if (!cr6.gt) goto loc_824B3438;
	// addi r31,r28,24
	r31.s64 = r28.s64 + 24;
loc_824B33FC:
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,296
	ctx.r3.s64 = r11.s64 + 296;
	// bl 0x824b59d8
	sub_824B59D8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b3424
	if (cr6.eq) goto loc_824B3424;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,52(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_824B3424:
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x824b33fc
	if (cr6.lt) goto loc_824B33FC;
loc_824B3438:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824B343C"))) PPC_WEAK_FUNC(sub_824B343C);
PPC_FUNC_IMPL(__imp__sub_824B343C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824B3440"))) PPC_WEAK_FUNC(sub_824B3440);
PPC_FUNC_IMPL(__imp__sub_824B3440) {
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
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824b3470
	if (cr6.eq) goto loc_824B3470;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b3474
	if (!cr6.eq) goto loc_824B3474;
loc_824B3470:
	// li r11,0
	r11.s64 = 0;
loc_824B3474:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,18140(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18140);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,56
	ctx.r4.s64 = r28.s64 + 56;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b34c8
	if (!cr6.eq) goto loc_824B34C8;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b34c8
	if (!cr6.eq) goto loc_824B34C8;
	// lwz r11,18140(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18140);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824B34C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824B34CC"))) PPC_WEAK_FUNC(sub_824B34CC);
PPC_FUNC_IMPL(__imp__sub_824B34CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824B34D0"))) PPC_WEAK_FUNC(sub_824B34D0);
PPC_FUNC_IMPL(__imp__sub_824B34D0) {
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
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32181
	r11.s64 = -2109014016;
	// addi r30,r11,13208
	r30.s64 = r11.s64 + 13208;
	// lwz r3,-14368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824b3508
	if (cr6.eq) goto loc_824B3508;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b350c
	if (!cr6.eq) goto loc_824B350C;
loc_824B3508:
	// li r11,0
	r11.s64 = 0;
loc_824B350C:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,-7888
	ctx.r3.s64 = ctx.r9.s64 + -7888;
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
	// lwz r11,18140(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18140);
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
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824B355C"))) PPC_WEAK_FUNC(sub_824B355C);
PPC_FUNC_IMPL(__imp__sub_824B355C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824B3560"))) PPC_WEAK_FUNC(sub_824B3560);
PPC_FUNC_IMPL(__imp__sub_824B3560) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
}

__attribute__((alias("__imp__sub_824B3564"))) PPC_WEAK_FUNC(sub_824B3564);
PPC_FUNC_IMPL(__imp__sub_824B3564) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x824b3568
	goto loc_824B3568;
loc_824B3568:
	// mflr r12
	// stw r12,-8(r1)
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-1852
	ctx.r9.s64 = r11.s64 + -1852;
	// addi r8,r10,-1868
	ctx.r8.s64 = ctx.r10.s64 + -1868;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r7,4448
	ctx.r5.s64 = ctx.r7.s64 + 4448;
	// addi r4,r6,3368
	ctx.r4.s64 = ctx.r6.s64 + 3368;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x824b35dc
	if (cr6.eq) goto loc_824B35DC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824B35DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B3568"))) PPC_WEAK_FUNC(sub_824B3568);
PPC_FUNC_IMPL(__imp__sub_824B3568) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-1852
	ctx.r9.s64 = r11.s64 + -1852;
	// addi r8,r10,-1868
	ctx.r8.s64 = ctx.r10.s64 + -1868;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r7,4448
	ctx.r5.s64 = ctx.r7.s64 + 4448;
	// addi r4,r6,3368
	ctx.r4.s64 = ctx.r6.s64 + 3368;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x824b35dc
	if (cr6.eq) goto loc_824B35DC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824B35DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B35F4"))) PPC_WEAK_FUNC(sub_824B35F4);
PPC_FUNC_IMPL(__imp__sub_824B35F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B35F8"))) PPC_WEAK_FUNC(sub_824B35F8);
PPC_FUNC_IMPL(__imp__sub_824B35F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lbz r10,81(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 81);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,13(r11)
	PPC_STORE_U8(r11.u32 + 13, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B3618"))) PPC_WEAK_FUNC(sub_824B3618);
PPC_FUNC_IMPL(__imp__sub_824B3618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,4324
	ctx.r9.s64 = r11.s64 + 4324;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824B3634"))) PPC_WEAK_FUNC(sub_824B3634);
PPC_FUNC_IMPL(__imp__sub_824B3634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B3638"))) PPC_WEAK_FUNC(sub_824B3638);
PPC_FUNC_IMPL(__imp__sub_824B3638) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3400
	ctx.r7.s64 = ctx.r10.s64 + 3400;
	// addi r6,r9,-1788
	ctx.r6.s64 = ctx.r9.s64 + -1788;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r5,r8,-1804
	ctx.r5.s64 = ctx.r8.s64 + -1804;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B369C"))) PPC_WEAK_FUNC(sub_824B369C);
PPC_FUNC_IMPL(__imp__sub_824B369C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B36A0"))) PPC_WEAK_FUNC(sub_824B36A0);
PPC_FUNC_IMPL(__imp__sub_824B36A0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r30,0
	r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stb r30,13(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13, r30.u8);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x824b4d50
	sub_824B4D50(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x824b4cf8
	sub_824B4CF8(ctx, base);
	// lwz r11,220(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b37bc
	if (cr6.eq) goto loc_824B37BC;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r29,224(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r28,292(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// lwz r27,280(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// lwz r26,276(r10)
	r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// bl 0x824b4d20
	sub_824B4D20(ctx, base);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,224(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 224);
	// bl 0x825ca238
	sub_825CA238(ctx, base);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,224(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 224);
	// bl 0x825ca228
	sub_825CA228(ctx, base);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lis r6,-31970
	ctx.r6.s64 = -2095185920;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r24.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// lwz r11,18204(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18204);
	// lwz r3,-14368(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + -14368);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r27.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x824b376c
	if (cr6.eq) goto loc_824B376C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b3770
	if (!cr6.eq) goto loc_824B3770;
loc_824B376C:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_824B3770:
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b37bc
	if (cr6.eq) goto loc_824B37BC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b37bc
	if (!cr6.eq) goto loc_824B37BC;
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
loc_824B37BC:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lbz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 212);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x824b37d4
	if (!cr6.eq) goto loc_824B37D4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x822b50e0
	sub_822B50E0(ctx, base);
loc_824B37D4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_824B37D8"))) PPC_WEAK_FUNC(sub_824B37D8);
PPC_FUNC_IMPL(__imp__sub_824B37D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_824B37DC"))) PPC_WEAK_FUNC(sub_824B37DC);
PPC_FUNC_IMPL(__imp__sub_824B37DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B37E0"))) PPC_WEAK_FUNC(sub_824B37E0);
PPC_FUNC_IMPL(__imp__sub_824B37E0) {
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
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lbz r8,212(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 212);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// beq cr6,0x824b3894
	if (cr6.eq) goto loc_824B3894;
	// lbz r10,215(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 215);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x824b3894
	if (!cr6.eq) goto loc_824B3894;
	// lbz r11,213(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 213);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x824b3894
	if (!cr6.eq) goto loc_824B3894;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// lwz r30,24(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824b3854
	if (cr6.eq) goto loc_824B3854;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b3858
	if (!cr6.eq) goto loc_824B3858;
loc_824B3854:
	// li r11,0
	r11.s64 = 0;
loc_824B3858:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,84(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,220(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 220);
	// bl 0x822b2d40
	sub_822B2D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822b2e20
	sub_822B2E20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e8e70
	sub_826E8E70(ctx, base);
loc_824B3894:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
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

__attribute__((alias("__imp__sub_824B38B0"))) PPC_WEAK_FUNC(sub_824B38B0);
PPC_FUNC_IMPL(__imp__sub_824B38B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B38B4"))) PPC_WEAK_FUNC(sub_824B38B4);
PPC_FUNC_IMPL(__imp__sub_824B38B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B38B8"))) PPC_WEAK_FUNC(sub_824B38B8);
PPC_FUNC_IMPL(__imp__sub_824B38B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B38BC"))) PPC_WEAK_FUNC(sub_824B38BC);
PPC_FUNC_IMPL(__imp__sub_824B38BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B38C0"))) PPC_WEAK_FUNC(sub_824B38C0);
PPC_FUNC_IMPL(__imp__sub_824B38C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B38C4"))) PPC_WEAK_FUNC(sub_824B38C4);
PPC_FUNC_IMPL(__imp__sub_824B38C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B38C8"))) PPC_WEAK_FUNC(sub_824B38C8);
PPC_FUNC_IMPL(__imp__sub_824B38C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,4324
	ctx.r9.s64 = r11.s64 + 4324;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824B38E4"))) PPC_WEAK_FUNC(sub_824B38E4);
PPC_FUNC_IMPL(__imp__sub_824B38E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B38E8"))) PPC_WEAK_FUNC(sub_824B38E8);
PPC_FUNC_IMPL(__imp__sub_824B38E8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3400
	ctx.r7.s64 = ctx.r10.s64 + 3400;
	// addi r6,r9,-1724
	ctx.r6.s64 = ctx.r9.s64 + -1724;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r5,r8,-1740
	ctx.r5.s64 = ctx.r8.s64 + -1740;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B394C"))) PPC_WEAK_FUNC(sub_824B394C);
PPC_FUNC_IMPL(__imp__sub_824B394C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B3950"))) PPC_WEAK_FUNC(sub_824B3950);
PPC_FUNC_IMPL(__imp__sub_824B3950) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x824b4d50
	sub_824B4D50(ctx, base);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lbz r8,212(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 212);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x824b399c
	if (!cr6.eq) goto loc_824B399C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x822b50e0
	sub_822B50E0(ctx, base);
loc_824B399C:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,84
	r11.s64 = r11.s64 + 84;
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// lfs f31,-25600(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f31.f64 = double(temp.f32);
	// stfs f31,4(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stfs f31,8(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stb r9,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r9.u8);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// ble cr6,0x824b39e8
	if (!cr6.gt) goto loc_824B39E8;
loc_824B39D0:
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bgt cr6,0x824b39d0
	if (cr6.gt) goto loc_824B39D0;
loc_824B39E8:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lbz r10,239(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 239);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824b3a04
	if (!cr6.eq) goto loc_824B3A04;
	// lbz r11,243(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 243);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b3a54
	if (cr6.eq) goto loc_824B3A54;
loc_824B3A04:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r4,r10,-24908
	ctx.r4.s64 = ctx.r10.s64 + -24908;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r30,8(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x826ed730
	sub_826ED730(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ecf18
	sub_826ECF18(ctx, base);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stfs f31,92(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 92, temp.u32);
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lbz r5,239(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 239);
	// stb r5,84(r6)
	PPC_STORE_U8(ctx.r6.u32 + 84, ctx.r5.u8);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lbz r11,243(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 243);
	// stb r11,85(r3)
	PPC_STORE_U8(ctx.r3.u32 + 85, r11.u8);
loc_824B3A54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_824B3A6C"))) PPC_WEAK_FUNC(sub_824B3A6C);
PPC_FUNC_IMPL(__imp__sub_824B3A6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B3A70"))) PPC_WEAK_FUNC(sub_824B3A70);
PPC_FUNC_IMPL(__imp__sub_824B3A70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B3A74"))) PPC_WEAK_FUNC(sub_824B3A74);
PPC_FUNC_IMPL(__imp__sub_824B3A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B3A78"))) PPC_WEAK_FUNC(sub_824B3A78);
PPC_FUNC_IMPL(__imp__sub_824B3A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,4324
	ctx.r9.s64 = r11.s64 + 4324;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824B3A94"))) PPC_WEAK_FUNC(sub_824B3A94);
PPC_FUNC_IMPL(__imp__sub_824B3A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B3A98"))) PPC_WEAK_FUNC(sub_824B3A98);
PPC_FUNC_IMPL(__imp__sub_824B3A98) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 92, temp.u32);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f12,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,72(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// fdivs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fsel f9,f10,f10,f12
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f12.f64;
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - f0.f64));
	// fsel f7,f8,f0,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? f0.f64 : ctx.f9.f64;
	// stfs f7,92(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 92, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B3AE0"))) PPC_WEAK_FUNC(sub_824B3AE0);
PPC_FUNC_IMPL(__imp__sub_824B3AE0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3400
	ctx.r7.s64 = ctx.r10.s64 + 3400;
	// addi r6,r9,-1660
	ctx.r6.s64 = ctx.r9.s64 + -1660;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r5,r8,-1676
	ctx.r5.s64 = ctx.r8.s64 + -1676;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B3B44"))) PPC_WEAK_FUNC(sub_824B3B44);
PPC_FUNC_IMPL(__imp__sub_824B3B44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B3B48"))) PPC_WEAK_FUNC(sub_824B3B48);
PPC_FUNC_IMPL(__imp__sub_824B3B48) {
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
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r10,-24908
	ctx.r4.s64 = ctx.r10.s64 + -24908;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r30,8(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x826ed730
	sub_826ED730(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ecf18
	sub_826ECF18(ctx, base);
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r8,4
	ctx.r8.s64 = 4;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,84
	r11.s64 = r11.s64 + 84;
	// lfs f0,-25600(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stb r9,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r9.u8);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// ble cr6,0x824b3be0
	if (!cr6.gt) goto loc_824B3BE0;
loc_824B3BC8:
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bgt cr6,0x824b3bc8
	if (cr6.gt) goto loc_824B3BC8;
loc_824B3BE0:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lbz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 240);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824b3bfc
	if (!cr6.eq) goto loc_824B3BFC;
	// lbz r11,244(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 244);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b3c2c
	if (cr6.eq) goto loc_824B3C2C;
loc_824B3BFC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 92, temp.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lbz r6,240(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 240);
	// stb r6,84(r7)
	PPC_STORE_U8(ctx.r7.u32 + 84, ctx.r6.u8);
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lbz r3,244(r5)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + 244);
	// stb r3,85(r4)
	PPC_STORE_U8(ctx.r4.u32 + 85, ctx.r3.u8);
loc_824B3C2C:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stb r9,13(r11)
	PPC_STORE_U8(r11.u32 + 13, ctx.r9.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B3C48"))) PPC_WEAK_FUNC(sub_824B3C48);
PPC_FUNC_IMPL(__imp__sub_824B3C48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B3C4C"))) PPC_WEAK_FUNC(sub_824B3C4C);
PPC_FUNC_IMPL(__imp__sub_824B3C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B3C50"))) PPC_WEAK_FUNC(sub_824B3C50);
PPC_FUNC_IMPL(__imp__sub_824B3C50) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x824b4d20
	sub_824B4D20(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r29,-31970
	r29.s64 = -2095185920;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,18152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18152);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lwz r9,220(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x824b3ca4
	if (cr6.eq) goto loc_824B3CA4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b3ca8
	if (!cr6.eq) goto loc_824B3CA8;
loc_824B3CA4:
	// li r11,0
	r11.s64 = 0;
loc_824B3CA8:
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
	// beq cr6,0x824b3cf4
	if (cr6.eq) goto loc_824B3CF4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b3cf4
	if (!cr6.eq) goto loc_824B3CF4;
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
loc_824B3CF4:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r11,18180(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18180);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x824b3d24
	if (cr6.eq) goto loc_824B3D24;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b3d28
	if (!cr6.eq) goto loc_824B3D28;
loc_824B3D24:
	// li r11,0
	r11.s64 = 0;
loc_824B3D28:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
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
	// beq cr6,0x824b3d74
	if (cr6.eq) goto loc_824B3D74;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b3d74
	if (!cr6.eq) goto loc_824B3D74;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824B3D74:
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824b3d90
	if (cr6.eq) goto loc_824B3D90;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b3d94
	if (!cr6.eq) goto loc_824B3D94;
loc_824B3D90:
	// li r11,0
	r11.s64 = 0;
loc_824B3D94:
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b3dc8
	if (cr6.eq) goto loc_824B3DC8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826e5698
	sub_826E5698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_824B3DC8:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,18088(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18088);
	// bl 0x826e59e0
	sub_826E59E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_824B3DDC"))) PPC_WEAK_FUNC(sub_824B3DDC);
PPC_FUNC_IMPL(__imp__sub_824B3DDC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824B3DE0"))) PPC_WEAK_FUNC(sub_824B3DE0);
PPC_FUNC_IMPL(__imp__sub_824B3DE0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 92, temp.u32);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f12,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,72(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x824b3e24
	if (!cr6.gt) goto loc_824B3E24;
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// fdivs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fsel f9,f10,f10,f12
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f12.f64;
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - f0.f64));
	// fsel f7,f8,f0,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? f0.f64 : ctx.f9.f64;
	// stfs f7,92(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 92, temp.u32);
loc_824B3E24:
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f13,72(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// b 0x824b3c50
	sub_824B3C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824B3E3C"))) PPC_WEAK_FUNC(sub_824B3E3C);
PPC_FUNC_IMPL(__imp__sub_824B3E3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B3E40"))) PPC_WEAK_FUNC(sub_824B3E40);
PPC_FUNC_IMPL(__imp__sub_824B3E40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
}

__attribute__((alias("__imp__sub_824B3E44"))) PPC_WEAK_FUNC(sub_824B3E44);
PPC_FUNC_IMPL(__imp__sub_824B3E44) {
	PPC_FUNC_PROLOGUE();
	// b 0x822b5020
	sub_822B5020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824B3E48"))) PPC_WEAK_FUNC(sub_824B3E48);
PPC_FUNC_IMPL(__imp__sub_824B3E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,13(r11)
	PPC_STORE_U8(r11.u32 + 13, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B3E58"))) PPC_WEAK_FUNC(sub_824B3E58);
PPC_FUNC_IMPL(__imp__sub_824B3E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,4324
	ctx.r9.s64 = r11.s64 + 4324;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824B3E74"))) PPC_WEAK_FUNC(sub_824B3E74);
PPC_FUNC_IMPL(__imp__sub_824B3E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B3E78"))) PPC_WEAK_FUNC(sub_824B3E78);
PPC_FUNC_IMPL(__imp__sub_824B3E78) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3400
	ctx.r7.s64 = ctx.r10.s64 + 3400;
	// addi r6,r9,-1596
	ctx.r6.s64 = ctx.r9.s64 + -1596;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r5,r8,-1612
	ctx.r5.s64 = ctx.r8.s64 + -1612;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B3EDC"))) PPC_WEAK_FUNC(sub_824B3EDC);
PPC_FUNC_IMPL(__imp__sub_824B3EDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B3EE0"))) PPC_WEAK_FUNC(sub_824B3EE0);
PPC_FUNC_IMPL(__imp__sub_824B3EE0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stfs f0,4(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stfs f0,8(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r5,48(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stb r8,12(r5)
	PPC_STORE_U8(ctx.r5.u32 + 12, ctx.r8.u8);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x824b4cf8
	sub_824B4CF8(ctx, base);
	// lwz r11,220(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b400c
	if (cr6.eq) goto loc_824B400C;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r30,224(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r29,292(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// lwz r28,280(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// lwz r27,276(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// bl 0x824b4d20
	sub_824B4D20(ctx, base);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,224(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 224);
	// bl 0x825ca238
	sub_825CA238(ctx, base);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,224(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 224);
	// bl 0x825ca228
	sub_825CA228(ctx, base);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lis r6,-31970
	ctx.r6.s64 = -2095185920;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r25.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// lwz r11,18200(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18200);
	// lwz r3,-14368(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + -14368);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x824b3fbc
	if (cr6.eq) goto loc_824B3FBC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b3fc0
	if (!cr6.eq) goto loc_824B3FC0;
loc_824B3FBC:
	// li r11,0
	r11.s64 = 0;
loc_824B3FC0:
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b400c
	if (cr6.eq) goto loc_824B400C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b400c
	if (!cr6.eq) goto loc_824B400C;
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
loc_824B400C:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lbz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 212);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x824b4024
	if (!cr6.eq) goto loc_824B4024;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x822b50e0
	sub_822B50E0(ctx, base);
loc_824B4024:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lbz r10,237(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 237);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824b4040
	if (!cr6.eq) goto loc_824B4040;
	// lbz r11,241(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 241);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b4098
	if (cr6.eq) goto loc_824B4098;
loc_824B4040:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r4,r10,-24908
	ctx.r4.s64 = ctx.r10.s64 + -24908;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r30,8(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x826ed730
	sub_826ED730(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ecf18
	sub_826ECF18(ctx, base);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f0,-25600(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 92, temp.u32);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lbz r4,237(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 237);
	// stb r4,84(r5)
	PPC_STORE_U8(ctx.r5.u32 + 84, ctx.r4.u8);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lbz r10,241(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 241);
	// stb r10,85(r11)
	PPC_STORE_U8(r11.u32 + 85, ctx.r10.u8);
loc_824B4098:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_824B409C"))) PPC_WEAK_FUNC(sub_824B409C);
PPC_FUNC_IMPL(__imp__sub_824B409C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_824B40A0"))) PPC_WEAK_FUNC(sub_824B40A0);
PPC_FUNC_IMPL(__imp__sub_824B40A0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lbz r8,212(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 212);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// beq cr6,0x824b4258
	if (cr6.eq) goto loc_824B4258;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lbz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x824b4154
	if (!cr6.eq) goto loc_824B4154;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f11,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,76(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// blt cr6,0x824b41e4
	if (cr6.lt) goto loc_824B41E4;
	// rotlwi r11,r7,0
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r8,12(r11)
	PPC_STORE_U8(r11.u32 + 12, ctx.r8.u8);
	// lfs f0,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stfs f0,8(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// b 0x824b41e4
	goto loc_824B41E4;
loc_824B4154:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lbz r11,82(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 82);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b417c
	if (cr6.eq) goto loc_824B417C;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f13,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x824b41e4
	if (cr6.lt) goto loc_824B41E4;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x824b41e4
	goto loc_824B41E4;
loc_824B417C:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lbz r8,215(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 215);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x824b41e4
	if (!cr6.eq) goto loc_824B41E4;
	// lbz r8,213(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 213);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x824b41e4
	if (!cr6.eq) goto loc_824B41E4;
	// lbz r8,216(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 216);
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x824b41bc
	if (!cr6.eq) goto loc_824B41BC;
	// lbz r10,141(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 141);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x824b41bc
	if (!cr6.eq) goto loc_824B41BC;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// stb r11,13(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13, r11.u8);
loc_824B41BC:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lfs f13,76(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x824b41e0
	if (!cr6.gt) goto loc_824B41E0;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// stb r11,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, r11.u8);
	// b 0x824b41e4
	goto loc_824B41E4;
loc_824B41E0:
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_824B41E4:
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b4258
	if (cr6.eq) goto loc_824B4258;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// lwz r30,24(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824b4218
	if (cr6.eq) goto loc_824B4218;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b421c
	if (!cr6.eq) goto loc_824B421C;
loc_824B4218:
	// li r11,0
	r11.s64 = 0;
loc_824B421C:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,84(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,220(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 220);
	// bl 0x822b2d40
	sub_822B2D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822b2e20
	sub_822B2E20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e8e70
	sub_826E8E70(ctx, base);
loc_824B4258:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
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

__attribute__((alias("__imp__sub_824B4274"))) PPC_WEAK_FUNC(sub_824B4274);
PPC_FUNC_IMPL(__imp__sub_824B4274) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B4278"))) PPC_WEAK_FUNC(sub_824B4278);
PPC_FUNC_IMPL(__imp__sub_824B4278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r11,0
	r11.s64 = 0;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stb r11,77(r10)
	PPC_STORE_U8(ctx.r10.u32 + 77, r11.u8);
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f0,-25600(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stb r11,76(r8)
	PPC_STORE_U8(ctx.r8.u32 + 76, r11.u8);
	// lwz r7,36(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stfs f0,88(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 88, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B42A0"))) PPC_WEAK_FUNC(sub_824B42A0);
PPC_FUNC_IMPL(__imp__sub_824B42A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,4324
	ctx.r9.s64 = r11.s64 + 4324;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824B42BC"))) PPC_WEAK_FUNC(sub_824B42BC);
PPC_FUNC_IMPL(__imp__sub_824B42BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B42C0"))) PPC_WEAK_FUNC(sub_824B42C0);
PPC_FUNC_IMPL(__imp__sub_824B42C0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3400
	ctx.r7.s64 = ctx.r10.s64 + 3400;
	// addi r6,r9,-1520
	ctx.r6.s64 = ctx.r9.s64 + -1520;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r5,r8,-1536
	ctx.r5.s64 = ctx.r8.s64 + -1536;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B4324"))) PPC_WEAK_FUNC(sub_824B4324);
PPC_FUNC_IMPL(__imp__sub_824B4324) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B4328"))) PPC_WEAK_FUNC(sub_824B4328);
PPC_FUNC_IMPL(__imp__sub_824B4328) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x824b4d50
	sub_824B4D50(ctx, base);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// stb r9,76(r8)
	PPC_STORE_U8(ctx.r8.u32 + 76, ctx.r9.u8);
	// li r29,0
	r29.s64 = 0;
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lbz r4,80(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 80);
	// stb r4,77(r5)
	PPC_STORE_U8(ctx.r5.u32 + 77, ctx.r4.u8);
	// lfs f31,-25600(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25600);
	f31.f64 = double(temp.f32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,84
	r11.s64 = r11.s64 + 84;
	// stfs f31,4(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
	// stfs f31,8(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stb r29,1(r11)
	PPC_STORE_U8(r11.u32 + 1, r29.u8);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// ble cr6,0x824b43bc
	if (!cr6.gt) goto loc_824B43BC;
loc_824B43A4:
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bgt cr6,0x824b43a4
	if (cr6.gt) goto loc_824B43A4;
loc_824B43BC:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lbz r10,238(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 238);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824b43d8
	if (!cr6.eq) goto loc_824B43D8;
	// lbz r11,242(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 242);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b4438
	if (cr6.eq) goto loc_824B4438;
loc_824B43D8:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r4,r10,-24908
	ctx.r4.s64 = ctx.r10.s64 + -24908;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r30,8(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x826ed730
	sub_826ED730(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ecf18
	sub_826ECF18(ctx, base);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stfs f31,92(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 92, temp.u32);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f0,228(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 228);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 88, temp.u32);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lbz r3,238(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 238);
	// stb r3,84(r5)
	PPC_STORE_U8(ctx.r5.u32 + 84, ctx.r3.u8);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lbz r9,242(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 242);
	// stb r9,85(r10)
	PPC_STORE_U8(ctx.r10.u32 + 85, ctx.r9.u8);
loc_824B4438:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lbz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 212);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x824b4450
	if (!cr6.eq) goto loc_824B4450;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x822b50e0
	sub_822B50E0(ctx, base);
loc_824B4450:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x824b4cf8
	sub_824B4CF8(ctx, base);
	// lwz r11,220(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b45a0
	if (cr6.eq) goto loc_824B45A0;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r28,224(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r30,292(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// lwz r27,276(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// bl 0x824b4d20
	sub_824B4D20(ctx, base);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,224(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 224);
	// bl 0x825ca238
	sub_825CA238(ctx, base);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,224(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 224);
	// bl 0x825ca228
	sub_825CA228(ctx, base);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lis r6,-31970
	ctx.r6.s64 = -2095185920;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r25.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// lwz r11,18196(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18196);
	// lwz r3,-14368(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x824b44e4
	if (cr6.eq) goto loc_824B44E4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b44e8
	if (!cr6.eq) goto loc_824B44E8;
loc_824B44E4:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_824B44E8:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b4534
	if (cr6.eq) goto loc_824B4534;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b4534
	if (!cr6.eq) goto loc_824B4534;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824B4534:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,18436(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18436);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r30,284(r8)
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 284);
	// lwz r4,224(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 224);
	// lwz r31,100(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// lwz r29,244(r7)
	r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 244);
	// bl 0x825ca238
	sub_825CA238(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b45a0
	if (cr6.eq) goto loc_824B45A0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r28.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,-1548
	ctx.r9.s64 = ctx.r10.s64 + -1548;
	// stw r29,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r29.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_824B45A0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
}

__attribute__((alias("__imp__sub_824B45A8"))) PPC_WEAK_FUNC(sub_824B45A8);
PPC_FUNC_IMPL(__imp__sub_824B45A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_824B45AC"))) PPC_WEAK_FUNC(sub_824B45AC);
PPC_FUNC_IMPL(__imp__sub_824B45AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B45B0"))) PPC_WEAK_FUNC(sub_824B45B0);
PPC_FUNC_IMPL(__imp__sub_824B45B0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lbz r8,212(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 212);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// beq cr6,0x824b4700
	if (cr6.eq) goto loc_824B4700;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lfs f13,68(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x824b4610
	if (!cr6.gt) goto loc_824B4610;
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// fdivs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// lfs f13,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// fsel f10,f11,f11,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : f0.f64;
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsel f0,f9,f13,f10
	f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
loc_824B4610:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stfs f0,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 80, temp.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f13,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x824b4700
	if (cr6.lt) goto loc_824B4700;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// bl 0x824b9520
	sub_824B9520(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x824b6378
	sub_824B6378(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x824b4700
	if (!cr6.eq) goto loc_824B4700;
	// lis r29,-31970
	r29.s64 = -2095185920;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lwz r30,24(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824b4674
	if (cr6.eq) goto loc_824B4674;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b4678
	if (!cr6.eq) goto loc_824B4678;
loc_824B4674:
	// li r11,0
	r11.s64 = 0;
loc_824B4678:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r30,84(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x822b4af0
	sub_822B4AF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822b4bc0
	sub_822B4BC0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r30,24(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// beq cr6,0x824b46c0
	if (cr6.eq) goto loc_824B46C0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b46c4
	if (!cr6.eq) goto loc_824B46C4;
loc_824B46C0:
	// li r11,0
	r11.s64 = 0;
loc_824B46C4:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,84(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,220(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 220);
	// bl 0x822b2d40
	sub_822B2D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822b2e20
	sub_822B2E20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e8e70
	sub_826E8E70(ctx, base);
loc_824B4700:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824B470C"))) PPC_WEAK_FUNC(sub_824B470C);
PPC_FUNC_IMPL(__imp__sub_824B470C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824B4710"))) PPC_WEAK_FUNC(sub_824B4710);
PPC_FUNC_IMPL(__imp__sub_824B4710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,4324
	ctx.r9.s64 = r11.s64 + 4324;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824B472C"))) PPC_WEAK_FUNC(sub_824B472C);
PPC_FUNC_IMPL(__imp__sub_824B472C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B4730"))) PPC_WEAK_FUNC(sub_824B4730);
PPC_FUNC_IMPL(__imp__sub_824B4730) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3400
	ctx.r7.s64 = ctx.r10.s64 + 3400;
	// addi r6,r9,-1456
	ctx.r6.s64 = ctx.r9.s64 + -1456;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r5,r8,-1472
	ctx.r5.s64 = ctx.r8.s64 + -1472;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B4794"))) PPC_WEAK_FUNC(sub_824B4794);
PPC_FUNC_IMPL(__imp__sub_824B4794) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B4798"))) PPC_WEAK_FUNC(sub_824B4798);
PPC_FUNC_IMPL(__imp__sub_824B4798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,1
	r11.s64 = 1;
	// stb r11,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B47B8"))) PPC_WEAK_FUNC(sub_824B47B8);
PPC_FUNC_IMPL(__imp__sub_824B47B8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-1392
	ctx.r9.s64 = r11.s64 + -1392;
	// addi r8,r10,-1408
	ctx.r8.s64 = ctx.r10.s64 + -1408;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r7,4324
	ctx.r5.s64 = ctx.r7.s64 + 4324;
	// addi r4,r6,3368
	ctx.r4.s64 = ctx.r6.s64 + 3368;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B481C"))) PPC_WEAK_FUNC(sub_824B481C);
PPC_FUNC_IMPL(__imp__sub_824B481C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B4820"))) PPC_WEAK_FUNC(sub_824B4820);
PPC_FUNC_IMPL(__imp__sub_824B4820) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 92, temp.u32);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f12,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,72(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// fdivs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fsel f9,f10,f10,f12
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f12.f64;
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - f0.f64));
	// fsel f7,f8,f0,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? f0.f64 : ctx.f9.f64;
	// stfs f7,92(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 92, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B4868"))) PPC_WEAK_FUNC(sub_824B4868);
PPC_FUNC_IMPL(__imp__sub_824B4868) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3400
	ctx.r7.s64 = ctx.r10.s64 + 3400;
	// addi r6,r9,-1392
	ctx.r6.s64 = ctx.r9.s64 + -1392;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r5,r8,-1408
	ctx.r5.s64 = ctx.r8.s64 + -1408;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// stb r11,52(r31)
	PPC_STORE_U8(r31.u32 + 52, r11.u8);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
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

__attribute__((alias("__imp__sub_824B48D8"))) PPC_WEAK_FUNC(sub_824B48D8);
PPC_FUNC_IMPL(__imp__sub_824B48D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B48DC"))) PPC_WEAK_FUNC(sub_824B48DC);
PPC_FUNC_IMPL(__imp__sub_824B48DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B48E0"))) PPC_WEAK_FUNC(sub_824B48E0);
PPC_FUNC_IMPL(__imp__sub_824B48E0) {
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
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824b4910
	if (cr6.eq) goto loc_824B4910;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b4914
	if (!cr6.eq) goto loc_824B4914;
loc_824B4910:
	// li r11,0
	r11.s64 = 0;
loc_824B4914:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,18192(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18192);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,56
	ctx.r4.s64 = r28.s64 + 56;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b4968
	if (!cr6.eq) goto loc_824B4968;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b4968
	if (!cr6.eq) goto loc_824B4968;
	// lwz r11,18192(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18192);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824B4968:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824B496C"))) PPC_WEAK_FUNC(sub_824B496C);
PPC_FUNC_IMPL(__imp__sub_824B496C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824B4970"))) PPC_WEAK_FUNC(sub_824B4970);
PPC_FUNC_IMPL(__imp__sub_824B4970) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x824b4d20
	sub_824B4D20(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r29,-31970
	r29.s64 = -2095185920;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,18152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18152);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lwz r9,220(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x824b49c4
	if (cr6.eq) goto loc_824B49C4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b49c8
	if (!cr6.eq) goto loc_824B49C8;
loc_824B49C4:
	// li r11,0
	r11.s64 = 0;
loc_824B49C8:
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
	// beq cr6,0x824b4a14
	if (cr6.eq) goto loc_824B4A14;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b4a14
	if (!cr6.eq) goto loc_824B4A14;
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
loc_824B4A14:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r11,18180(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18180);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x824b4a44
	if (cr6.eq) goto loc_824B4A44;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b4a48
	if (!cr6.eq) goto loc_824B4A48;
loc_824B4A44:
	// li r11,0
	r11.s64 = 0;
loc_824B4A48:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
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
	// beq cr6,0x824b4a94
	if (cr6.eq) goto loc_824B4A94;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824b4a94
	if (!cr6.eq) goto loc_824B4A94;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824B4A94:
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824b4ab0
	if (cr6.eq) goto loc_824B4AB0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b4ab4
	if (!cr6.eq) goto loc_824B4AB4;
loc_824B4AB0:
	// li r11,0
	r11.s64 = 0;
loc_824B4AB4:
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b4ae8
	if (cr6.eq) goto loc_824B4AE8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826e5698
	sub_826E5698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_824B4AE8:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,18088(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18088);
	// bl 0x826e59e0
	sub_826E59E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_824B4AFC"))) PPC_WEAK_FUNC(sub_824B4AFC);
PPC_FUNC_IMPL(__imp__sub_824B4AFC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824B4B00"))) PPC_WEAK_FUNC(sub_824B4B00);
PPC_FUNC_IMPL(__imp__sub_824B4B00) {
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
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r10,-24908
	ctx.r4.s64 = ctx.r10.s64 + -24908;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r30,8(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x826ed730
	sub_826ED730(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ecf18
	sub_826ECF18(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r8,4
	ctx.r8.s64 = 4;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r5,-31970
	ctx.r5.s64 = -2095185920;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stb r6,84(r11)
	PPC_STORE_U8(r11.u32 + 84, ctx.r6.u8);
	// lfs f0,21036(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stfs f0,92(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 92, temp.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stb r4,13(r9)
	PPC_STORE_U8(ctx.r9.u32 + 13, ctx.r4.u8);
	// lwz r3,-14368(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824b4b8c
	if (cr6.eq) goto loc_824B4B8C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824b4b90
	if (!cr6.eq) goto loc_824B4B90;
loc_824B4B8C:
	// li r11,0
	r11.s64 = 0;
loc_824B4B90:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lis r11,-32181
	r11.s64 = -2109014016;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,-8528
	ctx.r3.s64 = ctx.r9.s64 + -8528;
	// addi r30,r11,18328
	r30.s64 = r11.s64 + 18328;
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
	// lwz r11,18192(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18192);
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
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824B4BE8"))) PPC_WEAK_FUNC(sub_824B4BE8);
PPC_FUNC_IMPL(__imp__sub_824B4BE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824B4BEC"))) PPC_WEAK_FUNC(sub_824B4BEC);
PPC_FUNC_IMPL(__imp__sub_824B4BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B4BF0"))) PPC_WEAK_FUNC(sub_824B4BF0);
PPC_FUNC_IMPL(__imp__sub_824B4BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 92, temp.u32);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f12,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,72(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x824b4c34
	if (!cr6.gt) goto loc_824B4C34;
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// fdivs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fsel f9,f10,f10,f12
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f12.f64;
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - f0.f64));
	// fsel f7,f8,f0,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? f0.f64 : ctx.f9.f64;
	// stfs f7,92(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 92, temp.u32);
loc_824B4C34:
	// lbz r11,52(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x824b4970
	sub_824B4970(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824B4C44"))) PPC_WEAK_FUNC(sub_824B4C44);
PPC_FUNC_IMPL(__imp__sub_824B4C44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B4C48"))) PPC_WEAK_FUNC(sub_824B4C48);
PPC_FUNC_IMPL(__imp__sub_824B4C48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
}

__attribute__((alias("__imp__sub_824B4C4C"))) PPC_WEAK_FUNC(sub_824B4C4C);
PPC_FUNC_IMPL(__imp__sub_824B4C4C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x824b4c50
	goto loc_824B4C50;
loc_824B4C50:
	// mflr r12
	// stw r12,-8(r1)
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-1392
	ctx.r9.s64 = r11.s64 + -1392;
	// addi r8,r10,-1408
	ctx.r8.s64 = ctx.r10.s64 + -1408;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r7,4324
	ctx.r5.s64 = ctx.r7.s64 + 4324;
	// addi r4,r6,3368
	ctx.r4.s64 = ctx.r6.s64 + 3368;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x824b4cc4
	if (cr6.eq) goto loc_824B4CC4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824B4CC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B4C50"))) PPC_WEAK_FUNC(sub_824B4C50);
PPC_FUNC_IMPL(__imp__sub_824B4C50) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-1392
	ctx.r9.s64 = r11.s64 + -1392;
	// addi r8,r10,-1408
	ctx.r8.s64 = ctx.r10.s64 + -1408;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r7,4324
	ctx.r5.s64 = ctx.r7.s64 + 4324;
	// addi r4,r6,3368
	ctx.r4.s64 = ctx.r6.s64 + 3368;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x824b4cc4
	if (cr6.eq) goto loc_824B4CC4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824B4CC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B4CDC"))) PPC_WEAK_FUNC(sub_824B4CDC);
PPC_FUNC_IMPL(__imp__sub_824B4CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B4CE0"))) PPC_WEAK_FUNC(sub_824B4CE0);
PPC_FUNC_IMPL(__imp__sub_824B4CE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
}

__attribute__((alias("__imp__sub_824B4CE4"))) PPC_WEAK_FUNC(sub_824B4CE4);
PPC_FUNC_IMPL(__imp__sub_824B4CE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x824a3898
	sub_824A3898(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824B4CE8"))) PPC_WEAK_FUNC(sub_824B4CE8);
PPC_FUNC_IMPL(__imp__sub_824B4CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
}

__attribute__((alias("__imp__sub_824B4CF4"))) PPC_WEAK_FUNC(sub_824B4CF4);
PPC_FUNC_IMPL(__imp__sub_824B4CF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B4CF8"))) PPC_WEAK_FUNC(sub_824B4CF8);
PPC_FUNC_IMPL(__imp__sub_824B4CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x824a3898
	sub_824A3898(ctx, base);
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824B4D1C"))) PPC_WEAK_FUNC(sub_824B4D1C);
PPC_FUNC_IMPL(__imp__sub_824B4D1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B4D20"))) PPC_WEAK_FUNC(sub_824B4D20);
PPC_FUNC_IMPL(__imp__sub_824B4D20) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x824a3898
	sub_824A3898(ctx, base);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r3,224(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824B4D48"))) PPC_WEAK_FUNC(sub_824B4D48);
PPC_FUNC_IMPL(__imp__sub_824B4D48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B4D4C"))) PPC_WEAK_FUNC(sub_824B4D4C);
PPC_FUNC_IMPL(__imp__sub_824B4D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B4D50"))) PPC_WEAK_FUNC(sub_824B4D50);
PPC_FUNC_IMPL(__imp__sub_824B4D50) {
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
	// stb r4,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r4.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x824a3898
	sub_824A3898(ctx, base);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,23460
	ctx.r4.s64 = ctx.r9.s64 + 23460;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b4db0
	if (cr6.eq) goto loc_824B4DB0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,14(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 14);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824B4DB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B4DC0"))) PPC_WEAK_FUNC(sub_824B4DC0);
PPC_FUNC_IMPL(__imp__sub_824B4DC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B4DC4"))) PPC_WEAK_FUNC(sub_824B4DC4);
PPC_FUNC_IMPL(__imp__sub_824B4DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B4DC8"))) PPC_WEAK_FUNC(sub_824B4DC8);
PPC_FUNC_IMPL(__imp__sub_824B4DC8) {
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
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,36(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r3,40(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// bl 0x824b9528
	sub_824B9528(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B4E04"))) PPC_WEAK_FUNC(sub_824B4E04);
PPC_FUNC_IMPL(__imp__sub_824B4E04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B4E08"))) PPC_WEAK_FUNC(sub_824B4E08);
PPC_FUNC_IMPL(__imp__sub_824B4E08) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x824b5220
	sub_824B5220(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r29,0
	r29.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stfs f0,8(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stb r29,12(r9)
	PPC_STORE_U8(ctx.r9.u32 + 12, r29.u8);
	// stb r29,13(r9)
	PPC_STORE_U8(ctx.r9.u32 + 13, r29.u8);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// ble cr6,0x824b4e70
	if (!cr6.gt) goto loc_824B4E70;
loc_824B4E58:
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
	// bgt cr6,0x824b4e58
	if (cr6.gt) goto loc_824B4E58;
loc_824B4E70:
	// stb r29,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r29.u8);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x822b49e8
	sub_822B49E8(ctx, base);
	// lwz r30,32(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stb r29,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r29.u8);
	// stb r29,1(r30)
	PPC_STORE_U8(r30.u32 + 1, r29.u8);
	// bl 0x826ec738
	sub_826EC738(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x824b5488
	sub_824B5488(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_824B4EA4"))) PPC_WEAK_FUNC(sub_824B4EA4);
PPC_FUNC_IMPL(__imp__sub_824B4EA4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824B4EA8"))) PPC_WEAK_FUNC(sub_824B4EA8);
PPC_FUNC_IMPL(__imp__sub_824B4EA8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lfs f1,-1348(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -1348);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826ed8f0
	sub_826ED8F0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r31,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r31.u32);
	// li r31,0
	r31.s64 = 0;
	// addi r9,r10,-1284
	ctx.r9.s64 = ctx.r10.s64 + -1284;
	// stb r31,12(r30)
	PPC_STORE_U8(r30.u32 + 12, r31.u8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// li r27,2
	r27.s64 = 2;
	// stb r31,13(r30)
	PPC_STORE_U8(r30.u32 + 13, r31.u8);
	// addi r28,r10,-1344
	r28.s64 = ctx.r10.s64 + -1344;
	// stb r31,14(r30)
	PPC_STORE_U8(r30.u32 + 14, r31.u8);
	// li r8,28
	ctx.r8.s64 = 28;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r3,332
	ctx.r3.s64 = 332;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b4f44
	if (cr6.eq) goto loc_824B4F44;
	// addi r3,r3,296
	ctx.r3.s64 = ctx.r3.s64 + 296;
	// bl 0x824b5d78
	sub_824B5D78(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824b5220
	sub_824B5220(ctx, base);
	// b 0x824b4f48
	goto loc_824B4F48;
loc_824B4F44:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_824B4F48:
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r8,29
	ctx.r8.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f31,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b4fa8
	if (cr6.eq) goto loc_824B4FA8;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stfs f31,4(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f31,8(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r31,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r31.u8);
	// stb r31,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, r31.u8);
	// b 0x824b4fac
	goto loc_824B4FAC;
loc_824B4FA8:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_824B4FAC:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r8,30
	ctx.r8.s64 = 30;
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b4fec
	if (cr6.eq) goto loc_824B4FEC;
	// bl 0x824b55b8
	sub_824B55B8(ctx, base);
	// b 0x824b4ff0
	goto loc_824B4FF0;
loc_824B4FEC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824B4FF0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r8,31
	ctx.r8.s64 = 31;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// li r3,128
	ctx.r3.s64 = 128;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b504c
	if (cr6.eq) goto loc_824B504C;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// bl 0x824c1238
	sub_824C1238(ctx, base);
	// addi r3,r29,84
	ctx.r3.s64 = r29.s64 + 84;
	// bl 0x824bb760
	sub_824BB760(ctx, base);
	// stfs f31,112(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r29.u32 + 112, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b49e8
	sub_822B49E8(ctx, base);
	// b 0x824b5050
	goto loc_824B5050;
loc_824B504C:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_824B5050:
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b50b8
	if (cr6.eq) goto loc_824B50B8;
	// addi r26,r3,4
	r26.s64 = ctx.r3.s64 + 4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826ec688
	sub_826EC688(ctx, base);
	// stb r31,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r31.u8);
	// stb r31,1(r29)
	PPC_STORE_U8(r29.u32 + 1, r31.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826ec738
	sub_826EC738(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r11,r29
	r11.u64 = r29.u64;
	// stw r10,44(r29)
	PPC_STORE_U32(r29.u32 + 44, ctx.r10.u32);
	// b 0x824b50bc
	goto loc_824B50BC;
loc_824B50B8:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_824B50BC:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r8,33
	ctx.r8.s64 = 33;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r3,188
	ctx.r3.s64 = 188;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b5110
	if (cr6.eq) goto loc_824B5110;
	// bl 0x824b5648
	sub_824B5648(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_824B5110:
	// stw r31,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
}

__attribute__((alias("__imp__sub_824B5120"))) PPC_WEAK_FUNC(sub_824B5120);
PPC_FUNC_IMPL(__imp__sub_824B5120) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_824B5124"))) PPC_WEAK_FUNC(sub_824B5124);
PPC_FUNC_IMPL(__imp__sub_824B5124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B5128"))) PPC_WEAK_FUNC(sub_824B5128);
PPC_FUNC_IMPL(__imp__sub_824B5128) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r30,16(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r29,0
	r29.s64 = 0;
	// addi r10,r11,-1284
	ctx.r10.s64 = r11.s64 + -1284;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r29.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x824b516c
	if (cr6.eq) goto loc_824B516C;
	// addi r3,r30,296
	ctx.r3.s64 = r30.s64 + 296;
	// bl 0x824b5e78
	sub_824B5E78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
loc_824B516C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824b5180
	if (cr6.eq) goto loc_824B5180;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
loc_824B5180:
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x824b51a0
	if (cr6.eq) goto loc_824B51A0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824b2e60
	sub_824B2E60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
loc_824B51A0:
	// lwz r30,28(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x824b51c8
	if (cr6.eq) goto loc_824B51C8;
	// addi r3,r30,84
	ctx.r3.s64 = r30.s64 + 84;
	// bl 0x824bb7d0
	sub_824BB7D0(ctx, base);
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// bl 0x824c12c8
	sub_824C12C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
loc_824B51C8:
	// lwz r30,32(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x824b51e8
	if (cr6.eq) goto loc_824B51E8;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x826ec7c8
	sub_826EC7C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r29,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r29.u32);
loc_824B51E8:
	// lwz r30,36(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x824b5208
	if (cr6.eq) goto loc_824B5208;
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x82411268
	sub_82411268(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r29,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r29.u32);
loc_824B5208:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,-12508
	ctx.r10.s64 = r11.s64 + -12508;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_824B5218"))) PPC_WEAK_FUNC(sub_824B5218);
PPC_FUNC_IMPL(__imp__sub_824B5218) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824B521C"))) PPC_WEAK_FUNC(sub_824B521C);
PPC_FUNC_IMPL(__imp__sub_824B521C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B5220"))) PPC_WEAK_FUNC(sub_824B5220);
PPC_FUNC_IMPL(__imp__sub_824B5220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lis r9,-31966
	ctx.r9.s64 = -2094923776;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r7,r9,-8372
	ctx.r7.s64 = ctx.r9.s64 + -8372;
	// lis r8,-31966
	ctx.r8.s64 = -2094923776;
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// lfs f0,-8372(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8372);
	f0.f64 = double(temp.f32);
	// addi r6,r8,-8356
	ctx.r6.s64 = ctx.r8.s64 + -8356;
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r4,r5,-24320
	ctx.r4.s64 = ctx.r5.s64 + -24320;
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// li r30,0
	r30.s64 = 0;
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// li r11,-1
	r11.s64 = -1;
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// lis r3,-32249
	ctx.r3.s64 = -2113470464;
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	f0.f64 = double(temp.f32);
	// lis r29,-32256
	r29.s64 = -2113929216;
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f0,-8356(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8356);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f0,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f0,-24320(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -24320);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// lfs f0,-24320(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -24320);
	f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// lfs f0,-8372(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8372);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,108(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// lfs f0,-8356(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8356);
	f0.f64 = double(temp.f32);
	// stfs f0,144(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,148(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// lfs f0,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,156(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// lfs f0,-24320(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -24320);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,116(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,124(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 124, temp.u32);
	// lfs f0,-24320(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -24320);
	f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,132(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,136(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,140(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// lfs f0,-8372(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8372);
	f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// lfs f13,-8356(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8356);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// lfs f13,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lfs f13,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// lfs f13,-8372(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8372);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,160(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,164(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,168(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// lfs f13,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,172(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 172, temp.u32);
	// lfs f13,-8372(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8372);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,176(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,180(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,184(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// lfs f13,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,188(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// lfs f13,-8356(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8356);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,192(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 192, temp.u32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,196(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 196, temp.u32);
	// lfs f13,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,200(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 200, temp.u32);
	// lfs f13,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,204(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 204, temp.u32);
	// stb r30,212(r31)
	PPC_STORE_U8(r31.u32 + 212, r30.u8);
	// lfs f0,6240(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 6240);
	f0.f64 = double(temp.f32);
	// stb r30,213(r31)
	PPC_STORE_U8(r31.u32 + 213, r30.u8);
	// lfs f12,21036(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 21036);
	ctx.f12.f64 = double(temp.f32);
	// stb r30,214(r31)
	PPC_STORE_U8(r31.u32 + 214, r30.u8);
	// stfs f12,208(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 208, temp.u32);
	// stb r30,215(r31)
	PPC_STORE_U8(r31.u32 + 215, r30.u8);
	// stfs f0,232(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 232, temp.u32);
	// stb r30,216(r31)
	PPC_STORE_U8(r31.u32 + 216, r30.u8);
	// stfs f0,236(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 236, temp.u32);
	// stb r30,217(r31)
	PPC_STORE_U8(r31.u32 + 217, r30.u8);
	// stw r11,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r11.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r30.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// stw r11,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r11.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r11.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r11.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
	// stw r11,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r11.u32);
	// stw r11,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r11.u32);
	// stw r10,264(r31)
	PPC_STORE_U32(r31.u32 + 264, ctx.r10.u32);
	// stw r10,268(r31)
	PPC_STORE_U32(r31.u32 + 268, ctx.r10.u32);
	// stw r10,272(r31)
	PPC_STORE_U32(r31.u32 + 272, ctx.r10.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r30.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(r31.u32 + 280, r30.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r30.u32);
	// addi r3,r31,296
	ctx.r3.s64 = r31.s64 + 296;
	// stw r30,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r30.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r11.u32);
	// bl 0x824b5860
	sub_824B5860(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_824B5480"))) PPC_WEAK_FUNC(sub_824B5480);
PPC_FUNC_IMPL(__imp__sub_824B5480) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824B5484"))) PPC_WEAK_FUNC(sub_824B5484);
PPC_FUNC_IMPL(__imp__sub_824B5484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B5488"))) PPC_WEAK_FUNC(sub_824B5488);
PPC_FUNC_IMPL(__imp__sub_824B5488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r8,-31966
	ctx.r8.s64 = -2094923776;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r8,-8372
	ctx.r6.s64 = ctx.r8.s64 + -8372;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lis r5,-31966
	ctx.r5.s64 = -2094923776;
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// lfs f0,-8372(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8372);
	f0.f64 = double(temp.f32);
	// addi r7,r5,-8356
	ctx.r7.s64 = ctx.r5.s64 + -8356;
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// li r11,0
	r11.s64 = 0;
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r10,r3,84
	ctx.r10.s64 = ctx.r3.s64 + 84;
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lis r31,-32249
	r31.s64 = -2113470464;
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	f0.f64 = double(temp.f32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r9,r3,40
	ctx.r9.s64 = ctx.r3.s64 + 40;
	// lfs f0,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,-8356(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -8356);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f0,-25600(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r11.u8);
	// lfs f13,-8372(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8372);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f13,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f13,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f13,-8356(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -8356);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f13,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, r11.u8);
	// lfs f13,21036(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,77(r3)
	PPC_STORE_U8(ctx.r3.u32 + 77, r11.u8);
	// stfs f13,80(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stb r11,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, r11.u8);
	// stfs f0,88(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stb r11,85(r3)
	PPC_STORE_U8(ctx.r3.u32 + 85, r11.u8);
	// stfs f0,92(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// ble cr6,0x824b558c
	if (!cr6.gt) goto loc_824B558C;
loc_824B5574:
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bgt cr6,0x824b5574
	if (cr6.gt) goto loc_824B5574;
loc_824B558C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, r11.u32);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, r11.u32);
	// lfs f0,6240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6240);
	f0.f64 = double(temp.f32);
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, r11.u32);
	// stfs f0,180(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, r11.u32);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_824B55B0"))) PPC_WEAK_FUNC(sub_824B55B0);
PPC_FUNC_IMPL(__imp__sub_824B55B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B55B4"))) PPC_WEAK_FUNC(sub_824B55B4);
PPC_FUNC_IMPL(__imp__sub_824B55B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B55B8"))) PPC_WEAK_FUNC(sub_824B55B8);
PPC_FUNC_IMPL(__imp__sub_824B55B8) {
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
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,-2008
	ctx.r10.s64 = r11.s64 + -2008;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// or r7,r9,r3
	ctx.r7.u64 = ctx.r9.u64 | ctx.r3.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// ble cr6,0x824b5624
	if (!cr6.gt) goto loc_824B5624;
loc_824B560C:
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
	// bgt cr6,0x824b560c
	if (cr6.gt) goto loc_824B560C;
loc_824B5624:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r30.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B5640"))) PPC_WEAK_FUNC(sub_824B5640);
PPC_FUNC_IMPL(__imp__sub_824B5640) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B5644"))) PPC_WEAK_FUNC(sub_824B5644);
PPC_FUNC_IMPL(__imp__sub_824B5644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B5648"))) PPC_WEAK_FUNC(sub_824B5648);
PPC_FUNC_IMPL(__imp__sub_824B5648) {
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
	// addi r11,r3,96
	r11.s64 = ctx.r3.s64 + 96;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,20
	ctx.r9.s64 = r11.s64 + 20;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r10,28916
	ctx.r7.s64 = ctx.r10.s64 + 28916;
	// stw r9,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r9.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r8,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r7.u32);
	// stw r6,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r6.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r5,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r5.u32);
	// bl 0x824b5488
	sub_824B5488(ctx, base);
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

__attribute__((alias("__imp__sub_824B56A4"))) PPC_WEAK_FUNC(sub_824B56A4);
PPC_FUNC_IMPL(__imp__sub_824B56A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B56A8"))) PPC_WEAK_FUNC(sub_824B56A8);
PPC_FUNC_IMPL(__imp__sub_824B56A8) {
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
	// bl 0x824b5128
	sub_824B5128(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824b56e0
	if (cr6.eq) goto loc_824B56E0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824B56E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824B56F4"))) PPC_WEAK_FUNC(sub_824B56F4);
PPC_FUNC_IMPL(__imp__sub_824B56F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B56F8"))) PPC_WEAK_FUNC(sub_824B56F8);
PPC_FUNC_IMPL(__imp__sub_824B56F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x824b5710
	if (!cr6.eq) goto loc_824B5710;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x824b5724
	if (!cr6.eq) goto loc_824B5724;
loc_824B5710:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x824b5730
	if (!cr6.eq) goto loc_824B5730;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x824b5730
	if (cr6.eq) goto loc_824B5730;
loc_824B5724:
	// li r11,1
	r11.s64 = 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
loc_824B5730:
	// li r11,0
	r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
}

__attribute__((alias("__imp__sub_824B5738"))) PPC_WEAK_FUNC(sub_824B5738);
PPC_FUNC_IMPL(__imp__sub_824B5738) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B573C"))) PPC_WEAK_FUNC(sub_824B573C);
PPC_FUNC_IMPL(__imp__sub_824B573C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B5740"))) PPC_WEAK_FUNC(sub_824B5740);
PPC_FUNC_IMPL(__imp__sub_824B5740) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B5744"))) PPC_WEAK_FUNC(sub_824B5744);
PPC_FUNC_IMPL(__imp__sub_824B5744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B5748"))) PPC_WEAK_FUNC(sub_824B5748);
PPC_FUNC_IMPL(__imp__sub_824B5748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-31966
	ctx.r8.s64 = -2094923776;
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lfs f0,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r11.u8);
	// stfs f0,36(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r6,r8,-8032
	ctx.r6.s64 = ctx.r8.s64 + -8032;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lis r5,-31966
	ctx.r5.s64 = -2094923776;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// lfs f0,-8032(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8032);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// addi r11,r5,-8016
	r11.s64 = ctx.r5.s64 + -8016;
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r10,r4,-24304
	ctx.r10.s64 = ctx.r4.s64 + -24304;
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,-8016(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -8016);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,68(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f0,-24304(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -24304);
	f0.f64 = double(temp.f32);
	// stfs f0,72(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,76(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f0,-24304(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -24304);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f0,-24304(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -24304);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,116(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lfs f0,-24304(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -24304);
	f0.f64 = double(temp.f32);
	// stfs f0,120(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,124(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,128(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,132(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
}

__attribute__((alias("__imp__sub_824B585C"))) PPC_WEAK_FUNC(sub_824B585C);
PPC_FUNC_IMPL(__imp__sub_824B585C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824B5860"))) PPC_WEAK_FUNC(sub_824B5860);
PPC_FUNC_IMPL(__imp__sub_824B5860) {
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
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x824b58a4
	if (!cr6.gt) goto loc_824B58A4;
	// li r31,0
	r31.s64 = 0;
loc_824B5884:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x824b5748
	sub_824B5748(ctx, base);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x824b5884
	if (cr6.lt) goto loc_824B5884;
loc_824B58A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_824B58A8"))) PPC_WEAK_FUNC(sub_824B58A8);
PPC_FUNC_IMPL(__imp__sub_824B58A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824B58AC"))) PPC_WEAK_FUNC(sub_824B58AC);
PPC_FUNC_IMPL(__imp__sub_824B58AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824B58B0"))) PPC_WEAK_FUNC(sub_824B58B0);
PPC_FUNC_IMPL(__imp__sub_824B58B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// li r9,0
	ctx.r9.s64 = 0;
loc_824B58C4:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x824b58e4
	if (!cr6.eq) goto loc_824B58E4;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// bne cr6,0x824b58f8
	if (!cr6.eq) goto loc_824B58F8;
loc_824B58E4:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x824b5900
	if (!cr6.eq) goto loc_824B5900;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x824b5900
	if (cr6.eq) goto loc_824B5900;
loc_824B58F8:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x824b5904
	goto loc_824B5904;
loc_824B5900:
	// li r10,0
	ctx.r10.s64 = 0;
loc_824B5904:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x824b591c
	if (!cr6.eq) goto loc_824B591C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
loc_824B591C:
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// blt cr6,0x824b58c4
	if (cr6.lt) goto loc_824B58C4;
}

