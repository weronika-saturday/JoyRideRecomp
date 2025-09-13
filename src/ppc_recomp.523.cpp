#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F3CC08"))) PPC_WEAK_FUNC(sub_82F3CC08);
PPC_FUNC_IMPL(__imp__sub_82F3CC08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CC0C"))) PPC_WEAK_FUNC(sub_82F3CC0C);
PPC_FUNC_IMPL(__imp__sub_82F3CC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CC10"))) PPC_WEAK_FUNC(sub_82F3CC10);
PPC_FUNC_IMPL(__imp__sub_82F3CC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20736
	ctx.r3.s64 = r11.s64 + -20736;
}

__attribute__((alias("__imp__sub_82F3CC18"))) PPC_WEAK_FUNC(sub_82F3CC18);
PPC_FUNC_IMPL(__imp__sub_82F3CC18) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CC1C"))) PPC_WEAK_FUNC(sub_82F3CC1C);
PPC_FUNC_IMPL(__imp__sub_82F3CC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CC20"))) PPC_WEAK_FUNC(sub_82F3CC20);
PPC_FUNC_IMPL(__imp__sub_82F3CC20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20728
	ctx.r3.s64 = r11.s64 + -20728;
}

__attribute__((alias("__imp__sub_82F3CC28"))) PPC_WEAK_FUNC(sub_82F3CC28);
PPC_FUNC_IMPL(__imp__sub_82F3CC28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CC2C"))) PPC_WEAK_FUNC(sub_82F3CC2C);
PPC_FUNC_IMPL(__imp__sub_82F3CC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CC30"))) PPC_WEAK_FUNC(sub_82F3CC30);
PPC_FUNC_IMPL(__imp__sub_82F3CC30) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,32024
	ctx.r3.s64 = r11.s64 + 32024;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-24460(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24460, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3CC5C"))) PPC_WEAK_FUNC(sub_82F3CC5C);
PPC_FUNC_IMPL(__imp__sub_82F3CC5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3CC60"))) PPC_WEAK_FUNC(sub_82F3CC60);
PPC_FUNC_IMPL(__imp__sub_82F3CC60) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,-1944
	ctx.r3.s64 = r11.s64 + -1944;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-24456(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24456, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3CC8C"))) PPC_WEAK_FUNC(sub_82F3CC8C);
PPC_FUNC_IMPL(__imp__sub_82F3CC8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3CC90"))) PPC_WEAK_FUNC(sub_82F3CC90);
PPC_FUNC_IMPL(__imp__sub_82F3CC90) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,3352
	ctx.r3.s64 = r11.s64 + 3352;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-24452(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3CCBC"))) PPC_WEAK_FUNC(sub_82F3CCBC);
PPC_FUNC_IMPL(__imp__sub_82F3CCBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3CCC0"))) PPC_WEAK_FUNC(sub_82F3CCC0);
PPC_FUNC_IMPL(__imp__sub_82F3CCC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20720
	ctx.r3.s64 = r11.s64 + -20720;
}

__attribute__((alias("__imp__sub_82F3CCC8"))) PPC_WEAK_FUNC(sub_82F3CCC8);
PPC_FUNC_IMPL(__imp__sub_82F3CCC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CCCC"))) PPC_WEAK_FUNC(sub_82F3CCCC);
PPC_FUNC_IMPL(__imp__sub_82F3CCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CCD0"))) PPC_WEAK_FUNC(sub_82F3CCD0);
PPC_FUNC_IMPL(__imp__sub_82F3CCD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20712
	ctx.r3.s64 = r11.s64 + -20712;
}

__attribute__((alias("__imp__sub_82F3CCD8"))) PPC_WEAK_FUNC(sub_82F3CCD8);
PPC_FUNC_IMPL(__imp__sub_82F3CCD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CCDC"))) PPC_WEAK_FUNC(sub_82F3CCDC);
PPC_FUNC_IMPL(__imp__sub_82F3CCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CCE0"))) PPC_WEAK_FUNC(sub_82F3CCE0);
PPC_FUNC_IMPL(__imp__sub_82F3CCE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20704
	ctx.r3.s64 = r11.s64 + -20704;
}

__attribute__((alias("__imp__sub_82F3CCE8"))) PPC_WEAK_FUNC(sub_82F3CCE8);
PPC_FUNC_IMPL(__imp__sub_82F3CCE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CCEC"))) PPC_WEAK_FUNC(sub_82F3CCEC);
PPC_FUNC_IMPL(__imp__sub_82F3CCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CCF0"))) PPC_WEAK_FUNC(sub_82F3CCF0);
PPC_FUNC_IMPL(__imp__sub_82F3CCF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20696
	ctx.r3.s64 = r11.s64 + -20696;
}

__attribute__((alias("__imp__sub_82F3CCF8"))) PPC_WEAK_FUNC(sub_82F3CCF8);
PPC_FUNC_IMPL(__imp__sub_82F3CCF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CCFC"))) PPC_WEAK_FUNC(sub_82F3CCFC);
PPC_FUNC_IMPL(__imp__sub_82F3CCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CD00"))) PPC_WEAK_FUNC(sub_82F3CD00);
PPC_FUNC_IMPL(__imp__sub_82F3CD00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20688
	ctx.r3.s64 = r11.s64 + -20688;
}

__attribute__((alias("__imp__sub_82F3CD08"))) PPC_WEAK_FUNC(sub_82F3CD08);
PPC_FUNC_IMPL(__imp__sub_82F3CD08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CD0C"))) PPC_WEAK_FUNC(sub_82F3CD0C);
PPC_FUNC_IMPL(__imp__sub_82F3CD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CD10"))) PPC_WEAK_FUNC(sub_82F3CD10);
PPC_FUNC_IMPL(__imp__sub_82F3CD10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20680
	ctx.r3.s64 = r11.s64 + -20680;
}

__attribute__((alias("__imp__sub_82F3CD18"))) PPC_WEAK_FUNC(sub_82F3CD18);
PPC_FUNC_IMPL(__imp__sub_82F3CD18) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CD1C"))) PPC_WEAK_FUNC(sub_82F3CD1C);
PPC_FUNC_IMPL(__imp__sub_82F3CD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CD20"))) PPC_WEAK_FUNC(sub_82F3CD20);
PPC_FUNC_IMPL(__imp__sub_82F3CD20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20672
	ctx.r3.s64 = r11.s64 + -20672;
}

__attribute__((alias("__imp__sub_82F3CD28"))) PPC_WEAK_FUNC(sub_82F3CD28);
PPC_FUNC_IMPL(__imp__sub_82F3CD28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CD2C"))) PPC_WEAK_FUNC(sub_82F3CD2C);
PPC_FUNC_IMPL(__imp__sub_82F3CD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CD30"))) PPC_WEAK_FUNC(sub_82F3CD30);
PPC_FUNC_IMPL(__imp__sub_82F3CD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20664
	ctx.r3.s64 = r11.s64 + -20664;
}

__attribute__((alias("__imp__sub_82F3CD38"))) PPC_WEAK_FUNC(sub_82F3CD38);
PPC_FUNC_IMPL(__imp__sub_82F3CD38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CD3C"))) PPC_WEAK_FUNC(sub_82F3CD3C);
PPC_FUNC_IMPL(__imp__sub_82F3CD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CD40"))) PPC_WEAK_FUNC(sub_82F3CD40);
PPC_FUNC_IMPL(__imp__sub_82F3CD40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20656
	ctx.r3.s64 = r11.s64 + -20656;
}

__attribute__((alias("__imp__sub_82F3CD48"))) PPC_WEAK_FUNC(sub_82F3CD48);
PPC_FUNC_IMPL(__imp__sub_82F3CD48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CD4C"))) PPC_WEAK_FUNC(sub_82F3CD4C);
PPC_FUNC_IMPL(__imp__sub_82F3CD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CD50"))) PPC_WEAK_FUNC(sub_82F3CD50);
PPC_FUNC_IMPL(__imp__sub_82F3CD50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20648
	ctx.r3.s64 = r11.s64 + -20648;
}

__attribute__((alias("__imp__sub_82F3CD58"))) PPC_WEAK_FUNC(sub_82F3CD58);
PPC_FUNC_IMPL(__imp__sub_82F3CD58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CD5C"))) PPC_WEAK_FUNC(sub_82F3CD5C);
PPC_FUNC_IMPL(__imp__sub_82F3CD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CD60"))) PPC_WEAK_FUNC(sub_82F3CD60);
PPC_FUNC_IMPL(__imp__sub_82F3CD60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20640
	ctx.r3.s64 = r11.s64 + -20640;
}

__attribute__((alias("__imp__sub_82F3CD68"))) PPC_WEAK_FUNC(sub_82F3CD68);
PPC_FUNC_IMPL(__imp__sub_82F3CD68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CD6C"))) PPC_WEAK_FUNC(sub_82F3CD6C);
PPC_FUNC_IMPL(__imp__sub_82F3CD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CD70"))) PPC_WEAK_FUNC(sub_82F3CD70);
PPC_FUNC_IMPL(__imp__sub_82F3CD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20632
	ctx.r3.s64 = r11.s64 + -20632;
}

__attribute__((alias("__imp__sub_82F3CD78"))) PPC_WEAK_FUNC(sub_82F3CD78);
PPC_FUNC_IMPL(__imp__sub_82F3CD78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CD7C"))) PPC_WEAK_FUNC(sub_82F3CD7C);
PPC_FUNC_IMPL(__imp__sub_82F3CD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CD80"))) PPC_WEAK_FUNC(sub_82F3CD80);
PPC_FUNC_IMPL(__imp__sub_82F3CD80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20624
	ctx.r3.s64 = r11.s64 + -20624;
}

__attribute__((alias("__imp__sub_82F3CD88"))) PPC_WEAK_FUNC(sub_82F3CD88);
PPC_FUNC_IMPL(__imp__sub_82F3CD88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CD8C"))) PPC_WEAK_FUNC(sub_82F3CD8C);
PPC_FUNC_IMPL(__imp__sub_82F3CD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CD90"))) PPC_WEAK_FUNC(sub_82F3CD90);
PPC_FUNC_IMPL(__imp__sub_82F3CD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20616
	ctx.r3.s64 = r11.s64 + -20616;
}

__attribute__((alias("__imp__sub_82F3CD98"))) PPC_WEAK_FUNC(sub_82F3CD98);
PPC_FUNC_IMPL(__imp__sub_82F3CD98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CD9C"))) PPC_WEAK_FUNC(sub_82F3CD9C);
PPC_FUNC_IMPL(__imp__sub_82F3CD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CDA0"))) PPC_WEAK_FUNC(sub_82F3CDA0);
PPC_FUNC_IMPL(__imp__sub_82F3CDA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20608
	ctx.r3.s64 = r11.s64 + -20608;
}

__attribute__((alias("__imp__sub_82F3CDA8"))) PPC_WEAK_FUNC(sub_82F3CDA8);
PPC_FUNC_IMPL(__imp__sub_82F3CDA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CDAC"))) PPC_WEAK_FUNC(sub_82F3CDAC);
PPC_FUNC_IMPL(__imp__sub_82F3CDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CDB0"))) PPC_WEAK_FUNC(sub_82F3CDB0);
PPC_FUNC_IMPL(__imp__sub_82F3CDB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20600
	ctx.r3.s64 = r11.s64 + -20600;
}

__attribute__((alias("__imp__sub_82F3CDB8"))) PPC_WEAK_FUNC(sub_82F3CDB8);
PPC_FUNC_IMPL(__imp__sub_82F3CDB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CDBC"))) PPC_WEAK_FUNC(sub_82F3CDBC);
PPC_FUNC_IMPL(__imp__sub_82F3CDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CDC0"))) PPC_WEAK_FUNC(sub_82F3CDC0);
PPC_FUNC_IMPL(__imp__sub_82F3CDC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20592
	ctx.r3.s64 = r11.s64 + -20592;
}

__attribute__((alias("__imp__sub_82F3CDC8"))) PPC_WEAK_FUNC(sub_82F3CDC8);
PPC_FUNC_IMPL(__imp__sub_82F3CDC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CDCC"))) PPC_WEAK_FUNC(sub_82F3CDCC);
PPC_FUNC_IMPL(__imp__sub_82F3CDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CDD0"))) PPC_WEAK_FUNC(sub_82F3CDD0);
PPC_FUNC_IMPL(__imp__sub_82F3CDD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20584
	ctx.r3.s64 = r11.s64 + -20584;
}

__attribute__((alias("__imp__sub_82F3CDD8"))) PPC_WEAK_FUNC(sub_82F3CDD8);
PPC_FUNC_IMPL(__imp__sub_82F3CDD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CDDC"))) PPC_WEAK_FUNC(sub_82F3CDDC);
PPC_FUNC_IMPL(__imp__sub_82F3CDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CDE0"))) PPC_WEAK_FUNC(sub_82F3CDE0);
PPC_FUNC_IMPL(__imp__sub_82F3CDE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20576
	ctx.r3.s64 = r11.s64 + -20576;
}

__attribute__((alias("__imp__sub_82F3CDE8"))) PPC_WEAK_FUNC(sub_82F3CDE8);
PPC_FUNC_IMPL(__imp__sub_82F3CDE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CDEC"))) PPC_WEAK_FUNC(sub_82F3CDEC);
PPC_FUNC_IMPL(__imp__sub_82F3CDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CDF0"))) PPC_WEAK_FUNC(sub_82F3CDF0);
PPC_FUNC_IMPL(__imp__sub_82F3CDF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20568
	ctx.r3.s64 = r11.s64 + -20568;
}

__attribute__((alias("__imp__sub_82F3CDF8"))) PPC_WEAK_FUNC(sub_82F3CDF8);
PPC_FUNC_IMPL(__imp__sub_82F3CDF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CDFC"))) PPC_WEAK_FUNC(sub_82F3CDFC);
PPC_FUNC_IMPL(__imp__sub_82F3CDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CE00"))) PPC_WEAK_FUNC(sub_82F3CE00);
PPC_FUNC_IMPL(__imp__sub_82F3CE00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20560
	ctx.r3.s64 = r11.s64 + -20560;
}

__attribute__((alias("__imp__sub_82F3CE08"))) PPC_WEAK_FUNC(sub_82F3CE08);
PPC_FUNC_IMPL(__imp__sub_82F3CE08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CE0C"))) PPC_WEAK_FUNC(sub_82F3CE0C);
PPC_FUNC_IMPL(__imp__sub_82F3CE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CE10"))) PPC_WEAK_FUNC(sub_82F3CE10);
PPC_FUNC_IMPL(__imp__sub_82F3CE10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20552
	ctx.r3.s64 = r11.s64 + -20552;
}

__attribute__((alias("__imp__sub_82F3CE18"))) PPC_WEAK_FUNC(sub_82F3CE18);
PPC_FUNC_IMPL(__imp__sub_82F3CE18) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CE1C"))) PPC_WEAK_FUNC(sub_82F3CE1C);
PPC_FUNC_IMPL(__imp__sub_82F3CE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CE20"))) PPC_WEAK_FUNC(sub_82F3CE20);
PPC_FUNC_IMPL(__imp__sub_82F3CE20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20544
	ctx.r3.s64 = r11.s64 + -20544;
}

__attribute__((alias("__imp__sub_82F3CE28"))) PPC_WEAK_FUNC(sub_82F3CE28);
PPC_FUNC_IMPL(__imp__sub_82F3CE28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CE2C"))) PPC_WEAK_FUNC(sub_82F3CE2C);
PPC_FUNC_IMPL(__imp__sub_82F3CE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CE30"))) PPC_WEAK_FUNC(sub_82F3CE30);
PPC_FUNC_IMPL(__imp__sub_82F3CE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20536
	ctx.r3.s64 = r11.s64 + -20536;
}

__attribute__((alias("__imp__sub_82F3CE38"))) PPC_WEAK_FUNC(sub_82F3CE38);
PPC_FUNC_IMPL(__imp__sub_82F3CE38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CE3C"))) PPC_WEAK_FUNC(sub_82F3CE3C);
PPC_FUNC_IMPL(__imp__sub_82F3CE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CE40"))) PPC_WEAK_FUNC(sub_82F3CE40);
PPC_FUNC_IMPL(__imp__sub_82F3CE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20528
	ctx.r3.s64 = r11.s64 + -20528;
}

__attribute__((alias("__imp__sub_82F3CE48"))) PPC_WEAK_FUNC(sub_82F3CE48);
PPC_FUNC_IMPL(__imp__sub_82F3CE48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CE4C"))) PPC_WEAK_FUNC(sub_82F3CE4C);
PPC_FUNC_IMPL(__imp__sub_82F3CE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CE50"))) PPC_WEAK_FUNC(sub_82F3CE50);
PPC_FUNC_IMPL(__imp__sub_82F3CE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20520
	ctx.r3.s64 = r11.s64 + -20520;
}

__attribute__((alias("__imp__sub_82F3CE58"))) PPC_WEAK_FUNC(sub_82F3CE58);
PPC_FUNC_IMPL(__imp__sub_82F3CE58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CE5C"))) PPC_WEAK_FUNC(sub_82F3CE5C);
PPC_FUNC_IMPL(__imp__sub_82F3CE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CE60"))) PPC_WEAK_FUNC(sub_82F3CE60);
PPC_FUNC_IMPL(__imp__sub_82F3CE60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20512
	ctx.r3.s64 = r11.s64 + -20512;
}

__attribute__((alias("__imp__sub_82F3CE68"))) PPC_WEAK_FUNC(sub_82F3CE68);
PPC_FUNC_IMPL(__imp__sub_82F3CE68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CE6C"))) PPC_WEAK_FUNC(sub_82F3CE6C);
PPC_FUNC_IMPL(__imp__sub_82F3CE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CE70"))) PPC_WEAK_FUNC(sub_82F3CE70);
PPC_FUNC_IMPL(__imp__sub_82F3CE70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20504
	ctx.r3.s64 = r11.s64 + -20504;
}

__attribute__((alias("__imp__sub_82F3CE78"))) PPC_WEAK_FUNC(sub_82F3CE78);
PPC_FUNC_IMPL(__imp__sub_82F3CE78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CE7C"))) PPC_WEAK_FUNC(sub_82F3CE7C);
PPC_FUNC_IMPL(__imp__sub_82F3CE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CE80"))) PPC_WEAK_FUNC(sub_82F3CE80);
PPC_FUNC_IMPL(__imp__sub_82F3CE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20496
	ctx.r3.s64 = r11.s64 + -20496;
}

__attribute__((alias("__imp__sub_82F3CE88"))) PPC_WEAK_FUNC(sub_82F3CE88);
PPC_FUNC_IMPL(__imp__sub_82F3CE88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CE8C"))) PPC_WEAK_FUNC(sub_82F3CE8C);
PPC_FUNC_IMPL(__imp__sub_82F3CE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CE90"))) PPC_WEAK_FUNC(sub_82F3CE90);
PPC_FUNC_IMPL(__imp__sub_82F3CE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20488
	ctx.r3.s64 = r11.s64 + -20488;
}

__attribute__((alias("__imp__sub_82F3CE98"))) PPC_WEAK_FUNC(sub_82F3CE98);
PPC_FUNC_IMPL(__imp__sub_82F3CE98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CE9C"))) PPC_WEAK_FUNC(sub_82F3CE9C);
PPC_FUNC_IMPL(__imp__sub_82F3CE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CEA0"))) PPC_WEAK_FUNC(sub_82F3CEA0);
PPC_FUNC_IMPL(__imp__sub_82F3CEA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20480
	ctx.r3.s64 = r11.s64 + -20480;
}

__attribute__((alias("__imp__sub_82F3CEA8"))) PPC_WEAK_FUNC(sub_82F3CEA8);
PPC_FUNC_IMPL(__imp__sub_82F3CEA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CEAC"))) PPC_WEAK_FUNC(sub_82F3CEAC);
PPC_FUNC_IMPL(__imp__sub_82F3CEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CEB0"))) PPC_WEAK_FUNC(sub_82F3CEB0);
PPC_FUNC_IMPL(__imp__sub_82F3CEB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20472
	ctx.r3.s64 = r11.s64 + -20472;
}

__attribute__((alias("__imp__sub_82F3CEB8"))) PPC_WEAK_FUNC(sub_82F3CEB8);
PPC_FUNC_IMPL(__imp__sub_82F3CEB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CEBC"))) PPC_WEAK_FUNC(sub_82F3CEBC);
PPC_FUNC_IMPL(__imp__sub_82F3CEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CEC0"))) PPC_WEAK_FUNC(sub_82F3CEC0);
PPC_FUNC_IMPL(__imp__sub_82F3CEC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20464
	ctx.r3.s64 = r11.s64 + -20464;
}

__attribute__((alias("__imp__sub_82F3CEC8"))) PPC_WEAK_FUNC(sub_82F3CEC8);
PPC_FUNC_IMPL(__imp__sub_82F3CEC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CECC"))) PPC_WEAK_FUNC(sub_82F3CECC);
PPC_FUNC_IMPL(__imp__sub_82F3CECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CED0"))) PPC_WEAK_FUNC(sub_82F3CED0);
PPC_FUNC_IMPL(__imp__sub_82F3CED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20456
	ctx.r3.s64 = r11.s64 + -20456;
}

__attribute__((alias("__imp__sub_82F3CED8"))) PPC_WEAK_FUNC(sub_82F3CED8);
PPC_FUNC_IMPL(__imp__sub_82F3CED8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CEDC"))) PPC_WEAK_FUNC(sub_82F3CEDC);
PPC_FUNC_IMPL(__imp__sub_82F3CEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CEE0"))) PPC_WEAK_FUNC(sub_82F3CEE0);
PPC_FUNC_IMPL(__imp__sub_82F3CEE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20448
	ctx.r3.s64 = r11.s64 + -20448;
}

__attribute__((alias("__imp__sub_82F3CEE8"))) PPC_WEAK_FUNC(sub_82F3CEE8);
PPC_FUNC_IMPL(__imp__sub_82F3CEE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CEEC"))) PPC_WEAK_FUNC(sub_82F3CEEC);
PPC_FUNC_IMPL(__imp__sub_82F3CEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CEF0"))) PPC_WEAK_FUNC(sub_82F3CEF0);
PPC_FUNC_IMPL(__imp__sub_82F3CEF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20440
	ctx.r3.s64 = r11.s64 + -20440;
}

__attribute__((alias("__imp__sub_82F3CEF8"))) PPC_WEAK_FUNC(sub_82F3CEF8);
PPC_FUNC_IMPL(__imp__sub_82F3CEF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CEFC"))) PPC_WEAK_FUNC(sub_82F3CEFC);
PPC_FUNC_IMPL(__imp__sub_82F3CEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CF00"))) PPC_WEAK_FUNC(sub_82F3CF00);
PPC_FUNC_IMPL(__imp__sub_82F3CF00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20432
	ctx.r3.s64 = r11.s64 + -20432;
}

__attribute__((alias("__imp__sub_82F3CF08"))) PPC_WEAK_FUNC(sub_82F3CF08);
PPC_FUNC_IMPL(__imp__sub_82F3CF08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CF0C"))) PPC_WEAK_FUNC(sub_82F3CF0C);
PPC_FUNC_IMPL(__imp__sub_82F3CF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CF10"))) PPC_WEAK_FUNC(sub_82F3CF10);
PPC_FUNC_IMPL(__imp__sub_82F3CF10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20424
	ctx.r3.s64 = r11.s64 + -20424;
}

__attribute__((alias("__imp__sub_82F3CF18"))) PPC_WEAK_FUNC(sub_82F3CF18);
PPC_FUNC_IMPL(__imp__sub_82F3CF18) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CF1C"))) PPC_WEAK_FUNC(sub_82F3CF1C);
PPC_FUNC_IMPL(__imp__sub_82F3CF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CF20"))) PPC_WEAK_FUNC(sub_82F3CF20);
PPC_FUNC_IMPL(__imp__sub_82F3CF20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20416
	ctx.r3.s64 = r11.s64 + -20416;
}

__attribute__((alias("__imp__sub_82F3CF28"))) PPC_WEAK_FUNC(sub_82F3CF28);
PPC_FUNC_IMPL(__imp__sub_82F3CF28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CF2C"))) PPC_WEAK_FUNC(sub_82F3CF2C);
PPC_FUNC_IMPL(__imp__sub_82F3CF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CF30"))) PPC_WEAK_FUNC(sub_82F3CF30);
PPC_FUNC_IMPL(__imp__sub_82F3CF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20408
	ctx.r3.s64 = r11.s64 + -20408;
}

__attribute__((alias("__imp__sub_82F3CF38"))) PPC_WEAK_FUNC(sub_82F3CF38);
PPC_FUNC_IMPL(__imp__sub_82F3CF38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CF3C"))) PPC_WEAK_FUNC(sub_82F3CF3C);
PPC_FUNC_IMPL(__imp__sub_82F3CF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CF40"))) PPC_WEAK_FUNC(sub_82F3CF40);
PPC_FUNC_IMPL(__imp__sub_82F3CF40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20400
	ctx.r3.s64 = r11.s64 + -20400;
}

__attribute__((alias("__imp__sub_82F3CF48"))) PPC_WEAK_FUNC(sub_82F3CF48);
PPC_FUNC_IMPL(__imp__sub_82F3CF48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CF4C"))) PPC_WEAK_FUNC(sub_82F3CF4C);
PPC_FUNC_IMPL(__imp__sub_82F3CF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CF50"))) PPC_WEAK_FUNC(sub_82F3CF50);
PPC_FUNC_IMPL(__imp__sub_82F3CF50) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-24208(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24208, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3CF78"))) PPC_WEAK_FUNC(sub_82F3CF78);
PPC_FUNC_IMPL(__imp__sub_82F3CF78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3CF7C"))) PPC_WEAK_FUNC(sub_82F3CF7C);
PPC_FUNC_IMPL(__imp__sub_82F3CF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CF80"))) PPC_WEAK_FUNC(sub_82F3CF80);
PPC_FUNC_IMPL(__imp__sub_82F3CF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20392
	ctx.r3.s64 = r11.s64 + -20392;
}

__attribute__((alias("__imp__sub_82F3CF88"))) PPC_WEAK_FUNC(sub_82F3CF88);
PPC_FUNC_IMPL(__imp__sub_82F3CF88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CF8C"))) PPC_WEAK_FUNC(sub_82F3CF8C);
PPC_FUNC_IMPL(__imp__sub_82F3CF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CF90"))) PPC_WEAK_FUNC(sub_82F3CF90);
PPC_FUNC_IMPL(__imp__sub_82F3CF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20384
	ctx.r3.s64 = r11.s64 + -20384;
}

__attribute__((alias("__imp__sub_82F3CF98"))) PPC_WEAK_FUNC(sub_82F3CF98);
PPC_FUNC_IMPL(__imp__sub_82F3CF98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CF9C"))) PPC_WEAK_FUNC(sub_82F3CF9C);
PPC_FUNC_IMPL(__imp__sub_82F3CF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CFA0"))) PPC_WEAK_FUNC(sub_82F3CFA0);
PPC_FUNC_IMPL(__imp__sub_82F3CFA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20376
	ctx.r3.s64 = r11.s64 + -20376;
}

__attribute__((alias("__imp__sub_82F3CFA8"))) PPC_WEAK_FUNC(sub_82F3CFA8);
PPC_FUNC_IMPL(__imp__sub_82F3CFA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CFAC"))) PPC_WEAK_FUNC(sub_82F3CFAC);
PPC_FUNC_IMPL(__imp__sub_82F3CFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CFB0"))) PPC_WEAK_FUNC(sub_82F3CFB0);
PPC_FUNC_IMPL(__imp__sub_82F3CFB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20368
	ctx.r3.s64 = r11.s64 + -20368;
}

__attribute__((alias("__imp__sub_82F3CFB8"))) PPC_WEAK_FUNC(sub_82F3CFB8);
PPC_FUNC_IMPL(__imp__sub_82F3CFB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CFBC"))) PPC_WEAK_FUNC(sub_82F3CFBC);
PPC_FUNC_IMPL(__imp__sub_82F3CFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CFC0"))) PPC_WEAK_FUNC(sub_82F3CFC0);
PPC_FUNC_IMPL(__imp__sub_82F3CFC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20344
	ctx.r3.s64 = r11.s64 + -20344;
}

__attribute__((alias("__imp__sub_82F3CFC8"))) PPC_WEAK_FUNC(sub_82F3CFC8);
PPC_FUNC_IMPL(__imp__sub_82F3CFC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CFCC"))) PPC_WEAK_FUNC(sub_82F3CFCC);
PPC_FUNC_IMPL(__imp__sub_82F3CFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CFD0"))) PPC_WEAK_FUNC(sub_82F3CFD0);
PPC_FUNC_IMPL(__imp__sub_82F3CFD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20336
	ctx.r3.s64 = r11.s64 + -20336;
}

__attribute__((alias("__imp__sub_82F3CFD8"))) PPC_WEAK_FUNC(sub_82F3CFD8);
PPC_FUNC_IMPL(__imp__sub_82F3CFD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CFDC"))) PPC_WEAK_FUNC(sub_82F3CFDC);
PPC_FUNC_IMPL(__imp__sub_82F3CFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CFE0"))) PPC_WEAK_FUNC(sub_82F3CFE0);
PPC_FUNC_IMPL(__imp__sub_82F3CFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20328
	ctx.r3.s64 = r11.s64 + -20328;
}

__attribute__((alias("__imp__sub_82F3CFE8"))) PPC_WEAK_FUNC(sub_82F3CFE8);
PPC_FUNC_IMPL(__imp__sub_82F3CFE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CFEC"))) PPC_WEAK_FUNC(sub_82F3CFEC);
PPC_FUNC_IMPL(__imp__sub_82F3CFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CFF0"))) PPC_WEAK_FUNC(sub_82F3CFF0);
PPC_FUNC_IMPL(__imp__sub_82F3CFF0) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-24120(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24120, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D018"))) PPC_WEAK_FUNC(sub_82F3D018);
PPC_FUNC_IMPL(__imp__sub_82F3D018) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D01C"))) PPC_WEAK_FUNC(sub_82F3D01C);
PPC_FUNC_IMPL(__imp__sub_82F3D01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D020"))) PPC_WEAK_FUNC(sub_82F3D020);
PPC_FUNC_IMPL(__imp__sub_82F3D020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20320
	ctx.r3.s64 = r11.s64 + -20320;
}

__attribute__((alias("__imp__sub_82F3D028"))) PPC_WEAK_FUNC(sub_82F3D028);
PPC_FUNC_IMPL(__imp__sub_82F3D028) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3D02C"))) PPC_WEAK_FUNC(sub_82F3D02C);
PPC_FUNC_IMPL(__imp__sub_82F3D02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D030"))) PPC_WEAK_FUNC(sub_82F3D030);
PPC_FUNC_IMPL(__imp__sub_82F3D030) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-24092(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24092, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D058"))) PPC_WEAK_FUNC(sub_82F3D058);
PPC_FUNC_IMPL(__imp__sub_82F3D058) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D05C"))) PPC_WEAK_FUNC(sub_82F3D05C);
PPC_FUNC_IMPL(__imp__sub_82F3D05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D060"))) PPC_WEAK_FUNC(sub_82F3D060);
PPC_FUNC_IMPL(__imp__sub_82F3D060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20312
	ctx.r3.s64 = r11.s64 + -20312;
}

__attribute__((alias("__imp__sub_82F3D068"))) PPC_WEAK_FUNC(sub_82F3D068);
PPC_FUNC_IMPL(__imp__sub_82F3D068) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3D06C"))) PPC_WEAK_FUNC(sub_82F3D06C);
PPC_FUNC_IMPL(__imp__sub_82F3D06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D070"))) PPC_WEAK_FUNC(sub_82F3D070);
PPC_FUNC_IMPL(__imp__sub_82F3D070) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9448
	ctx.r3.s64 = r11.s64 + 9448;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-24060(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24060, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D09C"))) PPC_WEAK_FUNC(sub_82F3D09C);
PPC_FUNC_IMPL(__imp__sub_82F3D09C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D0A0"))) PPC_WEAK_FUNC(sub_82F3D0A0);
PPC_FUNC_IMPL(__imp__sub_82F3D0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,-24056
	ctx.r3.s64 = ctx.r7.s64 + -24056;
	// lfs f13,9456(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9456);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f1,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d10a0
	sub_822D10A0(ctx, base);
	// lis r6,-31979
	ctx.r6.s64 = -2095775744;
	// addi r3,r6,-20304
	ctx.r3.s64 = ctx.r6.s64 + -20304;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D118"))) PPC_WEAK_FUNC(sub_82F3D118);
PPC_FUNC_IMPL(__imp__sub_82F3D118) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D11C"))) PPC_WEAK_FUNC(sub_82F3D11C);
PPC_FUNC_IMPL(__imp__sub_82F3D11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D120"))) PPC_WEAK_FUNC(sub_82F3D120);
PPC_FUNC_IMPL(__imp__sub_82F3D120) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-24024(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24024, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D148"))) PPC_WEAK_FUNC(sub_82F3D148);
PPC_FUNC_IMPL(__imp__sub_82F3D148) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D14C"))) PPC_WEAK_FUNC(sub_82F3D14C);
PPC_FUNC_IMPL(__imp__sub_82F3D14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D150"))) PPC_WEAK_FUNC(sub_82F3D150);
PPC_FUNC_IMPL(__imp__sub_82F3D150) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9448
	ctx.r3.s64 = r11.s64 + 9448;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-24020(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24020, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D17C"))) PPC_WEAK_FUNC(sub_82F3D17C);
PPC_FUNC_IMPL(__imp__sub_82F3D17C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D180"))) PPC_WEAK_FUNC(sub_82F3D180);
PPC_FUNC_IMPL(__imp__sub_82F3D180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,-24016
	ctx.r3.s64 = ctx.r7.s64 + -24016;
	// lfs f13,9456(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9456);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f1,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d10a0
	sub_822D10A0(ctx, base);
	// lis r6,-31979
	ctx.r6.s64 = -2095775744;
	// addi r3,r6,-20296
	ctx.r3.s64 = ctx.r6.s64 + -20296;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D1F8"))) PPC_WEAK_FUNC(sub_82F3D1F8);
PPC_FUNC_IMPL(__imp__sub_82F3D1F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D1FC"))) PPC_WEAK_FUNC(sub_82F3D1FC);
PPC_FUNC_IMPL(__imp__sub_82F3D1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D200"))) PPC_WEAK_FUNC(sub_82F3D200);
PPC_FUNC_IMPL(__imp__sub_82F3D200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20288
	ctx.r3.s64 = r11.s64 + -20288;
}

__attribute__((alias("__imp__sub_82F3D208"))) PPC_WEAK_FUNC(sub_82F3D208);
PPC_FUNC_IMPL(__imp__sub_82F3D208) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3D20C"))) PPC_WEAK_FUNC(sub_82F3D20C);
PPC_FUNC_IMPL(__imp__sub_82F3D20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D210"))) PPC_WEAK_FUNC(sub_82F3D210);
PPC_FUNC_IMPL(__imp__sub_82F3D210) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-23968(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23968, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D238"))) PPC_WEAK_FUNC(sub_82F3D238);
PPC_FUNC_IMPL(__imp__sub_82F3D238) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D23C"))) PPC_WEAK_FUNC(sub_82F3D23C);
PPC_FUNC_IMPL(__imp__sub_82F3D23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D240"))) PPC_WEAK_FUNC(sub_82F3D240);
PPC_FUNC_IMPL(__imp__sub_82F3D240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20280
	ctx.r3.s64 = r11.s64 + -20280;
}

__attribute__((alias("__imp__sub_82F3D248"))) PPC_WEAK_FUNC(sub_82F3D248);
PPC_FUNC_IMPL(__imp__sub_82F3D248) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3D24C"))) PPC_WEAK_FUNC(sub_82F3D24C);
PPC_FUNC_IMPL(__imp__sub_82F3D24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D250"))) PPC_WEAK_FUNC(sub_82F3D250);
PPC_FUNC_IMPL(__imp__sub_82F3D250) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-23916(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23916, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D278"))) PPC_WEAK_FUNC(sub_82F3D278);
PPC_FUNC_IMPL(__imp__sub_82F3D278) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D27C"))) PPC_WEAK_FUNC(sub_82F3D27C);
PPC_FUNC_IMPL(__imp__sub_82F3D27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D280"))) PPC_WEAK_FUNC(sub_82F3D280);
PPC_FUNC_IMPL(__imp__sub_82F3D280) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9448
	ctx.r3.s64 = r11.s64 + 9448;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-23912(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23912, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D2AC"))) PPC_WEAK_FUNC(sub_82F3D2AC);
PPC_FUNC_IMPL(__imp__sub_82F3D2AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D2B0"))) PPC_WEAK_FUNC(sub_82F3D2B0);
PPC_FUNC_IMPL(__imp__sub_82F3D2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,-23908
	ctx.r3.s64 = ctx.r7.s64 + -23908;
	// lfs f13,9456(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9456);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f1,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d10a0
	sub_822D10A0(ctx, base);
	// lis r6,-31979
	ctx.r6.s64 = -2095775744;
	// addi r3,r6,-20272
	ctx.r3.s64 = ctx.r6.s64 + -20272;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D328"))) PPC_WEAK_FUNC(sub_82F3D328);
PPC_FUNC_IMPL(__imp__sub_82F3D328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D32C"))) PPC_WEAK_FUNC(sub_82F3D32C);
PPC_FUNC_IMPL(__imp__sub_82F3D32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D330"))) PPC_WEAK_FUNC(sub_82F3D330);
PPC_FUNC_IMPL(__imp__sub_82F3D330) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-26892
	ctx.r3.s64 = ctx.r10.s64 + -26892;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-23860(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23860, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D368"))) PPC_WEAK_FUNC(sub_82F3D368);
PPC_FUNC_IMPL(__imp__sub_82F3D368) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D36C"))) PPC_WEAK_FUNC(sub_82F3D36C);
PPC_FUNC_IMPL(__imp__sub_82F3D36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D370"))) PPC_WEAK_FUNC(sub_82F3D370);
PPC_FUNC_IMPL(__imp__sub_82F3D370) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-26848
	ctx.r3.s64 = ctx.r10.s64 + -26848;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-23864(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23864, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D3A8"))) PPC_WEAK_FUNC(sub_82F3D3A8);
PPC_FUNC_IMPL(__imp__sub_82F3D3A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D3AC"))) PPC_WEAK_FUNC(sub_82F3D3AC);
PPC_FUNC_IMPL(__imp__sub_82F3D3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D3B0"))) PPC_WEAK_FUNC(sub_82F3D3B0);
PPC_FUNC_IMPL(__imp__sub_82F3D3B0) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-28884
	ctx.r3.s64 = ctx.r10.s64 + -28884;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-23868(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23868, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D3E8"))) PPC_WEAK_FUNC(sub_82F3D3E8);
PPC_FUNC_IMPL(__imp__sub_82F3D3E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D3EC"))) PPC_WEAK_FUNC(sub_82F3D3EC);
PPC_FUNC_IMPL(__imp__sub_82F3D3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D3F0"))) PPC_WEAK_FUNC(sub_82F3D3F0);
PPC_FUNC_IMPL(__imp__sub_82F3D3F0) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-28836
	ctx.r3.s64 = ctx.r10.s64 + -28836;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-23872(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23872, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D428"))) PPC_WEAK_FUNC(sub_82F3D428);
PPC_FUNC_IMPL(__imp__sub_82F3D428) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D42C"))) PPC_WEAK_FUNC(sub_82F3D42C);
PPC_FUNC_IMPL(__imp__sub_82F3D42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D430"))) PPC_WEAK_FUNC(sub_82F3D430);
PPC_FUNC_IMPL(__imp__sub_82F3D430) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-28788
	ctx.r3.s64 = ctx.r10.s64 + -28788;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-23876(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23876, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D468"))) PPC_WEAK_FUNC(sub_82F3D468);
PPC_FUNC_IMPL(__imp__sub_82F3D468) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D46C"))) PPC_WEAK_FUNC(sub_82F3D46C);
PPC_FUNC_IMPL(__imp__sub_82F3D46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D470"))) PPC_WEAK_FUNC(sub_82F3D470);
PPC_FUNC_IMPL(__imp__sub_82F3D470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20264
	ctx.r3.s64 = r11.s64 + -20264;
}

__attribute__((alias("__imp__sub_82F3D478"))) PPC_WEAK_FUNC(sub_82F3D478);
PPC_FUNC_IMPL(__imp__sub_82F3D478) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3D47C"))) PPC_WEAK_FUNC(sub_82F3D47C);
PPC_FUNC_IMPL(__imp__sub_82F3D47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D480"))) PPC_WEAK_FUNC(sub_82F3D480);
PPC_FUNC_IMPL(__imp__sub_82F3D480) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-23836(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23836, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D4A8"))) PPC_WEAK_FUNC(sub_82F3D4A8);
PPC_FUNC_IMPL(__imp__sub_82F3D4A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D4AC"))) PPC_WEAK_FUNC(sub_82F3D4AC);
PPC_FUNC_IMPL(__imp__sub_82F3D4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D4B0"))) PPC_WEAK_FUNC(sub_82F3D4B0);
PPC_FUNC_IMPL(__imp__sub_82F3D4B0) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9448
	ctx.r3.s64 = r11.s64 + 9448;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-23832(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23832, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D4DC"))) PPC_WEAK_FUNC(sub_82F3D4DC);
PPC_FUNC_IMPL(__imp__sub_82F3D4DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D4E0"))) PPC_WEAK_FUNC(sub_82F3D4E0);
PPC_FUNC_IMPL(__imp__sub_82F3D4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,-23828
	ctx.r3.s64 = ctx.r7.s64 + -23828;
	// lfs f13,9456(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9456);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f1,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d10a0
	sub_822D10A0(ctx, base);
	// lis r6,-31979
	ctx.r6.s64 = -2095775744;
	// addi r3,r6,-20256
	ctx.r3.s64 = ctx.r6.s64 + -20256;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D558"))) PPC_WEAK_FUNC(sub_82F3D558);
PPC_FUNC_IMPL(__imp__sub_82F3D558) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D55C"))) PPC_WEAK_FUNC(sub_82F3D55C);
PPC_FUNC_IMPL(__imp__sub_82F3D55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D560"))) PPC_WEAK_FUNC(sub_82F3D560);
PPC_FUNC_IMPL(__imp__sub_82F3D560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-23792
	ctx.r3.s64 = r11.s64 + -23792;
}

__attribute__((alias("__imp__sub_82F3D568"))) PPC_WEAK_FUNC(sub_82F3D568);
PPC_FUNC_IMPL(__imp__sub_82F3D568) {
	PPC_FUNC_PROLOGUE();
	// b 0x8232d3d8
	sub_8232D3D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3D56C"))) PPC_WEAK_FUNC(sub_82F3D56C);
PPC_FUNC_IMPL(__imp__sub_82F3D56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D570"))) PPC_WEAK_FUNC(sub_82F3D570);
PPC_FUNC_IMPL(__imp__sub_82F3D570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20248
	ctx.r3.s64 = r11.s64 + -20248;
}

__attribute__((alias("__imp__sub_82F3D578"))) PPC_WEAK_FUNC(sub_82F3D578);
PPC_FUNC_IMPL(__imp__sub_82F3D578) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3D57C"))) PPC_WEAK_FUNC(sub_82F3D57C);
PPC_FUNC_IMPL(__imp__sub_82F3D57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D580"))) PPC_WEAK_FUNC(sub_82F3D580);
PPC_FUNC_IMPL(__imp__sub_82F3D580) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-23764(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23764, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D5A8"))) PPC_WEAK_FUNC(sub_82F3D5A8);
PPC_FUNC_IMPL(__imp__sub_82F3D5A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D5AC"))) PPC_WEAK_FUNC(sub_82F3D5AC);
PPC_FUNC_IMPL(__imp__sub_82F3D5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D5B0"))) PPC_WEAK_FUNC(sub_82F3D5B0);
PPC_FUNC_IMPL(__imp__sub_82F3D5B0) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9448
	ctx.r3.s64 = r11.s64 + 9448;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-23760(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23760, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D5DC"))) PPC_WEAK_FUNC(sub_82F3D5DC);
PPC_FUNC_IMPL(__imp__sub_82F3D5DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D5E0"))) PPC_WEAK_FUNC(sub_82F3D5E0);
PPC_FUNC_IMPL(__imp__sub_82F3D5E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,-23756
	ctx.r3.s64 = ctx.r7.s64 + -23756;
	// lfs f13,9456(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9456);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f1,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d10a0
	sub_822D10A0(ctx, base);
	// lis r6,-31979
	ctx.r6.s64 = -2095775744;
	// addi r3,r6,-20240
	ctx.r3.s64 = ctx.r6.s64 + -20240;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D658"))) PPC_WEAK_FUNC(sub_82F3D658);
PPC_FUNC_IMPL(__imp__sub_82F3D658) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D65C"))) PPC_WEAK_FUNC(sub_82F3D65C);
PPC_FUNC_IMPL(__imp__sub_82F3D65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D660"))) PPC_WEAK_FUNC(sub_82F3D660);
PPC_FUNC_IMPL(__imp__sub_82F3D660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20232
	ctx.r3.s64 = r11.s64 + -20232;
}

__attribute__((alias("__imp__sub_82F3D668"))) PPC_WEAK_FUNC(sub_82F3D668);
PPC_FUNC_IMPL(__imp__sub_82F3D668) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3D66C"))) PPC_WEAK_FUNC(sub_82F3D66C);
PPC_FUNC_IMPL(__imp__sub_82F3D66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D670"))) PPC_WEAK_FUNC(sub_82F3D670);
PPC_FUNC_IMPL(__imp__sub_82F3D670) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-23708(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23708, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D698"))) PPC_WEAK_FUNC(sub_82F3D698);
PPC_FUNC_IMPL(__imp__sub_82F3D698) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D69C"))) PPC_WEAK_FUNC(sub_82F3D69C);
PPC_FUNC_IMPL(__imp__sub_82F3D69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D6A0"))) PPC_WEAK_FUNC(sub_82F3D6A0);
PPC_FUNC_IMPL(__imp__sub_82F3D6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20224
	ctx.r3.s64 = r11.s64 + -20224;
}

__attribute__((alias("__imp__sub_82F3D6A8"))) PPC_WEAK_FUNC(sub_82F3D6A8);
PPC_FUNC_IMPL(__imp__sub_82F3D6A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3D6AC"))) PPC_WEAK_FUNC(sub_82F3D6AC);
PPC_FUNC_IMPL(__imp__sub_82F3D6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D6B0"))) PPC_WEAK_FUNC(sub_82F3D6B0);
PPC_FUNC_IMPL(__imp__sub_82F3D6B0) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-23688(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23688, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D6D8"))) PPC_WEAK_FUNC(sub_82F3D6D8);
PPC_FUNC_IMPL(__imp__sub_82F3D6D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D6DC"))) PPC_WEAK_FUNC(sub_82F3D6DC);
PPC_FUNC_IMPL(__imp__sub_82F3D6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D6E0"))) PPC_WEAK_FUNC(sub_82F3D6E0);
PPC_FUNC_IMPL(__imp__sub_82F3D6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20216
	ctx.r3.s64 = r11.s64 + -20216;
}

