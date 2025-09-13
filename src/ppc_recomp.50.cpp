#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8238E620"))) PPC_WEAK_FUNC(sub_8238E620);
PPC_FUNC_IMPL(__imp__sub_8238E620) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238E624"))) PPC_WEAK_FUNC(sub_8238E624);
PPC_FUNC_IMPL(__imp__sub_8238E624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238E628"))) PPC_WEAK_FUNC(sub_8238E628);
PPC_FUNC_IMPL(__imp__sub_8238E628) {
	PPC_FUNC_PROLOGUE();
	// b 0x8238e528
	sub_8238E528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238E628"))) PPC_WEAK_FUNC(sub_8238E628);
PPC_FUNC_IMPL(__imp__sub_8238E628) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8238E62C"))) PPC_WEAK_FUNC(sub_8238E62C);
PPC_FUNC_IMPL(__imp__sub_8238E62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238E630"))) PPC_WEAK_FUNC(sub_8238E630);
PPC_FUNC_IMPL(__imp__sub_8238E630) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,4244
	ctx.r9.s64 = r11.s64 + 4244;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8238e674
	if (!cr6.gt) goto loc_8238E674;
loc_8238E65C:
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
	// bgt cr6,0x8238e65c
	if (cr6.gt) goto loc_8238E65C;
loc_8238E674:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238e528
	sub_8238E528(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,4232
	ctx.r10.s64 = r11.s64 + 4232;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x8238e6b0
	if (!cr6.gt) goto loc_8238E6B0;
loc_8238E698:
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
	// bgt cr6,0x8238e698
	if (cr6.gt) goto loc_8238E698;
loc_8238E6B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8238E6C0"))) PPC_WEAK_FUNC(sub_8238E6C0);
PPC_FUNC_IMPL(__imp__sub_8238E6C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238E6C4"))) PPC_WEAK_FUNC(sub_8238E6C4);
PPC_FUNC_IMPL(__imp__sub_8238E6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238E6C8"))) PPC_WEAK_FUNC(sub_8238E6C8);
PPC_FUNC_IMPL(__imp__sub_8238E6C8) {
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
	// bl 0x8238e630
	sub_8238E630(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238e700
	if (cr6.eq) goto loc_8238E700;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8238E700:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8238E714"))) PPC_WEAK_FUNC(sub_8238E714);
PPC_FUNC_IMPL(__imp__sub_8238E714) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238E718"))) PPC_WEAK_FUNC(sub_8238E718);
PPC_FUNC_IMPL(__imp__sub_8238E718) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r9,4244
	ctx.r8.s64 = ctx.r9.s64 + 4244;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bl 0x824b28c8
	sub_824B28C8(ctx, base);
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

__attribute__((alias("__imp__sub_8238E77C"))) PPC_WEAK_FUNC(sub_8238E77C);
PPC_FUNC_IMPL(__imp__sub_8238E77C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238E780"))) PPC_WEAK_FUNC(sub_8238E780);
PPC_FUNC_IMPL(__imp__sub_8238E780) {
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
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8238e7c8
	if (cr6.lt) goto loc_8238E7C8;
	// addi r3,r7,20
	ctx.r3.s64 = ctx.r7.s64 + 20;
	// bl 0x8238e630
	sub_8238E630(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,5516
	ctx.r3.s64 = r11.s64 + 5516;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_8238E7C8:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r6,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// bne cr6,0x8238e7f8
	if (!cr6.eq) goto loc_8238E7F8;
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r27.u32);
	// b 0x8238e838
	goto loc_8238E838;
loc_8238E7F8:
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238e820
	if (cr6.eq) goto loc_8238E820;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r27.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x8238e838
	if (!cr6.eq) goto loc_8238E838;
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// b 0x8238e838
	goto loc_8238E838;
loc_8238E820:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r27.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x8238e838
	if (!cr6.eq) goto loc_8238E838;
	// stw r27,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r27.u32);
loc_8238E838:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r31,r27
	r31.u64 = r27.u64;
	// li r29,1
	r29.s64 = 1;
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238e95c
	if (!cr6.eq) goto loc_8238E95C;
	// li r28,0
	r28.s64 = 0;
loc_8238E854:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x8238e8dc
	if (!cr6.eq) goto loc_8238E8DC;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238e89c
	if (!cr6.eq) goto loc_8238E89C;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, r29.u8);
	// stb r29,44(r11)
	PPC_STORE_U8(r11.u32 + 44, r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,44(r8)
	PPC_STORE_U8(ctx.r8.u32 + 44, r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r31,4(r7)
	r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x8238e94c
	goto loc_8238E94C;
loc_8238E89C:
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8238e8b4
	if (!cr6.eq) goto loc_8238E8B4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8238e080
	sub_8238E080(ctx, base);
loc_8238E8B4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,44(r11)
	PPC_STORE_U8(r11.u32 + 44, r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,44(r9)
	PPC_STORE_U8(ctx.r9.u32 + 44, r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x8238e0f8
	sub_8238E0F8(ctx, base);
	// b 0x8238e94c
	goto loc_8238E94C;
loc_8238E8DC:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238e910
	if (!cr6.eq) goto loc_8238E910;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stb r29,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, r29.u8);
	// stb r29,44(r11)
	PPC_STORE_U8(r11.u32 + 44, r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,44(r8)
	PPC_STORE_U8(ctx.r8.u32 + 44, r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r31,4(r7)
	r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x8238e94c
	goto loc_8238E94C;
loc_8238E910:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8238e928
	if (!cr6.eq) goto loc_8238E928;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8238e0f8
	sub_8238E0F8(ctx, base);
loc_8238E928:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,44(r11)
	PPC_STORE_U8(r11.u32 + 44, r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,44(r9)
	PPC_STORE_U8(ctx.r9.u32 + 44, r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x8238e080
	sub_8238E080(ctx, base);
loc_8238E94C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8238e854
	if (cr6.eq) goto loc_8238E854;
loc_8238E95C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r29,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8238E974"))) PPC_WEAK_FUNC(sub_8238E974);
PPC_FUNC_IMPL(__imp__sub_8238E974) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8238E978"))) PPC_WEAK_FUNC(sub_8238E978);
PPC_FUNC_IMPL(__imp__sub_8238E978) {
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
	// lbz r11,45(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 45);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238e9a8
	if (cr6.eq) goto loc_8238E9A8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,5488
	ctx.r3.s64 = r11.s64 + 5488;
	// bl 0x828e9160
	sub_828E9160(ctx, base);
loc_8238E9A8:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bl 0x8238e218
	sub_8238E218(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x8238e9d0
	if (cr6.eq) goto loc_8238E9D0;
	// lwz r28,8(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// b 0x8238e9f4
	goto loc_8238E9F4;
loc_8238E9D0:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lbz r9,45(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8238e9e8
	if (cr6.eq) goto loc_8238E9E8;
	// mr r28,r11
	r28.u64 = r11.u64;
	// b 0x8238e9f4
	goto loc_8238E9F4;
loc_8238E9E8:
	// lwz r28,8(r25)
	r28.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(r25.u32, r26.u32, xer);
	// bne cr6,0x8238eae0
	if (!cr6.eq) goto loc_8238EAE0;
loc_8238E9F4:
	// lbz r11,45(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 45);
	// lwz r31,4(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8238ea08
	if (!cr6.eq) goto loc_8238EA08;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_8238EA08:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x8238ea20
	if (!cr6.eq) goto loc_8238EA20;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// b 0x8238ea38
	goto loc_8238EA38;
loc_8238EA20:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x8238ea34
	if (!cr6.eq) goto loc_8238EA34;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// b 0x8238ea38
	goto loc_8238EA38;
loc_8238EA34:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
loc_8238EA38:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x8238ea88
	if (!cr6.eq) goto loc_8238EA88;
	// lbz r11,45(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 45);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238ea5c
	if (cr6.eq) goto loc_8238EA5C;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x8238ea84
	goto loc_8238EA84;
loc_8238EA5C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lbz r8,45(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 45);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8238ea84
	if (!cr6.eq) goto loc_8238EA84;
loc_8238EA70:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r8,45(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 45);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8238ea70
	if (cr6.eq) goto loc_8238EA70;
loc_8238EA84:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8238EA88:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x8238eb74
	if (!cr6.eq) goto loc_8238EB74;
	// lbz r11,45(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 45);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238eab0
	if (cr6.eq) goto loc_8238EAB0;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r31.u32);
	// b 0x8238eb74
	goto loc_8238EB74;
loc_8238EAB0:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lbz r8,45(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 45);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8238ead8
	if (!cr6.eq) goto loc_8238EAD8;
loc_8238EAC4:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r8,45(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 45);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8238eac4
	if (cr6.eq) goto loc_8238EAC4;
loc_8238EAD8:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x8238eb74
	goto loc_8238EB74;
loc_8238EAE0:
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// bne cr6,0x8238eb00
	if (!cr6.eq) goto loc_8238EB00;
	// mr r31,r25
	r31.u64 = r25.u64;
	// b 0x8238eb28
	goto loc_8238EB28;
loc_8238EB00:
	// lbz r11,45(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 45);
	// lwz r31,4(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8238eb14
	if (!cr6.eq) goto loc_8238EB14;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_8238EB14:
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r25.u32);
loc_8238EB28:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x8238eb40
	if (!cr6.eq) goto loc_8238EB40;
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// b 0x8238eb5c
	goto loc_8238EB5C;
loc_8238EB40:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x8238eb58
	if (!cr6.eq) goto loc_8238EB58;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// b 0x8238eb5c
	goto loc_8238EB5C;
loc_8238EB58:
	// stw r25,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r25.u32);
loc_8238EB5C:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// lbz r9,44(r26)
	ctx.r9.u64 = PPC_LOAD_U8(r26.u32 + 44);
	// lbz r10,44(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 44);
	// stb r9,44(r25)
	PPC_STORE_U8(r25.u32 + 44, ctx.r9.u8);
	// stb r10,44(r26)
	PPC_STORE_U8(r26.u32 + 44, ctx.r10.u8);
loc_8238EB74:
	// lbz r11,44(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 44);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8238ed0c
	if (!cr6.eq) goto loc_8238ED0C;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r29,1
	r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x8238ed08
	if (cr6.eq) goto loc_8238ED08;
	// li r30,0
	r30.s64 = 0;
loc_8238EB98:
	// lbz r11,44(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 44);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8238ed08
	if (!cr6.eq) goto loc_8238ED08;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x8238ec50
	if (!cr6.eq) goto loc_8238EC50;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238ebd8
	if (!cr6.eq) goto loc_8238EBD8;
	// stb r29,44(r11)
	PPC_STORE_U8(r11.u32 + 44, r29.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r30,44(r31)
	PPC_STORE_U8(r31.u32 + 44, r30.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8238e080
	sub_8238E080(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_8238EBD8:
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238eca4
	if (!cr6.eq) goto loc_8238ECA4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 44);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8238ec04
	if (!cr6.eq) goto loc_8238EC04;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 44);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x8238eca0
	if (cr6.eq) goto loc_8238ECA0;
loc_8238EC04:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 44);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x8238ec2c
	if (!cr6.eq) goto loc_8238EC2C;
	// stb r29,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, r29.u8);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stb r30,44(r11)
	PPC_STORE_U8(r11.u32 + 44, r30.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8238e0f8
	sub_8238E0F8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_8238EC2C:
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 44);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,44(r11)
	PPC_STORE_U8(r11.u32 + 44, ctx.r10.u8);
	// stb r29,44(r31)
	PPC_STORE_U8(r31.u32 + 44, r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stb r29,44(r9)
	PPC_STORE_U8(ctx.r9.u32 + 44, r29.u8);
	// bl 0x8238e080
	sub_8238E080(ctx, base);
	// b 0x8238ed08
	goto loc_8238ED08;
loc_8238EC50:
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238ec74
	if (!cr6.eq) goto loc_8238EC74;
	// stb r29,44(r11)
	PPC_STORE_U8(r11.u32 + 44, r29.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r30,44(r31)
	PPC_STORE_U8(r31.u32 + 44, r30.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8238e0f8
	sub_8238E0F8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8238EC74:
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238eca4
	if (!cr6.eq) goto loc_8238ECA4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 44);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8238ecc0
	if (!cr6.eq) goto loc_8238ECC0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 44);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x8238ecc0
	if (!cr6.eq) goto loc_8238ECC0;
loc_8238ECA0:
	// stb r30,44(r11)
	PPC_STORE_U8(r11.u32 + 44, r30.u8);
loc_8238ECA4:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r28,r31
	r28.u64 = r31.u64;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x8238eb98
	if (!cr6.eq) goto loc_8238EB98;
	// b 0x8238ed08
	goto loc_8238ED08;
loc_8238ECC0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 44);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x8238ece8
	if (!cr6.eq) goto loc_8238ECE8;
	// stb r29,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, r29.u8);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stb r30,44(r11)
	PPC_STORE_U8(r11.u32 + 44, r30.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8238e080
	sub_8238E080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8238ECE8:
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 44);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,44(r11)
	PPC_STORE_U8(r11.u32 + 44, ctx.r10.u8);
	// stb r29,44(r31)
	PPC_STORE_U8(r31.u32 + 44, r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stb r29,44(r9)
	PPC_STORE_U8(ctx.r9.u32 + 44, r29.u8);
	// bl 0x8238e0f8
	sub_8238E0F8(ctx, base);
loc_8238ED08:
	// stb r29,44(r28)
	PPC_STORE_U8(r28.u32 + 44, r29.u8);
loc_8238ED0C:
	// addi r3,r26,20
	ctx.r3.s64 = r26.s64 + 20;
	// bl 0x8238e630
	sub_8238E630(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238ed30
	if (cr6.eq) goto loc_8238ED30;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
loc_8238ED30:
	// stw r25,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r25.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8238ED3C"))) PPC_WEAK_FUNC(sub_8238ED3C);
PPC_FUNC_IMPL(__imp__sub_8238ED3C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8238ED40"))) PPC_WEAK_FUNC(sub_8238ED40);
PPC_FUNC_IMPL(__imp__sub_8238ED40) {
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
	// lbz r11,45(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 45);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8238ed94
	if (!cr6.eq) goto loc_8238ED94;
loc_8238ED64:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8238ed40
	sub_8238ED40(ctx, base);
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8238e630
	sub_8238E630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lbz r11,45(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 45);
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238ed64
	if (cr6.eq) goto loc_8238ED64;
loc_8238ED94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8238ED98"))) PPC_WEAK_FUNC(sub_8238ED98);
PPC_FUNC_IMPL(__imp__sub_8238ED98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8238ED9C"))) PPC_WEAK_FUNC(sub_8238ED9C);
PPC_FUNC_IMPL(__imp__sub_8238ED9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238EDA0"))) PPC_WEAK_FUNC(sub_8238EDA0);
PPC_FUNC_IMPL(__imp__sub_8238EDA0) {
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
	// lwz r28,4(r4)
	r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,1
	r25.s64 = 1;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238ee80
	if (!cr6.eq) goto loc_8238EE80;
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
loc_8238EDDC:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r28,r11
	r28.u64 = r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8238ee30
	if (cr6.eq) goto loc_8238EE30;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8238ee1c
	if (cr6.gt) goto loc_8238EE1C;
	// blt cr6,0x8238ee08
	if (cr6.lt) goto loc_8238EE08;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x8238ee1c
	if (cr6.lt) goto loc_8238EE1C;
loc_8238EE08:
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r30,r7,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x8238ee5c
	goto loc_8238EE5C;
loc_8238EE1C:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r30,r7,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x8238ee5c
	goto loc_8238EE5C;
loc_8238EE30:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8238ee54
	if (cr6.gt) goto loc_8238EE54;
	// blt cr6,0x8238ee4c
	if (cr6.lt) goto loc_8238EE4C;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x8238ee54
	if (cr6.lt) goto loc_8238EE54;
loc_8238EE4C:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8238ee58
	goto loc_8238EE58;
loc_8238EE54:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_8238EE58:
	// clrlwi r30,r10,24
	r30.u64 = ctx.r10.u32 & 0xFF;
loc_8238EE5C:
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8238ee70
	if (cr6.eq) goto loc_8238EE70;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8238ee74
	goto loc_8238EE74;
loc_8238EE70:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_8238EE74:
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8238eddc
	if (cr6.eq) goto loc_8238EDDC;
loc_8238EE80:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238eee0
	if (cr6.eq) goto loc_8238EEE0;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x8238eed8
	if (!cr6.eq) goto loc_8238EED8;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8238e780
	sub_8238E780(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r25,4(r27)
	PPC_STORE_U8(r27.u32 + 4, r25.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_8238EED8:
	// bl 0x8238e170
	sub_8238E170(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8238EEE0:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8238ef0c
	if (cr6.gt) goto loc_8238EF0C;
	// blt cr6,0x8238ef04
	if (cr6.lt) goto loc_8238EF04;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8238ef0c
	if (cr6.lt) goto loc_8238EF0C;
loc_8238EF04:
	// li r11,0
	r11.s64 = 0;
	// b 0x8238ef10
	goto loc_8238EF10;
loc_8238EF0C:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8238EF10:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238ef50
	if (cr6.eq) goto loc_8238EF50;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238e780
	sub_8238E780(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r25,4(r27)
	PPC_STORE_U8(r27.u32 + 4, r25.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_8238EF50:
	// addi r3,r29,20
	ctx.r3.s64 = r29.s64 + 20;
	// bl 0x8238e630
	sub_8238E630(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r11,4(r27)
	PPC_STORE_U8(r27.u32 + 4, r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8238EF74"))) PPC_WEAK_FUNC(sub_8238EF74);
PPC_FUNC_IMPL(__imp__sub_8238EF74) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8238EF78"))) PPC_WEAK_FUNC(sub_8238EF78);
PPC_FUNC_IMPL(__imp__sub_8238EF78) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8238ed40
	sub_8238ED40(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8238EFC8"))) PPC_WEAK_FUNC(sub_8238EFC8);
PPC_FUNC_IMPL(__imp__sub_8238EFC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238EFCC"))) PPC_WEAK_FUNC(sub_8238EFCC);
PPC_FUNC_IMPL(__imp__sub_8238EFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238EFD0"))) PPC_WEAK_FUNC(sub_8238EFD0);
PPC_FUNC_IMPL(__imp__sub_8238EFD0) {
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8238f014
	if (!cr6.eq) goto loc_8238F014;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8238e780
	sub_8238E780(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8238F014:
	// lwz r27,4(r26)
	r27.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8238f084
	if (!cr6.eq) goto loc_8238F084;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x8238f050
	if (cr6.gt) goto loc_8238F050;
	// blt cr6,0x8238f048
	if (cr6.lt) goto loc_8238F048;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8238f050
	if (cr6.lt) goto loc_8238F050;
loc_8238F048:
	// li r11,0
	r11.s64 = 0;
	// b 0x8238f054
	goto loc_8238F054;
loc_8238F050:
	// li r11,1
	r11.s64 = 1;
loc_8238F054:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238f260
	if (cr6.eq) goto loc_8238F260;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8238e780
	sub_8238E780(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8238F084:
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// bne cr6,0x8238f0ec
	if (!cr6.eq) goto loc_8238F0EC;
	// lwz r6,8(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8238f0bc
	if (cr6.gt) goto loc_8238F0BC;
	// blt cr6,0x8238f0b4
	if (cr6.lt) goto loc_8238F0B4;
	// lwz r11,16(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8238f0bc
	if (cr6.lt) goto loc_8238F0BC;
loc_8238F0B4:
	// li r11,0
	r11.s64 = 0;
	// b 0x8238f0c0
	goto loc_8238F0C0;
loc_8238F0BC:
	// li r11,1
	r11.s64 = 1;
loc_8238F0C0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238f260
	if (cr6.eq) goto loc_8238F260;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8238e780
	sub_8238E780(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8238F0EC:
	// lwz r30,12(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bgt cr6,0x8238f118
	if (cr6.gt) goto loc_8238F118;
	// blt cr6,0x8238f110
	if (cr6.lt) goto loc_8238F110;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8238f118
	if (cr6.lt) goto loc_8238F118;
loc_8238F110:
	// li r11,0
	r11.s64 = 0;
	// b 0x8238f11c
	goto loc_8238F11C;
loc_8238F118:
	// li r11,1
	r11.s64 = 1;
loc_8238F11C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238f1a4
	if (cr6.eq) goto loc_8238F1A4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238e170
	sub_8238E170(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bgt cr6,0x8238f160
	if (cr6.gt) goto loc_8238F160;
	// blt cr6,0x8238f158
	if (cr6.lt) goto loc_8238F158;
	// lwz r11,16(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8238f160
	if (cr6.lt) goto loc_8238F160;
loc_8238F158:
	// li r11,0
	r11.s64 = 0;
	// b 0x8238f164
	goto loc_8238F164;
loc_8238F160:
	// li r11,1
	r11.s64 = 1;
loc_8238F164:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238f1a4
	if (cr6.eq) goto loc_8238F1A4;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238f24c
	if (!cr6.eq) goto loc_8238F24C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_8238F190:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8238e780
	sub_8238E780(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8238F1A4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bgt cr6,0x8238f1cc
	if (cr6.gt) goto loc_8238F1CC;
	// blt cr6,0x8238f1c4
	if (cr6.lt) goto loc_8238F1C4;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8238f1cc
	if (cr6.lt) goto loc_8238F1CC;
loc_8238F1C4:
	// li r11,0
	r11.s64 = 0;
	// b 0x8238f1d0
	goto loc_8238F1D0;
loc_8238F1CC:
	// li r11,1
	r11.s64 = 1;
loc_8238F1D0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238f260
	if (cr6.eq) goto loc_8238F260;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238e218
	sub_8238E218(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r27
	cr6.compare<uint32_t>(ctx.r6.u32, r27.u32, xer);
	// beq cr6,0x8238f22c
	if (cr6.eq) goto loc_8238F22C;
	// lwz r11,12(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bgt cr6,0x8238f21c
	if (cr6.gt) goto loc_8238F21C;
	// blt cr6,0x8238f214
	if (cr6.lt) goto loc_8238F214;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8238f21c
	if (cr6.lt) goto loc_8238F21C;
loc_8238F214:
	// li r11,0
	r11.s64 = 0;
	// b 0x8238f220
	goto loc_8238F220;
loc_8238F21C:
	// li r11,1
	r11.s64 = 1;
loc_8238F220:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238f260
	if (cr6.eq) goto loc_8238F260;
loc_8238F22C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8238f190
	if (cr6.eq) goto loc_8238F190;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_8238F24C:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8238e780
	sub_8238E780(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8238F260:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238eda0
	sub_8238EDA0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8238F288"))) PPC_WEAK_FUNC(sub_8238F288);
PPC_FUNC_IMPL(__imp__sub_8238F288) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8238F28C"))) PPC_WEAK_FUNC(sub_8238F28C);
PPC_FUNC_IMPL(__imp__sub_8238F28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238F290"))) PPC_WEAK_FUNC(sub_8238F290);
PPC_FUNC_IMPL(__imp__sub_8238F290) {
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x8238f2e4
	if (!cr6.eq) goto loc_8238F2E4;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// bne cr6,0x8238f2e4
	if (!cr6.eq) goto loc_8238F2E4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8238ef78
	sub_8238EF78(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8238F2E4:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, xer);
	// beq cr6,0x8238f314
	if (cr6.eq) goto loc_8238F314;
loc_8238F2EC:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x8238e218
	sub_8238E218(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238e978
	sub_8238E978(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, xer);
	// bne cr6,0x8238f2ec
	if (!cr6.eq) goto loc_8238F2EC;
loc_8238F314:
	// stw r5,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8238F320"))) PPC_WEAK_FUNC(sub_8238F320);
PPC_FUNC_IMPL(__imp__sub_8238F320) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8238F324"))) PPC_WEAK_FUNC(sub_8238F324);
PPC_FUNC_IMPL(__imp__sub_8238F324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238F328"))) PPC_WEAK_FUNC(sub_8238F328);
PPC_FUNC_IMPL(__imp__sub_8238F328) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8238e340
	sub_8238E340(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x8238f390
	if (cr6.eq) goto loc_8238F390;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x8238f380
	if (cr6.gt) goto loc_8238F380;
	// blt cr6,0x8238f378
	if (cr6.lt) goto loc_8238F378;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8238f380
	if (cr6.lt) goto loc_8238F380;
loc_8238F378:
	// mr r11,r31
	r11.u64 = r31.u64;
	// b 0x8238f384
	goto loc_8238F384;
loc_8238F380:
	// li r11,1
	r11.s64 = 1;
loc_8238F384:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238f430
	if (cr6.eq) goto loc_8238F430;
loc_8238F390:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// addi r27,r11,4244
	r27.s64 = r11.s64 + 4244;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r31.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r31.u32);
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r27.u32);
	// bl 0x824b28c8
	sub_824B28C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8238e2a8
	sub_8238E2A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addic. r3,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r3.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8238f3fc
	if (cr0.eq) goto loc_8238F3FC;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x8238e718
	sub_8238E718(ctx, base);
loc_8238F3FC:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238efd0
	sub_8238EFD0(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8238e630
	sub_8238E630(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8238e630
	sub_8238E630(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9464
	return;
loc_8238F430:
	// addi r3,r28,20
	ctx.r3.s64 = r28.s64 + 20;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8238F438"))) PPC_WEAK_FUNC(sub_8238F438);
PPC_FUNC_IMPL(__imp__sub_8238F438) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8238F43C"))) PPC_WEAK_FUNC(sub_8238F43C);
PPC_FUNC_IMPL(__imp__sub_8238F43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238F440"))) PPC_WEAK_FUNC(sub_8238F440);
PPC_FUNC_IMPL(__imp__sub_8238F440) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,4256
	ctx.r10.s64 = r11.s64 + 4256;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r4,r3,76
	ctx.r4.s64 = ctx.r3.s64 + 76;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8238f290
	sub_8238F290(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8238f49c
	if (cr6.eq) goto loc_8238F49C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8238F49C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8238F4B0"))) PPC_WEAK_FUNC(sub_8238F4B0);
PPC_FUNC_IMPL(__imp__sub_8238F4B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238F4B4"))) PPC_WEAK_FUNC(sub_8238F4B4);
PPC_FUNC_IMPL(__imp__sub_8238F4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238F4B8"))) PPC_WEAK_FUNC(sub_8238F4B8);
PPC_FUNC_IMPL(__imp__sub_8238F4B8) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238f514
	if (cr6.eq) goto loc_8238F514;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8238f514
	if (!cr6.eq) goto loc_8238F514;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8238f514
	if (cr6.eq) goto loc_8238F514;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x827130e8
	sub_827130E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_8238F514:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8238f52c
	if (cr6.eq) goto loc_8238F52C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_8238F52C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8238F530"))) PPC_WEAK_FUNC(sub_8238F530);
PPC_FUNC_IMPL(__imp__sub_8238F530) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8238F534"))) PPC_WEAK_FUNC(sub_8238F534);
PPC_FUNC_IMPL(__imp__sub_8238F534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238F538"))) PPC_WEAK_FUNC(sub_8238F538);
PPC_FUNC_IMPL(__imp__sub_8238F538) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238f590
	if (cr6.eq) goto loc_8238F590;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8238f590
	if (!cr6.eq) goto loc_8238F590;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8238f590
	if (cr6.eq) goto loc_8238F590;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x827130e8
	sub_827130E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
loc_8238F590:
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,25
	ctx.r9.s64 = 25;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,4268
	ctx.r7.s64 = ctx.r10.s64 + 4268;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,112
	ctx.r3.s64 = 112;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8238f5e4
	if (cr6.eq) goto loc_8238F5E4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x827127a0
	sub_827127A0(ctx, base);
	// b 0x8238f5e8
	goto loc_8238F5E8;
loc_8238F5E4:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8238F5E8:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8238F5FC"))) PPC_WEAK_FUNC(sub_8238F5FC);
PPC_FUNC_IMPL(__imp__sub_8238F5FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8238F600"))) PPC_WEAK_FUNC(sub_8238F600);
PPC_FUNC_IMPL(__imp__sub_8238F600) {
	PPC_FUNC_PROLOGUE();
	// stb r4,500(r3)
	PPC_STORE_U8(ctx.r3.u32 + 500, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238F608"))) PPC_WEAK_FUNC(sub_8238F608);
PPC_FUNC_IMPL(__imp__sub_8238F608) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r3,408
	r31.s64 = ctx.r3.s64 + 408;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x826dad80
	sub_826DAD80(ctx, base);
	// stw r29,520(r30)
	PPC_STORE_U32(r30.u32 + 520, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826dadb0
	sub_826DADB0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8238F63C"))) PPC_WEAK_FUNC(sub_8238F63C);
PPC_FUNC_IMPL(__imp__sub_8238F63C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8238F640"))) PPC_WEAK_FUNC(sub_8238F640);
PPC_FUNC_IMPL(__imp__sub_8238F640) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238F648"))) PPC_WEAK_FUNC(sub_8238F648);
PPC_FUNC_IMPL(__imp__sub_8238F648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,128(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addi r3,r11,9904
	ctx.r3.s64 = r11.s64 + 9904;
}

__attribute__((alias("__imp__sub_8238F650"))) PPC_WEAK_FUNC(sub_8238F650);
PPC_FUNC_IMPL(__imp__sub_8238F650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238F654"))) PPC_WEAK_FUNC(sub_8238F654);
PPC_FUNC_IMPL(__imp__sub_8238F654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238F658"))) PPC_WEAK_FUNC(sub_8238F658);
PPC_FUNC_IMPL(__imp__sub_8238F658) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238F65C"))) PPC_WEAK_FUNC(sub_8238F65C);
PPC_FUNC_IMPL(__imp__sub_8238F65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238F660"))) PPC_WEAK_FUNC(sub_8238F660);
PPC_FUNC_IMPL(__imp__sub_8238F660) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238F664"))) PPC_WEAK_FUNC(sub_8238F664);
PPC_FUNC_IMPL(__imp__sub_8238F664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238F668"))) PPC_WEAK_FUNC(sub_8238F668);
PPC_FUNC_IMPL(__imp__sub_8238F668) {
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
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// bl 0x82712c10
	sub_82712C10(ctx, base);
	// addi r3,r31,284
	ctx.r3.s64 = r31.s64 + 284;
	// bl 0x82712c10
	sub_82712C10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8238F69C"))) PPC_WEAK_FUNC(sub_8238F69C);
PPC_FUNC_IMPL(__imp__sub_8238F69C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238F6A0"))) PPC_WEAK_FUNC(sub_8238F6A0);
PPC_FUNC_IMPL(__imp__sub_8238F6A0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca2b8
	sub_826CA2B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,512
	ctx.r3.s64 = r31.s64 + 512;
	// bl 0x826ca440
	sub_826CA440(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8238F6E0"))) PPC_WEAK_FUNC(sub_8238F6E0);
PPC_FUNC_IMPL(__imp__sub_8238F6E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238F6E4"))) PPC_WEAK_FUNC(sub_8238F6E4);
PPC_FUNC_IMPL(__imp__sub_8238F6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238F6E8"))) PPC_WEAK_FUNC(sub_8238F6E8);
PPC_FUNC_IMPL(__imp__sub_8238F6E8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,4408
	ctx.r9.s64 = r11.s64 + 4408;
	// addi r8,r10,4388
	ctx.r8.s64 = ctx.r10.s64 + 4388;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,512
	ctx.r3.s64 = ctx.r3.s64 + 512;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// addi r3,r31,472
	ctx.r3.s64 = r31.s64 + 472;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,444
	ctx.r3.s64 = r31.s64 + 444;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,408
	ctx.r3.s64 = r31.s64 + 408;
	// bl 0x826dad78
	sub_826DAD78(ctx, base);
	// addi r30,r31,88
	r30.s64 = r31.s64 + 88;
	// addi r3,r30,196
	ctx.r3.s64 = r30.s64 + 196;
	// bl 0x827130e8
	sub_827130E8(ctx, base);
	// addi r3,r30,88
	ctx.r3.s64 = r30.s64 + 88;
	// bl 0x827130e8
	sub_827130E8(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r4,r7,-32392
	ctx.r4.s64 = ctx.r7.s64 + -32392;
	// addi r3,r6,4380
	ctx.r3.s64 = ctx.r6.s64 + 4380;
	// addi r10,r5,4364
	ctx.r10.s64 = ctx.r5.s64 + 4364;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// bl 0x826cf618
	sub_826CF618(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r7,r9,4372
	ctx.r7.s64 = ctx.r9.s64 + 4372;
	// li r11,0
	r11.s64 = 0;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r11,21640(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21640, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8238F7A0"))) PPC_WEAK_FUNC(sub_8238F7A0);
PPC_FUNC_IMPL(__imp__sub_8238F7A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8238F7A4"))) PPC_WEAK_FUNC(sub_8238F7A4);
PPC_FUNC_IMPL(__imp__sub_8238F7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238F7A8"))) PPC_WEAK_FUNC(sub_8238F7A8);
PPC_FUNC_IMPL(__imp__sub_8238F7A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// addi r8,r4,24
	ctx.r8.s64 = ctx.r4.s64 + 24;
loc_8238F7B0:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8238f7b0
	if (!cr0.eq) goto loc_8238F7B0;
	// lwz r3,20(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
}

__attribute__((alias("__imp__sub_8238F7CC"))) PPC_WEAK_FUNC(sub_8238F7CC);
PPC_FUNC_IMPL(__imp__sub_8238F7CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x82605ae8
	sub_82605AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238F7D0"))) PPC_WEAK_FUNC(sub_8238F7D0);
PPC_FUNC_IMPL(__imp__sub_8238F7D0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-2016(r1)
	ea = -2016 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,7
	ctx.r7.s64 = 7;
	// lwz r6,24192(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stfs f0,168(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r10,1697(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1697, ctx.r10.u8);
	// stb r9,1698(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1698, ctx.r9.u8);
	// li r11,10
	r11.s64 = 10;
	// stb r8,1699(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1699, ctx.r8.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r7,1700(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1700, ctx.r7.u8);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r6,1952(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1952, ctx.r6.u32);
	// li r8,13
	ctx.r8.s64 = 13;
	// stb r5,1701(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1701, ctx.r5.u8);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r6,16
	ctx.r6.s64 = 16;
	// stb r10,1696(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1696, ctx.r10.u8);
	// li r5,18
	ctx.r5.s64 = 18;
	// stb r11,1702(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1702, r11.u8);
	// stb r9,1703(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1703, ctx.r9.u8);
	// li r11,20
	r11.s64 = 20;
	// stb r8,1704(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1704, ctx.r8.u8);
	// li r10,21
	ctx.r10.s64 = 21;
	// stb r7,1705(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1705, ctx.r7.u8);
	// li r9,22
	ctx.r9.s64 = 22;
	// stb r6,1706(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1706, ctx.r6.u8);
	// li r8,24
	ctx.r8.s64 = 24;
	// stb r5,1707(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1707, ctx.r5.u8);
	// li r7,25
	ctx.r7.s64 = 25;
	// li r6,27
	ctx.r6.s64 = 27;
	// stb r11,1708(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1708, r11.u8);
	// li r5,28
	ctx.r5.s64 = 28;
	// stb r10,1709(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1709, ctx.r10.u8);
	// li r11,29
	r11.s64 = 29;
	// stb r9,1710(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1710, ctx.r9.u8);
	// li r10,30
	ctx.r10.s64 = 30;
	// stb r8,1711(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1711, ctx.r8.u8);
	// stb r7,1712(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1712, ctx.r7.u8);
	// li r9,32
	ctx.r9.s64 = 32;
	// stb r6,1713(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1713, ctx.r6.u8);
	// li r8,33
	ctx.r8.s64 = 33;
	// stb r5,1714(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1714, ctx.r5.u8);
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,35
	ctx.r6.s64 = 35;
	// stb r11,1715(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1715, r11.u8);
	// li r31,36
	r31.s64 = 36;
	// stb r10,1716(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1716, ctx.r10.u8);
	// li r5,37
	ctx.r5.s64 = 37;
	// stb r9,1717(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1717, ctx.r9.u8);
	// li r11,38
	r11.s64 = 38;
	// stb r8,1718(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1718, ctx.r8.u8);
	// li r10,39
	ctx.r10.s64 = 39;
	// stb r7,1719(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1719, ctx.r7.u8);
	// stb r6,1720(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1720, ctx.r6.u8);
	// li r9,40
	ctx.r9.s64 = 40;
	// stb r31,1721(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1721, r31.u8);
	// li r8,41
	ctx.r8.s64 = 41;
	// stb r5,1722(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1722, ctx.r5.u8);
	// li r7,42
	ctx.r7.s64 = 42;
	// li r6,43
	ctx.r6.s64 = 43;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r31,44
	r31.s64 = 44;
	// stb r11,1723(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1723, r11.u8);
	// li r5,45
	ctx.r5.s64 = 45;
	// stb r10,1724(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1724, ctx.r10.u8);
	// li r30,46
	r30.s64 = 46;
	// stfs f13,172(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stb r9,1725(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1725, ctx.r9.u8);
	// li r11,70
	r11.s64 = 70;
	// stb r8,1726(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1726, ctx.r8.u8);
	// li r10,47
	ctx.r10.s64 = 47;
	// stb r7,1727(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1727, ctx.r7.u8);
	// stb r6,1728(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1728, ctx.r6.u8);
	// stb r31,1729(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1729, r31.u8);
	// stb r5,1730(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1730, ctx.r5.u8);
	// stb r30,1731(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1731, r30.u8);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// li r9,48
	ctx.r9.s64 = 48;
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// li r8,49
	ctx.r8.s64 = 49;
	// li r7,50
	ctx.r7.s64 = 50;
	// stb r10,1732(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1732, ctx.r10.u8);
	// li r6,51
	ctx.r6.s64 = 51;
	// stb r9,1733(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1733, ctx.r9.u8);
	// li r5,52
	ctx.r5.s64 = 52;
	// stb r8,1734(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1734, ctx.r8.u8);
	// li r4,53
	ctx.r4.s64 = 53;
	// stb r7,1735(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1735, ctx.r7.u8);
	// stb r6,1736(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1736, ctx.r6.u8);
	// li r10,54
	ctx.r10.s64 = 54;
	// stb r5,1737(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1737, ctx.r5.u8);
	// li r9,55
	ctx.r9.s64 = 55;
	// stb r4,1738(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1738, ctx.r4.u8);
	// li r8,56
	ctx.r8.s64 = 56;
	// li r7,57
	ctx.r7.s64 = 57;
	// stb r10,1739(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1739, ctx.r10.u8);
	// li r6,58
	ctx.r6.s64 = 58;
	// stb r9,1740(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1740, ctx.r9.u8);
	// li r5,59
	ctx.r5.s64 = 59;
	// stb r8,1741(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1741, ctx.r8.u8);
	// li r4,60
	ctx.r4.s64 = 60;
	// stb r7,1742(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1742, ctx.r7.u8);
	// stb r6,1743(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1743, ctx.r6.u8);
	// li r10,61
	ctx.r10.s64 = 61;
	// stb r5,1744(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1744, ctx.r5.u8);
	// li r9,62
	ctx.r9.s64 = 62;
	// stb r4,1745(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1745, ctx.r4.u8);
	// li r8,63
	ctx.r8.s64 = 63;
	// li r7,65
	ctx.r7.s64 = 65;
	// stb r10,1746(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1746, ctx.r10.u8);
	// li r6,66
	ctx.r6.s64 = 66;
	// stb r9,1747(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1747, ctx.r9.u8);
	// li r5,64
	ctx.r5.s64 = 64;
	// stb r8,1748(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1748, ctx.r8.u8);
	// li r4,67
	ctx.r4.s64 = 67;
	// stb r7,1750(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1750, ctx.r7.u8);
	// stb r6,1751(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1751, ctx.r6.u8);
	// li r10,68
	ctx.r10.s64 = 68;
	// stb r5,1749(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1749, ctx.r5.u8);
	// li r9,69
	ctx.r9.s64 = 69;
	// stb r4,1752(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1752, ctx.r4.u8);
	// li r8,71
	ctx.r8.s64 = 71;
	// li r7,72
	ctx.r7.s64 = 72;
	// stb r11,1755(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1755, r11.u8);
	// stb r11,1756(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1756, r11.u8);
	// li r6,73
	ctx.r6.s64 = 73;
	// li r5,74
	ctx.r5.s64 = 74;
	// stb r10,1753(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1753, ctx.r10.u8);
	// li r4,75
	ctx.r4.s64 = 75;
	// stb r9,1754(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1754, ctx.r9.u8);
	// li r11,76
	r11.s64 = 76;
	// stb r8,1757(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1757, ctx.r8.u8);
	// stb r7,1758(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1758, ctx.r7.u8);
	// li r10,77
	ctx.r10.s64 = 77;
	// li r9,78
	ctx.r9.s64 = 78;
	// stb r6,1759(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1759, ctx.r6.u8);
	// li r8,79
	ctx.r8.s64 = 79;
	// stb r5,1760(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1760, ctx.r5.u8);
	// li r7,80
	ctx.r7.s64 = 80;
	// stb r4,1761(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1761, ctx.r4.u8);
	// stb r11,1762(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1762, r11.u8);
	// li r6,81
	ctx.r6.s64 = 81;
	// li r5,82
	ctx.r5.s64 = 82;
	// stb r10,1763(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1763, ctx.r10.u8);
	// li r4,83
	ctx.r4.s64 = 83;
	// stb r9,1764(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1764, ctx.r9.u8);
	// li r11,85
	r11.s64 = 85;
	// stb r8,1765(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1765, ctx.r8.u8);
	// stb r7,1766(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1766, ctx.r7.u8);
	// li r10,86
	ctx.r10.s64 = 86;
	// stb r6,1767(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1767, ctx.r6.u8);
	// li r9,87
	ctx.r9.s64 = 87;
	// stb r5,1768(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1768, ctx.r5.u8);
	// li r8,88
	ctx.r8.s64 = 88;
	// stb r4,1769(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1769, ctx.r4.u8);
	// li r7,89
	ctx.r7.s64 = 89;
	// stb r11,1770(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1770, r11.u8);
	// stb r10,1771(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1771, ctx.r10.u8);
	// li r6,90
	ctx.r6.s64 = 90;
	// li r5,91
	ctx.r5.s64 = 91;
	// stb r9,1772(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1772, ctx.r9.u8);
	// li r4,92
	ctx.r4.s64 = 92;
	// stb r8,1773(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1773, ctx.r8.u8);
	// li r10,94
	ctx.r10.s64 = 94;
	// stb r7,1774(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1774, ctx.r7.u8);
	// stb r6,1775(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1775, ctx.r6.u8);
	// li r11,93
	r11.s64 = 93;
	// stb r5,1776(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1776, ctx.r5.u8);
	// li r9,95
	ctx.r9.s64 = 95;
	// stb r4,1777(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1777, ctx.r4.u8);
	// li r8,96
	ctx.r8.s64 = 96;
	// stb r10,1779(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1779, ctx.r10.u8);
	// li r7,97
	ctx.r7.s64 = 97;
	// li r6,98
	ctx.r6.s64 = 98;
	// stb r11,1778(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1778, r11.u8);
	// li r5,99
	ctx.r5.s64 = 99;
	// stb r9,1780(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1780, ctx.r9.u8);
	// li r4,100
	ctx.r4.s64 = 100;
	// stb r8,1781(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1781, ctx.r8.u8);
	// li r10,102
	ctx.r10.s64 = 102;
	// stb r7,1782(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1782, ctx.r7.u8);
	// stb r6,1783(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1783, ctx.r6.u8);
	// li r11,101
	r11.s64 = 101;
	// stb r5,1784(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1784, ctx.r5.u8);
	// li r9,103
	ctx.r9.s64 = 103;
	// stb r4,1785(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1785, ctx.r4.u8);
	// li r8,104
	ctx.r8.s64 = 104;
	// stb r10,1787(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1787, ctx.r10.u8);
	// li r7,105
	ctx.r7.s64 = 105;
	// li r6,106
	ctx.r6.s64 = 106;
	// stb r11,1786(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1786, r11.u8);
	// li r5,107
	ctx.r5.s64 = 107;
	// stb r9,1788(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1788, ctx.r9.u8);
	// li r4,108
	ctx.r4.s64 = 108;
	// stb r8,1789(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1789, ctx.r8.u8);
	// li r10,110
	ctx.r10.s64 = 110;
	// stb r7,1790(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1790, ctx.r7.u8);
	// stb r6,1791(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1791, ctx.r6.u8);
	// li r11,109
	r11.s64 = 109;
	// stb r5,1792(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1792, ctx.r5.u8);
	// li r9,111
	ctx.r9.s64 = 111;
	// stb r4,1793(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1793, ctx.r4.u8);
	// li r8,112
	ctx.r8.s64 = 112;
	// li r7,113
	ctx.r7.s64 = 113;
	// stb r10,1795(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1795, ctx.r10.u8);
	// li r6,114
	ctx.r6.s64 = 114;
	// stb r11,1794(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1794, r11.u8);
	// li r5,115
	ctx.r5.s64 = 115;
	// stb r9,1796(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1796, ctx.r9.u8);
	// li r4,116
	ctx.r4.s64 = 116;
	// stb r8,1797(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1797, ctx.r8.u8);
	// li r10,118
	ctx.r10.s64 = 118;
	// stb r7,1798(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1798, ctx.r7.u8);
	// stb r6,1799(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1799, ctx.r6.u8);
	// li r11,117
	r11.s64 = 117;
	// li r9,119
	ctx.r9.s64 = 119;
	// stb r5,1800(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1800, ctx.r5.u8);
	// li r8,120
	ctx.r8.s64 = 120;
	// stb r4,1801(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1801, ctx.r4.u8);
	// li r7,121
	ctx.r7.s64 = 121;
	// stb r10,1803(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1803, ctx.r10.u8);
	// li r6,122
	ctx.r6.s64 = 122;
	// stb r11,1802(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1802, r11.u8);
	// li r5,123
	ctx.r5.s64 = 123;
	// stb r9,1804(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1804, ctx.r9.u8);
	// li r4,124
	ctx.r4.s64 = 124;
	// stb r8,1805(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1805, ctx.r8.u8);
	// li r10,125
	ctx.r10.s64 = 125;
	// stb r7,1806(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1806, ctx.r7.u8);
	// stb r6,1807(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1807, ctx.r6.u8);
	// li r11,156
	r11.s64 = 156;
	// stb r5,1808(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1808, ctx.r5.u8);
	// li r9,126
	ctx.r9.s64 = 126;
	// stb r4,1809(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1809, ctx.r4.u8);
	// li r8,127
	ctx.r8.s64 = 127;
	// stb r10,1810(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1810, ctx.r10.u8);
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,129
	ctx.r6.s64 = 129;
	// li r5,130
	ctx.r5.s64 = 130;
	// stb r11,1841(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1841, r11.u8);
	// li r4,131
	ctx.r4.s64 = 131;
	// stb r11,1842(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1842, r11.u8);
	// stb r9,1811(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1811, ctx.r9.u8);
	// li r11,132
	r11.s64 = 132;
	// stb r8,1812(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1812, ctx.r8.u8);
	// li r10,133
	ctx.r10.s64 = 133;
	// stb r6,1814(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1814, ctx.r6.u8);
	// li r9,134
	ctx.r9.s64 = 134;
	// stb r5,1815(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1815, ctx.r5.u8);
	// li r8,135
	ctx.r8.s64 = 135;
	// stb r4,1816(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1816, ctx.r4.u8);
	// li r6,137
	ctx.r6.s64 = 137;
	// stb r7,1813(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1813, ctx.r7.u8);
	// li r5,138
	ctx.r5.s64 = 138;
	// li r4,139
	ctx.r4.s64 = 139;
	// stb r11,1817(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1817, r11.u8);
	// li r7,136
	ctx.r7.s64 = 136;
	// stb r10,1818(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1818, ctx.r10.u8);
	// stb r9,1819(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1819, ctx.r9.u8);
	// li r11,140
	r11.s64 = 140;
	// stb r8,1820(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1820, ctx.r8.u8);
	// li r10,141
	ctx.r10.s64 = 141;
	// stb r6,1822(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1822, ctx.r6.u8);
	// li r9,142
	ctx.r9.s64 = 142;
	// stb r5,1823(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1823, ctx.r5.u8);
	// li r8,143
	ctx.r8.s64 = 143;
	// stb r4,1824(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1824, ctx.r4.u8);
	// li r6,145
	ctx.r6.s64 = 145;
	// stb r7,1821(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1821, ctx.r7.u8);
	// li r5,146
	ctx.r5.s64 = 146;
	// li r4,147
	ctx.r4.s64 = 147;
	// stb r11,1825(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1825, r11.u8);
	// li r7,144
	ctx.r7.s64 = 144;
	// stb r10,1826(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1826, ctx.r10.u8);
	// stb r9,1827(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1827, ctx.r9.u8);
	// li r11,148
	r11.s64 = 148;
	// stb r8,1828(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1828, ctx.r8.u8);
	// li r10,149
	ctx.r10.s64 = 149;
	// stb r6,1830(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1830, ctx.r6.u8);
	// li r9,150
	ctx.r9.s64 = 150;
	// stb r5,1831(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1831, ctx.r5.u8);
	// li r8,151
	ctx.r8.s64 = 151;
	// stb r4,1832(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1832, ctx.r4.u8);
	// li r6,153
	ctx.r6.s64 = 153;
	// stb r7,1829(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1829, ctx.r7.u8);
	// li r5,154
	ctx.r5.s64 = 154;
	// li r4,155
	ctx.r4.s64 = 155;
	// stb r11,1833(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1833, r11.u8);
	// li r7,152
	ctx.r7.s64 = 152;
	// stb r10,1834(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1834, ctx.r10.u8);
	// stb r9,1835(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1835, ctx.r9.u8);
	// li r11,157
	r11.s64 = 157;
	// stb r8,1836(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1836, ctx.r8.u8);
	// li r10,158
	ctx.r10.s64 = 158;
	// stb r6,1838(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1838, ctx.r6.u8);
	// li r9,159
	ctx.r9.s64 = 159;
	// stb r5,1839(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1839, ctx.r5.u8);
	// li r8,160
	ctx.r8.s64 = 160;
	// stb r4,1840(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1840, ctx.r4.u8);
	// li r6,162
	ctx.r6.s64 = 162;
	// li r5,163
	ctx.r5.s64 = 163;
	// stb r7,1837(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1837, ctx.r7.u8);
	// li r4,164
	ctx.r4.s64 = 164;
	// stb r11,1843(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1843, r11.u8);
	// li r7,161
	ctx.r7.s64 = 161;
	// stb r10,1844(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1844, ctx.r10.u8);
	// stb r9,1845(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1845, ctx.r9.u8);
	// li r9,173
	ctx.r9.s64 = 173;
	// stb r8,1846(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1846, ctx.r8.u8);
	// li r10,186
	ctx.r10.s64 = 186;
	// stb r6,1848(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1848, ctx.r6.u8);
	// li r11,196
	r11.s64 = 196;
	// stb r5,1849(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1849, ctx.r5.u8);
	// li r8,165
	ctx.r8.s64 = 165;
	// stb r4,1850(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1850, ctx.r4.u8);
	// li r6,166
	ctx.r6.s64 = 166;
	// stb r7,1847(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1847, ctx.r7.u8);
	// li r5,167
	ctx.r5.s64 = 167;
	// li r4,168
	ctx.r4.s64 = 168;
	// stb r9,1859(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1859, ctx.r9.u8);
	// li r31,169
	r31.s64 = 169;
	// stb r9,1860(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1860, ctx.r9.u8);
	// li r9,170
	ctx.r9.s64 = 170;
	// lbz r7,164(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 164);
	// li r30,171
	r30.s64 = 171;
	// stb r11,1884(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1884, r11.u8);
	// li r29,174
	r29.s64 = 174;
	// stb r11,1885(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1885, r11.u8);
	// li r11,175
	r11.s64 = 175;
	// stb r6,1852(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1852, ctx.r6.u8);
	// li r3,176
	ctx.r3.s64 = 176;
	// stb r5,1853(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1853, ctx.r5.u8);
	// li r6,178
	ctx.r6.s64 = 178;
	// li r5,179
	ctx.r5.s64 = 179;
	// stb r10,1873(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1873, ctx.r10.u8);
	// stb r10,1874(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1874, ctx.r10.u8);
	// li r10,172
	ctx.r10.s64 = 172;
	// stb r8,1851(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1851, ctx.r8.u8);
	// li r8,177
	ctx.r8.s64 = 177;
	// stb r4,1854(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1854, ctx.r4.u8);
	// li r4,180
	ctx.r4.s64 = 180;
	// stb r9,1856(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1856, ctx.r9.u8);
	// li r9,182
	ctx.r9.s64 = 182;
	// stb r31,1855(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1855, r31.u8);
	// li r31,181
	r31.s64 = 181;
	// stb r30,1857(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1857, r30.u8);
	// li r30,183
	r30.s64 = 183;
	// stb r29,1861(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1861, r29.u8);
	// li r29,185
	r29.s64 = 185;
	// stb r11,1862(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1862, r11.u8);
	// li r11,187
	r11.s64 = 187;
	// stb r3,1863(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1863, ctx.r3.u8);
	// li r3,188
	ctx.r3.s64 = 188;
	// stb r6,1865(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1865, ctx.r6.u8);
	// li r6,190
	ctx.r6.s64 = 190;
	// stb r5,1866(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1866, ctx.r5.u8);
	// li r5,191
	ctx.r5.s64 = 191;
	// stb r10,1858(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1858, ctx.r10.u8);
	// li r10,184
	ctx.r10.s64 = 184;
	// stb r8,1864(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1864, ctx.r8.u8);
	// li r8,189
	ctx.r8.s64 = 189;
	// stb r4,1867(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1867, ctx.r4.u8);
	// li r4,192
	ctx.r4.s64 = 192;
	// stb r9,1869(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1869, ctx.r9.u8);
	// li r9,194
	ctx.r9.s64 = 194;
	// stb r31,1868(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1868, r31.u8);
	// li r31,193
	r31.s64 = 193;
	// stb r30,1870(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1870, r30.u8);
	// li r30,195
	r30.s64 = 195;
	// stb r29,1872(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1872, r29.u8);
	// li r28,197
	r28.s64 = 197;
	// stb r11,1875(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1875, r11.u8);
	// li r29,198
	r29.s64 = 198;
	// stb r3,1876(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1876, ctx.r3.u8);
	// li r27,199
	r27.s64 = 199;
	// stb r6,1878(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1878, ctx.r6.u8);
	// li r3,200
	ctx.r3.s64 = 200;
	// stb r5,1879(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1879, ctx.r5.u8);
	// li r26,201
	r26.s64 = 201;
	// li r6,202
	ctx.r6.s64 = 202;
	// stb r10,1871(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1871, ctx.r10.u8);
	// li r5,203
	ctx.r5.s64 = 203;
	// stb r8,1877(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1877, ctx.r8.u8);
	// li r11,230
	r11.s64 = 230;
	// stb r4,1880(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1880, ctx.r4.u8);
	// stb r9,1882(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1882, ctx.r9.u8);
	// li r8,205
	ctx.r8.s64 = 205;
	// stb r31,1881(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1881, r31.u8);
	// li r9,214
	ctx.r9.s64 = 214;
	// stb r30,1883(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1883, r30.u8);
	// li r10,222
	ctx.r10.s64 = 222;
	// stb r28,1886(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1886, r28.u8);
	// li r4,204
	ctx.r4.s64 = 204;
	// stb r29,1887(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1887, r29.u8);
	// stb r27,1888(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1888, r27.u8);
	// stb r3,1889(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1889, ctx.r3.u8);
	// stb r26,1890(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1890, r26.u8);
	// stb r6,1891(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1891, ctx.r6.u8);
	// stb r5,1892(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1892, ctx.r5.u8);
	// stb r11,1922(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1922, r11.u8);
	// li r3,206
	ctx.r3.s64 = 206;
	// stb r9,1904(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1904, ctx.r9.u8);
	// li r6,207
	ctx.r6.s64 = 207;
	// stb r9,1905(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1905, ctx.r9.u8);
	// li r5,208
	ctx.r5.s64 = 208;
	// stb r10,1913(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1913, ctx.r10.u8);
	// li r31,209
	r31.s64 = 209;
	// stb r10,1914(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1914, ctx.r10.u8);
	// li r30,211
	r30.s64 = 211;
	// stb r4,1893(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1893, ctx.r4.u8);
	// stb r3,1896(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1896, ctx.r3.u8);
	// li r9,210
	ctx.r9.s64 = 210;
	// stb r6,1897(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1897, ctx.r6.u8);
	// li r10,212
	ctx.r10.s64 = 212;
	// stb r5,1898(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1898, ctx.r5.u8);
	// li r4,213
	ctx.r4.s64 = 213;
	// stb r31,1899(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1899, r31.u8);
	// li r3,215
	ctx.r3.s64 = 215;
	// stb r30,1901(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1901, r30.u8);
	// li r6,216
	ctx.r6.s64 = 216;
	// li r5,217
	ctx.r5.s64 = 217;
	// stb r9,1900(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1900, ctx.r9.u8);
	// li r31,218
	r31.s64 = 218;
	// stb r10,1902(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1902, ctx.r10.u8);
	// li r30,220
	r30.s64 = 220;
	// stb r4,1903(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1903, ctx.r4.u8);
	// stb r3,1906(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1906, ctx.r3.u8);
	// li r9,219
	ctx.r9.s64 = 219;
	// stb r6,1907(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1907, ctx.r6.u8);
	// li r10,221
	ctx.r10.s64 = 221;
	// stb r5,1908(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1908, ctx.r5.u8);
	// li r4,223
	ctx.r4.s64 = 223;
	// stb r11,1923(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1923, r11.u8);
	// li r3,224
	ctx.r3.s64 = 224;
	// li r6,225
	ctx.r6.s64 = 225;
	// stb r31,1909(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1909, r31.u8);
	// li r5,226
	ctx.r5.s64 = 226;
	// stb r30,1911(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1911, r30.u8);
	// li r11,64
	r11.s64 = 64;
	// stb r8,1894(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1894, ctx.r8.u8);
	// li r31,227
	r31.s64 = 227;
	// stb r8,1895(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1895, ctx.r8.u8);
	// li r30,229
	r30.s64 = 229;
	// stb r9,1910(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1910, ctx.r9.u8);
	// stb r10,1912(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1912, ctx.r10.u8);
	// li r8,237
	ctx.r8.s64 = 237;
	// stb r4,1915(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1915, ctx.r4.u8);
	// li r9,228
	ctx.r9.s64 = 228;
	// stb r3,1916(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1916, ctx.r3.u8);
	// li r10,231
	ctx.r10.s64 = 231;
	// stb r6,1917(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1917, ctx.r6.u8);
	// li r4,232
	ctx.r4.s64 = 232;
	// stb r5,1918(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1918, ctx.r5.u8);
	// li r3,233
	ctx.r3.s64 = 233;
	// li r6,234
	ctx.r6.s64 = 234;
	// stb r31,1919(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1919, r31.u8);
	// li r5,235
	ctx.r5.s64 = 235;
	// stb r30,1921(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1921, r30.u8);
	// li r31,236
	r31.s64 = 236;
	// stb r9,1920(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1920, ctx.r9.u8);
	// li r29,238
	r29.s64 = 238;
	// stb r10,1924(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1924, ctx.r10.u8);
	// li r30,239
	r30.s64 = 239;
	// stb r4,1925(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1925, ctx.r4.u8);
	// stb r3,1926(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1926, ctx.r3.u8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// stb r6,1927(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1927, ctx.r6.u8);
	// addi r4,r1,1697
	ctx.r4.s64 = ctx.r1.s64 + 1697;
	// stb r5,1928(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1928, ctx.r5.u8);
	// li r9,244
	ctx.r9.s64 = 244;
	// stb r8,1930(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1930, ctx.r8.u8);
	// li r10,251
	ctx.r10.s64 = 251;
	// stb r8,1931(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1931, ctx.r8.u8);
	// addi r3,r1,1697
	ctx.r3.s64 = ctx.r1.s64 + 1697;
	// li r11,240
	r11.s64 = 240;
	// stb r31,1929(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1929, r31.u8);
	// li r6,241
	ctx.r6.s64 = 241;
	// stb r29,1932(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1932, r29.u8);
	// li r5,242
	ctx.r5.s64 = 242;
	// stb r30,1933(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1933, r30.u8);
	// li r8,243
	ctx.r8.s64 = 243;
	// li r31,245
	r31.s64 = 245;
	// stb r5,1936(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1936, ctx.r5.u8);
	// li r5,249
	ctx.r5.s64 = 249;
	// stb r9,1938(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1938, ctx.r9.u8);
	// stb r9,1939(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1939, ctx.r9.u8);
	// li r30,248
	r30.s64 = 248;
	// stb r31,1940(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1940, r31.u8);
	// li r9,253
	ctx.r9.s64 = 253;
	// li r31,254
	r31.s64 = 254;
	// stb r6,1935(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1935, ctx.r6.u8);
	// subfic r6,r4,2
	xer.ca = ctx.r4.u32 <= 2;
	ctx.r6.s64 = 2 - ctx.r4.s64;
	// stb r5,1944(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1944, ctx.r5.u8);
	// stb r30,1943(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1943, r30.u8);
	// subfic r5,r3,3
	xer.ca = ctx.r3.u32 <= 3;
	ctx.r5.s64 = 3 - ctx.r3.s64;
	// stb r9,1949(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1949, ctx.r9.u8);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stb r31,1950(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1950, r31.u8);
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// lis r3,-32249
	ctx.r3.s64 = -2113470464;
	// stb r10,1946(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1946, ctx.r10.u8);
	// lis r31,-32256
	r31.s64 = -2113929216;
	// stb r10,1947(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1947, ctx.r10.u8);
	// lis r30,-32255
	r30.s64 = -2113863680;
	// stb r11,1934(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1934, r11.u8);
	// stb r8,1937(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1937, ctx.r8.u8);
	// li r10,246
	ctx.r10.s64 = 246;
	// li r11,247
	r11.s64 = 247;
	// lfs f11,4412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4412);
	ctx.f11.f64 = double(temp.f32);
	// li r8,250
	ctx.r8.s64 = 250;
	// stb r10,1941(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1941, ctx.r10.u8);
	// li r29,252
	r29.s64 = 252;
	// stb r11,1942(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1942, r11.u8);
	// li r28,255
	r28.s64 = 255;
	// stb r8,1945(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1945, ctx.r8.u8);
	// lfs f13,-25600(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f12,21036(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 21036);
	ctx.f12.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f0,3792(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 3792);
	f0.f64 = double(temp.f32);
	// stb r29,1948(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1948, r29.u8);
	// lfs f7,-23472(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -23472);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r1,1182
	r11.s64 = ctx.r1.s64 + 1182;
	// stb r28,1951(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1951, r28.u8);
loc_82390020:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8239003c
	if (cr6.eq) goto loc_8239003C;
	// addi r9,r1,1696
	ctx.r9.s64 = ctx.r1.s64 + 1696;
	// lbzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// lfd f10,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// b 0x82390048
	goto loc_82390048;
loc_8239003C:
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f10,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
loc_82390048:
	// fcfid f6,f10
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(ctx.f10.s64);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f10,f5,f7
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmsubs f10,f10,f9,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 - f0.f64));
	// fmadds f6,f10,f8,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + f0.f64));
	// fsel f5,f6,f6,f12
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f6.f64 : ctx.f12.f64;
	// fsubs f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// fsel f3,f4,f13,f5
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f13.f64 : ctx.f5.f64;
	// fmuls f2,f3,f11
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fctiwz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r4,-1022(r11)
	PPC_STORE_U16(r11.u32 + -1022, ctx.r4.u16);
	// sth r4,-510(r11)
	PPC_STORE_U16(r11.u32 + -510, ctx.r4.u16);
	// sth r4,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r4.u16);
	// beq cr6,0x823900a4
	if (cr6.eq) goto loc_823900A4;
	// addi r9,r1,1697
	ctx.r9.s64 = ctx.r1.s64 + 1697;
	// lbzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// std r3,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r3.u64);
	// lfd f10,136(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// b 0x823900b0
	goto loc_823900B0;
loc_823900A4:
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// std r9,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// lfd f10,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
loc_823900B0:
	// fcfid f6,f10
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(ctx.f10.s64);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f10,f5,f7
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmsubs f10,f10,f9,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 - f0.f64));
	// fmadds f6,f10,f8,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + f0.f64));
	// fsel f5,f6,f6,f12
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f6.f64 : ctx.f12.f64;
	// fsubs f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// fsel f3,f4,f13,f5
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f13.f64 : ctx.f5.f64;
	// fmuls f2,f3,f11
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fctiwz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r9,r1,1697
	ctx.r9.s64 = ctx.r1.s64 + 1697;
	// sth r4,-1020(r11)
	PPC_STORE_U16(r11.u32 + -1020, ctx.r4.u16);
	// sth r4,-508(r11)
	PPC_STORE_U16(r11.u32 + -508, ctx.r4.u16);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r4,4(r11)
	PPC_STORE_U16(r11.u32 + 4, ctx.r4.u16);
	// beq cr6,0x82390110
	if (cr6.eq) goto loc_82390110;
	// lbz r3,1(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x82390120
	goto loc_82390120;
loc_82390110:
	// add r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 + ctx.r6.u64;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f10,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_82390120:
	// fcfid f6,f10
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(ctx.f10.s64);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f10,f5,f7
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmsubs f10,f10,f9,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 - f0.f64));
	// fmadds f6,f10,f8,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + f0.f64));
	// fsel f5,f6,f6,f12
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f6.f64 : ctx.f12.f64;
	// fsubs f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// fsel f3,f4,f13,f5
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f13.f64 : ctx.f5.f64;
	// fmuls f2,f3,f11
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fctiwz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// sth r3,-1018(r11)
	PPC_STORE_U16(r11.u32 + -1018, ctx.r3.u16);
	// sth r3,-506(r11)
	PPC_STORE_U16(r11.u32 + -506, ctx.r3.u16);
	// sth r3,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r3.u16);
	// beq cr6,0x82390178
	if (cr6.eq) goto loc_82390178;
	// lbz r4,2(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// b 0x82390188
	goto loc_82390188;
loc_82390178:
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// lfd f10,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
loc_82390188:
	// fcfid f6,f10
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(ctx.f10.s64);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f10,f5,f7
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmsubs f10,f10,f9,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 - f0.f64));
	// fmadds f6,f10,f8,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + f0.f64));
	// fsel f5,f6,f6,f12
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f6.f64 : ctx.f12.f64;
	// fsubs f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// fsel f3,f4,f13,f5
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f13.f64 : ctx.f5.f64;
	// fmuls f2,f3,f11
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fctiwz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r4,-1016(r11)
	PPC_STORE_U16(r11.u32 + -1016, ctx.r4.u16);
	// sth r4,-504(r11)
	PPC_STORE_U16(r11.u32 + -504, ctx.r4.u16);
	// sthu r4,8(r11)
	ea = 8 + r11.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	r11.u32 = ea;
	// bdnz 0x82390020
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82390020;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,25320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 25320);
	// bl 0x825def78
	sub_825DEF78(ctx, base);
	// lwz r3,1952(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1952);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,2016
	ctx.r1.s64 = ctx.r1.s64 + 2016;
}

__attribute__((alias("__imp__sub_823901F4"))) PPC_WEAK_FUNC(sub_823901F4);
PPC_FUNC_IMPL(__imp__sub_823901F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_823901F8"))) PPC_WEAK_FUNC(sub_823901F8);
PPC_FUNC_IMPL(__imp__sub_823901F8) {
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
	// lwz r4,412(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 412);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,22292(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 22292);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82727768
	sub_82727768(ctx, base);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 412);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lwz r3,412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 412);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82390244
	if (cr6.eq) goto loc_82390244;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,412(r31)
	PPC_STORE_U32(r31.u32 + 412, r11.u32);
loc_82390244:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82390254"))) PPC_WEAK_FUNC(sub_82390254);
PPC_FUNC_IMPL(__imp__sub_82390254) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82390258"))) PPC_WEAK_FUNC(sub_82390258);
PPC_FUNC_IMPL(__imp__sub_82390258) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r31,0
	r31.s64 = 0;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r31.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r31,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, r31.u8);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,15
	ctx.r4.s64 = 15;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// bl 0x827139d8
	sub_827139D8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r6,r1,98
	ctx.r6.s64 = ctx.r1.s64 + 98;
	// stb r31,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, r31.u8);
	// addi r11,r1,100
	r11.s64 = ctx.r1.s64 + 100;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r31,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, r31.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,15
	ctx.r4.s64 = 15;
	// addi r3,r30,284
	ctx.r3.s64 = r30.s64 + 284;
	// bl 0x827139d8
	sub_827139D8(ctx, base);
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

__attribute__((alias("__imp__sub_82390320"))) PPC_WEAK_FUNC(sub_82390320);
PPC_FUNC_IMPL(__imp__sub_82390320) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82390324"))) PPC_WEAK_FUNC(sub_82390324);
PPC_FUNC_IMPL(__imp__sub_82390324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390328"))) PPC_WEAK_FUNC(sub_82390328);
PPC_FUNC_IMPL(__imp__sub_82390328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r31,-31934
	r31.s64 = -2092826624;
	// lwz r10,504(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r7,508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 508, ctx.r7.u32);
	// li r30,0
	r30.s64 = 0;
	// addi r28,r10,2
	r28.s64 = ctx.r10.s64 + 2;
	// lwz r11,22220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22220);
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
loc_82390358:
	// mfmsr r6
	// mtmsrd r13,1
	// lwarx r9,0,r5
	reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r30,r9
	ctx.r8.u64 = r30.u64 + ctx.r9.u64;
	// stwcx. r8,0,r5
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
	// bne 0x82390358
	if (!cr0.eq) goto loc_82390358;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x823903e8
	if (cr6.eq) goto loc_823903E8;
loc_82390380:
	// lwz r11,22220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22220);
	// addi r7,r11,8
	ctx.r7.s64 = r11.s64 + 8;
loc_82390388:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r30,r10
	ctx.r9.u64 = r30.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82390388
	if (!cr0.eq) goto loc_82390388;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// stw r10,504(r29)
	PPC_STORE_U32(r29.u32 + 504, ctx.r10.u32);
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(r28.s32, ctx.r10.s32, xer);
	// ble cr6,0x823903e8
	if (!cr6.gt) goto loc_823903E8;
	// bl 0x82605b60
	sub_82605B60(ctx, base);
	// lwz r11,22220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22220);
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
loc_823903C0:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r30,r10
	ctx.r9.u64 = r30.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x823903c0
	if (!cr0.eq) goto loc_823903C0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82390380
	if (!cr6.eq) goto loc_82390380;
loc_823903E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_823903EC"))) PPC_WEAK_FUNC(sub_823903EC);
PPC_FUNC_IMPL(__imp__sub_823903EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_823903F0"))) PPC_WEAK_FUNC(sub_823903F0);
PPC_FUNC_IMPL(__imp__sub_823903F0) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r8,r10,4372
	ctx.r8.s64 = ctx.r10.s64 + 4372;
	// lwz r7,24192(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r31,21640(r9)
	PPC_STORE_U32(ctx.r9.u32 + 21640, r31.u32);
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r30,12(r6)
	r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r26,8(r5)
	r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r25,16(r4)
	r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r29,r31,88
	r29.s64 = r31.s64 + 88;
	// addi r28,r31,4
	r28.s64 = r31.s64 + 4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// bl 0x826d0268
	sub_826D0268(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r6,r10,4408
	ctx.r6.s64 = ctx.r10.s64 + 4408;
	// addi r5,r9,4388
	ctx.r5.s64 = ctx.r9.s64 + 4388;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// addi r4,r8,4380
	ctx.r4.s64 = ctx.r8.s64 + 4380;
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// addi r3,r7,4364
	ctx.r3.s64 = ctx.r7.s64 + 4364;
	// li r30,0
	r30.s64 = 0;
	// stw r4,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r4.u32);
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// stw r3,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// stw r3,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r30.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r30.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// bl 0x82391858
	sub_82391858(ctx, base);
	// addi r3,r31,408
	ctx.r3.s64 = r31.s64 + 408;
	// bl 0x826dad38
	sub_826DAD38(ctx, base);
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,444
	ctx.r3.s64 = r31.s64 + 444;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,472
	ctx.r3.s64 = r31.s64 + 472;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stb r27,500(r31)
	PPC_STORE_U8(r31.u32 + 500, r27.u8);
	// addi r3,r31,512
	ctx.r3.s64 = r31.s64 + 512;
	// bl 0x826ca2b8
	sub_826CA2B8(ctx, base);
	// stw r30,520(r31)
	PPC_STORE_U32(r31.u32 + 520, r30.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8314ce2c
	__imp__XGetVideoMode(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r10,1280
	ctx.r10.s64 = 1280;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// li r9,720
	ctx.r9.s64 = 720;
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r30.u8);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r7,79
	ctx.r7.s64 = 79;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r6,85
	ctx.r6.s64 = 85;
	// lfs f0,4436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4436);
	f0.f64 = double(temp.f32);
	// li r29,2
	r29.s64 = 2;
	// stfs f0,148(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x8270d548
	sub_8270D548(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8270e510
	sub_8270E510(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x8270e538
	sub_8270E538(ctx, base);
	// bl 0x8270fd68
	sub_8270FD68(ctx, base);
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// addi r3,r5,22616
	ctx.r3.s64 = ctx.r5.s64 + 22616;
	// bl 0x8270f390
	sub_8270F390(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,7
	ctx.r3.s64 = 7;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f1,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8270f5f0
	sub_8270F5F0(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r8,r9,21920
	ctx.r8.s64 = ctx.r9.s64 + 21920;
	// lbz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82390618
	if (!cr6.eq) goto loc_82390618;
	// bl 0x8270da70
	sub_8270DA70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8270eb60
	sub_8270EB60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f390
	sub_8270F390(ctx, base);
loc_82390618:
	// bl 0x8270fe00
	sub_8270FE00(ctx, base);
	// bl 0x8270fe88
	sub_8270FE88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f390
	sub_8270F390(ctx, base);
	// bl 0x8270ede0
	sub_8270EDE0(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r3,25320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 25320);
	// bl 0x825d14a0
	sub_825D14A0(ctx, base);
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r30,504(r31)
	PPC_STORE_U32(r31.u32 + 504, r30.u32);
	// stw r29,508(r31)
	PPC_STORE_U32(r31.u32 + 508, r29.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_82390650"))) PPC_WEAK_FUNC(sub_82390650);
PPC_FUNC_IMPL(__imp__sub_82390650) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82390654"))) PPC_WEAK_FUNC(sub_82390654);
PPC_FUNC_IMPL(__imp__sub_82390654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390658"))) PPC_WEAK_FUNC(sub_82390658);
PPC_FUNC_IMPL(__imp__sub_82390658) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r10,4444
	r30.s64 = ctx.r10.s64 + 4444;
	// li r29,22
	r29.s64 = 22;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,813
	ctx.r8.s64 = 813;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82390734
	if (cr6.eq) goto loc_82390734;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r8,813
	ctx.r8.s64 = 813;
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823906f8
	if (cr6.eq) goto loc_823906F8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r4,r11,4440
	ctx.r4.s64 = r11.s64 + 4440;
	// bl 0x82423b28
	sub_82423B28(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x823906fc
	goto loc_823906FC;
loc_823906F8:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_823906FC:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8239071c
	if (cr6.eq) goto loc_8239071C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82390720
	if (!cr6.eq) goto loc_82390720;
loc_8239071C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_82390720:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82423af8
	sub_82423AF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82390738
	goto loc_82390738;
loc_82390734:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_82390738:
	// stw r4,412(r27)
	PPC_STORE_U32(r27.u32 + 412, ctx.r4.u32);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r11,22292(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 22292);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x827276c0
	sub_827276C0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82390750"))) PPC_WEAK_FUNC(sub_82390750);
PPC_FUNC_IMPL(__imp__sub_82390750) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82390754"))) PPC_WEAK_FUNC(sub_82390754);
PPC_FUNC_IMPL(__imp__sub_82390754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390758"))) PPC_WEAK_FUNC(sub_82390758);
PPC_FUNC_IMPL(__imp__sub_82390758) {
	PPC_FUNC_PROLOGUE();
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// b 0x823919e0
	sub_823919E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82390764"))) PPC_WEAK_FUNC(sub_82390764);
PPC_FUNC_IMPL(__imp__sub_82390764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390768"))) PPC_WEAK_FUNC(sub_82390768);
PPC_FUNC_IMPL(__imp__sub_82390768) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca2b8
	sub_826CA2B8(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// li r27,17
	r27.s64 = 17;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-31968
	r11.s64 = -2095054848;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// lis r28,-31934
	r28.s64 = -2092826624;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r29,r11,-884
	r29.s64 = r11.s64 + -884;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,18432(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 18432);
	// lwz r5,-8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + -8);
	// bl 0x826cd7a8
	sub_826CD7A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca440
	sub_826CA440(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8239080c
	if (cr6.eq) goto loc_8239080C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// bl 0x822b2850
	sub_822B2850(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8239080c
	if (cr6.eq) goto loc_8239080C;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,30236(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 30236);
	// bl 0x82717a90
	sub_82717A90(ctx, base);
loc_8239080C:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r27.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// addi r30,r30,512
	r30.s64 = r30.s64 + 512;
	// lwz r5,-4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + -4);
	// lwz r4,18432(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 18432);
	// bl 0x826cd7a8
	sub_826CD7A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca440
	sub_826CA440(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca118
	sub_826CA118(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82390878
	if (cr6.eq) goto loc_82390878;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,30252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 30252);
	// bl 0x823c2478
	sub_823C2478(ctx, base);
loc_82390878:
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r27.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r31.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r4,18432(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 18432);
	// bl 0x826cd7a8
	sub_826CD7A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca440
	sub_826CA440(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823908f0
	if (cr6.eq) goto loc_823908F0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// bl 0x822b2850
	sub_822B2850(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823908f0
	if (cr6.eq) goto loc_823908F0;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,29820(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 29820);
	// bl 0x8239b5a0
	sub_8239B5A0(ctx, base);
loc_823908F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_823908FC"))) PPC_WEAK_FUNC(sub_823908FC);
PPC_FUNC_IMPL(__imp__sub_823908FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82390900"))) PPC_WEAK_FUNC(sub_82390900);
PPC_FUNC_IMPL(__imp__sub_82390900) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r17,-31934
	r17.s64 = -2092826624;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,22228(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 22228);
	// bl 0x826da500
	sub_826DA500(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,22228(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r3,22228(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r28,0
	r28.s64 = 0;
	// addi r30,r10,4444
	r30.s64 = ctx.r10.s64 + 4444;
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// li r8,200
	ctx.r8.s64 = 200;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// rldicr r6,r28,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82390984
	if (cr6.eq) goto loc_82390984;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// bl 0x82730e00
	sub_82730E00(ctx, base);
loc_82390984:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r4,r10,-848
	ctx.r4.s64 = ctx.r10.s64 + -848;
	// lwz r3,21632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21632);
	// bl 0x8272ff90
	sub_8272FF90(ctx, base);
	// li r29,22
	r29.s64 = 22;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// li r8,211
	ctx.r8.s64 = 211;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// rldicr r6,r28,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82390a18
	if (cr6.eq) goto loc_82390A18;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r26,4(r11)
	r26.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r25,20(r10)
	r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x826cc368
	sub_826CC368(ctx, base);
	// b 0x82390a1c
	goto loc_82390A1C;
loc_82390A18:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82390A1C:
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r8,212
	ctx.r8.s64 = 212;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// rldicr r6,r28,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82390a5c
	if (cr6.eq) goto loc_82390A5C;
	// bl 0x826c7c98
	sub_826C7C98(ctx, base);
	// b 0x82390a60
	goto loc_82390A60;
loc_82390A5C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82390A60:
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// li r8,213
	ctx.r8.s64 = 213;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// rldicr r6,r28,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82390ab8
	if (cr6.eq) goto loc_82390AB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x824fcb48
	sub_824FCB48(ctx, base);
	// b 0x82390abc
	goto loc_82390ABC;
loc_82390AB8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82390ABC:
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// li r8,214
	ctx.r8.s64 = 214;
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// rldicr r6,r28,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82390afc
	if (cr6.eq) goto loc_82390AFC;
	// bl 0x82396db0
	sub_82396DB0(ctx, base);
	// b 0x82390b00
	goto loc_82390B00;
loc_82390AFC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82390B00:
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// li r8,215
	ctx.r8.s64 = 215;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// rldicr r6,r28,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// stw r3,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// li r3,472
	ctx.r3.s64 = 472;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82390b40
	if (cr6.eq) goto loc_82390B40;
	// bl 0x823971d0
	sub_823971D0(ctx, base);
	// b 0x82390b44
	goto loc_82390B44;
loc_82390B40:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82390B44:
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// li r8,216
	ctx.r8.s64 = 216;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// rldicr r6,r28,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// stw r3,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// li r3,22540
	ctx.r3.s64 = 22540;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82390b84
	if (cr6.eq) goto loc_82390B84;
	// bl 0x823925d0
	sub_823925D0(ctx, base);
	// b 0x82390b88
	goto loc_82390B88;
loc_82390B84:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82390B88:
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// li r8,217
	ctx.r8.s64 = 217;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// rldicr r6,r28,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// stw r3,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// li r3,244
	ctx.r3.s64 = 244;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82390bc8
	if (cr6.eq) goto loc_82390BC8;
	// bl 0x8238caf0
	sub_8238CAF0(ctx, base);
	// b 0x82390bcc
	goto loc_82390BCC;
loc_82390BC8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82390BCC:
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// li r8,256
	ctx.r8.s64 = 256;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// rldicr r6,r28,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// stw r3,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82390c0c
	if (cr6.eq) goto loc_82390C0C;
	// bl 0x823d2f50
	sub_823D2F50(ctx, base);
	// b 0x82390c10
	goto loc_82390C10;
loc_82390C0C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82390C10:
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// li r10,29
	ctx.r10.s64 = 29;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// li r8,257
	ctx.r8.s64 = 257;
	// stw r3,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// li r3,2268
	ctx.r3.s64 = 2268;
	// rldicr r6,r28,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82390c54
	if (cr6.eq) goto loc_82390C54;
	// bl 0x8257e0d0
	sub_8257E0D0(ctx, base);
	// b 0x82390c58
	goto loc_82390C58;
loc_82390C54:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82390C58:
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// li r8,258
	ctx.r8.s64 = 258;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// rldicr r6,r28,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// stw r3,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r3.u32);
	// li r3,1616
	ctx.r3.s64 = 1616;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82390c98
	if (cr6.eq) goto loc_82390C98;
	// bl 0x82389a58
	sub_82389A58(ctx, base);
	// b 0x82390c9c
	goto loc_82390C9C;
loc_82390C98:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82390C9C:
	// stw r3,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// li r8,268
	ctx.r8.s64 = 268;
	// li r3,224
	ctx.r3.s64 = 224;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// rldicr r6,r28,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82390cec
	if (cr6.eq) goto loc_82390CEC;
	// bl 0x827171b0
	sub_827171B0(ctx, base);
loc_82390CEC:
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// li r8,269
	ctx.r8.s64 = 269;
	// li r3,132
	ctx.r3.s64 = 132;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// rldicr r6,r28,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82390d24
	if (cr6.eq) goto loc_82390D24;
	// bl 0x8239b118
	sub_8239B118(ctx, base);
loc_82390D24:
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// li r8,270
	ctx.r8.s64 = 270;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// li r3,56
	ctx.r3.s64 = 56;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// rldicr r6,r28,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82390d5c
	if (cr6.eq) goto loc_82390D5C;
	// bl 0x823c22d0
	sub_823C22D0(ctx, base);
loc_82390D5C:
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// li r8,271
	ctx.r8.s64 = 271;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// rldicr r6,r28,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82390d94
	if (cr6.eq) goto loc_82390D94;
	// bl 0x823d6470
	sub_823D6470(ctx, base);
loc_82390D94:
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// li r8,272
	ctx.r8.s64 = 272;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// rldicr r6,r28,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82390dcc
	if (cr6.eq) goto loc_82390DCC;
	// bl 0x823a1d88
	sub_823A1D88(ctx, base);
loc_82390DCC:
	// addi r29,r31,-4
	r29.s64 = r31.s64 + -4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82390768
	sub_82390768(ctx, base);
	// lis r26,-31933
	r26.s64 = -2092761088;
	// lwz r3,25320(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 25320);
	// bl 0x825d1538
	sub_825D1538(ctx, base);
	// bl 0x8270edc0
	sub_8270EDC0(ctx, base);
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r24,-31933
	r24.s64 = -2092761088;
	// addi r25,r11,-3784
	r25.s64 = r11.s64 + -3784;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// lis r11,-32199
	r11.s64 = -2110193664;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r10,17616
	ctx.r3.s64 = ctx.r10.s64 + 17616;
	// addi r30,r11,-2472
	r30.s64 = r11.s64 + -2472;
	// lwz r27,21952(r24)
	r27.u64 = PPC_LOAD_U32(r24.u32 + 21952);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r22,-31934
	r22.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,30324(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 30324);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r21,r31,412
	r21.s64 = r31.s64 + 412;
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r9,-31968
	ctx.r9.s64 = -2095054848;
	// lis r11,-32199
	r11.s64 = -2110193664;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r9,17672
	ctx.r3.s64 = ctx.r9.s64 + 17672;
	// addi r30,r11,-2464
	r30.s64 = r11.s64 + -2464;
	// lwz r27,21952(r24)
	r27.u64 = PPC_LOAD_U32(r24.u32 + 21952);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r19,-31934
	r19.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,30320(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 30320);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r18,r31,440
	r18.s64 = r31.s64 + 440;
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// lis r11,-32199
	r11.s64 = -2110193664;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r8,20808
	ctx.r3.s64 = ctx.r8.s64 + 20808;
	// addi r30,r11,-2096
	r30.s64 = r11.s64 + -2096;
	// lwz r27,96(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r16,-31934
	r16.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,21028(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 21028);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r15,r31,468
	r15.s64 = r31.s64 + 468;
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,30248(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 30248);
	// bl 0x823a1298
	sub_823A1298(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// bl 0x82396e38
	sub_82396E38(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x82397d38
	sub_82397D38(ctx, base);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// bl 0x82393b40
	sub_82393B40(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// bl 0x8238d278
	sub_8238D278(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x823d2f68
	sub_823D2F68(ctx, base);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x8257e1a8
	sub_8257E1A8(ctx, base);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// bl 0x82389650
	sub_82389650(ctx, base);
	// lis r20,-31934
	r20.s64 = -2092826624;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,22248(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + 22248);
	// bl 0x826f55f0
	sub_826F55F0(ctx, base);
	// addi r25,r31,404
	r25.s64 = r31.s64 + 404;
	// li r23,-1
	r23.s64 = -1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x826dad80
	sub_826DAD80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cf6f8
	sub_826CF6F8(ctx, base);
	// bl 0x8250a0e8
	sub_8250A0E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82390658
	sub_82390658(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82390258
	sub_82390258(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r3,22228(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// lwz r3,25320(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 25320);
	// bl 0x825d1490
	sub_825D1490(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826dadb0
	sub_826DADB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cf750
	sub_826CF750(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bne cr6,0x823911ac
	if (!cr6.eq) goto loc_823911AC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r14,r31,36
	r14.s64 = r31.s64 + 36;
	// lis r17,-31934
	r17.s64 = -2092826624;
	// lis r27,-31934
	r27.s64 = -2092826624;
	// lfs f31,4432(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4432);
	f31.f64 = double(temp.f32);
	// addi r30,r11,20544
	r30.s64 = r11.s64 + 20544;
loc_82390FCC:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826dad80
	sub_826DAD80(ctx, base);
	// lwz r3,25320(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 25320);
	// bl 0x825d1450
	sub_825D1450(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82605a40
	sub_82605A40(ctx, base);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r10,388(r31)
	PPC_STORE_U64(r31.u32 + 388, ctx.r10.u64);
	// lwz r11,18432(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18432);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// bl 0x826dda20
	sub_826DDA20(ctx, base);
	// lwz r11,20548(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20548);
	// clrlwi r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8239103c
	if (!cr6.eq) goto loc_8239103C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r27)
	PPC_STORE_U32(r27.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r30)
	PPC_STORE_U8(r30.u32 + 3, ctx.r10.u8);
	// stb r9,2(r30)
	PPC_STORE_U8(r30.u32 + 2, ctx.r9.u8);
	// stb r11,1(r30)
	PPC_STORE_U8(r30.u32 + 1, r11.u8);
	// stb r10,0(r30)
	PPC_STORE_U8(r30.u32 + 0, ctx.r10.u8);
loc_8239103C:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x826cc1d0
	sub_826CC1D0(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82391054
	if (cr6.eq) goto loc_82391054;
	// bl 0x823971c8
	sub_823971C8(ctx, base);
loc_82391054:
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// lwz r11,20548(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20548);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8239108c
	if (!cr6.eq) goto loc_8239108C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r27)
	PPC_STORE_U32(r27.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r30)
	PPC_STORE_U8(r30.u32 + 3, ctx.r10.u8);
	// stb r9,2(r30)
	PPC_STORE_U8(r30.u32 + 2, ctx.r9.u8);
	// stb r11,1(r30)
	PPC_STORE_U8(r30.u32 + 1, r11.u8);
	// stb r10,0(r30)
	PPC_STORE_U8(r30.u32 + 0, ctx.r10.u8);
loc_8239108C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82390328
	sub_82390328(ctx, base);
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// lwz r3,516(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 516);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823910a8
	if (cr6.eq) goto loc_823910A8;
	// bl 0x826d0058
	sub_826D0058(ctx, base);
loc_823910A8:
	// lwz r11,20548(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20548);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823910dc
	if (!cr6.eq) goto loc_823910DC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r27)
	PPC_STORE_U32(r27.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r30)
	PPC_STORE_U8(r30.u32 + 3, ctx.r10.u8);
	// stb r9,2(r30)
	PPC_STORE_U8(r30.u32 + 2, ctx.r9.u8);
	// stb r11,1(r30)
	PPC_STORE_U8(r30.u32 + 1, r11.u8);
	// stb r10,0(r30)
	PPC_STORE_U8(r30.u32 + 0, ctx.r10.u8);
loc_823910DC:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// bl 0x82396cf8
	sub_82396CF8(ctx, base);
	// lbz r11,496(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 496);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82391180
	if (cr6.eq) goto loc_82391180;
	// lwz r3,22308(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 22308);
	// bl 0x8238a300
	sub_8238A300(ctx, base);
	// bl 0x8270fd68
	sub_8270FD68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f390
	sub_8270F390(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x8270e538
	sub_8270E538(ctx, base);
	// lwz r11,20548(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20548);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82391140
	if (!cr6.eq) goto loc_82391140;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r27)
	PPC_STORE_U32(r27.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r30)
	PPC_STORE_U8(r30.u32 + 3, ctx.r10.u8);
	// stb r9,2(r30)
	PPC_STORE_U8(r30.u32 + 2, ctx.r9.u8);
	// stb r11,1(r30)
	PPC_STORE_U8(r30.u32 + 1, r11.u8);
	// stb r10,0(r30)
	PPC_STORE_U8(r30.u32 + 0, ctx.r10.u8);
loc_82391140:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// bl 0x82396f68
	sub_82396F68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f390
	sub_8270F390(ctx, base);
	// bl 0x8270d108
	sub_8270D108(ctx, base);
	// bl 0x8270fe00
	sub_8270FE00(ctx, base);
	// lwz r3,22308(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 22308);
	// bl 0x8238a3e8
	sub_8238A3E8(ctx, base);
	// bl 0x8270fe88
	sub_8270FE88(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lfs f0,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 152);
	f0.f64 = double(temp.f32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 + f31.f64));
	// stfs f31,156(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
loc_82391180:
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82391788
	sub_82391788(ctx, base);
	// lwz r3,25320(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 25320);
	// bl 0x825d1490
	sub_825D1490(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826dadb0
	sub_826DADB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cf750
	sub_826CF750(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82390fcc
	if (cr6.eq) goto loc_82390FCC;
loc_823911AC:
	// lwz r3,25320(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 25320);
	// bl 0x825d1450
	sub_825D1450(ctx, base);
	// addi r3,r29,176
	ctx.r3.s64 = r29.s64 + 176;
	// bl 0x82712c10
	sub_82712C10(ctx, base);
	// addi r3,r29,284
	ctx.r3.s64 = r29.s64 + 284;
	// bl 0x82712c10
	sub_82712C10(ctx, base);
	// bl 0x825095b8
	sub_825095B8(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r4,412(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 412);
	// lwz r11,22292(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 22292);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82727768
	sub_82727768(ctx, base);
	// lwz r10,412(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 412);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lwz r3,412(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 412);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823911fc
	if (cr6.eq) goto loc_823911FC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r28,412(r29)
	PPC_STORE_U32(r29.u32 + 412, r28.u32);
loc_823911FC:
	// bl 0x8270d108
	sub_8270D108(ctx, base);
	// lwz r3,22248(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + 22248);
	// bl 0x826f56b8
	sub_826F56B8(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// bl 0x8238d708
	sub_8238D708(ctx, base);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// bl 0x82392e08
	sub_82392E08(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x823972a8
	sub_823972A8(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// bl 0x82396ef0
	sub_82396EF0(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x823d2f70
	sub_823D2F70(ctx, base);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x8257df88
	sub_8257DF88(ctx, base);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// bl 0x82389558
	sub_82389558(ctx, base);
	// lwz r11,30324(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 30324);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r29,21952(r24)
	r29.u64 = PPC_LOAD_U32(r24.u32 + 21952);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82391290
	if (!cr6.eq) goto loc_82391290;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82391290
	if (!cr6.eq) goto loc_82391290;
	// lwz r11,30324(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 30324);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82391290:
	// lwz r11,30320(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 30320);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r29,21952(r24)
	r29.u64 = PPC_LOAD_U32(r24.u32 + 21952);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823912e0
	if (!cr6.eq) goto loc_823912E0;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823912e0
	if (!cr6.eq) goto loc_823912E0;
	// lwz r11,30320(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 30320);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_823912E0:
	// lwz r11,21028(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 21028);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r29,96(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82391330
	if (!cr6.eq) goto loc_82391330;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82391330
	if (!cr6.eq) goto loc_82391330;
	// lwz r11,21028(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 21028);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82391330:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,116(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82391364
	if (cr6.eq) goto loc_82391364;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82396ca8
	sub_82396CA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r28,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r28.u32);
loc_82391364:
	// lwz r30,124(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82391384
	if (cr6.eq) goto loc_82391384;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82392950
	sub_82392950(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r28,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r28.u32);
loc_82391384:
	// lwz r30,120(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823913a4
	if (cr6.eq) goto loc_823913A4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82397240
	sub_82397240(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r28,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r28.u32);
loc_823913A4:
	// lwz r30,128(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823913c4
	if (cr6.eq) goto loc_823913C4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8238d1d0
	sub_8238D1D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r28,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r28.u32);
loc_823913C4:
	// lwz r30,132(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823913e4
	if (cr6.eq) goto loc_823913E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d2f60
	sub_823D2F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r28,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r28.u32);
loc_823913E4:
	// lwz r30,136(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82391404
	if (cr6.eq) goto loc_82391404;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8257e130
	sub_8257E130(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r28,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r28.u32);
loc_82391404:
	// lwz r30,140(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82391424
	if (cr6.eq) goto loc_82391424;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823896e0
	sub_823896E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r28,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r28.u32);
loc_82391424:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826ca2b8
	sub_826CA2B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,508
	ctx.r3.s64 = r31.s64 + 508;
	// bl 0x826ca440
	sub_826CA440(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,18432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18432);
	// bl 0x826ce060
	sub_826CE060(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,30248(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 30248);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82391470
	if (cr6.eq) goto loc_82391470;
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
loc_82391470:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,30244(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 30244);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82391494
	if (cr6.eq) goto loc_82391494;
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
loc_82391494:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,30252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 30252);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823914b8
	if (cr6.eq) goto loc_823914B8;
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
loc_823914B8:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,29820(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 29820);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823914dc
	if (cr6.eq) goto loc_823914DC;
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
loc_823914DC:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,30236(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 30236);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82391500
	if (cr6.eq) goto loc_82391500;
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
loc_82391500:
	// lwz r30,88(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8239151c
	if (cr6.eq) goto loc_8239151C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826cc190
	sub_826CC190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8239151C:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8239153c
	if (cr6.eq) goto loc_8239153C;
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
loc_8239153C:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8239155c
	if (cr6.eq) goto loc_8239155C;
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
loc_8239155C:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,30240(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 30240);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82391580
	if (cr6.eq) goto loc_82391580;
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
loc_82391580:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,21632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21632);
	// bl 0x8272ffd0
	sub_8272FFD0(ctx, base);
	// bl 0x8270d220
	sub_8270D220(ctx, base);
	// lis r31,-31934
	r31.s64 = -2092826624;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,22228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// lwz r3,22228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22228);
	// bl 0x826da838
	sub_826DA838(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
}

__attribute__((alias("__imp__sub_823915B0"))) PPC_WEAK_FUNC(sub_823915B0);
PPC_FUNC_IMPL(__imp__sub_823915B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_823915B4"))) PPC_WEAK_FUNC(sub_823915B4);
PPC_FUNC_IMPL(__imp__sub_823915B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823915B8"))) PPC_WEAK_FUNC(sub_823915B8);
PPC_FUNC_IMPL(__imp__sub_823915B8) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r10,20196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20196);
	// rlwinm r30,r8,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r30.u8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,20992(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20992);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// bl 0x82391a68
	sub_82391A68(ctx, base);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lwz r11,18436(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18436);
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82391618
	if (cr6.eq) goto loc_82391618;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82323ae0
	sub_82323AE0(ctx, base);
loc_82391618:
	// stb r31,400(r29)
	PPC_STORE_U8(r29.u32 + 400, r31.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82391620"))) PPC_WEAK_FUNC(sub_82391620);
PPC_FUNC_IMPL(__imp__sub_82391620) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82391624"))) PPC_WEAK_FUNC(sub_82391624);
PPC_FUNC_IMPL(__imp__sub_82391624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391628"))) PPC_WEAK_FUNC(sub_82391628);
PPC_FUNC_IMPL(__imp__sub_82391628) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,4364
	ctx.r9.s64 = r11.s64 + 4364;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8239165c
	if (cr6.eq) goto loc_8239165C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8239165C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8239166C"))) PPC_WEAK_FUNC(sub_8239166C);
PPC_FUNC_IMPL(__imp__sub_8239166C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391670"))) PPC_WEAK_FUNC(sub_82391670);
PPC_FUNC_IMPL(__imp__sub_82391670) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r11,4372
	ctx.r9.s64 = r11.s64 + 4372;
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
	// stw r11,21640(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21640, r11.u32);
	// beq cr6,0x823916b0
	if (cr6.eq) goto loc_823916B0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823916B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823916C0"))) PPC_WEAK_FUNC(sub_823916C0);
PPC_FUNC_IMPL(__imp__sub_823916C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823916C4"))) PPC_WEAK_FUNC(sub_823916C4);
PPC_FUNC_IMPL(__imp__sub_823916C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823916C8"))) PPC_WEAK_FUNC(sub_823916C8);
PPC_FUNC_IMPL(__imp__sub_823916C8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x82391704
	if (cr6.lt) goto loc_82391704;
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82391704:
	// not r11,r11
	r11.u64 = ~r11.u64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82391720"))) PPC_WEAK_FUNC(sub_82391720);
PPC_FUNC_IMPL(__imp__sub_82391720) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391724"))) PPC_WEAK_FUNC(sub_82391724);
PPC_FUNC_IMPL(__imp__sub_82391724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391728"))) PPC_WEAK_FUNC(sub_82391728);
PPC_FUNC_IMPL(__imp__sub_82391728) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,4380
	ctx.r9.s64 = r11.s64 + 4380;
	// addi r8,r10,4364
	ctx.r8.s64 = ctx.r10.s64 + 4364;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8239176c
	if (cr6.eq) goto loc_8239176C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8239176C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8239177C"))) PPC_WEAK_FUNC(sub_8239177C);
PPC_FUNC_IMPL(__imp__sub_8239177C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391780"))) PPC_WEAK_FUNC(sub_82391780);
PPC_FUNC_IMPL(__imp__sub_82391780) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
}

__attribute__((alias("__imp__sub_82391784"))) PPC_WEAK_FUNC(sub_82391784);
PPC_FUNC_IMPL(__imp__sub_82391784) {
	PPC_FUNC_PROLOGUE();
	// b 0x82391990
	sub_82391990(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82391788"))) PPC_WEAK_FUNC(sub_82391788);
PPC_FUNC_IMPL(__imp__sub_82391788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lwz r31,12(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r26,r3,20
	r26.s64 = ctx.r3.s64 + 20;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// beq cr6,0x82391840
	if (cr6.eq) goto loc_82391840;
	// li r27,0
	r27.s64 = 0;
	// li r25,2
	r25.s64 = 2;
loc_823917B0:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82391840
	if (cr6.gt) goto loc_82391840;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r31,24
	ctx.r6.s64 = r31.s64 + 24;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// stw r3,36(r29)
	PPC_STORE_U32(r29.u32 + 36, ctx.r3.u32);
	// lwz r28,8(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// stw r27,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r27.u32);
	// mr r31,r28
	r31.u64 = r28.u64;
loc_82391804:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r25,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(r25.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82391804
	if (!cr0.eq) goto loc_82391804;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x82605aa8
	sub_82605AA8(ctx, base);
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(r28.u32, r26.u32, xer);
	// bne cr6,0x823917b0
	if (!cr6.eq) goto loc_823917B0;
loc_82391840:
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,40(r29)
	PPC_STORE_U32(r29.u32 + 40, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82391850"))) PPC_WEAK_FUNC(sub_82391850);
PPC_FUNC_IMPL(__imp__sub_82391850) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82391854"))) PPC_WEAK_FUNC(sub_82391854);
PPC_FUNC_IMPL(__imp__sub_82391854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391858"))) PPC_WEAK_FUNC(sub_82391858);
PPC_FUNC_IMPL(__imp__sub_82391858) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f13,4436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4436);
	ctx.f13.f64 = double(temp.f32);
	// li r30,0
	r30.s64 = 0;
	// lfs f12,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r7,4420
	ctx.r6.s64 = ctx.r7.s64 + 4420;
	// lfs f11,4432(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4432);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// stfs f12,68(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// stfs f11,72(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r30.u32);
	// stfs f0,80(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stfs f0,84(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r30.u32);
	// addi r3,r3,88
	ctx.r3.s64 = ctx.r3.s64 + 88;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// stb r30,76(r31)
	PPC_STORE_U8(r31.u32 + 76, r30.u8);
	// bl 0x827127a0
	sub_827127A0(ctx, base);
	// addi r3,r31,196
	ctx.r3.s64 = r31.s64 + 196;
	// bl 0x827127a0
	sub_827127A0(ctx, base);
	// addi r3,r31,304
	ctx.r3.s64 = r31.s64 + 304;
	// bl 0x8232d3d8
	sub_8232D3D8(ctx, base);
	// stb r30,312(r31)
	PPC_STORE_U8(r31.u32 + 312, r30.u8);
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

__attribute__((alias("__imp__sub_82391920"))) PPC_WEAK_FUNC(sub_82391920);
PPC_FUNC_IMPL(__imp__sub_82391920) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391924"))) PPC_WEAK_FUNC(sub_82391924);
PPC_FUNC_IMPL(__imp__sub_82391924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391928"))) PPC_WEAK_FUNC(sub_82391928);
PPC_FUNC_IMPL(__imp__sub_82391928) {
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
	// addi r3,r3,196
	ctx.r3.s64 = ctx.r3.s64 + 196;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x827130e8
	sub_827130E8(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x827130e8
	sub_827130E8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r9,r11,-32392
	ctx.r9.s64 = r11.s64 + -32392;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82391978
	if (cr6.eq) goto loc_82391978;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82391978:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8239198C"))) PPC_WEAK_FUNC(sub_8239198C);
PPC_FUNC_IMPL(__imp__sub_8239198C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391990"))) PPC_WEAK_FUNC(sub_82391990);
PPC_FUNC_IMPL(__imp__sub_82391990) {
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
	// bl 0x8238f6e8
	sub_8238F6E8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823919c8
	if (cr6.eq) goto loc_823919C8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823919C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823919DC"))) PPC_WEAK_FUNC(sub_823919DC);
PPC_FUNC_IMPL(__imp__sub_823919DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823919E0"))) PPC_WEAK_FUNC(sub_823919E0);
PPC_FUNC_IMPL(__imp__sub_823919E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r6,r4,24
	ctx.r6.s64 = ctx.r4.s64 + 24;
	// add r9,r11,r5
	ctx.r9.u64 = r11.u64 + ctx.r5.u64;
loc_823919F0:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r10,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x823919f0
	if (!cr0.eq) goto loc_823919F0;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x82391a38
	if (cr6.eq) goto loc_82391A38;
loc_82391A20:
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82391a38
	if (cr6.gt) goto loc_82391A38;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x82391a20
	if (!cr6.eq) goto loc_82391A20;
loc_82391A38:
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r4,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r4.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
	// lwz r11,32(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391A64"))) PPC_WEAK_FUNC(sub_82391A64);
PPC_FUNC_IMPL(__imp__sub_82391A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391A68"))) PPC_WEAK_FUNC(sub_82391A68);
PPC_FUNC_IMPL(__imp__sub_82391A68) {
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
	// beq cr6,0x82391acc
	if (cr6.eq) goto loc_82391ACC;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,4500
	ctx.r8.s64 = ctx.r9.s64 + 4500;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// lbz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// stb r6,20(r11)
	PPC_STORE_U8(r11.u32 + 20, ctx.r6.u8);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_82391ACC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82391AE0"))) PPC_WEAK_FUNC(sub_82391AE0);
PPC_FUNC_IMPL(__imp__sub_82391AE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391AE4"))) PPC_WEAK_FUNC(sub_82391AE4);
PPC_FUNC_IMPL(__imp__sub_82391AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391AE8"))) PPC_WEAK_FUNC(sub_82391AE8);
PPC_FUNC_IMPL(__imp__sub_82391AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,6
	r11.s64 = ctx.r4.s64 + 6;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
}

__attribute__((alias("__imp__sub_82391AF4"))) PPC_WEAK_FUNC(sub_82391AF4);
PPC_FUNC_IMPL(__imp__sub_82391AF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391AF8"))) PPC_WEAK_FUNC(sub_82391AF8);
PPC_FUNC_IMPL(__imp__sub_82391AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,9
	r11.s64 = ctx.r4.s64 + 9;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
}

__attribute__((alias("__imp__sub_82391B04"))) PPC_WEAK_FUNC(sub_82391B04);
PPC_FUNC_IMPL(__imp__sub_82391B04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391B08"))) PPC_WEAK_FUNC(sub_82391B08);
PPC_FUNC_IMPL(__imp__sub_82391B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,20
	r11.s64 = ctx.r4.s64 + 20;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
}

__attribute__((alias("__imp__sub_82391B14"))) PPC_WEAK_FUNC(sub_82391B14);
PPC_FUNC_IMPL(__imp__sub_82391B14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391B18"))) PPC_WEAK_FUNC(sub_82391B18);
PPC_FUNC_IMPL(__imp__sub_82391B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r5,40(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// stw r5,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,44(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// stw r7,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r7.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r5,56(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	// stw r5,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r5.u32);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,60(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// stw r9,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391B88"))) PPC_WEAK_FUNC(sub_82391B88);
PPC_FUNC_IMPL(__imp__sub_82391B88) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x823996d8
	sub_823996D8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rotlwi r9,r3,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// stw r8,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r8.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r6,40(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// stw r6,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r6.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,44(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// stw r4,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r4.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// stw r7,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r7.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r5,60(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	// stw r5,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r5.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,64(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r3,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82391C20"))) PPC_WEAK_FUNC(sub_82391C20);
PPC_FUNC_IMPL(__imp__sub_82391C20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391C24"))) PPC_WEAK_FUNC(sub_82391C24);
PPC_FUNC_IMPL(__imp__sub_82391C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391C28"))) PPC_WEAK_FUNC(sub_82391C28);
PPC_FUNC_IMPL(__imp__sub_82391C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r11,r4,456
	r11.s64 = ctx.r4.s64 * 456;
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// lwz r6,36(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// stw r6,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r6.u32);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,40(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r8,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r6,52(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// stw r6,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r6.u32);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,56(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// stw r4,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// stw r8,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391CA8"))) PPC_WEAK_FUNC(sub_82391CA8);
PPC_FUNC_IMPL(__imp__sub_82391CA8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82391cf4
	if (cr6.eq) goto loc_82391CF4;
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// bl 0x82392520
	sub_82392520(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82391cf4
	if (cr6.eq) goto loc_82391CF4;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, r30.u32);
loc_82391CF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82391D08"))) PPC_WEAK_FUNC(sub_82391D08);
PPC_FUNC_IMPL(__imp__sub_82391D08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391D0C"))) PPC_WEAK_FUNC(sub_82391D0C);
PPC_FUNC_IMPL(__imp__sub_82391D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391D10"))) PPC_WEAK_FUNC(sub_82391D10);
PPC_FUNC_IMPL(__imp__sub_82391D10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82391D44:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82391d60
	if (cr6.eq) goto loc_82391D60;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82391d44
	if (!cr6.eq) goto loc_82391D44;
	// blr 
	return;
loc_82391D60:
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// addi r11,r11,6
	r11.s64 = r11.s64 + 6;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
}

__attribute__((alias("__imp__sub_82391D70"))) PPC_WEAK_FUNC(sub_82391D70);
PPC_FUNC_IMPL(__imp__sub_82391D70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391D74"))) PPC_WEAK_FUNC(sub_82391D74);
PPC_FUNC_IMPL(__imp__sub_82391D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391D78"))) PPC_WEAK_FUNC(sub_82391D78);
PPC_FUNC_IMPL(__imp__sub_82391D78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82391DAC:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82391dc8
	if (cr6.eq) goto loc_82391DC8;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82391dac
	if (!cr6.eq) goto loc_82391DAC;
	// blr 
	return;
loc_82391DC8:
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// addi r11,r11,9
	r11.s64 = r11.s64 + 9;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
}

__attribute__((alias("__imp__sub_82391DD8"))) PPC_WEAK_FUNC(sub_82391DD8);
PPC_FUNC_IMPL(__imp__sub_82391DD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391DDC"))) PPC_WEAK_FUNC(sub_82391DDC);
PPC_FUNC_IMPL(__imp__sub_82391DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391DE0"))) PPC_WEAK_FUNC(sub_82391DE0);
PPC_FUNC_IMPL(__imp__sub_82391DE0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82391e2c
	if (cr6.eq) goto loc_82391E2C;
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// bl 0x82392578
	sub_82392578(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82391e2c
	if (cr6.eq) goto loc_82391E2C;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, r30.u32);
loc_82391E2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82391E40"))) PPC_WEAK_FUNC(sub_82391E40);
PPC_FUNC_IMPL(__imp__sub_82391E40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391E44"))) PPC_WEAK_FUNC(sub_82391E44);
PPC_FUNC_IMPL(__imp__sub_82391E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391E48"))) PPC_WEAK_FUNC(sub_82391E48);
PPC_FUNC_IMPL(__imp__sub_82391E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82391e94
	if (cr6.eq) goto loc_82391E94;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82391e94
	if (cr6.eq) goto loc_82391E94;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82391E7C:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82391e9c
	if (cr6.eq) goto loc_82391E9C;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82391e7c
	if (!cr6.eq) goto loc_82391E7C;
loc_82391E94:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82391E9C:
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// addi r11,r11,6
	r11.s64 = r11.s64 + 6;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
}

__attribute__((alias("__imp__sub_82391EAC"))) PPC_WEAK_FUNC(sub_82391EAC);
PPC_FUNC_IMPL(__imp__sub_82391EAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391EB0"))) PPC_WEAK_FUNC(sub_82391EB0);
PPC_FUNC_IMPL(__imp__sub_82391EB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82391efc
	if (cr6.eq) goto loc_82391EFC;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82391efc
	if (cr6.eq) goto loc_82391EFC;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82391EE4:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82391f04
	if (cr6.eq) goto loc_82391F04;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82391ee4
	if (!cr6.eq) goto loc_82391EE4;
loc_82391EFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82391F04:
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// addi r11,r11,9
	r11.s64 = r11.s64 + 9;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
}

__attribute__((alias("__imp__sub_82391F14"))) PPC_WEAK_FUNC(sub_82391F14);
PPC_FUNC_IMPL(__imp__sub_82391F14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391F18"))) PPC_WEAK_FUNC(sub_82391F18);
PPC_FUNC_IMPL(__imp__sub_82391F18) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82391f70
	if (cr6.eq) goto loc_82391F70;
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// bl 0x82392578
	sub_82392578(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82391f70
	if (cr6.eq) goto loc_82391F70;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82391F70:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82391F84"))) PPC_WEAK_FUNC(sub_82391F84);
PPC_FUNC_IMPL(__imp__sub_82391F84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391F88"))) PPC_WEAK_FUNC(sub_82391F88);
PPC_FUNC_IMPL(__imp__sub_82391F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82391fc8
	if (cr6.eq) goto loc_82391FC8;
loc_82391FAC:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82391fac
	if (!cr0.eq) goto loc_82391FAC;
loc_82391FC8:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82391ff0
	if (cr6.eq) goto loc_82391FF0;
loc_82391FD4:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82391fd4
	if (!cr0.eq) goto loc_82391FD4;
loc_82391FF0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82392080
	if (cr6.eq) goto loc_82392080;
	// bl 0x823996d0
	sub_823996D0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rotlwi r9,r3,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// stw r8,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r8.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r6,40(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// stw r6,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r6.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,44(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// stw r4,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r4.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// stw r7,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r7.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r5,60(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	// stw r5,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r5.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,64(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r3,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82392080:
	// li r11,0
	r11.s64 = 0;
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

__attribute__((alias("__imp__sub_82392098"))) PPC_WEAK_FUNC(sub_82392098);
PPC_FUNC_IMPL(__imp__sub_82392098) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239209C"))) PPC_WEAK_FUNC(sub_8239209C);
PPC_FUNC_IMPL(__imp__sub_8239209C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823920A0"))) PPC_WEAK_FUNC(sub_823920A0);
PPC_FUNC_IMPL(__imp__sub_823920A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823920e4
	if (cr6.eq) goto loc_823920E4;
loc_823920C8:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x823920c8
	if (!cr0.eq) goto loc_823920C8;
loc_823920E4:
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8239210c
	if (cr6.eq) goto loc_8239210C;
loc_823920F0:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r11,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x823920f0
	if (!cr0.eq) goto loc_823920F0;
loc_8239210C:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x823996d8
	sub_823996D8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rotlwi r9,r3,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// stw r8,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r8.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r6,40(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// stw r6,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r6.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,44(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// stw r4,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r4.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// stw r7,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r7.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r5,60(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	// stw r5,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r5.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,64(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r3,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82392198"))) PPC_WEAK_FUNC(sub_82392198);
PPC_FUNC_IMPL(__imp__sub_82392198) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239219C"))) PPC_WEAK_FUNC(sub_8239219C);
PPC_FUNC_IMPL(__imp__sub_8239219C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823921A0"))) PPC_WEAK_FUNC(sub_823921A0);
PPC_FUNC_IMPL(__imp__sub_823921A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823921cc
	if (cr6.eq) goto loc_823921CC;
loc_823921B0:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x823921b0
	if (!cr0.eq) goto loc_823921B0;
loc_823921CC:
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823921f4
	if (cr6.eq) goto loc_823921F4;
loc_823921D8:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823921d8
	if (!cr0.eq) goto loc_823921D8;
loc_823921F4:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r11,r5,456
	r11.s64 = ctx.r5.s64 * 456;
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// lwz r6,36(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// stw r6,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r6.u32);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,40(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r8,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r6,52(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// stw r6,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r6.u32);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,56(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// stw r4,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// stw r8,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r8.u32);
}

__attribute__((alias("__imp__sub_82392270"))) PPC_WEAK_FUNC(sub_82392270);
PPC_FUNC_IMPL(__imp__sub_82392270) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392274"))) PPC_WEAK_FUNC(sub_82392274);
PPC_FUNC_IMPL(__imp__sub_82392274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392278"))) PPC_WEAK_FUNC(sub_82392278);
PPC_FUNC_IMPL(__imp__sub_82392278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// addi r29,r3,112
	r29.s64 = ctx.r3.s64 + 112;
	// stw r30,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, r30.u32);
	// stw r30,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, r30.u32);
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r30.u8);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823922c8
	if (cr6.eq) goto loc_823922C8;
loc_823922AC:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823922ac
	if (!cr0.eq) goto loc_823922AC;
loc_823922C8:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// stw r30,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82392324"))) PPC_WEAK_FUNC(sub_82392324);
PPC_FUNC_IMPL(__imp__sub_82392324) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82392328"))) PPC_WEAK_FUNC(sub_82392328);
PPC_FUNC_IMPL(__imp__sub_82392328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8239235c
	if (cr6.eq) goto loc_8239235C;
loc_82392340:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82392340
	if (!cr0.eq) goto loc_82392340;
loc_8239235C:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82392394
	if (cr6.eq) goto loc_82392394;
loc_82392378:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82392378
	if (!cr0.eq) goto loc_82392378;
loc_82392394:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
}

__attribute__((alias("__imp__sub_82392398"))) PPC_WEAK_FUNC(sub_82392398);
PPC_FUNC_IMPL(__imp__sub_82392398) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239239C"))) PPC_WEAK_FUNC(sub_8239239C);
PPC_FUNC_IMPL(__imp__sub_8239239C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823923A0"))) PPC_WEAK_FUNC(sub_823923A0);
PPC_FUNC_IMPL(__imp__sub_823923A0) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239250c
	if (cr6.eq) goto loc_8239250C;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// li r25,0
	r25.s64 = 0;
	// addi r29,r11,20
	r29.s64 = r11.s64 + 20;
	// mr r27,r25
	r27.u64 = r25.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8239250c
	if (!cr6.gt) goto loc_8239250C;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_823923E0:
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r31,r30,r11
	r31.u64 = r30.u64 + r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r10,r24,24
	ctx.r10.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823924f8
	if (cr6.eq) goto loc_823924F8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239246c
	if (cr6.eq) goto loc_8239246C;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq cr6,0x8239246c
	if (cr6.eq) goto loc_8239246C;
	// bl 0x822d5720
	sub_822D5720(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82392470
	if (!cr6.eq) goto loc_82392470;
loc_8239246C:
	// bl 0x822d55e0
	sub_822D55E0(ctx, base);
loc_82392470:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826ca4c8
	sub_826CA4C8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826ca118
	sub_826CA118(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823924e0
	if (cr6.eq) goto loc_823924E0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823924c8
	if (cr6.eq) goto loc_823924C8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// bl 0x82328a98
	sub_82328A98(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r3.u32);
	// b 0x823924f0
	goto loc_823924F0;
loc_823924C8:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + r28.u32, r25.u32);
	// b 0x823924f0
	goto loc_823924F0;
loc_823924E0:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + r28.u32, r25.u32);
loc_823924F0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
loc_823924F8:
	// lwz r11,60(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,60
	r30.s64 = r30.s64 + 60;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x823923e0
	if (cr6.lt) goto loc_823923E0;
loc_8239250C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_82392510"))) PPC_WEAK_FUNC(sub_82392510);
PPC_FUNC_IMPL(__imp__sub_82392510) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82392514"))) PPC_WEAK_FUNC(sub_82392514);
PPC_FUNC_IMPL(__imp__sub_82392514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392518"))) PPC_WEAK_FUNC(sub_82392518);
PPC_FUNC_IMPL(__imp__sub_82392518) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82392518"))) PPC_WEAK_FUNC(sub_82392518);
PPC_FUNC_IMPL(__imp__sub_82392518) {
	PPC_FUNC_PROLOGUE();
	// b 0x823923a0
	sub_823923A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239251C"))) PPC_WEAK_FUNC(sub_8239251C);
PPC_FUNC_IMPL(__imp__sub_8239251C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392520"))) PPC_WEAK_FUNC(sub_82392520);
PPC_FUNC_IMPL(__imp__sub_82392520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r3,24
	r11.s64 = ctx.r3.s64 + 24;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mulli r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 * 56;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// beq cr6,0x8239256c
	if (cr6.eq) goto loc_8239256C;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mulli r11,r9,56
	r11.s64 = ctx.r9.s64 * 56;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_82392554:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82392554
	if (!cr6.eq) goto loc_82392554;
loc_8239256C:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_82392570"))) PPC_WEAK_FUNC(sub_82392570);
PPC_FUNC_IMPL(__imp__sub_82392570) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392574"))) PPC_WEAK_FUNC(sub_82392574);
PPC_FUNC_IMPL(__imp__sub_82392574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392578"))) PPC_WEAK_FUNC(sub_82392578);
PPC_FUNC_IMPL(__imp__sub_82392578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r3,48
	r11.s64 = ctx.r3.s64 + 48;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mulli r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 * 60;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// beq cr6,0x823925c4
	if (cr6.eq) goto loc_823925C4;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mulli r11,r9,60
	r11.s64 = ctx.r9.s64 * 60;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_823925AC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x823925ac
	if (!cr6.eq) goto loc_823925AC;
loc_823925C4:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_823925C8"))) PPC_WEAK_FUNC(sub_823925C8);
PPC_FUNC_IMPL(__imp__sub_823925C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823925CC"))) PPC_WEAK_FUNC(sub_823925CC);
PPC_FUNC_IMPL(__imp__sub_823925CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823925D0"))) PPC_WEAK_FUNC(sub_823925D0);
PPC_FUNC_IMPL(__imp__sub_823925D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,204
	ctx.r3.s64 = r31.s64 + 204;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = r31.s64 + 232;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r29,r31,264
	r29.s64 = r31.s64 + 264;
	// li r30,3
	r30.s64 = 3;
loc_82392600:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82714aa0
	sub_82714AA0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,1136
	r29.s64 = r29.s64 + 1136;
	// bge 0x82392600
	if (!cr0.lt) goto loc_82392600;
	// addi r29,r31,4808
	r29.s64 = r31.s64 + 4808;
	// li r30,3
	r30.s64 = 3;
loc_8239261C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82714aa0
	sub_82714AA0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,1136
	r29.s64 = r29.s64 + 1136;
	// bge 0x8239261c
	if (!cr0.lt) goto loc_8239261C;
	// addi r29,r31,9352
	r29.s64 = r31.s64 + 9352;
	// li r30,3
	r30.s64 = 3;
loc_82392638:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82719588
	sub_82719588(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// bge 0x82392638
	if (!cr0.lt) goto loc_82392638;
	// addi r29,r31,9464
	r29.s64 = r31.s64 + 9464;
	// li r30,3
	r30.s64 = 3;
loc_82392654:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827127a0
	sub_827127A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,108
	r29.s64 = r29.s64 + 108;
	// bge 0x82392654
	if (!cr0.lt) goto loc_82392654;
	// addi r3,r31,9904
	ctx.r3.s64 = r31.s64 + 9904;
	// bl 0x827127a0
	sub_827127A0(ctx, base);
	// addi r29,r31,10012
	r29.s64 = r31.s64 + 10012;
	// li r30,3
	r30.s64 = 3;
loc_82392678:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827127a0
	sub_827127A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,108
	r29.s64 = r29.s64 + 108;
	// bge 0x82392678
	if (!cr0.lt) goto loc_82392678;
	// addi r29,r31,10444
	r29.s64 = r31.s64 + 10444;
	// li r30,3
	r30.s64 = 3;
loc_82392694:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827127a0
	sub_827127A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,108
	r29.s64 = r29.s64 + 108;
	// bge 0x82392694
	if (!cr0.lt) goto loc_82392694;
	// addi r29,r31,10876
	r29.s64 = r31.s64 + 10876;
	// li r30,3
	r30.s64 = 3;
loc_823926B0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827127a0
	sub_827127A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,108
	r29.s64 = r29.s64 + 108;
	// bge 0x823926b0
	if (!cr0.lt) goto loc_823926B0;
	// addi r29,r31,11308
	r29.s64 = r31.s64 + 11308;
	// li r30,3
	r30.s64 = 3;
loc_823926CC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827127a0
	sub_827127A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,108
	r29.s64 = r29.s64 + 108;
	// bge 0x823926cc
	if (!cr0.lt) goto loc_823926CC;
	// addi r29,r31,11740
	r29.s64 = r31.s64 + 11740;
	// li r30,3
	r30.s64 = 3;
loc_823926E8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827127a0
	sub_827127A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,108
	r29.s64 = r29.s64 + 108;
	// bge 0x823926e8
	if (!cr0.lt) goto loc_823926E8;
	// addi r29,r31,12172
	r29.s64 = r31.s64 + 12172;
	// li r30,3
	r30.s64 = 3;
loc_82392704:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827127a0
	sub_827127A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,108
	r29.s64 = r29.s64 + 108;
	// bge 0x82392704
	if (!cr0.lt) goto loc_82392704;
	// addi r29,r31,12604
	r29.s64 = r31.s64 + 12604;
	// li r30,3
	r30.s64 = 3;
loc_82392720:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827127a0
	sub_827127A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,108
	r29.s64 = r29.s64 + 108;
	// bge 0x82392720
	if (!cr0.lt) goto loc_82392720;
	// addi r29,r31,13036
	r29.s64 = r31.s64 + 13036;
	// li r30,3
	r30.s64 = 3;
loc_8239273C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827127a0
	sub_827127A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,108
	r29.s64 = r29.s64 + 108;
	// bge 0x8239273c
	if (!cr0.lt) goto loc_8239273C;
	// addi r29,r31,13468
	r29.s64 = r31.s64 + 13468;
	// li r30,3
	r30.s64 = 3;
loc_82392758:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827127a0
	sub_827127A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,108
	r29.s64 = r29.s64 + 108;
	// bge 0x82392758
	if (!cr0.lt) goto loc_82392758;
	// addi r3,r31,13932
	ctx.r3.s64 = r31.s64 + 13932;
	// bl 0x827127a0
	sub_827127A0(ctx, base);
	// addi r29,r31,14040
	r29.s64 = r31.s64 + 14040;
	// li r30,2
	r30.s64 = 2;
loc_8239277C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82714aa0
	sub_82714AA0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,1136
	r29.s64 = r29.s64 + 1136;
	// bge 0x8239277c
	if (!cr0.lt) goto loc_8239277C;
	// addi r29,r31,17452
	r29.s64 = r31.s64 + 17452;
	// li r30,3
	r30.s64 = 3;
loc_82392798:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82714aa0
	sub_82714AA0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,1136
	r29.s64 = r29.s64 + 1136;
	// bge 0x82392798
	if (!cr0.lt) goto loc_82392798;
	// addi r29,r31,21996
	r29.s64 = r31.s64 + 21996;
	// li r30,3
	r30.s64 = 3;
loc_823927B4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827127a0
	sub_827127A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,108
	r29.s64 = r29.s64 + 108;
	// bge 0x823927b4
	if (!cr0.lt) goto loc_823927B4;
	// addi r29,r31,22476
	r29.s64 = r31.s64 + 22476;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82719540
	sub_82719540(ctx, base);
	// addi r28,r31,22492
	r28.s64 = r31.s64 + 22492;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82719540
	sub_82719540(ctx, base);
	// addi r27,r31,22508
	r27.s64 = r31.s64 + 22508;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82719540
	sub_82719540(ctx, base);
	// addi r26,r31,22524
	r26.s64 = r31.s64 + 22524;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82719540
	sub_82719540(ctx, base);
	// li r11,15
	r11.s64 = 15;
	// li r10,79
	ctx.r10.s64 = 79;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lis r23,-31934
	r23.s64 = -2092826624;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// li r4,26
	ctx.r4.s64 = 26;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r3,22228(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// lis r9,120
	ctx.r9.s64 = 7864320;
	// stw r9,22460(r31)
	PPC_STORE_U32(r31.u32 + 22460, ctx.r9.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r11,1
	r11.s64 = 1;
	// addi r22,r8,4516
	r22.s64 = ctx.r8.s64 + 4516;
	// li r30,0
	r30.s64 = 0;
	// li r24,4096
	r24.s64 = 4096;
	// li r25,25
	r25.s64 = 25;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// li r9,49
	ctx.r9.s64 = 49;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lis r3,120
	ctx.r3.s64 = 7864320;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// rldicr r6,r11,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFF00000000;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6d30
	sub_826C6D30(ctx, base);
	// stw r3,22464(r31)
	PPC_STORE_U32(r31.u32 + 22464, ctx.r3.u32);
	// stw r30,22468(r31)
	PPC_STORE_U32(r31.u32 + 22468, r30.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r30,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r30.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,1344
	ctx.r5.s64 = 1344;
	// li r4,1344
	ctx.r4.s64 = 1344;
	// bl 0x82712648
	sub_82712648(ctx, base);
	// lwz r7,22468(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 22468);
	// li r11,1
	r11.s64 = 1;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stw r3,22468(r31)
	PPC_STORE_U32(r31.u32 + 22468, ctx.r3.u32);
	// li r9,53
	ctx.r9.s64 = 53;
	// rldicr r6,r11,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFF00000000;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6d30
	sub_826C6D30(ctx, base);
	// stw r3,22472(r31)
	PPC_STORE_U32(r31.u32 + 22472, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,22460(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 22460);
	// lwz r4,22464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 22464);
	// bl 0x82719490
	sub_82719490(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,22468(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 22468);
	// lwz r4,22472(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 22472);
	// bl 0x82719490
	sub_82719490(ctx, base);
	// lwz r6,22468(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 22468);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,22472(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22472);
	// rlwinm r5,r6,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// add r4,r11,r5
	ctx.r4.u64 = r11.u64 + ctx.r5.u64;
	// bl 0x82719490
	sub_82719490(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,22468(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 22468);
	// lwz r4,22472(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 22472);
	// bl 0x82719490
	sub_82719490(ctx, base);
	// li r4,26
	ctx.r4.s64 = 26;
	// lwz r3,22228(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_82392948"))) PPC_WEAK_FUNC(sub_82392948);
PPC_FUNC_IMPL(__imp__sub_82392948) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_8239294C"))) PPC_WEAK_FUNC(sub_8239294C);
PPC_FUNC_IMPL(__imp__sub_8239294C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392950"))) PPC_WEAK_FUNC(sub_82392950);
PPC_FUNC_IMPL(__imp__sub_82392950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// addi r31,r3,22476
	r31.s64 = ctx.r3.s64 + 22476;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827194a0
	sub_827194A0(ctx, base);
	// addi r30,r26,22492
	r30.s64 = r26.s64 + 22492;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827194a0
	sub_827194A0(ctx, base);
	// addi r29,r26,22508
	r29.s64 = r26.s64 + 22508;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827194a0
	sub_827194A0(ctx, base);
	// addi r28,r26,22524
	r28.s64 = r26.s64 + 22524;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827194a0
	sub_827194A0(ctx, base);
	// lwz r3,22464(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 22464);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823929a8
	if (cr6.eq) goto loc_823929A8;
	// bl 0x826c67a0
	sub_826C67A0(ctx, base);
	// stw r27,22464(r26)
	PPC_STORE_U32(r26.u32 + 22464, r27.u32);
loc_823929A8:
	// lwz r3,22472(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 22472);
	// stw r27,22468(r26)
	PPC_STORE_U32(r26.u32 + 22468, r27.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823929c0
	if (cr6.eq) goto loc_823929C0;
	// bl 0x826c67a0
	sub_826C67A0(ctx, base);
	// stw r27,22472(r26)
	PPC_STORE_U32(r26.u32 + 22472, r27.u32);
loc_823929C0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82719480
	sub_82719480(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82719480
	sub_82719480(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82719480
	sub_82719480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82719480
	sub_82719480(ctx, base);
	// addi r29,r26,432
	r29.s64 = r26.s64 + 432;
	// li r30,3
	r30.s64 = 3;
	// addi r31,r29,21996
	r31.s64 = r29.s64 + 21996;
loc_823929EC:
	// addi r31,r31,-108
	r31.s64 = r31.s64 + -108;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827130e8
	sub_827130E8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x823929ec
	if (!cr0.lt) goto loc_823929EC;
	// addi r28,r26,4544
	r28.s64 = r26.s64 + 4544;
	// li r30,3
	r30.s64 = 3;
	// addi r31,r28,17452
	r31.s64 = r28.s64 + 17452;
loc_82392A0C:
	// addi r31,r31,-1136
	r31.s64 = r31.s64 + -1136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82715618
	sub_82715618(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82392a0c
	if (!cr0.lt) goto loc_82392A0C;
	// addi r31,r26,17448
	r31.s64 = r26.s64 + 17448;
	// li r30,2
	r30.s64 = 2;
loc_82392A28:
	// addi r31,r31,-1136
	r31.s64 = r31.s64 + -1136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82715618
	sub_82715618(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82392a28
	if (!cr0.lt) goto loc_82392A28;
	// addi r3,r26,13932
	ctx.r3.s64 = r26.s64 + 13932;
	// bl 0x827130e8
	sub_827130E8(ctx, base);
	// addi r31,r29,13468
	r31.s64 = r29.s64 + 13468;
	// li r30,3
	r30.s64 = 3;
loc_82392A4C:
	// addi r31,r31,-108
	r31.s64 = r31.s64 + -108;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827130e8
	sub_827130E8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82392a4c
	if (!cr0.lt) goto loc_82392A4C;
	// addi r31,r29,13036
	r31.s64 = r29.s64 + 13036;
	// li r30,3
	r30.s64 = 3;
loc_82392A68:
	// addi r31,r31,-108
	r31.s64 = r31.s64 + -108;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827130e8
	sub_827130E8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82392a68
	if (!cr0.lt) goto loc_82392A68;
	// addi r31,r29,12604
	r31.s64 = r29.s64 + 12604;
	// li r30,3
	r30.s64 = 3;
loc_82392A84:
	// addi r31,r31,-108
	r31.s64 = r31.s64 + -108;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827130e8
	sub_827130E8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82392a84
	if (!cr0.lt) goto loc_82392A84;
	// addi r31,r29,12172
	r31.s64 = r29.s64 + 12172;
	// li r30,3
	r30.s64 = 3;
loc_82392AA0:
	// addi r31,r31,-108
	r31.s64 = r31.s64 + -108;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827130e8
	sub_827130E8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82392aa0
	if (!cr0.lt) goto loc_82392AA0;
	// addi r31,r29,11740
	r31.s64 = r29.s64 + 11740;
	// li r30,3
	r30.s64 = 3;
loc_82392ABC:
	// addi r31,r31,-108
	r31.s64 = r31.s64 + -108;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827130e8
	sub_827130E8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82392abc
	if (!cr0.lt) goto loc_82392ABC;
	// addi r31,r29,11308
	r31.s64 = r29.s64 + 11308;
	// li r30,3
	r30.s64 = 3;
loc_82392AD8:
	// addi r31,r31,-108
	r31.s64 = r31.s64 + -108;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827130e8
	sub_827130E8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82392ad8
	if (!cr0.lt) goto loc_82392AD8;
	// addi r31,r29,10876
	r31.s64 = r29.s64 + 10876;
	// li r30,3
	r30.s64 = 3;
loc_82392AF4:
	// addi r31,r31,-108
	r31.s64 = r31.s64 + -108;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827130e8
	sub_827130E8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82392af4
	if (!cr0.lt) goto loc_82392AF4;
	// addi r31,r29,10444
	r31.s64 = r29.s64 + 10444;
	// li r30,3
	r30.s64 = 3;
loc_82392B10:
	// addi r31,r31,-108
	r31.s64 = r31.s64 + -108;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827130e8
	sub_827130E8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82392b10
	if (!cr0.lt) goto loc_82392B10;
	// addi r31,r29,10012
	r31.s64 = r29.s64 + 10012;
	// li r30,3
	r30.s64 = 3;
loc_82392B2C:
	// addi r31,r31,-108
	r31.s64 = r31.s64 + -108;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827130e8
	sub_827130E8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82392b2c
	if (!cr0.lt) goto loc_82392B2C;
	// addi r3,r26,9904
	ctx.r3.s64 = r26.s64 + 9904;
	// bl 0x827130e8
	sub_827130E8(ctx, base);
	// addi r31,r29,9464
	r31.s64 = r29.s64 + 9464;
	// li r30,3
	r30.s64 = 3;
loc_82392B50:
	// addi r31,r31,-108
	r31.s64 = r31.s64 + -108;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827130e8
	sub_827130E8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82392b50
	if (!cr0.lt) goto loc_82392B50;
	// addi r31,r26,9464
	r31.s64 = r26.s64 + 9464;
	// li r30,3
	r30.s64 = 3;
loc_82392B6C:
	// addi r31,r31,-28
	r31.s64 = r31.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82719598
	sub_82719598(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82392b6c
	if (!cr0.lt) goto loc_82392B6C;
	// addi r31,r28,4808
	r31.s64 = r28.s64 + 4808;
	// li r30,3
	r30.s64 = 3;
loc_82392B88:
	// addi r31,r31,-1136
	r31.s64 = r31.s64 + -1136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82715618
	sub_82715618(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82392b88
	if (!cr0.lt) goto loc_82392B88;
	// addi r31,r28,264
	r31.s64 = r28.s64 + 264;
	// li r30,3
	r30.s64 = 3;
loc_82392BA4:
	// addi r31,r31,-1136
	r31.s64 = r31.s64 + -1136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82715618
	sub_82715618(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82392ba4
	if (!cr0.lt) goto loc_82392BA4;
	// addi r3,r26,232
	ctx.r3.s64 = r26.s64 + 232;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r26,204
	ctx.r3.s64 = r26.s64 + 204;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r26,176
	ctx.r3.s64 = r26.s64 + 176;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82392BD4"))) PPC_WEAK_FUNC(sub_82392BD4);
PPC_FUNC_IMPL(__imp__sub_82392BD4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82392BD8"))) PPC_WEAK_FUNC(sub_82392BD8);
PPC_FUNC_IMPL(__imp__sub_82392BD8) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,25320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 25320);
	// bl 0x825e4a00
	sub_825E4A00(ctx, base);
	// li r29,3
	r29.s64 = 3;
	// addi r30,r27,8216
	r30.s64 = r27.s64 + 8216;
	// addi r28,r27,9436
	r28.s64 = r27.s64 + 9436;
	// addi r31,r27,13792
	r31.s64 = r27.s64 + 13792;
loc_82392C04:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82392c1c
	if (cr6.eq) goto loc_82392C1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82712c10
	sub_82712C10(ctx, base);
loc_82392C1C:
	// lwz r11,-364(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -364);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82392c34
	if (cr6.eq) goto loc_82392C34;
	// addi r3,r31,-432
	ctx.r3.s64 = r31.s64 + -432;
	// bl 0x82712c10
	sub_82712C10(ctx, base);
loc_82392C34:
	// lwz r11,-796(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -796);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82392c4c
	if (cr6.eq) goto loc_82392C4C;
	// addi r3,r31,-864
	ctx.r3.s64 = r31.s64 + -864;
	// bl 0x82712c10
	sub_82712C10(ctx, base);
loc_82392C4C:
	// lwz r11,-1228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -1228);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82392c64
	if (cr6.eq) goto loc_82392C64;
	// addi r3,r31,-1296
	ctx.r3.s64 = r31.s64 + -1296;
	// bl 0x82712c10
	sub_82712C10(ctx, base);
loc_82392C64:
	// lwz r11,-1660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -1660);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82392c7c
	if (cr6.eq) goto loc_82392C7C;
	// addi r3,r31,-1728
	ctx.r3.s64 = r31.s64 + -1728;
	// bl 0x82712c10
	sub_82712C10(ctx, base);
loc_82392C7C:
	// lwz r11,-2092(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -2092);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82392c94
	if (cr6.eq) goto loc_82392C94;
	// addi r3,r31,-2160
	ctx.r3.s64 = r31.s64 + -2160;
	// bl 0x82712c10
	sub_82712C10(ctx, base);
loc_82392C94:
	// lwz r11,-2524(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -2524);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82392cac
	if (cr6.eq) goto loc_82392CAC;
	// addi r3,r31,-2592
	ctx.r3.s64 = r31.s64 + -2592;
	// bl 0x82712c10
	sub_82712C10(ctx, base);
loc_82392CAC:
	// lwz r11,-2956(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -2956);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82392cc4
	if (cr6.eq) goto loc_82392CC4;
	// addi r3,r31,-3024
	ctx.r3.s64 = r31.s64 + -3024;
	// bl 0x82712c10
	sub_82712C10(ctx, base);
loc_82392CC4:
	// lwz r11,-3388(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -3388);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82392cdc
	if (cr6.eq) goto loc_82392CDC;
	// addi r3,r31,-3456
	ctx.r3.s64 = r31.s64 + -3456;
	// bl 0x82712c10
	sub_82712C10(ctx, base);
loc_82392CDC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82392cf4
	if (cr6.eq) goto loc_82392CF4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827195d8
	sub_827195D8(ctx, base);
loc_82392CF4:
	// lwz r11,520(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 520);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82392d0c
	if (cr6.eq) goto loc_82392D0C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82715058
	sub_82715058(ctx, base);
loc_82392D0C:
	// lwz r11,-4024(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -4024);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82392d24
	if (cr6.eq) goto loc_82392D24;
	// addi r3,r30,-4544
	ctx.r3.s64 = r30.s64 + -4544;
	// bl 0x82715058
	sub_82715058(ctx, base);
loc_82392D24:
	// lwz r11,-3936(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -3936);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82392d3c
	if (cr6.eq) goto loc_82392D3C;
	// addi r3,r31,-4004
	ctx.r3.s64 = r31.s64 + -4004;
	// bl 0x82712c10
	sub_82712C10(ctx, base);
loc_82392D3C:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,-28
	r28.s64 = r28.s64 + -28;
	// addi r30,r30,-1136
	r30.s64 = r30.s64 + -1136;
	// addi r31,r31,-108
	r31.s64 = r31.s64 + -108;
	// bge 0x82392c04
	if (!cr0.lt) goto loc_82392C04;
	// lwz r11,14000(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 14000);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82392d68
	if (cr6.eq) goto loc_82392D68;
	// addi r3,r27,13932
	ctx.r3.s64 = r27.s64 + 13932;
	// bl 0x82712c10
	sub_82712C10(ctx, base);
loc_82392D68:
	// addi r31,r27,14040
	r31.s64 = r27.s64 + 14040;
	// li r30,3
	r30.s64 = 3;
loc_82392D70:
	// lwz r11,520(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 520);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82392d88
	if (cr6.eq) goto loc_82392D88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82715058
	sub_82715058(ctx, base);
loc_82392D88:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,1136
	r31.s64 = r31.s64 + 1136;
	// bne 0x82392d70
	if (!cr0.eq) goto loc_82392D70;
	// li r29,3
	r29.s64 = 3;
	// addi r30,r27,20860
	r30.s64 = r27.s64 + 20860;
	// addi r31,r27,22320
	r31.s64 = r27.s64 + 22320;
loc_82392DA0:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82392db8
	if (cr6.eq) goto loc_82392DB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82712c10
	sub_82712C10(ctx, base);
loc_82392DB8:
	// lwz r11,520(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 520);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82392dd0
	if (cr6.eq) goto loc_82392DD0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82715058
	sub_82715058(ctx, base);
loc_82392DD0:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,-108
	r31.s64 = r31.s64 + -108;
	// addi r30,r30,-1136
	r30.s64 = r30.s64 + -1136;
	// bge 0x82392da0
	if (!cr0.lt) goto loc_82392DA0;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,22428
	ctx.r3.s64 = r27.s64 + 22428;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,22444
	ctx.r3.s64 = r27.s64 + 22444;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82392E04"))) PPC_WEAK_FUNC(sub_82392E04);
PPC_FUNC_IMPL(__imp__sub_82392E04) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82392E08"))) PPC_WEAK_FUNC(sub_82392E08);
PPC_FUNC_IMPL(__imp__sub_82392E08) {
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
	// lis r27,-31970
	r27.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82392e38
	if (cr6.eq) goto loc_82392E38;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82392e3c
	if (!cr6.eq) goto loc_82392E3C;
loc_82392E38:
	// li r11,0
	r11.s64 = 0;
loc_82392E3C:
	// addi r4,r28,176
	ctx.r4.s64 = r28.s64 + 176;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// bl 0x82397588
	sub_82397588(ctx, base);
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82392e64
	if (cr6.eq) goto loc_82392E64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82392e68
	if (!cr6.eq) goto loc_82392E68;
loc_82392E64:
	// li r11,0
	r11.s64 = 0;
loc_82392E68:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,21020(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 21020);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,204
	ctx.r4.s64 = r28.s64 + 204;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82392ebc
	if (!cr6.eq) goto loc_82392EBC;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82392ebc
	if (!cr6.eq) goto loc_82392EBC;
	// lwz r11,21020(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 21020);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82392EBC:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82392ed8
	if (cr6.eq) goto loc_82392ED8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82392edc
	if (!cr6.eq) goto loc_82392EDC;
loc_82392ED8:
	// li r11,0
	r11.s64 = 0;
loc_82392EDC:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,21016(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 21016);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,232
	ctx.r4.s64 = r28.s64 + 232;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82392f30
	if (!cr6.eq) goto loc_82392F30;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82392f30
	if (!cr6.eq) goto loc_82392F30;
	// lwz r11,21016(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 21016);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82392F30:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82392bd8
	sub_82392BD8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82392F3C"))) PPC_WEAK_FUNC(sub_82392F3C);
PPC_FUNC_IMPL(__imp__sub_82392F3C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82392F40"))) PPC_WEAK_FUNC(sub_82392F40);
PPC_FUNC_IMPL(__imp__sub_82392F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e8
	// stfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, f30.u64);
	// stfd f31,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-79
	r11.s64 = r11.s64 + -79;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// stw r9,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r9.u32);
	// bgt cr6,0x82392f94
	if (cr6.gt) goto loc_82392F94;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82392f8c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82392F8C;
	// bdzf 4*cr6+eq,0x82392f94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82392F94;
	// bdzf 4*cr6+eq,0x82392f8c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82392F8C;
	// bne cr6,0x82392f8c
	if (!cr6.eq) goto loc_82392F8C;
loc_82392F8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82392f98
	goto loc_82392F98;
loc_82392F94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82392F98:
	// bl 0x8270ee00
	sub_8270EE00(ctx, base);
	// lis r20,-31934
	r20.s64 = -2092826624;
	// li r4,26
	ctx.r4.s64 = 26;
	// lwz r3,22228(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// li r24,0
	r24.s64 = 0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addic r9,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r9.s64 = r11.s64 + -1;
	// mr r21,r24
	r21.u64 = r24.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r9.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// ble cr6,0x823930d4
	if (!cr6.gt) goto loc_823930D4;
	// addi r27,r31,22476
	r27.s64 = r31.s64 + 22476;
	// clrlwi r22,r11,24
	r22.u64 = r11.u32 & 0xFF;
	// addi r23,r31,9464
	r23.s64 = r31.s64 + 9464;
	// addi r30,r31,4808
	r30.s64 = r31.s64 + 4808;
	// addi r28,r31,48
	r28.s64 = r31.s64 + 48;
loc_82392FE0:
	// lwz r26,-4(r28)
	r26.u64 = PPC_LOAD_U32(r28.u32 + -4);
	// addi r29,r30,-4544
	r29.s64 = r30.s64 + -4544;
	// lwz r25,0(r28)
	r25.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,260(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x82714ae8
	sub_82714AE8(ctx, base);
	// cntlzw r11,r22
	r11.u64 = r22.u32 == 0 ? 32 : __builtin_clz(r22.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r19,r11,27,31,31
	r19.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// bl 0x82714bc0
	sub_82714BC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82715108
	sub_82715108(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82715680
	sub_82715680(ctx, base);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82393094
	if (cr6.eq) goto loc_82393094;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82714ae8
	sub_82714AE8(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82714bc0
	sub_82714BC0(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82715108
	sub_82715108(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82715680
	sub_82715680(ctx, base);
	// lwz r3,1020(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1020);
	// b 0x82393098
	goto loc_82393098;
loc_82393094:
	// lwz r3,-3524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -3524);
loc_82393098:
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x82712ee0
	sub_82712EE0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x827127e8
	sub_827127E8(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r28,r28,40
	r28.s64 = r28.s64 + 40;
	// addi r30,r30,1136
	r30.s64 = r30.s64 + 1136;
	// addi r23,r23,108
	r23.s64 = r23.s64 + 108;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// blt cr6,0x82392fe0
	if (cr6.lt) goto loc_82392FE0;
loc_823930D4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82393128
	if (!cr6.gt) goto loc_82393128;
	// addi r30,r31,9368
	r30.s64 = r31.s64 + 9368;
	// addi r29,r31,-8
	r29.s64 = r31.s64 + -8;
loc_823930EC:
	// addi r3,r30,-16
	ctx.r3.s64 = r30.s64 + -16;
	// bl 0x827195a0
	sub_827195A0(ctx, base);
	// lfs f0,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,-12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + -12, temp.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lfs f13,32(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + -8, temp.u32);
	// lfs f12,36(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + -4, temp.u32);
	// lfsu f0,40(r29)
	ea = 40 + r29.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	r29.u32 = ea;
	f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x823930ec
	if (cr6.lt) goto loc_823930EC;
loc_82393128:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r25,r24
	r25.u64 = r24.u64;
	// li r26,1
	r26.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82393374
	if (!cr6.gt) goto loc_82393374;
	// addi r29,r31,22508
	r29.s64 = r31.s64 + 22508;
	// addi r30,r31,10444
	r30.s64 = r31.s64 + 10444;
	// addi r27,r31,8
	r27.s64 = r31.s64 + 8;
loc_82393148:
	// lwz r23,36(r27)
	r23.u64 = PPC_LOAD_U32(r27.u32 + 36);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// lwzu r28,40(r27)
	ea = 40 + r27.u32;
	r28.u64 = PPC_LOAD_U32(ea);
	r27.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r22,r23,31,1,31
	r22.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r21,r28,31,1,31
	r21.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// stb r26,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r26.u8);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r24,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, r24.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r30,-432
	ctx.r3.s64 = r30.s64 + -432;
	// bl 0x827139d8
	sub_827139D8(ctx, base);
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// rlwinm r19,r28,30,2,31
	r19.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r18,r23,30,2,31
	r18.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r26,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, r26.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r24,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, r24.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827139d8
	sub_827139D8(ctx, base);
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// rlwinm r17,r28,29,3,31
	r17.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r16,r23,29,3,31
	r16.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r26,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, r26.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r24,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, r24.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// addi r3,r30,432
	ctx.r3.s64 = r30.s64 + 432;
	// bl 0x827139d8
	sub_827139D8(ctx, base);
	// addi r5,r1,126
	ctx.r5.s64 = ctx.r1.s64 + 126;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r26,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, r26.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r24,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, r24.u8);
	// rlwinm r6,r28,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 28) & 0xFFFFFFF;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// rlwinm r5,r23,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 28) & 0xFFFFFFF;
	// addi r3,r30,864
	ctx.r3.s64 = r30.s64 + 864;
	// bl 0x827139d8
	sub_827139D8(ctx, base);
	// addi r3,r1,122
	ctx.r3.s64 = ctx.r1.s64 + 122;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r26,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, r26.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r24,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, r24.u8);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r3,r30,1296
	ctx.r3.s64 = r30.s64 + 1296;
	// bl 0x827139d8
	sub_827139D8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r1,130
	r11.s64 = ctx.r1.s64 + 130;
	// stb r26,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, r26.u8);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// stb r24,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, r24.u8);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r30,1728
	ctx.r3.s64 = r30.s64 + 1728;
	// bl 0x827139d8
	sub_827139D8(ctx, base);
	// addi r10,r1,118
	ctx.r10.s64 = ctx.r1.s64 + 118;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r26,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, r26.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r24,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, r24.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r30,2160
	ctx.r3.s64 = r30.s64 + 2160;
	// bl 0x827139d8
	sub_827139D8(ctx, base);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r26,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, r26.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r24,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, r24.u8);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// addi r3,r30,2592
	ctx.r3.s64 = r30.s64 + 2592;
	// bl 0x827139d8
	sub_827139D8(ctx, base);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r26,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, r26.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r24,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, r24.u8);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r3,r30,3024
	ctx.r3.s64 = r30.s64 + 3024;
	// bl 0x827139d8
	sub_827139D8(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r30,r30,108
	r30.s64 = r30.s64 + 108;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x82393148
	if (cr6.lt) goto loc_82393148;
loc_82393374:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82393764
	if (!cr6.gt) goto loc_82393764;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,4612
	ctx.r3.s64 = r11.s64 + 4612;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r11,21644(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21644);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x826cb2e8
	sub_826CB2E8(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r3,r5,4592
	ctx.r3.s64 = ctx.r5.s64 + 4592;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r25,r11,-13328
	r25.s64 = r11.s64 + -13328;
	// addi r29,r10,-13220
	r29.s64 = ctx.r10.s64 + -13220;
	// addi r27,r9,16888
	r27.s64 = ctx.r9.s64 + 16888;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r23,r8,4508
	r23.s64 = ctx.r8.s64 + 4508;
	// beq cr6,0x82393500
	if (cr6.eq) goto loc_82393500;
	// rotlwi r11,r4,0
	r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82393500
	if (cr6.eq) goto loc_82393500;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82393488
	if (cr6.eq) goto loc_82393488;
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// b 0x823934f8
	goto loc_823934F8;
loc_82393488:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82393500
	if (cr6.eq) goto loc_82393500;
	// addi r30,r3,60
	r30.s64 = ctx.r3.s64 + 60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823934f0
	if (cr6.eq) goto loc_823934F0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822c8428
	sub_822C8428(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823934f0
	if (cr6.eq) goto loc_823934F0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823934f4
	goto loc_823934F4;
loc_823934F0:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_823934F4:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823934F8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82393504
	if (!cr6.eq) goto loc_82393504;
loc_82393500:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82393504:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r11,13904(r31)
	PPC_STORE_U32(r31.u32 + 13904, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,4576
	ctx.r3.s64 = ctx.r10.s64 + 4576;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82393608
	if (cr6.eq) goto loc_82393608;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82393608
	if (cr6.eq) goto loc_82393608;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82393590
	if (cr6.eq) goto loc_82393590;
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// b 0x82393600
	goto loc_82393600;
loc_82393590:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82393608
	if (cr6.eq) goto loc_82393608;
	// addi r30,r3,60
	r30.s64 = ctx.r3.s64 + 60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823935f8
	if (cr6.eq) goto loc_823935F8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822c8428
	sub_822C8428(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823935f8
	if (cr6.eq) goto loc_823935F8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823935fc
	goto loc_823935FC;
loc_823935F8:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_823935FC:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82393600:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8239360c
	if (!cr6.eq) goto loc_8239360C;
loc_82393608:
	// addi r11,r23,4
	r11.s64 = r23.s64 + 4;
loc_8239360C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r11,13900(r31)
	PPC_STORE_U32(r31.u32 + 13900, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r6,r31,22524
	ctx.r6.s64 = r31.s64 + 22524;
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r26.u8);
	// addi r7,r10,30376
	ctx.r7.s64 = ctx.r10.s64 + 30376;
	// stb r24,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, r24.u8);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r27,r31,13932
	r27.s64 = r31.s64 + 13932;
	// lfs f0,30376(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30376);
	f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,13908(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 13908, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r30,r31,13908
	r30.s64 = r31.s64 + 13908;
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,13912(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 13912, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,13916(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 13916, temp.u32);
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,13920(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 13920, temp.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r7,13904(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 13904);
	// lwz r5,13900(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 13900);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// bl 0x82714318
	sub_82714318(ctx, base);
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// lwz r4,13904(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 13904);
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lfs f31,-25600(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -25600);
	f31.f64 = double(temp.f32);
	// ble cr6,0x82393740
	if (!cr6.gt) goto loc_82393740;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r28,r30,-4
	r28.s64 = r30.s64 + -4;
	// addi r30,r31,14040
	r30.s64 = r31.s64 + 14040;
	// lfs f30,2992(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2992);
	f30.f64 = double(temp.f32);
loc_823936B4:
	// lwz r4,13900(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 13900);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x82714ae8
	sub_82714AE8(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82714c70
	sub_82714C70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82715680
	sub_82715680(ctx, base);
	// extsw r11,r29
	r11.s64 = r29.s32;
	// lwz r10,13904(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13904);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, r11.u64);
	// addi r30,r30,1136
	r30.s64 = r30.s64 + 1136;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r9.u64);
	// lfd f11,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f0,144(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// fmuls f8,f9,f30
	ctx.f8.f64 = double(float(ctx.f9.f64 * f30.f64));
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f6,f31,f8
	ctx.f6.f64 = double(float(f31.f64 / ctx.f8.f64));
	// fdivs f7,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// fadds f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfsu f5,4(r28)
	temp.f32 = float(ctx.f5.f64);
	ea = 4 + r28.u32;
	PPC_STORE_U32(ea, temp.u32);
	r28.u32 = ea;
	// lwz r8,13904(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 13904);
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(r29.u32, ctx.r8.u32, xer);
	// blt cr6,0x823936b4
	if (cr6.lt) goto loc_823936B4;
loc_82393740:
	// lwz r11,13900(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13900);
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r10.u64);
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f31,f12
	ctx.f11.f64 = double(float(f31.f64 / ctx.f12.f64));
	// stfs f11,13924(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 13924, temp.u32);
	// stfs f11,13928(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 13928, temp.u32);
loc_82393764:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82393980
	if (!cr6.gt) goto loc_82393980;
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r3,22228(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// lwz r11,17448(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17448);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82393890
	if (cr6.eq) goto loc_82393890;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// beq cr6,0x823937dc
	if (cr6.eq) goto loc_823937DC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82393974
	if (!cr6.gt) goto loc_82393974;
	// addi r9,r31,22440
	ctx.r9.s64 = r31.s64 + 22440;
	// addi r11,r31,4808
	r11.s64 = r31.s64 + 4808;
loc_823937A4:
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r10,r11,-4544
	ctx.r10.s64 = r11.s64 + -4544;
	// beq cr6,0x823937b8
	if (cr6.eq) goto loc_823937B8;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823937B8:
	// stw r10,-12(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12, ctx.r10.u32);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r11,r11,1136
	r11.s64 = r11.s64 + 1136;
	// lwz r10,560(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r24,r8
	cr6.compare<uint32_t>(r24.u32, ctx.r8.u32, xer);
	// blt cr6,0x823937a4
	if (cr6.lt) goto loc_823937A4;
	// b 0x82393974
	goto loc_82393974;
loc_823937DC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82393974
	if (!cr6.gt) goto loc_82393974;
	// addi r28,r31,22440
	r28.s64 = r31.s64 + 22440;
	// addi r30,r31,17452
	r30.s64 = r31.s64 + 17452;
loc_823937EC:
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// addi r29,r30,-17188
	r29.s64 = r30.s64 + -17188;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82393800
	if (cr6.eq) goto loc_82393800;
	// addi r29,r30,-12644
	r29.s64 = r30.s64 + -12644;
loc_82393800:
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r27,524(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 524);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r26,528(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 528);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r6,544(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 544);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827148d8
	sub_827148D8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r5,1016(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 1016);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827149c8
	sub_827149C8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// rlwinm r5,r26,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r4,r27,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82714ae8
	sub_82714AE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82715680
	sub_82715680(ctx, base);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82714810
	sub_82714810(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82714888
	sub_82714888(ctx, base);
	// stw r30,-12(r28)
	PPC_STORE_U32(r28.u32 + -12, r30.u32);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r30,r30,1136
	r30.s64 = r30.s64 + 1136;
	// lwz r11,560(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 560);
	// stwu r11,4(r28)
	ea = 4 + r28.u32;
	PPC_STORE_U32(ea, r11.u32);
	r28.u32 = ea;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r24,r10
	cr6.compare<uint32_t>(r24.u32, ctx.r10.u32, xer);
	// blt cr6,0x823937ec
	if (cr6.lt) goto loc_823937EC;
	// b 0x82393974
	goto loc_82393974;
loc_82393890:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r25,r24
	r25.u64 = r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82393974
	if (!cr6.gt) goto loc_82393974;
	// addi r27,r31,22492
	r27.s64 = r31.s64 + 22492;
	// addi r28,r31,22440
	r28.s64 = r31.s64 + 22440;
	// addi r29,r31,21996
	r29.s64 = r31.s64 + 21996;
	// addi r30,r31,17452
	r30.s64 = r31.s64 + 17452;
loc_823938B0:
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r30,-17188
	r11.s64 = r30.s64 + -17188;
	// beq cr6,0x823938c4
	if (cr6.eq) goto loc_823938C4;
	// addi r11,r30,-12644
	r11.s64 = r30.s64 + -12644;
loc_823938C4:
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 524);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,528(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 528);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r23,r10,31,1,31
	r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r22,r9,31,1,31
	r22.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// bl 0x82714ae8
	sub_82714AE8(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82715108
	sub_82715108(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82714bc0
	sub_82714BC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82715680
	sub_82715680(ctx, base);
	// addi r8,r1,114
	ctx.r8.s64 = ctx.r1.s64 + 114;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r26,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, r26.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// stb r24,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, r24.u8);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827139d8
	sub_827139D8(ctx, base);
	// stw r30,-12(r28)
	PPC_STORE_U32(r28.u32 + -12, r30.u32);
	// stwu r29,4(r28)
	ea = 4 + r28.u32;
	PPC_STORE_U32(ea, r29.u32);
	r28.u32 = ea;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r30,r30,1136
	r30.s64 = r30.s64 + 1136;
	// addi r29,r29,108
	r29.s64 = r29.s64 + 108;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r25,r7
	cr6.compare<uint32_t>(r25.u32, ctx.r7.u32, xer);
	// blt cr6,0x823938b0
	if (cr6.lt) goto loc_823938B0;
loc_82393974:
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r3,22228(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
loc_82393980:
	// li r4,26
	ctx.r4.s64 = 26;
	// lwz r3,22228(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
}

__attribute__((alias("__imp__sub_823939A0"))) PPC_WEAK_FUNC(sub_823939A0);
PPC_FUNC_IMPL(__imp__sub_823939A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9438
	return;
}

__attribute__((alias("__imp__sub_823939A4"))) PPC_WEAK_FUNC(sub_823939A4);
PPC_FUNC_IMPL(__imp__sub_823939A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823939A8"))) PPC_WEAK_FUNC(sub_823939A8);
PPC_FUNC_IMPL(__imp__sub_823939A8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82392bd8
	sub_82392BD8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// bl 0x82392f40
	sub_82392F40(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_823939E0"))) PPC_WEAK_FUNC(sub_823939E0);
PPC_FUNC_IMPL(__imp__sub_823939E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_823939E4"))) PPC_WEAK_FUNC(sub_823939E4);
PPC_FUNC_IMPL(__imp__sub_823939E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823939E8"))) PPC_WEAK_FUNC(sub_823939E8);
PPC_FUNC_IMPL(__imp__sub_823939E8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82392bd8
	sub_82392BD8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// beq cr6,0x82393a8c
	if (cr6.eq) goto loc_82393A8C;
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// subf r8,r30,r31
	ctx.r8.s64 = r31.s64 - r30.s64;
loc_82393A28:
	// lbz r7,-16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + -16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stb r7,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r7.u8);
	// lfs f0,-12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f13,-8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r8,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, temp.u32);
	// lfs f12,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r6,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r6.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r5,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r5.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r4,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r4.u32);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r3,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r3.u32);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r11,r11,40
	r11.s64 = r11.s64 + 40;
	// stwu r7,40(r10)
	ea = 40 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// blt cr6,0x82393a28
	if (cr6.lt) goto loc_82393A28;
loc_82393A8C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82392f40
	sub_82392F40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82393AA8"))) PPC_WEAK_FUNC(sub_82393AA8);
PPC_FUNC_IMPL(__imp__sub_82393AA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82393AAC"))) PPC_WEAK_FUNC(sub_82393AAC);
PPC_FUNC_IMPL(__imp__sub_82393AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82393AB0"))) PPC_WEAK_FUNC(sub_82393AB0);
PPC_FUNC_IMPL(__imp__sub_82393AB0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82392bd8
	sub_82392BD8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r11.u32);
	// bl 0x82392f40
	sub_82392F40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82393AF4"))) PPC_WEAK_FUNC(sub_82393AF4);
PPC_FUNC_IMPL(__imp__sub_82393AF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82393AF8"))) PPC_WEAK_FUNC(sub_82393AF8);
PPC_FUNC_IMPL(__imp__sub_82393AF8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82392bd8
	sub_82392BD8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,17448(r31)
	PPC_STORE_U32(r31.u32 + 17448, r11.u32);
	// bl 0x82392f40
	sub_82392F40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82393B3C"))) PPC_WEAK_FUNC(sub_82393B3C);
PPC_FUNC_IMPL(__imp__sub_82393B3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82393B40"))) PPC_WEAK_FUNC(sub_82393B40);
PPC_FUNC_IMPL(__imp__sub_82393B40) {
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
	// lis r27,-31934
	r27.s64 = -2092826624;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,22228(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// li r5,160
	ctx.r5.s64 = 160;
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r30,2
	r30.s64 = 2;
	// li r5,4544
	ctx.r5.s64 = 4544;
	// stw r30,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,264
	ctx.r3.s64 = r31.s64 + 264;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,4544
	ctx.r5.s64 = 4544;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,4808
	ctx.r3.s64 = r31.s64 + 4808;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r4,25
	ctx.r4.s64 = 25;
	// addi r10,r11,22616
	ctx.r10.s64 = r11.s64 + 22616;
	// lwz r11,532(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 532);
	// stw r10,9900(r31)
	PPC_STORE_U32(r31.u32 + 9900, ctx.r10.u32);
	// stw r11,9896(r31)
	PPC_STORE_U32(r31.u32 + 9896, r11.u32);
	// lwz r3,22228(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r28.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r28,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, r28.u8);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,70
	ctx.r4.s64 = 70;
	// addi r3,r31,9904
	ctx.r3.s64 = r31.s64 + 9904;
	// bl 0x82714018
	sub_82714018(ctx, base);
	// li r4,25
	ctx.r4.s64 = 25;
	// lwz r3,22228(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r7,r9,30376
	ctx.r7.s64 = ctx.r9.s64 + 30376;
	// li r8,1344
	ctx.r8.s64 = 1344;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r8,13900(r31)
	PPC_STORE_U32(r31.u32 + 13900, ctx.r8.u32);
	// stw r6,13904(r31)
	PPC_STORE_U32(r31.u32 + 13904, ctx.r6.u32);
	// lfs f0,30376(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30376);
	f0.f64 = double(temp.f32);
	// stfs f0,13908(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 13908, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,13912(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 13912, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,13916(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 13916, temp.u32);
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,13920(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 13920, temp.u32);
	// bl 0x82393db0
	sub_82393DB0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,22428
	ctx.r3.s64 = r31.s64 + 22428;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,13924(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 13924, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,13928(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 13928, temp.u32);
	// stw r30,17448(r31)
	PPC_STORE_U32(r31.u32 + 17448, r30.u32);
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,22444
	ctx.r3.s64 = r31.s64 + 22444;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lis r30,-31970
	r30.s64 = -2095185920;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// addi r9,r10,14824
	ctx.r9.s64 = ctx.r10.s64 + 14824;
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82393ca0
	if (cr6.eq) goto loc_82393CA0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82393ca4
	if (!cr6.eq) goto loc_82393CA4;
loc_82393CA0:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82393CA4:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// bl 0x82398000
	sub_82398000(ctx, base);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// lis r11,-32199
	r11.s64 = -2110193664;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r26,r11,15024
	r26.s64 = r11.s64 + 15024;
	// beq cr6,0x82393cdc
	if (cr6.eq) goto loc_82393CDC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82393ce0
	if (!cr6.eq) goto loc_82393CE0;
loc_82393CDC:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_82393CE0:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r25,12(r10)
	r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r29,r11,-3784
	r29.s64 = r11.s64 + -3784;
	// addi r3,r10,20912
	ctx.r3.s64 = ctx.r10.s64 + 20912;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,21020(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21020);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r31,204
	ctx.r4.s64 = r31.s64 + 204;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// lis r11,-32199
	r11.s64 = -2110193664;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r26,r11,15096
	r26.s64 = r11.s64 + 15096;
	// beq cr6,0x82393d54
	if (cr6.eq) goto loc_82393D54;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82393d54
	if (cr6.eq) goto loc_82393D54;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82393D54:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r30,12(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,20960
	ctx.r3.s64 = r11.s64 + 20960;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,21016(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21016);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r31,232
	ctx.r4.s64 = r31.s64 + 232;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// li r4,26
	ctx.r4.s64 = 26;
	// lwz r3,22228(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82393DAC"))) PPC_WEAK_FUNC(sub_82393DAC);
PPC_FUNC_IMPL(__imp__sub_82393DAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82393DB0"))) PPC_WEAK_FUNC(sub_82393DB0);
PPC_FUNC_IMPL(__imp__sub_82393DB0) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r11,30372(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30372);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82393e18
	if (!cr6.eq) goto loc_82393E18;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// addi r31,r9,30364
	r31.s64 = ctx.r9.s64 + 30364;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r7,-31979
	ctx.r7.s64 = -2095775744;
	// stw r11,30372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30372, r11.u32);
	// lfs f0,21036(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	f0.f64 = double(temp.f32);
	// addi r3,r7,-27864
	ctx.r3.s64 = ctx.r7.s64 + -27864;
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,30364(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 30364, temp.u32);
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82393E18:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r3,r11,30364
	ctx.r3.s64 = r11.s64 + 30364;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82393E30"))) PPC_WEAK_FUNC(sub_82393E30);
PPC_FUNC_IMPL(__imp__sub_82393E30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82393E34"))) PPC_WEAK_FUNC(sub_82393E34);
PPC_FUNC_IMPL(__imp__sub_82393E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82393E38"))) PPC_WEAK_FUNC(sub_82393E38);
PPC_FUNC_IMPL(__imp__sub_82393E38) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// addi r10,r11,4632
	ctx.r10.s64 = r11.s64 + 4632;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82393EB0"))) PPC_WEAK_FUNC(sub_82393EB0);
PPC_FUNC_IMPL(__imp__sub_82393EB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82393EB4"))) PPC_WEAK_FUNC(sub_82393EB4);
PPC_FUNC_IMPL(__imp__sub_82393EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82393EB8"))) PPC_WEAK_FUNC(sub_82393EB8);
PPC_FUNC_IMPL(__imp__sub_82393EB8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r3,140
	ctx.r3.s64 = ctx.r3.s64 + 140;
	// addi r10,r11,4632
	ctx.r10.s64 = r11.s64 + 4632;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82393F10"))) PPC_WEAK_FUNC(sub_82393F10);
PPC_FUNC_IMPL(__imp__sub_82393F10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82393F14"))) PPC_WEAK_FUNC(sub_82393F14);
PPC_FUNC_IMPL(__imp__sub_82393F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82393F18"))) PPC_WEAK_FUNC(sub_82393F18);
PPC_FUNC_IMPL(__imp__sub_82393F18) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82393f4c
	if (cr6.eq) goto loc_82393F4C;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82393F4C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82393fa8
	if (cr6.eq) goto loc_82393FA8;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82393FA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82393FB8"))) PPC_WEAK_FUNC(sub_82393FB8);
PPC_FUNC_IMPL(__imp__sub_82393FB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82393FBC"))) PPC_WEAK_FUNC(sub_82393FBC);
PPC_FUNC_IMPL(__imp__sub_82393FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82393FC0"))) PPC_WEAK_FUNC(sub_82393FC0);
PPC_FUNC_IMPL(__imp__sub_82393FC0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82393ff4
	if (cr6.eq) goto loc_82393FF4;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82393FF4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82394050
	if (cr6.eq) goto loc_82394050;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82394050:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82394060"))) PPC_WEAK_FUNC(sub_82394060);
PPC_FUNC_IMPL(__imp__sub_82394060) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82394064"))) PPC_WEAK_FUNC(sub_82394064);
PPC_FUNC_IMPL(__imp__sub_82394064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82394068"))) PPC_WEAK_FUNC(sub_82394068);
PPC_FUNC_IMPL(__imp__sub_82394068) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82394070"))) PPC_WEAK_FUNC(sub_82394070);
PPC_FUNC_IMPL(__imp__sub_82394070) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82394078"))) PPC_WEAK_FUNC(sub_82394078);
PPC_FUNC_IMPL(__imp__sub_82394078) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82394080"))) PPC_WEAK_FUNC(sub_82394080);
PPC_FUNC_IMPL(__imp__sub_82394080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// and r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// and r9,r11,r10
	ctx.r9.u64 = r11.u64 & ctx.r10.u64;
	// clrlwi r8,r9,28
	ctx.r8.u64 = ctx.r9.u32 & 0xF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823940EC"))) PPC_WEAK_FUNC(sub_823940EC);
PPC_FUNC_IMPL(__imp__sub_823940EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823940F0"))) PPC_WEAK_FUNC(sub_823940F0);
PPC_FUNC_IMPL(__imp__sub_823940F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// and r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// and r9,r11,r10
	ctx.r9.u64 = r11.u64 & ctx.r10.u64;
	// clrlwi r8,r9,28
	ctx.r8.u64 = ctx.r9.u32 & 0xF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8239415C"))) PPC_WEAK_FUNC(sub_8239415C);
PPC_FUNC_IMPL(__imp__sub_8239415C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82394160"))) PPC_WEAK_FUNC(sub_82394160);
PPC_FUNC_IMPL(__imp__sub_82394160) {
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// and r30,r9,r10
	r30.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823941ec
	if (cr6.eq) goto loc_823941EC;
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x823941ec
	if (cr6.eq) goto loc_823941EC;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// and r9,r11,r10
	ctx.r9.u64 = r11.u64 & ctx.r10.u64;
	// clrlwi r8,r9,28
	ctx.r8.u64 = ctx.r9.u32 & 0xF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x823941ec
	if (cr6.eq) goto loc_823941EC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823941EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_823941F0"))) PPC_WEAK_FUNC(sub_823941F0);
PPC_FUNC_IMPL(__imp__sub_823941F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_823941F4"))) PPC_WEAK_FUNC(sub_823941F4);
PPC_FUNC_IMPL(__imp__sub_823941F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823941F8"))) PPC_WEAK_FUNC(sub_823941F8);
PPC_FUNC_IMPL(__imp__sub_823941F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// and r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// and r9,r11,r10
	ctx.r9.u64 = r11.u64 & ctx.r10.u64;
	// clrlwi r8,r9,28
	ctx.r8.u64 = ctx.r9.u32 & 0xF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,12(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x8239425c
	if (cr6.eq) goto loc_8239425C;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_8239425C:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82394268"))) PPC_WEAK_FUNC(sub_82394268);
PPC_FUNC_IMPL(__imp__sub_82394268) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239426C"))) PPC_WEAK_FUNC(sub_8239426C);
PPC_FUNC_IMPL(__imp__sub_8239426C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82394270"))) PPC_WEAK_FUNC(sub_82394270);
PPC_FUNC_IMPL(__imp__sub_82394270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// and r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r10,6(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// and r9,r11,r10
	ctx.r9.u64 = r11.u64 & ctx.r10.u64;
	// lbz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// and r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 & ctx.r10.u64;
	// subfe r11,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r7.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r6,28
	ctx.r10.u64 = ctx.r6.u32 & 0xF;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823942f4
	if (cr6.eq) goto loc_823942F4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_823942F4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8239430C"))) PPC_WEAK_FUNC(sub_8239430C);
PPC_FUNC_IMPL(__imp__sub_8239430C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82394310"))) PPC_WEAK_FUNC(sub_82394310);
PPC_FUNC_IMPL(__imp__sub_82394310) {
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
	// lwz r10,60(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r8,52(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// mulli r9,r10,60
	ctx.r9.s64 = ctx.r10.s64 * 60;
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x8239436c
	if (cr6.eq) goto loc_8239436C;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mulli r11,r8,60
	r11.s64 = ctx.r8.s64 * 60;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
loc_82394354:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x8239438c
	if (cr6.eq) goto loc_8239438C;
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82394354
	if (!cr6.eq) goto loc_82394354;
loc_8239436C:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82394a50
	sub_82394A50(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8239438C:
	// lwz r11,52(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_823943A8"))) PPC_WEAK_FUNC(sub_823943A8);
PPC_FUNC_IMPL(__imp__sub_823943A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823943AC"))) PPC_WEAK_FUNC(sub_823943AC);
PPC_FUNC_IMPL(__imp__sub_823943AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823943B0"))) PPC_WEAK_FUNC(sub_823943B0);
PPC_FUNC_IMPL(__imp__sub_823943B0) {
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
	// lwz r31,8(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// ble cr6,0x82394404
	if (!cr6.gt) goto loc_82394404;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82394404
	if (cr6.eq) goto loc_82394404;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r4,r11,20
	ctx.r4.s64 = r11.s64 + 20;
	// bl 0x82394310
	sub_82394310(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82394404
	if (!cr6.eq) goto loc_82394404;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_82394404:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x8239443c
	if (!cr6.gt) goto loc_8239443C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239443c
	if (cr6.eq) goto loc_8239443C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,20
	ctx.r4.s64 = r11.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82394310
	sub_82394310(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82394440
	if (cr6.eq) goto loc_82394440;
loc_8239443C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82394440:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82394444"))) PPC_WEAK_FUNC(sub_82394444);
PPC_FUNC_IMPL(__imp__sub_82394444) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82394448"))) PPC_WEAK_FUNC(sub_82394448);
PPC_FUNC_IMPL(__imp__sub_82394448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823944a8
	if (cr6.eq) goto loc_823944A8;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bge cr6,0x823944a8
	if (!cr6.lt) goto loc_823944A8;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mulli r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 * 60;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82394478:
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// beq cr6,0x8239449c
	if (cr6.eq) goto loc_8239449C;
loc_82394484:
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x823944b0
	if (cr6.eq) goto loc_823944B0;
	// addi r11,r11,60
	r11.s64 = r11.s64 + 60;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82394484
	if (!cr6.eq) goto loc_82394484;
loc_8239449C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// blt cr6,0x82394478
	if (cr6.lt) goto loc_82394478;
loc_823944A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823944B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823944B8"))) PPC_WEAK_FUNC(sub_823944B8);
PPC_FUNC_IMPL(__imp__sub_823944B8) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239453c
	if (cr6.eq) goto loc_8239453C;
	// lwz r11,104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// addi r30,r11,56
	r30.s64 = r11.s64 + 56;
	// lwz r31,60(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x8239453c
	if (cr6.eq) goto loc_8239453C;
	// lis r28,-31934
	r28.s64 = -2092826624;
loc_823944F8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,25664(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 25664);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r6
	cr6.compare<uint32_t>(r31.u32, ctx.r6.u32, xer);
	// bne cr6,0x823944f8
	if (!cr6.eq) goto loc_823944F8;
loc_8239453C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82394540"))) PPC_WEAK_FUNC(sub_82394540);
PPC_FUNC_IMPL(__imp__sub_82394540) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82394544"))) PPC_WEAK_FUNC(sub_82394544);
PPC_FUNC_IMPL(__imp__sub_82394544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82394548"))) PPC_WEAK_FUNC(sub_82394548);
PPC_FUNC_IMPL(__imp__sub_82394548) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823945cc
	if (cr6.eq) goto loc_823945CC;
	// lwz r11,104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// addi r30,r11,56
	r30.s64 = r11.s64 + 56;
	// lwz r31,60(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x823945cc
	if (cr6.eq) goto loc_823945CC;
	// lis r28,-31934
	r28.s64 = -2092826624;
loc_82394588:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,25660(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 25660);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r6
	cr6.compare<uint32_t>(r31.u32, ctx.r6.u32, xer);
	// bne cr6,0x82394588
	if (!cr6.eq) goto loc_82394588;
loc_823945CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_823945D0"))) PPC_WEAK_FUNC(sub_823945D0);
PPC_FUNC_IMPL(__imp__sub_823945D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_823945D4"))) PPC_WEAK_FUNC(sub_823945D4);
PPC_FUNC_IMPL(__imp__sub_823945D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823945D8"))) PPC_WEAK_FUNC(sub_823945D8);
PPC_FUNC_IMPL(__imp__sub_823945D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82394618
	if (cr6.eq) goto loc_82394618;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_82394600:
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// beq cr6,0x82394638
	if (cr6.eq) goto loc_82394638;
	// addi r9,r9,96
	ctx.r9.s64 = ctx.r9.s64 + 96;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x82394600
	if (!cr6.eq) goto loc_82394600;
loc_82394618:
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lbz r10,72(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 72);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bne cr6,0x8239464c
	if (!cr6.eq) goto loc_8239464C;
	// li r11,0
	r11.s64 = 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82394638:
	// lwz r11,64(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_8239464C:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
}

__attribute__((alias("__imp__sub_82394664"))) PPC_WEAK_FUNC(sub_82394664);
PPC_FUNC_IMPL(__imp__sub_82394664) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82394668"))) PPC_WEAK_FUNC(sub_82394668);
PPC_FUNC_IMPL(__imp__sub_82394668) {
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
	// lwz r31,8(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// ble cr6,0x823946b8
	if (!cr6.gt) goto loc_823946B8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823946b8
	if (cr6.eq) goto loc_823946B8;
	// addi r4,r11,20
	ctx.r4.s64 = r11.s64 + 20;
	// bl 0x823945d8
	sub_823945D8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823946b8
	if (!cr6.eq) goto loc_823946B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_823946B8:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x823946ec
	if (!cr6.gt) goto loc_823946EC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823946ec
	if (cr6.eq) goto loc_823946EC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,20
	ctx.r4.s64 = r11.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823945d8
	sub_823945D8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823946f0
	if (cr6.eq) goto loc_823946F0;
loc_823946EC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823946F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_823946F4"))) PPC_WEAK_FUNC(sub_823946F4);
PPC_FUNC_IMPL(__imp__sub_823946F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_823946F8"))) PPC_WEAK_FUNC(sub_823946F8);
PPC_FUNC_IMPL(__imp__sub_823946F8) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x82394744
	if (cr6.eq) goto loc_82394744;
	// lbz r11,4(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82394740
	if (cr6.eq) goto loc_82394740;
	// bl 0x82394548
	sub_82394548(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823944b8
	sub_823944B8(ctx, base);
	// b 0x82394744
	goto loc_82394744;
loc_82394740:
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
loc_82394744:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82394758"))) PPC_WEAK_FUNC(sub_82394758);
PPC_FUNC_IMPL(__imp__sub_82394758) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239475C"))) PPC_WEAK_FUNC(sub_8239475C);
PPC_FUNC_IMPL(__imp__sub_8239475C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82394760"))) PPC_WEAK_FUNC(sub_82394760);
PPC_FUNC_IMPL(__imp__sub_82394760) {
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
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x823947ac
	if (cr6.eq) goto loc_823947AC;
	// lbz r11,4(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823947a8
	if (cr6.eq) goto loc_823947A8;
	// bl 0x82394548
	sub_82394548(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823944b8
	sub_823944B8(ctx, base);
	// b 0x823947ac
	goto loc_823947AC;
loc_823947A8:
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
loc_823947AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823947C0"))) PPC_WEAK_FUNC(sub_823947C0);
PPC_FUNC_IMPL(__imp__sub_823947C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823947C4"))) PPC_WEAK_FUNC(sub_823947C4);
PPC_FUNC_IMPL(__imp__sub_823947C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823947C8"))) PPC_WEAK_FUNC(sub_823947C8);
PPC_FUNC_IMPL(__imp__sub_823947C8) {
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
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x82394814
	if (cr6.eq) goto loc_82394814;
	// lbz r11,4(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82394810
	if (cr6.eq) goto loc_82394810;
	// bl 0x82394548
	sub_82394548(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823944b8
	sub_823944B8(ctx, base);
	// b 0x82394814
	goto loc_82394814;
loc_82394810:
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
loc_82394814:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82394828"))) PPC_WEAK_FUNC(sub_82394828);
PPC_FUNC_IMPL(__imp__sub_82394828) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239482C"))) PPC_WEAK_FUNC(sub_8239482C);
PPC_FUNC_IMPL(__imp__sub_8239482C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82394830"))) PPC_WEAK_FUNC(sub_82394830);
PPC_FUNC_IMPL(__imp__sub_82394830) {
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
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r30.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823948ac
	if (cr6.eq) goto loc_823948AC;
	// addi r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 + 28;
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// bl 0x82394aa0
	sub_82394AA0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// bl 0x82394b08
	sub_82394B08(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// lwz r3,44(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// bl 0x82394b70
	sub_82394B70(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r3,44(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// bl 0x82394bd8
	sub_82394BD8(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r31,140
	ctx.r4.s64 = r31.s64 + 140;
	// lwz r3,44(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// bl 0x82394c40
	sub_82394C40(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_823948AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823948C0"))) PPC_WEAK_FUNC(sub_823948C0);
PPC_FUNC_IMPL(__imp__sub_823948C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823948C4"))) PPC_WEAK_FUNC(sub_823948C4);
PPC_FUNC_IMPL(__imp__sub_823948C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823948C8"))) PPC_WEAK_FUNC(sub_823948C8);
PPC_FUNC_IMPL(__imp__sub_823948C8) {
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
	// li r11,1
	r11.s64 = 1;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// beq cr6,0x823949bc
	if (cr6.eq) goto loc_823949BC;
	// lis r11,-32146
	r11.s64 = -2106720256;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,44(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r10,r11,27048
	ctx.r10.s64 = r11.s64 + 27048;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
	// bl 0x82394ca8
	sub_82394CA8(ctx, base);
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r8,r9,27064
	ctx.r8.s64 = ctx.r9.s64 + 27064;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// lwz r3,44(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// bl 0x82394d20
	sub_82394D20(ctx, base);
	// lis r5,-32179
	ctx.r5.s64 = -2108882944;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r4,r5,-20920
	ctx.r4.s64 = ctx.r5.s64 + -20920;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// bl 0x82394d98
	sub_82394D98(ctx, base);
	// lis r11,-32196
	r11.s64 = -2109997056;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r10,r11,21776
	ctx.r10.s64 = r11.s64 + 21776;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r3,44(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// bl 0x82394e10
	sub_82394E10(ctx, base);
	// lis r8,-32196
	ctx.r8.s64 = -2109997056;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r7,r8,21792
	ctx.r7.s64 = ctx.r8.s64 + 21792;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r31,140
	ctx.r4.s64 = r31.s64 + 140;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// bl 0x82394e88
	sub_82394E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823944b8
	sub_823944B8(ctx, base);
loc_823949BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823949CC"))) PPC_WEAK_FUNC(sub_823949CC);
PPC_FUNC_IMPL(__imp__sub_823949CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823949D0"))) PPC_WEAK_FUNC(sub_823949D0);
PPC_FUNC_IMPL(__imp__sub_823949D0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r3,140
	ctx.r3.s64 = ctx.r3.s64 + 140;
	// addi r10,r11,4632
	ctx.r10.s64 = r11.s64 + 4632;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82394a38
	if (cr6.eq) goto loc_82394A38;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82394A38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82394A4C"))) PPC_WEAK_FUNC(sub_82394A4C);
PPC_FUNC_IMPL(__imp__sub_82394A4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82394A50"))) PPC_WEAK_FUNC(sub_82394A50);
PPC_FUNC_IMPL(__imp__sub_82394A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r3,48
	r11.s64 = ctx.r3.s64 + 48;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mulli r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 * 60;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// beq cr6,0x82394a98
	if (cr6.eq) goto loc_82394A98;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mulli r11,r9,60
	r11.s64 = ctx.r9.s64 * 60;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_82394A80:
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82394a80
	if (!cr6.eq) goto loc_82394A80;
loc_82394A98:
	// li r3,0
	ctx.r3.s64 = 0;
}

