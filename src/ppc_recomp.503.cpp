#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F2BBF0"))) PPC_WEAK_FUNC(sub_82F2BBF0);
PPC_FUNC_IMPL(__imp__sub_82F2BBF0) {
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
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-28672
	ctx.r3.s64 = ctx.r10.s64 + -28672;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27544(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27544, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2BC28"))) PPC_WEAK_FUNC(sub_82F2BC28);
PPC_FUNC_IMPL(__imp__sub_82F2BC28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BC2C"))) PPC_WEAK_FUNC(sub_82F2BC2C);
PPC_FUNC_IMPL(__imp__sub_82F2BC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BC30"))) PPC_WEAK_FUNC(sub_82F2BC30);
PPC_FUNC_IMPL(__imp__sub_82F2BC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30288
	ctx.r3.s64 = r11.s64 + -30288;
}

__attribute__((alias("__imp__sub_82F2BC38"))) PPC_WEAK_FUNC(sub_82F2BC38);
PPC_FUNC_IMPL(__imp__sub_82F2BC38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BC3C"))) PPC_WEAK_FUNC(sub_82F2BC3C);
PPC_FUNC_IMPL(__imp__sub_82F2BC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BC40"))) PPC_WEAK_FUNC(sub_82F2BC40);
PPC_FUNC_IMPL(__imp__sub_82F2BC40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30280
	ctx.r3.s64 = r11.s64 + -30280;
}

__attribute__((alias("__imp__sub_82F2BC48"))) PPC_WEAK_FUNC(sub_82F2BC48);
PPC_FUNC_IMPL(__imp__sub_82F2BC48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BC4C"))) PPC_WEAK_FUNC(sub_82F2BC4C);
PPC_FUNC_IMPL(__imp__sub_82F2BC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BC50"))) PPC_WEAK_FUNC(sub_82F2BC50);
PPC_FUNC_IMPL(__imp__sub_82F2BC50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30272
	ctx.r3.s64 = r11.s64 + -30272;
}

__attribute__((alias("__imp__sub_82F2BC58"))) PPC_WEAK_FUNC(sub_82F2BC58);
PPC_FUNC_IMPL(__imp__sub_82F2BC58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BC5C"))) PPC_WEAK_FUNC(sub_82F2BC5C);
PPC_FUNC_IMPL(__imp__sub_82F2BC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BC60"))) PPC_WEAK_FUNC(sub_82F2BC60);
PPC_FUNC_IMPL(__imp__sub_82F2BC60) {
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
	// addi r3,r11,32700
	ctx.r3.s64 = r11.s64 + 32700;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,27564(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27564, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2BC8C"))) PPC_WEAK_FUNC(sub_82F2BC8C);
PPC_FUNC_IMPL(__imp__sub_82F2BC8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BC90"))) PPC_WEAK_FUNC(sub_82F2BC90);
PPC_FUNC_IMPL(__imp__sub_82F2BC90) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r11,27568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27568, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2BCB8"))) PPC_WEAK_FUNC(sub_82F2BCB8);
PPC_FUNC_IMPL(__imp__sub_82F2BCB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BCBC"))) PPC_WEAK_FUNC(sub_82F2BCBC);
PPC_FUNC_IMPL(__imp__sub_82F2BCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BCC0"))) PPC_WEAK_FUNC(sub_82F2BCC0);
PPC_FUNC_IMPL(__imp__sub_82F2BCC0) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-344
	ctx.r3.s64 = ctx.r10.s64 + -344;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27572(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27572, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2BCF8"))) PPC_WEAK_FUNC(sub_82F2BCF8);
PPC_FUNC_IMPL(__imp__sub_82F2BCF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BCFC"))) PPC_WEAK_FUNC(sub_82F2BCFC);
PPC_FUNC_IMPL(__imp__sub_82F2BCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BD00"))) PPC_WEAK_FUNC(sub_82F2BD00);
PPC_FUNC_IMPL(__imp__sub_82F2BD00) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-300
	ctx.r3.s64 = ctx.r10.s64 + -300;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27576(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27576, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2BD38"))) PPC_WEAK_FUNC(sub_82F2BD38);
PPC_FUNC_IMPL(__imp__sub_82F2BD38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BD3C"))) PPC_WEAK_FUNC(sub_82F2BD3C);
PPC_FUNC_IMPL(__imp__sub_82F2BD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BD40"))) PPC_WEAK_FUNC(sub_82F2BD40);
PPC_FUNC_IMPL(__imp__sub_82F2BD40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30264
	ctx.r3.s64 = r11.s64 + -30264;
}

__attribute__((alias("__imp__sub_82F2BD48"))) PPC_WEAK_FUNC(sub_82F2BD48);
PPC_FUNC_IMPL(__imp__sub_82F2BD48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BD4C"))) PPC_WEAK_FUNC(sub_82F2BD4C);
PPC_FUNC_IMPL(__imp__sub_82F2BD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BD50"))) PPC_WEAK_FUNC(sub_82F2BD50);
PPC_FUNC_IMPL(__imp__sub_82F2BD50) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r11,27596(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27596, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2BD78"))) PPC_WEAK_FUNC(sub_82F2BD78);
PPC_FUNC_IMPL(__imp__sub_82F2BD78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BD7C"))) PPC_WEAK_FUNC(sub_82F2BD7C);
PPC_FUNC_IMPL(__imp__sub_82F2BD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BD80"))) PPC_WEAK_FUNC(sub_82F2BD80);
PPC_FUNC_IMPL(__imp__sub_82F2BD80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30256
	ctx.r3.s64 = r11.s64 + -30256;
}

__attribute__((alias("__imp__sub_82F2BD88"))) PPC_WEAK_FUNC(sub_82F2BD88);
PPC_FUNC_IMPL(__imp__sub_82F2BD88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BD8C"))) PPC_WEAK_FUNC(sub_82F2BD8C);
PPC_FUNC_IMPL(__imp__sub_82F2BD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BD90"))) PPC_WEAK_FUNC(sub_82F2BD90);
PPC_FUNC_IMPL(__imp__sub_82F2BD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30248
	ctx.r3.s64 = r11.s64 + -30248;
}

__attribute__((alias("__imp__sub_82F2BD98"))) PPC_WEAK_FUNC(sub_82F2BD98);
PPC_FUNC_IMPL(__imp__sub_82F2BD98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BD9C"))) PPC_WEAK_FUNC(sub_82F2BD9C);
PPC_FUNC_IMPL(__imp__sub_82F2BD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BDA0"))) PPC_WEAK_FUNC(sub_82F2BDA0);
PPC_FUNC_IMPL(__imp__sub_82F2BDA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30240
	ctx.r3.s64 = r11.s64 + -30240;
}

__attribute__((alias("__imp__sub_82F2BDA8"))) PPC_WEAK_FUNC(sub_82F2BDA8);
PPC_FUNC_IMPL(__imp__sub_82F2BDA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BDAC"))) PPC_WEAK_FUNC(sub_82F2BDAC);
PPC_FUNC_IMPL(__imp__sub_82F2BDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BDB0"))) PPC_WEAK_FUNC(sub_82F2BDB0);
PPC_FUNC_IMPL(__imp__sub_82F2BDB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30232
	ctx.r3.s64 = r11.s64 + -30232;
}

__attribute__((alias("__imp__sub_82F2BDB8"))) PPC_WEAK_FUNC(sub_82F2BDB8);
PPC_FUNC_IMPL(__imp__sub_82F2BDB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BDBC"))) PPC_WEAK_FUNC(sub_82F2BDBC);
PPC_FUNC_IMPL(__imp__sub_82F2BDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BDC0"))) PPC_WEAK_FUNC(sub_82F2BDC0);
PPC_FUNC_IMPL(__imp__sub_82F2BDC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30224
	ctx.r3.s64 = r11.s64 + -30224;
}

__attribute__((alias("__imp__sub_82F2BDC8"))) PPC_WEAK_FUNC(sub_82F2BDC8);
PPC_FUNC_IMPL(__imp__sub_82F2BDC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BDCC"))) PPC_WEAK_FUNC(sub_82F2BDCC);
PPC_FUNC_IMPL(__imp__sub_82F2BDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BDD0"))) PPC_WEAK_FUNC(sub_82F2BDD0);
PPC_FUNC_IMPL(__imp__sub_82F2BDD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30216
	ctx.r3.s64 = r11.s64 + -30216;
}

__attribute__((alias("__imp__sub_82F2BDD8"))) PPC_WEAK_FUNC(sub_82F2BDD8);
PPC_FUNC_IMPL(__imp__sub_82F2BDD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BDDC"))) PPC_WEAK_FUNC(sub_82F2BDDC);
PPC_FUNC_IMPL(__imp__sub_82F2BDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BDE0"))) PPC_WEAK_FUNC(sub_82F2BDE0);
PPC_FUNC_IMPL(__imp__sub_82F2BDE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30208
	ctx.r3.s64 = r11.s64 + -30208;
}

__attribute__((alias("__imp__sub_82F2BDE8"))) PPC_WEAK_FUNC(sub_82F2BDE8);
PPC_FUNC_IMPL(__imp__sub_82F2BDE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BDEC"))) PPC_WEAK_FUNC(sub_82F2BDEC);
PPC_FUNC_IMPL(__imp__sub_82F2BDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BDF0"))) PPC_WEAK_FUNC(sub_82F2BDF0);
PPC_FUNC_IMPL(__imp__sub_82F2BDF0) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r11,27632(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27632, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2BE18"))) PPC_WEAK_FUNC(sub_82F2BE18);
PPC_FUNC_IMPL(__imp__sub_82F2BE18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BE1C"))) PPC_WEAK_FUNC(sub_82F2BE1C);
PPC_FUNC_IMPL(__imp__sub_82F2BE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BE20"))) PPC_WEAK_FUNC(sub_82F2BE20);
PPC_FUNC_IMPL(__imp__sub_82F2BE20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30200
	ctx.r3.s64 = r11.s64 + -30200;
}

__attribute__((alias("__imp__sub_82F2BE28"))) PPC_WEAK_FUNC(sub_82F2BE28);
PPC_FUNC_IMPL(__imp__sub_82F2BE28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BE2C"))) PPC_WEAK_FUNC(sub_82F2BE2C);
PPC_FUNC_IMPL(__imp__sub_82F2BE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BE30"))) PPC_WEAK_FUNC(sub_82F2BE30);
PPC_FUNC_IMPL(__imp__sub_82F2BE30) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-160
	ctx.r3.s64 = ctx.r10.s64 + -160;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27636(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27636, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2BE68"))) PPC_WEAK_FUNC(sub_82F2BE68);
PPC_FUNC_IMPL(__imp__sub_82F2BE68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BE6C"))) PPC_WEAK_FUNC(sub_82F2BE6C);
PPC_FUNC_IMPL(__imp__sub_82F2BE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BE70"))) PPC_WEAK_FUNC(sub_82F2BE70);
PPC_FUNC_IMPL(__imp__sub_82F2BE70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30192
	ctx.r3.s64 = r11.s64 + -30192;
}

__attribute__((alias("__imp__sub_82F2BE78"))) PPC_WEAK_FUNC(sub_82F2BE78);
PPC_FUNC_IMPL(__imp__sub_82F2BE78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BE7C"))) PPC_WEAK_FUNC(sub_82F2BE7C);
PPC_FUNC_IMPL(__imp__sub_82F2BE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BE80"))) PPC_WEAK_FUNC(sub_82F2BE80);
PPC_FUNC_IMPL(__imp__sub_82F2BE80) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,27652(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27652, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2BEAC"))) PPC_WEAK_FUNC(sub_82F2BEAC);
PPC_FUNC_IMPL(__imp__sub_82F2BEAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BEB0"))) PPC_WEAK_FUNC(sub_82F2BEB0);
PPC_FUNC_IMPL(__imp__sub_82F2BEB0) {
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
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,27656
	ctx.r3.s64 = ctx.r7.s64 + 27656;
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
	// addi r3,r6,-30184
	ctx.r3.s64 = ctx.r6.s64 + -30184;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2BF28"))) PPC_WEAK_FUNC(sub_82F2BF28);
PPC_FUNC_IMPL(__imp__sub_82F2BF28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BF2C"))) PPC_WEAK_FUNC(sub_82F2BF2C);
PPC_FUNC_IMPL(__imp__sub_82F2BF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BF30"))) PPC_WEAK_FUNC(sub_82F2BF30);
PPC_FUNC_IMPL(__imp__sub_82F2BF30) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-120
	ctx.r3.s64 = ctx.r10.s64 + -120;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27648(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27648, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2BF68"))) PPC_WEAK_FUNC(sub_82F2BF68);
PPC_FUNC_IMPL(__imp__sub_82F2BF68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BF6C"))) PPC_WEAK_FUNC(sub_82F2BF6C);
PPC_FUNC_IMPL(__imp__sub_82F2BF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BF70"))) PPC_WEAK_FUNC(sub_82F2BF70);
PPC_FUNC_IMPL(__imp__sub_82F2BF70) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,2352
	ctx.r3.s64 = ctx.r10.s64 + 2352;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27688(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27688, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2BFA8"))) PPC_WEAK_FUNC(sub_82F2BFA8);
PPC_FUNC_IMPL(__imp__sub_82F2BFA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BFAC"))) PPC_WEAK_FUNC(sub_82F2BFAC);
PPC_FUNC_IMPL(__imp__sub_82F2BFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BFB0"))) PPC_WEAK_FUNC(sub_82F2BFB0);
PPC_FUNC_IMPL(__imp__sub_82F2BFB0) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,2308
	ctx.r3.s64 = ctx.r10.s64 + 2308;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27692(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27692, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2BFE8"))) PPC_WEAK_FUNC(sub_82F2BFE8);
PPC_FUNC_IMPL(__imp__sub_82F2BFE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BFEC"))) PPC_WEAK_FUNC(sub_82F2BFEC);
PPC_FUNC_IMPL(__imp__sub_82F2BFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BFF0"))) PPC_WEAK_FUNC(sub_82F2BFF0);
PPC_FUNC_IMPL(__imp__sub_82F2BFF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30176
	ctx.r3.s64 = r11.s64 + -30176;
}

__attribute__((alias("__imp__sub_82F2BFF8"))) PPC_WEAK_FUNC(sub_82F2BFF8);
PPC_FUNC_IMPL(__imp__sub_82F2BFF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BFFC"))) PPC_WEAK_FUNC(sub_82F2BFFC);
PPC_FUNC_IMPL(__imp__sub_82F2BFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C000"))) PPC_WEAK_FUNC(sub_82F2C000);
PPC_FUNC_IMPL(__imp__sub_82F2C000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30168
	ctx.r3.s64 = r11.s64 + -30168;
}

__attribute__((alias("__imp__sub_82F2C008"))) PPC_WEAK_FUNC(sub_82F2C008);
PPC_FUNC_IMPL(__imp__sub_82F2C008) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C00C"))) PPC_WEAK_FUNC(sub_82F2C00C);
PPC_FUNC_IMPL(__imp__sub_82F2C00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C010"))) PPC_WEAK_FUNC(sub_82F2C010);
PPC_FUNC_IMPL(__imp__sub_82F2C010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30160
	ctx.r3.s64 = r11.s64 + -30160;
}

__attribute__((alias("__imp__sub_82F2C018"))) PPC_WEAK_FUNC(sub_82F2C018);
PPC_FUNC_IMPL(__imp__sub_82F2C018) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C01C"))) PPC_WEAK_FUNC(sub_82F2C01C);
PPC_FUNC_IMPL(__imp__sub_82F2C01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C020"))) PPC_WEAK_FUNC(sub_82F2C020);
PPC_FUNC_IMPL(__imp__sub_82F2C020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30152
	ctx.r3.s64 = r11.s64 + -30152;
}

__attribute__((alias("__imp__sub_82F2C028"))) PPC_WEAK_FUNC(sub_82F2C028);
PPC_FUNC_IMPL(__imp__sub_82F2C028) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C02C"))) PPC_WEAK_FUNC(sub_82F2C02C);
PPC_FUNC_IMPL(__imp__sub_82F2C02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C030"))) PPC_WEAK_FUNC(sub_82F2C030);
PPC_FUNC_IMPL(__imp__sub_82F2C030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30144
	ctx.r3.s64 = r11.s64 + -30144;
}

__attribute__((alias("__imp__sub_82F2C038"))) PPC_WEAK_FUNC(sub_82F2C038);
PPC_FUNC_IMPL(__imp__sub_82F2C038) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C03C"))) PPC_WEAK_FUNC(sub_82F2C03C);
PPC_FUNC_IMPL(__imp__sub_82F2C03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C040"))) PPC_WEAK_FUNC(sub_82F2C040);
PPC_FUNC_IMPL(__imp__sub_82F2C040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30136
	ctx.r3.s64 = r11.s64 + -30136;
}

__attribute__((alias("__imp__sub_82F2C048"))) PPC_WEAK_FUNC(sub_82F2C048);
PPC_FUNC_IMPL(__imp__sub_82F2C048) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C04C"))) PPC_WEAK_FUNC(sub_82F2C04C);
PPC_FUNC_IMPL(__imp__sub_82F2C04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C050"))) PPC_WEAK_FUNC(sub_82F2C050);
PPC_FUNC_IMPL(__imp__sub_82F2C050) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,27712(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27712, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C07C"))) PPC_WEAK_FUNC(sub_82F2C07C);
PPC_FUNC_IMPL(__imp__sub_82F2C07C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C080"))) PPC_WEAK_FUNC(sub_82F2C080);
PPC_FUNC_IMPL(__imp__sub_82F2C080) {
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
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,27716
	ctx.r3.s64 = ctx.r7.s64 + 27716;
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
	// addi r3,r6,-30128
	ctx.r3.s64 = ctx.r6.s64 + -30128;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C0F8"))) PPC_WEAK_FUNC(sub_82F2C0F8);
PPC_FUNC_IMPL(__imp__sub_82F2C0F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C0FC"))) PPC_WEAK_FUNC(sub_82F2C0FC);
PPC_FUNC_IMPL(__imp__sub_82F2C0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C100"))) PPC_WEAK_FUNC(sub_82F2C100);
PPC_FUNC_IMPL(__imp__sub_82F2C100) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,2444
	ctx.r3.s64 = ctx.r10.s64 + 2444;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27748(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27748, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C138"))) PPC_WEAK_FUNC(sub_82F2C138);
PPC_FUNC_IMPL(__imp__sub_82F2C138) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C13C"))) PPC_WEAK_FUNC(sub_82F2C13C);
PPC_FUNC_IMPL(__imp__sub_82F2C13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C140"))) PPC_WEAK_FUNC(sub_82F2C140);
PPC_FUNC_IMPL(__imp__sub_82F2C140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30120
	ctx.r3.s64 = r11.s64 + -30120;
}

__attribute__((alias("__imp__sub_82F2C148"))) PPC_WEAK_FUNC(sub_82F2C148);
PPC_FUNC_IMPL(__imp__sub_82F2C148) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C14C"))) PPC_WEAK_FUNC(sub_82F2C14C);
PPC_FUNC_IMPL(__imp__sub_82F2C14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C150"))) PPC_WEAK_FUNC(sub_82F2C150);
PPC_FUNC_IMPL(__imp__sub_82F2C150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30112
	ctx.r3.s64 = r11.s64 + -30112;
}

__attribute__((alias("__imp__sub_82F2C158"))) PPC_WEAK_FUNC(sub_82F2C158);
PPC_FUNC_IMPL(__imp__sub_82F2C158) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C15C"))) PPC_WEAK_FUNC(sub_82F2C15C);
PPC_FUNC_IMPL(__imp__sub_82F2C15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C160"))) PPC_WEAK_FUNC(sub_82F2C160);
PPC_FUNC_IMPL(__imp__sub_82F2C160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30104
	ctx.r3.s64 = r11.s64 + -30104;
}

__attribute__((alias("__imp__sub_82F2C168"))) PPC_WEAK_FUNC(sub_82F2C168);
PPC_FUNC_IMPL(__imp__sub_82F2C168) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C16C"))) PPC_WEAK_FUNC(sub_82F2C16C);
PPC_FUNC_IMPL(__imp__sub_82F2C16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C170"))) PPC_WEAK_FUNC(sub_82F2C170);
PPC_FUNC_IMPL(__imp__sub_82F2C170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30096
	ctx.r3.s64 = r11.s64 + -30096;
}

__attribute__((alias("__imp__sub_82F2C178"))) PPC_WEAK_FUNC(sub_82F2C178);
PPC_FUNC_IMPL(__imp__sub_82F2C178) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C17C"))) PPC_WEAK_FUNC(sub_82F2C17C);
PPC_FUNC_IMPL(__imp__sub_82F2C17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C180"))) PPC_WEAK_FUNC(sub_82F2C180);
PPC_FUNC_IMPL(__imp__sub_82F2C180) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,2396
	ctx.r3.s64 = ctx.r10.s64 + 2396;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27752(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27752, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C1B8"))) PPC_WEAK_FUNC(sub_82F2C1B8);
PPC_FUNC_IMPL(__imp__sub_82F2C1B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C1BC"))) PPC_WEAK_FUNC(sub_82F2C1BC);
PPC_FUNC_IMPL(__imp__sub_82F2C1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C1C0"))) PPC_WEAK_FUNC(sub_82F2C1C0);
PPC_FUNC_IMPL(__imp__sub_82F2C1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30088
	ctx.r3.s64 = r11.s64 + -30088;
}

__attribute__((alias("__imp__sub_82F2C1C8"))) PPC_WEAK_FUNC(sub_82F2C1C8);
PPC_FUNC_IMPL(__imp__sub_82F2C1C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C1CC"))) PPC_WEAK_FUNC(sub_82F2C1CC);
PPC_FUNC_IMPL(__imp__sub_82F2C1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C1D0"))) PPC_WEAK_FUNC(sub_82F2C1D0);
PPC_FUNC_IMPL(__imp__sub_82F2C1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30080
	ctx.r3.s64 = r11.s64 + -30080;
}

__attribute__((alias("__imp__sub_82F2C1D8"))) PPC_WEAK_FUNC(sub_82F2C1D8);
PPC_FUNC_IMPL(__imp__sub_82F2C1D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C1DC"))) PPC_WEAK_FUNC(sub_82F2C1DC);
PPC_FUNC_IMPL(__imp__sub_82F2C1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C1E0"))) PPC_WEAK_FUNC(sub_82F2C1E0);
PPC_FUNC_IMPL(__imp__sub_82F2C1E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30072
	ctx.r3.s64 = r11.s64 + -30072;
}

__attribute__((alias("__imp__sub_82F2C1E8"))) PPC_WEAK_FUNC(sub_82F2C1E8);
PPC_FUNC_IMPL(__imp__sub_82F2C1E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C1EC"))) PPC_WEAK_FUNC(sub_82F2C1EC);
PPC_FUNC_IMPL(__imp__sub_82F2C1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C1F0"))) PPC_WEAK_FUNC(sub_82F2C1F0);
PPC_FUNC_IMPL(__imp__sub_82F2C1F0) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,2196
	ctx.r3.s64 = ctx.r10.s64 + 2196;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27772(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27772, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C228"))) PPC_WEAK_FUNC(sub_82F2C228);
PPC_FUNC_IMPL(__imp__sub_82F2C228) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C22C"))) PPC_WEAK_FUNC(sub_82F2C22C);
PPC_FUNC_IMPL(__imp__sub_82F2C22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C230"))) PPC_WEAK_FUNC(sub_82F2C230);
PPC_FUNC_IMPL(__imp__sub_82F2C230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30064
	ctx.r3.s64 = r11.s64 + -30064;
}

__attribute__((alias("__imp__sub_82F2C238"))) PPC_WEAK_FUNC(sub_82F2C238);
PPC_FUNC_IMPL(__imp__sub_82F2C238) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C23C"))) PPC_WEAK_FUNC(sub_82F2C23C);
PPC_FUNC_IMPL(__imp__sub_82F2C23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C240"))) PPC_WEAK_FUNC(sub_82F2C240);
PPC_FUNC_IMPL(__imp__sub_82F2C240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30056
	ctx.r3.s64 = r11.s64 + -30056;
}

__attribute__((alias("__imp__sub_82F2C248"))) PPC_WEAK_FUNC(sub_82F2C248);
PPC_FUNC_IMPL(__imp__sub_82F2C248) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C24C"))) PPC_WEAK_FUNC(sub_82F2C24C);
PPC_FUNC_IMPL(__imp__sub_82F2C24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C250"))) PPC_WEAK_FUNC(sub_82F2C250);
PPC_FUNC_IMPL(__imp__sub_82F2C250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30048
	ctx.r3.s64 = r11.s64 + -30048;
}

__attribute__((alias("__imp__sub_82F2C258"))) PPC_WEAK_FUNC(sub_82F2C258);
PPC_FUNC_IMPL(__imp__sub_82F2C258) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C25C"))) PPC_WEAK_FUNC(sub_82F2C25C);
PPC_FUNC_IMPL(__imp__sub_82F2C25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C260"))) PPC_WEAK_FUNC(sub_82F2C260);
PPC_FUNC_IMPL(__imp__sub_82F2C260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30040
	ctx.r3.s64 = r11.s64 + -30040;
}

__attribute__((alias("__imp__sub_82F2C268"))) PPC_WEAK_FUNC(sub_82F2C268);
PPC_FUNC_IMPL(__imp__sub_82F2C268) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C26C"))) PPC_WEAK_FUNC(sub_82F2C26C);
PPC_FUNC_IMPL(__imp__sub_82F2C26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C270"))) PPC_WEAK_FUNC(sub_82F2C270);
PPC_FUNC_IMPL(__imp__sub_82F2C270) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,2252
	ctx.r3.s64 = ctx.r10.s64 + 2252;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27792(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27792, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C2A8"))) PPC_WEAK_FUNC(sub_82F2C2A8);
PPC_FUNC_IMPL(__imp__sub_82F2C2A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C2AC"))) PPC_WEAK_FUNC(sub_82F2C2AC);
PPC_FUNC_IMPL(__imp__sub_82F2C2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C2B0"))) PPC_WEAK_FUNC(sub_82F2C2B0);
PPC_FUNC_IMPL(__imp__sub_82F2C2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30032
	ctx.r3.s64 = r11.s64 + -30032;
}

__attribute__((alias("__imp__sub_82F2C2B8"))) PPC_WEAK_FUNC(sub_82F2C2B8);
PPC_FUNC_IMPL(__imp__sub_82F2C2B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C2BC"))) PPC_WEAK_FUNC(sub_82F2C2BC);
PPC_FUNC_IMPL(__imp__sub_82F2C2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C2C0"))) PPC_WEAK_FUNC(sub_82F2C2C0);
PPC_FUNC_IMPL(__imp__sub_82F2C2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30024
	ctx.r3.s64 = r11.s64 + -30024;
}

__attribute__((alias("__imp__sub_82F2C2C8"))) PPC_WEAK_FUNC(sub_82F2C2C8);
PPC_FUNC_IMPL(__imp__sub_82F2C2C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C2CC"))) PPC_WEAK_FUNC(sub_82F2C2CC);
PPC_FUNC_IMPL(__imp__sub_82F2C2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C2D0"))) PPC_WEAK_FUNC(sub_82F2C2D0);
PPC_FUNC_IMPL(__imp__sub_82F2C2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30016
	ctx.r3.s64 = r11.s64 + -30016;
}

__attribute__((alias("__imp__sub_82F2C2D8"))) PPC_WEAK_FUNC(sub_82F2C2D8);
PPC_FUNC_IMPL(__imp__sub_82F2C2D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C2DC"))) PPC_WEAK_FUNC(sub_82F2C2DC);
PPC_FUNC_IMPL(__imp__sub_82F2C2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C2E0"))) PPC_WEAK_FUNC(sub_82F2C2E0);
PPC_FUNC_IMPL(__imp__sub_82F2C2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30008
	ctx.r3.s64 = r11.s64 + -30008;
}

__attribute__((alias("__imp__sub_82F2C2E8"))) PPC_WEAK_FUNC(sub_82F2C2E8);
PPC_FUNC_IMPL(__imp__sub_82F2C2E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C2EC"))) PPC_WEAK_FUNC(sub_82F2C2EC);
PPC_FUNC_IMPL(__imp__sub_82F2C2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C2F0"))) PPC_WEAK_FUNC(sub_82F2C2F0);
PPC_FUNC_IMPL(__imp__sub_82F2C2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-30000
	ctx.r3.s64 = r11.s64 + -30000;
}

__attribute__((alias("__imp__sub_82F2C2F8"))) PPC_WEAK_FUNC(sub_82F2C2F8);
PPC_FUNC_IMPL(__imp__sub_82F2C2F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C2FC"))) PPC_WEAK_FUNC(sub_82F2C2FC);
PPC_FUNC_IMPL(__imp__sub_82F2C2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C300"))) PPC_WEAK_FUNC(sub_82F2C300);
PPC_FUNC_IMPL(__imp__sub_82F2C300) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r11,27812(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27812, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C328"))) PPC_WEAK_FUNC(sub_82F2C328);
PPC_FUNC_IMPL(__imp__sub_82F2C328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C32C"))) PPC_WEAK_FUNC(sub_82F2C32C);
PPC_FUNC_IMPL(__imp__sub_82F2C32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C330"))) PPC_WEAK_FUNC(sub_82F2C330);
PPC_FUNC_IMPL(__imp__sub_82F2C330) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,3024
	ctx.r3.s64 = ctx.r10.s64 + 3024;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27816(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27816, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C368"))) PPC_WEAK_FUNC(sub_82F2C368);
PPC_FUNC_IMPL(__imp__sub_82F2C368) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C36C"))) PPC_WEAK_FUNC(sub_82F2C36C);
PPC_FUNC_IMPL(__imp__sub_82F2C36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C370"))) PPC_WEAK_FUNC(sub_82F2C370);
PPC_FUNC_IMPL(__imp__sub_82F2C370) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,3204
	ctx.r3.s64 = ctx.r10.s64 + 3204;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27820(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27820, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C3A8"))) PPC_WEAK_FUNC(sub_82F2C3A8);
PPC_FUNC_IMPL(__imp__sub_82F2C3A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C3AC"))) PPC_WEAK_FUNC(sub_82F2C3AC);
PPC_FUNC_IMPL(__imp__sub_82F2C3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C3B0"))) PPC_WEAK_FUNC(sub_82F2C3B0);
PPC_FUNC_IMPL(__imp__sub_82F2C3B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29992
	ctx.r3.s64 = r11.s64 + -29992;
}

__attribute__((alias("__imp__sub_82F2C3B8"))) PPC_WEAK_FUNC(sub_82F2C3B8);
PPC_FUNC_IMPL(__imp__sub_82F2C3B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C3BC"))) PPC_WEAK_FUNC(sub_82F2C3BC);
PPC_FUNC_IMPL(__imp__sub_82F2C3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C3C0"))) PPC_WEAK_FUNC(sub_82F2C3C0);
PPC_FUNC_IMPL(__imp__sub_82F2C3C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29984
	ctx.r3.s64 = r11.s64 + -29984;
}

__attribute__((alias("__imp__sub_82F2C3C8"))) PPC_WEAK_FUNC(sub_82F2C3C8);
PPC_FUNC_IMPL(__imp__sub_82F2C3C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C3CC"))) PPC_WEAK_FUNC(sub_82F2C3CC);
PPC_FUNC_IMPL(__imp__sub_82F2C3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C3D0"))) PPC_WEAK_FUNC(sub_82F2C3D0);
PPC_FUNC_IMPL(__imp__sub_82F2C3D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29976
	ctx.r3.s64 = r11.s64 + -29976;
}

__attribute__((alias("__imp__sub_82F2C3D8"))) PPC_WEAK_FUNC(sub_82F2C3D8);
PPC_FUNC_IMPL(__imp__sub_82F2C3D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C3DC"))) PPC_WEAK_FUNC(sub_82F2C3DC);
PPC_FUNC_IMPL(__imp__sub_82F2C3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C3E0"))) PPC_WEAK_FUNC(sub_82F2C3E0);
PPC_FUNC_IMPL(__imp__sub_82F2C3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29968
	ctx.r3.s64 = r11.s64 + -29968;
}

__attribute__((alias("__imp__sub_82F2C3E8"))) PPC_WEAK_FUNC(sub_82F2C3E8);
PPC_FUNC_IMPL(__imp__sub_82F2C3E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C3EC"))) PPC_WEAK_FUNC(sub_82F2C3EC);
PPC_FUNC_IMPL(__imp__sub_82F2C3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C3F0"))) PPC_WEAK_FUNC(sub_82F2C3F0);
PPC_FUNC_IMPL(__imp__sub_82F2C3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29960
	ctx.r3.s64 = r11.s64 + -29960;
}

__attribute__((alias("__imp__sub_82F2C3F8"))) PPC_WEAK_FUNC(sub_82F2C3F8);
PPC_FUNC_IMPL(__imp__sub_82F2C3F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C3FC"))) PPC_WEAK_FUNC(sub_82F2C3FC);
PPC_FUNC_IMPL(__imp__sub_82F2C3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C400"))) PPC_WEAK_FUNC(sub_82F2C400);
PPC_FUNC_IMPL(__imp__sub_82F2C400) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,1380
	ctx.r3.s64 = ctx.r10.s64 + 1380;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27840(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27840, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C438"))) PPC_WEAK_FUNC(sub_82F2C438);
PPC_FUNC_IMPL(__imp__sub_82F2C438) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C43C"))) PPC_WEAK_FUNC(sub_82F2C43C);
PPC_FUNC_IMPL(__imp__sub_82F2C43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C440"))) PPC_WEAK_FUNC(sub_82F2C440);
PPC_FUNC_IMPL(__imp__sub_82F2C440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29952
	ctx.r3.s64 = r11.s64 + -29952;
}

__attribute__((alias("__imp__sub_82F2C448"))) PPC_WEAK_FUNC(sub_82F2C448);
PPC_FUNC_IMPL(__imp__sub_82F2C448) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C44C"))) PPC_WEAK_FUNC(sub_82F2C44C);
PPC_FUNC_IMPL(__imp__sub_82F2C44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C450"))) PPC_WEAK_FUNC(sub_82F2C450);
PPC_FUNC_IMPL(__imp__sub_82F2C450) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,27860(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27860, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C47C"))) PPC_WEAK_FUNC(sub_82F2C47C);
PPC_FUNC_IMPL(__imp__sub_82F2C47C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C480"))) PPC_WEAK_FUNC(sub_82F2C480);
PPC_FUNC_IMPL(__imp__sub_82F2C480) {
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
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,27864
	ctx.r3.s64 = ctx.r7.s64 + 27864;
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
	// addi r3,r6,-29944
	ctx.r3.s64 = ctx.r6.s64 + -29944;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C4F8"))) PPC_WEAK_FUNC(sub_82F2C4F8);
PPC_FUNC_IMPL(__imp__sub_82F2C4F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C4FC"))) PPC_WEAK_FUNC(sub_82F2C4FC);
PPC_FUNC_IMPL(__imp__sub_82F2C4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C500"))) PPC_WEAK_FUNC(sub_82F2C500);
PPC_FUNC_IMPL(__imp__sub_82F2C500) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r11,27896(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27896, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C528"))) PPC_WEAK_FUNC(sub_82F2C528);
PPC_FUNC_IMPL(__imp__sub_82F2C528) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C52C"))) PPC_WEAK_FUNC(sub_82F2C52C);
PPC_FUNC_IMPL(__imp__sub_82F2C52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C530"))) PPC_WEAK_FUNC(sub_82F2C530);
PPC_FUNC_IMPL(__imp__sub_82F2C530) {
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
	// addi r3,r11,-15224
	ctx.r3.s64 = r11.s64 + -15224;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,27900(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27900, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C55C"))) PPC_WEAK_FUNC(sub_82F2C55C);
PPC_FUNC_IMPL(__imp__sub_82F2C55C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C560"))) PPC_WEAK_FUNC(sub_82F2C560);
PPC_FUNC_IMPL(__imp__sub_82F2C560) {
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
	// addi r3,r11,-15212
	ctx.r3.s64 = r11.s64 + -15212;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,27904(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27904, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C58C"))) PPC_WEAK_FUNC(sub_82F2C58C);
PPC_FUNC_IMPL(__imp__sub_82F2C58C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C590"))) PPC_WEAK_FUNC(sub_82F2C590);
PPC_FUNC_IMPL(__imp__sub_82F2C590) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,3244
	ctx.r3.s64 = ctx.r10.s64 + 3244;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27908(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27908, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C5C8"))) PPC_WEAK_FUNC(sub_82F2C5C8);
PPC_FUNC_IMPL(__imp__sub_82F2C5C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C5CC"))) PPC_WEAK_FUNC(sub_82F2C5CC);
PPC_FUNC_IMPL(__imp__sub_82F2C5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C5D0"))) PPC_WEAK_FUNC(sub_82F2C5D0);
PPC_FUNC_IMPL(__imp__sub_82F2C5D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29936
	ctx.r3.s64 = r11.s64 + -29936;
}

__attribute__((alias("__imp__sub_82F2C5D8"))) PPC_WEAK_FUNC(sub_82F2C5D8);
PPC_FUNC_IMPL(__imp__sub_82F2C5D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C5DC"))) PPC_WEAK_FUNC(sub_82F2C5DC);
PPC_FUNC_IMPL(__imp__sub_82F2C5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C5E0"))) PPC_WEAK_FUNC(sub_82F2C5E0);
PPC_FUNC_IMPL(__imp__sub_82F2C5E0) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,4744
	ctx.r3.s64 = ctx.r10.s64 + 4744;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27928(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27928, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C618"))) PPC_WEAK_FUNC(sub_82F2C618);
PPC_FUNC_IMPL(__imp__sub_82F2C618) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C61C"))) PPC_WEAK_FUNC(sub_82F2C61C);
PPC_FUNC_IMPL(__imp__sub_82F2C61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C620"))) PPC_WEAK_FUNC(sub_82F2C620);
PPC_FUNC_IMPL(__imp__sub_82F2C620) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,2148
	ctx.r3.s64 = ctx.r10.s64 + 2148;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27932(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27932, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C658"))) PPC_WEAK_FUNC(sub_82F2C658);
PPC_FUNC_IMPL(__imp__sub_82F2C658) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C65C"))) PPC_WEAK_FUNC(sub_82F2C65C);
PPC_FUNC_IMPL(__imp__sub_82F2C65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C660"))) PPC_WEAK_FUNC(sub_82F2C660);
PPC_FUNC_IMPL(__imp__sub_82F2C660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29928
	ctx.r3.s64 = r11.s64 + -29928;
}

__attribute__((alias("__imp__sub_82F2C668"))) PPC_WEAK_FUNC(sub_82F2C668);
PPC_FUNC_IMPL(__imp__sub_82F2C668) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C66C"))) PPC_WEAK_FUNC(sub_82F2C66C);
PPC_FUNC_IMPL(__imp__sub_82F2C66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C670"))) PPC_WEAK_FUNC(sub_82F2C670);
PPC_FUNC_IMPL(__imp__sub_82F2C670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29920
	ctx.r3.s64 = r11.s64 + -29920;
}

__attribute__((alias("__imp__sub_82F2C678"))) PPC_WEAK_FUNC(sub_82F2C678);
PPC_FUNC_IMPL(__imp__sub_82F2C678) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C67C"))) PPC_WEAK_FUNC(sub_82F2C67C);
PPC_FUNC_IMPL(__imp__sub_82F2C67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C680"))) PPC_WEAK_FUNC(sub_82F2C680);
PPC_FUNC_IMPL(__imp__sub_82F2C680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29912
	ctx.r3.s64 = r11.s64 + -29912;
}

__attribute__((alias("__imp__sub_82F2C688"))) PPC_WEAK_FUNC(sub_82F2C688);
PPC_FUNC_IMPL(__imp__sub_82F2C688) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C68C"))) PPC_WEAK_FUNC(sub_82F2C68C);
PPC_FUNC_IMPL(__imp__sub_82F2C68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C690"))) PPC_WEAK_FUNC(sub_82F2C690);
PPC_FUNC_IMPL(__imp__sub_82F2C690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29904
	ctx.r3.s64 = r11.s64 + -29904;
}

__attribute__((alias("__imp__sub_82F2C698"))) PPC_WEAK_FUNC(sub_82F2C698);
PPC_FUNC_IMPL(__imp__sub_82F2C698) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C69C"))) PPC_WEAK_FUNC(sub_82F2C69C);
PPC_FUNC_IMPL(__imp__sub_82F2C69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C6A0"))) PPC_WEAK_FUNC(sub_82F2C6A0);
PPC_FUNC_IMPL(__imp__sub_82F2C6A0) {
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
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-25248
	ctx.r3.s64 = ctx.r10.s64 + -25248;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27936(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27936, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C6D8"))) PPC_WEAK_FUNC(sub_82F2C6D8);
PPC_FUNC_IMPL(__imp__sub_82F2C6D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C6DC"))) PPC_WEAK_FUNC(sub_82F2C6DC);
PPC_FUNC_IMPL(__imp__sub_82F2C6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C6E0"))) PPC_WEAK_FUNC(sub_82F2C6E0);
PPC_FUNC_IMPL(__imp__sub_82F2C6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29896
	ctx.r3.s64 = r11.s64 + -29896;
}

__attribute__((alias("__imp__sub_82F2C6E8"))) PPC_WEAK_FUNC(sub_82F2C6E8);
PPC_FUNC_IMPL(__imp__sub_82F2C6E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C6EC"))) PPC_WEAK_FUNC(sub_82F2C6EC);
PPC_FUNC_IMPL(__imp__sub_82F2C6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C6F0"))) PPC_WEAK_FUNC(sub_82F2C6F0);
PPC_FUNC_IMPL(__imp__sub_82F2C6F0) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,1604
	ctx.r3.s64 = ctx.r10.s64 + 1604;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27956(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27956, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C728"))) PPC_WEAK_FUNC(sub_82F2C728);
PPC_FUNC_IMPL(__imp__sub_82F2C728) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C72C"))) PPC_WEAK_FUNC(sub_82F2C72C);
PPC_FUNC_IMPL(__imp__sub_82F2C72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C730"))) PPC_WEAK_FUNC(sub_82F2C730);
PPC_FUNC_IMPL(__imp__sub_82F2C730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29888
	ctx.r3.s64 = r11.s64 + -29888;
}

__attribute__((alias("__imp__sub_82F2C738"))) PPC_WEAK_FUNC(sub_82F2C738);
PPC_FUNC_IMPL(__imp__sub_82F2C738) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C73C"))) PPC_WEAK_FUNC(sub_82F2C73C);
PPC_FUNC_IMPL(__imp__sub_82F2C73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C740"))) PPC_WEAK_FUNC(sub_82F2C740);
PPC_FUNC_IMPL(__imp__sub_82F2C740) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,27964(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27964, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C76C"))) PPC_WEAK_FUNC(sub_82F2C76C);
PPC_FUNC_IMPL(__imp__sub_82F2C76C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C770"))) PPC_WEAK_FUNC(sub_82F2C770);
PPC_FUNC_IMPL(__imp__sub_82F2C770) {
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
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,27968
	ctx.r3.s64 = ctx.r7.s64 + 27968;
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
	// addi r3,r6,-29880
	ctx.r3.s64 = ctx.r6.s64 + -29880;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C7E8"))) PPC_WEAK_FUNC(sub_82F2C7E8);
PPC_FUNC_IMPL(__imp__sub_82F2C7E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C7EC"))) PPC_WEAK_FUNC(sub_82F2C7EC);
PPC_FUNC_IMPL(__imp__sub_82F2C7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C7F0"))) PPC_WEAK_FUNC(sub_82F2C7F0);
PPC_FUNC_IMPL(__imp__sub_82F2C7F0) {
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
	// addi r3,r11,-14520
	ctx.r3.s64 = r11.s64 + -14520;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,28000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28000, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C81C"))) PPC_WEAK_FUNC(sub_82F2C81C);
PPC_FUNC_IMPL(__imp__sub_82F2C81C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C820"))) PPC_WEAK_FUNC(sub_82F2C820);
PPC_FUNC_IMPL(__imp__sub_82F2C820) {
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
	// addi r3,r11,-14512
	ctx.r3.s64 = r11.s64 + -14512;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,28004(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28004, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C84C"))) PPC_WEAK_FUNC(sub_82F2C84C);
PPC_FUNC_IMPL(__imp__sub_82F2C84C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C850"))) PPC_WEAK_FUNC(sub_82F2C850);
PPC_FUNC_IMPL(__imp__sub_82F2C850) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,1648
	ctx.r3.s64 = ctx.r10.s64 + 1648;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,27960(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27960, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C888"))) PPC_WEAK_FUNC(sub_82F2C888);
PPC_FUNC_IMPL(__imp__sub_82F2C888) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C88C"))) PPC_WEAK_FUNC(sub_82F2C88C);
PPC_FUNC_IMPL(__imp__sub_82F2C88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C890"))) PPC_WEAK_FUNC(sub_82F2C890);
PPC_FUNC_IMPL(__imp__sub_82F2C890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29872
	ctx.r3.s64 = r11.s64 + -29872;
}

__attribute__((alias("__imp__sub_82F2C898"))) PPC_WEAK_FUNC(sub_82F2C898);
PPC_FUNC_IMPL(__imp__sub_82F2C898) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C89C"))) PPC_WEAK_FUNC(sub_82F2C89C);
PPC_FUNC_IMPL(__imp__sub_82F2C89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C8A0"))) PPC_WEAK_FUNC(sub_82F2C8A0);
PPC_FUNC_IMPL(__imp__sub_82F2C8A0) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r11,28024(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28024, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C8C8"))) PPC_WEAK_FUNC(sub_82F2C8C8);
PPC_FUNC_IMPL(__imp__sub_82F2C8C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C8CC"))) PPC_WEAK_FUNC(sub_82F2C8CC);
PPC_FUNC_IMPL(__imp__sub_82F2C8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C8D0"))) PPC_WEAK_FUNC(sub_82F2C8D0);
PPC_FUNC_IMPL(__imp__sub_82F2C8D0) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,4884
	ctx.r3.s64 = ctx.r10.s64 + 4884;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28028(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28028, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

