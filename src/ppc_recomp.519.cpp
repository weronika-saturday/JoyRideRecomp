#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F3A3E0"))) PPC_WEAK_FUNC(sub_82F3A3E0);
PPC_FUNC_IMPL(__imp__sub_82F3A3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22776
	ctx.r3.s64 = r11.s64 + -22776;
}

__attribute__((alias("__imp__sub_82F3A3E8"))) PPC_WEAK_FUNC(sub_82F3A3E8);
PPC_FUNC_IMPL(__imp__sub_82F3A3E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A3EC"))) PPC_WEAK_FUNC(sub_82F3A3EC);
PPC_FUNC_IMPL(__imp__sub_82F3A3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A3F0"))) PPC_WEAK_FUNC(sub_82F3A3F0);
PPC_FUNC_IMPL(__imp__sub_82F3A3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22768
	ctx.r3.s64 = r11.s64 + -22768;
}

__attribute__((alias("__imp__sub_82F3A3F8"))) PPC_WEAK_FUNC(sub_82F3A3F8);
PPC_FUNC_IMPL(__imp__sub_82F3A3F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A3FC"))) PPC_WEAK_FUNC(sub_82F3A3FC);
PPC_FUNC_IMPL(__imp__sub_82F3A3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A400"))) PPC_WEAK_FUNC(sub_82F3A400);
PPC_FUNC_IMPL(__imp__sub_82F3A400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22760
	ctx.r3.s64 = r11.s64 + -22760;
}

__attribute__((alias("__imp__sub_82F3A408"))) PPC_WEAK_FUNC(sub_82F3A408);
PPC_FUNC_IMPL(__imp__sub_82F3A408) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A40C"))) PPC_WEAK_FUNC(sub_82F3A40C);
PPC_FUNC_IMPL(__imp__sub_82F3A40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A410"))) PPC_WEAK_FUNC(sub_82F3A410);
PPC_FUNC_IMPL(__imp__sub_82F3A410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22752
	ctx.r3.s64 = r11.s64 + -22752;
}

__attribute__((alias("__imp__sub_82F3A418"))) PPC_WEAK_FUNC(sub_82F3A418);
PPC_FUNC_IMPL(__imp__sub_82F3A418) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A41C"))) PPC_WEAK_FUNC(sub_82F3A41C);
PPC_FUNC_IMPL(__imp__sub_82F3A41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A420"))) PPC_WEAK_FUNC(sub_82F3A420);
PPC_FUNC_IMPL(__imp__sub_82F3A420) {
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
	// addi r3,r10,-27672
	ctx.r3.s64 = ctx.r10.s64 + -27672;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-26396(r9)
	PPC_STORE_U32(ctx.r9.u32 + -26396, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3A458"))) PPC_WEAK_FUNC(sub_82F3A458);
PPC_FUNC_IMPL(__imp__sub_82F3A458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A45C"))) PPC_WEAK_FUNC(sub_82F3A45C);
PPC_FUNC_IMPL(__imp__sub_82F3A45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A460"))) PPC_WEAK_FUNC(sub_82F3A460);
PPC_FUNC_IMPL(__imp__sub_82F3A460) {
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
	// addi r3,r10,-27600
	ctx.r3.s64 = ctx.r10.s64 + -27600;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-26400(r9)
	PPC_STORE_U32(ctx.r9.u32 + -26400, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3A498"))) PPC_WEAK_FUNC(sub_82F3A498);
PPC_FUNC_IMPL(__imp__sub_82F3A498) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A49C"))) PPC_WEAK_FUNC(sub_82F3A49C);
PPC_FUNC_IMPL(__imp__sub_82F3A49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A4A0"))) PPC_WEAK_FUNC(sub_82F3A4A0);
PPC_FUNC_IMPL(__imp__sub_82F3A4A0) {
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
	// addi r3,r10,-27520
	ctx.r3.s64 = ctx.r10.s64 + -27520;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-26404(r9)
	PPC_STORE_U32(ctx.r9.u32 + -26404, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3A4D8"))) PPC_WEAK_FUNC(sub_82F3A4D8);
PPC_FUNC_IMPL(__imp__sub_82F3A4D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A4DC"))) PPC_WEAK_FUNC(sub_82F3A4DC);
PPC_FUNC_IMPL(__imp__sub_82F3A4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A4E0"))) PPC_WEAK_FUNC(sub_82F3A4E0);
PPC_FUNC_IMPL(__imp__sub_82F3A4E0) {
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
	// addi r3,r10,-27440
	ctx.r3.s64 = ctx.r10.s64 + -27440;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-26408(r9)
	PPC_STORE_U32(ctx.r9.u32 + -26408, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3A518"))) PPC_WEAK_FUNC(sub_82F3A518);
PPC_FUNC_IMPL(__imp__sub_82F3A518) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A51C"))) PPC_WEAK_FUNC(sub_82F3A51C);
PPC_FUNC_IMPL(__imp__sub_82F3A51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A520"))) PPC_WEAK_FUNC(sub_82F3A520);
PPC_FUNC_IMPL(__imp__sub_82F3A520) {
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
	// addi r3,r10,-27360
	ctx.r3.s64 = ctx.r10.s64 + -27360;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-26412(r9)
	PPC_STORE_U32(ctx.r9.u32 + -26412, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3A558"))) PPC_WEAK_FUNC(sub_82F3A558);
PPC_FUNC_IMPL(__imp__sub_82F3A558) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A55C"))) PPC_WEAK_FUNC(sub_82F3A55C);
PPC_FUNC_IMPL(__imp__sub_82F3A55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A560"))) PPC_WEAK_FUNC(sub_82F3A560);
PPC_FUNC_IMPL(__imp__sub_82F3A560) {
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
	// addi r3,r10,-27280
	ctx.r3.s64 = ctx.r10.s64 + -27280;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-26416(r9)
	PPC_STORE_U32(ctx.r9.u32 + -26416, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3A598"))) PPC_WEAK_FUNC(sub_82F3A598);
PPC_FUNC_IMPL(__imp__sub_82F3A598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A59C"))) PPC_WEAK_FUNC(sub_82F3A59C);
PPC_FUNC_IMPL(__imp__sub_82F3A59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A5A0"))) PPC_WEAK_FUNC(sub_82F3A5A0);
PPC_FUNC_IMPL(__imp__sub_82F3A5A0) {
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
	// addi r3,r10,-27200
	ctx.r3.s64 = ctx.r10.s64 + -27200;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-26420(r9)
	PPC_STORE_U32(ctx.r9.u32 + -26420, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3A5D8"))) PPC_WEAK_FUNC(sub_82F3A5D8);
PPC_FUNC_IMPL(__imp__sub_82F3A5D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A5DC"))) PPC_WEAK_FUNC(sub_82F3A5DC);
PPC_FUNC_IMPL(__imp__sub_82F3A5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A5E0"))) PPC_WEAK_FUNC(sub_82F3A5E0);
PPC_FUNC_IMPL(__imp__sub_82F3A5E0) {
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
	// addi r3,r10,-27120
	ctx.r3.s64 = ctx.r10.s64 + -27120;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-26424(r9)
	PPC_STORE_U32(ctx.r9.u32 + -26424, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3A618"))) PPC_WEAK_FUNC(sub_82F3A618);
PPC_FUNC_IMPL(__imp__sub_82F3A618) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A61C"))) PPC_WEAK_FUNC(sub_82F3A61C);
PPC_FUNC_IMPL(__imp__sub_82F3A61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A620"))) PPC_WEAK_FUNC(sub_82F3A620);
PPC_FUNC_IMPL(__imp__sub_82F3A620) {
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
	// addi r3,r10,-27040
	ctx.r3.s64 = ctx.r10.s64 + -27040;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-26428(r9)
	PPC_STORE_U32(ctx.r9.u32 + -26428, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3A658"))) PPC_WEAK_FUNC(sub_82F3A658);
PPC_FUNC_IMPL(__imp__sub_82F3A658) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A65C"))) PPC_WEAK_FUNC(sub_82F3A65C);
PPC_FUNC_IMPL(__imp__sub_82F3A65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A660"))) PPC_WEAK_FUNC(sub_82F3A660);
PPC_FUNC_IMPL(__imp__sub_82F3A660) {
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
	// addi r3,r10,-26952
	ctx.r3.s64 = ctx.r10.s64 + -26952;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-26432(r9)
	PPC_STORE_U32(ctx.r9.u32 + -26432, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3A698"))) PPC_WEAK_FUNC(sub_82F3A698);
PPC_FUNC_IMPL(__imp__sub_82F3A698) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A69C"))) PPC_WEAK_FUNC(sub_82F3A69C);
PPC_FUNC_IMPL(__imp__sub_82F3A69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A6A0"))) PPC_WEAK_FUNC(sub_82F3A6A0);
PPC_FUNC_IMPL(__imp__sub_82F3A6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22744
	ctx.r3.s64 = r11.s64 + -22744;
}

__attribute__((alias("__imp__sub_82F3A6A8"))) PPC_WEAK_FUNC(sub_82F3A6A8);
PPC_FUNC_IMPL(__imp__sub_82F3A6A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A6AC"))) PPC_WEAK_FUNC(sub_82F3A6AC);
PPC_FUNC_IMPL(__imp__sub_82F3A6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A6B0"))) PPC_WEAK_FUNC(sub_82F3A6B0);
PPC_FUNC_IMPL(__imp__sub_82F3A6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22736
	ctx.r3.s64 = r11.s64 + -22736;
}

__attribute__((alias("__imp__sub_82F3A6B8"))) PPC_WEAK_FUNC(sub_82F3A6B8);
PPC_FUNC_IMPL(__imp__sub_82F3A6B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A6BC"))) PPC_WEAK_FUNC(sub_82F3A6BC);
PPC_FUNC_IMPL(__imp__sub_82F3A6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A6C0"))) PPC_WEAK_FUNC(sub_82F3A6C0);
PPC_FUNC_IMPL(__imp__sub_82F3A6C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22728
	ctx.r3.s64 = r11.s64 + -22728;
}

__attribute__((alias("__imp__sub_82F3A6C8"))) PPC_WEAK_FUNC(sub_82F3A6C8);
PPC_FUNC_IMPL(__imp__sub_82F3A6C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A6CC"))) PPC_WEAK_FUNC(sub_82F3A6CC);
PPC_FUNC_IMPL(__imp__sub_82F3A6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A6D0"))) PPC_WEAK_FUNC(sub_82F3A6D0);
PPC_FUNC_IMPL(__imp__sub_82F3A6D0) {
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
	// stw r11,-26376(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26376, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3A6F8"))) PPC_WEAK_FUNC(sub_82F3A6F8);
PPC_FUNC_IMPL(__imp__sub_82F3A6F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A6FC"))) PPC_WEAK_FUNC(sub_82F3A6FC);
PPC_FUNC_IMPL(__imp__sub_82F3A6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A700"))) PPC_WEAK_FUNC(sub_82F3A700);
PPC_FUNC_IMPL(__imp__sub_82F3A700) {
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
	// addi r3,r10,-24300
	ctx.r3.s64 = ctx.r10.s64 + -24300;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-26372(r9)
	PPC_STORE_U32(ctx.r9.u32 + -26372, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3A738"))) PPC_WEAK_FUNC(sub_82F3A738);
PPC_FUNC_IMPL(__imp__sub_82F3A738) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A73C"))) PPC_WEAK_FUNC(sub_82F3A73C);
PPC_FUNC_IMPL(__imp__sub_82F3A73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A740"))) PPC_WEAK_FUNC(sub_82F3A740);
PPC_FUNC_IMPL(__imp__sub_82F3A740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22720
	ctx.r3.s64 = r11.s64 + -22720;
}

__attribute__((alias("__imp__sub_82F3A748"))) PPC_WEAK_FUNC(sub_82F3A748);
PPC_FUNC_IMPL(__imp__sub_82F3A748) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A74C"))) PPC_WEAK_FUNC(sub_82F3A74C);
PPC_FUNC_IMPL(__imp__sub_82F3A74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A750"))) PPC_WEAK_FUNC(sub_82F3A750);
PPC_FUNC_IMPL(__imp__sub_82F3A750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22712
	ctx.r3.s64 = r11.s64 + -22712;
}

__attribute__((alias("__imp__sub_82F3A758"))) PPC_WEAK_FUNC(sub_82F3A758);
PPC_FUNC_IMPL(__imp__sub_82F3A758) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A75C"))) PPC_WEAK_FUNC(sub_82F3A75C);
PPC_FUNC_IMPL(__imp__sub_82F3A75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A760"))) PPC_WEAK_FUNC(sub_82F3A760);
PPC_FUNC_IMPL(__imp__sub_82F3A760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22704
	ctx.r3.s64 = r11.s64 + -22704;
}

__attribute__((alias("__imp__sub_82F3A768"))) PPC_WEAK_FUNC(sub_82F3A768);
PPC_FUNC_IMPL(__imp__sub_82F3A768) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A76C"))) PPC_WEAK_FUNC(sub_82F3A76C);
PPC_FUNC_IMPL(__imp__sub_82F3A76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A770"))) PPC_WEAK_FUNC(sub_82F3A770);
PPC_FUNC_IMPL(__imp__sub_82F3A770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22696
	ctx.r3.s64 = r11.s64 + -22696;
}

__attribute__((alias("__imp__sub_82F3A778"))) PPC_WEAK_FUNC(sub_82F3A778);
PPC_FUNC_IMPL(__imp__sub_82F3A778) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A77C"))) PPC_WEAK_FUNC(sub_82F3A77C);
PPC_FUNC_IMPL(__imp__sub_82F3A77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A780"))) PPC_WEAK_FUNC(sub_82F3A780);
PPC_FUNC_IMPL(__imp__sub_82F3A780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22688
	ctx.r3.s64 = r11.s64 + -22688;
}

__attribute__((alias("__imp__sub_82F3A788"))) PPC_WEAK_FUNC(sub_82F3A788);
PPC_FUNC_IMPL(__imp__sub_82F3A788) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A78C"))) PPC_WEAK_FUNC(sub_82F3A78C);
PPC_FUNC_IMPL(__imp__sub_82F3A78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A790"))) PPC_WEAK_FUNC(sub_82F3A790);
PPC_FUNC_IMPL(__imp__sub_82F3A790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22680
	ctx.r3.s64 = r11.s64 + -22680;
}

__attribute__((alias("__imp__sub_82F3A798"))) PPC_WEAK_FUNC(sub_82F3A798);
PPC_FUNC_IMPL(__imp__sub_82F3A798) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A79C"))) PPC_WEAK_FUNC(sub_82F3A79C);
PPC_FUNC_IMPL(__imp__sub_82F3A79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A7A0"))) PPC_WEAK_FUNC(sub_82F3A7A0);
PPC_FUNC_IMPL(__imp__sub_82F3A7A0) {
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
	// stw r11,-26352(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26352, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3A7C8"))) PPC_WEAK_FUNC(sub_82F3A7C8);
PPC_FUNC_IMPL(__imp__sub_82F3A7C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A7CC"))) PPC_WEAK_FUNC(sub_82F3A7CC);
PPC_FUNC_IMPL(__imp__sub_82F3A7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A7D0"))) PPC_WEAK_FUNC(sub_82F3A7D0);
PPC_FUNC_IMPL(__imp__sub_82F3A7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22672
	ctx.r3.s64 = r11.s64 + -22672;
}

__attribute__((alias("__imp__sub_82F3A7D8"))) PPC_WEAK_FUNC(sub_82F3A7D8);
PPC_FUNC_IMPL(__imp__sub_82F3A7D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A7DC"))) PPC_WEAK_FUNC(sub_82F3A7DC);
PPC_FUNC_IMPL(__imp__sub_82F3A7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A7E0"))) PPC_WEAK_FUNC(sub_82F3A7E0);
PPC_FUNC_IMPL(__imp__sub_82F3A7E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22664
	ctx.r3.s64 = r11.s64 + -22664;
}

__attribute__((alias("__imp__sub_82F3A7E8"))) PPC_WEAK_FUNC(sub_82F3A7E8);
PPC_FUNC_IMPL(__imp__sub_82F3A7E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A7EC"))) PPC_WEAK_FUNC(sub_82F3A7EC);
PPC_FUNC_IMPL(__imp__sub_82F3A7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A7F0"))) PPC_WEAK_FUNC(sub_82F3A7F0);
PPC_FUNC_IMPL(__imp__sub_82F3A7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22656
	ctx.r3.s64 = r11.s64 + -22656;
}

__attribute__((alias("__imp__sub_82F3A7F8"))) PPC_WEAK_FUNC(sub_82F3A7F8);
PPC_FUNC_IMPL(__imp__sub_82F3A7F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A7FC"))) PPC_WEAK_FUNC(sub_82F3A7FC);
PPC_FUNC_IMPL(__imp__sub_82F3A7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A800"))) PPC_WEAK_FUNC(sub_82F3A800);
PPC_FUNC_IMPL(__imp__sub_82F3A800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22648
	ctx.r3.s64 = r11.s64 + -22648;
}

__attribute__((alias("__imp__sub_82F3A808"))) PPC_WEAK_FUNC(sub_82F3A808);
PPC_FUNC_IMPL(__imp__sub_82F3A808) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A80C"))) PPC_WEAK_FUNC(sub_82F3A80C);
PPC_FUNC_IMPL(__imp__sub_82F3A80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A810"))) PPC_WEAK_FUNC(sub_82F3A810);
PPC_FUNC_IMPL(__imp__sub_82F3A810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22640
	ctx.r3.s64 = r11.s64 + -22640;
}

__attribute__((alias("__imp__sub_82F3A818"))) PPC_WEAK_FUNC(sub_82F3A818);
PPC_FUNC_IMPL(__imp__sub_82F3A818) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A81C"))) PPC_WEAK_FUNC(sub_82F3A81C);
PPC_FUNC_IMPL(__imp__sub_82F3A81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A820"))) PPC_WEAK_FUNC(sub_82F3A820);
PPC_FUNC_IMPL(__imp__sub_82F3A820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22632
	ctx.r3.s64 = r11.s64 + -22632;
}

__attribute__((alias("__imp__sub_82F3A828"))) PPC_WEAK_FUNC(sub_82F3A828);
PPC_FUNC_IMPL(__imp__sub_82F3A828) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A82C"))) PPC_WEAK_FUNC(sub_82F3A82C);
PPC_FUNC_IMPL(__imp__sub_82F3A82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A830"))) PPC_WEAK_FUNC(sub_82F3A830);
PPC_FUNC_IMPL(__imp__sub_82F3A830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22600
	ctx.r3.s64 = r11.s64 + -22600;
}

__attribute__((alias("__imp__sub_82F3A838"))) PPC_WEAK_FUNC(sub_82F3A838);
PPC_FUNC_IMPL(__imp__sub_82F3A838) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A83C"))) PPC_WEAK_FUNC(sub_82F3A83C);
PPC_FUNC_IMPL(__imp__sub_82F3A83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A840"))) PPC_WEAK_FUNC(sub_82F3A840);
PPC_FUNC_IMPL(__imp__sub_82F3A840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22592
	ctx.r3.s64 = r11.s64 + -22592;
}

__attribute__((alias("__imp__sub_82F3A848"))) PPC_WEAK_FUNC(sub_82F3A848);
PPC_FUNC_IMPL(__imp__sub_82F3A848) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A84C"))) PPC_WEAK_FUNC(sub_82F3A84C);
PPC_FUNC_IMPL(__imp__sub_82F3A84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A850"))) PPC_WEAK_FUNC(sub_82F3A850);
PPC_FUNC_IMPL(__imp__sub_82F3A850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22584
	ctx.r3.s64 = r11.s64 + -22584;
}

__attribute__((alias("__imp__sub_82F3A858"))) PPC_WEAK_FUNC(sub_82F3A858);
PPC_FUNC_IMPL(__imp__sub_82F3A858) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A85C"))) PPC_WEAK_FUNC(sub_82F3A85C);
PPC_FUNC_IMPL(__imp__sub_82F3A85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A860"))) PPC_WEAK_FUNC(sub_82F3A860);
PPC_FUNC_IMPL(__imp__sub_82F3A860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22576
	ctx.r3.s64 = r11.s64 + -22576;
}

__attribute__((alias("__imp__sub_82F3A868"))) PPC_WEAK_FUNC(sub_82F3A868);
PPC_FUNC_IMPL(__imp__sub_82F3A868) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A86C"))) PPC_WEAK_FUNC(sub_82F3A86C);
PPC_FUNC_IMPL(__imp__sub_82F3A86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A870"))) PPC_WEAK_FUNC(sub_82F3A870);
PPC_FUNC_IMPL(__imp__sub_82F3A870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22568
	ctx.r3.s64 = r11.s64 + -22568;
}

__attribute__((alias("__imp__sub_82F3A878"))) PPC_WEAK_FUNC(sub_82F3A878);
PPC_FUNC_IMPL(__imp__sub_82F3A878) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A87C"))) PPC_WEAK_FUNC(sub_82F3A87C);
PPC_FUNC_IMPL(__imp__sub_82F3A87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A880"))) PPC_WEAK_FUNC(sub_82F3A880);
PPC_FUNC_IMPL(__imp__sub_82F3A880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22560
	ctx.r3.s64 = r11.s64 + -22560;
}

__attribute__((alias("__imp__sub_82F3A888"))) PPC_WEAK_FUNC(sub_82F3A888);
PPC_FUNC_IMPL(__imp__sub_82F3A888) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A88C"))) PPC_WEAK_FUNC(sub_82F3A88C);
PPC_FUNC_IMPL(__imp__sub_82F3A88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A890"))) PPC_WEAK_FUNC(sub_82F3A890);
PPC_FUNC_IMPL(__imp__sub_82F3A890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22552
	ctx.r3.s64 = r11.s64 + -22552;
}

__attribute__((alias("__imp__sub_82F3A898"))) PPC_WEAK_FUNC(sub_82F3A898);
PPC_FUNC_IMPL(__imp__sub_82F3A898) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A89C"))) PPC_WEAK_FUNC(sub_82F3A89C);
PPC_FUNC_IMPL(__imp__sub_82F3A89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A8A0"))) PPC_WEAK_FUNC(sub_82F3A8A0);
PPC_FUNC_IMPL(__imp__sub_82F3A8A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22544
	ctx.r3.s64 = r11.s64 + -22544;
}

__attribute__((alias("__imp__sub_82F3A8A8"))) PPC_WEAK_FUNC(sub_82F3A8A8);
PPC_FUNC_IMPL(__imp__sub_82F3A8A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A8AC"))) PPC_WEAK_FUNC(sub_82F3A8AC);
PPC_FUNC_IMPL(__imp__sub_82F3A8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A8B0"))) PPC_WEAK_FUNC(sub_82F3A8B0);
PPC_FUNC_IMPL(__imp__sub_82F3A8B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22536
	ctx.r3.s64 = r11.s64 + -22536;
}

__attribute__((alias("__imp__sub_82F3A8B8"))) PPC_WEAK_FUNC(sub_82F3A8B8);
PPC_FUNC_IMPL(__imp__sub_82F3A8B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A8BC"))) PPC_WEAK_FUNC(sub_82F3A8BC);
PPC_FUNC_IMPL(__imp__sub_82F3A8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A8C0"))) PPC_WEAK_FUNC(sub_82F3A8C0);
PPC_FUNC_IMPL(__imp__sub_82F3A8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22528
	ctx.r3.s64 = r11.s64 + -22528;
}

__attribute__((alias("__imp__sub_82F3A8C8"))) PPC_WEAK_FUNC(sub_82F3A8C8);
PPC_FUNC_IMPL(__imp__sub_82F3A8C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A8CC"))) PPC_WEAK_FUNC(sub_82F3A8CC);
PPC_FUNC_IMPL(__imp__sub_82F3A8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A8D0"))) PPC_WEAK_FUNC(sub_82F3A8D0);
PPC_FUNC_IMPL(__imp__sub_82F3A8D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22520
	ctx.r3.s64 = r11.s64 + -22520;
}

__attribute__((alias("__imp__sub_82F3A8D8"))) PPC_WEAK_FUNC(sub_82F3A8D8);
PPC_FUNC_IMPL(__imp__sub_82F3A8D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A8DC"))) PPC_WEAK_FUNC(sub_82F3A8DC);
PPC_FUNC_IMPL(__imp__sub_82F3A8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A8E0"))) PPC_WEAK_FUNC(sub_82F3A8E0);
PPC_FUNC_IMPL(__imp__sub_82F3A8E0) {
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
	// stw r11,-26156(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26156, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3A908"))) PPC_WEAK_FUNC(sub_82F3A908);
PPC_FUNC_IMPL(__imp__sub_82F3A908) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A90C"))) PPC_WEAK_FUNC(sub_82F3A90C);
PPC_FUNC_IMPL(__imp__sub_82F3A90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A910"))) PPC_WEAK_FUNC(sub_82F3A910);
PPC_FUNC_IMPL(__imp__sub_82F3A910) {
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
	// addi r3,r11,-30968
	ctx.r3.s64 = r11.s64 + -30968;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-26152(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26152, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3A93C"))) PPC_WEAK_FUNC(sub_82F3A93C);
PPC_FUNC_IMPL(__imp__sub_82F3A93C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A940"))) PPC_WEAK_FUNC(sub_82F3A940);
PPC_FUNC_IMPL(__imp__sub_82F3A940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22512
	ctx.r3.s64 = r11.s64 + -22512;
}

__attribute__((alias("__imp__sub_82F3A948"))) PPC_WEAK_FUNC(sub_82F3A948);
PPC_FUNC_IMPL(__imp__sub_82F3A948) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A94C"))) PPC_WEAK_FUNC(sub_82F3A94C);
PPC_FUNC_IMPL(__imp__sub_82F3A94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A950"))) PPC_WEAK_FUNC(sub_82F3A950);
PPC_FUNC_IMPL(__imp__sub_82F3A950) {
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
	// stw r11,-26132(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26132, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3A978"))) PPC_WEAK_FUNC(sub_82F3A978);
PPC_FUNC_IMPL(__imp__sub_82F3A978) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A97C"))) PPC_WEAK_FUNC(sub_82F3A97C);
PPC_FUNC_IMPL(__imp__sub_82F3A97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A980"))) PPC_WEAK_FUNC(sub_82F3A980);
PPC_FUNC_IMPL(__imp__sub_82F3A980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22504
	ctx.r3.s64 = r11.s64 + -22504;
}

__attribute__((alias("__imp__sub_82F3A988"))) PPC_WEAK_FUNC(sub_82F3A988);
PPC_FUNC_IMPL(__imp__sub_82F3A988) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A98C"))) PPC_WEAK_FUNC(sub_82F3A98C);
PPC_FUNC_IMPL(__imp__sub_82F3A98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A990"))) PPC_WEAK_FUNC(sub_82F3A990);
PPC_FUNC_IMPL(__imp__sub_82F3A990) {
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
	// stw r11,-26112(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26112, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3A9B8"))) PPC_WEAK_FUNC(sub_82F3A9B8);
PPC_FUNC_IMPL(__imp__sub_82F3A9B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A9BC"))) PPC_WEAK_FUNC(sub_82F3A9BC);
PPC_FUNC_IMPL(__imp__sub_82F3A9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A9C0"))) PPC_WEAK_FUNC(sub_82F3A9C0);
PPC_FUNC_IMPL(__imp__sub_82F3A9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22496
	ctx.r3.s64 = r11.s64 + -22496;
}

__attribute__((alias("__imp__sub_82F3A9C8"))) PPC_WEAK_FUNC(sub_82F3A9C8);
PPC_FUNC_IMPL(__imp__sub_82F3A9C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A9CC"))) PPC_WEAK_FUNC(sub_82F3A9CC);
PPC_FUNC_IMPL(__imp__sub_82F3A9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A9D0"))) PPC_WEAK_FUNC(sub_82F3A9D0);
PPC_FUNC_IMPL(__imp__sub_82F3A9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22488
	ctx.r3.s64 = r11.s64 + -22488;
}

__attribute__((alias("__imp__sub_82F3A9D8"))) PPC_WEAK_FUNC(sub_82F3A9D8);
PPC_FUNC_IMPL(__imp__sub_82F3A9D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A9DC"))) PPC_WEAK_FUNC(sub_82F3A9DC);
PPC_FUNC_IMPL(__imp__sub_82F3A9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A9E0"))) PPC_WEAK_FUNC(sub_82F3A9E0);
PPC_FUNC_IMPL(__imp__sub_82F3A9E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22480
	ctx.r3.s64 = r11.s64 + -22480;
}

__attribute__((alias("__imp__sub_82F3A9E8"))) PPC_WEAK_FUNC(sub_82F3A9E8);
PPC_FUNC_IMPL(__imp__sub_82F3A9E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A9EC"))) PPC_WEAK_FUNC(sub_82F3A9EC);
PPC_FUNC_IMPL(__imp__sub_82F3A9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A9F0"))) PPC_WEAK_FUNC(sub_82F3A9F0);
PPC_FUNC_IMPL(__imp__sub_82F3A9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22472
	ctx.r3.s64 = r11.s64 + -22472;
}

__attribute__((alias("__imp__sub_82F3A9F8"))) PPC_WEAK_FUNC(sub_82F3A9F8);
PPC_FUNC_IMPL(__imp__sub_82F3A9F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A9FC"))) PPC_WEAK_FUNC(sub_82F3A9FC);
PPC_FUNC_IMPL(__imp__sub_82F3A9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AA00"))) PPC_WEAK_FUNC(sub_82F3AA00);
PPC_FUNC_IMPL(__imp__sub_82F3AA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22464
	ctx.r3.s64 = r11.s64 + -22464;
}

__attribute__((alias("__imp__sub_82F3AA08"))) PPC_WEAK_FUNC(sub_82F3AA08);
PPC_FUNC_IMPL(__imp__sub_82F3AA08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3AA0C"))) PPC_WEAK_FUNC(sub_82F3AA0C);
PPC_FUNC_IMPL(__imp__sub_82F3AA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AA10"))) PPC_WEAK_FUNC(sub_82F3AA10);
PPC_FUNC_IMPL(__imp__sub_82F3AA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22456
	ctx.r3.s64 = r11.s64 + -22456;
}

__attribute__((alias("__imp__sub_82F3AA18"))) PPC_WEAK_FUNC(sub_82F3AA18);
PPC_FUNC_IMPL(__imp__sub_82F3AA18) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3AA1C"))) PPC_WEAK_FUNC(sub_82F3AA1C);
PPC_FUNC_IMPL(__imp__sub_82F3AA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AA20"))) PPC_WEAK_FUNC(sub_82F3AA20);
PPC_FUNC_IMPL(__imp__sub_82F3AA20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22448
	ctx.r3.s64 = r11.s64 + -22448;
}

__attribute__((alias("__imp__sub_82F3AA28"))) PPC_WEAK_FUNC(sub_82F3AA28);
PPC_FUNC_IMPL(__imp__sub_82F3AA28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3AA2C"))) PPC_WEAK_FUNC(sub_82F3AA2C);
PPC_FUNC_IMPL(__imp__sub_82F3AA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AA30"))) PPC_WEAK_FUNC(sub_82F3AA30);
PPC_FUNC_IMPL(__imp__sub_82F3AA30) {
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
	// stw r11,-26076(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26076, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3AA58"))) PPC_WEAK_FUNC(sub_82F3AA58);
PPC_FUNC_IMPL(__imp__sub_82F3AA58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3AA5C"))) PPC_WEAK_FUNC(sub_82F3AA5C);
PPC_FUNC_IMPL(__imp__sub_82F3AA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AA60"))) PPC_WEAK_FUNC(sub_82F3AA60);
PPC_FUNC_IMPL(__imp__sub_82F3AA60) {
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
	// addi r3,r11,-30968
	ctx.r3.s64 = r11.s64 + -30968;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-26072(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26072, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3AA8C"))) PPC_WEAK_FUNC(sub_82F3AA8C);
PPC_FUNC_IMPL(__imp__sub_82F3AA8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3AA90"))) PPC_WEAK_FUNC(sub_82F3AA90);
PPC_FUNC_IMPL(__imp__sub_82F3AA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22440
	ctx.r3.s64 = r11.s64 + -22440;
}

__attribute__((alias("__imp__sub_82F3AA98"))) PPC_WEAK_FUNC(sub_82F3AA98);
PPC_FUNC_IMPL(__imp__sub_82F3AA98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3AA9C"))) PPC_WEAK_FUNC(sub_82F3AA9C);
PPC_FUNC_IMPL(__imp__sub_82F3AA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AAA0"))) PPC_WEAK_FUNC(sub_82F3AAA0);
PPC_FUNC_IMPL(__imp__sub_82F3AAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22432
	ctx.r3.s64 = r11.s64 + -22432;
}

__attribute__((alias("__imp__sub_82F3AAA8"))) PPC_WEAK_FUNC(sub_82F3AAA8);
PPC_FUNC_IMPL(__imp__sub_82F3AAA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3AAAC"))) PPC_WEAK_FUNC(sub_82F3AAAC);
PPC_FUNC_IMPL(__imp__sub_82F3AAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AAB0"))) PPC_WEAK_FUNC(sub_82F3AAB0);
PPC_FUNC_IMPL(__imp__sub_82F3AAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22424
	ctx.r3.s64 = r11.s64 + -22424;
}

__attribute__((alias("__imp__sub_82F3AAB8"))) PPC_WEAK_FUNC(sub_82F3AAB8);
PPC_FUNC_IMPL(__imp__sub_82F3AAB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3AABC"))) PPC_WEAK_FUNC(sub_82F3AABC);
PPC_FUNC_IMPL(__imp__sub_82F3AABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AAC0"))) PPC_WEAK_FUNC(sub_82F3AAC0);
PPC_FUNC_IMPL(__imp__sub_82F3AAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22416
	ctx.r3.s64 = r11.s64 + -22416;
}

__attribute__((alias("__imp__sub_82F3AAC8"))) PPC_WEAK_FUNC(sub_82F3AAC8);
PPC_FUNC_IMPL(__imp__sub_82F3AAC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3AACC"))) PPC_WEAK_FUNC(sub_82F3AACC);
PPC_FUNC_IMPL(__imp__sub_82F3AACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AAD0"))) PPC_WEAK_FUNC(sub_82F3AAD0);
PPC_FUNC_IMPL(__imp__sub_82F3AAD0) {
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
	// stw r11,-26020(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26020, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3AAF8"))) PPC_WEAK_FUNC(sub_82F3AAF8);
PPC_FUNC_IMPL(__imp__sub_82F3AAF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3AAFC"))) PPC_WEAK_FUNC(sub_82F3AAFC);
PPC_FUNC_IMPL(__imp__sub_82F3AAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AB00"))) PPC_WEAK_FUNC(sub_82F3AB00);
PPC_FUNC_IMPL(__imp__sub_82F3AB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22408
	ctx.r3.s64 = r11.s64 + -22408;
}

__attribute__((alias("__imp__sub_82F3AB08"))) PPC_WEAK_FUNC(sub_82F3AB08);
PPC_FUNC_IMPL(__imp__sub_82F3AB08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3AB0C"))) PPC_WEAK_FUNC(sub_82F3AB0C);
PPC_FUNC_IMPL(__imp__sub_82F3AB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AB10"))) PPC_WEAK_FUNC(sub_82F3AB10);
PPC_FUNC_IMPL(__imp__sub_82F3AB10) {
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
	// stw r11,-26000(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26000, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3AB38"))) PPC_WEAK_FUNC(sub_82F3AB38);
PPC_FUNC_IMPL(__imp__sub_82F3AB38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3AB3C"))) PPC_WEAK_FUNC(sub_82F3AB3C);
PPC_FUNC_IMPL(__imp__sub_82F3AB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AB40"))) PPC_WEAK_FUNC(sub_82F3AB40);
PPC_FUNC_IMPL(__imp__sub_82F3AB40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22400
	ctx.r3.s64 = r11.s64 + -22400;
}

__attribute__((alias("__imp__sub_82F3AB48"))) PPC_WEAK_FUNC(sub_82F3AB48);
PPC_FUNC_IMPL(__imp__sub_82F3AB48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3AB4C"))) PPC_WEAK_FUNC(sub_82F3AB4C);
PPC_FUNC_IMPL(__imp__sub_82F3AB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AB50"))) PPC_WEAK_FUNC(sub_82F3AB50);
PPC_FUNC_IMPL(__imp__sub_82F3AB50) {
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
	// stw r11,-25980(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25980, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3AB78"))) PPC_WEAK_FUNC(sub_82F3AB78);
PPC_FUNC_IMPL(__imp__sub_82F3AB78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3AB7C"))) PPC_WEAK_FUNC(sub_82F3AB7C);
PPC_FUNC_IMPL(__imp__sub_82F3AB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AB80"))) PPC_WEAK_FUNC(sub_82F3AB80);
PPC_FUNC_IMPL(__imp__sub_82F3AB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22392
	ctx.r3.s64 = r11.s64 + -22392;
}

__attribute__((alias("__imp__sub_82F3AB88"))) PPC_WEAK_FUNC(sub_82F3AB88);
PPC_FUNC_IMPL(__imp__sub_82F3AB88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3AB8C"))) PPC_WEAK_FUNC(sub_82F3AB8C);
PPC_FUNC_IMPL(__imp__sub_82F3AB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AB90"))) PPC_WEAK_FUNC(sub_82F3AB90);
PPC_FUNC_IMPL(__imp__sub_82F3AB90) {
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
	// stw r11,-25960(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25960, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3ABB8"))) PPC_WEAK_FUNC(sub_82F3ABB8);
PPC_FUNC_IMPL(__imp__sub_82F3ABB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3ABBC"))) PPC_WEAK_FUNC(sub_82F3ABBC);
PPC_FUNC_IMPL(__imp__sub_82F3ABBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3ABC0"))) PPC_WEAK_FUNC(sub_82F3ABC0);
PPC_FUNC_IMPL(__imp__sub_82F3ABC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22384
	ctx.r3.s64 = r11.s64 + -22384;
}

__attribute__((alias("__imp__sub_82F3ABC8"))) PPC_WEAK_FUNC(sub_82F3ABC8);
PPC_FUNC_IMPL(__imp__sub_82F3ABC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3ABCC"))) PPC_WEAK_FUNC(sub_82F3ABCC);
PPC_FUNC_IMPL(__imp__sub_82F3ABCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3ABD0"))) PPC_WEAK_FUNC(sub_82F3ABD0);
PPC_FUNC_IMPL(__imp__sub_82F3ABD0) {
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
	// stw r11,-25940(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25940, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3ABF8"))) PPC_WEAK_FUNC(sub_82F3ABF8);
PPC_FUNC_IMPL(__imp__sub_82F3ABF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3ABFC"))) PPC_WEAK_FUNC(sub_82F3ABFC);
PPC_FUNC_IMPL(__imp__sub_82F3ABFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AC00"))) PPC_WEAK_FUNC(sub_82F3AC00);
PPC_FUNC_IMPL(__imp__sub_82F3AC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22376
	ctx.r3.s64 = r11.s64 + -22376;
}

__attribute__((alias("__imp__sub_82F3AC08"))) PPC_WEAK_FUNC(sub_82F3AC08);
PPC_FUNC_IMPL(__imp__sub_82F3AC08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3AC0C"))) PPC_WEAK_FUNC(sub_82F3AC0C);
PPC_FUNC_IMPL(__imp__sub_82F3AC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AC10"))) PPC_WEAK_FUNC(sub_82F3AC10);
PPC_FUNC_IMPL(__imp__sub_82F3AC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22368
	ctx.r3.s64 = r11.s64 + -22368;
}

__attribute__((alias("__imp__sub_82F3AC18"))) PPC_WEAK_FUNC(sub_82F3AC18);
PPC_FUNC_IMPL(__imp__sub_82F3AC18) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3AC1C"))) PPC_WEAK_FUNC(sub_82F3AC1C);
PPC_FUNC_IMPL(__imp__sub_82F3AC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AC20"))) PPC_WEAK_FUNC(sub_82F3AC20);
PPC_FUNC_IMPL(__imp__sub_82F3AC20) {
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
	// stw r11,-25920(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25920, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3AC48"))) PPC_WEAK_FUNC(sub_82F3AC48);
PPC_FUNC_IMPL(__imp__sub_82F3AC48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3AC4C"))) PPC_WEAK_FUNC(sub_82F3AC4C);
PPC_FUNC_IMPL(__imp__sub_82F3AC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AC50"))) PPC_WEAK_FUNC(sub_82F3AC50);
PPC_FUNC_IMPL(__imp__sub_82F3AC50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22360
	ctx.r3.s64 = r11.s64 + -22360;
}

__attribute__((alias("__imp__sub_82F3AC58"))) PPC_WEAK_FUNC(sub_82F3AC58);
PPC_FUNC_IMPL(__imp__sub_82F3AC58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3AC5C"))) PPC_WEAK_FUNC(sub_82F3AC5C);
PPC_FUNC_IMPL(__imp__sub_82F3AC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AC60"))) PPC_WEAK_FUNC(sub_82F3AC60);
PPC_FUNC_IMPL(__imp__sub_82F3AC60) {
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
	// stw r11,-25900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25900, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3AC88"))) PPC_WEAK_FUNC(sub_82F3AC88);
PPC_FUNC_IMPL(__imp__sub_82F3AC88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3AC8C"))) PPC_WEAK_FUNC(sub_82F3AC8C);
PPC_FUNC_IMPL(__imp__sub_82F3AC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AC90"))) PPC_WEAK_FUNC(sub_82F3AC90);
PPC_FUNC_IMPL(__imp__sub_82F3AC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22352
	ctx.r3.s64 = r11.s64 + -22352;
}

__attribute__((alias("__imp__sub_82F3AC98"))) PPC_WEAK_FUNC(sub_82F3AC98);
PPC_FUNC_IMPL(__imp__sub_82F3AC98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3AC9C"))) PPC_WEAK_FUNC(sub_82F3AC9C);
PPC_FUNC_IMPL(__imp__sub_82F3AC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3ACA0"))) PPC_WEAK_FUNC(sub_82F3ACA0);
PPC_FUNC_IMPL(__imp__sub_82F3ACA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22344
	ctx.r3.s64 = r11.s64 + -22344;
}

__attribute__((alias("__imp__sub_82F3ACA8"))) PPC_WEAK_FUNC(sub_82F3ACA8);
PPC_FUNC_IMPL(__imp__sub_82F3ACA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3ACAC"))) PPC_WEAK_FUNC(sub_82F3ACAC);
PPC_FUNC_IMPL(__imp__sub_82F3ACAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3ACB0"))) PPC_WEAK_FUNC(sub_82F3ACB0);
PPC_FUNC_IMPL(__imp__sub_82F3ACB0) {
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
	// stw r11,-25864(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25864, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3ACD8"))) PPC_WEAK_FUNC(sub_82F3ACD8);
PPC_FUNC_IMPL(__imp__sub_82F3ACD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3ACDC"))) PPC_WEAK_FUNC(sub_82F3ACDC);
PPC_FUNC_IMPL(__imp__sub_82F3ACDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3ACE0"))) PPC_WEAK_FUNC(sub_82F3ACE0);
PPC_FUNC_IMPL(__imp__sub_82F3ACE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22336
	ctx.r3.s64 = r11.s64 + -22336;
}

__attribute__((alias("__imp__sub_82F3ACE8"))) PPC_WEAK_FUNC(sub_82F3ACE8);
PPC_FUNC_IMPL(__imp__sub_82F3ACE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3ACEC"))) PPC_WEAK_FUNC(sub_82F3ACEC);
PPC_FUNC_IMPL(__imp__sub_82F3ACEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3ACF0"))) PPC_WEAK_FUNC(sub_82F3ACF0);
PPC_FUNC_IMPL(__imp__sub_82F3ACF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22328
	ctx.r3.s64 = r11.s64 + -22328;
}

__attribute__((alias("__imp__sub_82F3ACF8"))) PPC_WEAK_FUNC(sub_82F3ACF8);
PPC_FUNC_IMPL(__imp__sub_82F3ACF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3ACFC"))) PPC_WEAK_FUNC(sub_82F3ACFC);
PPC_FUNC_IMPL(__imp__sub_82F3ACFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AD00"))) PPC_WEAK_FUNC(sub_82F3AD00);
PPC_FUNC_IMPL(__imp__sub_82F3AD00) {
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
	// stw r11,-25828(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25828, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3AD28"))) PPC_WEAK_FUNC(sub_82F3AD28);
PPC_FUNC_IMPL(__imp__sub_82F3AD28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3AD2C"))) PPC_WEAK_FUNC(sub_82F3AD2C);
PPC_FUNC_IMPL(__imp__sub_82F3AD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AD30"))) PPC_WEAK_FUNC(sub_82F3AD30);
PPC_FUNC_IMPL(__imp__sub_82F3AD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22320
	ctx.r3.s64 = r11.s64 + -22320;
}

__attribute__((alias("__imp__sub_82F3AD38"))) PPC_WEAK_FUNC(sub_82F3AD38);
PPC_FUNC_IMPL(__imp__sub_82F3AD38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3AD3C"))) PPC_WEAK_FUNC(sub_82F3AD3C);
PPC_FUNC_IMPL(__imp__sub_82F3AD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AD40"))) PPC_WEAK_FUNC(sub_82F3AD40);
PPC_FUNC_IMPL(__imp__sub_82F3AD40) {
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
	// stw r11,-25808(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25808, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3AD68"))) PPC_WEAK_FUNC(sub_82F3AD68);
PPC_FUNC_IMPL(__imp__sub_82F3AD68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3AD6C"))) PPC_WEAK_FUNC(sub_82F3AD6C);
PPC_FUNC_IMPL(__imp__sub_82F3AD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AD70"))) PPC_WEAK_FUNC(sub_82F3AD70);
PPC_FUNC_IMPL(__imp__sub_82F3AD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22312
	ctx.r3.s64 = r11.s64 + -22312;
}

__attribute__((alias("__imp__sub_82F3AD78"))) PPC_WEAK_FUNC(sub_82F3AD78);
PPC_FUNC_IMPL(__imp__sub_82F3AD78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3AD7C"))) PPC_WEAK_FUNC(sub_82F3AD7C);
PPC_FUNC_IMPL(__imp__sub_82F3AD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AD80"))) PPC_WEAK_FUNC(sub_82F3AD80);
PPC_FUNC_IMPL(__imp__sub_82F3AD80) {
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
	// stw r11,-25788(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25788, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3ADA8"))) PPC_WEAK_FUNC(sub_82F3ADA8);
PPC_FUNC_IMPL(__imp__sub_82F3ADA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3ADAC"))) PPC_WEAK_FUNC(sub_82F3ADAC);
PPC_FUNC_IMPL(__imp__sub_82F3ADAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

