#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8273B980"))) PPC_WEAK_FUNC(sub_8273B980);
PPC_FUNC_IMPL(__imp__sub_8273B980) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273afb8
	sub_8273AFB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273B984"))) PPC_WEAK_FUNC(sub_8273B984);
PPC_FUNC_IMPL(__imp__sub_8273B984) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273b368
	sub_8273B368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273B988"))) PPC_WEAK_FUNC(sub_8273B988);
PPC_FUNC_IMPL(__imp__sub_8273B988) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273b068
	sub_8273B068(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273B98C"))) PPC_WEAK_FUNC(sub_8273B98C);
PPC_FUNC_IMPL(__imp__sub_8273B98C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273b0d8
	sub_8273B0D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273B990"))) PPC_WEAK_FUNC(sub_8273B990);
PPC_FUNC_IMPL(__imp__sub_8273B990) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273b298
	sub_8273B298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273B994"))) PPC_WEAK_FUNC(sub_8273B994);
PPC_FUNC_IMPL(__imp__sub_8273B994) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273b680
	sub_8273B680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273B998"))) PPC_WEAK_FUNC(sub_8273B998);
PPC_FUNC_IMPL(__imp__sub_8273B998) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273b4b0
	sub_8273B4B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273B99C"))) PPC_WEAK_FUNC(sub_8273B99C);
PPC_FUNC_IMPL(__imp__sub_8273B99C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273b7c0
	sub_8273B7C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273B9A0"))) PPC_WEAK_FUNC(sub_8273B9A0);
PPC_FUNC_IMPL(__imp__sub_8273B9A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273B9A8"))) PPC_WEAK_FUNC(sub_8273B9A8);
PPC_FUNC_IMPL(__imp__sub_8273B9A8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x82737a78
	sub_82737A78(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// addi r10,r11,-31668
	ctx.r10.s64 = r11.s64 + -31668;
	// li r5,1060
	ctx.r5.s64 = 1060;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r10,r31,1124
	ctx.r10.s64 = r31.s64 + 1124;
	// stw r11,1124(r31)
	PPC_STORE_U32(r31.u32 + 1124, r11.u32);
	// addi r10,r31,1132
	ctx.r10.s64 = r31.s64 + 1132;
	// stw r11,1128(r31)
	PPC_STORE_U32(r31.u32 + 1128, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r9,1128(r31)
	PPC_STORE_U32(r31.u32 + 1128, ctx.r9.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r8,1124(r31)
	PPC_STORE_U32(r31.u32 + 1124, ctx.r8.u32);
	// stw r11,1132(r31)
	PPC_STORE_U32(r31.u32 + 1132, r11.u32);
	// stw r11,1136(r31)
	PPC_STORE_U32(r31.u32 + 1136, r11.u32);
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r7,1136(r31)
	PPC_STORE_U32(r31.u32 + 1136, ctx.r7.u32);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r6,1132(r31)
	PPC_STORE_U32(r31.u32 + 1132, ctx.r6.u32);
	// stw r27,1140(r31)
	PPC_STORE_U32(r31.u32 + 1140, r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8273BA30"))) PPC_WEAK_FUNC(sub_8273BA30);
PPC_FUNC_IMPL(__imp__sub_8273BA30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8273BA34"))) PPC_WEAK_FUNC(sub_8273BA34);
PPC_FUNC_IMPL(__imp__sub_8273BA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273BA38"))) PPC_WEAK_FUNC(sub_8273BA38);
PPC_FUNC_IMPL(__imp__sub_8273BA38) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-31668
	ctx.r10.s64 = r11.s64 + -31668;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82737a48
	sub_82737A48(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8273ba7c
	if (cr6.eq) goto loc_8273BA7C;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8273BA7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273BA90"))) PPC_WEAK_FUNC(sub_8273BA90);
PPC_FUNC_IMPL(__imp__sub_8273BA90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273BA94"))) PPC_WEAK_FUNC(sub_8273BA94);
PPC_FUNC_IMPL(__imp__sub_8273BA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273BA98"))) PPC_WEAK_FUNC(sub_8273BA98);
PPC_FUNC_IMPL(__imp__sub_8273BA98) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-31504
	ctx.r10.s64 = r11.s64 + -31504;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82737a48
	sub_82737A48(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8273badc
	if (cr6.eq) goto loc_8273BADC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8273BADC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273BAF0"))) PPC_WEAK_FUNC(sub_8273BAF0);
PPC_FUNC_IMPL(__imp__sub_8273BAF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273BAF4"))) PPC_WEAK_FUNC(sub_8273BAF4);
PPC_FUNC_IMPL(__imp__sub_8273BAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273BAF8"))) PPC_WEAK_FUNC(sub_8273BAF8);
PPC_FUNC_IMPL(__imp__sub_8273BAF8) {
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
	// lwz r3,160(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r10,r11,-31488
	ctx.r10.s64 = r11.s64 + -31488;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82e83e40
	sub_82E83E40(ctx, base);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r7,r9,-31504
	ctx.r7.s64 = ctx.r9.s64 + -31504;
	// stw r8,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// bl 0x82737a48
	sub_82737A48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273BB4C"))) PPC_WEAK_FUNC(sub_8273BB4C);
PPC_FUNC_IMPL(__imp__sub_8273BB4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273BB50"))) PPC_WEAK_FUNC(sub_8273BB50);
PPC_FUNC_IMPL(__imp__sub_8273BB50) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// bl 0x82bb92b0
	sub_82BB92B0(ctx, base);
	// li r10,-5
	ctx.r10.s64 = -5;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r10,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// stw r9,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273BB94"))) PPC_WEAK_FUNC(sub_8273BB94);
PPC_FUNC_IMPL(__imp__sub_8273BB94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273BB98"))) PPC_WEAK_FUNC(sub_8273BB98);
PPC_FUNC_IMPL(__imp__sub_8273BB98) {
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
	// lwz r4,68(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r30,3
	r30.s64 = 3;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// bl 0x82737210
	sub_82737210(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8273bc24
	if (cr6.eq) goto loc_8273BC24;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x827371d8
	sub_827371D8(ctx, base);
	// stw r3,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8273bc18
	if (cr6.eq) goto loc_8273BC18;
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// bl 0x82605128
	sub_82605128(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x8273bc08
	if (!cr6.eq) goto loc_8273BC08;
	// li r11,2
	r11.s64 = 2;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// b 0x8273bc28
	goto loc_8273BC28;
loc_8273BC08:
	// li r11,1
	r11.s64 = 1;
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// stb r11,76(r31)
	PPC_STORE_U8(r31.u32 + 76, r11.u8);
	// b 0x8273bc28
	goto loc_8273BC28;
loc_8273BC18:
	// li r11,1
	r11.s64 = 1;
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// stb r11,76(r31)
	PPC_STORE_U8(r31.u32 + 76, r11.u8);
loc_8273BC24:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8273BC28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273BC3C"))) PPC_WEAK_FUNC(sub_8273BC3C);
PPC_FUNC_IMPL(__imp__sub_8273BC3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273BC40"))) PPC_WEAK_FUNC(sub_8273BC40);
PPC_FUNC_IMPL(__imp__sub_8273BC40) {
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
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,120
	r30.s64 = ctx.r3.s64 + 120;
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(r11.u32, 997, xer);
	// beq cr6,0x8273bcb0
	if (cr6.eq) goto loc_8273BCB0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826068b8
	sub_826068B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// blt cr6,0x8273bc8c
	if (cr6.lt) goto loc_8273BC8C;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// b 0x8273bca0
	goto loc_8273BCA0;
loc_8273BC8C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stb r10,76(r31)
	PPC_STORE_U8(r31.u32 + 76, ctx.r10.u8);
	// stw r9,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r9.u32);
loc_8273BCA0:
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
	// std r11,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r11.u64);
	// std r11,16(r30)
	PPC_STORE_U64(r30.u32 + 16, r11.u64);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
loc_8273BCB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273BCC8"))) PPC_WEAK_FUNC(sub_8273BCC8);
PPC_FUNC_IMPL(__imp__sub_8273BCC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273BCCC"))) PPC_WEAK_FUNC(sub_8273BCCC);
PPC_FUNC_IMPL(__imp__sub_8273BCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273BCD0"))) PPC_WEAK_FUNC(sub_8273BCD0);
PPC_FUNC_IMPL(__imp__sub_8273BCD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, r11.u32);
	// addi r7,r3,116
	ctx.r7.s64 = ctx.r3.s64 + 116;
	// addi r8,r3,120
	ctx.r8.s64 = ctx.r3.s64 + 120;
	// li r10,512
	ctx.r10.s64 = 512;
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r6,152(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 152);
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lbz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 76);
	// subfic r5,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r9.s64;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 & ctx.r10.u64;
	// bl 0x82606078
	sub_82606078(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8273bd48
	if (cr6.eq) goto loc_8273BD48;
	// li r11,-1
	r11.s64 = -1;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8273BD48:
	// li r11,4
	r11.s64 = 4;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273BD60"))) PPC_WEAK_FUNC(sub_8273BD60);
PPC_FUNC_IMPL(__imp__sub_8273BD60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273BD64"))) PPC_WEAK_FUNC(sub_8273BD64);
PPC_FUNC_IMPL(__imp__sub_8273BD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273BD68"))) PPC_WEAK_FUNC(sub_8273BD68);
PPC_FUNC_IMPL(__imp__sub_8273BD68) {
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
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r3,120
	r31.s64 = ctx.r3.s64 + 120;
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(r11.u32, 997, xer);
	// beq cr6,0x8273bddc
	if (cr6.eq) goto loc_8273BDDC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826068b8
	sub_826068B8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8273bdac
	if (cr6.lt) goto loc_8273BDAC;
	// cmpwi cr6,r3,1223
	cr6.compare<int32_t>(ctx.r3.s32, 1223, xer);
	// bne cr6,0x8273bdc0
	if (!cr6.eq) goto loc_8273BDC0;
loc_8273BDAC:
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r10,112(r30)
	PPC_STORE_U32(r30.u32 + 112, ctx.r10.u32);
	// stw r9,108(r30)
	PPC_STORE_U32(r30.u32 + 108, ctx.r9.u32);
	// b 0x8273bdcc
	goto loc_8273BDCC;
loc_8273BDC0:
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,112(r30)
	PPC_STORE_U32(r30.u32 + 112, r11.u32);
	// stw r10,108(r30)
	PPC_STORE_U32(r30.u32 + 108, ctx.r10.u32);
loc_8273BDCC:
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_8273BDDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273BDF4"))) PPC_WEAK_FUNC(sub_8273BDF4);
PPC_FUNC_IMPL(__imp__sub_8273BDF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273BDF8"))) PPC_WEAK_FUNC(sub_8273BDF8);
PPC_FUNC_IMPL(__imp__sub_8273BDF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273BE00"))) PPC_WEAK_FUNC(sub_8273BE00);
PPC_FUNC_IMPL(__imp__sub_8273BE00) {
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
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x8273be44
	if (cr6.lt) goto loc_8273BE44;
	// bne cr6,0x8273be74
	if (!cr6.eq) goto loc_8273BE74;
	// li r11,1
	r11.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, r11.u8);
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8273BE44:
	// li r11,0
	r11.s64 = 0;
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// li r10,7
	ctx.r10.s64 = 7;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x82737860
	sub_82737860(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x82737908
	sub_82737908(ctx, base);
loc_8273BE74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273BE84"))) PPC_WEAK_FUNC(sub_8273BE84);
PPC_FUNC_IMPL(__imp__sub_8273BE84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273BE88"))) PPC_WEAK_FUNC(sub_8273BE88);
PPC_FUNC_IMPL(__imp__sub_8273BE88) {
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
	// bl 0x8273c2c8
	sub_8273C2C8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,-31488
	ctx.r10.s64 = r11.s64 + -31488;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r30.u32);
	// std r30,120(r31)
	PPC_STORE_U64(r31.u32 + 120, r30.u64);
	// std r30,128(r31)
	PPC_STORE_U64(r31.u32 + 128, r30.u64);
	// std r30,136(r31)
	PPC_STORE_U64(r31.u32 + 136, r30.u64);
	// stw r30,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r30.u32);
	// std r30,152(r31)
	PPC_STORE_U64(r31.u32 + 152, r30.u64);
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8273bef0
	if (cr6.eq) goto loc_8273BEF0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827379f0
	sub_827379F0(ctx, base);
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,152(r31)
	PPC_STORE_U64(r31.u32 + 152, r11.u64);
loc_8273BEF0:
	// li r11,-1
	r11.s64 = -1;
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r11.u32);
	// bl 0x826051f8
	sub_826051F8(ctx, base);
	// stw r3,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r3.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273BF2C"))) PPC_WEAK_FUNC(sub_8273BF2C);
PPC_FUNC_IMPL(__imp__sub_8273BF2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273BF30"))) PPC_WEAK_FUNC(sub_8273BF30);
PPC_FUNC_IMPL(__imp__sub_8273BF30) {
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
	// lwz r11,164(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8273bfec
	if (!cr6.eq) goto loc_8273BFEC;
	// lwz r11,168(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8273bfbc
	if (cr6.eq) goto loc_8273BFBC;
	// lwz r11,116(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8273bfbc
	if (cr6.eq) goto loc_8273BFBC;
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8273bfbc
	if (!cr6.eq) goto loc_8273BFBC;
	// li r11,6
	r11.s64 = 6;
	// lwz r9,104(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r8,r10,-16896
	ctx.r8.s64 = ctx.r10.s64 + -16896;
	// addi r6,r31,64
	ctx.r6.s64 = r31.s64 + 64;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8273bfec
	goto loc_8273BFEC;
loc_8273BFBC:
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8273bfe4
	if (cr6.eq) goto loc_8273BFE4;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x82737860
	sub_82737860(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x82737908
	sub_82737908(ctx, base);
loc_8273BFE4:
	// li r11,7
	r11.s64 = 7;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
loc_8273BFEC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273C000"))) PPC_WEAK_FUNC(sub_8273C000);
PPC_FUNC_IMPL(__imp__sub_8273C000) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C004"))) PPC_WEAK_FUNC(sub_8273C004);
PPC_FUNC_IMPL(__imp__sub_8273C004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C008"))) PPC_WEAK_FUNC(sub_8273C008);
PPC_FUNC_IMPL(__imp__sub_8273C008) {
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
	// li r31,0
	r31.s64 = 0;
	// li r11,16
	r11.s64 = 16;
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r9,-31472
	ctx.r6.s64 = ctx.r9.s64 + -31472;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8273c098
	if (cr6.eq) goto loc_8273C098;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8273be88
	sub_8273BE88(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9460
	return;
loc_8273C098:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8273C0A0"))) PPC_WEAK_FUNC(sub_8273C0A0);
PPC_FUNC_IMPL(__imp__sub_8273C0A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8273C0A4"))) PPC_WEAK_FUNC(sub_8273C0A4);
PPC_FUNC_IMPL(__imp__sub_8273C0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C0A8"))) PPC_WEAK_FUNC(sub_8273C0A8);
PPC_FUNC_IMPL(__imp__sub_8273C0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,96(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8273c0d0
	if (!cr6.eq) goto loc_8273C0D0;
	// lwz r11,100(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8273c0d4
	if (cr6.eq) goto loc_8273C0D4;
loc_8273C0D0:
	// li r11,0
	r11.s64 = 0;
loc_8273C0D4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8273c104
	if (!cr6.eq) goto loc_8273C104;
	// lwz r11,100(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r6,r3,64
	ctx.r6.s64 = ctx.r3.s64 + 64;
	// lwz r8,104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r7,60(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r5,116(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r4,112(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8273C104:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8273C114"))) PPC_WEAK_FUNC(sub_8273C114);
PPC_FUNC_IMPL(__imp__sub_8273C114) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C118"))) PPC_WEAK_FUNC(sub_8273C118);
PPC_FUNC_IMPL(__imp__sub_8273C118) {
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
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,160(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// bl 0x8314ce1c
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8273c18c
	if (cr6.eq) goto loc_8273C18C;
	// li r30,1
	r30.s64 = 1;
loc_8273C150:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// bne cr6,0x8273c170
	if (!cr6.eq) goto loc_8273C170;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r11.u32);
	// beq cr6,0x8273c170
	if (cr6.eq) goto loc_8273C170;
	// stw r30,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r30.u32);
loc_8273C170:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x8314ce1c
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8273c150
	if (!cr6.eq) goto loc_8273C150;
loc_8273C18C:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bgt cr6,0x8273c22c
	if (cr6.gt) goto loc_8273C22C;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8273c1dc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8273C1DC;
	// bdzf 4*cr6+eq,0x8273c1e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8273C1E8;
	// bdzf 4*cr6+eq,0x8273c1f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8273C1F4;
	// bdzf 4*cr6+eq,0x8273c200
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8273C200;
	// bdzf 4*cr6+eq,0x8273c20c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8273C20C;
	// bdzf 4*cr6+eq,0x8273c218
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8273C218;
	// bne cr6,0x8273c220
	if (!cr6.eq) goto loc_8273C220;
	// lbz r11,76(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 76);
	// li r3,1
	ctx.r3.s64 = 1;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r8.u32);
	// b 0x8273c230
	goto loc_8273C230;
loc_8273C1DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8273bb98
	sub_8273BB98(ctx, base);
	// b 0x8273c230
	goto loc_8273C230;
loc_8273C1E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8273bc40
	sub_8273BC40(ctx, base);
	// b 0x8273c230
	goto loc_8273C230;
loc_8273C1F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8273bcd0
	sub_8273BCD0(ctx, base);
	// b 0x8273c230
	goto loc_8273C230;
loc_8273C200:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8273bd68
	sub_8273BD68(ctx, base);
	// b 0x8273c230
	goto loc_8273C230;
loc_8273C20C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8273bf30
	sub_8273BF30(ctx, base);
	// b 0x8273c230
	goto loc_8273C230;
loc_8273C218:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8273c230
	goto loc_8273C230;
loc_8273C220:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8273c0a8
	sub_8273C0A8(ctx, base);
	// b 0x8273c230
	goto loc_8273C230;
loc_8273C22C:
	// li r3,2
	ctx.r3.s64 = 2;
loc_8273C230:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273C244"))) PPC_WEAK_FUNC(sub_8273C244);
PPC_FUNC_IMPL(__imp__sub_8273C244) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C248"))) PPC_WEAK_FUNC(sub_8273C248);
PPC_FUNC_IMPL(__imp__sub_8273C248) {
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
	// lwz r3,160(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,-31488
	ctx.r10.s64 = r11.s64 + -31488;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82e83e40
	sub_82E83E40(ctx, base);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r7,r9,-31504
	ctx.r7.s64 = ctx.r9.s64 + -31504;
	// stw r8,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// bl 0x82737a48
	sub_82737A48(ctx, base);
	// clrlwi r6,r30,31
	ctx.r6.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8273c2ac
	if (cr6.eq) goto loc_8273C2AC;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8273C2AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273C2C0"))) PPC_WEAK_FUNC(sub_8273C2C0);
PPC_FUNC_IMPL(__imp__sub_8273C2C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C2C4"))) PPC_WEAK_FUNC(sub_8273C2C4);
PPC_FUNC_IMPL(__imp__sub_8273C2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C2C8"))) PPC_WEAK_FUNC(sub_8273C2C8);
PPC_FUNC_IMPL(__imp__sub_8273C2C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x82737a78
	sub_82737A78(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r8,r11,-31504
	ctx.r8.s64 = r11.s64 + -31504;
	// addi r10,r31,60
	ctx.r10.s64 = r31.s64 + 60;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r11,r28,-4
	r11.s64 = r28.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8273C308:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8273c308
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8273C308;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r31,88
	ctx.r10.s64 = r31.s64 + 88;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r9,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r9.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r8,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r8.u32);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r7,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r7.u32);
	// stw r27,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8273C35C"))) PPC_WEAK_FUNC(sub_8273C35C);
PPC_FUNC_IMPL(__imp__sub_8273C35C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8273C360"))) PPC_WEAK_FUNC(sub_8273C360);
PPC_FUNC_IMPL(__imp__sub_8273C360) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-31336
	ctx.r10.s64 = r11.s64 + -31336;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82737a48
	sub_82737A48(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8273c3a4
	if (cr6.eq) goto loc_8273C3A4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8273C3A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273C3B8"))) PPC_WEAK_FUNC(sub_8273C3B8);
PPC_FUNC_IMPL(__imp__sub_8273C3B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C3BC"))) PPC_WEAK_FUNC(sub_8273C3BC);
PPC_FUNC_IMPL(__imp__sub_8273C3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C3C0"))) PPC_WEAK_FUNC(sub_8273C3C0);
PPC_FUNC_IMPL(__imp__sub_8273C3C0) {
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
	// lwz r3,1520(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1520);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r10,r11,-31320
	ctx.r10.s64 = r11.s64 + -31320;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82605300
	sub_82605300(ctx, base);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-31336
	ctx.r8.s64 = ctx.r9.s64 + -31336;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x82737a48
	sub_82737A48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273C40C"))) PPC_WEAK_FUNC(sub_8273C40C);
PPC_FUNC_IMPL(__imp__sub_8273C40C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C410"))) PPC_WEAK_FUNC(sub_8273C410);
PPC_FUNC_IMPL(__imp__sub_8273C410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,14
	r11.s64 = 14;
	// stw r11,1156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1156, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C41C"))) PPC_WEAK_FUNC(sub_8273C41C);
PPC_FUNC_IMPL(__imp__sub_8273C41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C420"))) PPC_WEAK_FUNC(sub_8273C420);
PPC_FUNC_IMPL(__imp__sub_8273C420) {
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
	// lwz r4,68(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x82737200
	sub_82737200(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,15
	r11.s64 = 15;
	// bne cr6,0x8273c458
	if (!cr6.eq) goto loc_8273C458;
	// li r11,2
	r11.s64 = 2;
loc_8273C458:
	// stw r11,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273C46C"))) PPC_WEAK_FUNC(sub_8273C46C);
PPC_FUNC_IMPL(__imp__sub_8273C46C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C470"))) PPC_WEAK_FUNC(sub_8273C470);
PPC_FUNC_IMPL(__imp__sub_8273C470) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C478"))) PPC_WEAK_FUNC(sub_8273C478);
PPC_FUNC_IMPL(__imp__sub_8273C478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,-5
	cr6.compare<int32_t>(ctx.r4.s32, -5, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8273c498
	if (cr6.eq) goto loc_8273C498;
	// li r11,6
	r11.s64 = 6;
	// stw r5,1164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1164, ctx.r5.u32);
	// stw r11,1156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1156, r11.u32);
	// blr 
	return;
loc_8273C498:
	// li r11,4
	r11.s64 = 4;
	// stw r11,1156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1156, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C4A4"))) PPC_WEAK_FUNC(sub_8273C4A4);
PPC_FUNC_IMPL(__imp__sub_8273C4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C4A8"))) PPC_WEAK_FUNC(sub_8273C4A8);
PPC_FUNC_IMPL(__imp__sub_8273C4A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C4B0"))) PPC_WEAK_FUNC(sub_8273C4B0);
PPC_FUNC_IMPL(__imp__sub_8273C4B0) {
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
	// stw r4,1196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1196, ctx.r4.u32);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,1200
	ctx.r3.s64 = ctx.r3.s64 + 1200;
	// li r5,320
	ctx.r5.s64 = 320;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// stw r30,1524(r31)
	PPC_STORE_U32(r31.u32 + 1524, r30.u32);
	// lwz r3,1520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1520);
	// bl 0x82605aa8
	sub_82605AA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273C504"))) PPC_WEAK_FUNC(sub_8273C504);
PPC_FUNC_IMPL(__imp__sub_8273C504) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C508"))) PPC_WEAK_FUNC(sub_8273C508);
PPC_FUNC_IMPL(__imp__sub_8273C508) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,1200
	ctx.r3.s64 = ctx.r3.s64 + 1200;
	// li r5,320
	ctx.r5.s64 = 320;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// stw r29,1524(r31)
	PPC_STORE_U32(r31.u32 + 1524, r29.u32);
	// stw r30,1528(r31)
	PPC_STORE_U32(r31.u32 + 1528, r30.u32);
	// lwz r3,1520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1520);
	// bl 0x82605aa8
	sub_82605AA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8273C544"))) PPC_WEAK_FUNC(sub_8273C544);
PPC_FUNC_IMPL(__imp__sub_8273C544) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8273C548"))) PPC_WEAK_FUNC(sub_8273C548);
PPC_FUNC_IMPL(__imp__sub_8273C548) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,1168
	ctx.r4.s64 = ctx.r3.s64 + 1168;
	// addi r3,r11,-32212
	ctx.r3.s64 = r11.s64 + -32212;
	// bl 0x82605100
	sub_82605100(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8273c59c
	if (cr6.eq) goto loc_8273C59C;
	// li r11,-1
	r11.s64 = -1;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,1160(r31)
	PPC_STORE_U32(r31.u32 + 1160, r11.u32);
	// stw r10,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8273C59C:
	// li r11,11
	r11.s64 = 11;
	// stw r11,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273C5B4"))) PPC_WEAK_FUNC(sub_8273C5B4);
PPC_FUNC_IMPL(__imp__sub_8273C5B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C5B8"))) PPC_WEAK_FUNC(sub_8273C5B8);
PPC_FUNC_IMPL(__imp__sub_8273C5B8) {
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
	// lwz r11,1168(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1168);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r3,1168
	r31.s64 = ctx.r3.s64 + 1168;
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(r11.u32, 997, xer);
	// beq cr6,0x8273c624
	if (cr6.eq) goto loc_8273C624;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826068b8
	sub_826068B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8273c604
	if (!cr6.lt) goto loc_8273C604;
	// li r11,-1
	r11.s64 = -1;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,1160(r30)
	PPC_STORE_U32(r30.u32 + 1160, r11.u32);
	// stw r10,1156(r30)
	PPC_STORE_U32(r30.u32 + 1156, ctx.r10.u32);
	// b 0x8273c60c
	goto loc_8273C60C;
loc_8273C604:
	// li r11,15
	r11.s64 = 15;
	// stw r11,1156(r30)
	PPC_STORE_U32(r30.u32 + 1156, r11.u32);
loc_8273C60C:
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8273C61C:
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// bdnz 0x8273c61c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8273C61C;
loc_8273C624:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273C63C"))) PPC_WEAK_FUNC(sub_8273C63C);
PPC_FUNC_IMPL(__imp__sub_8273C63C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C640"))) PPC_WEAK_FUNC(sub_8273C640);
PPC_FUNC_IMPL(__imp__sub_8273C640) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C648"))) PPC_WEAK_FUNC(sub_8273C648);
PPC_FUNC_IMPL(__imp__sub_8273C648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x8273c668
	if (cr6.lt) goto loc_8273C668;
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,1
	r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,1120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1120, r11.u8);
	// stw r10,1156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1156, ctx.r10.u32);
	// blr 
	return;
loc_8273C668:
	// li r11,0
	r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,1160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1160, r11.u32);
	// stw r10,1156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1156, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C67C"))) PPC_WEAK_FUNC(sub_8273C67C);
PPC_FUNC_IMPL(__imp__sub_8273C67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C680"))) PPC_WEAK_FUNC(sub_8273C680);
PPC_FUNC_IMPL(__imp__sub_8273C680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x8273c6a4
	if (cr6.lt) goto loc_8273C6A4;
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r10,1120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1120, ctx.r10.u8);
	// stw r9,1156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1156, ctx.r9.u32);
	// blr 
	return;
loc_8273C6A4:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,68(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// li r9,15
	ctx.r9.s64 = 15;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r10,1160(r11)
	PPC_STORE_U32(r11.u32 + 1160, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,1156(r11)
	PPC_STORE_U32(r11.u32 + 1156, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_8273C6C0"))) PPC_WEAK_FUNC(sub_8273C6C0);
PPC_FUNC_IMPL(__imp__sub_8273C6C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82737908
	sub_82737908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273C6C4"))) PPC_WEAK_FUNC(sub_8273C6C4);
PPC_FUNC_IMPL(__imp__sub_8273C6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C6C8"))) PPC_WEAK_FUNC(sub_8273C6C8);
PPC_FUNC_IMPL(__imp__sub_8273C6C8) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,308
	ctx.r5.s64 = 308;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r10.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r30,-1
	r30.s64 = -1;
	// addi r5,r31,336
	ctx.r5.s64 = r31.s64 + 336;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x828ed3c0
	sub_828ED3C0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r31,76
	ctx.r5.s64 = r31.s64 + 76;
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// lwz r8,1164(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 1164);
	// lbz r7,1121(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 1121);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,254
	ctx.r3.s64 = 254;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bne cr6,0x8273c74c
	if (!cr6.eq) goto loc_8273C74C;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
loc_8273C74C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r9,r31,1168
	ctx.r9.s64 = r31.s64 + 1168;
	// addi r4,r11,-32212
	ctx.r4.s64 = r11.s64 + -32212;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826051b8
	sub_826051B8(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// beq cr6,0x8273c788
	if (cr6.eq) goto loc_8273C788;
	// li r11,-1
	r11.s64 = -1;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,1160(r31)
	PPC_STORE_U32(r31.u32 + 1160, r11.u32);
	// stw r10,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, ctx.r10.u32);
	// b 0x8273c790
	goto loc_8273C790;
loc_8273C788:
	// li r11,7
	r11.s64 = 7;
	// stw r11,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, r11.u32);
loc_8273C790:
	// lwz r3,388(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273C7B0"))) PPC_WEAK_FUNC(sub_8273C7B0);
PPC_FUNC_IMPL(__imp__sub_8273C7B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C7B4"))) PPC_WEAK_FUNC(sub_8273C7B4);
PPC_FUNC_IMPL(__imp__sub_8273C7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C7B8"))) PPC_WEAK_FUNC(sub_8273C7B8);
PPC_FUNC_IMPL(__imp__sub_8273C7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r10,1156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1156);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-32140
	r12.s64 = -2106327040;
	// rlwinm r0,r10,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-14364
	r12.s64 = r12.s64 + -14364;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x8273C80C
		return;
	case 1:
		// ERROR: 0x8273C80C
		return;
	case 2:
		// ERROR: 0x8273C864
		return;
	case 3:
		// ERROR: 0x8273C864
		return;
	case 4:
		// ERROR: 0x8273C864
		return;
	case 5:
		// ERROR: 0x8273C864
		return;
	case 6:
		// ERROR: 0x8273C864
		return;
	case 7:
		// ERROR: 0x8273C864
		return;
	case 8:
		// ERROR: 0x8273C84C
		return;
	case 9:
		// ERROR: 0x8273C84C
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_8273C7E4"))) PPC_WEAK_FUNC(sub_8273C7E4);
PPC_FUNC_IMPL(__imp__sub_8273C7E4) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r19{};
	// lwz r19,-14324(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -14324);
	// lwz r19,-14324(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -14324);
	// lwz r19,-14236(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -14236);
	// lwz r19,-14236(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -14236);
	// lwz r19,-14236(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -14236);
	// lwz r19,-14236(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -14236);
	// lwz r19,-14236(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -14236);
	// lwz r19,-14236(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -14236);
	// lwz r19,-14260(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -14260);
	// lwz r19,-14260(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -14260);
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x8273c82c
	if (cr6.lt) goto loc_8273C82C;
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r10,1120(r11)
	PPC_STORE_U8(r11.u32 + 1120, ctx.r10.u8);
	// stw r9,1156(r11)
	PPC_STORE_U32(r11.u32 + 1156, ctx.r9.u32);
	// blr 
	return;
loc_8273C82C:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,68(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// li r9,15
	ctx.r9.s64 = 15;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r10,1160(r11)
	PPC_STORE_U32(r11.u32 + 1160, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,1156(r11)
	PPC_STORE_U32(r11.u32 + 1156, ctx.r9.u32);
	// b 0x82737908
	sub_82737908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273C84C"))) PPC_WEAK_FUNC(sub_8273C84C);
PPC_FUNC_IMPL(__imp__sub_8273C84C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// bge cr6,0x8273c814
	if (!cr6.lt) {
		// ERROR 8273C814
		return;
	}
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,1160(r11)
	PPC_STORE_U32(r11.u32 + 1160, ctx.r10.u32);
	// stw r9,1156(r11)
	PPC_STORE_U32(r11.u32 + 1156, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C868"))) PPC_WEAK_FUNC(sub_8273C868);
PPC_FUNC_IMPL(__imp__sub_8273C868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,1132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1132);
	// lwz r3,1128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1128);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8273C878"))) PPC_WEAK_FUNC(sub_8273C878);
PPC_FUNC_IMPL(__imp__sub_8273C878) {
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
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8273c8c0
	if (!cr6.eq) goto loc_8273C8C0;
	// addi r3,r3,1168
	ctx.r3.s64 = ctx.r3.s64 + 1168;
	// bl 0x82bb92b0
	sub_82BB92B0(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-32212
	ctx.r3.s64 = r11.s64 + -32212;
	// bl 0x82605100
	sub_82605100(ctx, base);
	// li r10,-5
	ctx.r10.s64 = -5;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,1160(r31)
	PPC_STORE_U32(r31.u32 + 1160, ctx.r10.u32);
	// stw r9,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, ctx.r9.u32);
loc_8273C8C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273C8D4"))) PPC_WEAK_FUNC(sub_8273C8D4);
PPC_FUNC_IMPL(__imp__sub_8273C8D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C8D8"))) PPC_WEAK_FUNC(sub_8273C8D8);
PPC_FUNC_IMPL(__imp__sub_8273C8D8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8273d168
	sub_8273D168(ctx, base);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r8,-31320
	ctx.r7.s64 = ctx.r8.s64 + -31320;
	// stw r11,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, r11.u32);
	// stw r10,1196(r31)
	PPC_STORE_U32(r31.u32 + 1196, ctx.r10.u32);
	// stw r10,1520(r31)
	PPC_STORE_U32(r31.u32 + 1520, ctx.r10.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r11,1160(r31)
	PPC_STORE_U32(r31.u32 + 1160, r11.u32);
	// addi r10,r31,1164
	ctx.r10.s64 = r31.s64 + 1164;
	// stw r11,1524(r31)
	PPC_STORE_U32(r31.u32 + 1524, r11.u32);
	// stw r11,1528(r31)
	PPC_STORE_U32(r31.u32 + 1528, r11.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r11,1164(r31)
	PPC_STORE_U32(r31.u32 + 1164, r11.u32);
loc_8273C92C:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8273c92c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8273C92C;
	// li r5,320
	ctx.r5.s64 = 320;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1200
	ctx.r3.s64 = r31.s64 + 1200;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82605260
	sub_82605260(ctx, base);
	// stw r3,1520(r31)
	PPC_STORE_U32(r31.u32 + 1520, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8273C970"))) PPC_WEAK_FUNC(sub_8273C970);
PPC_FUNC_IMPL(__imp__sub_8273C970) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C974"))) PPC_WEAK_FUNC(sub_8273C974);
PPC_FUNC_IMPL(__imp__sub_8273C974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C978"))) PPC_WEAK_FUNC(sub_8273C978);
PPC_FUNC_IMPL(__imp__sub_8273C978) {
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
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r9,1152(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1152);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r10,1156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1156, ctx.r10.u32);
	// lis r8,-32140
	ctx.r8.s64 = -2106327040;
	// lwz r3,1128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1128);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r8,-14408
	ctx.r5.s64 = ctx.r8.s64 + -14408;
	// addi r6,r11,64
	ctx.r6.s64 = r11.s64 + 64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r10,1132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1132);
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8273C9D8"))) PPC_WEAK_FUNC(sub_8273C9D8);
PPC_FUNC_IMPL(__imp__sub_8273C9D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273C9DC"))) PPC_WEAK_FUNC(sub_8273C9DC);
PPC_FUNC_IMPL(__imp__sub_8273C9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273C9E0"))) PPC_WEAK_FUNC(sub_8273C9E0);
PPC_FUNC_IMPL(__imp__sub_8273C9E0) {
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
	// li r10,13
	ctx.r10.s64 = 13;
	// lwz r9,1152(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1152);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r10,1156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1156, ctx.r10.u32);
	// lis r8,-32140
	ctx.r8.s64 = -2106327040;
	// lwz r3,1128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1128);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r8,-14408
	ctx.r5.s64 = ctx.r8.s64 + -14408;
	// addi r6,r11,64
	ctx.r6.s64 = r11.s64 + 64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r10,1132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1132);
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8273CA40"))) PPC_WEAK_FUNC(sub_8273CA40);
PPC_FUNC_IMPL(__imp__sub_8273CA40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273CA44"))) PPC_WEAK_FUNC(sub_8273CA44);
PPC_FUNC_IMPL(__imp__sub_8273CA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273CA48"))) PPC_WEAK_FUNC(sub_8273CA48);
PPC_FUNC_IMPL(__imp__sub_8273CA48) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// li r11,16
	r11.s64 = 16;
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r9,-31304
	ctx.r6.s64 = ctx.r9.s64 + -31304;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1532
	ctx.r3.s64 = 1532;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8273cae8
	if (cr6.eq) goto loc_8273CAE8;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8273c8d8
	sub_8273C8D8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e9458
	return;
loc_8273CAE8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8273CAF0"))) PPC_WEAK_FUNC(sub_8273CAF0);
PPC_FUNC_IMPL(__imp__sub_8273CAF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8273CAF4"))) PPC_WEAK_FUNC(sub_8273CAF4);
PPC_FUNC_IMPL(__imp__sub_8273CAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273CAF8"))) PPC_WEAK_FUNC(sub_8273CAF8);
PPC_FUNC_IMPL(__imp__sub_8273CAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r3,1168
	r29.s64 = ctx.r3.s64 + 1168;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r10.u32);
	// lwz r9,1168(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1168);
	// cmplwi cr6,r9,997
	cr6.compare<uint32_t>(ctx.r9.u32, 997, xer);
	// beq cr6,0x8273ccf0
	if (cr6.eq) goto loc_8273CCF0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826068b8
	sub_826068B8(ctx, base);
	// rlwinm r11,r3,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8273cb48
	if (!cr6.eq) goto loc_8273CB48;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,15
	r11.s64 = 15;
	// stw r10,1160(r30)
	PPC_STORE_U32(r30.u32 + 1160, ctx.r10.u32);
	// b 0x8273ccd4
	goto loc_8273CCD4;
loc_8273CB48:
	// li r12,1392
	r12.s64 = 1392;
	// and r11,r3,r12
	r11.u64 = ctx.r3.u64 & r12.u64;
	// cmpwi cr6,r11,1392
	cr6.compare<int32_t>(r11.s32, 1392, xer);
	// beq cr6,0x8273ccd0
	if (cr6.eq) goto loc_8273CCD0;
	// li r12,1393
	r12.s64 = 1393;
	// and r11,r3,r12
	r11.u64 = ctx.r3.u64 & r12.u64;
	// cmpwi cr6,r11,1393
	cr6.compare<int32_t>(r11.s32, 1393, xer);
	// beq cr6,0x8273ccd0
	if (cr6.eq) goto loc_8273CCD0;
	// li r12,183
	r12.s64 = 183;
	// and r11,r3,r12
	r11.u64 = ctx.r3.u64 & r12.u64;
	// cmpwi cr6,r11,183
	cr6.compare<int32_t>(r11.s32, 183, xer);
	// bne cr6,0x8273cb8c
	if (!cr6.eq) goto loc_8273CB8C;
	// li r11,-1
	r11.s64 = -1;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,1160(r30)
	PPC_STORE_U32(r30.u32 + 1160, r11.u32);
	// stw r10,1156(r30)
	PPC_STORE_U32(r30.u32 + 1156, ctx.r10.u32);
	// b 0x8273ccd8
	goto loc_8273CCD8;
loc_8273CB8C:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8273cba8
	if (!cr6.lt) goto loc_8273CBA8;
	// li r11,-1
	r11.s64 = -1;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,1160(r30)
	PPC_STORE_U32(r30.u32 + 1160, r11.u32);
	// stw r10,1156(r30)
	PPC_STORE_U32(r30.u32 + 1156, ctx.r10.u32);
	// b 0x8273ccd8
	goto loc_8273CCD8;
loc_8273CBA8:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r6,r11,-32212
	ctx.r6.s64 = r11.s64 + -32212;
	// addi r5,r10,31856
	ctx.r5.s64 = ctx.r10.s64 + 31856;
	// addi r9,r30,856
	ctx.r9.s64 = r30.s64 + 856;
	// li r8,92
	ctx.r8.s64 = 92;
	// li r7,58
	ctx.r7.s64 = 58;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
loc_8273CBD4:
	// addi r11,r1,97
	r11.s64 = ctx.r1.s64 + 97;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8273cc88
	if (cr6.eq) goto loc_8273CC88;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,47
	cr6.compare<int32_t>(ctx.r9.s32, 47, xer);
	// bne cr6,0x8273cbf8
	if (!cr6.eq) goto loc_8273CBF8;
	// li r10,92
	ctx.r10.s64 = 92;
loc_8273CBF8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r10,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, ctx.r10.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8273cc88
	if (cr6.eq) goto loc_8273CC88;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,47
	cr6.compare<int32_t>(ctx.r10.s32, 47, xer);
	// bne cr6,0x8273cc18
	if (!cr6.eq) goto loc_8273CC18;
	// li r9,92
	ctx.r9.s64 = 92;
loc_8273CC18:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8273cc88
	if (cr6.eq) goto loc_8273CC88;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,47
	cr6.compare<int32_t>(ctx.r9.s32, 47, xer);
	// bne cr6,0x8273cc38
	if (!cr6.eq) goto loc_8273CC38;
	// li r10,92
	ctx.r10.s64 = 92;
loc_8273CC38:
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8273cc88
	if (cr6.eq) goto loc_8273CC88;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,47
	cr6.compare<int32_t>(ctx.r9.s32, 47, xer);
	// bne cr6,0x8273cc58
	if (!cr6.eq) goto loc_8273CC58;
	// li r10,92
	ctx.r10.s64 = 92;
loc_8273CC58:
	// stb r10,2(r11)
	PPC_STORE_U8(r11.u32 + 2, ctx.r10.u8);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8273cc88
	if (cr6.eq) goto loc_8273CC88;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,47
	cr6.compare<int32_t>(ctx.r9.s32, 47, xer);
	// bne cr6,0x8273cc78
	if (!cr6.eq) goto loc_8273CC78;
	// li r10,92
	ctx.r10.s64 = 92;
loc_8273CC78:
	// addi r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 5;
	// stb r10,3(r11)
	PPC_STORE_U8(r11.u32 + 3, ctx.r10.u8);
	// cmplwi cr6,r8,260
	cr6.compare<uint32_t>(ctx.r8.u32, 260, xer);
	// blt cr6,0x8273cbd4
	if (cr6.lt) goto loc_8273CBD4;
loc_8273CC88:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r31,1124(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 1124);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r10,r11,-15184
	ctx.r10.s64 = r11.s64 + -15184;
	// li r4,288
	ctx.r4.s64 = 288;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8273ccc8
	if (cr6.eq) goto loc_8273CCC8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8273d220
	sub_8273D220(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8273CCC8:
	// li r11,8
	r11.s64 = 8;
	// b 0x8273ccd4
	goto loc_8273CCD4;
loc_8273CCD0:
	// li r11,12
	r11.s64 = 12;
loc_8273CCD4:
	// stw r11,1156(r30)
	PPC_STORE_U32(r30.u32 + 1156, r11.u32);
loc_8273CCD8:
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r29,-4
	r11.s64 = r29.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8273CCE8:
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// bdnz 0x8273cce8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8273CCE8;
loc_8273CCF0:
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
}

__attribute__((alias("__imp__sub_8273CD00"))) PPC_WEAK_FUNC(sub_8273CD00);
PPC_FUNC_IMPL(__imp__sub_8273CD00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8273CD04"))) PPC_WEAK_FUNC(sub_8273CD04);
PPC_FUNC_IMPL(__imp__sub_8273CD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273CD08"))) PPC_WEAK_FUNC(sub_8273CD08);
PPC_FUNC_IMPL(__imp__sub_8273CD08) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,1520(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1520);
	// bl 0x82605590
	sub_82605590(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8273cdb4
	if (!cr6.eq) goto loc_8273CDB4;
	// lwz r11,1196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8273cdcc
	if (cr6.eq) goto loc_8273CDCC;
	// lwz r11,1136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8273cd58
	if (!cr6.eq) goto loc_8273CD58;
	// lwz r11,1140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8273cd5c
	if (cr6.eq) goto loc_8273CD5C;
loc_8273CD58:
	// li r11,0
	r11.s64 = 0;
loc_8273CD5C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8273cd84
	if (!cr6.eq) goto loc_8273CD84;
	// lwz r11,1140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1140);
	// addi r4,r31,1244
	ctx.r4.s64 = r31.s64 + 1244;
	// lwz r6,1152(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 1152);
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1136);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8273CD84:
	// lwz r3,1520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1520);
	// bl 0x82605ae8
	sub_82605AE8(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,1196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// addi r10,r11,-15096
	ctx.r10.s64 = r11.s64 + -15096;
	// lwz r3,1124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1124);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x8273d388
	sub_8273D388(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r9,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, ctx.r9.u32);
loc_8273CDB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8273CDCC:
	// lwz r11,1524(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1524);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r10,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, ctx.r10.u32);
	// bne cr6,0x8273ce04
	if (!cr6.eq) goto loc_8273CE04;
	// li r11,0
	r11.s64 = 0;
	// stw r11,1160(r31)
	PPC_STORE_U32(r31.u32 + 1160, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8273CE04:
	// li r11,-1
	r11.s64 = -1;
	// stw r11,1160(r31)
	PPC_STORE_U32(r31.u32 + 1160, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273CE1C"))) PPC_WEAK_FUNC(sub_8273CE1C);
PPC_FUNC_IMPL(__imp__sub_8273CE1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273CE20"))) PPC_WEAK_FUNC(sub_8273CE20);
PPC_FUNC_IMPL(__imp__sub_8273CE20) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,1520(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1520);
	// bl 0x82605590
	sub_82605590(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8273cee8
	if (!cr6.eq) goto loc_8273CEE8;
	// lwz r11,1528(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1528);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8273ced0
	if (cr6.eq) goto loc_8273CED0;
	// lwz r11,1136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8273ce70
	if (!cr6.eq) goto loc_8273CE70;
	// lwz r11,1140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8273ce74
	if (cr6.eq) goto loc_8273CE74;
loc_8273CE70:
	// li r11,0
	r11.s64 = 0;
loc_8273CE74:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8273ce9c
	if (!cr6.eq) goto loc_8273CE9C;
	// lwz r11,1140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1140);
	// addi r4,r31,1244
	ctx.r4.s64 = r31.s64 + 1244;
	// lwz r6,1152(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 1152);
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1136);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8273CE9C:
	// lwz r3,1520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1520);
	// bl 0x82605ae8
	sub_82605AE8(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,1196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// addi r10,r11,-15096
	ctx.r10.s64 = r11.s64 + -15096;
	// lwz r3,1124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1124);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x8273d388
	sub_8273D388(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r9,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, ctx.r9.u32);
	// b 0x8273cee8
	goto loc_8273CEE8;
loc_8273CED0:
	// lwz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1196);
	// bl 0x82605300
	sub_82605300(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r11,1196(r31)
	PPC_STORE_U32(r31.u32 + 1196, r11.u32);
	// stw r10,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, ctx.r10.u32);
loc_8273CEE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273CEFC"))) PPC_WEAK_FUNC(sub_8273CEFC);
PPC_FUNC_IMPL(__imp__sub_8273CEFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273CF00"))) PPC_WEAK_FUNC(sub_8273CF00);
PPC_FUNC_IMPL(__imp__sub_8273CF00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,1144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8273cf28
	if (!cr6.eq) goto loc_8273CF28;
	// lwz r11,1148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8273cf2c
	if (cr6.eq) goto loc_8273CF2C;
loc_8273CF28:
	// li r11,0
	r11.s64 = 0;
loc_8273CF2C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8273cf58
	if (!cr6.eq) goto loc_8273CF58;
	// lwz r11,1148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1148);
	// addi r5,r3,64
	ctx.r5.s64 = ctx.r3.s64 + 64;
	// lwz r7,1152(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1152);
	// lwz r6,60(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r4,1160(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1160);
	// lwz r3,1144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1144);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8273CF58:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8273CF68"))) PPC_WEAK_FUNC(sub_8273CF68);
PPC_FUNC_IMPL(__imp__sub_8273CF68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273CF6C"))) PPC_WEAK_FUNC(sub_8273CF6C);
PPC_FUNC_IMPL(__imp__sub_8273CF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273CF70"))) PPC_WEAK_FUNC(sub_8273CF70);
PPC_FUNC_IMPL(__imp__sub_8273CF70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r7,1116(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1116);
	// li r11,0
	r11.s64 = 0;
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lbz r8,1120(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1120);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lis r6,-32140
	ctx.r6.s64 = -2106327040;
	// lis r5,-32140
	ctx.r5.s64 = -2106327040;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// addi r30,r6,-15240
	r30.s64 = ctx.r6.s64 + -15240;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r11.u64);
	// addi r29,r5,-14232
	r29.s64 = ctx.r5.s64 + -14232;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, r11.u64);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// stb r8,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r8.u8);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// lwz r7,1152(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 1152);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x8273c008
	sub_8273C008(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r31,36
	r11.s64 = r31.s64 + 36;
	// addi r10,r31,20
	ctx.r10.s64 = r31.s64 + 20;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r4,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r4.u32);
	// stw r4,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r4.u32);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// stw r6,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r6.u32);
	// stw r31,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r31.u32);
	// stw r9,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8273D03C"))) PPC_WEAK_FUNC(sub_8273D03C);
PPC_FUNC_IMPL(__imp__sub_8273D03C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8273D040"))) PPC_WEAK_FUNC(sub_8273D040);
PPC_FUNC_IMPL(__imp__sub_8273D040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,1156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1156);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// bgt cr6,0x8273d0e4
	if (cr6.gt) {
		sub_8273D0E4(ctx, base);
		return;
	}
	// lis r12,-32140
	r12.s64 = -2106327040;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-12188
	r12.s64 = r12.s64 + -12188;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		// ERROR: 0x8273D0A4
		return;
	case 1:
		// ERROR: 0x8273D0AC
		return;
	case 2:
		// ERROR: 0x8273D0B0
		return;
	case 3:
		// ERROR: 0x8273D0B4
		return;
	case 4:
		// ERROR: 0x8273D0BC
		return;
	case 5:
		// ERROR: 0x8273D0B4
		return;
	case 6:
		// ERROR: 0x8273D0C0
		return;
	case 7:
		// ERROR: 0x8273D0C4
		return;
	case 8:
		// ERROR: 0x8273D0C8
		return;
	case 9:
		// ERROR: 0x8273D0CC
		return;
	case 10:
		// ERROR: 0x8273D0D0
		return;
	case 11:
		// ERROR: 0x8273D0D4
		return;
	case 12:
		// ERROR: 0x8273D0D8
		return;
	case 13:
		// ERROR: 0x8273D0B4
		return;
	case 14:
		// ERROR: 0x8273D0DC
		return;
	case 15:
		// ERROR: 0x8273D0E0
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_8273D064"))) PPC_WEAK_FUNC(sub_8273D064);
PPC_FUNC_IMPL(__imp__sub_8273D064) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r19{};
	// lwz r19,-12124(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -12124);
	// lwz r19,-12116(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -12116);
	// lwz r19,-12112(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -12112);
	// lwz r19,-12108(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -12108);
	// lwz r19,-12100(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -12100);
	// lwz r19,-12108(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -12108);
	// lwz r19,-12096(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -12096);
	// lwz r19,-12092(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -12092);
	// lwz r19,-12088(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -12088);
	// lwz r19,-12084(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -12084);
	// lwz r19,-12080(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -12080);
	// lwz r19,-12076(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -12076);
	// lwz r19,-12072(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -12072);
	// lwz r19,-12108(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -12108);
	// lwz r19,-12068(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -12068);
	// lwz r19,-12064(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -12064);
	// li r11,1
	r11.s64 = 1;
	// stw r11,1156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1156, r11.u32);
	// b 0x8273c420
	sub_8273C420(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273D0B0"))) PPC_WEAK_FUNC(sub_8273D0B0);
PPC_FUNC_IMPL(__imp__sub_8273D0B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273cf70
	sub_8273CF70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273D0B4"))) PPC_WEAK_FUNC(sub_8273D0B4);
PPC_FUNC_IMPL(__imp__sub_8273D0B4) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273D0BC"))) PPC_WEAK_FUNC(sub_8273D0BC);
PPC_FUNC_IMPL(__imp__sub_8273D0BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273c978
	sub_8273C978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273D0C0"))) PPC_WEAK_FUNC(sub_8273D0C0);
PPC_FUNC_IMPL(__imp__sub_8273D0C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273c6c8
	sub_8273C6C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273D0C4"))) PPC_WEAK_FUNC(sub_8273D0C4);
PPC_FUNC_IMPL(__imp__sub_8273D0C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273caf8
	sub_8273CAF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273D0C8"))) PPC_WEAK_FUNC(sub_8273D0C8);
PPC_FUNC_IMPL(__imp__sub_8273D0C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273cd08
	sub_8273CD08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273D0CC"))) PPC_WEAK_FUNC(sub_8273D0CC);
PPC_FUNC_IMPL(__imp__sub_8273D0CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273ce20
	sub_8273CE20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273D0D0"))) PPC_WEAK_FUNC(sub_8273D0D0);
PPC_FUNC_IMPL(__imp__sub_8273D0D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273c548
	sub_8273C548(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273D0D4"))) PPC_WEAK_FUNC(sub_8273D0D4);
PPC_FUNC_IMPL(__imp__sub_8273D0D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273c5b8
	sub_8273C5B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273D0D8"))) PPC_WEAK_FUNC(sub_8273D0D8);
PPC_FUNC_IMPL(__imp__sub_8273D0D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273c9e0
	sub_8273C9E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273D0DC"))) PPC_WEAK_FUNC(sub_8273D0DC);
PPC_FUNC_IMPL(__imp__sub_8273D0DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273c878
	sub_8273C878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273D0E0"))) PPC_WEAK_FUNC(sub_8273D0E0);
PPC_FUNC_IMPL(__imp__sub_8273D0E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273cf00
	sub_8273CF00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273D0E4"))) PPC_WEAK_FUNC(sub_8273D0E4);
PPC_FUNC_IMPL(__imp__sub_8273D0E4) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273D0EC"))) PPC_WEAK_FUNC(sub_8273D0EC);
PPC_FUNC_IMPL(__imp__sub_8273D0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273D0F0"))) PPC_WEAK_FUNC(sub_8273D0F0);
PPC_FUNC_IMPL(__imp__sub_8273D0F0) {
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
	// lwz r3,1520(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1520);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,-31320
	ctx.r10.s64 = r11.s64 + -31320;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82605300
	sub_82605300(ctx, base);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-31336
	ctx.r8.s64 = ctx.r9.s64 + -31336;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x82737a48
	sub_82737A48(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8273d14c
	if (cr6.eq) goto loc_8273D14C;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8273D14C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273D160"))) PPC_WEAK_FUNC(sub_8273D160);
PPC_FUNC_IMPL(__imp__sub_8273D160) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273D164"))) PPC_WEAK_FUNC(sub_8273D164);
PPC_FUNC_IMPL(__imp__sub_8273D164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273D168"))) PPC_WEAK_FUNC(sub_8273D168);
PPC_FUNC_IMPL(__imp__sub_8273D168) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// bl 0x82737a78
	sub_82737A78(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// addi r10,r11,-31336
	ctx.r10.s64 = r11.s64 + -31336;
	// li r5,1060
	ctx.r5.s64 = 1060;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r29,1124(r31)
	PPC_STORE_U32(r31.u32 + 1124, r29.u32);
	// addi r10,r31,1128
	ctx.r10.s64 = r31.s64 + 1128;
	// stw r11,1128(r31)
	PPC_STORE_U32(r31.u32 + 1128, r11.u32);
	// addi r10,r31,1136
	ctx.r10.s64 = r31.s64 + 1136;
	// stw r11,1132(r31)
	PPC_STORE_U32(r31.u32 + 1132, r11.u32);
	// addi r10,r31,1144
	ctx.r10.s64 = r31.s64 + 1144;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,1132(r31)
	PPC_STORE_U32(r31.u32 + 1132, ctx.r9.u32);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r8,1128(r31)
	PPC_STORE_U32(r31.u32 + 1128, ctx.r8.u32);
	// stw r11,1136(r31)
	PPC_STORE_U32(r31.u32 + 1136, r11.u32);
	// stw r11,1140(r31)
	PPC_STORE_U32(r31.u32 + 1140, r11.u32);
	// lwz r7,4(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// stw r7,1140(r31)
	PPC_STORE_U32(r31.u32 + 1140, ctx.r7.u32);
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r6,1136(r31)
	PPC_STORE_U32(r31.u32 + 1136, ctx.r6.u32);
	// stw r11,1144(r31)
	PPC_STORE_U32(r31.u32 + 1144, r11.u32);
	// stw r11,1148(r31)
	PPC_STORE_U32(r31.u32 + 1148, r11.u32);
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r5,1148(r31)
	PPC_STORE_U32(r31.u32 + 1148, ctx.r5.u32);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r4,1144(r31)
	PPC_STORE_U32(r31.u32 + 1144, ctx.r4.u32);
	// stw r25,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8273D218"))) PPC_WEAK_FUNC(sub_8273D218);
PPC_FUNC_IMPL(__imp__sub_8273D218) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8273D21C"))) PPC_WEAK_FUNC(sub_8273D21C);
PPC_FUNC_IMPL(__imp__sub_8273D21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273D220"))) PPC_WEAK_FUNC(sub_8273D220);
PPC_FUNC_IMPL(__imp__sub_8273D220) {
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r10,-31172
	ctx.r9.s64 = ctx.r10.s64 + -31172;
	// li r11,0
	r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r11,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r11.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r11,280(r31)
	PPC_STORE_U32(r31.u32 + 280, r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r11,r31,276
	r11.s64 = r31.s64 + 276;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,280(r31)
	PPC_STORE_U32(r31.u32 + 280, ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r7,276(r31)
	PPC_STORE_U32(r31.u32 + 276, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273D294"))) PPC_WEAK_FUNC(sub_8273D294);
PPC_FUNC_IMPL(__imp__sub_8273D294) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273D298"))) PPC_WEAK_FUNC(sub_8273D298);
PPC_FUNC_IMPL(__imp__sub_8273D298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r10.u32);
	// bl 0x82bbb0e0
	sub_82BBB0E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8260de10
	sub_8260DE10(ctx, base);
	// lwz r9,280(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,400(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273D308"))) PPC_WEAK_FUNC(sub_8273D308);
PPC_FUNC_IMPL(__imp__sub_8273D308) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273D30C"))) PPC_WEAK_FUNC(sub_8273D30C);
PPC_FUNC_IMPL(__imp__sub_8273D30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273D310"))) PPC_WEAK_FUNC(sub_8273D310);
PPC_FUNC_IMPL(__imp__sub_8273D310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r10.u32);
	// bl 0x82bbb170
	sub_82BBB170(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8260de10
	sub_8260DE10(ctx, base);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,400(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273D380"))) PPC_WEAK_FUNC(sub_8273D380);
PPC_FUNC_IMPL(__imp__sub_8273D380) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273D384"))) PPC_WEAK_FUNC(sub_8273D384);
PPC_FUNC_IMPL(__imp__sub_8273D384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273D388"))) PPC_WEAK_FUNC(sub_8273D388);
PPC_FUNC_IMPL(__imp__sub_8273D388) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
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
	// beq cr6,0x8273d3f0
	if (cr6.eq) goto loc_8273D3F0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-31160
	ctx.r8.s64 = ctx.r10.s64 + -31160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r10,r11,20
	ctx.r10.s64 = r11.s64 + 20;
	// stw r9,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r9.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r9.u32);
	// stw r29,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r29.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r7,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r7.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r6,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r6.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8273D3F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8273D3F4"))) PPC_WEAK_FUNC(sub_8273D3F4);
PPC_FUNC_IMPL(__imp__sub_8273D3F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8273D3F8"))) PPC_WEAK_FUNC(sub_8273D3F8);
PPC_FUNC_IMPL(__imp__sub_8273D3F8) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-31148
	ctx.r10.s64 = r11.s64 + -31148;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82737a48
	sub_82737A48(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8273d43c
	if (cr6.eq) goto loc_8273D43C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8273D43C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273D450"))) PPC_WEAK_FUNC(sub_8273D450);
PPC_FUNC_IMPL(__imp__sub_8273D450) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273D454"))) PPC_WEAK_FUNC(sub_8273D454);
PPC_FUNC_IMPL(__imp__sub_8273D454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273D458"))) PPC_WEAK_FUNC(sub_8273D458);
PPC_FUNC_IMPL(__imp__sub_8273D458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r10,r11,-31148
	ctx.r10.s64 = r11.s64 + -31148;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82737a48
	sub_82737A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273D468"))) PPC_WEAK_FUNC(sub_8273D468);
PPC_FUNC_IMPL(__imp__sub_8273D468) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273D46C"))) PPC_WEAK_FUNC(sub_8273D46C);
PPC_FUNC_IMPL(__imp__sub_8273D46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273D470"))) PPC_WEAK_FUNC(sub_8273D470);
PPC_FUNC_IMPL(__imp__sub_8273D470) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x82737a78
	sub_82737A78(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-31148
	ctx.r9.s64 = ctx.r10.s64 + -31148;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r10,r31,76
	ctx.r10.s64 = r31.s64 + 76;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r7,r8,-30996
	ctx.r7.s64 = ctx.r8.s64 + -30996;
	// stw r6,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r6.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r5,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r5.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r4,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r4.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r10,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r10.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8273D4F0"))) PPC_WEAK_FUNC(sub_8273D4F0);
PPC_FUNC_IMPL(__imp__sub_8273D4F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8273D4F4"))) PPC_WEAK_FUNC(sub_8273D4F4);
PPC_FUNC_IMPL(__imp__sub_8273D4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273D4F8"))) PPC_WEAK_FUNC(sub_8273D4F8);
PPC_FUNC_IMPL(__imp__sub_8273D4F8) {
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
	// li r31,0
	r31.s64 = 0;
	// li r11,16
	r11.s64 = 16;
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r9,-31136
	ctx.r6.s64 = ctx.r9.s64 + -31136;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8273d580
	if (cr6.eq) goto loc_8273D580;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8273d470
	sub_8273D470(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9464
	return;
loc_8273D580:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8273D588"))) PPC_WEAK_FUNC(sub_8273D588);
PPC_FUNC_IMPL(__imp__sub_8273D588) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8273D58C"))) PPC_WEAK_FUNC(sub_8273D58C);
PPC_FUNC_IMPL(__imp__sub_8273D58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273D590"))) PPC_WEAK_FUNC(sub_8273D590);
PPC_FUNC_IMPL(__imp__sub_8273D590) {
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
	// lwz r4,68(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x82737220
	sub_82737220(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8273d5d4
	if (!cr6.eq) goto loc_8273D5D4;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8273d5d4
	if (!cr6.eq) goto loc_8273D5D4;
	// li r11,1
	r11.s64 = 1;
loc_8273D5D4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8273d600
	if (!cr6.eq) goto loc_8273D600;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r5,r31,64
	ctx.r5.s64 = r31.s64 + 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8273D600:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273D614"))) PPC_WEAK_FUNC(sub_8273D614);
PPC_FUNC_IMPL(__imp__sub_8273D614) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273D618"))) PPC_WEAK_FUNC(sub_8273D618);
PPC_FUNC_IMPL(__imp__sub_8273D618) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-31148
	ctx.r10.s64 = r11.s64 + -31148;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82737a48
	sub_82737A48(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8273d65c
	if (cr6.eq) goto loc_8273D65C;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8273D65C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273D670"))) PPC_WEAK_FUNC(sub_8273D670);
PPC_FUNC_IMPL(__imp__sub_8273D670) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273D674"))) PPC_WEAK_FUNC(sub_8273D674);
PPC_FUNC_IMPL(__imp__sub_8273D674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273D678"))) PPC_WEAK_FUNC(sub_8273D678);
PPC_FUNC_IMPL(__imp__sub_8273D678) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r31,r11,26564
	r31.s64 = r11.s64 + 26564;
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8273d6a8
	if (cr6.eq) goto loc_8273D6A8;
	// bl 0x82625e28
	sub_82625E28(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
loc_8273D6A8:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8273d6c0
	if (cr6.eq) goto loc_8273D6C0;
	// bl 0x82625330
	sub_82625330(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
loc_8273D6C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273D6D0"))) PPC_WEAK_FUNC(sub_8273D6D0);
PPC_FUNC_IMPL(__imp__sub_8273D6D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273D6D4"))) PPC_WEAK_FUNC(sub_8273D6D4);
PPC_FUNC_IMPL(__imp__sub_8273D6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273D6D8"))) PPC_WEAK_FUNC(sub_8273D6D8);
PPC_FUNC_IMPL(__imp__sub_8273D6D8) {
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
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r31,r11,26564
	r31.s64 = r11.s64 + 26564;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lbz r8,26564(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 26564);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bne cr6,0x8273d768
	if (!cr6.eq) goto loc_8273D768;
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8273d71c
	if (cr6.eq) goto loc_8273D71C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8273d740
	goto loc_8273D740;
loc_8273D71C:
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r11,13
	r11.s64 = 13;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
loc_8273D740:
	// bl 0x82625320
	sub_82625320(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8273d790
	if (!cr6.eq) goto loc_8273D790;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// bl 0x82740e50
	sub_82740E50(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8273D768:
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8273d790
	if (!cr6.eq) goto loc_8273D790;
	// bl 0x82625e18
	sub_82625E18(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8273d788
	if (cr6.eq) goto loc_8273D788;
	// bl 0x82625330
	sub_82625330(ctx, base);
	// b 0x8273d790
	goto loc_8273D790;
loc_8273D788:
	// li r11,1
	r11.s64 = 1;
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
loc_8273D790:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273D7A8"))) PPC_WEAK_FUNC(sub_8273D7A8);
PPC_FUNC_IMPL(__imp__sub_8273D7A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273D7AC"))) PPC_WEAK_FUNC(sub_8273D7AC);
PPC_FUNC_IMPL(__imp__sub_8273D7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273D7B0"))) PPC_WEAK_FUNC(sub_8273D7B0);
PPC_FUNC_IMPL(__imp__sub_8273D7B0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8273d7f8
	if (cr6.eq) goto loc_8273D7F8;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8273D7F8:
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

__attribute__((alias("__imp__sub_8273D80C"))) PPC_WEAK_FUNC(sub_8273D80C);
PPC_FUNC_IMPL(__imp__sub_8273D80C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273D810"))) PPC_WEAK_FUNC(sub_8273D810);
PPC_FUNC_IMPL(__imp__sub_8273D810) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273D818"))) PPC_WEAK_FUNC(sub_8273D818);
PPC_FUNC_IMPL(__imp__sub_8273D818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8273d83c
	if (cr6.eq) goto loc_8273D83C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_8273D83C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273D844"))) PPC_WEAK_FUNC(sub_8273D844);
PPC_FUNC_IMPL(__imp__sub_8273D844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273D848"))) PPC_WEAK_FUNC(sub_8273D848);
PPC_FUNC_IMPL(__imp__sub_8273D848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8273d86c
	if (cr6.eq) goto loc_8273D86C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_8273D86C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273D874"))) PPC_WEAK_FUNC(sub_8273D874);
PPC_FUNC_IMPL(__imp__sub_8273D874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273D878"))) PPC_WEAK_FUNC(sub_8273D878);
PPC_FUNC_IMPL(__imp__sub_8273D878) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273D880"))) PPC_WEAK_FUNC(sub_8273D880);
PPC_FUNC_IMPL(__imp__sub_8273D880) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273D888"))) PPC_WEAK_FUNC(sub_8273D888);
PPC_FUNC_IMPL(__imp__sub_8273D888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r10,r11,-30980
	ctx.r10.s64 = r11.s64 + -30980;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8273D894"))) PPC_WEAK_FUNC(sub_8273D894);
PPC_FUNC_IMPL(__imp__sub_8273D894) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273D898"))) PPC_WEAK_FUNC(sub_8273D898);
PPC_FUNC_IMPL(__imp__sub_8273D898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r11,10872
	ctx.r10.s64 = r11.s64 + 10872;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273D8A8"))) PPC_WEAK_FUNC(sub_8273D8A8);
PPC_FUNC_IMPL(__imp__sub_8273D8A8) {
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
	// li r3,4216
	ctx.r3.s64 = 4216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826c6ff8
	sub_826C6FF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8273d8dc
	if (cr6.eq) goto loc_8273D8DC;
	// bl 0x82740f88
	sub_82740F88(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8273d8e0
	goto loc_8273D8E0;
loc_8273D8DC:
	// li r31,0
	r31.s64 = 0;
loc_8273D8E0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r30,1540
	ctx.r4.s64 = r30.s64 + 1540;
	// lwz r10,3076(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 3076);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8273d948
	if (cr6.eq) goto loc_8273D948;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,388
	ctx.r5.s64 = r30.s64 + 388;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82740ff0
	sub_82740FF0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8273d940
	if (cr6.eq) goto loc_8273D940;
loc_8273D924:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8273d924
	if (!cr6.eq) goto loc_8273D924;
loc_8273D940:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8273d94c
	goto loc_8273D94C;
loc_8273D948:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8273D94C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273D960"))) PPC_WEAK_FUNC(sub_8273D960);
PPC_FUNC_IMPL(__imp__sub_8273D960) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273D964"))) PPC_WEAK_FUNC(sub_8273D964);
PPC_FUNC_IMPL(__imp__sub_8273D964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273D968"))) PPC_WEAK_FUNC(sub_8273D968);
PPC_FUNC_IMPL(__imp__sub_8273D968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8273d97c
	if (cr6.eq) goto loc_8273D97C;
	// lwz r11,4212(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4212);
	// extsw r3,r11
	ctx.r3.s64 = r11.s32;
	// blr 
	return;
loc_8273D97C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273D984"))) PPC_WEAK_FUNC(sub_8273D984);
PPC_FUNC_IMPL(__imp__sub_8273D984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273D988"))) PPC_WEAK_FUNC(sub_8273D988);
PPC_FUNC_IMPL(__imp__sub_8273D988) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,10872
	ctx.r9.s64 = r11.s64 + 10872;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8273d9bc
	if (cr6.eq) goto loc_8273D9BC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8273D9BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273D9CC"))) PPC_WEAK_FUNC(sub_8273D9CC);
PPC_FUNC_IMPL(__imp__sub_8273D9CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273D9D0"))) PPC_WEAK_FUNC(sub_8273D9D0);
PPC_FUNC_IMPL(__imp__sub_8273D9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8273D9E0"))) PPC_WEAK_FUNC(sub_8273D9E0);
PPC_FUNC_IMPL(__imp__sub_8273D9E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,3148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8273da28
	if (cr6.eq) goto loc_8273DA28;
	// lwz r7,3188(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3188);
	// clrldi r9,r11,32
	ctx.r9.u64 = r11.u64 & 0xFFFFFFFF;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,4028(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4028);
	f0.f64 = double(temp.f32);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * f0.f64));
	// blr 
	return;
loc_8273DA28:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f1,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273DA34"))) PPC_WEAK_FUNC(sub_8273DA34);
PPC_FUNC_IMPL(__imp__sub_8273DA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273DA38"))) PPC_WEAK_FUNC(sub_8273DA38);
PPC_FUNC_IMPL(__imp__sub_8273DA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r10,3172(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3172);
	// li r9,408
	ctx.r9.s64 = 408;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,3176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3176, ctx.r9.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r10,3172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3172, ctx.r10.u32);
	// bne cr6,0x8273da8c
	if (!cr6.eq) goto loc_8273DA8C;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8273DA8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8273DA9C"))) PPC_WEAK_FUNC(sub_8273DA9C);
PPC_FUNC_IMPL(__imp__sub_8273DA9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273DAA0"))) PPC_WEAK_FUNC(sub_8273DAA0);
PPC_FUNC_IMPL(__imp__sub_8273DAA0) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8273dadc
	if (cr6.eq) goto loc_8273DADC;
	// li r11,12
	r11.s64 = 12;
loc_8273DADC:
	// stw r11,3172(r31)
	PPC_STORE_U32(r31.u32 + 3172, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273DAF0"))) PPC_WEAK_FUNC(sub_8273DAF0);
PPC_FUNC_IMPL(__imp__sub_8273DAF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273DAF4"))) PPC_WEAK_FUNC(sub_8273DAF4);
PPC_FUNC_IMPL(__imp__sub_8273DAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273DAF8"))) PPC_WEAK_FUNC(sub_8273DAF8);
PPC_FUNC_IMPL(__imp__sub_8273DAF8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82741548
	sub_82741548(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8273db28
	if (!cr6.eq) goto loc_8273DB28;
	// li r11,2
	r11.s64 = 2;
	// b 0x8273db34
	goto loc_8273DB34;
loc_8273DB28:
	// cmpwi cr6,r3,996
	cr6.compare<int32_t>(ctx.r3.s32, 996, xer);
	// beq cr6,0x8273db38
	if (cr6.eq) goto loc_8273DB38;
	// li r11,12
	r11.s64 = 12;
loc_8273DB34:
	// stw r11,3172(r31)
	PPC_STORE_U32(r31.u32 + 3172, r11.u32);
loc_8273DB38:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273DB4C"))) PPC_WEAK_FUNC(sub_8273DB4C);
PPC_FUNC_IMPL(__imp__sub_8273DB4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273DB50"))) PPC_WEAK_FUNC(sub_8273DB50);
PPC_FUNC_IMPL(__imp__sub_8273DB50) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8273db88
	if (!cr6.eq) goto loc_8273DB88;
	// li r11,4
	r11.s64 = 4;
	// b 0x8273db94
	goto loc_8273DB94;
loc_8273DB88:
	// cmpwi cr6,r3,997
	cr6.compare<int32_t>(ctx.r3.s32, 997, xer);
	// beq cr6,0x8273db98
	if (cr6.eq) goto loc_8273DB98;
	// li r11,12
	r11.s64 = 12;
loc_8273DB94:
	// stw r11,3172(r31)
	PPC_STORE_U32(r31.u32 + 3172, r11.u32);
loc_8273DB98:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273DBAC"))) PPC_WEAK_FUNC(sub_8273DBAC);
PPC_FUNC_IMPL(__imp__sub_8273DBAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273DBB0"))) PPC_WEAK_FUNC(sub_8273DBB0);
PPC_FUNC_IMPL(__imp__sub_8273DBB0) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8273dbf4
	if (!cr6.eq) goto loc_8273DBF4;
	// li r11,6
	r11.s64 = 6;
	// b 0x8273dc00
	goto loc_8273DC00;
loc_8273DBF4:
	// cmpwi cr6,r3,997
	cr6.compare<int32_t>(ctx.r3.s32, 997, xer);
	// beq cr6,0x8273dc04
	if (cr6.eq) goto loc_8273DC04;
	// li r11,12
	r11.s64 = 12;
loc_8273DC00:
	// stw r11,3172(r31)
	PPC_STORE_U32(r31.u32 + 3172, r11.u32);
loc_8273DC04:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273DC18"))) PPC_WEAK_FUNC(sub_8273DC18);
PPC_FUNC_IMPL(__imp__sub_8273DC18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273DC1C"))) PPC_WEAK_FUNC(sub_8273DC1C);
PPC_FUNC_IMPL(__imp__sub_8273DC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273DC20"))) PPC_WEAK_FUNC(sub_8273DC20);
PPC_FUNC_IMPL(__imp__sub_8273DC20) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8273dcc4
	if (!cr6.eq) goto loc_8273DCC4;
	// lwz r11,3140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 3140);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// stw r10,3188(r31)
	PPC_STORE_U32(r31.u32 + 3188, ctx.r10.u32);
	// bne cr6,0x8273dcb8
	if (!cr6.eq) goto loc_8273DCB8;
	// lwz r9,3152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 3152);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8273dc90
	if (cr6.eq) goto loc_8273DC90;
	// lwz r11,3156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 3156);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,3172(r31)
	PPC_STORE_U32(r31.u32 + 3172, ctx.r10.u32);
	// stw r11,3192(r31)
	PPC_STORE_U32(r31.u32 + 3192, r11.u32);
	// b 0x8273dcd4
	goto loc_8273DCD4;
loc_8273DC90:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8273dcb8
	if (!cr6.eq) goto loc_8273DCB8;
	// lwz r11,3144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 3144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8273dcb8
	if (cr6.eq) goto loc_8273DCB8;
	// lwz r11,3148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 3148);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r10,3172(r31)
	PPC_STORE_U32(r31.u32 + 3172, ctx.r10.u32);
	// stw r11,3192(r31)
	PPC_STORE_U32(r31.u32 + 3192, r11.u32);
	// b 0x8273dcd4
	goto loc_8273DCD4;
loc_8273DCB8:
	// li r11,10
	r11.s64 = 10;
	// stw r10,3192(r31)
	PPC_STORE_U32(r31.u32 + 3192, ctx.r10.u32);
	// b 0x8273dcd0
	goto loc_8273DCD0;
loc_8273DCC4:
	// cmpwi cr6,r3,997
	cr6.compare<int32_t>(ctx.r3.s32, 997, xer);
	// beq cr6,0x8273dcd4
	if (cr6.eq) goto loc_8273DCD4;
	// li r11,12
	r11.s64 = 12;
loc_8273DCD0:
	// stw r11,3172(r31)
	PPC_STORE_U32(r31.u32 + 3172, r11.u32);
loc_8273DCD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273DCE8"))) PPC_WEAK_FUNC(sub_8273DCE8);
PPC_FUNC_IMPL(__imp__sub_8273DCE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273DCEC"))) PPC_WEAK_FUNC(sub_8273DCEC);
PPC_FUNC_IMPL(__imp__sub_8273DCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273DCF0"))) PPC_WEAK_FUNC(sub_8273DCF0);
PPC_FUNC_IMPL(__imp__sub_8273DCF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r4,3152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 3152);
	// lwz r6,3192(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 3192);
	// lwz r5,3188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 3188);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8273dd8c
	if (cr6.lt) goto loc_8273DD8C;
	// lwz r10,3192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 3192);
	// lwz r11,3188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 3188);
	// subf. r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// add r8,r11,r3
	ctx.r8.u64 = r11.u64 + ctx.r3.u64;
	// stw r9,3192(r31)
	PPC_STORE_U32(r31.u32 + 3192, ctx.r9.u32);
	// stw r8,3188(r31)
	PPC_STORE_U32(r31.u32 + 3188, ctx.r8.u32);
	// bne 0x8273dd94
	if (!cr0.eq) goto loc_8273DD94;
	// lwz r10,3140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 3140);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// stw r11,3188(r31)
	PPC_STORE_U32(r31.u32 + 3188, r11.u32);
	// bne cr6,0x8273dd7c
	if (!cr6.eq) goto loc_8273DD7C;
	// lwz r10,3144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 3144);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8273dd7c
	if (cr6.eq) goto loc_8273DD7C;
	// lwz r11,3148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 3148);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r10,3172(r31)
	PPC_STORE_U32(r31.u32 + 3172, ctx.r10.u32);
	// stw r11,3192(r31)
	PPC_STORE_U32(r31.u32 + 3192, r11.u32);
	// b 0x8273dd94
	goto loc_8273DD94;
loc_8273DD7C:
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r11,3192(r31)
	PPC_STORE_U32(r31.u32 + 3192, r11.u32);
	// stw r10,3172(r31)
	PPC_STORE_U32(r31.u32 + 3172, ctx.r10.u32);
	// b 0x8273dd94
	goto loc_8273DD94;
loc_8273DD8C:
	// li r11,12
	r11.s64 = 12;
	// stw r11,3172(r31)
	PPC_STORE_U32(r31.u32 + 3172, r11.u32);
loc_8273DD94:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273DDA8"))) PPC_WEAK_FUNC(sub_8273DDA8);
PPC_FUNC_IMPL(__imp__sub_8273DDA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273DDAC"))) PPC_WEAK_FUNC(sub_8273DDAC);
PPC_FUNC_IMPL(__imp__sub_8273DDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273DDB0"))) PPC_WEAK_FUNC(sub_8273DDB0);
PPC_FUNC_IMPL(__imp__sub_8273DDB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r4,3144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 3144);
	// lwz r6,3192(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 3192);
	// lwz r5,3188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 3188);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8273de30
	if (cr6.lt) goto loc_8273DE30;
	// lwz r10,3192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 3192);
	// lwz r11,3188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 3188);
	// subf. r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// add r8,r11,r3
	ctx.r8.u64 = r11.u64 + ctx.r3.u64;
	// stw r9,3192(r31)
	PPC_STORE_U32(r31.u32 + 3192, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,3188(r31)
	PPC_STORE_U32(r31.u32 + 3188, ctx.r8.u32);
	// bne 0x8273de3c
	if (!cr0.eq) goto loc_8273DE3C;
	// li r11,0
	r11.s64 = 0;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r11,3192(r31)
	PPC_STORE_U32(r31.u32 + 3192, r11.u32);
	// stw r10,3172(r31)
	PPC_STORE_U32(r31.u32 + 3172, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8273DE30:
	// li r11,12
	r11.s64 = 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,3172(r31)
	PPC_STORE_U32(r31.u32 + 3172, r11.u32);
loc_8273DE3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273DE4C"))) PPC_WEAK_FUNC(sub_8273DE4C);
PPC_FUNC_IMPL(__imp__sub_8273DE4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273DE50"))) PPC_WEAK_FUNC(sub_8273DE50);
PPC_FUNC_IMPL(__imp__sub_8273DE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// lwz r4,3180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 3180);
	// lwz r6,3192(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 3192);
	// lwz r5,3188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 3188);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8273deb0
	if (cr6.lt) goto loc_8273DEB0;
	// lwz r10,3192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 3192);
	// lwz r11,3188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 3188);
	// subf. r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// add r8,r11,r3
	ctx.r8.u64 = r11.u64 + ctx.r3.u64;
	// stw r9,3192(r31)
	PPC_STORE_U32(r31.u32 + 3192, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,3188(r31)
	PPC_STORE_U32(r31.u32 + 3188, ctx.r8.u32);
	// bne 0x8273debc
	if (!cr0.eq) goto loc_8273DEBC;
	// b 0x8273deb4
	goto loc_8273DEB4;
loc_8273DEB0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8273DEB4:
	// li r11,12
	r11.s64 = 12;
	// stw r11,3172(r31)
	PPC_STORE_U32(r31.u32 + 3172, r11.u32);
loc_8273DEBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273DECC"))) PPC_WEAK_FUNC(sub_8273DECC);
PPC_FUNC_IMPL(__imp__sub_8273DECC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273DED0"))) PPC_WEAK_FUNC(sub_8273DED0);
PPC_FUNC_IMPL(__imp__sub_8273DED0) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,1600
	ctx.r4.s64 = ctx.r3.s64 + 1600;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// li r11,3
	r11.s64 = 3;
	// beq cr6,0x8273df14
	if (cr6.eq) goto loc_8273DF14;
	// li r11,12
	r11.s64 = 12;
loc_8273DF14:
	// stw r11,3172(r31)
	PPC_STORE_U32(r31.u32 + 3172, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273DF28"))) PPC_WEAK_FUNC(sub_8273DF28);
PPC_FUNC_IMPL(__imp__sub_8273DF28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273DF2C"))) PPC_WEAK_FUNC(sub_8273DF2C);
PPC_FUNC_IMPL(__imp__sub_8273DF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273DF30"))) PPC_WEAK_FUNC(sub_8273DF30);
PPC_FUNC_IMPL(__imp__sub_8273DF30) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r9,3136(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3136);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,1600
	ctx.r4.s64 = ctx.r3.s64 + 1600;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// li r11,5
	r11.s64 = 5;
	// beq cr6,0x8273df7c
	if (cr6.eq) goto loc_8273DF7C;
	// li r11,12
	r11.s64 = 12;
loc_8273DF7C:
	// stw r11,3172(r31)
	PPC_STORE_U32(r31.u32 + 3172, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273DF90"))) PPC_WEAK_FUNC(sub_8273DF90);
PPC_FUNC_IMPL(__imp__sub_8273DF90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273DF94"))) PPC_WEAK_FUNC(sub_8273DF94);
PPC_FUNC_IMPL(__imp__sub_8273DF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273DF98"))) PPC_WEAK_FUNC(sub_8273DF98);
PPC_FUNC_IMPL(__imp__sub_8273DF98) {
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
	// lwz r11,3156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3156);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r31,1216
	ctx.r5.s64 = r31.s64 + 1216;
	// lwz r10,3148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 3148);
	// lwz r4,3140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 3140);
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82740ff0
	sub_82740FF0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// li r11,7
	r11.s64 = 7;
	// beq cr6,0x8273dfdc
	if (cr6.eq) goto loc_8273DFDC;
	// li r11,12
	r11.s64 = 12;
loc_8273DFDC:
	// stw r11,3172(r31)
	PPC_STORE_U32(r31.u32 + 3172, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273DFF0"))) PPC_WEAK_FUNC(sub_8273DFF0);
PPC_FUNC_IMPL(__imp__sub_8273DFF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273DFF4"))) PPC_WEAK_FUNC(sub_8273DFF4);
PPC_FUNC_IMPL(__imp__sub_8273DFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273DFF8"))) PPC_WEAK_FUNC(sub_8273DFF8);
PPC_FUNC_IMPL(__imp__sub_8273DFF8) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8273e07c
	if (!cr6.eq) goto loc_8273E07C;
	// lwz r11,4208(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4208);
	// stw r11,3176(r31)
	PPC_STORE_U32(r31.u32 + 3176, r11.u32);
	// lwz r11,4212(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4212);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8273e084
	if (!cr6.gt) goto loc_8273E084;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// stw r3,3184(r31)
	PPC_STORE_U32(r31.u32 + 3184, ctx.r3.u32);
	// bl 0x826c7058
	sub_826C7058(ctx, base);
	// stw r3,3180(r31)
	PPC_STORE_U32(r31.u32 + 3180, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,3184(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 3184);
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lwz r9,4212(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4212);
	// li r11,0
	r11.s64 = 0;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r11,3188(r31)
	PPC_STORE_U32(r31.u32 + 3188, r11.u32);
	// stw r10,3172(r31)
	PPC_STORE_U32(r31.u32 + 3172, ctx.r10.u32);
	// stw r9,3192(r31)
	PPC_STORE_U32(r31.u32 + 3192, ctx.r9.u32);
	// b 0x8273e08c
	goto loc_8273E08C;
loc_8273E07C:
	// cmpwi cr6,r3,997
	cr6.compare<int32_t>(ctx.r3.s32, 997, xer);
	// beq cr6,0x8273e08c
	if (cr6.eq) goto loc_8273E08C;
loc_8273E084:
	// li r11,12
	r11.s64 = 12;
	// stw r11,3172(r31)
	PPC_STORE_U32(r31.u32 + 3172, r11.u32);
loc_8273E08C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273E0A4"))) PPC_WEAK_FUNC(sub_8273E0A4);
PPC_FUNC_IMPL(__imp__sub_8273E0A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273E0A8"))) PPC_WEAK_FUNC(sub_8273E0A8);
PPC_FUNC_IMPL(__imp__sub_8273E0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273E0B8"))) PPC_WEAK_FUNC(sub_8273E0B8);
PPC_FUNC_IMPL(__imp__sub_8273E0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r10,r11,-30940
	ctx.r10.s64 = r11.s64 + -30940;
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273E0D0"))) PPC_WEAK_FUNC(sub_8273E0D0);
PPC_FUNC_IMPL(__imp__sub_8273E0D0) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// addi r10,r11,-30932
	ctx.r10.s64 = r11.s64 + -30932;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826e2b38
	sub_826E2B38(ctx, base);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r8,r9,-30940
	ctx.r8.s64 = ctx.r9.s64 + -30940;
	// stw r8,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r8.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273E11C"))) PPC_WEAK_FUNC(sub_8273E11C);
PPC_FUNC_IMPL(__imp__sub_8273E11C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273E120"))) PPC_WEAK_FUNC(sub_8273E120);
PPC_FUNC_IMPL(__imp__sub_8273E120) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,-30912
	ctx.r10.s64 = r11.s64 + -30912;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8273e160
	if (cr6.eq) goto loc_8273E160;
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
loc_8273E160:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// addi r9,r10,-30940
	ctx.r9.s64 = ctx.r10.s64 + -30940;
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273E188"))) PPC_WEAK_FUNC(sub_8273E188);
PPC_FUNC_IMPL(__imp__sub_8273E188) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273E18C"))) PPC_WEAK_FUNC(sub_8273E18C);
PPC_FUNC_IMPL(__imp__sub_8273E18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273E190"))) PPC_WEAK_FUNC(sub_8273E190);
PPC_FUNC_IMPL(__imp__sub_8273E190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8273e1b8
	if (cr6.eq) goto loc_8273E1B8;
loc_8273E1A0:
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// beq cr6,0x8273e1c4
	if (cr6.eq) goto loc_8273E1C4;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8273e1a0
	if (!cr6.eq) goto loc_8273E1A0;
loc_8273E1B8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f1,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8273E1C4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8273E1D8"))) PPC_WEAK_FUNC(sub_8273E1D8);
PPC_FUNC_IMPL(__imp__sub_8273E1D8) {
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
	// lwz r31,36(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r28,r3,44
	r28.s64 = ctx.r3.s64 + 44;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// beq cr6,0x8273e288
	if (cr6.eq) goto loc_8273E288;
	// li r29,0
	r29.s64 = 0;
loc_8273E200:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// bne cr6,0x8273e27c
	if (!cr6.eq) goto loc_8273E27C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8273e27c
	if (cr6.eq) goto loc_8273E27C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r30,28
	r11.s64 = r30.s64 + 28;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// addi r6,r11,-1
	ctx.r6.s64 = r11.s64 + -1;
	// stw r6,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r6.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8273E27C:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bne cr6,0x8273e200
	if (!cr6.eq) goto loc_8273E200;
loc_8273E288:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8273E28C"))) PPC_WEAK_FUNC(sub_8273E28C);
PPC_FUNC_IMPL(__imp__sub_8273E28C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8273E290"))) PPC_WEAK_FUNC(sub_8273E290);
PPC_FUNC_IMPL(__imp__sub_8273E290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// addi r6,r10,-30940
	ctx.r6.s64 = ctx.r10.s64 + -30940;
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// addi r4,r5,-30892
	ctx.r4.s64 = ctx.r5.s64 + -30892;
	// lwz r9,26572(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26572);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r6,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r6.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// addi r11,r10,26568
	r11.s64 = ctx.r10.s64 + 26568;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// bne cr6,0x8273e334
	if (!cr6.eq) goto loc_8273E334;
	// ori r10,r9,1
	ctx.r10.u64 = ctx.r9.u64 | 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,26572(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26572, ctx.r10.u32);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
loc_8273E31C:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r9,0,r5
	reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r6,0,r5
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), reserved.s32, __builtin_bswap32(ctx.r6.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x8273e31c
	if (!cr0.eq) goto loc_8273E31C;
loc_8273E334:
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_8273E338:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8273e338
	if (!cr0.eq) goto loc_8273E338;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// stw r7,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
}

__attribute__((alias("__imp__sub_8273E360"))) PPC_WEAK_FUNC(sub_8273E360);
PPC_FUNC_IMPL(__imp__sub_8273E360) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273E364"))) PPC_WEAK_FUNC(sub_8273E364);
PPC_FUNC_IMPL(__imp__sub_8273E364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273E368"))) PPC_WEAK_FUNC(sub_8273E368);
PPC_FUNC_IMPL(__imp__sub_8273E368) {
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
	// lwz r31,28(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r3,36
	r11.s64 = ctx.r3.s64 + 36;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x8273e3fc
	if (cr6.eq) goto loc_8273E3FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8273e368
	sub_8273E368(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x8273e410
	if (!cr6.eq) goto loc_8273E410;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r30,20
	ctx.r10.s64 = r30.s64 + 20;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r11,0
	r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r5.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8273e410
	goto loc_8273E410;
loc_8273E3FC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8273E410:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273E424"))) PPC_WEAK_FUNC(sub_8273E424);
PPC_FUNC_IMPL(__imp__sub_8273E424) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273E428"))) PPC_WEAK_FUNC(sub_8273E428);
PPC_FUNC_IMPL(__imp__sub_8273E428) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// bl 0x8273e290
	sub_8273E290(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// addi r10,r11,-30932
	ctx.r10.s64 = r11.s64 + -30932;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826e2d50
	sub_826E2D50(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r29,3140(r31)
	PPC_STORE_U32(r31.u32 + 3140, r29.u32);
	// addi r10,r31,3160
	ctx.r10.s64 = r31.s64 + 3160;
	// stw r28,3144(r31)
	PPC_STORE_U32(r31.u32 + 3144, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r27,3148(r31)
	PPC_STORE_U32(r31.u32 + 3148, r27.u32);
	// stw r26,3152(r31)
	PPC_STORE_U32(r31.u32 + 3152, r26.u32);
	// stw r25,3156(r31)
	PPC_STORE_U32(r31.u32 + 3156, r25.u32);
	// stw r11,3160(r31)
	PPC_STORE_U32(r31.u32 + 3160, r11.u32);
	// stw r11,3164(r31)
	PPC_STORE_U32(r31.u32 + 3164, r11.u32);
	// lwz r8,4(r24)
	ctx.r8.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// stw r8,3164(r31)
	PPC_STORE_U32(r31.u32 + 3164, ctx.r8.u32);
	// lwz r9,244(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// stw r7,3160(r31)
	PPC_STORE_U32(r31.u32 + 3160, ctx.r7.u32);
	// stw r9,3168(r31)
	PPC_STORE_U32(r31.u32 + 3168, ctx.r9.u32);
	// stw r11,3172(r31)
	PPC_STORE_U32(r31.u32 + 3172, r11.u32);
	// stw r11,3176(r31)
	PPC_STORE_U32(r31.u32 + 3176, r11.u32);
	// stw r11,3180(r31)
	PPC_STORE_U32(r31.u32 + 3180, r11.u32);
	// stw r11,3188(r31)
	PPC_STORE_U32(r31.u32 + 3188, r11.u32);
	// stw r11,3184(r31)
	PPC_STORE_U32(r31.u32 + 3184, r11.u32);
	// stw r11,3192(r31)
	PPC_STORE_U32(r31.u32 + 3192, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8273E4D0"))) PPC_WEAK_FUNC(sub_8273E4D0);
PPC_FUNC_IMPL(__imp__sub_8273E4D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8273E4D4"))) PPC_WEAK_FUNC(sub_8273E4D4);
PPC_FUNC_IMPL(__imp__sub_8273E4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273E4D8"))) PPC_WEAK_FUNC(sub_8273E4D8);
PPC_FUNC_IMPL(__imp__sub_8273E4D8) {
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
	// lwz r11,3176(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3176);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bne cr6,0x8273e514
	if (!cr6.eq) goto loc_8273E514;
	// lwz r11,3180(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3180);
	// lwz r10,3184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3184);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// b 0x8273e51c
	goto loc_8273E51C;
loc_8273E514:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
loc_8273E51C:
	// lwz r11,3160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 3160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8273e538
	if (!cr6.eq) goto loc_8273E538;
	// lwz r11,3164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 3164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8273e53c
	if (cr6.eq) goto loc_8273E53C;
loc_8273E538:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8273E53C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8273e560
	if (!cr6.eq) goto loc_8273E560;
	// lwz r11,3164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 3164);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,3168(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 3168);
	// lwz r3,3160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 3160);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8273E560:
	// lwz r3,3180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 3180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8273e574
	if (cr6.eq) goto loc_8273E574;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,3180(r31)
	PPC_STORE_U32(r31.u32 + 3180, r30.u32);
loc_8273E574:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8273e5a8
	if (cr6.eq) goto loc_8273E5A8;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8273E5A8:
	// stw r30,3176(r31)
	PPC_STORE_U32(r31.u32 + 3176, r30.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r30,3184(r31)
	PPC_STORE_U32(r31.u32 + 3184, r30.u32);
	// stw r30,3188(r31)
	PPC_STORE_U32(r31.u32 + 3188, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8273E5BC"))) PPC_WEAK_FUNC(sub_8273E5BC);
PPC_FUNC_IMPL(__imp__sub_8273E5BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8273E5C0"))) PPC_WEAK_FUNC(sub_8273E5C0);
PPC_FUNC_IMPL(__imp__sub_8273E5C0) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-30912
	ctx.r9.s64 = r11.s64 + -30912;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// bl 0x8273e290
	sub_8273E290(ctx, base);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// li r3,4216
	ctx.r3.s64 = 4216;
	// addi r7,r8,-30872
	ctx.r7.s64 = ctx.r8.s64 + -30872;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bl 0x826c6ff8
	sub_826C6FF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8273e618
	if (cr6.eq) goto loc_8273E618;
	// bl 0x82740f88
	sub_82740F88(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8273e61c
	goto loc_8273E61C;
loc_8273E618:
	// li r11,0
	r11.s64 = 0;
loc_8273E61C:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_8273E634"))) PPC_WEAK_FUNC(sub_8273E634);
PPC_FUNC_IMPL(__imp__sub_8273E634) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273E638"))) PPC_WEAK_FUNC(sub_8273E638);
PPC_FUNC_IMPL(__imp__sub_8273E638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
}

__attribute__((alias("__imp__sub_8273E644"))) PPC_WEAK_FUNC(sub_8273E644);
PPC_FUNC_IMPL(__imp__sub_8273E644) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273e368
	sub_8273E368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273E648"))) PPC_WEAK_FUNC(sub_8273E648);
PPC_FUNC_IMPL(__imp__sub_8273E648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,3196
	ctx.r3.s64 = 3196;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// bl 0x826c6ff8
	sub_826C6FF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8273e6b0
	if (cr6.eq) goto loc_8273E6B0;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8273e428
	sub_8273E428(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_8273E6B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8273E6B8"))) PPC_WEAK_FUNC(sub_8273E6B8);
PPC_FUNC_IMPL(__imp__sub_8273E6B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8273E6BC"))) PPC_WEAK_FUNC(sub_8273E6BC);
PPC_FUNC_IMPL(__imp__sub_8273E6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8273E6C0"))) PPC_WEAK_FUNC(sub_8273E6C0);
PPC_FUNC_IMPL(__imp__sub_8273E6C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,3172(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3172);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// bgt cr6,0x8273e74c
	if (cr6.gt) {
		sub_8273E74C(ctx, base);
		return;
	}
	// lis r12,-32140
	r12.s64 = -2106327040;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-6428
	r12.s64 = r12.s64 + -6428;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		// ERROR: 0x8273E718
		return;
	case 1:
		// ERROR: 0x8273E71C
		return;
	case 2:
		// ERROR: 0x8273E720
		return;
	case 3:
		// ERROR: 0x8273E724
		return;
	case 4:
		// ERROR: 0x8273E728
		return;
	case 5:
		// ERROR: 0x8273E72C
		return;
	case 6:
		// ERROR: 0x8273E730
		return;
	case 7:
		// ERROR: 0x8273E734
		return;
	case 8:
		// ERROR: 0x8273E738
		return;
	case 9:
		// ERROR: 0x8273E73C
		return;
	case 10:
		// ERROR: 0x8273E740
		return;
	case 11:
		// ERROR: 0x8273E744
		return;
	case 12:
		// ERROR: 0x8273E748
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_8273E6E4"))) PPC_WEAK_FUNC(sub_8273E6E4);
PPC_FUNC_IMPL(__imp__sub_8273E6E4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r19{};
	// lwz r19,-6376(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -6376);
	// lwz r19,-6372(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -6372);
	// lwz r19,-6368(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -6368);
	// lwz r19,-6364(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -6364);
	// lwz r19,-6360(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -6360);
	// lwz r19,-6356(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -6356);
	// lwz r19,-6352(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -6352);
	// lwz r19,-6348(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -6348);
	// lwz r19,-6344(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -6344);
	// lwz r19,-6340(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -6340);
	// lwz r19,-6336(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -6336);
	// lwz r19,-6332(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -6332);
	// lwz r19,-6328(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + -6328);
	// b 0x8273daa0
	sub_8273DAA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273E71C"))) PPC_WEAK_FUNC(sub_8273E71C);
PPC_FUNC_IMPL(__imp__sub_8273E71C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273daf8
	sub_8273DAF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273E720"))) PPC_WEAK_FUNC(sub_8273E720);
PPC_FUNC_IMPL(__imp__sub_8273E720) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273ded0
	sub_8273DED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273E724"))) PPC_WEAK_FUNC(sub_8273E724);
PPC_FUNC_IMPL(__imp__sub_8273E724) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273db50
	sub_8273DB50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273E728"))) PPC_WEAK_FUNC(sub_8273E728);
PPC_FUNC_IMPL(__imp__sub_8273E728) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273df30
	sub_8273DF30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8273E72C"))) PPC_WEAK_FUNC(sub_8273E72C);
PPC_FUNC_IMPL(__imp__sub_8273E72C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8273dbb0
	sub_8273DBB0(ctx, base);
	return;
}

