#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F3C520"))) PPC_WEAK_FUNC(sub_82F3C520);
PPC_FUNC_IMPL(__imp__sub_82F3C520) {
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
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-6876
	ctx.r3.s64 = ctx.r10.s64 + -6876;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25040(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25040, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3C554"))) PPC_WEAK_FUNC(sub_82F3C554);
PPC_FUNC_IMPL(__imp__sub_82F3C554) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3C558"))) PPC_WEAK_FUNC(sub_82F3C558);
PPC_FUNC_IMPL(__imp__sub_82F3C558) {
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
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-7268
	ctx.r3.s64 = ctx.r10.s64 + -7268;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25044(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25044, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3C58C"))) PPC_WEAK_FUNC(sub_82F3C58C);
PPC_FUNC_IMPL(__imp__sub_82F3C58C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3C590"))) PPC_WEAK_FUNC(sub_82F3C590);
PPC_FUNC_IMPL(__imp__sub_82F3C590) {
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
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-7052
	ctx.r3.s64 = ctx.r10.s64 + -7052;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25048(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25048, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3C5C4"))) PPC_WEAK_FUNC(sub_82F3C5C4);
PPC_FUNC_IMPL(__imp__sub_82F3C5C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3C5C8"))) PPC_WEAK_FUNC(sub_82F3C5C8);
PPC_FUNC_IMPL(__imp__sub_82F3C5C8) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-11008
	ctx.r3.s64 = ctx.r10.s64 + -11008;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25052(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25052, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3C5FC"))) PPC_WEAK_FUNC(sub_82F3C5FC);
PPC_FUNC_IMPL(__imp__sub_82F3C5FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3C600"))) PPC_WEAK_FUNC(sub_82F3C600);
PPC_FUNC_IMPL(__imp__sub_82F3C600) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-10944
	ctx.r3.s64 = ctx.r10.s64 + -10944;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25056(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25056, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3C634"))) PPC_WEAK_FUNC(sub_82F3C634);
PPC_FUNC_IMPL(__imp__sub_82F3C634) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3C638"))) PPC_WEAK_FUNC(sub_82F3C638);
PPC_FUNC_IMPL(__imp__sub_82F3C638) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-10884
	ctx.r3.s64 = ctx.r10.s64 + -10884;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25060(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25060, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3C66C"))) PPC_WEAK_FUNC(sub_82F3C66C);
PPC_FUNC_IMPL(__imp__sub_82F3C66C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3C670"))) PPC_WEAK_FUNC(sub_82F3C670);
PPC_FUNC_IMPL(__imp__sub_82F3C670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21360
	ctx.r3.s64 = r11.s64 + -21360;
}

__attribute__((alias("__imp__sub_82F3C678"))) PPC_WEAK_FUNC(sub_82F3C678);
PPC_FUNC_IMPL(__imp__sub_82F3C678) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C67C"))) PPC_WEAK_FUNC(sub_82F3C67C);
PPC_FUNC_IMPL(__imp__sub_82F3C67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C680"))) PPC_WEAK_FUNC(sub_82F3C680);
PPC_FUNC_IMPL(__imp__sub_82F3C680) {
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
	// stw r11,-24860(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24860, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3C6A8"))) PPC_WEAK_FUNC(sub_82F3C6A8);
PPC_FUNC_IMPL(__imp__sub_82F3C6A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3C6AC"))) PPC_WEAK_FUNC(sub_82F3C6AC);
PPC_FUNC_IMPL(__imp__sub_82F3C6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C6B0"))) PPC_WEAK_FUNC(sub_82F3C6B0);
PPC_FUNC_IMPL(__imp__sub_82F3C6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21352
	ctx.r3.s64 = r11.s64 + -21352;
}

__attribute__((alias("__imp__sub_82F3C6B8"))) PPC_WEAK_FUNC(sub_82F3C6B8);
PPC_FUNC_IMPL(__imp__sub_82F3C6B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C6BC"))) PPC_WEAK_FUNC(sub_82F3C6BC);
PPC_FUNC_IMPL(__imp__sub_82F3C6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C6C0"))) PPC_WEAK_FUNC(sub_82F3C6C0);
PPC_FUNC_IMPL(__imp__sub_82F3C6C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21344
	ctx.r3.s64 = r11.s64 + -21344;
}

__attribute__((alias("__imp__sub_82F3C6C8"))) PPC_WEAK_FUNC(sub_82F3C6C8);
PPC_FUNC_IMPL(__imp__sub_82F3C6C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C6CC"))) PPC_WEAK_FUNC(sub_82F3C6CC);
PPC_FUNC_IMPL(__imp__sub_82F3C6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C6D0"))) PPC_WEAK_FUNC(sub_82F3C6D0);
PPC_FUNC_IMPL(__imp__sub_82F3C6D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21336
	ctx.r3.s64 = r11.s64 + -21336;
}

__attribute__((alias("__imp__sub_82F3C6D8"))) PPC_WEAK_FUNC(sub_82F3C6D8);
PPC_FUNC_IMPL(__imp__sub_82F3C6D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C6DC"))) PPC_WEAK_FUNC(sub_82F3C6DC);
PPC_FUNC_IMPL(__imp__sub_82F3C6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C6E0"))) PPC_WEAK_FUNC(sub_82F3C6E0);
PPC_FUNC_IMPL(__imp__sub_82F3C6E0) {
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
	// stw r11,-24840(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24840, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3C708"))) PPC_WEAK_FUNC(sub_82F3C708);
PPC_FUNC_IMPL(__imp__sub_82F3C708) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3C70C"))) PPC_WEAK_FUNC(sub_82F3C70C);
PPC_FUNC_IMPL(__imp__sub_82F3C70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C710"))) PPC_WEAK_FUNC(sub_82F3C710);
PPC_FUNC_IMPL(__imp__sub_82F3C710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21328
	ctx.r3.s64 = r11.s64 + -21328;
}

__attribute__((alias("__imp__sub_82F3C718"))) PPC_WEAK_FUNC(sub_82F3C718);
PPC_FUNC_IMPL(__imp__sub_82F3C718) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C71C"))) PPC_WEAK_FUNC(sub_82F3C71C);
PPC_FUNC_IMPL(__imp__sub_82F3C71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C720"))) PPC_WEAK_FUNC(sub_82F3C720);
PPC_FUNC_IMPL(__imp__sub_82F3C720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21320
	ctx.r3.s64 = r11.s64 + -21320;
}

__attribute__((alias("__imp__sub_82F3C728"))) PPC_WEAK_FUNC(sub_82F3C728);
PPC_FUNC_IMPL(__imp__sub_82F3C728) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C72C"))) PPC_WEAK_FUNC(sub_82F3C72C);
PPC_FUNC_IMPL(__imp__sub_82F3C72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C730"))) PPC_WEAK_FUNC(sub_82F3C730);
PPC_FUNC_IMPL(__imp__sub_82F3C730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21312
	ctx.r3.s64 = r11.s64 + -21312;
}

__attribute__((alias("__imp__sub_82F3C738"))) PPC_WEAK_FUNC(sub_82F3C738);
PPC_FUNC_IMPL(__imp__sub_82F3C738) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C73C"))) PPC_WEAK_FUNC(sub_82F3C73C);
PPC_FUNC_IMPL(__imp__sub_82F3C73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C740"))) PPC_WEAK_FUNC(sub_82F3C740);
PPC_FUNC_IMPL(__imp__sub_82F3C740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21304
	ctx.r3.s64 = r11.s64 + -21304;
}

__attribute__((alias("__imp__sub_82F3C748"))) PPC_WEAK_FUNC(sub_82F3C748);
PPC_FUNC_IMPL(__imp__sub_82F3C748) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C74C"))) PPC_WEAK_FUNC(sub_82F3C74C);
PPC_FUNC_IMPL(__imp__sub_82F3C74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C750"))) PPC_WEAK_FUNC(sub_82F3C750);
PPC_FUNC_IMPL(__imp__sub_82F3C750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21296
	ctx.r3.s64 = r11.s64 + -21296;
}

__attribute__((alias("__imp__sub_82F3C758"))) PPC_WEAK_FUNC(sub_82F3C758);
PPC_FUNC_IMPL(__imp__sub_82F3C758) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C75C"))) PPC_WEAK_FUNC(sub_82F3C75C);
PPC_FUNC_IMPL(__imp__sub_82F3C75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C760"))) PPC_WEAK_FUNC(sub_82F3C760);
PPC_FUNC_IMPL(__imp__sub_82F3C760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21288
	ctx.r3.s64 = r11.s64 + -21288;
}

__attribute__((alias("__imp__sub_82F3C768"))) PPC_WEAK_FUNC(sub_82F3C768);
PPC_FUNC_IMPL(__imp__sub_82F3C768) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C76C"))) PPC_WEAK_FUNC(sub_82F3C76C);
PPC_FUNC_IMPL(__imp__sub_82F3C76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C770"))) PPC_WEAK_FUNC(sub_82F3C770);
PPC_FUNC_IMPL(__imp__sub_82F3C770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21280
	ctx.r3.s64 = r11.s64 + -21280;
}

__attribute__((alias("__imp__sub_82F3C778"))) PPC_WEAK_FUNC(sub_82F3C778);
PPC_FUNC_IMPL(__imp__sub_82F3C778) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C77C"))) PPC_WEAK_FUNC(sub_82F3C77C);
PPC_FUNC_IMPL(__imp__sub_82F3C77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C780"))) PPC_WEAK_FUNC(sub_82F3C780);
PPC_FUNC_IMPL(__imp__sub_82F3C780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21272
	ctx.r3.s64 = r11.s64 + -21272;
}

__attribute__((alias("__imp__sub_82F3C788"))) PPC_WEAK_FUNC(sub_82F3C788);
PPC_FUNC_IMPL(__imp__sub_82F3C788) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C78C"))) PPC_WEAK_FUNC(sub_82F3C78C);
PPC_FUNC_IMPL(__imp__sub_82F3C78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C790"))) PPC_WEAK_FUNC(sub_82F3C790);
PPC_FUNC_IMPL(__imp__sub_82F3C790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21264
	ctx.r3.s64 = r11.s64 + -21264;
}

__attribute__((alias("__imp__sub_82F3C798"))) PPC_WEAK_FUNC(sub_82F3C798);
PPC_FUNC_IMPL(__imp__sub_82F3C798) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C79C"))) PPC_WEAK_FUNC(sub_82F3C79C);
PPC_FUNC_IMPL(__imp__sub_82F3C79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C7A0"))) PPC_WEAK_FUNC(sub_82F3C7A0);
PPC_FUNC_IMPL(__imp__sub_82F3C7A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21256
	ctx.r3.s64 = r11.s64 + -21256;
}

__attribute__((alias("__imp__sub_82F3C7A8"))) PPC_WEAK_FUNC(sub_82F3C7A8);
PPC_FUNC_IMPL(__imp__sub_82F3C7A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C7AC"))) PPC_WEAK_FUNC(sub_82F3C7AC);
PPC_FUNC_IMPL(__imp__sub_82F3C7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C7B0"))) PPC_WEAK_FUNC(sub_82F3C7B0);
PPC_FUNC_IMPL(__imp__sub_82F3C7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21248
	ctx.r3.s64 = r11.s64 + -21248;
}

__attribute__((alias("__imp__sub_82F3C7B8"))) PPC_WEAK_FUNC(sub_82F3C7B8);
PPC_FUNC_IMPL(__imp__sub_82F3C7B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C7BC"))) PPC_WEAK_FUNC(sub_82F3C7BC);
PPC_FUNC_IMPL(__imp__sub_82F3C7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C7C0"))) PPC_WEAK_FUNC(sub_82F3C7C0);
PPC_FUNC_IMPL(__imp__sub_82F3C7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21240
	ctx.r3.s64 = r11.s64 + -21240;
}

__attribute__((alias("__imp__sub_82F3C7C8"))) PPC_WEAK_FUNC(sub_82F3C7C8);
PPC_FUNC_IMPL(__imp__sub_82F3C7C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C7CC"))) PPC_WEAK_FUNC(sub_82F3C7CC);
PPC_FUNC_IMPL(__imp__sub_82F3C7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C7D0"))) PPC_WEAK_FUNC(sub_82F3C7D0);
PPC_FUNC_IMPL(__imp__sub_82F3C7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21232
	ctx.r3.s64 = r11.s64 + -21232;
}

__attribute__((alias("__imp__sub_82F3C7D8"))) PPC_WEAK_FUNC(sub_82F3C7D8);
PPC_FUNC_IMPL(__imp__sub_82F3C7D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C7DC"))) PPC_WEAK_FUNC(sub_82F3C7DC);
PPC_FUNC_IMPL(__imp__sub_82F3C7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C7E0"))) PPC_WEAK_FUNC(sub_82F3C7E0);
PPC_FUNC_IMPL(__imp__sub_82F3C7E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21224
	ctx.r3.s64 = r11.s64 + -21224;
}

__attribute__((alias("__imp__sub_82F3C7E8"))) PPC_WEAK_FUNC(sub_82F3C7E8);
PPC_FUNC_IMPL(__imp__sub_82F3C7E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C7EC"))) PPC_WEAK_FUNC(sub_82F3C7EC);
PPC_FUNC_IMPL(__imp__sub_82F3C7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C7F0"))) PPC_WEAK_FUNC(sub_82F3C7F0);
PPC_FUNC_IMPL(__imp__sub_82F3C7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21216
	ctx.r3.s64 = r11.s64 + -21216;
}

__attribute__((alias("__imp__sub_82F3C7F8"))) PPC_WEAK_FUNC(sub_82F3C7F8);
PPC_FUNC_IMPL(__imp__sub_82F3C7F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C7FC"))) PPC_WEAK_FUNC(sub_82F3C7FC);
PPC_FUNC_IMPL(__imp__sub_82F3C7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C800"))) PPC_WEAK_FUNC(sub_82F3C800);
PPC_FUNC_IMPL(__imp__sub_82F3C800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21208
	ctx.r3.s64 = r11.s64 + -21208;
}

__attribute__((alias("__imp__sub_82F3C808"))) PPC_WEAK_FUNC(sub_82F3C808);
PPC_FUNC_IMPL(__imp__sub_82F3C808) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C80C"))) PPC_WEAK_FUNC(sub_82F3C80C);
PPC_FUNC_IMPL(__imp__sub_82F3C80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C810"))) PPC_WEAK_FUNC(sub_82F3C810);
PPC_FUNC_IMPL(__imp__sub_82F3C810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21200
	ctx.r3.s64 = r11.s64 + -21200;
}

__attribute__((alias("__imp__sub_82F3C818"))) PPC_WEAK_FUNC(sub_82F3C818);
PPC_FUNC_IMPL(__imp__sub_82F3C818) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C81C"))) PPC_WEAK_FUNC(sub_82F3C81C);
PPC_FUNC_IMPL(__imp__sub_82F3C81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C820"))) PPC_WEAK_FUNC(sub_82F3C820);
PPC_FUNC_IMPL(__imp__sub_82F3C820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21192
	ctx.r3.s64 = r11.s64 + -21192;
}

__attribute__((alias("__imp__sub_82F3C828"))) PPC_WEAK_FUNC(sub_82F3C828);
PPC_FUNC_IMPL(__imp__sub_82F3C828) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C82C"))) PPC_WEAK_FUNC(sub_82F3C82C);
PPC_FUNC_IMPL(__imp__sub_82F3C82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C830"))) PPC_WEAK_FUNC(sub_82F3C830);
PPC_FUNC_IMPL(__imp__sub_82F3C830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21184
	ctx.r3.s64 = r11.s64 + -21184;
}

__attribute__((alias("__imp__sub_82F3C838"))) PPC_WEAK_FUNC(sub_82F3C838);
PPC_FUNC_IMPL(__imp__sub_82F3C838) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C83C"))) PPC_WEAK_FUNC(sub_82F3C83C);
PPC_FUNC_IMPL(__imp__sub_82F3C83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C840"))) PPC_WEAK_FUNC(sub_82F3C840);
PPC_FUNC_IMPL(__imp__sub_82F3C840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21176
	ctx.r3.s64 = r11.s64 + -21176;
}

__attribute__((alias("__imp__sub_82F3C848"))) PPC_WEAK_FUNC(sub_82F3C848);
PPC_FUNC_IMPL(__imp__sub_82F3C848) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C84C"))) PPC_WEAK_FUNC(sub_82F3C84C);
PPC_FUNC_IMPL(__imp__sub_82F3C84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C850"))) PPC_WEAK_FUNC(sub_82F3C850);
PPC_FUNC_IMPL(__imp__sub_82F3C850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21168
	ctx.r3.s64 = r11.s64 + -21168;
}

__attribute__((alias("__imp__sub_82F3C858"))) PPC_WEAK_FUNC(sub_82F3C858);
PPC_FUNC_IMPL(__imp__sub_82F3C858) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C85C"))) PPC_WEAK_FUNC(sub_82F3C85C);
PPC_FUNC_IMPL(__imp__sub_82F3C85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C860"))) PPC_WEAK_FUNC(sub_82F3C860);
PPC_FUNC_IMPL(__imp__sub_82F3C860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21160
	ctx.r3.s64 = r11.s64 + -21160;
}

__attribute__((alias("__imp__sub_82F3C868"))) PPC_WEAK_FUNC(sub_82F3C868);
PPC_FUNC_IMPL(__imp__sub_82F3C868) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C86C"))) PPC_WEAK_FUNC(sub_82F3C86C);
PPC_FUNC_IMPL(__imp__sub_82F3C86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C870"))) PPC_WEAK_FUNC(sub_82F3C870);
PPC_FUNC_IMPL(__imp__sub_82F3C870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21152
	ctx.r3.s64 = r11.s64 + -21152;
}

__attribute__((alias("__imp__sub_82F3C878"))) PPC_WEAK_FUNC(sub_82F3C878);
PPC_FUNC_IMPL(__imp__sub_82F3C878) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C87C"))) PPC_WEAK_FUNC(sub_82F3C87C);
PPC_FUNC_IMPL(__imp__sub_82F3C87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C880"))) PPC_WEAK_FUNC(sub_82F3C880);
PPC_FUNC_IMPL(__imp__sub_82F3C880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21144
	ctx.r3.s64 = r11.s64 + -21144;
}

__attribute__((alias("__imp__sub_82F3C888"))) PPC_WEAK_FUNC(sub_82F3C888);
PPC_FUNC_IMPL(__imp__sub_82F3C888) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C88C"))) PPC_WEAK_FUNC(sub_82F3C88C);
PPC_FUNC_IMPL(__imp__sub_82F3C88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C890"))) PPC_WEAK_FUNC(sub_82F3C890);
PPC_FUNC_IMPL(__imp__sub_82F3C890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21136
	ctx.r3.s64 = r11.s64 + -21136;
}

__attribute__((alias("__imp__sub_82F3C898"))) PPC_WEAK_FUNC(sub_82F3C898);
PPC_FUNC_IMPL(__imp__sub_82F3C898) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C89C"))) PPC_WEAK_FUNC(sub_82F3C89C);
PPC_FUNC_IMPL(__imp__sub_82F3C89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C8A0"))) PPC_WEAK_FUNC(sub_82F3C8A0);
PPC_FUNC_IMPL(__imp__sub_82F3C8A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21128
	ctx.r3.s64 = r11.s64 + -21128;
}

__attribute__((alias("__imp__sub_82F3C8A8"))) PPC_WEAK_FUNC(sub_82F3C8A8);
PPC_FUNC_IMPL(__imp__sub_82F3C8A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C8AC"))) PPC_WEAK_FUNC(sub_82F3C8AC);
PPC_FUNC_IMPL(__imp__sub_82F3C8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C8B0"))) PPC_WEAK_FUNC(sub_82F3C8B0);
PPC_FUNC_IMPL(__imp__sub_82F3C8B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21120
	ctx.r3.s64 = r11.s64 + -21120;
}

__attribute__((alias("__imp__sub_82F3C8B8"))) PPC_WEAK_FUNC(sub_82F3C8B8);
PPC_FUNC_IMPL(__imp__sub_82F3C8B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C8BC"))) PPC_WEAK_FUNC(sub_82F3C8BC);
PPC_FUNC_IMPL(__imp__sub_82F3C8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C8C0"))) PPC_WEAK_FUNC(sub_82F3C8C0);
PPC_FUNC_IMPL(__imp__sub_82F3C8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21112
	ctx.r3.s64 = r11.s64 + -21112;
}

__attribute__((alias("__imp__sub_82F3C8C8"))) PPC_WEAK_FUNC(sub_82F3C8C8);
PPC_FUNC_IMPL(__imp__sub_82F3C8C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C8CC"))) PPC_WEAK_FUNC(sub_82F3C8CC);
PPC_FUNC_IMPL(__imp__sub_82F3C8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C8D0"))) PPC_WEAK_FUNC(sub_82F3C8D0);
PPC_FUNC_IMPL(__imp__sub_82F3C8D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21104
	ctx.r3.s64 = r11.s64 + -21104;
}

__attribute__((alias("__imp__sub_82F3C8D8"))) PPC_WEAK_FUNC(sub_82F3C8D8);
PPC_FUNC_IMPL(__imp__sub_82F3C8D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C8DC"))) PPC_WEAK_FUNC(sub_82F3C8DC);
PPC_FUNC_IMPL(__imp__sub_82F3C8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C8E0"))) PPC_WEAK_FUNC(sub_82F3C8E0);
PPC_FUNC_IMPL(__imp__sub_82F3C8E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21096
	ctx.r3.s64 = r11.s64 + -21096;
}

__attribute__((alias("__imp__sub_82F3C8E8"))) PPC_WEAK_FUNC(sub_82F3C8E8);
PPC_FUNC_IMPL(__imp__sub_82F3C8E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C8EC"))) PPC_WEAK_FUNC(sub_82F3C8EC);
PPC_FUNC_IMPL(__imp__sub_82F3C8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C8F0"))) PPC_WEAK_FUNC(sub_82F3C8F0);
PPC_FUNC_IMPL(__imp__sub_82F3C8F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21088
	ctx.r3.s64 = r11.s64 + -21088;
}

__attribute__((alias("__imp__sub_82F3C8F8"))) PPC_WEAK_FUNC(sub_82F3C8F8);
PPC_FUNC_IMPL(__imp__sub_82F3C8F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C8FC"))) PPC_WEAK_FUNC(sub_82F3C8FC);
PPC_FUNC_IMPL(__imp__sub_82F3C8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C900"))) PPC_WEAK_FUNC(sub_82F3C900);
PPC_FUNC_IMPL(__imp__sub_82F3C900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21080
	ctx.r3.s64 = r11.s64 + -21080;
}

__attribute__((alias("__imp__sub_82F3C908"))) PPC_WEAK_FUNC(sub_82F3C908);
PPC_FUNC_IMPL(__imp__sub_82F3C908) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C90C"))) PPC_WEAK_FUNC(sub_82F3C90C);
PPC_FUNC_IMPL(__imp__sub_82F3C90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C910"))) PPC_WEAK_FUNC(sub_82F3C910);
PPC_FUNC_IMPL(__imp__sub_82F3C910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21072
	ctx.r3.s64 = r11.s64 + -21072;
}

__attribute__((alias("__imp__sub_82F3C918"))) PPC_WEAK_FUNC(sub_82F3C918);
PPC_FUNC_IMPL(__imp__sub_82F3C918) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C91C"))) PPC_WEAK_FUNC(sub_82F3C91C);
PPC_FUNC_IMPL(__imp__sub_82F3C91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C920"))) PPC_WEAK_FUNC(sub_82F3C920);
PPC_FUNC_IMPL(__imp__sub_82F3C920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21064
	ctx.r3.s64 = r11.s64 + -21064;
}

__attribute__((alias("__imp__sub_82F3C928"))) PPC_WEAK_FUNC(sub_82F3C928);
PPC_FUNC_IMPL(__imp__sub_82F3C928) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C92C"))) PPC_WEAK_FUNC(sub_82F3C92C);
PPC_FUNC_IMPL(__imp__sub_82F3C92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C930"))) PPC_WEAK_FUNC(sub_82F3C930);
PPC_FUNC_IMPL(__imp__sub_82F3C930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21056
	ctx.r3.s64 = r11.s64 + -21056;
}

__attribute__((alias("__imp__sub_82F3C938"))) PPC_WEAK_FUNC(sub_82F3C938);
PPC_FUNC_IMPL(__imp__sub_82F3C938) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C93C"))) PPC_WEAK_FUNC(sub_82F3C93C);
PPC_FUNC_IMPL(__imp__sub_82F3C93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C940"))) PPC_WEAK_FUNC(sub_82F3C940);
PPC_FUNC_IMPL(__imp__sub_82F3C940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21048
	ctx.r3.s64 = r11.s64 + -21048;
}

__attribute__((alias("__imp__sub_82F3C948"))) PPC_WEAK_FUNC(sub_82F3C948);
PPC_FUNC_IMPL(__imp__sub_82F3C948) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C94C"))) PPC_WEAK_FUNC(sub_82F3C94C);
PPC_FUNC_IMPL(__imp__sub_82F3C94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C950"))) PPC_WEAK_FUNC(sub_82F3C950);
PPC_FUNC_IMPL(__imp__sub_82F3C950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21040
	ctx.r3.s64 = r11.s64 + -21040;
}

__attribute__((alias("__imp__sub_82F3C958"))) PPC_WEAK_FUNC(sub_82F3C958);
PPC_FUNC_IMPL(__imp__sub_82F3C958) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C95C"))) PPC_WEAK_FUNC(sub_82F3C95C);
PPC_FUNC_IMPL(__imp__sub_82F3C95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C960"))) PPC_WEAK_FUNC(sub_82F3C960);
PPC_FUNC_IMPL(__imp__sub_82F3C960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21032
	ctx.r3.s64 = r11.s64 + -21032;
}

__attribute__((alias("__imp__sub_82F3C968"))) PPC_WEAK_FUNC(sub_82F3C968);
PPC_FUNC_IMPL(__imp__sub_82F3C968) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C96C"))) PPC_WEAK_FUNC(sub_82F3C96C);
PPC_FUNC_IMPL(__imp__sub_82F3C96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C970"))) PPC_WEAK_FUNC(sub_82F3C970);
PPC_FUNC_IMPL(__imp__sub_82F3C970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21024
	ctx.r3.s64 = r11.s64 + -21024;
}

__attribute__((alias("__imp__sub_82F3C978"))) PPC_WEAK_FUNC(sub_82F3C978);
PPC_FUNC_IMPL(__imp__sub_82F3C978) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C97C"))) PPC_WEAK_FUNC(sub_82F3C97C);
PPC_FUNC_IMPL(__imp__sub_82F3C97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C980"))) PPC_WEAK_FUNC(sub_82F3C980);
PPC_FUNC_IMPL(__imp__sub_82F3C980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21016
	ctx.r3.s64 = r11.s64 + -21016;
}

__attribute__((alias("__imp__sub_82F3C988"))) PPC_WEAK_FUNC(sub_82F3C988);
PPC_FUNC_IMPL(__imp__sub_82F3C988) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C98C"))) PPC_WEAK_FUNC(sub_82F3C98C);
PPC_FUNC_IMPL(__imp__sub_82F3C98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C990"))) PPC_WEAK_FUNC(sub_82F3C990);
PPC_FUNC_IMPL(__imp__sub_82F3C990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21008
	ctx.r3.s64 = r11.s64 + -21008;
}

__attribute__((alias("__imp__sub_82F3C998"))) PPC_WEAK_FUNC(sub_82F3C998);
PPC_FUNC_IMPL(__imp__sub_82F3C998) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C99C"))) PPC_WEAK_FUNC(sub_82F3C99C);
PPC_FUNC_IMPL(__imp__sub_82F3C99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C9A0"))) PPC_WEAK_FUNC(sub_82F3C9A0);
PPC_FUNC_IMPL(__imp__sub_82F3C9A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21000
	ctx.r3.s64 = r11.s64 + -21000;
}

__attribute__((alias("__imp__sub_82F3C9A8"))) PPC_WEAK_FUNC(sub_82F3C9A8);
PPC_FUNC_IMPL(__imp__sub_82F3C9A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C9AC"))) PPC_WEAK_FUNC(sub_82F3C9AC);
PPC_FUNC_IMPL(__imp__sub_82F3C9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C9B0"))) PPC_WEAK_FUNC(sub_82F3C9B0);
PPC_FUNC_IMPL(__imp__sub_82F3C9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20992
	ctx.r3.s64 = r11.s64 + -20992;
}

__attribute__((alias("__imp__sub_82F3C9B8"))) PPC_WEAK_FUNC(sub_82F3C9B8);
PPC_FUNC_IMPL(__imp__sub_82F3C9B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C9BC"))) PPC_WEAK_FUNC(sub_82F3C9BC);
PPC_FUNC_IMPL(__imp__sub_82F3C9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C9C0"))) PPC_WEAK_FUNC(sub_82F3C9C0);
PPC_FUNC_IMPL(__imp__sub_82F3C9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20984
	ctx.r3.s64 = r11.s64 + -20984;
}

__attribute__((alias("__imp__sub_82F3C9C8"))) PPC_WEAK_FUNC(sub_82F3C9C8);
PPC_FUNC_IMPL(__imp__sub_82F3C9C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C9CC"))) PPC_WEAK_FUNC(sub_82F3C9CC);
PPC_FUNC_IMPL(__imp__sub_82F3C9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C9D0"))) PPC_WEAK_FUNC(sub_82F3C9D0);
PPC_FUNC_IMPL(__imp__sub_82F3C9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20976
	ctx.r3.s64 = r11.s64 + -20976;
}

__attribute__((alias("__imp__sub_82F3C9D8"))) PPC_WEAK_FUNC(sub_82F3C9D8);
PPC_FUNC_IMPL(__imp__sub_82F3C9D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C9DC"))) PPC_WEAK_FUNC(sub_82F3C9DC);
PPC_FUNC_IMPL(__imp__sub_82F3C9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C9E0"))) PPC_WEAK_FUNC(sub_82F3C9E0);
PPC_FUNC_IMPL(__imp__sub_82F3C9E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20968
	ctx.r3.s64 = r11.s64 + -20968;
}

__attribute__((alias("__imp__sub_82F3C9E8"))) PPC_WEAK_FUNC(sub_82F3C9E8);
PPC_FUNC_IMPL(__imp__sub_82F3C9E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C9EC"))) PPC_WEAK_FUNC(sub_82F3C9EC);
PPC_FUNC_IMPL(__imp__sub_82F3C9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3C9F0"))) PPC_WEAK_FUNC(sub_82F3C9F0);
PPC_FUNC_IMPL(__imp__sub_82F3C9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20960
	ctx.r3.s64 = r11.s64 + -20960;
}

__attribute__((alias("__imp__sub_82F3C9F8"))) PPC_WEAK_FUNC(sub_82F3C9F8);
PPC_FUNC_IMPL(__imp__sub_82F3C9F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3C9FC"))) PPC_WEAK_FUNC(sub_82F3C9FC);
PPC_FUNC_IMPL(__imp__sub_82F3C9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CA00"))) PPC_WEAK_FUNC(sub_82F3CA00);
PPC_FUNC_IMPL(__imp__sub_82F3CA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20952
	ctx.r3.s64 = r11.s64 + -20952;
}

__attribute__((alias("__imp__sub_82F3CA08"))) PPC_WEAK_FUNC(sub_82F3CA08);
PPC_FUNC_IMPL(__imp__sub_82F3CA08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CA0C"))) PPC_WEAK_FUNC(sub_82F3CA0C);
PPC_FUNC_IMPL(__imp__sub_82F3CA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CA10"))) PPC_WEAK_FUNC(sub_82F3CA10);
PPC_FUNC_IMPL(__imp__sub_82F3CA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20944
	ctx.r3.s64 = r11.s64 + -20944;
}

__attribute__((alias("__imp__sub_82F3CA18"))) PPC_WEAK_FUNC(sub_82F3CA18);
PPC_FUNC_IMPL(__imp__sub_82F3CA18) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CA1C"))) PPC_WEAK_FUNC(sub_82F3CA1C);
PPC_FUNC_IMPL(__imp__sub_82F3CA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CA20"))) PPC_WEAK_FUNC(sub_82F3CA20);
PPC_FUNC_IMPL(__imp__sub_82F3CA20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20936
	ctx.r3.s64 = r11.s64 + -20936;
}

__attribute__((alias("__imp__sub_82F3CA28"))) PPC_WEAK_FUNC(sub_82F3CA28);
PPC_FUNC_IMPL(__imp__sub_82F3CA28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CA2C"))) PPC_WEAK_FUNC(sub_82F3CA2C);
PPC_FUNC_IMPL(__imp__sub_82F3CA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CA30"))) PPC_WEAK_FUNC(sub_82F3CA30);
PPC_FUNC_IMPL(__imp__sub_82F3CA30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20928
	ctx.r3.s64 = r11.s64 + -20928;
}

__attribute__((alias("__imp__sub_82F3CA38"))) PPC_WEAK_FUNC(sub_82F3CA38);
PPC_FUNC_IMPL(__imp__sub_82F3CA38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CA3C"))) PPC_WEAK_FUNC(sub_82F3CA3C);
PPC_FUNC_IMPL(__imp__sub_82F3CA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CA40"))) PPC_WEAK_FUNC(sub_82F3CA40);
PPC_FUNC_IMPL(__imp__sub_82F3CA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20920
	ctx.r3.s64 = r11.s64 + -20920;
}

__attribute__((alias("__imp__sub_82F3CA48"))) PPC_WEAK_FUNC(sub_82F3CA48);
PPC_FUNC_IMPL(__imp__sub_82F3CA48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CA4C"))) PPC_WEAK_FUNC(sub_82F3CA4C);
PPC_FUNC_IMPL(__imp__sub_82F3CA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CA50"))) PPC_WEAK_FUNC(sub_82F3CA50);
PPC_FUNC_IMPL(__imp__sub_82F3CA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20912
	ctx.r3.s64 = r11.s64 + -20912;
}

__attribute__((alias("__imp__sub_82F3CA58"))) PPC_WEAK_FUNC(sub_82F3CA58);
PPC_FUNC_IMPL(__imp__sub_82F3CA58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CA5C"))) PPC_WEAK_FUNC(sub_82F3CA5C);
PPC_FUNC_IMPL(__imp__sub_82F3CA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CA60"))) PPC_WEAK_FUNC(sub_82F3CA60);
PPC_FUNC_IMPL(__imp__sub_82F3CA60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20904
	ctx.r3.s64 = r11.s64 + -20904;
}

__attribute__((alias("__imp__sub_82F3CA68"))) PPC_WEAK_FUNC(sub_82F3CA68);
PPC_FUNC_IMPL(__imp__sub_82F3CA68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CA6C"))) PPC_WEAK_FUNC(sub_82F3CA6C);
PPC_FUNC_IMPL(__imp__sub_82F3CA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CA70"))) PPC_WEAK_FUNC(sub_82F3CA70);
PPC_FUNC_IMPL(__imp__sub_82F3CA70) {
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
	// stw r11,-24580(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24580, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3CA98"))) PPC_WEAK_FUNC(sub_82F3CA98);
PPC_FUNC_IMPL(__imp__sub_82F3CA98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3CA9C"))) PPC_WEAK_FUNC(sub_82F3CA9C);
PPC_FUNC_IMPL(__imp__sub_82F3CA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CAA0"))) PPC_WEAK_FUNC(sub_82F3CAA0);
PPC_FUNC_IMPL(__imp__sub_82F3CAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20896
	ctx.r3.s64 = r11.s64 + -20896;
}

__attribute__((alias("__imp__sub_82F3CAA8"))) PPC_WEAK_FUNC(sub_82F3CAA8);
PPC_FUNC_IMPL(__imp__sub_82F3CAA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CAAC"))) PPC_WEAK_FUNC(sub_82F3CAAC);
PPC_FUNC_IMPL(__imp__sub_82F3CAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CAB0"))) PPC_WEAK_FUNC(sub_82F3CAB0);
PPC_FUNC_IMPL(__imp__sub_82F3CAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20888
	ctx.r3.s64 = r11.s64 + -20888;
}

__attribute__((alias("__imp__sub_82F3CAB8"))) PPC_WEAK_FUNC(sub_82F3CAB8);
PPC_FUNC_IMPL(__imp__sub_82F3CAB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CABC"))) PPC_WEAK_FUNC(sub_82F3CABC);
PPC_FUNC_IMPL(__imp__sub_82F3CABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CAC0"))) PPC_WEAK_FUNC(sub_82F3CAC0);
PPC_FUNC_IMPL(__imp__sub_82F3CAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20880
	ctx.r3.s64 = r11.s64 + -20880;
}

__attribute__((alias("__imp__sub_82F3CAC8"))) PPC_WEAK_FUNC(sub_82F3CAC8);
PPC_FUNC_IMPL(__imp__sub_82F3CAC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CACC"))) PPC_WEAK_FUNC(sub_82F3CACC);
PPC_FUNC_IMPL(__imp__sub_82F3CACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CAD0"))) PPC_WEAK_FUNC(sub_82F3CAD0);
PPC_FUNC_IMPL(__imp__sub_82F3CAD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20872
	ctx.r3.s64 = r11.s64 + -20872;
}

__attribute__((alias("__imp__sub_82F3CAD8"))) PPC_WEAK_FUNC(sub_82F3CAD8);
PPC_FUNC_IMPL(__imp__sub_82F3CAD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CADC"))) PPC_WEAK_FUNC(sub_82F3CADC);
PPC_FUNC_IMPL(__imp__sub_82F3CADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CAE0"))) PPC_WEAK_FUNC(sub_82F3CAE0);
PPC_FUNC_IMPL(__imp__sub_82F3CAE0) {
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
	// stw r11,-24560(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24560, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3CB08"))) PPC_WEAK_FUNC(sub_82F3CB08);
PPC_FUNC_IMPL(__imp__sub_82F3CB08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3CB0C"))) PPC_WEAK_FUNC(sub_82F3CB0C);
PPC_FUNC_IMPL(__imp__sub_82F3CB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CB10"))) PPC_WEAK_FUNC(sub_82F3CB10);
PPC_FUNC_IMPL(__imp__sub_82F3CB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20864
	ctx.r3.s64 = r11.s64 + -20864;
}

__attribute__((alias("__imp__sub_82F3CB18"))) PPC_WEAK_FUNC(sub_82F3CB18);
PPC_FUNC_IMPL(__imp__sub_82F3CB18) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CB1C"))) PPC_WEAK_FUNC(sub_82F3CB1C);
PPC_FUNC_IMPL(__imp__sub_82F3CB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CB20"))) PPC_WEAK_FUNC(sub_82F3CB20);
PPC_FUNC_IMPL(__imp__sub_82F3CB20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20856
	ctx.r3.s64 = r11.s64 + -20856;
}

__attribute__((alias("__imp__sub_82F3CB28"))) PPC_WEAK_FUNC(sub_82F3CB28);
PPC_FUNC_IMPL(__imp__sub_82F3CB28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CB2C"))) PPC_WEAK_FUNC(sub_82F3CB2C);
PPC_FUNC_IMPL(__imp__sub_82F3CB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CB30"))) PPC_WEAK_FUNC(sub_82F3CB30);
PPC_FUNC_IMPL(__imp__sub_82F3CB30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20848
	ctx.r3.s64 = r11.s64 + -20848;
}

__attribute__((alias("__imp__sub_82F3CB38"))) PPC_WEAK_FUNC(sub_82F3CB38);
PPC_FUNC_IMPL(__imp__sub_82F3CB38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CB3C"))) PPC_WEAK_FUNC(sub_82F3CB3C);
PPC_FUNC_IMPL(__imp__sub_82F3CB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CB40"))) PPC_WEAK_FUNC(sub_82F3CB40);
PPC_FUNC_IMPL(__imp__sub_82F3CB40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20840
	ctx.r3.s64 = r11.s64 + -20840;
}

__attribute__((alias("__imp__sub_82F3CB48"))) PPC_WEAK_FUNC(sub_82F3CB48);
PPC_FUNC_IMPL(__imp__sub_82F3CB48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CB4C"))) PPC_WEAK_FUNC(sub_82F3CB4C);
PPC_FUNC_IMPL(__imp__sub_82F3CB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CB50"))) PPC_WEAK_FUNC(sub_82F3CB50);
PPC_FUNC_IMPL(__imp__sub_82F3CB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20832
	ctx.r3.s64 = r11.s64 + -20832;
}

__attribute__((alias("__imp__sub_82F3CB58"))) PPC_WEAK_FUNC(sub_82F3CB58);
PPC_FUNC_IMPL(__imp__sub_82F3CB58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CB5C"))) PPC_WEAK_FUNC(sub_82F3CB5C);
PPC_FUNC_IMPL(__imp__sub_82F3CB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CB60"))) PPC_WEAK_FUNC(sub_82F3CB60);
PPC_FUNC_IMPL(__imp__sub_82F3CB60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20824
	ctx.r3.s64 = r11.s64 + -20824;
}

__attribute__((alias("__imp__sub_82F3CB68"))) PPC_WEAK_FUNC(sub_82F3CB68);
PPC_FUNC_IMPL(__imp__sub_82F3CB68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CB6C"))) PPC_WEAK_FUNC(sub_82F3CB6C);
PPC_FUNC_IMPL(__imp__sub_82F3CB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CB70"))) PPC_WEAK_FUNC(sub_82F3CB70);
PPC_FUNC_IMPL(__imp__sub_82F3CB70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20816
	ctx.r3.s64 = r11.s64 + -20816;
}

__attribute__((alias("__imp__sub_82F3CB78"))) PPC_WEAK_FUNC(sub_82F3CB78);
PPC_FUNC_IMPL(__imp__sub_82F3CB78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CB7C"))) PPC_WEAK_FUNC(sub_82F3CB7C);
PPC_FUNC_IMPL(__imp__sub_82F3CB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CB80"))) PPC_WEAK_FUNC(sub_82F3CB80);
PPC_FUNC_IMPL(__imp__sub_82F3CB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20808
	ctx.r3.s64 = r11.s64 + -20808;
}

__attribute__((alias("__imp__sub_82F3CB88"))) PPC_WEAK_FUNC(sub_82F3CB88);
PPC_FUNC_IMPL(__imp__sub_82F3CB88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CB8C"))) PPC_WEAK_FUNC(sub_82F3CB8C);
PPC_FUNC_IMPL(__imp__sub_82F3CB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CB90"))) PPC_WEAK_FUNC(sub_82F3CB90);
PPC_FUNC_IMPL(__imp__sub_82F3CB90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20800
	ctx.r3.s64 = r11.s64 + -20800;
}

__attribute__((alias("__imp__sub_82F3CB98"))) PPC_WEAK_FUNC(sub_82F3CB98);
PPC_FUNC_IMPL(__imp__sub_82F3CB98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CB9C"))) PPC_WEAK_FUNC(sub_82F3CB9C);
PPC_FUNC_IMPL(__imp__sub_82F3CB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CBA0"))) PPC_WEAK_FUNC(sub_82F3CBA0);
PPC_FUNC_IMPL(__imp__sub_82F3CBA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20792
	ctx.r3.s64 = r11.s64 + -20792;
}

__attribute__((alias("__imp__sub_82F3CBA8"))) PPC_WEAK_FUNC(sub_82F3CBA8);
PPC_FUNC_IMPL(__imp__sub_82F3CBA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CBAC"))) PPC_WEAK_FUNC(sub_82F3CBAC);
PPC_FUNC_IMPL(__imp__sub_82F3CBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CBB0"))) PPC_WEAK_FUNC(sub_82F3CBB0);
PPC_FUNC_IMPL(__imp__sub_82F3CBB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20784
	ctx.r3.s64 = r11.s64 + -20784;
}

__attribute__((alias("__imp__sub_82F3CBB8"))) PPC_WEAK_FUNC(sub_82F3CBB8);
PPC_FUNC_IMPL(__imp__sub_82F3CBB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CBBC"))) PPC_WEAK_FUNC(sub_82F3CBBC);
PPC_FUNC_IMPL(__imp__sub_82F3CBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CBC0"))) PPC_WEAK_FUNC(sub_82F3CBC0);
PPC_FUNC_IMPL(__imp__sub_82F3CBC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20776
	ctx.r3.s64 = r11.s64 + -20776;
}

__attribute__((alias("__imp__sub_82F3CBC8"))) PPC_WEAK_FUNC(sub_82F3CBC8);
PPC_FUNC_IMPL(__imp__sub_82F3CBC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CBCC"))) PPC_WEAK_FUNC(sub_82F3CBCC);
PPC_FUNC_IMPL(__imp__sub_82F3CBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CBD0"))) PPC_WEAK_FUNC(sub_82F3CBD0);
PPC_FUNC_IMPL(__imp__sub_82F3CBD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20768
	ctx.r3.s64 = r11.s64 + -20768;
}

__attribute__((alias("__imp__sub_82F3CBD8"))) PPC_WEAK_FUNC(sub_82F3CBD8);
PPC_FUNC_IMPL(__imp__sub_82F3CBD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CBDC"))) PPC_WEAK_FUNC(sub_82F3CBDC);
PPC_FUNC_IMPL(__imp__sub_82F3CBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CBE0"))) PPC_WEAK_FUNC(sub_82F3CBE0);
PPC_FUNC_IMPL(__imp__sub_82F3CBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20760
	ctx.r3.s64 = r11.s64 + -20760;
}

__attribute__((alias("__imp__sub_82F3CBE8"))) PPC_WEAK_FUNC(sub_82F3CBE8);
PPC_FUNC_IMPL(__imp__sub_82F3CBE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CBEC"))) PPC_WEAK_FUNC(sub_82F3CBEC);
PPC_FUNC_IMPL(__imp__sub_82F3CBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CBF0"))) PPC_WEAK_FUNC(sub_82F3CBF0);
PPC_FUNC_IMPL(__imp__sub_82F3CBF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20752
	ctx.r3.s64 = r11.s64 + -20752;
}

__attribute__((alias("__imp__sub_82F3CBF8"))) PPC_WEAK_FUNC(sub_82F3CBF8);
PPC_FUNC_IMPL(__imp__sub_82F3CBF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3CBFC"))) PPC_WEAK_FUNC(sub_82F3CBFC);
PPC_FUNC_IMPL(__imp__sub_82F3CBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3CC00"))) PPC_WEAK_FUNC(sub_82F3CC00);
PPC_FUNC_IMPL(__imp__sub_82F3CC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20744
	ctx.r3.s64 = r11.s64 + -20744;
}

