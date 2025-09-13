#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8268BE40"))) PPC_WEAK_FUNC(sub_8268BE40);
PPC_FUNC_IMPL(__imp__sub_8268BE40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268BE44"))) PPC_WEAK_FUNC(sub_8268BE44);
PPC_FUNC_IMPL(__imp__sub_8268BE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268BE48"))) PPC_WEAK_FUNC(sub_8268BE48);
PPC_FUNC_IMPL(__imp__sub_8268BE48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8268bea0
	if (cr6.eq) goto loc_8268BEA0;
	// lis r10,2730
	ctx.r10.s64 = 178913280;
	// ori r10,r10,43690
	ctx.r10.u64 = ctx.r10.u64 | 43690;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8268be84
	if (cr6.gt) goto loc_8268BE84;
	// mulli r3,r11,24
	ctx.r3.s64 = r11.s64 * 24;
	// bl 0x826c6ff8
	sub_826C6FF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8268bea0
	if (!cr0.eq) goto loc_8268BEA0;
loc_8268BE84:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8268ab18
	sub_8268AB18(ctx, base);
	// lis r11,-32220
	r11.s64 = -2111569920;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-11692
	ctx.r4.s64 = r11.s64 + -11692;
	// bl 0x828efb40
	sub_828EFB40(ctx, base);
loc_8268BEA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8268BEAC"))) PPC_WEAK_FUNC(sub_8268BEAC);
PPC_FUNC_IMPL(__imp__sub_8268BEAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268BEB0"))) PPC_WEAK_FUNC(sub_8268BEB0);
PPC_FUNC_IMPL(__imp__sub_8268BEB0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8268bef8
	if (cr6.eq) goto loc_8268BEF8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8268BED0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8268bee8
	if (cr6.eq) goto loc_8268BEE8;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_8268BEE8:
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x8268bed0
	if (!cr6.eq) goto loc_8268BED0;
loc_8268BEF8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8268BF00"))) PPC_WEAK_FUNC(sub_8268BF00);
PPC_FUNC_IMPL(__imp__sub_8268BF00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8268BF04"))) PPC_WEAK_FUNC(sub_8268BF04);
PPC_FUNC_IMPL(__imp__sub_8268BF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268BF08"))) PPC_WEAK_FUNC(sub_8268BF08);
PPC_FUNC_IMPL(__imp__sub_8268BF08) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,4516
	ctx.r10.s64 = ctx.r10.s64 + 4516;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// bl 0x8268bdc0
	sub_8268BDC0(ctx, base);
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

__attribute__((alias("__imp__sub_8268BF4C"))) PPC_WEAK_FUNC(sub_8268BF4C);
PPC_FUNC_IMPL(__imp__sub_8268BF4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268BF50"))) PPC_WEAK_FUNC(sub_8268BF50);
PPC_FUNC_IMPL(__imp__sub_8268BF50) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8268bfb0
	if (cr6.eq) goto loc_8268BFB0;
loc_8268BF74:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,72
	r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8268BF84:
	// stdu r9,8(r11)
	ea = 8 + r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	r11.u32 = ea;
	// bdnz 0x8268bf84
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8268BF84;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8268bfa4
	if (cr6.eq) goto loc_8268BFA4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_8268BFA4:
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// bne 0x8268bf74
	if (!cr0.eq) goto loc_8268BF74;
loc_8268BFB0:
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

__attribute__((alias("__imp__sub_8268BFC4"))) PPC_WEAK_FUNC(sub_8268BFC4);
PPC_FUNC_IMPL(__imp__sub_8268BFC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268BFC8"))) PPC_WEAK_FUNC(sub_8268BFC8);
PPC_FUNC_IMPL(__imp__sub_8268BFC8) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne cr6,0x8268c004
	if (!cr6.eq) goto loc_8268C004;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8268c048
	goto loc_8268C048;
loc_8268C004:
	// lis r11,1023
	r11.s64 = 67043328;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x8268c020
	if (!cr6.gt) goto loc_8268C020;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,19224
	ctx.r3.s64 = r11.s64 + 19224;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_8268C020:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8268bd58
	sub_8268BD58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// rlwinm r10,r30,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_8268C048:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268C05C"))) PPC_WEAK_FUNC(sub_8268C05C);
PPC_FUNC_IMPL(__imp__sub_8268C05C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268C060"))) PPC_WEAK_FUNC(sub_8268C060);
PPC_FUNC_IMPL(__imp__sub_8268C060) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8268c0a4
	if (cr6.eq) goto loc_8268C0A4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x8268c0a0
	if (cr6.eq) goto loc_8268C0A0;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8268C094:
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8268c094
	if (!cr6.eq) goto loc_8268C094;
loc_8268C0A0:
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8268C0A4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_8268C0C4"))) PPC_WEAK_FUNC(sub_8268C0C4);
PPC_FUNC_IMPL(__imp__sub_8268C0C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268C0C8"))) PPC_WEAK_FUNC(sub_8268C0C8);
PPC_FUNC_IMPL(__imp__sub_8268C0C8) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// beq cr6,0x8268c140
	if (cr6.eq) goto loc_8268C140;
	// lwz r29,4(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r29
	cr6.compare<uint32_t>(ctx.r6.u32, r29.u32, xer);
	// beq cr6,0x8268c11c
	if (cr6.eq) goto loc_8268C11C;
loc_8268C0FC:
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x8268c0fc
	if (!cr6.eq) goto loc_8268C0FC;
loc_8268C11C:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r11,r31
	r11.u64 = r31.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x8268c13c
	if (cr6.eq) goto loc_8268C13C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8268C130:
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8268c130
	if (!cr6.eq) goto loc_8268C130;
loc_8268C13C:
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_8268C140:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8268C148"))) PPC_WEAK_FUNC(sub_8268C148);
PPC_FUNC_IMPL(__imp__sub_8268C148) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8268C14C"))) PPC_WEAK_FUNC(sub_8268C14C);
PPC_FUNC_IMPL(__imp__sub_8268C14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268C150"))) PPC_WEAK_FUNC(sub_8268C150);
PPC_FUNC_IMPL(__imp__sub_8268C150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-17532(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -17532);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x828e9414
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1023
	r11.s64 = 67043328;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8268c194
	if (!cr6.gt) goto loc_8268C194;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,19224
	ctx.r3.s64 = r11.s64 + 19224;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_8268C194:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	r11.s64 = r11.s32 >> 6;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bge cr6,0x8268c234
	if (!cr6.lt) goto loc_8268C234;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8268bd58
	sub_8268BD58(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// lbz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r30,12
	ctx.r6.s64 = r30.s64 + 12;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stb r8,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r8.u8);
	// bl 0x8268beb0
	sub_8268BEB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r28,r9,6
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	r28.s64 = ctx.r9.s32 >> 6;
	// beq cr6,0x8268c218
	if (cr6.eq) goto loc_8268C218;
	// b 0x8268c208
	goto loc_8268C208;
loc_8268C200:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
loc_8268C208:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8268c200
	if (!cr6.eq) goto loc_8268C200;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8268C218:
	// rlwinm r11,r27,6,0,25
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// rlwinm r10,r28,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
loc_8268C234:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8268C158"))) PPC_WEAK_FUNC(sub_8268C158);
PPC_FUNC_IMPL(__imp__sub_8268C158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x828e9414
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1023
	r11.s64 = 67043328;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8268c194
	if (!cr6.gt) goto loc_8268C194;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,19224
	ctx.r3.s64 = r11.s64 + 19224;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_8268C194:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	r11.s64 = r11.s32 >> 6;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bge cr6,0x8268c234
	if (!cr6.lt) goto loc_8268C234;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8268bd58
	sub_8268BD58(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// lbz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r30,12
	ctx.r6.s64 = r30.s64 + 12;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stb r8,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r8.u8);
	// bl 0x8268beb0
	sub_8268BEB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r28,r9,6
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	r28.s64 = ctx.r9.s32 >> 6;
	// beq cr6,0x8268c218
	if (cr6.eq) goto loc_8268C218;
	// b 0x8268c208
	goto loc_8268C208;
loc_8268C200:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
loc_8268C208:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8268c200
	if (!cr6.eq) goto loc_8268C200;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8268C218:
	// rlwinm r11,r27,6,0,25
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// rlwinm r10,r28,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
loc_8268C234:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
}

__attribute__((alias("__imp__sub_8268C23C"))) PPC_WEAK_FUNC(sub_8268C23C);
PPC_FUNC_IMPL(__imp__sub_8268C23C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-17532(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -17532);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x828efb40
	sub_828EFB40(ctx, base);
	// lis r10,1023
	ctx.r10.s64 = 67043328;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - r11.s64;
	// subf r8,r4,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r4.s64;
	// srawi r10,r10,6
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 6;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x8268c298
	if (!cr6.lt) goto loc_8268C298;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,19224
	ctx.r3.s64 = r11.s64 + 19224;
	// b 0x828e9128
	sub_828E9128(ctx, base);
	return;
loc_8268C298:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r11,r11,r7
	r11.s64 = ctx.r7.s64 - r11.s64;
	// srawi r11,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	r11.s64 = r11.s32 >> 6;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x8268c2c8
	if (cr6.lt) goto loc_8268C2C8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
loc_8268C2C8:
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bge cr6,0x8268c2d4
	if (!cr6.lt) goto loc_8268C2D4;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_8268C2D4:
	// b 0x8268c158
	sub_8268C158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268C244"))) PPC_WEAK_FUNC(sub_8268C244);
PPC_FUNC_IMPL(__imp__sub_8268C244) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_8268C268"))) PPC_WEAK_FUNC(sub_8268C268);
PPC_FUNC_IMPL(__imp__sub_8268C268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,1023
	ctx.r10.s64 = 67043328;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - r11.s64;
	// subf r8,r4,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r4.s64;
	// srawi r10,r10,6
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 6;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x8268c298
	if (!cr6.lt) goto loc_8268C298;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,19224
	ctx.r3.s64 = r11.s64 + 19224;
	// b 0x828e9128
	sub_828E9128(ctx, base);
	return;
loc_8268C298:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r11,r11,r7
	r11.s64 = ctx.r7.s64 - r11.s64;
	// srawi r11,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	r11.s64 = r11.s32 >> 6;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x8268c2c8
	if (cr6.lt) goto loc_8268C2C8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
loc_8268C2C8:
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bge cr6,0x8268c2d4
	if (!cr6.lt) {
		// ERROR 8268C2D4
		return;
	}
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
}

__attribute__((alias("__imp__sub_8268C2D8"))) PPC_WEAK_FUNC(sub_8268C2D8);
PPC_FUNC_IMPL(__imp__sub_8268C2D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268C2DC"))) PPC_WEAK_FUNC(sub_8268C2DC);
PPC_FUNC_IMPL(__imp__sub_8268C2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268C2E0"))) PPC_WEAK_FUNC(sub_8268C2E0);
PPC_FUNC_IMPL(__imp__sub_8268C2E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
}

__attribute__((alias("__imp__sub_8268C2E4"))) PPC_WEAK_FUNC(sub_8268C2E4);
PPC_FUNC_IMPL(__imp__sub_8268C2E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8268c060
	sub_8268C060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268C2E8"))) PPC_WEAK_FUNC(sub_8268C2E8);
PPC_FUNC_IMPL(__imp__sub_8268C2E8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8268c478
	if (cr6.eq) goto loc_8268C478;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r28,4(r4)
	r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r10,r11,r28
	ctx.r10.s64 = r28.s64 - r11.s64;
	// srawi. r10,r10,6
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 6;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8268c330
	if (!cr0.eq) goto loc_8268C330;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8268c0c8
	sub_8268C0C8(ctx, base);
	// b 0x8268c478
	goto loc_8268C478;
loc_8268C330:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r9,r3,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r3.s64;
	// srawi r9,r9,6
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 6;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8268c3bc
	if (cr6.gt) goto loc_8268C3BC;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r11
	r29.u64 = r11.u64;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x8268c378
	if (cr6.eq) goto loc_8268C378;
loc_8268C358:
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// bne cr6,0x8268c358
	if (!cr6.eq) goto loc_8268C358;
loc_8268C378:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x8268c398
	if (cr6.eq) goto loc_8268C398;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8268C38C:
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8268c38c
	if (!cr6.eq) goto loc_8268C38C;
loc_8268C398:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,6
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 6;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x8268c478
	goto loc_8268C478;
loc_8268C3BC:
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r7,r3,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r3.s64;
	// srawi r7,r7,6
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 6;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bgt cr6,0x8268c414
	if (cr6.gt) goto loc_8268C414;
	// rlwinm r10,r9,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// mr r29,r11
	r29.u64 = r11.u64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x8268c408
	if (cr6.eq) goto loc_8268C408;
loc_8268C3E8:
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
	// addi r28,r28,64
	r28.s64 = r28.s64 + 64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// bne cr6,0x8268c3e8
	if (!cr6.eq) goto loc_8268C3E8;
loc_8268C408:
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8268c464
	goto loc_8268C464;
loc_8268C414:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8268c43c
	if (cr6.eq) goto loc_8268C43C;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// beq cr6,0x8268c438
	if (cr6.eq) goto loc_8268C438;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_8268C42C:
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8268c42c
	if (!cr6.eq) goto loc_8268C42C;
loc_8268C438:
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8268C43C:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r4,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	ctx.r4.s64 = r11.s32 >> 6;
	// bl 0x8268bfc8
	sub_8268BFC8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268c478
	if (cr0.eq) goto loc_8268C478;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_8268C464:
	// addi r6,r31,12
	ctx.r6.s64 = r31.s64 + 12;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// bl 0x8268beb0
	sub_8268BEB0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_8268C478:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8268C480"))) PPC_WEAK_FUNC(sub_8268C480);
PPC_FUNC_IMPL(__imp__sub_8268C480) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8268C484"))) PPC_WEAK_FUNC(sub_8268C484);
PPC_FUNC_IMPL(__imp__sub_8268C484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268C488"))) PPC_WEAK_FUNC(sub_8268C488);
PPC_FUNC_IMPL(__imp__sub_8268C488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-17428(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -17428);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x828e941c
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r4,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	ctx.r4.s64 = r11.s32 >> 6;
	// bl 0x8268bfc8
	sub_8268BFC8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268c50c
	if (cr0.eq) goto loc_8268C50C;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r6,r30,12
	ctx.r6.s64 = r30.s64 + 12;
	// lbz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// stb r7,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r7.u8);
	// bl 0x8268beb0
	sub_8268BEB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
loc_8268C50C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8268C490"))) PPC_WEAK_FUNC(sub_8268C490);
PPC_FUNC_IMPL(__imp__sub_8268C490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x828e941c
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r4,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	ctx.r4.s64 = r11.s32 >> 6;
	// bl 0x8268bfc8
	sub_8268BFC8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268c50c
	if (cr0.eq) goto loc_8268C50C;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r6,r30,12
	ctx.r6.s64 = r30.s64 + 12;
	// lbz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// stb r7,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r7.u8);
	// bl 0x8268beb0
	sub_8268BEB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
loc_8268C50C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
}

__attribute__((alias("__imp__sub_8268C518"))) PPC_WEAK_FUNC(sub_8268C518);
PPC_FUNC_IMPL(__imp__sub_8268C518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-17428(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -17428);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x8268c060
	sub_8268C060(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x828efb40
	sub_828EFB40(ctx, base);
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268C520"))) PPC_WEAK_FUNC(sub_8268C520);
PPC_FUNC_IMPL(__imp__sub_8268C520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x8268c060
	sub_8268C060(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_8268C548"))) PPC_WEAK_FUNC(sub_8268C548);
PPC_FUNC_IMPL(__imp__sub_8268C548) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// srawi r11,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	r11.s64 = r11.s32 >> 6;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// ble cr6,0x8268c594
	if (!cr6.gt) goto loc_8268C594;
	// rlwinm r11,r4,6,0,25
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8268c0c8
	sub_8268C0C8(ctx, base);
	// b 0x8268c5ec
	goto loc_8268C5EC;
loc_8268C594:
	// bge cr6,0x8268c5ec
	if (!cr6.lt) goto loc_8268C5EC;
	// subf r4,r11,r30
	ctx.r4.s64 = r30.s64 - r11.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268c268
	sub_8268C268(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,12
	ctx.r6.s64 = r31.s64 + 12;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// srawi r11,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	r11.s64 = r11.s32 >> 6;
	// subf r4,r11,r30
	ctx.r4.s64 = r30.s64 - r11.s64;
	// bl 0x8268bf50
	sub_8268BF50(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// srawi r10,r10,6
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 6;
	// subf r10,r10,r30
	ctx.r10.s64 = r30.s64 - ctx.r10.s64;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_8268C5EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268C600"))) PPC_WEAK_FUNC(sub_8268C600);
PPC_FUNC_IMPL(__imp__sub_8268C600) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268C604"))) PPC_WEAK_FUNC(sub_8268C604);
PPC_FUNC_IMPL(__imp__sub_8268C604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268C608"))) PPC_WEAK_FUNC(sub_8268C608);
PPC_FUNC_IMPL(__imp__sub_8268C608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-17368(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -17368);
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stw r4,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r4.u32);
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8268c654
	if (cr6.eq) goto loc_8268C654;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r4,r5,8
	ctx.r4.s64 = ctx.r5.s64 + 8;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bl 0x8268c490
	sub_8268C490(ctx, base);
loc_8268C654:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268C610"))) PPC_WEAK_FUNC(sub_8268C610);
PPC_FUNC_IMPL(__imp__sub_8268C610) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stw r4,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r4.u32);
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8268c654
	if (cr6.eq) goto loc_8268C654;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r4,r5,8
	ctx.r4.s64 = ctx.r5.s64 + 8;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bl 0x8268c490
	sub_8268C490(ctx, base);
loc_8268C654:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268C668"))) PPC_WEAK_FUNC(sub_8268C668);
PPC_FUNC_IMPL(__imp__sub_8268C668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82e42ec8
	sub_82E42EC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8268C690"))) PPC_WEAK_FUNC(sub_8268C690);
PPC_FUNC_IMPL(__imp__sub_8268C690) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268C694"))) PPC_WEAK_FUNC(sub_8268C694);
PPC_FUNC_IMPL(__imp__sub_8268C694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268C698"))) PPC_WEAK_FUNC(sub_8268C698);
PPC_FUNC_IMPL(__imp__sub_8268C698) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8268c6ec
	if (cr6.eq) goto loc_8268C6EC;
	// subf r28,r5,r3
	r28.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_8268C6BC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r11,r28,r31
	r11.u64 = r28.u64 + r31.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x8268c2e8
	sub_8268C2E8(ctx, base);
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x8268c6bc
	if (!cr6.eq) goto loc_8268C6BC;
loc_8268C6EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8268C6F4"))) PPC_WEAK_FUNC(sub_8268C6F4);
PPC_FUNC_IMPL(__imp__sub_8268C6F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8268C6F8"))) PPC_WEAK_FUNC(sub_8268C6F8);
PPC_FUNC_IMPL(__imp__sub_8268C6F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-17268(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -17268);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x828e9414
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r5,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r5.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r5,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r5.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
loc_8268C730:
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// beq cr6,0x8268c75c
	if (cr6.eq) goto loc_8268C75C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8268c610
	sub_8268C610(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// b 0x8268c730
	goto loc_8268C730;
loc_8268C75C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8268C700"))) PPC_WEAK_FUNC(sub_8268C700);
PPC_FUNC_IMPL(__imp__sub_8268C700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x828e9414
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r5,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r5.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r5,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r5.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
loc_8268C730:
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// beq cr6,0x8268c75c
	if (cr6.eq) goto loc_8268C75C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8268c610
	sub_8268C610(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// b 0x8268c730
	goto loc_8268C730;
loc_8268C75C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
}

__attribute__((alias("__imp__sub_8268C768"))) PPC_WEAK_FUNC(sub_8268C768);
PPC_FUNC_IMPL(__imp__sub_8268C768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-17268(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -17268);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,80(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r29,180(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// b 0x8268c798
	goto loc_8268C798;
loc_8268C78C:
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x8268c060
	sub_8268C060(ctx, base);
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
loc_8268C798:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x8268c78c
	if (!cr6.eq) goto loc_8268C78C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x828efb40
	sub_828EFB40(ctx, base);
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268C770"))) PPC_WEAK_FUNC(sub_8268C770);
PPC_FUNC_IMPL(__imp__sub_8268C770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,80(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r29,180(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// b 0x8268c798
	goto loc_8268C798;
loc_8268C78C:
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x8268c060
	sub_8268C060(ctx, base);
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
loc_8268C798:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x8268c78c
	if (!cr6.eq) goto loc_8268C78C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_8268C7B0"))) PPC_WEAK_FUNC(sub_8268C7B0);
PPC_FUNC_IMPL(__imp__sub_8268C7B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-17156(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -17156);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x828e9414
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r3.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r29,0
	r29.s64 = 0;
loc_8268C7E8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8268c828
	if (cr6.eq) goto loc_8268C828;
	// stw r29,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r29.u32);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// stw r29,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r29.u32);
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8268c610
	sub_8268C610(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8268c060
	sub_8268C060(ctx, base);
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// b 0x8268c7e8
	goto loc_8268C7E8;
loc_8268C828:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8268C7B8"))) PPC_WEAK_FUNC(sub_8268C7B8);
PPC_FUNC_IMPL(__imp__sub_8268C7B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x828e9414
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r3.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r29,0
	r29.s64 = 0;
loc_8268C7E8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8268c828
	if (cr6.eq) goto loc_8268C828;
	// stw r29,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r29.u32);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// stw r29,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r29.u32);
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8268c610
	sub_8268C610(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8268c060
	sub_8268C060(ctx, base);
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// b 0x8268c7e8
	goto loc_8268C7E8;
loc_8268C828:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
}

__attribute__((alias("__imp__sub_8268C830"))) PPC_WEAK_FUNC(sub_8268C830);
PPC_FUNC_IMPL(__imp__sub_8268C830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-17156(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -17156);
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,80(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r29,196(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// b 0x8268c860
	goto loc_8268C860;
loc_8268C854:
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x8268c060
	sub_8268C060(ctx, base);
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
loc_8268C860:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x8268c854
	if (!cr6.eq) goto loc_8268C854;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x828efb40
	sub_828EFB40(ctx, base);
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8268c2e0
	sub_8268C2E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268C838"))) PPC_WEAK_FUNC(sub_8268C838);
PPC_FUNC_IMPL(__imp__sub_8268C838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,80(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r29,196(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// b 0x8268c860
	goto loc_8268C860;
loc_8268C854:
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x8268c060
	sub_8268C060(ctx, base);
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
loc_8268C860:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x8268c854
	if (!cr6.eq) goto loc_8268C854;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_8268C874"))) PPC_WEAK_FUNC(sub_8268C874);
PPC_FUNC_IMPL(__imp__sub_8268C874) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8268c2e0
	sub_8268C2E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8268C89C"))) PPC_WEAK_FUNC(sub_8268C89C);
PPC_FUNC_IMPL(__imp__sub_8268C89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268C8A0"))) PPC_WEAK_FUNC(sub_8268C8A0);
PPC_FUNC_IMPL(__imp__sub_8268C8A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// beq cr6,0x8268c8f8
	if (cr6.eq) goto loc_8268C8F8;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8268c698
	sub_8268C698(ctx, base);
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, xer);
	// beq cr6,0x8268c8f4
	if (cr6.eq) goto loc_8268C8F4;
loc_8268C8E0:
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x8268c060
	sub_8268C060(ctx, base);
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// bne cr6,0x8268c8e0
	if (!cr6.eq) goto loc_8268C8E0;
loc_8268C8F4:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
loc_8268C8F8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8268C900"))) PPC_WEAK_FUNC(sub_8268C900);
PPC_FUNC_IMPL(__imp__sub_8268C900) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8268C904"))) PPC_WEAK_FUNC(sub_8268C904);
PPC_FUNC_IMPL(__imp__sub_8268C904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268C908"))) PPC_WEAK_FUNC(sub_8268C908);
PPC_FUNC_IMPL(__imp__sub_8268C908) {
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
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8268c948
	if (cr6.eq) goto loc_8268C948;
	// lwz r29,4(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8268c938
	goto loc_8268C938;
loc_8268C92C:
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x8268c060
	sub_8268C060(ctx, base);
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
loc_8268C938:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x8268c92c
	if (!cr6.eq) goto loc_8268C92C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8268C948:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8268C95C"))) PPC_WEAK_FUNC(sub_8268C95C);
PPC_FUNC_IMPL(__imp__sub_8268C95C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8268C960"))) PPC_WEAK_FUNC(sub_8268C960);
PPC_FUNC_IMPL(__imp__sub_8268C960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-17004(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -17004);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x828e940c
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2730
	r11.s64 = 178913280;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ori r11,r11,43690
	r11.u64 = r11.u64 | 43690;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8268c9a4
	if (!cr6.gt) goto loc_8268C9A4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,19224
	ctx.r3.s64 = r11.s64 + 19224;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_8268C9A4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r27,24
	r27.s64 = 24;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r27
	r11.s32 = r11.s32 / r27.s32;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// bge cr6,0x8268ca54
	if (!cr6.lt) goto loc_8268CA54;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8268be48
	sub_8268BE48(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// lbz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r30,12
	ctx.r6.s64 = r30.s64 + 12;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stb r8,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r8.u8);
	// bl 0x8268c700
	sub_8268C700(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// subf r10,r11,r29
	ctx.r10.s64 = r29.s64 - r11.s64;
	// divw r26,r10,r27
	r26.s32 = ctx.r10.s32 / r27.s32;
	// beq cr6,0x8268ca38
	if (cr6.eq) goto loc_8268CA38;
	// mr r27,r11
	r27.u64 = r11.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x8268ca30
	if (cr6.eq) goto loc_8268CA30;
loc_8268CA1C:
	// addi r3,r27,8
	ctx.r3.s64 = r27.s64 + 8;
	// bl 0x8268c060
	sub_8268C060(ctx, base);
	// addi r27,r27,24
	r27.s64 = r27.s64 + 24;
	// cmplw cr6,r27,r29
	cr6.compare<uint32_t>(r27.u32, r29.u32, xer);
	// bne cr6,0x8268ca1c
	if (!cr6.eq) goto loc_8268CA1C;
loc_8268CA30:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8268CA38:
	// mulli r11,r25,24
	r11.s64 = r25.s64 * 24;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// mulli r10,r26,24
	ctx.r10.s64 = r26.s64 * 24;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
loc_8268CA54:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8268C968"))) PPC_WEAK_FUNC(sub_8268C968);
PPC_FUNC_IMPL(__imp__sub_8268C968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x828e940c
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2730
	r11.s64 = 178913280;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ori r11,r11,43690
	r11.u64 = r11.u64 | 43690;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8268c9a4
	if (!cr6.gt) goto loc_8268C9A4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,19224
	ctx.r3.s64 = r11.s64 + 19224;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_8268C9A4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r27,24
	r27.s64 = 24;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r27
	r11.s32 = r11.s32 / r27.s32;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// bge cr6,0x8268ca54
	if (!cr6.lt) goto loc_8268CA54;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8268be48
	sub_8268BE48(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// lbz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r30,12
	ctx.r6.s64 = r30.s64 + 12;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stb r8,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r8.u8);
	// bl 0x8268c700
	sub_8268C700(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// subf r10,r11,r29
	ctx.r10.s64 = r29.s64 - r11.s64;
	// divw r26,r10,r27
	r26.s32 = ctx.r10.s32 / r27.s32;
	// beq cr6,0x8268ca38
	if (cr6.eq) goto loc_8268CA38;
	// mr r27,r11
	r27.u64 = r11.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x8268ca30
	if (cr6.eq) goto loc_8268CA30;
loc_8268CA1C:
	// addi r3,r27,8
	ctx.r3.s64 = r27.s64 + 8;
	// bl 0x8268c060
	sub_8268C060(ctx, base);
	// addi r27,r27,24
	r27.s64 = r27.s64 + 24;
	// cmplw cr6,r27,r29
	cr6.compare<uint32_t>(r27.u32, r29.u32, xer);
	// bne cr6,0x8268ca1c
	if (!cr6.eq) goto loc_8268CA1C;
loc_8268CA30:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8268CA38:
	// mulli r11,r25,24
	r11.s64 = r25.s64 * 24;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// mulli r10,r26,24
	ctx.r10.s64 = r26.s64 * 24;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
loc_8268CA54:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
}

__attribute__((alias("__imp__sub_8268CA5C"))) PPC_WEAK_FUNC(sub_8268CA5C);
PPC_FUNC_IMPL(__imp__sub_8268CA5C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-17004(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -17004);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x828efb40
	sub_828EFB40(ctx, base);
	// lis r10,2730
	ctx.r10.s64 = 178913280;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,24
	ctx.r9.s64 = 24;
	// ori r8,r10,43690
	ctx.r8.u64 = ctx.r10.u64 | 43690;
	// subf r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - r11.s64;
	// subf r7,r4,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bge cr6,0x8268cabc
	if (!cr6.lt) goto loc_8268CABC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,19224
	ctx.r3.s64 = r11.s64 + 19224;
	// b 0x828e9128
	sub_828E9128(ctx, base);
	return;
loc_8268CABC:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r11,r11,r7
	r11.s64 = ctx.r7.s64 - r11.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// blt cr6,0x8268caec
	if (cr6.lt) goto loc_8268CAEC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
loc_8268CAEC:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x8268caf8
	if (!cr6.lt) goto loc_8268CAF8;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_8268CAF8:
	// b 0x8268c968
	sub_8268C968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268CA64"))) PPC_WEAK_FUNC(sub_8268CA64);
PPC_FUNC_IMPL(__imp__sub_8268CA64) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_8268CA88"))) PPC_WEAK_FUNC(sub_8268CA88);
PPC_FUNC_IMPL(__imp__sub_8268CA88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,2730
	ctx.r10.s64 = 178913280;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,24
	ctx.r9.s64 = 24;
	// ori r8,r10,43690
	ctx.r8.u64 = ctx.r10.u64 | 43690;
	// subf r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - r11.s64;
	// subf r7,r4,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bge cr6,0x8268cabc
	if (!cr6.lt) goto loc_8268CABC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,19224
	ctx.r3.s64 = r11.s64 + 19224;
	// b 0x828e9128
	sub_828E9128(ctx, base);
	return;
loc_8268CABC:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r11,r11,r7
	r11.s64 = ctx.r7.s64 - r11.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// blt cr6,0x8268caec
	if (cr6.lt) goto loc_8268CAEC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
loc_8268CAEC:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x8268caf8
	if (!cr6.lt) {
		// ERROR 8268CAF8
		return;
	}
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
}

__attribute__((alias("__imp__sub_8268CAFC"))) PPC_WEAK_FUNC(sub_8268CAFC);
PPC_FUNC_IMPL(__imp__sub_8268CAFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268CB00"))) PPC_WEAK_FUNC(sub_8268CB00);
PPC_FUNC_IMPL(__imp__sub_8268CB00) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-16952
	r11.s64 = r11.s64 + -16952;
	// addi r29,r10,-4168
	r29.s64 = ctx.r10.s64 + -4168;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r11,r3,2076
	r11.s64 = ctx.r3.s64 + 2076;
	// stw r30,2060(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2060, r30.u32);
	// stw r30,2064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2064, r30.u32);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r30,2068(r31)
	PPC_STORE_U32(r31.u32 + 2068, r30.u32);
	// stw r29,2076(r31)
	PPC_STORE_U32(r31.u32 + 2076, r29.u32);
	// stw r30,2108(r31)
	PPC_STORE_U32(r31.u32 + 2108, r30.u32);
	// bl 0x8314d2cc
	__imp__RtlInitializeCriticalSection(ctx, base);
	// stw r29,2112(r31)
	PPC_STORE_U32(r31.u32 + 2112, r29.u32);
	// stw r30,2144(r31)
	PPC_STORE_U32(r31.u32 + 2144, r30.u32);
	// addi r11,r31,2112
	r11.s64 = r31.s64 + 2112;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x8314d2cc
	__imp__RtlInitializeCriticalSection(ctx, base);
	// stw r29,2148(r31)
	PPC_STORE_U32(r31.u32 + 2148, r29.u32);
	// stw r30,2180(r31)
	PPC_STORE_U32(r31.u32 + 2180, r30.u32);
	// addi r11,r31,2148
	r11.s64 = r31.s64 + 2148;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x8314d2cc
	__imp__RtlInitializeCriticalSection(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stb r30,6480(r31)
	PPC_STORE_U8(r31.u32 + 6480, r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,6481(r31)
	PPC_STORE_U8(r31.u32 + 6481, r30.u8);
	// stw r30,6484(r31)
	PPC_STORE_U32(r31.u32 + 6484, r30.u32);
	// stb r30,6488(r31)
	PPC_STORE_U8(r31.u32 + 6488, r30.u8);
	// stb r30,7108(r31)
	PPC_STORE_U8(r31.u32 + 7108, r30.u8);
	// stb r30,7109(r31)
	PPC_STORE_U8(r31.u32 + 7109, r30.u8);
	// stb r30,7110(r31)
	PPC_STORE_U8(r31.u32 + 7110, r30.u8);
	// stb r30,7111(r31)
	PPC_STORE_U8(r31.u32 + 7111, r30.u8);
	// stb r30,7112(r31)
	PPC_STORE_U8(r31.u32 + 7112, r30.u8);
	// stb r30,7113(r31)
	PPC_STORE_U8(r31.u32 + 7113, r30.u8);
	// stw r30,6800(r31)
	PPC_STORE_U32(r31.u32 + 6800, r30.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r11,600
	r11.s64 = 600;
	// stb r30,4328(r31)
	PPC_STORE_U8(r31.u32 + 4328, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,4332(r31)
	PPC_STORE_U32(r31.u32 + 4332, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8268CBC4"))) PPC_WEAK_FUNC(sub_8268CBC4);
PPC_FUNC_IMPL(__imp__sub_8268CBC4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8268CBC8"))) PPC_WEAK_FUNC(sub_8268CBC8);
PPC_FUNC_IMPL(__imp__sub_8268CBC8) {
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
	// lis r31,-31933
	r31.s64 = -2092761088;
	// lwz r11,12408(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12408);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8268cc44
	if (!cr6.eq) goto loc_8268CC44;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,39904
	ctx.r3.u64 = ctx.r3.u64 | 39904;
	// bl 0x826c6ff8
	sub_826C6FF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268cc08
	if (cr0.eq) goto loc_8268CC08;
	// bl 0x8268cb00
	sub_8268CB00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8268cc0c
	goto loc_8268CC0C;
loc_8268CC08:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8268CC0C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r4,12408(r31)
	PPC_STORE_U32(r31.u32 + 12408, ctx.r4.u32);
	// bne cr6,0x8268cc38
	if (!cr6.eq) goto loc_8268CC38;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-16912
	ctx.r4.s64 = r11.s64 + -16912;
	// addi r3,r10,-16948
	ctx.r3.s64 = ctx.r10.s64 + -16948;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8268cc48
	goto loc_8268CC48;
loc_8268CC38:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r3,11956(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 11956);
	// bl 0x8267dca8
	sub_8267DCA8(ctx, base);
loc_8268CC44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268CC48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268CC58"))) PPC_WEAK_FUNC(sub_8268CC58);
PPC_FUNC_IMPL(__imp__sub_8268CC58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268CC5C"))) PPC_WEAK_FUNC(sub_8268CC5C);
PPC_FUNC_IMPL(__imp__sub_8268CC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268CC60"))) PPC_WEAK_FUNC(sub_8268CC60);
PPC_FUNC_IMPL(__imp__sub_8268CC60) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,24
	r29.s64 = 24;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// divw r11,r11,r29
	r11.s32 = r11.s32 / r29.s32;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// ble cr6,0x8268cca8
	if (!cr6.gt) goto loc_8268CCA8;
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8268c8a0
	sub_8268C8A0(ctx, base);
	// b 0x8268cd00
	goto loc_8268CD00;
loc_8268CCA8:
	// bge cr6,0x8268cd00
	if (!cr6.lt) goto loc_8268CD00;
	// subf r4,r11,r30
	ctx.r4.s64 = r30.s64 - r11.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268ca88
	sub_8268CA88(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,12
	ctx.r6.s64 = r31.s64 + 12;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// divw r11,r11,r29
	r11.s32 = r11.s32 / r29.s32;
	// subf r4,r11,r30
	ctx.r4.s64 = r30.s64 - r11.s64;
	// bl 0x8268c7b8
	sub_8268C7B8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// divw r10,r10,r29
	ctx.r10.s32 = ctx.r10.s32 / r29.s32;
	// subf r10,r10,r30
	ctx.r10.s64 = r30.s64 - ctx.r10.s64;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_8268CD00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8268CD04"))) PPC_WEAK_FUNC(sub_8268CD04);
PPC_FUNC_IMPL(__imp__sub_8268CD04) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8268CD08"))) PPC_WEAK_FUNC(sub_8268CD08);
PPC_FUNC_IMPL(__imp__sub_8268CD08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x828e93f8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r21,r3,2060
	r21.s64 = ctx.r3.s64 + 2060;
	// stw r25,2056(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2056, r25.u32);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8268cc60
	sub_8268CC60(ctx, base);
	// lwz r11,28(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 28);
	// li r24,2048
	r24.s64 = 2048;
	// mr r20,r25
	r20.u64 = r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8268cdd8
	if (!cr6.gt) goto loc_8268CDD8;
	// mr r22,r25
	r22.u64 = r25.u64;
	// addi r31,r23,32
	r31.s64 = r23.s64 + 32;
loc_8268CD4C:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r29,r22,r11
	r29.u64 = r22.u64 + r11.u64;
	// addi r26,r29,8
	r26.s64 = r29.s64 + 8;
	// stwx r10,r22,r11
	PPC_STORE_U32(r22.u32 + r11.u32, ctx.r10.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8268c548
	sub_8268C548(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8268cdc0
	if (cr6.eq) goto loc_8268CDC0;
	// mr r27,r25
	r27.u64 = r25.u64;
loc_8268CD88:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// add r30,r11,r27
	r30.u64 = r11.u64 + r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8268a898
	sub_8268A898(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// std r24,48(r30)
	PPC_STORE_U64(r30.u32 + 48, r24.u64);
	// addi r27,r27,64
	r27.s64 = r27.s64 + 64;
	// stw r25,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r25.u32);
	// stw r25,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r25.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r24,r11,r24
	r24.u64 = r11.u64 + r24.u64;
	// blt cr6,0x8268cd88
	if (cr6.lt) goto loc_8268CD88;
loc_8268CDC0:
	// lwz r11,28(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 28);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// addi r22,r22,24
	r22.s64 = r22.s64 + 24;
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(r20.u32, r11.u32, xer);
	// blt cr6,0x8268cd4c
	if (cr6.lt) goto loc_8268CD4C;
loc_8268CDD8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8268CDDC"))) PPC_WEAK_FUNC(sub_8268CDDC);
PPC_FUNC_IMPL(__imp__sub_8268CDDC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_8268CDE0"))) PPC_WEAK_FUNC(sub_8268CDE0);
PPC_FUNC_IMPL(__imp__sub_8268CDE0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8268ce40
	if (cr6.eq) goto loc_8268CE40;
	// lwz r11,16(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r10,7113(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7113, ctx.r10.u8);
	// stb r10,7112(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7112, ctx.r10.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268ce6c
	if (cr6.eq) goto loc_8268CE6C;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268ce30
	if (!cr6.gt) goto loc_8268CE30;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268CE30:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8268ce6c
	goto loc_8268CE6C;
loc_8268CE40:
	// lwz r30,16(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x8268cd08
	sub_8268CD08(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r11.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r10,72(r30)
	PPC_STORE_U32(r30.u32 + 72, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8268abe0
	sub_8268ABE0(ctx, base);
loc_8268CE6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268CE80"))) PPC_WEAK_FUNC(sub_8268CE80);
PPC_FUNC_IMPL(__imp__sub_8268CE80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268CE84"))) PPC_WEAK_FUNC(sub_8268CE84);
PPC_FUNC_IMPL(__imp__sub_8268CE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268CE88"))) PPC_WEAK_FUNC(sub_8268CE88);
PPC_FUNC_IMPL(__imp__sub_8268CE88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-16888(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16888);
	// mflr r12
	// bl 0x828e9410
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r29,0
	r29.s64 = 0;
	// beq cr6,0x8268ceec
	if (cr6.eq) goto loc_8268CEEC;
	// lwz r11,16(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r29,7113(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7113, r29.u8);
	// stb r29,7112(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7112, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268d05c
	if (cr6.eq) goto loc_8268D05C;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268cedc
	if (!cr6.gt) goto loc_8268CEDC;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268CEDC:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8268d05c
	goto loc_8268D05C;
loc_8268CEEC:
	// lwz r30,16(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// lwz r27,48(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// std r29,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r29.u64);
	// std r29,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r29.u64);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// addi r28,r27,8
	r28.s64 = r27.s64 + 8;
	// stw r30,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r30.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r30.u32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lis r11,-13628
	r11.s64 = -893124608;
	// li r10,4
	ctx.r10.s64 = 4;
	// ori r11,r11,57345
	r11.u64 = r11.u64 | 57345;
	// stw r10,28(r27)
	PPC_STORE_U32(r27.u32 + 28, ctx.r10.u32);
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// stw r11,24(r27)
	PPC_STORE_U32(r27.u32 + 24, r11.u32);
	// addi r3,r28,24
	ctx.r3.s64 = r28.s64 + 24;
	// addi r4,r10,712
	ctx.r4.s64 = ctx.r10.s64 + 712;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8268a840
	sub_8268A840(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// addi r11,r11,2112
	r11.s64 = r11.s64 + 2112;
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// addi r10,r10,-29600
	ctx.r10.s64 = ctx.r10.s64 + -29600;
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8268cfe4
	if (!cr6.eq) goto loc_8268CFE4;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r29,7112(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7112, r29.u8);
	// stb r29,7113(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7113, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268cfe0
	if (cr6.eq) goto loc_8268CFE0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268CFE0:
	// b 0x8268d054
	goto loc_8268D054;
loc_8268CFE4:
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r7,r11,-12832
	ctx.r7.s64 = r11.s64 + -12832;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82bb99e8
	sub_82BB99E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8268d054
	if (!cr0.eq) goto loc_8268D054;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// bl 0x8260de10
	sub_8260DE10(ctx, base);
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r29,7112(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7112, r29.u8);
	// stb r10,7113(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7113, ctx.r10.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268d050
	if (cr6.eq) goto loc_8268D050;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268d044
	if (!cr6.gt) goto loc_8268D044;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268D044:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268D050:
	// b 0x8268d054
	goto loc_8268D054;
loc_8268D054:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
loc_8268D05C:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8268CE90"))) PPC_WEAK_FUNC(sub_8268CE90);
PPC_FUNC_IMPL(__imp__sub_8268CE90) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r29,0
	r29.s64 = 0;
	// beq cr6,0x8268ceec
	if (cr6.eq) goto loc_8268CEEC;
	// lwz r11,16(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r29,7113(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7113, r29.u8);
	// stb r29,7112(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7112, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268d05c
	if (cr6.eq) goto loc_8268D05C;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268cedc
	if (!cr6.gt) goto loc_8268CEDC;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268CEDC:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8268d05c
	goto loc_8268D05C;
loc_8268CEEC:
	// lwz r30,16(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// lwz r27,48(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// std r29,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r29.u64);
	// std r29,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r29.u64);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// addi r28,r27,8
	r28.s64 = r27.s64 + 8;
	// stw r30,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r30.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r30.u32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lis r11,-13628
	r11.s64 = -893124608;
	// li r10,4
	ctx.r10.s64 = 4;
	// ori r11,r11,57345
	r11.u64 = r11.u64 | 57345;
	// stw r10,28(r27)
	PPC_STORE_U32(r27.u32 + 28, ctx.r10.u32);
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// stw r11,24(r27)
	PPC_STORE_U32(r27.u32 + 24, r11.u32);
	// addi r3,r28,24
	ctx.r3.s64 = r28.s64 + 24;
	// addi r4,r10,712
	ctx.r4.s64 = ctx.r10.s64 + 712;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8268a840
	sub_8268A840(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// addi r11,r11,2112
	r11.s64 = r11.s64 + 2112;
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// addi r10,r10,-29600
	ctx.r10.s64 = ctx.r10.s64 + -29600;
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8268cfe4
	if (!cr6.eq) goto loc_8268CFE4;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r29,7112(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7112, r29.u8);
	// stb r29,7113(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7113, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268cfe0
	if (cr6.eq) goto loc_8268CFE0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268CFE0:
	// b 0x8268d054
	goto loc_8268D054;
loc_8268CFE4:
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r7,r11,-12832
	ctx.r7.s64 = r11.s64 + -12832;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82bb99e8
	sub_82BB99E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8268d054
	if (!cr0.eq) goto loc_8268D054;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// bl 0x8260de10
	sub_8260DE10(ctx, base);
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r29,7112(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7112, r29.u8);
	// stb r10,7113(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7113, ctx.r10.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268d050
	if (cr6.eq) goto loc_8268D050;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268d044
	if (!cr6.gt) goto loc_8268D044;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268D044:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268D050:
	// b 0x8268d054
	goto loc_8268D054;
loc_8268D054:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
loc_8268D05C:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
}

__attribute__((alias("__imp__sub_8268D064"))) PPC_WEAK_FUNC(sub_8268D064);
PPC_FUNC_IMPL(__imp__sub_8268D064) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8268D088"))) PPC_WEAK_FUNC(sub_8268D088);
PPC_FUNC_IMPL(__imp__sub_8268D088) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268D08C"))) PPC_WEAK_FUNC(sub_8268D08C);
PPC_FUNC_IMPL(__imp__sub_8268D08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268D090"))) PPC_WEAK_FUNC(sub_8268D090);
PPC_FUNC_IMPL(__imp__sub_8268D090) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8268d0e8
	if (cr6.eq) goto loc_8268D0E8;
	// lwz r11,16(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r10,7113(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7113, ctx.r10.u8);
	// stb r10,7112(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7112, ctx.r10.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268d164
	if (cr6.eq) goto loc_8268D164;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268d0d8
	if (!cr6.gt) goto loc_8268D0D8;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268D0D8:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8268d164
	goto loc_8268D164;
loc_8268D0E8:
	// lwz r31,16(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lis r11,-13628
	r11.s64 = -893124608;
	// ori r11,r11,57345
	r11.u64 = r11.u64 | 57345;
	// lwz r29,48(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r28,r29,8
	r28.s64 = r29.s64 + 8;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8268d154
	if (!cr6.eq) goto loc_8268D154;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8268a840
	sub_8268A840(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82698df0
	sub_82698DF0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8268d154
	if (!cr0.eq) goto loc_8268D154;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8268cd08
	sub_8268CD08(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r10,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8268ae48
	sub_8268AE48(ctx, base);
	// b 0x8268d164
	goto loc_8268D164;
loc_8268D154:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8268ce90
	sub_8268CE90(ctx, base);
loc_8268D164:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8268D168"))) PPC_WEAK_FUNC(sub_8268D168);
PPC_FUNC_IMPL(__imp__sub_8268D168) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8268D16C"))) PPC_WEAK_FUNC(sub_8268D16C);
PPC_FUNC_IMPL(__imp__sub_8268D16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268D170"))) PPC_WEAK_FUNC(sub_8268D170);
PPC_FUNC_IMPL(__imp__sub_8268D170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-16832(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16832);
	// mflr r12
	// bl 0x828e9414
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,16(r5)
	r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// li r11,1
	r11.s64 = 1;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r29,0
	r29.s64 = 0;
	// lwz r28,48(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// stb r11,7111(r28)
	PPC_STORE_U8(r28.u32 + 7111, r11.u8);
	// stb r11,7112(r28)
	PPC_STORE_U8(r28.u32 + 7112, r11.u8);
	// beq cr6,0x8268d1e8
	if (cr6.eq) goto loc_8268D1E8;
	// lwz r11,16(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r29,7113(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7113, r29.u8);
	// stb r29,7112(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7112, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268d2f8
	if (cr6.eq) goto loc_8268D2F8;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268d1d8
	if (!cr6.gt) goto loc_8268D1D8;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268D1D8:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8268d2f8
	goto loc_8268D2F8;
loc_8268D1E8:
	// std r29,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r29.u64);
	// li r5,28
	ctx.r5.s64 = 28;
	// std r29,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r29.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// stw r30,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r30.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r30,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r30.u32);
	// addi r11,r11,2112
	r11.s64 = r11.s64 + 2112;
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// addi r10,r10,-29600
	ctx.r10.s64 = ctx.r10.s64 + -29600;
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8268d280
	if (!cr6.eq) goto loc_8268D280;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r29,7113(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7113, r29.u8);
	// stb r29,7112(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7112, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268d27c
	if (cr6.eq) goto loc_8268D27C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268D27C:
	// b 0x8268d2f0
	goto loc_8268D2F0;
loc_8268D280:
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r7,r11,-12144
	ctx.r7.s64 = r11.s64 + -12144;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r4,r28,8
	ctx.r4.s64 = r28.s64 + 8;
	// bl 0x82bb9a68
	sub_82BB9A68(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8268d2f0
	if (!cr0.eq) goto loc_8268D2F0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// bl 0x8260de10
	sub_8260DE10(ctx, base);
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r29,7112(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7112, r29.u8);
	// stb r10,7113(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7113, ctx.r10.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268d2ec
	if (cr6.eq) goto loc_8268D2EC;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268d2e0
	if (!cr6.gt) goto loc_8268D2E0;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268D2E0:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268D2EC:
	// b 0x8268d2f0
	goto loc_8268D2F0;
loc_8268D2F0:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
loc_8268D2F8:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8268D178"))) PPC_WEAK_FUNC(sub_8268D178);
PPC_FUNC_IMPL(__imp__sub_8268D178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,16(r5)
	r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// li r11,1
	r11.s64 = 1;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r29,0
	r29.s64 = 0;
	// lwz r28,48(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// stb r11,7111(r28)
	PPC_STORE_U8(r28.u32 + 7111, r11.u8);
	// stb r11,7112(r28)
	PPC_STORE_U8(r28.u32 + 7112, r11.u8);
	// beq cr6,0x8268d1e8
	if (cr6.eq) goto loc_8268D1E8;
	// lwz r11,16(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r29,7113(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7113, r29.u8);
	// stb r29,7112(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7112, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268d2f8
	if (cr6.eq) goto loc_8268D2F8;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268d1d8
	if (!cr6.gt) goto loc_8268D1D8;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268D1D8:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8268d2f8
	goto loc_8268D2F8;
loc_8268D1E8:
	// std r29,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r29.u64);
	// li r5,28
	ctx.r5.s64 = 28;
	// std r29,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r29.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// stw r30,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r30.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r30,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r30.u32);
	// addi r11,r11,2112
	r11.s64 = r11.s64 + 2112;
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// addi r10,r10,-29600
	ctx.r10.s64 = ctx.r10.s64 + -29600;
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8268d280
	if (!cr6.eq) goto loc_8268D280;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r29,7113(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7113, r29.u8);
	// stb r29,7112(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7112, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268d27c
	if (cr6.eq) goto loc_8268D27C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268D27C:
	// b 0x8268d2f0
	goto loc_8268D2F0;
loc_8268D280:
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r7,r11,-12144
	ctx.r7.s64 = r11.s64 + -12144;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r4,r28,8
	ctx.r4.s64 = r28.s64 + 8;
	// bl 0x82bb9a68
	sub_82BB9A68(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8268d2f0
	if (!cr0.eq) goto loc_8268D2F0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// bl 0x8260de10
	sub_8260DE10(ctx, base);
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r29,7112(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7112, r29.u8);
	// stb r10,7113(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7113, ctx.r10.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268d2ec
	if (cr6.eq) goto loc_8268D2EC;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268d2e0
	if (!cr6.gt) goto loc_8268D2E0;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268D2E0:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268D2EC:
	// b 0x8268d2f0
	goto loc_8268D2F0;
loc_8268D2F0:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
loc_8268D2F8:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
}

__attribute__((alias("__imp__sub_8268D300"))) PPC_WEAK_FUNC(sub_8268D300);
PPC_FUNC_IMPL(__imp__sub_8268D300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8268D324"))) PPC_WEAK_FUNC(sub_8268D324);
PPC_FUNC_IMPL(__imp__sub_8268D324) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268D328"))) PPC_WEAK_FUNC(sub_8268D328);
PPC_FUNC_IMPL(__imp__sub_8268D328) {
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
	// li r11,4
	r11.s64 = 4;
	// stw r3,4384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4384, ctx.r3.u32);
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// li r29,0
	r29.s64 = 0;
	// addi r10,r10,712
	ctx.r10.s64 = ctx.r10.s64 + 712;
	// li r9,2048
	ctx.r9.s64 = 2048;
	// stw r29,6472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6472, r29.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,6476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6476, r29.u32);
	// addi r11,r10,-4
	r11.s64 = ctx.r10.s64 + -4;
	// std r9,7120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 7120, ctx.r9.u64);
loc_8268D364:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwzu r10,8(r11)
	ea = 8 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// ld r9,7120(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 7120);
	// addi r10,r10,2048
	ctx.r10.s64 = ctx.r10.s64 + 2048;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r10,7120(r31)
	PPC_STORE_U64(r31.u32 + 7120, ctx.r10.u64);
	// bdnz 0x8268d364
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8268D364;
	// lbz r10,6481(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 6481);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8268d3a4
	if (!cr0.eq) goto loc_8268D3A4;
	// lbz r11,6480(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 6480);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// beq 0x8268d3a8
	if (cr0.eq) goto loc_8268D3A8;
loc_8268D3A4:
	// li r11,1
	r11.s64 = 1;
loc_8268D3A8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8268d3ec
	if (!cr0.eq) goto loc_8268D3EC;
	// addi r30,r31,4336
	r30.s64 = r31.s64 + 4336;
	// std r29,4336(r31)
	PPC_STORE_U64(r31.u32 + 4336, r29.u64);
	// std r29,4344(r31)
	PPC_STORE_U64(r31.u32 + 4344, r29.u64);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r29,4352(r31)
	PPC_STORE_U32(r31.u32 + 4352, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,4352(r31)
	PPC_STORE_U32(r31.u32 + 4352, r30.u32);
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// stw r30,4376(r31)
	PPC_STORE_U32(r31.u32 + 4376, r30.u32);
	// addi r5,r31,4356
	ctx.r5.s64 = r31.s64 + 4356;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8268baa0
	sub_8268BAA0(ctx, base);
	// b 0x8268d4cc
	goto loc_8268D4CC;
loc_8268D3EC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8268d4cc
	if (!cr6.eq) goto loc_8268D4CC;
	// lbz r10,7109(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 7109);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8268d410
	if (!cr0.eq) goto loc_8268D410;
	// lbz r11,7108(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 7108);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// beq 0x8268d414
	if (cr0.eq) goto loc_8268D414;
loc_8268D410:
	// li r11,1
	r11.s64 = 1;
loc_8268D414:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8268d464
	if (!cr0.eq) goto loc_8268D464;
	// bl 0x82698e38
	sub_82698E38(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268d4cc
	if (cr0.eq) goto loc_8268D4CC;
	// addi r30,r31,4336
	r30.s64 = r31.s64 + 4336;
	// std r29,4336(r31)
	PPC_STORE_U64(r31.u32 + 4336, r29.u64);
	// std r29,4344(r31)
	PPC_STORE_U64(r31.u32 + 4344, r29.u64);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r29,4352(r31)
	PPC_STORE_U32(r31.u32 + 4352, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,4352(r31)
	PPC_STORE_U32(r31.u32 + 4352, r30.u32);
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// stw r30,4376(r31)
	PPC_STORE_U32(r31.u32 + 4376, r30.u32);
	// addi r5,r31,4356
	ctx.r5.s64 = r31.s64 + 4356;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8268b638
	sub_8268B638(ctx, base);
	// b 0x8268d4cc
	goto loc_8268D4CC;
loc_8268D464:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8268d4cc
	if (!cr6.eq) goto loc_8268D4CC;
	// lbz r11,7112(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 7112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8268d488
	if (!cr0.eq) goto loc_8268D488;
	// lbz r11,7111(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 7111);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// beq 0x8268d48c
	if (cr0.eq) goto loc_8268D48C;
loc_8268D488:
	// li r11,1
	r11.s64 = 1;
loc_8268D48C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8268d4cc
	if (!cr0.eq) goto loc_8268D4CC;
	// addi r31,r31,4336
	r31.s64 = r31.s64 + 4336;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r29,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r29.u64);
	// std r29,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r29.u64);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r31,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r31.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// stw r31,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r31.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8268d178
	sub_8268D178(ctx, base);
loc_8268D4CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8268D4D4"))) PPC_WEAK_FUNC(sub_8268D4D4);
PPC_FUNC_IMPL(__imp__sub_8268D4D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8268D4D8"))) PPC_WEAK_FUNC(sub_8268D4D8);
PPC_FUNC_IMPL(__imp__sub_8268D4D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r3,12408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12408);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8268d50c
	if (cr6.eq) goto loc_8268D50C;
	// lbz r11,7113(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7113);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268d508
	if (cr0.eq) goto loc_8268D508;
	// bl 0x8268a970
	sub_8268A970(ctx, base);
	// b 0x8268d50c
	goto loc_8268D50C;
loc_8268D508:
	// bl 0x8268d328
	sub_8268D328(ctx, base);
loc_8268D50C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8268D51C"))) PPC_WEAK_FUNC(sub_8268D51C);
PPC_FUNC_IMPL(__imp__sub_8268D51C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268D520"))) PPC_WEAK_FUNC(sub_8268D520);
PPC_FUNC_IMPL(__imp__sub_8268D520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r3,2060
	ctx.r3.s64 = ctx.r3.s64 + 2060;
	// addi r11,r11,-4168
	r11.s64 = r11.s64 + -4168;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,2148(r31)
	PPC_STORE_U32(r31.u32 + 2148, r11.u32);
	// stw r11,2112(r31)
	PPC_STORE_U32(r31.u32 + 2112, r11.u32);
	// stw r11,2076(r31)
	PPC_STORE_U32(r31.u32 + 2076, r11.u32);
	// bl 0x8268c908
	sub_8268C908(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268d568
	if (cr0.eq) goto loc_8268D568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8268D568:
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

__attribute__((alias("__imp__sub_8268D580"))) PPC_WEAK_FUNC(sub_8268D580);
PPC_FUNC_IMPL(__imp__sub_8268D580) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268D584"))) PPC_WEAK_FUNC(sub_8268D584);
PPC_FUNC_IMPL(__imp__sub_8268D584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268D588"))) PPC_WEAK_FUNC(sub_8268D588);
PPC_FUNC_IMPL(__imp__sub_8268D588) {
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
	// lis r31,-31933
	r31.s64 = -2092761088;
	// lwz r3,12408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12408);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8268d5cc
	if (!cr6.eq) goto loc_8268D5CC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-16752
	ctx.r4.s64 = r11.s64 + -16752;
	// addi r3,r10,-16784
	ctx.r3.s64 = ctx.r10.s64 + -16784;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8268d604
	goto loc_8268D604;
loc_8268D5CC:
	// bl 0x8268bc40
	sub_8268BC40(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,12408(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12408);
	// lwz r3,11956(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 11956);
	// bl 0x8267dce0
	sub_8267DCE0(ctx, base);
	// lwz r3,12408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12408);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8268d5f8
	if (cr6.eq) goto loc_8268D5F8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8268d520
	sub_8268D520(ctx, base);
loc_8268D5F8:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,12408(r31)
	PPC_STORE_U32(r31.u32 + 12408, r11.u32);
loc_8268D604:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268D618"))) PPC_WEAK_FUNC(sub_8268D618);
PPC_FUNC_IMPL(__imp__sub_8268D618) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268D61C"))) PPC_WEAK_FUNC(sub_8268D61C);
PPC_FUNC_IMPL(__imp__sub_8268D61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268D620"))) PPC_WEAK_FUNC(sub_8268D620);
PPC_FUNC_IMPL(__imp__sub_8268D620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r11,r11,12428
	r11.s64 = r11.s64 + 12428;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8268d63c
	if (!cr0.eq) goto loc_8268D63C;
loc_8268D634:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8268D63C:
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8268d694
	if (cr6.eq) goto loc_8268D694;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,621
	r11.s64 = r11.s64 + 621;
loc_8268D654:
	// lwz r8,-621(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + -621);
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x8268d668
	if (cr0.eq) goto loc_8268D668;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8268d684
	if (!cr6.eq) goto loc_8268D684;
loc_8268D668:
	// li r8,-605
	ctx.r8.s64 = -605;
	// ldx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + ctx.r8.u32);
	// cmpdi cr6,r8,0
	cr6.compare<int64_t>(ctx.r8.s64, 0, xer);
	// beq cr6,0x8268d684
	if (cr6.eq) goto loc_8268D684;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x8268d634
	if (cr0.eq) goto loc_8268D634;
loc_8268D684:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,624
	r11.s64 = r11.s64 + 624;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8268d654
	if (cr6.lt) goto loc_8268D654;
loc_8268D694:
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_8268D698"))) PPC_WEAK_FUNC(sub_8268D698);
PPC_FUNC_IMPL(__imp__sub_8268D698) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268D69C"))) PPC_WEAK_FUNC(sub_8268D69C);
PPC_FUNC_IMPL(__imp__sub_8268D69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268D6A0"))) PPC_WEAK_FUNC(sub_8268D6A0);
PPC_FUNC_IMPL(__imp__sub_8268D6A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r11,12428
	ctx.r10.s64 = r11.s64 + 12428;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lwz r11,-4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8268d6ec
	if (cr6.eq) goto loc_8268D6EC;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
loc_8268D6C0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r11,r8
	ctx.r8.u64 = r11.u64 + ctx.r8.u64;
	// stb r7,620(r8)
	PPC_STORE_U8(ctx.r8.u32 + 620, ctx.r7.u8);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r8,r11,r8
	ctx.r8.u64 = r11.u64 + ctx.r8.u64;
	// stb r7,621(r8)
	PPC_STORE_U8(ctx.r8.u32 + 621, ctx.r7.u8);
	// addi r11,r11,624
	r11.s64 = r11.s64 + 624;
	// lwz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x8268d6c0
	if (cr6.lt) goto loc_8268D6C0;
loc_8268D6EC:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_8268D6F0"))) PPC_WEAK_FUNC(sub_8268D6F0);
PPC_FUNC_IMPL(__imp__sub_8268D6F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268D6F4"))) PPC_WEAK_FUNC(sub_8268D6F4);
PPC_FUNC_IMPL(__imp__sub_8268D6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268D6F8"))) PPC_WEAK_FUNC(sub_8268D6F8);
PPC_FUNC_IMPL(__imp__sub_8268D6F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8268d714
	if (cr6.lt) goto loc_8268D714;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// li r11,4
	r11.s64 = 4;
	// addi r10,r10,12420
	ctx.r10.s64 = ctx.r10.s64 + 12420;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r11.u32);
	// blr 
	return;
loc_8268D714:
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r8,12420
	ctx.r7.s64 = ctx.r8.s64 + 12420;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,13
	ctx.r9.s64 = 13;
	// stw r10,12420(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12420, ctx.r10.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r11.u32);
	// stw r9,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268D738"))) PPC_WEAK_FUNC(sub_8268D738);
PPC_FUNC_IMPL(__imp__sub_8268D738) {
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8268d784
	if (cr6.lt) goto loc_8268D784;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// li r11,1
	r11.s64 = 1;
	// addi r31,r10,12436
	r31.s64 = ctx.r10.s64 + 12436;
	// lwz r10,-12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + -12);
	// stb r11,-4(r31)
	PPC_STORE_U8(r31.u32 + -4, r11.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8268d778
	if (!cr6.eq) goto loc_8268D778;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-16736
	ctx.r3.s64 = r11.s64 + -16736;
	// bl 0x8267e038
	sub_8267E038(ctx, base);
loc_8268D778:
	// li r11,9
	r11.s64 = 9;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8268d79c
	goto loc_8268D79C;
loc_8268D784:
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r9,12436
	ctx.r8.s64 = ctx.r9.s64 + 12436;
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r10,12436(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12436, ctx.r10.u32);
	// stw r11,-12(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12, r11.u32);
loc_8268D79C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268D7AC"))) PPC_WEAK_FUNC(sub_8268D7AC);
PPC_FUNC_IMPL(__imp__sub_8268D7AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268D7B0"))) PPC_WEAK_FUNC(sub_8268D7B0);
PPC_FUNC_IMPL(__imp__sub_8268D7B0) {
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
	// lis r31,-31933
	r31.s64 = -2092761088;
	// lwz r3,12428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12428);
	// bl 0x82682460
	sub_82682460(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,12428(r31)
	PPC_STORE_U32(r31.u32 + 12428, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268D7E8"))) PPC_WEAK_FUNC(sub_8268D7E8);
PPC_FUNC_IMPL(__imp__sub_8268D7E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268D7EC"))) PPC_WEAK_FUNC(sub_8268D7EC);
PPC_FUNC_IMPL(__imp__sub_8268D7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268D7F0"))) PPC_WEAK_FUNC(sub_8268D7F0);
PPC_FUNC_IMPL(__imp__sub_8268D7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-16680(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16680);
	// mflr r12
	// bl 0x828e940c
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r3,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r3.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// bl 0x8268e6e8
	sub_8268E6E8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r11,r11,-16704
	r11.s64 = r11.s64 + -16704;
	// lis r9,-32151
	ctx.r9.s64 = -2107047936;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r8,r30,24
	ctx.r8.s64 = r30.s64 + 24;
	// addi r7,r9,-5720
	ctx.r7.s64 = ctx.r9.s64 + -5720;
	// lwz r11,11956(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11956);
	// li r10,20000
	ctx.r10.s64 = 20000;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82699058
	sub_82699058(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8268D7F8"))) PPC_WEAK_FUNC(sub_8268D7F8);
PPC_FUNC_IMPL(__imp__sub_8268D7F8) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r3,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r3.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// bl 0x8268e6e8
	sub_8268E6E8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r11,r11,-16704
	r11.s64 = r11.s64 + -16704;
	// lis r9,-32151
	ctx.r9.s64 = -2107047936;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r8,r30,24
	ctx.r8.s64 = r30.s64 + 24;
	// addi r7,r9,-5720
	ctx.r7.s64 = ctx.r9.s64 + -5720;
	// lwz r11,11956(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11956);
	// li r10,20000
	ctx.r10.s64 = 20000;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82699058
	sub_82699058(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
}

__attribute__((alias("__imp__sub_8268D890"))) PPC_WEAK_FUNC(sub_8268D890);
PPC_FUNC_IMPL(__imp__sub_8268D890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// bl 0x8268e760
	sub_8268E760(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8268D8B4"))) PPC_WEAK_FUNC(sub_8268D8B4);
PPC_FUNC_IMPL(__imp__sub_8268D8B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268D8B8"))) PPC_WEAK_FUNC(sub_8268D8B8);
PPC_FUNC_IMPL(__imp__sub_8268D8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-16552(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16552);
	// mflr r12
	// bl 0x828e9408
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8268d8fc
	if (cr6.eq) goto loc_8268D8FC;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
loc_8268D8FC:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,11956(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 11956);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8268d92c
	if (!cr6.eq) goto loc_8268D92C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-29628
	ctx.r4.s64 = r11.s64 + -29628;
	// addi r3,r10,-16596
	ctx.r3.s64 = ctx.r10.s64 + -16596;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// lis r3,-32680
	ctx.r3.s64 = -2141716480;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// b 0x8268d9a0
	goto loc_8268D9A0;
loc_8268D92C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8268d954
	if (!cr6.eq) goto loc_8268D954;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-16632
	ctx.r4.s64 = r11.s64 + -16632;
	// addi r3,r10,-16596
	ctx.r3.s64 = ctx.r10.s64 + -16596;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x8268d9a0
	goto loc_8268D9A0;
loc_8268D954:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x8268e6e0
	sub_8268E6E0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268d98c
	if (cr0.eq) goto loc_8268D98C;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8268d7f8
	sub_8268D7F8(ctx, base);
	// b 0x8268d990
	goto loc_8268D990;
loc_8268D98C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268D990:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268D9A0:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8268D8C0"))) PPC_WEAK_FUNC(sub_8268D8C0);
PPC_FUNC_IMPL(__imp__sub_8268D8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8268d8fc
	if (cr6.eq) goto loc_8268D8FC;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
loc_8268D8FC:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,11956(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 11956);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8268d92c
	if (!cr6.eq) goto loc_8268D92C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-29628
	ctx.r4.s64 = r11.s64 + -29628;
	// addi r3,r10,-16596
	ctx.r3.s64 = ctx.r10.s64 + -16596;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// lis r3,-32680
	ctx.r3.s64 = -2141716480;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// b 0x8268d9a0
	goto loc_8268D9A0;
loc_8268D92C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8268d954
	if (!cr6.eq) goto loc_8268D954;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-16632
	ctx.r4.s64 = r11.s64 + -16632;
	// addi r3,r10,-16596
	ctx.r3.s64 = ctx.r10.s64 + -16596;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x8268d9a0
	goto loc_8268D9A0;
loc_8268D954:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x8268e6e0
	sub_8268E6E0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268d98c
	if (cr0.eq) goto loc_8268D98C;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8268d7f8
	sub_8268D7F8(ctx, base);
	// b 0x8268d990
	goto loc_8268D990;
loc_8268D98C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268D990:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268D9A0:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
}

__attribute__((alias("__imp__sub_8268D9A8"))) PPC_WEAK_FUNC(sub_8268D9A8);
PPC_FUNC_IMPL(__imp__sub_8268D9A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x8267dc00
	sub_8267DC00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8268D9CC"))) PPC_WEAK_FUNC(sub_8268D9CC);
PPC_FUNC_IMPL(__imp__sub_8268D9CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268D9D0"))) PPC_WEAK_FUNC(sub_8268D9D0);
PPC_FUNC_IMPL(__imp__sub_8268D9D0) {
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
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r4,r10,808
	ctx.r4.s64 = ctx.r10.s64 + 808;
	// lwz r3,11956(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 11956);
	// bl 0x8267dca8
	sub_8267DCA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8268DA00"))) PPC_WEAK_FUNC(sub_8268DA00);
PPC_FUNC_IMPL(__imp__sub_8268DA00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268DA04"))) PPC_WEAK_FUNC(sub_8268DA04);
PPC_FUNC_IMPL(__imp__sub_8268DA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268DA08"))) PPC_WEAK_FUNC(sub_8268DA08);
PPC_FUNC_IMPL(__imp__sub_8268DA08) {
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
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r4,r10,808
	ctx.r4.s64 = ctx.r10.s64 + 808;
	// lwz r3,11956(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 11956);
	// bl 0x8267dce0
	sub_8267DCE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8268DA38"))) PPC_WEAK_FUNC(sub_8268DA38);
PPC_FUNC_IMPL(__imp__sub_8268DA38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268DA3C"))) PPC_WEAK_FUNC(sub_8268DA3C);
PPC_FUNC_IMPL(__imp__sub_8268DA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268DA40"))) PPC_WEAK_FUNC(sub_8268DA40);
PPC_FUNC_IMPL(__imp__sub_8268DA40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x8268e760
	sub_8268E760(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268da70
	if (cr0.eq) goto loc_8268DA70;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267dc00
	sub_8267DC00(ctx, base);
loc_8268DA70:
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

__attribute__((alias("__imp__sub_8268DA88"))) PPC_WEAK_FUNC(sub_8268DA88);
PPC_FUNC_IMPL(__imp__sub_8268DA88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268DA8C"))) PPC_WEAK_FUNC(sub_8268DA8C);
PPC_FUNC_IMPL(__imp__sub_8268DA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268DA90"))) PPC_WEAK_FUNC(sub_8268DA90);
PPC_FUNC_IMPL(__imp__sub_8268DA90) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r28,r11,5388
	r28.s64 = r11.s64 + 5388;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// std r11,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, r11.u64);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8268dae4
	if (!cr6.eq) goto loc_8268DAE4;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8268DAE4:
	// li r29,-1
	r29.s64 = -1;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x828ed3c0
	sub_828ED3C0(ctx, base);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8268db0c
	if (!cr6.eq) goto loc_8268DB0C;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8268DB0C:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// li r5,27
	ctx.r5.s64 = 27;
	// addi r4,r31,280
	ctx.r4.s64 = r31.s64 + 280;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x828f00d8
	sub_828F00D8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r5,312
	ctx.r5.s64 = 312;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,620(r31)
	PPC_STORE_U8(r31.u32 + 620, r11.u8);
	// addi r3,r31,308
	ctx.r3.s64 = r31.s64 + 308;
	// stb r11,621(r31)
	PPC_STORE_U8(r31.u32 + 621, r11.u8);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8268DB44"))) PPC_WEAK_FUNC(sub_8268DB44);
PPC_FUNC_IMPL(__imp__sub_8268DB44) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8268DB48"))) PPC_WEAK_FUNC(sub_8268DB48);
PPC_FUNC_IMPL(__imp__sub_8268DB48) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82682460
	sub_82682460(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268DB7C"))) PPC_WEAK_FUNC(sub_8268DB7C);
PPC_FUNC_IMPL(__imp__sub_8268DB7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268DB80"))) PPC_WEAK_FUNC(sub_8268DB80);
PPC_FUNC_IMPL(__imp__sub_8268DB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
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
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-16448(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16448);
	// mflr r12
	// bl 0x828e9400
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,308(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r5,316(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r3.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// bl 0x8268e6e8
	sub_8268E6E8(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// addi r3,r30,56
	ctx.r3.s64 = r30.s64 + 56;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r29,r30,52
	r29.s64 = r30.s64 + 52;
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// stw r3,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// rlwinm r4,r24,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r3,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// bl 0x826824b8
	sub_826824B8(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r24,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r24.u32);
	// lis r10,-32151
	ctx.r10.s64 = -2107047936;
	// stw r23,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r23.u32);
	// addi r8,r30,24
	ctx.r8.s64 = r30.s64 + 24;
	// stw r22,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r22.u32);
	// addi r7,r10,-5720
	ctx.r7.s64 = ctx.r10.s64 + -5720;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// li r6,20000
	ctx.r6.s64 = 20000;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// lwz r11,11956(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 11956);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82698f58
	sub_82698F58(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_8268DB88"))) PPC_WEAK_FUNC(sub_8268DB88);
PPC_FUNC_IMPL(__imp__sub_8268DB88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,308(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r5,316(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r3.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// bl 0x8268e6e8
	sub_8268E6E8(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// addi r3,r30,56
	ctx.r3.s64 = r30.s64 + 56;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r29,r30,52
	r29.s64 = r30.s64 + 52;
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// stw r3,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// rlwinm r4,r24,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r3,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// bl 0x826824b8
	sub_826824B8(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r24,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r24.u32);
	// lis r10,-32151
	ctx.r10.s64 = -2107047936;
	// stw r23,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r23.u32);
	// addi r8,r30,24
	ctx.r8.s64 = r30.s64 + 24;
	// stw r22,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r22.u32);
	// addi r7,r10,-5720
	ctx.r7.s64 = ctx.r10.s64 + -5720;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// li r6,20000
	ctx.r6.s64 = 20000;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// lwz r11,11956(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 11956);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82698f58
	sub_82698F58(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
}

__attribute__((alias("__imp__sub_8268DC6C"))) PPC_WEAK_FUNC(sub_8268DC6C);
PPC_FUNC_IMPL(__imp__sub_8268DC6C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// bl 0x8268e760
	sub_8268E760(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8268DC90"))) PPC_WEAK_FUNC(sub_8268DC90);
PPC_FUNC_IMPL(__imp__sub_8268DC90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268DC94"))) PPC_WEAK_FUNC(sub_8268DC94);
PPC_FUNC_IMPL(__imp__sub_8268DC94) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// addi r3,r11,56
	ctx.r3.s64 = r11.s64 + 56;
	// bl 0x8268db48
	sub_8268DB48(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8268DCBC"))) PPC_WEAK_FUNC(sub_8268DCBC);
PPC_FUNC_IMPL(__imp__sub_8268DCBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268DCC0"))) PPC_WEAK_FUNC(sub_8268DCC0);
PPC_FUNC_IMPL(__imp__sub_8268DCC0) {
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
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8268dd14
	if (cr6.eq) goto loc_8268DD14;
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_8268DCE8:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// add r4,r30,r10
	ctx.r4.u64 = r30.u64 + ctx.r10.u64;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// bl 0x8268da90
	sub_8268DA90(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,624
	r30.s64 = r30.s64 + 624;
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x8268dce8
	if (cr6.lt) goto loc_8268DCE8;
loc_8268DD14:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bl 0x8268ea10
	sub_8268EA10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8268DD28"))) PPC_WEAK_FUNC(sub_8268DD28);
PPC_FUNC_IMPL(__imp__sub_8268DD28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8268DD2C"))) PPC_WEAK_FUNC(sub_8268DD2C);
PPC_FUNC_IMPL(__imp__sub_8268DD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268DD30"))) PPC_WEAK_FUNC(sub_8268DD30);
PPC_FUNC_IMPL(__imp__sub_8268DD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-16384(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16384);
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// addi r11,r3,56
	r11.s64 = ctx.r3.s64 + 56;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82682460
	sub_82682460(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8268e760
	sub_8268E760(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_8268DD38"))) PPC_WEAK_FUNC(sub_8268DD38);
PPC_FUNC_IMPL(__imp__sub_8268DD38) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// addi r11,r3,56
	r11.s64 = ctx.r3.s64 + 56;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82682460
	sub_82682460(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8268e760
	sub_8268E760(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268DD90"))) PPC_WEAK_FUNC(sub_8268DD90);
PPC_FUNC_IMPL(__imp__sub_8268DD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x8268e760
	sub_8268E760(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8268DDB4"))) PPC_WEAK_FUNC(sub_8268DDB4);
PPC_FUNC_IMPL(__imp__sub_8268DDB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268DDB8"))) PPC_WEAK_FUNC(sub_8268DDB8);
PPC_FUNC_IMPL(__imp__sub_8268DDB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
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
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-16280(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16280);
	// mflr r12
	// bl 0x828e9404
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8268de00
	if (cr6.eq) goto loc_8268DE00;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
loc_8268DE00:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,11956(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 11956);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8268de30
	if (!cr6.eq) goto loc_8268DE30;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-29628
	ctx.r4.s64 = r11.s64 + -29628;
	// addi r3,r10,-16328
	ctx.r3.s64 = ctx.r10.s64 + -16328;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// lis r3,-32680
	ctx.r3.s64 = -2141716480;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// b 0x8268deb0
	goto loc_8268DEB0;
loc_8268DE30:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8268de58
	if (!cr6.eq) goto loc_8268DE58;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-16632
	ctx.r4.s64 = r11.s64 + -16632;
	// addi r3,r10,-16328
	ctx.r3.s64 = ctx.r10.s64 + -16328;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x8268deb0
	goto loc_8268DEB0;
loc_8268DE58:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x8268e6e0
	sub_8268E6E0(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268de9c
	if (cr0.eq) goto loc_8268DE9C;
	// lwz r11,276(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8268db88
	sub_8268DB88(ctx, base);
	// b 0x8268dea0
	goto loc_8268DEA0;
loc_8268DE9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268DEA0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268DEB0:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8268DDC0"))) PPC_WEAK_FUNC(sub_8268DDC0);
PPC_FUNC_IMPL(__imp__sub_8268DDC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8268de00
	if (cr6.eq) goto loc_8268DE00;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
loc_8268DE00:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,11956(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 11956);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8268de30
	if (!cr6.eq) goto loc_8268DE30;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-29628
	ctx.r4.s64 = r11.s64 + -29628;
	// addi r3,r10,-16328
	ctx.r3.s64 = ctx.r10.s64 + -16328;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// lis r3,-32680
	ctx.r3.s64 = -2141716480;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// b 0x8268deb0
	goto loc_8268DEB0;
loc_8268DE30:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8268de58
	if (!cr6.eq) goto loc_8268DE58;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-16632
	ctx.r4.s64 = r11.s64 + -16632;
	// addi r3,r10,-16328
	ctx.r3.s64 = ctx.r10.s64 + -16328;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x8268deb0
	goto loc_8268DEB0;
loc_8268DE58:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x8268e6e0
	sub_8268E6E0(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268de9c
	if (cr0.eq) goto loc_8268DE9C;
	// lwz r11,276(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8268db88
	sub_8268DB88(ctx, base);
	// b 0x8268dea0
	goto loc_8268DEA0;
loc_8268DE9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268DEA0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268DEB0:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
}

__attribute__((alias("__imp__sub_8268DEB8"))) PPC_WEAK_FUNC(sub_8268DEB8);
PPC_FUNC_IMPL(__imp__sub_8268DEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x8267dc00
	sub_8267DC00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8268DEDC"))) PPC_WEAK_FUNC(sub_8268DEDC);
PPC_FUNC_IMPL(__imp__sub_8268DEDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268DEE0"))) PPC_WEAK_FUNC(sub_8268DEE0);
PPC_FUNC_IMPL(__imp__sub_8268DEE0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31933
	r28.s64 = -2092761088;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r24,0
	r24.s64 = 0;
	// addi r31,r11,12416
	r31.s64 = r11.s64 + 12416;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// lwz r10,12932(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 12932);
	// li r25,1
	r25.s64 = 1;
	// ori r27,r11,16389
	r27.u64 = r11.u64 | 16389;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r26,r24
	r26.u64 = r24.u64;
	// stw r10,12932(r28)
	PPC_STORE_U32(r28.u32 + 12932, ctx.r10.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8268df58
	if (!cr6.eq) goto loc_8268DF58;
	// bl 0x82698e38
	sub_82698E38(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268df54
	if (cr0.eq) goto loc_8268DF54;
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268df48
	if (cr0.eq) goto loc_8268DF48;
loc_8268DF3C:
	// li r11,9
	r11.s64 = 9;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// b 0x8268e270
	goto loc_8268E270;
loc_8268DF48:
	// li r11,2
	r11.s64 = 2;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// b 0x8268df58
	goto loc_8268DF58;
loc_8268DF54:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
loc_8268DF58:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// addi r29,r10,-15416
	r29.s64 = ctx.r10.s64 + -15416;
	// addi r30,r9,800
	r30.s64 = ctx.r9.s64 + 800;
	// bne cr6,0x8268dfb0
	if (!cr6.eq) goto loc_8268DFB0;
	// lis r11,-32151
	r11.s64 = -2107047936;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r7,r31,4
	ctx.r7.s64 = r31.s64 + 4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r8,r11,-10504
	ctx.r8.s64 = r11.s64 + -10504;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8268d8c0
	sub_8268D8C0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge 0x8268dfa8
	if (!cr0.lt) goto loc_8268DFA8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8267e038
	sub_8267E038(ctx, base);
	// mr r26,r27
	r26.u64 = r27.u64;
loc_8268DFA8:
	// li r11,3
	r11.s64 = 3;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8268DFB0:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x8268e010
	if (!cr6.eq) goto loc_8268E010;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// mulli r4,r11,624
	ctx.r4.s64 = r11.s64 * 624;
	// bl 0x826824b8
	sub_826824B8(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// addi r8,r31,8
	ctx.r8.s64 = r31.s64 + 8;
	// addi r10,r11,-10440
	ctx.r10.s64 = r11.s64 + -10440;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8268ddc0
	sub_8268DDC0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge 0x8268e008
	if (!cr0.lt) goto loc_8268E008;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8267e038
	sub_8267E038(ctx, base);
	// mr r26,r27
	r26.u64 = r27.u64;
loc_8268E008:
	// li r11,5
	r11.s64 = 5;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8268E010:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x8268e1bc
	if (!cr6.eq) goto loc_8268E1BC;
	// lwz r11,12932(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12932);
	// cmpwi cr6,r11,60
	cr6.compare<int32_t>(r11.s32, 60, xer);
	// ble cr6,0x8268e640
	if (!cr6.gt) goto loc_8268E640;
	// li r11,-1
	r11.s64 = -1;
	// mr r30,r24
	r30.u64 = r24.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lis r29,-31933
	r29.s64 = -2092761088;
loc_8268E034:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,11956(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 11956);
	// bl 0x8267dc70
	sub_8267DC70(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8268e05c
	if (!cr0.eq) goto loc_8268E05C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x8268e034
	if (cr6.lt) goto loc_8268E034;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// b 0x8268e060
	goto loc_8268E060;
loc_8268E05C:
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
loc_8268E060:
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x8268e1a4
	if (cr6.eq) goto loc_8268E1A4;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x8268df3c
	if (!cr6.lt) goto loc_8268DF3C;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r30,r8,-15456
	r30.s64 = ctx.r8.s64 + -15456;
loc_8268E08C:
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
	// bge cr6,0x8268e134
	if (!cr6.lt) goto loc_8268E134;
	// mulli r8,r11,624
	ctx.r8.s64 = r11.s64 * 624;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// ld r6,16(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16);
	// cmpdi cr6,r6,0
	cr6.compare<int64_t>(ctx.r6.s64, 0, xer);
	// beq cr6,0x8268e124
	if (cr6.eq) goto loc_8268E124;
	// lbz r6,620(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 620);
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne 0x8268e124
	if (!cr0.eq) goto loc_8268E124;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// clrlwi. r6,r6,31
	ctx.r6.u64 = ctx.r6.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x8268e124
	if (!cr0.eq) goto loc_8268E124;
	// stb r25,620(r8)
	PPC_STORE_U8(ctx.r8.u32 + 620, r25.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mulli r11,r11,624
	r11.s64 = r11.s64 * 624;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r5,r11,280
	ctx.r5.s64 = r11.s64 + 280;
	// ld r11,16(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// extsw r4,r11
	ctx.r4.s64 = r11.s32;
	// bl 0x8267e038
	sub_8267E038(ctx, base);
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mulli r9,r11,624
	ctx.r9.s64 = r11.s64 * 624;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ld r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// stdx r9,r11,r8
	PPC_STORE_U64(r11.u32 + ctx.r8.u32, ctx.r9.u64);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r9,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r9.u32);
loc_8268E124:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x8268e08c
	if (cr6.lt) goto loc_8268E08C;
loc_8268E134:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8268df3c
	if (cr6.eq) goto loc_8268DF3C;
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,60
	ctx.r3.s64 = r11.s64 + 60;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r9,r31,24
	ctx.r9.s64 = r31.s64 + 24;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r8,r11,60
	ctx.r8.s64 = r11.s64 + 60;
	// addi r7,r10,88
	ctx.r7.s64 = ctx.r10.s64 + 88;
	// addi r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 8;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// bl 0x82605248
	sub_82605248(ctx, base);
	// li r11,7
	r11.s64 = 7;
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// bge 0x8268e1c4
	if (!cr0.lt) goto loc_8268E1C4;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-15504
	ctx.r3.s64 = r11.s64 + -15504;
loc_8268E190:
	// bl 0x8267e038
	sub_8267E038(ctx, base);
	// mr r26,r27
	r26.u64 = r27.u64;
loc_8268E198:
	// li r11,13
	r11.s64 = 13;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// b 0x8268e61c
	goto loc_8268E61C;
loc_8268E1A4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-15576
	ctx.r3.s64 = r11.s64 + -15576;
	// bl 0x8267e038
	sub_8267E038(ctx, base);
	// li r11,13
	r11.s64 = 13;
	// mr r26,r27
	r26.u64 = r27.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8268E1BC:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// bne cr6,0x8268e258
	if (!cr6.eq) goto loc_8268E258;
loc_8268E1C4:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(r11.u32, 997, xer);
	// beq cr6,0x8268e640
	if (cr6.eq) goto loc_8268E640;
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,60
	ctx.r3.s64 = r11.s64 + 60;
	// bl 0x82606820
	sub_82606820(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge 0x8268e1f8
	if (!cr0.lt) goto loc_8268E1F8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-15636
	ctx.r3.s64 = r11.s64 + -15636;
	// b 0x8268e190
	goto loc_8268E190;
loc_8268E1F8:
	// cmplwi cr6,r4,1223
	cr6.compare<uint32_t>(ctx.r4.u32, 1223, xer);
	// beq cr6,0x8268e240
	if (cr6.eq) goto loc_8268E240;
	// lis r11,-32681
	r11.s64 = -2141782016;
	// lwz r5,112(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// ori r11,r11,61441
	r11.u64 = r11.u64 | 61441;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, r11.s32, xer);
	// beq cr6,0x8268e240
	if (cr6.eq) goto loc_8268E240;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8268e22c
	if (!cr6.eq) goto loc_8268E22C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-15676
	ctx.r3.s64 = r11.s64 + -15676;
	// bl 0x8267e038
	sub_8267E038(ctx, base);
	// b 0x8268e260
	goto loc_8268E260;
loc_8268E22C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r11,-15740
	ctx.r3.s64 = r11.s64 + -15740;
	// bl 0x8267e038
	sub_8267E038(ctx, base);
	// b 0x8268e198
	goto loc_8268E198;
loc_8268E240:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-15776
	ctx.r3.s64 = r11.s64 + -15776;
	// bl 0x8267e038
	sub_8267E038(ctx, base);
	// li r11,13
	r11.s64 = 13;
	// mr r26,r27
	r26.u64 = r27.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8268E258:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bne cr6,0x8268e268
	if (!cr6.eq) goto loc_8268E268;
loc_8268E260:
	// li r11,9
	r11.s64 = 9;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8268E268:
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x8268e328
	if (!cr6.eq) goto loc_8268E328;
loc_8268E270:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8268e2d4
	if (!cr6.eq) goto loc_8268E2D4;
	// addi r11,r31,120
	r11.s64 = r31.s64 + 120;
	// addi r9,r31,120
	ctx.r9.s64 = r31.s64 + 120;
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82bba010
	sub_82BBA010(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8268e2c4
	if (cr0.eq) goto loc_8268E2C4;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-15832
	ctx.r3.s64 = r11.s64 + -15832;
	// bl 0x8267e038
	sub_8267E038(ctx, base);
	// li r11,13
	r11.s64 = 13;
	// mr r26,r27
	r26.u64 = r27.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// b 0x8268e2c8
	goto loc_8268E2C8;
loc_8268E2C4:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
loc_8268E2C8:
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268e328
	if (cr6.eq) goto loc_8268E328;
loc_8268E2D4:
	// addi r11,r31,120
	r11.s64 = r31.s64 + 120;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,324
	ctx.r3.s64 = r11.s64 + 324;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// addi r10,r31,120
	ctx.r10.s64 = r31.s64 + 120;
	// addi r11,r31,120
	r11.s64 = r31.s64 + 120;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// addi r7,r10,324
	ctx.r7.s64 = ctx.r10.s64 + 324;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,312
	ctx.r5.s64 = 312;
	// addi r4,r11,12
	ctx.r4.s64 = r11.s64 + 12;
	// bl 0x82bba3e0
	sub_82BBA3E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// beq cr6,0x8268e320
	if (cr6.eq) goto loc_8268E320;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-15876
	ctx.r3.s64 = r11.s64 + -15876;
	// b 0x8268e190
	goto loc_8268E190;
loc_8268E320:
	// li r11,10
	r11.s64 = 10;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8268E328:
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// bne cr6,0x8268e4d8
	if (!cr6.eq) goto loc_8268E4D8;
	// lwz r11,444(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 444);
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(r11.u32, 997, xer);
	// beq cr6,0x8268e640
	if (cr6.eq) goto loc_8268E640;
	// addi r10,r31,120
	ctx.r10.s64 = r31.s64 + 120;
	// addi r11,r31,120
	r11.s64 = r31.s64 + 120;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// addi r3,r11,324
	ctx.r3.s64 = r11.s64 + 324;
	// bl 0x82606820
	sub_82606820(ctx, base);
	// addi r11,r31,120
	r11.s64 = r31.s64 + 120;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r11,324
	ctx.r3.s64 = r11.s64 + 324;
	// bl 0x826068b8
	sub_826068B8(ctx, base);
	// lwz r6,124(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8268e460
	if (!cr6.eq) goto loc_8268E460;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x8268e4bc
	if (!cr6.eq) goto loc_8268E4BC;
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x8268e458
	if (!cr6.eq) goto loc_8268E458;
	// lis r10,22593
	ctx.r10.s64 = 1480654848;
	// lwz r11,440(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 440);
	// ori r10,r10,2921
	ctx.r10.u64 = ctx.r10.u64 | 2921;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8268e458
	if (!cr6.eq) goto loc_8268E458;
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268e3f0
	if (cr0.eq) goto loc_8268E3F0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8268e3f0
	if (cr6.eq) goto loc_8268E3F0;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8268E3BC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r31,120
	ctx.r10.s64 = r31.s64 + 120;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r4,r10,20
	ctx.r4.s64 = ctx.r10.s64 + 20;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x828efc88
	sub_828EFC88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8268e434
	if (cr0.eq) goto loc_8268E434;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,624
	r30.s64 = r30.s64 + 624;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8268e3bc
	if (cr6.lt) goto loc_8268E3BC;
loc_8268E3F0:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8268E3F4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,476(r31)
	PPC_STORE_U32(r31.u32 + 476, r11.u32);
	// beq cr6,0x8268e444
	if (cr6.eq) goto loc_8268E444;
	// lbz r10,621(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 621);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8268e458
	if (!cr0.eq) goto loc_8268E458;
	// stb r25,620(r11)
	PPC_STORE_U8(r11.u32 + 620, r25.u8);
	// addi r10,r31,120
	ctx.r10.s64 = r31.s64 + 120;
	// lwz r11,476(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 476);
	// addi r3,r11,308
	ctx.r3.s64 = r11.s64 + 308;
	// addi r4,r10,12
	ctx.r4.s64 = ctx.r10.s64 + 12;
	// li r5,312
	ctx.r5.s64 = 312;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// li r11,11
	r11.s64 = 11;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// b 0x8268e4e0
	goto loc_8268E4E0;
loc_8268E434:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mulli r10,r29,624
	ctx.r10.s64 = r29.s64 * 624;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8268e3f4
	goto loc_8268E3F4;
loc_8268E444:
	// addi r11,r31,120
	r11.s64 = r31.s64 + 120;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,20
	ctx.r4.s64 = r11.s64 + 20;
	// addi r3,r10,-15912
	ctx.r3.s64 = ctx.r10.s64 + -15912;
	// bl 0x8267e038
	sub_8267E038(ctx, base);
loc_8268E458:
	// li r11,9
	r11.s64 = 9;
	// b 0x8268e63c
	goto loc_8268E63C;
loc_8268E460:
	// cmplwi cr6,r30,1627
	cr6.compare<uint32_t>(r30.u32, 1627, xer);
	// bne cr6,0x8268e4bc
	if (!cr6.eq) goto loc_8268E4BC;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,18
	r11.u64 = r11.u64 | 18;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bne cr6,0x8268e4bc
	if (!cr6.eq) goto loc_8268E4BC;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x82e83e40
	sub_82E83E40(ctx, base);
	// stw r24,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r24.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r11,r24
	r11.u64 = r24.u64;
	// bl 0x8268d620
	sub_8268D620(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268e4a8
	if (cr0.eq) goto loc_8268E4A8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-15964
	ctx.r3.s64 = r11.s64 + -15964;
	// bl 0x8267e038
	sub_8267E038(ctx, base);
	// b 0x8268e198
	goto loc_8268E198;
loc_8268E4A8:
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r24,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r24.u32);
	// mr r11,r24
	r11.u64 = r24.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// b 0x8268e640
	goto loc_8268E640;
loc_8268E4BC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,-16032
	ctx.r3.s64 = r11.s64 + -16032;
	// bl 0x8267e038
	sub_8267E038(ctx, base);
	// li r11,13
	r11.s64 = 13;
	// mr r26,r27
	r26.u64 = r27.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8268E4D8:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// bne cr6,0x8268e584
	if (!cr6.eq) goto loc_8268E584;
loc_8268E4E0:
	// lwz r11,476(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 476);
	// addi r10,r31,120
	ctx.r10.s64 = r31.s64 + 120;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r5,r11,280
	ctx.r5.s64 = r11.s64 + 280;
	// addi r3,r9,-16084
	ctx.r3.s64 = ctx.r9.s64 + -16084;
	// addi r4,r10,20
	ctx.r4.s64 = ctx.r10.s64 + 20;
	// bl 0x8267e038
	sub_8267E038(ctx, base);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r11,r31,476
	r11.s64 = r31.s64 + 476;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r24,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r24.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// addi r11,r31,120
	r11.s64 = r31.s64 + 120;
	// addi r9,r31,476
	ctx.r9.s64 = r31.s64 + 476;
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r3,255
	ctx.r3.s64 = 255;
	// lwz r11,476(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 476);
	// addi r4,r11,280
	ctx.r4.s64 = r11.s64 + 280;
	// bl 0x82bb9ec8
	sub_82BB9EC8(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// beq cr6,0x8268e57c
	if (cr6.eq) goto loc_8268E57C;
	// addi r11,r31,120
	r11.s64 = r31.s64 + 120;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,20
	ctx.r4.s64 = r11.s64 + 20;
	// addi r3,r10,-16116
	ctx.r3.s64 = ctx.r10.s64 + -16116;
	// bl 0x8267e038
	sub_8267E038(ctx, base);
loc_8268E570:
	// li r11,9
	r11.s64 = 9;
	// mr r26,r27
	r26.u64 = r27.u64;
	// b 0x8268e63c
	goto loc_8268E63C;
loc_8268E57C:
	// li r11,12
	r11.s64 = 12;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8268E584:
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x8268e614
	if (!cr6.eq) goto loc_8268E614;
	// lwz r11,480(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 480);
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(r11.u32, 997, xer);
	// beq cr6,0x8268e640
	if (cr6.eq) goto loc_8268E640;
	// addi r11,r31,476
	r11.s64 = r31.s64 + 476;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82606820
	sub_82606820(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x8268e5cc
	if (!cr0.lt) goto loc_8268E5CC;
	// addi r11,r31,120
	r11.s64 = r31.s64 + 120;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,20
	ctx.r4.s64 = r11.s64 + 20;
	// addi r3,r10,-16164
	ctx.r3.s64 = ctx.r10.s64 + -16164;
	// bl 0x8267e038
	sub_8267E038(ctx, base);
	// b 0x8268e570
	goto loc_8268E570;
loc_8268E5CC:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8268e610
	if (!cr6.eq) goto loc_8268E610;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// bne cr6,0x8268e5ec
	if (!cr6.eq) goto loc_8268E5EC;
	// lwz r11,476(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 476);
	// stb r25,621(r11)
	PPC_STORE_U8(r11.u32 + 621, r25.u8);
	// b 0x8268e604
	goto loc_8268E604;
loc_8268E5EC:
	// addi r11,r31,120
	r11.s64 = r31.s64 + 120;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,20
	ctx.r4.s64 = r11.s64 + 20;
	// addi r3,r10,-16216
	ctx.r3.s64 = ctx.r10.s64 + -16216;
	// bl 0x8267e038
	sub_8267E038(ctx, base);
	// mr r26,r27
	r26.u64 = r27.u64;
loc_8268E604:
	// li r11,9
	r11.s64 = 9;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// b 0x8268e614
	goto loc_8268E614;
loc_8268E610:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
loc_8268E614:
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// bne cr6,0x8268e640
	if (!cr6.eq) goto loc_8268E640;
loc_8268E61C:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8268e638
	if (cr6.eq) goto loc_8268E638;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x82e83e40
	sub_82E83E40(ctx, base);
	// mr r11,r24
	r11.u64 = r24.u64;
	// stw r24,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r24.u32);
loc_8268E638:
	// li r11,14
	r11.s64 = 14;
loc_8268E63C:
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8268E640:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8268E648"))) PPC_WEAK_FUNC(sub_8268E648);
PPC_FUNC_IMPL(__imp__sub_8268E648) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8268E64C"))) PPC_WEAK_FUNC(sub_8268E64C);
PPC_FUNC_IMPL(__imp__sub_8268E64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268E650"))) PPC_WEAK_FUNC(sub_8268E650);
PPC_FUNC_IMPL(__imp__sub_8268E650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x8268d6a0
	sub_8268D6A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8268e680
	if (cr0.lt) goto loc_8268E680;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// li r11,1
	r11.s64 = 1;
	// stw r11,12436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12436, r11.u32);
	// bl 0x8268dee0
	sub_8268DEE0(ctx, base);
	// srawi r11,r3,31
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = r11.u64 & ctx.r3.u64;
loc_8268E680:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8268E68C"))) PPC_WEAK_FUNC(sub_8268E68C);
PPC_FUNC_IMPL(__imp__sub_8268E68C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268E690"))) PPC_WEAK_FUNC(sub_8268E690);
PPC_FUNC_IMPL(__imp__sub_8268E690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x8268dd38
	sub_8268DD38(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268e6c0
	if (cr0.eq) goto loc_8268E6C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267dc00
	sub_8267DC00(ctx, base);
loc_8268E6C0:
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

__attribute__((alias("__imp__sub_8268E6D8"))) PPC_WEAK_FUNC(sub_8268E6D8);
PPC_FUNC_IMPL(__imp__sub_8268E6D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268E6DC"))) PPC_WEAK_FUNC(sub_8268E6DC);
PPC_FUNC_IMPL(__imp__sub_8268E6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268E6E0"))) PPC_WEAK_FUNC(sub_8268E6E0);
PPC_FUNC_IMPL(__imp__sub_8268E6E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x826823a0
	sub_826823A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268E6E0"))) PPC_WEAK_FUNC(sub_8268E6E0);
PPC_FUNC_IMPL(__imp__sub_8268E6E0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8268E6E4"))) PPC_WEAK_FUNC(sub_8268E6E4);
PPC_FUNC_IMPL(__imp__sub_8268E6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268E6E8"))) PPC_WEAK_FUNC(sub_8268E6E8);
PPC_FUNC_IMPL(__imp__sub_8268E6E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// addi r11,r11,-15376
	r11.s64 = r11.s64 + -15376;
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r8,12940(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12940);
	// lwz r11,12936(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12936);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r11,12944(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12944);
	// stw r9,12936(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12936, ctx.r9.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r8,12940(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12940, ctx.r8.u32);
	// beq cr6,0x8268e72c
	if (cr6.eq) goto loc_8268E72C;
	// stw r3,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r3.u32);
	// lwz r11,12944(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12944);
loc_8268E72C:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lis r11,-32768
	r11.s64 = -2147483648;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,16389
	r11.u64 = r11.u64 | 16389;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r3,12944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12944, ctx.r3.u32);
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stb r9,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r9.u8);
	// stb r9,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r9.u8);
}

__attribute__((alias("__imp__sub_8268E75C"))) PPC_WEAK_FUNC(sub_8268E75C);
PPC_FUNC_IMPL(__imp__sub_8268E75C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268E760"))) PPC_WEAK_FUNC(sub_8268E760);
PPC_FUNC_IMPL(__imp__sub_8268E760) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r11,r11,-15376
	r11.s64 = r11.s64 + -15376;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x8268e790
	if (cr6.eq) goto loc_8268E790;
	// bl 0x8268a308
	sub_8268A308(ctx, base);
loc_8268E790:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8268e7a8
	if (cr6.eq) goto loc_8268E7A8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// b 0x8268e7b4
	goto loc_8268E7B4;
loc_8268E7A8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,12944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12944, r11.u32);
loc_8268E7B4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8268e7c8
	if (cr6.eq) goto loc_8268E7C8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_8268E7C8:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r11,12940(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12940);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12940(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12940, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268E7E8"))) PPC_WEAK_FUNC(sub_8268E7E8);
PPC_FUNC_IMPL(__imp__sub_8268E7E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268E7EC"))) PPC_WEAK_FUNC(sub_8268E7EC);
PPC_FUNC_IMPL(__imp__sub_8268E7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268E7F0"))) PPC_WEAK_FUNC(sub_8268E7F0);
PPC_FUNC_IMPL(__imp__sub_8268E7F0) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x8268e834
	if (!cr6.lt) goto loc_8268E834;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8268e888
	goto loc_8268E888;
loc_8268E834:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8268e884
	if (!cr6.eq) goto loc_8268E884;
	// lbz r11,12(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8268e868
	if (!cr0.eq) goto loc_8268E868;
	// lis r30,-31933
	r30.s64 = -2092761088;
loc_8268E854:
	// lwz r3,11956(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 11956);
	// bl 0x8267e5d0
	sub_8267E5D0(ctx, base);
	// lbz r11,12(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268e854
	if (cr0.eq) goto loc_8268E854;
loc_8268E868:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,20(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268E884:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8268E888:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268E89C"))) PPC_WEAK_FUNC(sub_8268E89C);
PPC_FUNC_IMPL(__imp__sub_8268E89C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268E8A0"))) PPC_WEAK_FUNC(sub_8268E8A0);
PPC_FUNC_IMPL(__imp__sub_8268E8A0) {
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
	// lis r11,-32688
	r11.s64 = -2142240768;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x8268e974
	if (cr6.eq) goto loc_8268E974;
	// lis r11,-32681
	r11.s64 = -2141782016;
	// ori r11,r11,403
	r11.u64 = r11.u64 | 403;
	// subf. r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268e954
	if (cr0.eq) goto loc_8268E954;
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(r11.u32, 97, xer);
	// beq cr6,0x8268e934
	if (cr6.eq) goto loc_8268E934;
	// lis r10,32680
	ctx.r10.s64 = 2141716480;
	// ori r10,r10,65137
	ctx.r10.u64 = ctx.r10.u64 | 65137;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8268e914
	if (cr6.eq) goto loc_8268E914;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8268e90c
	if (!cr6.lt) goto loc_8268E90C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-14968
	ctx.r4.s64 = r11.s64 + -14968;
	// addi r3,r10,-15024
	ctx.r3.s64 = ctx.r10.s64 + -15024;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
loc_8268E90C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8268e990
	goto loc_8268E990;
loc_8268E914:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-15112
	ctx.r4.s64 = r11.s64 + -15112;
	// addi r3,r10,-15024
	ctx.r3.s64 = ctx.r10.s64 + -15024;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// lis r3,-32680
	ctx.r3.s64 = -2141716480;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// b 0x8268e990
	goto loc_8268E990;
loc_8268E934:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-15200
	ctx.r4.s64 = r11.s64 + -15200;
	// addi r3,r10,-15024
	ctx.r3.s64 = ctx.r10.s64 + -15024;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// lis r3,-32680
	ctx.r3.s64 = -2141716480;
	// ori r3,r3,7
	ctx.r3.u64 = ctx.r3.u64 | 7;
	// b 0x8268e990
	goto loc_8268E990;
loc_8268E954:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-15296
	ctx.r4.s64 = r11.s64 + -15296;
	// addi r3,r10,-15024
	ctx.r3.s64 = ctx.r10.s64 + -15024;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// lis r3,-32680
	ctx.r3.s64 = -2141716480;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x8268e990
	goto loc_8268E990;
loc_8268E974:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-15360
	ctx.r4.s64 = r11.s64 + -15360;
	// addi r3,r10,-15024
	ctx.r3.s64 = ctx.r10.s64 + -15024;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// lis r3,-32680
	ctx.r3.s64 = -2141716480;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
loc_8268E990:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268E9A0"))) PPC_WEAK_FUNC(sub_8268E9A0);
PPC_FUNC_IMPL(__imp__sub_8268E9A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268E9A4"))) PPC_WEAK_FUNC(sub_8268E9A4);
PPC_FUNC_IMPL(__imp__sub_8268E9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268E9A8"))) PPC_WEAK_FUNC(sub_8268E9A8);
PPC_FUNC_IMPL(__imp__sub_8268E9A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lbz r11,36(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268e9d8
	if (cr0.eq) goto loc_8268E9D8;
	// lis r11,-32680
	r11.s64 = -2141716480;
	// ori r11,r11,9
	r11.u64 = r11.u64 | 9;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// b 0x8268e9e8
	goto loc_8268E9E8;
loc_8268E9D8:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x8268a2c0
	sub_8268A2C0(ctx, base);
	// bl 0x8268e8a0
	sub_8268E8A0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
loc_8268E9E8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268EA0C"))) PPC_WEAK_FUNC(sub_8268EA0C);
PPC_FUNC_IMPL(__imp__sub_8268EA0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268EA10"))) PPC_WEAK_FUNC(sub_8268EA10);
PPC_FUNC_IMPL(__imp__sub_8268EA10) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8268ea5c
	if (cr6.eq) goto loc_8268EA5C;
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8268ea64
	goto loc_8268EA64;
loc_8268EA5C:
	// li r11,1
	r11.s64 = 1;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
loc_8268EA64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268EA74"))) PPC_WEAK_FUNC(sub_8268EA74);
PPC_FUNC_IMPL(__imp__sub_8268EA74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268EA78"))) PPC_WEAK_FUNC(sub_8268EA78);
PPC_FUNC_IMPL(__imp__sub_8268EA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,36(r11)
	PPC_STORE_U8(r11.u32 + 36, ctx.r10.u8);
	// stw r9,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_8268EA90"))) PPC_WEAK_FUNC(sub_8268EA90);
PPC_FUNC_IMPL(__imp__sub_8268EA90) {
	PPC_FUNC_PROLOGUE();
	// b 0x8268a308
	sub_8268A308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268EA94"))) PPC_WEAK_FUNC(sub_8268EA94);
PPC_FUNC_IMPL(__imp__sub_8268EA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268EA98"))) PPC_WEAK_FUNC(sub_8268EA98);
PPC_FUNC_IMPL(__imp__sub_8268EA98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x8268e760
	sub_8268E760(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268eac8
	if (cr0.eq) goto loc_8268EAC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82682460
	sub_82682460(ctx, base);
loc_8268EAC8:
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

__attribute__((alias("__imp__sub_8268EAE0"))) PPC_WEAK_FUNC(sub_8268EAE0);
PPC_FUNC_IMPL(__imp__sub_8268EAE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268EAE4"))) PPC_WEAK_FUNC(sub_8268EAE4);
PPC_FUNC_IMPL(__imp__sub_8268EAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268EAE8"))) PPC_WEAK_FUNC(sub_8268EAE8);
PPC_FUNC_IMPL(__imp__sub_8268EAE8) {
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
	// lis r11,-31964
	r11.s64 = -2094792704;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r30,r11,1520
	r30.s64 = r11.s64 + 1520;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268eb58
	if (cr6.eq) goto loc_8268EB58;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_8268EB30:
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// bne cr6,0x8268eb48
	if (!cr6.eq) goto loc_8268EB48;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// beq cr6,0x8268ebe0
	if (cr6.eq) goto loc_8268EBE0;
loc_8268EB48:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8268eb30
	if (cr6.lt) goto loc_8268EB30;
loc_8268EB58:
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268eb90
	if (cr6.eq) goto loc_8268EB90;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_8268EB68:
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// bne cr6,0x8268eb80
	if (!cr6.eq) goto loc_8268EB80;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8268ebf4
	if (cr6.eq) goto loc_8268EBF4;
loc_8268EB80:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8268eb68
	if (cr6.lt) goto loc_8268EB68;
loc_8268EB90:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-14272
	ctx.r4.s64 = r11.s64 + -14272;
	// addi r3,r10,-14304
	ctx.r3.s64 = ctx.r10.s64 + -14304;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r9,r11,0
	ctx.r9.s64 = r11.s64 + 0;
	// ori r10,r10,16389
	ctx.r10.u64 = ctx.r10.u64 | 16389;
	// addic r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = r11.u64 & ctx.r10.u64;
loc_8268EBC8:
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
loc_8268EBE0:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8268ebc8
	goto loc_8268EBC8;
loc_8268EBF4:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r4,r10,-14392
	ctx.r4.s64 = ctx.r10.s64 + -14392;
	// addi r3,r9,-14304
	ctx.r3.s64 = ctx.r9.s64 + -14304;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// bl 0x8267dee0
	sub_8267DEE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_8268EC1C"))) PPC_WEAK_FUNC(sub_8268EC1C);
PPC_FUNC_IMPL(__imp__sub_8268EC1C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8268ebc8
	// ERROR 8268EBC8
	return;
}

__attribute__((alias("__imp__sub_8268EC20"))) PPC_WEAK_FUNC(sub_8268EC20);
PPC_FUNC_IMPL(__imp__sub_8268EC20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r11,12956
	ctx.r5.s64 = r11.s64 + 12956;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x8268eae8
	sub_8268EAE8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x8268ec54
	if (!cr0.lt) goto loc_8268EC54;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-14036
	ctx.r4.s64 = r11.s64 + -14036;
	// b 0x8268ecb4
	goto loc_8268ECB4;
loc_8268EC54:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,12948
	ctx.r5.s64 = r11.s64 + 12948;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268eae8
	sub_8268EAE8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x8268ec90
	if (!cr0.lt) goto loc_8268EC90;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-14096
	ctx.r4.s64 = r11.s64 + -14096;
	// addi r3,r10,-14124
	ctx.r3.s64 = ctx.r10.s64 + -14124;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// b 0x8268eccc
	goto loc_8268ECCC;
loc_8268EC90:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,12952
	ctx.r5.s64 = r11.s64 + 12952;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8268eae8
	sub_8268EAE8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x8268eccc
	if (!cr0.lt) goto loc_8268ECCC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-14192
	ctx.r4.s64 = r11.s64 + -14192;
loc_8268ECB4:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r10,-14124
	ctx.r3.s64 = ctx.r10.s64 + -14124;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
loc_8268ECCC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8268ECD4"))) PPC_WEAK_FUNC(sub_8268ECD4);
PPC_FUNC_IMPL(__imp__sub_8268ECD4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8268ECD8"))) PPC_WEAK_FUNC(sub_8268ECD8);
PPC_FUNC_IMPL(__imp__sub_8268ECD8) {
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
	// bl 0x82bb9388
	sub_82BB9388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82bb9588
	sub_82BB9588(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8268ec20
	sub_8268EC20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268ED0C"))) PPC_WEAK_FUNC(sub_8268ED0C);
PPC_FUNC_IMPL(__imp__sub_8268ED0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268ED10"))) PPC_WEAK_FUNC(sub_8268ED10);
PPC_FUNC_IMPL(__imp__sub_8268ED10) {
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r10,-18260
	ctx.r4.s64 = ctx.r10.s64 + -18260;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_8268ED50"))) PPC_WEAK_FUNC(sub_8268ED50);
PPC_FUNC_IMPL(__imp__sub_8268ED50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268ED54"))) PPC_WEAK_FUNC(sub_8268ED54);
PPC_FUNC_IMPL(__imp__sub_8268ED54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268ED58"))) PPC_WEAK_FUNC(sub_8268ED58);
PPC_FUNC_IMPL(__imp__sub_8268ED58) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x8268ed7c
	if (!cr6.eq) goto loc_8268ED7C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268ED7C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r10,-26044
	ctx.r4.s64 = ctx.r10.s64 + -26044;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_8268EDA8"))) PPC_WEAK_FUNC(sub_8268EDA8);
PPC_FUNC_IMPL(__imp__sub_8268EDA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268EDAC"))) PPC_WEAK_FUNC(sub_8268EDAC);
PPC_FUNC_IMPL(__imp__sub_8268EDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268EDB0"))) PPC_WEAK_FUNC(sub_8268EDB0);
PPC_FUNC_IMPL(__imp__sub_8268EDB0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,255
	cr6.compare<int32_t>(ctx.r4.s32, 255, xer);
	// bne cr6,0x8268ee20
	if (!cr6.eq) goto loc_8268EE20;
	// li r30,0
	r30.s64 = 0;
loc_8268EDD8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// beq cr6,0x8268ee08
	if (cr6.eq) goto loc_8268EE08;
	// cmpldi cr6,r3,1
	cr6.compare<uint64_t>(ctx.r3.u64, 1, xer);
	// bne cr6,0x8268ee18
	if (!cr6.eq) goto loc_8268EE18;
loc_8268EE08:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x8268edd8
	if (cr6.lt) goto loc_8268EDD8;
loc_8268EE14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268EE18:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9468
	return;
loc_8268EE20:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8268ee14
	if (cr6.lt) goto loc_8268EE14;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bge cr6,0x8268ee14
	if (!cr6.lt) goto loc_8268EE14;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bba508
	sub_82BBA508(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8268ee14
	if (!cr0.eq) goto loc_8268EE14;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x8268ee14
	if (cr6.eq) goto loc_8268EE14;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8268ee14
	if (!cr6.eq) goto loc_8268EE14;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268ee70
	if (cr0.eq) goto loc_8268EE70;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8268ee18
	goto loc_8268EE18;
loc_8268EE70:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8268ee88
	if (cr6.eq) goto loc_8268EE88;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
loc_8268EE88:
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
}

__attribute__((alias("__imp__sub_8268EE8C"))) PPC_WEAK_FUNC(sub_8268EE8C);
PPC_FUNC_IMPL(__imp__sub_8268EE8C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8268ee18
	// ERROR 8268EE18
	return;
}

__attribute__((alias("__imp__sub_8268EE90"))) PPC_WEAK_FUNC(sub_8268EE90);
PPC_FUNC_IMPL(__imp__sub_8268EE90) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// beq cr6,0x8268eec8
	if (cr6.eq) goto loc_8268EEC8;
	// cmpldi cr6,r3,1
	cr6.compare<uint64_t>(ctx.r3.u64, 1, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x8268eecc
	if (!cr6.eq) goto loc_8268EECC;
loc_8268EEC8:
	// li r11,0
	r11.s64 = 0;
loc_8268EECC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8268EEDC"))) PPC_WEAK_FUNC(sub_8268EEDC);
PPC_FUNC_IMPL(__imp__sub_8268EEDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268EEE0"))) PPC_WEAK_FUNC(sub_8268EEE0);
PPC_FUNC_IMPL(__imp__sub_8268EEE0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// beq cr6,0x8268ef3c
	if (cr6.eq) goto loc_8268EF3C;
	// cmpldi cr6,r4,1
	cr6.compare<uint64_t>(ctx.r4.u64, 1, xer);
	// beq cr6,0x8268ef3c
	if (cr6.eq) goto loc_8268EF3C;
	// li r31,0
	r31.s64 = 0;
loc_8268EF08:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpld cr6,r30,r3
	cr6.compare<uint64_t>(r30.u64, ctx.r3.u64, xer);
	// beq cr6,0x8268ef48
	if (cr6.eq) goto loc_8268EF48;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x8268ef08
	if (cr6.lt) goto loc_8268EF08;
loc_8268EF3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8268EF48:
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_8268EF4C"))) PPC_WEAK_FUNC(sub_8268EF4C);
PPC_FUNC_IMPL(__imp__sub_8268EF4C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8268ef40
	// ERROR 8268EF40
	return;
}

__attribute__((alias("__imp__sub_8268EF50"))) PPC_WEAK_FUNC(sub_8268EF50);
PPC_FUNC_IMPL(__imp__sub_8268EF50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,17(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x8268ef70
	if (!cr0.eq) goto loc_8268EF70;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_8268EF70:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x8268ef90
	if (!cr6.eq) goto loc_8268EF90;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x8268efac
	goto loc_8268EFAC;
loc_8268EF90:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x8268efa8
	if (!cr6.eq) goto loc_8268EFA8;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// b 0x8268efac
	goto loc_8268EFAC;
loc_8268EFA8:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_8268EFAC:
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
}

__attribute__((alias("__imp__sub_8268EFB4"))) PPC_WEAK_FUNC(sub_8268EFB4);
PPC_FUNC_IMPL(__imp__sub_8268EFB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268EFB8"))) PPC_WEAK_FUNC(sub_8268EFB8);
PPC_FUNC_IMPL(__imp__sub_8268EFB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8268efd0
	if (cr0.eq) goto loc_8268EFD0;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x8268f03c
	goto loc_8268F03C;
loc_8268EFD0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,17(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x8268f01c
	if (!cr0.eq) goto loc_8268F01C;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8268eff0
	goto loc_8268EFF0;
loc_8268EFE8:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_8268EFF0:
	// lbz r9,17(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x8268efe8
	if (cr0.eq) goto loc_8268EFE8;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8268F004:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8268f02c
	if (!cr6.eq) goto loc_8268F02C;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
loc_8268F01C:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8268f004
	if (cr0.eq) goto loc_8268F004;
loc_8268F02C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,17(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
loc_8268F03C:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_8268F040"))) PPC_WEAK_FUNC(sub_8268F040);
PPC_FUNC_IMPL(__imp__sub_8268F040) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268F044"))) PPC_WEAK_FUNC(sub_8268F044);
PPC_FUNC_IMPL(__imp__sub_8268F044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268F048"))) PPC_WEAK_FUNC(sub_8268F048);
PPC_FUNC_IMPL(__imp__sub_8268F048) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82686d90
	sub_82686D90(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r11.u8);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268F098"))) PPC_WEAK_FUNC(sub_8268F098);
PPC_FUNC_IMPL(__imp__sub_8268F098) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268F09C"))) PPC_WEAK_FUNC(sub_8268F09C);
PPC_FUNC_IMPL(__imp__sub_8268F09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268F0A0"))) PPC_WEAK_FUNC(sub_8268F0A0);
PPC_FUNC_IMPL(__imp__sub_8268F0A0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// bl 0x826957e0
	sub_826957E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826051f8
	sub_826051F8(ctx, base);
	// stw r3,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8268f0dc
	if (cr6.eq) goto loc_8268F0DC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x8268f0e0
	if (!cr6.eq) goto loc_8268F0E0;
loc_8268F0DC:
	// li r11,0
	r11.s64 = 0;
loc_8268F0E0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8268f118
	if (!cr0.eq) goto loc_8268F118;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r4,-32684
	ctx.r4.s64 = -2141978624;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r5,r10,-13904
	ctx.r5.s64 = ctx.r10.s64 + -13904;
	// ori r4,r4,43
	ctx.r4.u64 = ctx.r4.u64 | 43;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r3,-32684
	ctx.r3.s64 = -2141978624;
	// ori r3,r3,43
	ctx.r3.u64 = ctx.r3.u64 | 43;
	// b 0x8268f11c
	goto loc_8268F11C;
loc_8268F118:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268F11C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268F12C"))) PPC_WEAK_FUNC(sub_8268F12C);
PPC_FUNC_IMPL(__imp__sub_8268F12C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268F130"))) PPC_WEAK_FUNC(sub_8268F130);
PPC_FUNC_IMPL(__imp__sub_8268F130) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
}

__attribute__((alias("__imp__sub_8268F138"))) PPC_WEAK_FUNC(sub_8268F138);
PPC_FUNC_IMPL(__imp__sub_8268F138) {
	PPC_FUNC_PROLOGUE();
	// b 0x8268f0a0
	sub_8268F0A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268F13C"))) PPC_WEAK_FUNC(sub_8268F13C);
PPC_FUNC_IMPL(__imp__sub_8268F13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268F140"))) PPC_WEAK_FUNC(sub_8268F140);
PPC_FUNC_IMPL(__imp__sub_8268F140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8268F15C"))) PPC_WEAK_FUNC(sub_8268F15C);
PPC_FUNC_IMPL(__imp__sub_8268F15C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268F160"))) PPC_WEAK_FUNC(sub_8268F160);
PPC_FUNC_IMPL(__imp__sub_8268F160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8268f1bc
	if (!cr0.eq) goto loc_8268F1BC;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_8268F17C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x8268f190
	if (!cr6.lt) goto loc_8268F190;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x8268f1b0
	goto loc_8268F1B0;
loc_8268F190:
	// lbz r9,17(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 17);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x8268f1a8
	if (cr0.eq) goto loc_8268F1A8;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x8268f1a8
	if (!cr6.lt) goto loc_8268F1A8;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
loc_8268F1A8:
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8268F1B0:
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8268f17c
	if (cr0.eq) goto loc_8268F17C;
loc_8268F1BC:
	// lbz r11,17(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268f1d4
	if (cr0.eq) goto loc_8268F1D4;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8268f1d8
	goto loc_8268F1D8;
loc_8268F1D4:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_8268F1D8:
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8268f210
	if (!cr0.eq) goto loc_8268F210;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_8268F1E8:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x8268f200
	if (!cr6.lt) goto loc_8268F200;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8268f204
	goto loc_8268F204;
loc_8268F200:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_8268F204:
	// lbz r8,17(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x8268f1e8
	if (cr0.eq) goto loc_8268F1E8;
loc_8268F210:
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
}

__attribute__((alias("__imp__sub_8268F218"))) PPC_WEAK_FUNC(sub_8268F218);
PPC_FUNC_IMPL(__imp__sub_8268F218) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268F21C"))) PPC_WEAK_FUNC(sub_8268F21C);
PPC_FUNC_IMPL(__imp__sub_8268F21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268F220"))) PPC_WEAK_FUNC(sub_8268F220);
PPC_FUNC_IMPL(__imp__sub_8268F220) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x82686d90
	sub_82686D90(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r11,1
	r11.s64 = 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stb r11,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, r11.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stb r11,17(r10)
	PPC_STORE_U8(ctx.r10.u32 + 17, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268F284"))) PPC_WEAK_FUNC(sub_8268F284);
PPC_FUNC_IMPL(__imp__sub_8268F284) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268F288"))) PPC_WEAK_FUNC(sub_8268F288);
PPC_FUNC_IMPL(__imp__sub_8268F288) {
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
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8268f2c8
	if (cr6.lt) goto loc_8268F2C8;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82686da0
	sub_82686DA0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,5516
	ctx.r3.s64 = r11.s64 + 5516;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_8268F2C8:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r6,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// bne cr6,0x8268f2f4
	if (!cr6.eq) goto loc_8268F2F4;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x8268f32c
	goto loc_8268F32C;
loc_8268F2F4:
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268f318
	if (cr0.eq) goto loc_8268F318;
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x8268f330
	if (!cr6.eq) goto loc_8268F330;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// b 0x8268f330
	goto loc_8268F330;
loc_8268F318:
	// stw r28,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x8268f330
	if (!cr6.eq) goto loc_8268F330;
loc_8268F32C:
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
loc_8268F330:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r31,r28
	r31.u64 = r28.u64;
	// li r29,1
	r29.s64 = 1;
	// lbz r11,16(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8268f430
	if (!cr0.eq) goto loc_8268F430;
	// li r27,0
	r27.s64 = 0;
loc_8268F34C:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x8268f3b0
	if (!cr6.eq) goto loc_8268F3B0;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8268f3c0
	if (cr0.eq) goto loc_8268F3C0;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8268f388
	if (!cr6.eq) goto loc_8268F388;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82694cb8
	sub_82694CB8(ctx, base);
loc_8268F388:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,16(r11)
	PPC_STORE_U8(r11.u32 + 16, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r27,16(r11)
	PPC_STORE_U8(r11.u32 + 16, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8268ef50
	sub_8268EF50(ctx, base);
	// b 0x8268f420
	goto loc_8268F420;
loc_8268F3B0:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8268f3e4
	if (!cr0.eq) goto loc_8268F3E4;
loc_8268F3C0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stb r29,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, r29.u8);
	// stb r29,16(r11)
	PPC_STORE_U8(r11.u32 + 16, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r27,16(r11)
	PPC_STORE_U8(r11.u32 + 16, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8268f420
	goto loc_8268F420;
loc_8268F3E4:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8268f3fc
	if (!cr6.eq) goto loc_8268F3FC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8268ef50
	sub_8268EF50(ctx, base);
loc_8268F3FC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,16(r11)
	PPC_STORE_U8(r11.u32 + 16, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r27,16(r11)
	PPC_STORE_U8(r11.u32 + 16, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82694cb8
	sub_82694CB8(ctx, base);
loc_8268F420:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r11,16(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268f34c
	if (cr0.eq) goto loc_8268F34C;
loc_8268F430:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r28,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r28.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r29,16(r11)
	PPC_STORE_U8(r11.u32 + 16, r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8268F448"))) PPC_WEAK_FUNC(sub_8268F448);
PPC_FUNC_IMPL(__imp__sub_8268F448) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8268F44C"))) PPC_WEAK_FUNC(sub_8268F44C);
PPC_FUNC_IMPL(__imp__sub_8268F44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268F450"))) PPC_WEAK_FUNC(sub_8268F450);
PPC_FUNC_IMPL(__imp__sub_8268F450) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8268f498
	if (cr6.eq) goto loc_8268F498;
loc_8268F478:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82694c40
	sub_82694C40(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x8268f478
	if (!cr6.eq) goto loc_8268F478;
loc_8268F498:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268F4AC"))) PPC_WEAK_FUNC(sub_8268F4AC);
PPC_FUNC_IMPL(__imp__sub_8268F4AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268F4B0"))) PPC_WEAK_FUNC(sub_8268F4B0);
PPC_FUNC_IMPL(__imp__sub_8268F4B0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,1
	r25.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8268f538
	if (!cr0.eq) goto loc_8268F538;
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
loc_8268F4EC:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8268f50c
	if (cr6.eq) goto loc_8268F50C;
	// li r7,-1
	ctx.r7.s64 = -1;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r29,r7
	temp.u64 = ~ctx.r7.u64 + xer.ca;
	xer.ca = temp.u64 < xer.ca;
	r29.u64 = temp.u64;
	// b 0x8268f518
	goto loc_8268F518;
loc_8268F50C:
	// subfc r10,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r29,r10,31
	r29.u64 = ctx.r10.u32 & 0x1;
loc_8268F518:
	// clrlwi. r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8268f528
	if (cr0.eq) goto loc_8268F528;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8268f52c
	goto loc_8268F52C;
loc_8268F528:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_8268F52C:
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8268f4ec
	if (cr0.eq) goto loc_8268F4EC;
loc_8268F538:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r28,r30
	r28.u64 = r30.u64;
	// beq 0x8268f58c
	if (cr0.eq) goto loc_8268F58C;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8268f584
	if (!cr6.eq) goto loc_8268F584;
	// li r5,1
	ctx.r5.s64 = 1;
loc_8268F560:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// bl 0x8268f288
	sub_8268F288(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r25,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r25.u8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8268f5bc
	goto loc_8268F5BC;
loc_8268F584:
	// bl 0x8268efb8
	sub_8268EFB8(ctx, base);
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8268F58C:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8268f5a8
	if (!cr6.lt) goto loc_8268F5A8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x8268f560
	goto loc_8268F560;
loc_8268F5A8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82686da0
	sub_82686DA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
loc_8268F5BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8268F5C4"))) PPC_WEAK_FUNC(sub_8268F5C4);
PPC_FUNC_IMPL(__imp__sub_8268F5C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8268F5C8"))) PPC_WEAK_FUNC(sub_8268F5C8);
PPC_FUNC_IMPL(__imp__sub_8268F5C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x8268f048
	sub_8268F048(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268f604
	if (cr0.eq) goto loc_8268F604;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8268F604:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8268f288
	sub_8268F288(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8268F620"))) PPC_WEAK_FUNC(sub_8268F620);
PPC_FUNC_IMPL(__imp__sub_8268F620) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8268F624"))) PPC_WEAK_FUNC(sub_8268F624);
PPC_FUNC_IMPL(__imp__sub_8268F624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268F628"))) PPC_WEAK_FUNC(sub_8268F628);
PPC_FUNC_IMPL(__imp__sub_8268F628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 + 28;
	// addi r11,r11,-29600
	r11.s64 = r11.s64 + -29600;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268f048
	sub_8268F048(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268f684
	if (cr0.eq) goto loc_8268F684;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_8268F684:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8268f4b0
	sub_8268F4B0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8268F6C8"))) PPC_WEAK_FUNC(sub_8268F6C8);
PPC_FUNC_IMPL(__imp__sub_8268F6C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268F6CC"))) PPC_WEAK_FUNC(sub_8268F6CC);
PPC_FUNC_IMPL(__imp__sub_8268F6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268F6D0"))) PPC_WEAK_FUNC(sub_8268F6D0);
PPC_FUNC_IMPL(__imp__sub_8268F6D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// addi r11,r11,-29600
	r11.s64 = r11.s64 + -29600;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268f048
	sub_8268F048(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268f72c
	if (cr0.eq) goto loc_8268F72C;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_8268F72C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8268f4b0
	sub_8268F4B0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8268F770"))) PPC_WEAK_FUNC(sub_8268F770);
PPC_FUNC_IMPL(__imp__sub_8268F770) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268F774"))) PPC_WEAK_FUNC(sub_8268F774);
PPC_FUNC_IMPL(__imp__sub_8268F774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268F778"))) PPC_WEAK_FUNC(sub_8268F778);
PPC_FUNC_IMPL(__imp__sub_8268F778) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r26,1
	r26.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8268f800
	if (!cr0.eq) goto loc_8268F800;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
loc_8268F7B4:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r31,r11
	r31.u64 = r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8268f7d4
	if (cr6.eq) goto loc_8268F7D4;
	// li r7,-1
	ctx.r7.s64 = -1;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r29,r7
	temp.u64 = ~ctx.r7.u64 + xer.ca;
	xer.ca = temp.u64 < xer.ca;
	r29.u64 = temp.u64;
	// b 0x8268f7e0
	goto loc_8268F7E0;
loc_8268F7D4:
	// subfc r10,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r29,r10,31
	r29.u64 = ctx.r10.u32 & 0x1;
loc_8268F7E0:
	// clrlwi. r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8268f7f0
	if (cr0.eq) goto loc_8268F7F0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8268f7f4
	goto loc_8268F7F4;
loc_8268F7F0:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_8268F7F4:
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8268f7b4
	if (cr0.eq) goto loc_8268F7B4;
loc_8268F800:
	// clrlwi. r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r11,r31
	r11.u64 = r31.u64;
	// beq 0x8268f850
	if (cr0.eq) goto loc_8268F850;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8268f848
	if (!cr6.eq) goto loc_8268F848;
	// li r5,1
	ctx.r5.s64 = 1;
loc_8268F828:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// bl 0x8268f5c8
	sub_8268F5C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r26,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r26.u8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8268f874
	goto loc_8268F874;
loc_8268F848:
	// bl 0x8268efb8
	sub_8268EFB8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8268F850:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8268f86c
	if (!cr6.lt) goto loc_8268F86C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x8268f828
	goto loc_8268F828;
loc_8268F86C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,4(r30)
	PPC_STORE_U8(r30.u32 + 4, ctx.r10.u8);
loc_8268F874:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8268F880"))) PPC_WEAK_FUNC(sub_8268F880);
PPC_FUNC_IMPL(__imp__sub_8268F880) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8268F884"))) PPC_WEAK_FUNC(sub_8268F884);
PPC_FUNC_IMPL(__imp__sub_8268F884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268F888"))) PPC_WEAK_FUNC(sub_8268F888);
PPC_FUNC_IMPL(__imp__sub_8268F888) {
	PPC_FUNC_PROLOGUE();
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8268f160
	sub_8268F160(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,88(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8268f450
	sub_8268F450(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826951f0
	sub_826951F0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8268F8E8"))) PPC_WEAK_FUNC(sub_8268F8E8);
PPC_FUNC_IMPL(__imp__sub_8268F8E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8268F8EC"))) PPC_WEAK_FUNC(sub_8268F8EC);
PPC_FUNC_IMPL(__imp__sub_8268F8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268F8F0"))) PPC_WEAK_FUNC(sub_8268F8F0);
PPC_FUNC_IMPL(__imp__sub_8268F8F0) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8268f934
	if (!cr6.eq) goto loc_8268F934;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_8268F91C:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8268F920:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8268F92C:
	// bl 0x8268f5c8
	sub_8268F5C8(ctx, base);
	// b 0x8268fa4c
	goto loc_8268FA4C;
loc_8268F934:
	// lwz r25,4(r28)
	r25.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8268f95c
	if (!cr6.eq) goto loc_8268F95C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8268fa2c
	if (!cr6.lt) goto loc_8268FA2C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// b 0x8268f91c
	goto loc_8268F91C;
loc_8268F95C:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(r30.u32, r25.u32, xer);
	// bne cr6,0x8268f980
	if (!cr6.eq) goto loc_8268F980;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x8268fa2c
	if (!cr6.lt) goto loc_8268FA2C;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8268f920
	goto loc_8268F920;
loc_8268F980:
	// lwz r27,0(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r26,12(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(r26.u32, r27.u32, xer);
	// ble cr6,0x8268f9e0
	if (!cr6.gt) goto loc_8268F9E0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8268efb8
	sub_8268EFB8(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bge cr6,0x8268f9dc
	if (!cr6.lt) goto loc_8268F9DC;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,17(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268f9d0
	if (cr0.eq) goto loc_8268F9D0;
loc_8268F9C8:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8268f92c
	goto loc_8268F92C;
loc_8268F9D0:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_8268F9D4:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8268f92c
	goto loc_8268F92C;
loc_8268F9DC:
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(r26.u32, r27.u32, xer);
loc_8268F9E0:
	// bge cr6,0x8268fa2c
	if (!cr6.lt) goto loc_8268FA2C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82694c40
	sub_82694C40(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r25
	cr6.compare<uint32_t>(ctx.r6.u32, r25.u32, xer);
	// beq cr6,0x8268fa08
	if (cr6.eq) goto loc_8268FA08;
	// lwz r11,12(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bge cr6,0x8268fa2c
	if (!cr6.lt) goto loc_8268FA2C;
loc_8268FA08:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,17(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268f9d4
	if (cr0.eq) goto loc_8268F9D4;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// b 0x8268f9c8
	goto loc_8268F9C8;
loc_8268FA2C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8268f778
	sub_8268F778(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8268FA4C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8268FA54"))) PPC_WEAK_FUNC(sub_8268FA54);
PPC_FUNC_IMPL(__imp__sub_8268FA54) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8268FA58"))) PPC_WEAK_FUNC(sub_8268FA58);
PPC_FUNC_IMPL(__imp__sub_8268FA58) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,156(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r11,r11,-13828
	r11.s64 = r11.s64 + -13828;
	// addi r10,r10,-13832
	ctx.r10.s64 = ctx.r10.s64 + -13832;
	// addi r9,r9,-13876
	ctx.r9.s64 = ctx.r9.s64 + -13876;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// beq cr6,0x8268faac
	if (cr6.eq) goto loc_8268FAAC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x8268fab0
	if (!cr6.eq) goto loc_8268FAB0;
loc_8268FAAC:
	// li r11,0
	r11.s64 = 0;
loc_8268FAB0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268fabc
	if (cr0.eq) goto loc_8268FABC;
	// bl 0x82605300
	sub_82605300(ctx, base);
loc_8268FABC:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// addi r11,r31,116
	r11.s64 = r31.s64 + 116;
	// addi r10,r10,-26024
	ctx.r10.s64 = ctx.r10.s64 + -26024;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// beq cr6,0x8268faec
	if (cr6.eq) goto loc_8268FAEC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268FAEC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r31,64
	ctx.r4.s64 = r31.s64 + 64;
	// addi r30,r11,-4168
	r30.s64 = r11.s64 + -4168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x826951f0
	sub_826951F0(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// bl 0x82686da0
	sub_82686DA0(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x826951f0
	sub_826951F0(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82686da0
	sub_82686DA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268FB48"))) PPC_WEAK_FUNC(sub_8268FB48);
PPC_FUNC_IMPL(__imp__sub_8268FB48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268FB4C"))) PPC_WEAK_FUNC(sub_8268FB4C);
PPC_FUNC_IMPL(__imp__sub_8268FB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268FB50"))) PPC_WEAK_FUNC(sub_8268FB50);
PPC_FUNC_IMPL(__imp__sub_8268FB50) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 + 28;
	// addi r11,r11,-29600
	r11.s64 = r11.s64 + -29600;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x8268f888
	sub_8268F888(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268FBB4"))) PPC_WEAK_FUNC(sub_8268FBB4);
PPC_FUNC_IMPL(__imp__sub_8268FBB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268FBB8"))) PPC_WEAK_FUNC(sub_8268FBB8);
PPC_FUNC_IMPL(__imp__sub_8268FBB8) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// addi r11,r11,-29600
	r11.s64 = r11.s64 + -29600;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x8268f888
	sub_8268F888(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268FC1C"))) PPC_WEAK_FUNC(sub_8268FC1C);
PPC_FUNC_IMPL(__imp__sub_8268FC1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268FC20"))) PPC_WEAK_FUNC(sub_8268FC20);
PPC_FUNC_IMPL(__imp__sub_8268FC20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// b 0x8268fc64
	goto loc_8268FC64;
loc_8268FC44:
	// addi r6,r4,12
	ctx.r6.s64 = ctx.r4.s64 + 12;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8268f8f0
	sub_8268F8F0(ctx, base);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82694c40
	sub_82694C40(ctx, base);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
loc_8268FC64:
	// cmplw cr6,r4,r30
	cr6.compare<uint32_t>(ctx.r4.u32, r30.u32, xer);
	// bne cr6,0x8268fc44
	if (!cr6.eq) goto loc_8268FC44;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268FC80"))) PPC_WEAK_FUNC(sub_8268FC80);
PPC_FUNC_IMPL(__imp__sub_8268FC80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268FC84"))) PPC_WEAK_FUNC(sub_8268FC84);
PPC_FUNC_IMPL(__imp__sub_8268FC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268FC88"))) PPC_WEAK_FUNC(sub_8268FC88);
PPC_FUNC_IMPL(__imp__sub_8268FC88) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r11,r11,-13828
	r11.s64 = r11.s64 + -13828;
	// addi r10,r10,-13832
	ctx.r10.s64 = ctx.r10.s64 + -13832;
	// addi r9,r9,-13876
	ctx.r9.s64 = ctx.r9.s64 + -13876;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8268f220
	sub_8268F220(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,-4168
	r29.s64 = r11.s64 + -4168;
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// addi r11,r31,28
	r11.s64 = r31.s64 + 28;
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x8314d2cc
	__imp__RtlInitializeCriticalSection(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8268f220
	sub_8268F220(ctx, base);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x8314d2cc
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r30.u32);
	// addi r11,r11,-26024
	r11.s64 = r11.s64 + -26024;
	// stb r30,124(r31)
	PPC_STORE_U8(r31.u32 + 124, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r10,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r10.u32);
	// stb r30,160(r31)
	PPC_STORE_U8(r31.u32 + 160, r30.u8);
	// stb r30,161(r31)
	PPC_STORE_U8(r31.u32 + 161, r30.u8);
	// stb r30,162(r31)
	PPC_STORE_U8(r31.u32 + 162, r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8268FD40"))) PPC_WEAK_FUNC(sub_8268FD40);
PPC_FUNC_IMPL(__imp__sub_8268FD40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8268FD44"))) PPC_WEAK_FUNC(sub_8268FD44);
PPC_FUNC_IMPL(__imp__sub_8268FD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268FD48"))) PPC_WEAK_FUNC(sub_8268FD48);
PPC_FUNC_IMPL(__imp__sub_8268FD48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x8268fa58
	sub_8268FA58(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268fd78
	if (cr0.eq) goto loc_8268FD78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8268FD78:
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

