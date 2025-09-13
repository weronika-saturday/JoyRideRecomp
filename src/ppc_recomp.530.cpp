#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F454A0"))) PPC_WEAK_FUNC(sub_82F454A0);
PPC_FUNC_IMPL(__imp__sub_82F454A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18000
	ctx.r3.s64 = r11.s64 + -18000;
}

__attribute__((alias("__imp__sub_82F454A8"))) PPC_WEAK_FUNC(sub_82F454A8);
PPC_FUNC_IMPL(__imp__sub_82F454A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F454AC"))) PPC_WEAK_FUNC(sub_82F454AC);
PPC_FUNC_IMPL(__imp__sub_82F454AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F454B0"))) PPC_WEAK_FUNC(sub_82F454B0);
PPC_FUNC_IMPL(__imp__sub_82F454B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17992
	ctx.r3.s64 = r11.s64 + -17992;
}

__attribute__((alias("__imp__sub_82F454B8"))) PPC_WEAK_FUNC(sub_82F454B8);
PPC_FUNC_IMPL(__imp__sub_82F454B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F454BC"))) PPC_WEAK_FUNC(sub_82F454BC);
PPC_FUNC_IMPL(__imp__sub_82F454BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F454C0"))) PPC_WEAK_FUNC(sub_82F454C0);
PPC_FUNC_IMPL(__imp__sub_82F454C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17984
	ctx.r3.s64 = r11.s64 + -17984;
}

__attribute__((alias("__imp__sub_82F454C8"))) PPC_WEAK_FUNC(sub_82F454C8);
PPC_FUNC_IMPL(__imp__sub_82F454C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F454CC"))) PPC_WEAK_FUNC(sub_82F454CC);
PPC_FUNC_IMPL(__imp__sub_82F454CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F454D0"))) PPC_WEAK_FUNC(sub_82F454D0);
PPC_FUNC_IMPL(__imp__sub_82F454D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17976
	ctx.r3.s64 = r11.s64 + -17976;
}

__attribute__((alias("__imp__sub_82F454D8"))) PPC_WEAK_FUNC(sub_82F454D8);
PPC_FUNC_IMPL(__imp__sub_82F454D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F454DC"))) PPC_WEAK_FUNC(sub_82F454DC);
PPC_FUNC_IMPL(__imp__sub_82F454DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F454E0"))) PPC_WEAK_FUNC(sub_82F454E0);
PPC_FUNC_IMPL(__imp__sub_82F454E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17968
	ctx.r3.s64 = r11.s64 + -17968;
}

__attribute__((alias("__imp__sub_82F454E8"))) PPC_WEAK_FUNC(sub_82F454E8);
PPC_FUNC_IMPL(__imp__sub_82F454E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F454EC"))) PPC_WEAK_FUNC(sub_82F454EC);
PPC_FUNC_IMPL(__imp__sub_82F454EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F454F0"))) PPC_WEAK_FUNC(sub_82F454F0);
PPC_FUNC_IMPL(__imp__sub_82F454F0) {
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
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,13060(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13060, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F45518"))) PPC_WEAK_FUNC(sub_82F45518);
PPC_FUNC_IMPL(__imp__sub_82F45518) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4551C"))) PPC_WEAK_FUNC(sub_82F4551C);
PPC_FUNC_IMPL(__imp__sub_82F4551C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45520"))) PPC_WEAK_FUNC(sub_82F45520);
PPC_FUNC_IMPL(__imp__sub_82F45520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17960
	ctx.r3.s64 = r11.s64 + -17960;
}

__attribute__((alias("__imp__sub_82F45528"))) PPC_WEAK_FUNC(sub_82F45528);
PPC_FUNC_IMPL(__imp__sub_82F45528) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4552C"))) PPC_WEAK_FUNC(sub_82F4552C);
PPC_FUNC_IMPL(__imp__sub_82F4552C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45530"))) PPC_WEAK_FUNC(sub_82F45530);
PPC_FUNC_IMPL(__imp__sub_82F45530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17952
	ctx.r3.s64 = r11.s64 + -17952;
}

__attribute__((alias("__imp__sub_82F45538"))) PPC_WEAK_FUNC(sub_82F45538);
PPC_FUNC_IMPL(__imp__sub_82F45538) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4553C"))) PPC_WEAK_FUNC(sub_82F4553C);
PPC_FUNC_IMPL(__imp__sub_82F4553C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45540"))) PPC_WEAK_FUNC(sub_82F45540);
PPC_FUNC_IMPL(__imp__sub_82F45540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17944
	ctx.r3.s64 = r11.s64 + -17944;
}

__attribute__((alias("__imp__sub_82F45548"))) PPC_WEAK_FUNC(sub_82F45548);
PPC_FUNC_IMPL(__imp__sub_82F45548) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4554C"))) PPC_WEAK_FUNC(sub_82F4554C);
PPC_FUNC_IMPL(__imp__sub_82F4554C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45550"))) PPC_WEAK_FUNC(sub_82F45550);
PPC_FUNC_IMPL(__imp__sub_82F45550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17936
	ctx.r3.s64 = r11.s64 + -17936;
}

__attribute__((alias("__imp__sub_82F45558"))) PPC_WEAK_FUNC(sub_82F45558);
PPC_FUNC_IMPL(__imp__sub_82F45558) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4555C"))) PPC_WEAK_FUNC(sub_82F4555C);
PPC_FUNC_IMPL(__imp__sub_82F4555C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45560"))) PPC_WEAK_FUNC(sub_82F45560);
PPC_FUNC_IMPL(__imp__sub_82F45560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17928
	ctx.r3.s64 = r11.s64 + -17928;
}

__attribute__((alias("__imp__sub_82F45568"))) PPC_WEAK_FUNC(sub_82F45568);
PPC_FUNC_IMPL(__imp__sub_82F45568) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4556C"))) PPC_WEAK_FUNC(sub_82F4556C);
PPC_FUNC_IMPL(__imp__sub_82F4556C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45570"))) PPC_WEAK_FUNC(sub_82F45570);
PPC_FUNC_IMPL(__imp__sub_82F45570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17920
	ctx.r3.s64 = r11.s64 + -17920;
}

__attribute__((alias("__imp__sub_82F45578"))) PPC_WEAK_FUNC(sub_82F45578);
PPC_FUNC_IMPL(__imp__sub_82F45578) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4557C"))) PPC_WEAK_FUNC(sub_82F4557C);
PPC_FUNC_IMPL(__imp__sub_82F4557C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45580"))) PPC_WEAK_FUNC(sub_82F45580);
PPC_FUNC_IMPL(__imp__sub_82F45580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17912
	ctx.r3.s64 = r11.s64 + -17912;
}

__attribute__((alias("__imp__sub_82F45588"))) PPC_WEAK_FUNC(sub_82F45588);
PPC_FUNC_IMPL(__imp__sub_82F45588) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4558C"))) PPC_WEAK_FUNC(sub_82F4558C);
PPC_FUNC_IMPL(__imp__sub_82F4558C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45590"))) PPC_WEAK_FUNC(sub_82F45590);
PPC_FUNC_IMPL(__imp__sub_82F45590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17904
	ctx.r3.s64 = r11.s64 + -17904;
}

__attribute__((alias("__imp__sub_82F45598"))) PPC_WEAK_FUNC(sub_82F45598);
PPC_FUNC_IMPL(__imp__sub_82F45598) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4559C"))) PPC_WEAK_FUNC(sub_82F4559C);
PPC_FUNC_IMPL(__imp__sub_82F4559C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F455A0"))) PPC_WEAK_FUNC(sub_82F455A0);
PPC_FUNC_IMPL(__imp__sub_82F455A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17896
	ctx.r3.s64 = r11.s64 + -17896;
}

__attribute__((alias("__imp__sub_82F455A8"))) PPC_WEAK_FUNC(sub_82F455A8);
PPC_FUNC_IMPL(__imp__sub_82F455A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F455AC"))) PPC_WEAK_FUNC(sub_82F455AC);
PPC_FUNC_IMPL(__imp__sub_82F455AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F455B0"))) PPC_WEAK_FUNC(sub_82F455B0);
PPC_FUNC_IMPL(__imp__sub_82F455B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17888
	ctx.r3.s64 = r11.s64 + -17888;
}

__attribute__((alias("__imp__sub_82F455B8"))) PPC_WEAK_FUNC(sub_82F455B8);
PPC_FUNC_IMPL(__imp__sub_82F455B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F455BC"))) PPC_WEAK_FUNC(sub_82F455BC);
PPC_FUNC_IMPL(__imp__sub_82F455BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F455C0"))) PPC_WEAK_FUNC(sub_82F455C0);
PPC_FUNC_IMPL(__imp__sub_82F455C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17880
	ctx.r3.s64 = r11.s64 + -17880;
}

__attribute__((alias("__imp__sub_82F455C8"))) PPC_WEAK_FUNC(sub_82F455C8);
PPC_FUNC_IMPL(__imp__sub_82F455C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F455CC"))) PPC_WEAK_FUNC(sub_82F455CC);
PPC_FUNC_IMPL(__imp__sub_82F455CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F455D0"))) PPC_WEAK_FUNC(sub_82F455D0);
PPC_FUNC_IMPL(__imp__sub_82F455D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17872
	ctx.r3.s64 = r11.s64 + -17872;
}

__attribute__((alias("__imp__sub_82F455D8"))) PPC_WEAK_FUNC(sub_82F455D8);
PPC_FUNC_IMPL(__imp__sub_82F455D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F455DC"))) PPC_WEAK_FUNC(sub_82F455DC);
PPC_FUNC_IMPL(__imp__sub_82F455DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F455E0"))) PPC_WEAK_FUNC(sub_82F455E0);
PPC_FUNC_IMPL(__imp__sub_82F455E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17864
	ctx.r3.s64 = r11.s64 + -17864;
}

__attribute__((alias("__imp__sub_82F455E8"))) PPC_WEAK_FUNC(sub_82F455E8);
PPC_FUNC_IMPL(__imp__sub_82F455E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F455EC"))) PPC_WEAK_FUNC(sub_82F455EC);
PPC_FUNC_IMPL(__imp__sub_82F455EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F455F0"))) PPC_WEAK_FUNC(sub_82F455F0);
PPC_FUNC_IMPL(__imp__sub_82F455F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17856
	ctx.r3.s64 = r11.s64 + -17856;
}

__attribute__((alias("__imp__sub_82F455F8"))) PPC_WEAK_FUNC(sub_82F455F8);
PPC_FUNC_IMPL(__imp__sub_82F455F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F455FC"))) PPC_WEAK_FUNC(sub_82F455FC);
PPC_FUNC_IMPL(__imp__sub_82F455FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45600"))) PPC_WEAK_FUNC(sub_82F45600);
PPC_FUNC_IMPL(__imp__sub_82F45600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17848
	ctx.r3.s64 = r11.s64 + -17848;
}

__attribute__((alias("__imp__sub_82F45608"))) PPC_WEAK_FUNC(sub_82F45608);
PPC_FUNC_IMPL(__imp__sub_82F45608) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4560C"))) PPC_WEAK_FUNC(sub_82F4560C);
PPC_FUNC_IMPL(__imp__sub_82F4560C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45610"))) PPC_WEAK_FUNC(sub_82F45610);
PPC_FUNC_IMPL(__imp__sub_82F45610) {
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
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,13100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13100, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F45638"))) PPC_WEAK_FUNC(sub_82F45638);
PPC_FUNC_IMPL(__imp__sub_82F45638) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4563C"))) PPC_WEAK_FUNC(sub_82F4563C);
PPC_FUNC_IMPL(__imp__sub_82F4563C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45640"))) PPC_WEAK_FUNC(sub_82F45640);
PPC_FUNC_IMPL(__imp__sub_82F45640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17840
	ctx.r3.s64 = r11.s64 + -17840;
}

__attribute__((alias("__imp__sub_82F45648"))) PPC_WEAK_FUNC(sub_82F45648);
PPC_FUNC_IMPL(__imp__sub_82F45648) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4564C"))) PPC_WEAK_FUNC(sub_82F4564C);
PPC_FUNC_IMPL(__imp__sub_82F4564C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45650"))) PPC_WEAK_FUNC(sub_82F45650);
PPC_FUNC_IMPL(__imp__sub_82F45650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17832
	ctx.r3.s64 = r11.s64 + -17832;
}

__attribute__((alias("__imp__sub_82F45658"))) PPC_WEAK_FUNC(sub_82F45658);
PPC_FUNC_IMPL(__imp__sub_82F45658) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4565C"))) PPC_WEAK_FUNC(sub_82F4565C);
PPC_FUNC_IMPL(__imp__sub_82F4565C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45660"))) PPC_WEAK_FUNC(sub_82F45660);
PPC_FUNC_IMPL(__imp__sub_82F45660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17824
	ctx.r3.s64 = r11.s64 + -17824;
}

__attribute__((alias("__imp__sub_82F45668"))) PPC_WEAK_FUNC(sub_82F45668);
PPC_FUNC_IMPL(__imp__sub_82F45668) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4566C"))) PPC_WEAK_FUNC(sub_82F4566C);
PPC_FUNC_IMPL(__imp__sub_82F4566C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45670"))) PPC_WEAK_FUNC(sub_82F45670);
PPC_FUNC_IMPL(__imp__sub_82F45670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17816
	ctx.r3.s64 = r11.s64 + -17816;
}

__attribute__((alias("__imp__sub_82F45678"))) PPC_WEAK_FUNC(sub_82F45678);
PPC_FUNC_IMPL(__imp__sub_82F45678) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4567C"))) PPC_WEAK_FUNC(sub_82F4567C);
PPC_FUNC_IMPL(__imp__sub_82F4567C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45680"))) PPC_WEAK_FUNC(sub_82F45680);
PPC_FUNC_IMPL(__imp__sub_82F45680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17808
	ctx.r3.s64 = r11.s64 + -17808;
}

__attribute__((alias("__imp__sub_82F45688"))) PPC_WEAK_FUNC(sub_82F45688);
PPC_FUNC_IMPL(__imp__sub_82F45688) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4568C"))) PPC_WEAK_FUNC(sub_82F4568C);
PPC_FUNC_IMPL(__imp__sub_82F4568C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45690"))) PPC_WEAK_FUNC(sub_82F45690);
PPC_FUNC_IMPL(__imp__sub_82F45690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17800
	ctx.r3.s64 = r11.s64 + -17800;
}

__attribute__((alias("__imp__sub_82F45698"))) PPC_WEAK_FUNC(sub_82F45698);
PPC_FUNC_IMPL(__imp__sub_82F45698) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4569C"))) PPC_WEAK_FUNC(sub_82F4569C);
PPC_FUNC_IMPL(__imp__sub_82F4569C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F456A0"))) PPC_WEAK_FUNC(sub_82F456A0);
PPC_FUNC_IMPL(__imp__sub_82F456A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17792
	ctx.r3.s64 = r11.s64 + -17792;
}

__attribute__((alias("__imp__sub_82F456A8"))) PPC_WEAK_FUNC(sub_82F456A8);
PPC_FUNC_IMPL(__imp__sub_82F456A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F456AC"))) PPC_WEAK_FUNC(sub_82F456AC);
PPC_FUNC_IMPL(__imp__sub_82F456AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F456B0"))) PPC_WEAK_FUNC(sub_82F456B0);
PPC_FUNC_IMPL(__imp__sub_82F456B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17784
	ctx.r3.s64 = r11.s64 + -17784;
}

__attribute__((alias("__imp__sub_82F456B8"))) PPC_WEAK_FUNC(sub_82F456B8);
PPC_FUNC_IMPL(__imp__sub_82F456B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F456BC"))) PPC_WEAK_FUNC(sub_82F456BC);
PPC_FUNC_IMPL(__imp__sub_82F456BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F456C0"))) PPC_WEAK_FUNC(sub_82F456C0);
PPC_FUNC_IMPL(__imp__sub_82F456C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17776
	ctx.r3.s64 = r11.s64 + -17776;
}

__attribute__((alias("__imp__sub_82F456C8"))) PPC_WEAK_FUNC(sub_82F456C8);
PPC_FUNC_IMPL(__imp__sub_82F456C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F456CC"))) PPC_WEAK_FUNC(sub_82F456CC);
PPC_FUNC_IMPL(__imp__sub_82F456CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F456D0"))) PPC_WEAK_FUNC(sub_82F456D0);
PPC_FUNC_IMPL(__imp__sub_82F456D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17768
	ctx.r3.s64 = r11.s64 + -17768;
}

__attribute__((alias("__imp__sub_82F456D8"))) PPC_WEAK_FUNC(sub_82F456D8);
PPC_FUNC_IMPL(__imp__sub_82F456D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F456DC"))) PPC_WEAK_FUNC(sub_82F456DC);
PPC_FUNC_IMPL(__imp__sub_82F456DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F456E0"))) PPC_WEAK_FUNC(sub_82F456E0);
PPC_FUNC_IMPL(__imp__sub_82F456E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17760
	ctx.r3.s64 = r11.s64 + -17760;
}

__attribute__((alias("__imp__sub_82F456E8"))) PPC_WEAK_FUNC(sub_82F456E8);
PPC_FUNC_IMPL(__imp__sub_82F456E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F456EC"))) PPC_WEAK_FUNC(sub_82F456EC);
PPC_FUNC_IMPL(__imp__sub_82F456EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F456F0"))) PPC_WEAK_FUNC(sub_82F456F0);
PPC_FUNC_IMPL(__imp__sub_82F456F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17752
	ctx.r3.s64 = r11.s64 + -17752;
}

__attribute__((alias("__imp__sub_82F456F8"))) PPC_WEAK_FUNC(sub_82F456F8);
PPC_FUNC_IMPL(__imp__sub_82F456F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F456FC"))) PPC_WEAK_FUNC(sub_82F456FC);
PPC_FUNC_IMPL(__imp__sub_82F456FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45700"))) PPC_WEAK_FUNC(sub_82F45700);
PPC_FUNC_IMPL(__imp__sub_82F45700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17744
	ctx.r3.s64 = r11.s64 + -17744;
}

__attribute__((alias("__imp__sub_82F45708"))) PPC_WEAK_FUNC(sub_82F45708);
PPC_FUNC_IMPL(__imp__sub_82F45708) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4570C"))) PPC_WEAK_FUNC(sub_82F4570C);
PPC_FUNC_IMPL(__imp__sub_82F4570C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45710"))) PPC_WEAK_FUNC(sub_82F45710);
PPC_FUNC_IMPL(__imp__sub_82F45710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17736
	ctx.r3.s64 = r11.s64 + -17736;
}

__attribute__((alias("__imp__sub_82F45718"))) PPC_WEAK_FUNC(sub_82F45718);
PPC_FUNC_IMPL(__imp__sub_82F45718) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4571C"))) PPC_WEAK_FUNC(sub_82F4571C);
PPC_FUNC_IMPL(__imp__sub_82F4571C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45720"))) PPC_WEAK_FUNC(sub_82F45720);
PPC_FUNC_IMPL(__imp__sub_82F45720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17728
	ctx.r3.s64 = r11.s64 + -17728;
}

__attribute__((alias("__imp__sub_82F45728"))) PPC_WEAK_FUNC(sub_82F45728);
PPC_FUNC_IMPL(__imp__sub_82F45728) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4572C"))) PPC_WEAK_FUNC(sub_82F4572C);
PPC_FUNC_IMPL(__imp__sub_82F4572C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45730"))) PPC_WEAK_FUNC(sub_82F45730);
PPC_FUNC_IMPL(__imp__sub_82F45730) {
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
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,13136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13136, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F45758"))) PPC_WEAK_FUNC(sub_82F45758);
PPC_FUNC_IMPL(__imp__sub_82F45758) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4575C"))) PPC_WEAK_FUNC(sub_82F4575C);
PPC_FUNC_IMPL(__imp__sub_82F4575C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45760"))) PPC_WEAK_FUNC(sub_82F45760);
PPC_FUNC_IMPL(__imp__sub_82F45760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17720
	ctx.r3.s64 = r11.s64 + -17720;
}

__attribute__((alias("__imp__sub_82F45768"))) PPC_WEAK_FUNC(sub_82F45768);
PPC_FUNC_IMPL(__imp__sub_82F45768) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4576C"))) PPC_WEAK_FUNC(sub_82F4576C);
PPC_FUNC_IMPL(__imp__sub_82F4576C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45770"))) PPC_WEAK_FUNC(sub_82F45770);
PPC_FUNC_IMPL(__imp__sub_82F45770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17712
	ctx.r3.s64 = r11.s64 + -17712;
}

__attribute__((alias("__imp__sub_82F45778"))) PPC_WEAK_FUNC(sub_82F45778);
PPC_FUNC_IMPL(__imp__sub_82F45778) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4577C"))) PPC_WEAK_FUNC(sub_82F4577C);
PPC_FUNC_IMPL(__imp__sub_82F4577C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45780"))) PPC_WEAK_FUNC(sub_82F45780);
PPC_FUNC_IMPL(__imp__sub_82F45780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17704
	ctx.r3.s64 = r11.s64 + -17704;
}

__attribute__((alias("__imp__sub_82F45788"))) PPC_WEAK_FUNC(sub_82F45788);
PPC_FUNC_IMPL(__imp__sub_82F45788) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4578C"))) PPC_WEAK_FUNC(sub_82F4578C);
PPC_FUNC_IMPL(__imp__sub_82F4578C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45790"))) PPC_WEAK_FUNC(sub_82F45790);
PPC_FUNC_IMPL(__imp__sub_82F45790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17696
	ctx.r3.s64 = r11.s64 + -17696;
}

__attribute__((alias("__imp__sub_82F45798"))) PPC_WEAK_FUNC(sub_82F45798);
PPC_FUNC_IMPL(__imp__sub_82F45798) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4579C"))) PPC_WEAK_FUNC(sub_82F4579C);
PPC_FUNC_IMPL(__imp__sub_82F4579C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F457A0"))) PPC_WEAK_FUNC(sub_82F457A0);
PPC_FUNC_IMPL(__imp__sub_82F457A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17688
	ctx.r3.s64 = r11.s64 + -17688;
}

__attribute__((alias("__imp__sub_82F457A8"))) PPC_WEAK_FUNC(sub_82F457A8);
PPC_FUNC_IMPL(__imp__sub_82F457A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F457AC"))) PPC_WEAK_FUNC(sub_82F457AC);
PPC_FUNC_IMPL(__imp__sub_82F457AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F457B0"))) PPC_WEAK_FUNC(sub_82F457B0);
PPC_FUNC_IMPL(__imp__sub_82F457B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17680
	ctx.r3.s64 = r11.s64 + -17680;
}

__attribute__((alias("__imp__sub_82F457B8"))) PPC_WEAK_FUNC(sub_82F457B8);
PPC_FUNC_IMPL(__imp__sub_82F457B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F457BC"))) PPC_WEAK_FUNC(sub_82F457BC);
PPC_FUNC_IMPL(__imp__sub_82F457BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F457C0"))) PPC_WEAK_FUNC(sub_82F457C0);
PPC_FUNC_IMPL(__imp__sub_82F457C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17672
	ctx.r3.s64 = r11.s64 + -17672;
}

__attribute__((alias("__imp__sub_82F457C8"))) PPC_WEAK_FUNC(sub_82F457C8);
PPC_FUNC_IMPL(__imp__sub_82F457C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F457CC"))) PPC_WEAK_FUNC(sub_82F457CC);
PPC_FUNC_IMPL(__imp__sub_82F457CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F457D0"))) PPC_WEAK_FUNC(sub_82F457D0);
PPC_FUNC_IMPL(__imp__sub_82F457D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17664
	ctx.r3.s64 = r11.s64 + -17664;
}

__attribute__((alias("__imp__sub_82F457D8"))) PPC_WEAK_FUNC(sub_82F457D8);
PPC_FUNC_IMPL(__imp__sub_82F457D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F457DC"))) PPC_WEAK_FUNC(sub_82F457DC);
PPC_FUNC_IMPL(__imp__sub_82F457DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F457E0"))) PPC_WEAK_FUNC(sub_82F457E0);
PPC_FUNC_IMPL(__imp__sub_82F457E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17656
	ctx.r3.s64 = r11.s64 + -17656;
}

__attribute__((alias("__imp__sub_82F457E8"))) PPC_WEAK_FUNC(sub_82F457E8);
PPC_FUNC_IMPL(__imp__sub_82F457E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F457EC"))) PPC_WEAK_FUNC(sub_82F457EC);
PPC_FUNC_IMPL(__imp__sub_82F457EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F457F0"))) PPC_WEAK_FUNC(sub_82F457F0);
PPC_FUNC_IMPL(__imp__sub_82F457F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17648
	ctx.r3.s64 = r11.s64 + -17648;
}

__attribute__((alias("__imp__sub_82F457F8"))) PPC_WEAK_FUNC(sub_82F457F8);
PPC_FUNC_IMPL(__imp__sub_82F457F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F457FC"))) PPC_WEAK_FUNC(sub_82F457FC);
PPC_FUNC_IMPL(__imp__sub_82F457FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45800"))) PPC_WEAK_FUNC(sub_82F45800);
PPC_FUNC_IMPL(__imp__sub_82F45800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17640
	ctx.r3.s64 = r11.s64 + -17640;
}

__attribute__((alias("__imp__sub_82F45808"))) PPC_WEAK_FUNC(sub_82F45808);
PPC_FUNC_IMPL(__imp__sub_82F45808) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4580C"))) PPC_WEAK_FUNC(sub_82F4580C);
PPC_FUNC_IMPL(__imp__sub_82F4580C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45810"))) PPC_WEAK_FUNC(sub_82F45810);
PPC_FUNC_IMPL(__imp__sub_82F45810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17632
	ctx.r3.s64 = r11.s64 + -17632;
}

__attribute__((alias("__imp__sub_82F45818"))) PPC_WEAK_FUNC(sub_82F45818);
PPC_FUNC_IMPL(__imp__sub_82F45818) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4581C"))) PPC_WEAK_FUNC(sub_82F4581C);
PPC_FUNC_IMPL(__imp__sub_82F4581C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45820"))) PPC_WEAK_FUNC(sub_82F45820);
PPC_FUNC_IMPL(__imp__sub_82F45820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17624
	ctx.r3.s64 = r11.s64 + -17624;
}

__attribute__((alias("__imp__sub_82F45828"))) PPC_WEAK_FUNC(sub_82F45828);
PPC_FUNC_IMPL(__imp__sub_82F45828) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4582C"))) PPC_WEAK_FUNC(sub_82F4582C);
PPC_FUNC_IMPL(__imp__sub_82F4582C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45830"))) PPC_WEAK_FUNC(sub_82F45830);
PPC_FUNC_IMPL(__imp__sub_82F45830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17616
	ctx.r3.s64 = r11.s64 + -17616;
}

__attribute__((alias("__imp__sub_82F45838"))) PPC_WEAK_FUNC(sub_82F45838);
PPC_FUNC_IMPL(__imp__sub_82F45838) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4583C"))) PPC_WEAK_FUNC(sub_82F4583C);
PPC_FUNC_IMPL(__imp__sub_82F4583C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45840"))) PPC_WEAK_FUNC(sub_82F45840);
PPC_FUNC_IMPL(__imp__sub_82F45840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17608
	ctx.r3.s64 = r11.s64 + -17608;
}

__attribute__((alias("__imp__sub_82F45848"))) PPC_WEAK_FUNC(sub_82F45848);
PPC_FUNC_IMPL(__imp__sub_82F45848) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4584C"))) PPC_WEAK_FUNC(sub_82F4584C);
PPC_FUNC_IMPL(__imp__sub_82F4584C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45850"))) PPC_WEAK_FUNC(sub_82F45850);
PPC_FUNC_IMPL(__imp__sub_82F45850) {
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
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,13172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13172, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F45878"))) PPC_WEAK_FUNC(sub_82F45878);
PPC_FUNC_IMPL(__imp__sub_82F45878) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4587C"))) PPC_WEAK_FUNC(sub_82F4587C);
PPC_FUNC_IMPL(__imp__sub_82F4587C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45880"))) PPC_WEAK_FUNC(sub_82F45880);
PPC_FUNC_IMPL(__imp__sub_82F45880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17600
	ctx.r3.s64 = r11.s64 + -17600;
}

__attribute__((alias("__imp__sub_82F45888"))) PPC_WEAK_FUNC(sub_82F45888);
PPC_FUNC_IMPL(__imp__sub_82F45888) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4588C"))) PPC_WEAK_FUNC(sub_82F4588C);
PPC_FUNC_IMPL(__imp__sub_82F4588C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45890"))) PPC_WEAK_FUNC(sub_82F45890);
PPC_FUNC_IMPL(__imp__sub_82F45890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17592
	ctx.r3.s64 = r11.s64 + -17592;
}

__attribute__((alias("__imp__sub_82F45898"))) PPC_WEAK_FUNC(sub_82F45898);
PPC_FUNC_IMPL(__imp__sub_82F45898) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4589C"))) PPC_WEAK_FUNC(sub_82F4589C);
PPC_FUNC_IMPL(__imp__sub_82F4589C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F458A0"))) PPC_WEAK_FUNC(sub_82F458A0);
PPC_FUNC_IMPL(__imp__sub_82F458A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17584
	ctx.r3.s64 = r11.s64 + -17584;
}

__attribute__((alias("__imp__sub_82F458A8"))) PPC_WEAK_FUNC(sub_82F458A8);
PPC_FUNC_IMPL(__imp__sub_82F458A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F458AC"))) PPC_WEAK_FUNC(sub_82F458AC);
PPC_FUNC_IMPL(__imp__sub_82F458AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F458B0"))) PPC_WEAK_FUNC(sub_82F458B0);
PPC_FUNC_IMPL(__imp__sub_82F458B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17576
	ctx.r3.s64 = r11.s64 + -17576;
}

__attribute__((alias("__imp__sub_82F458B8"))) PPC_WEAK_FUNC(sub_82F458B8);
PPC_FUNC_IMPL(__imp__sub_82F458B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F458BC"))) PPC_WEAK_FUNC(sub_82F458BC);
PPC_FUNC_IMPL(__imp__sub_82F458BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F458C0"))) PPC_WEAK_FUNC(sub_82F458C0);
PPC_FUNC_IMPL(__imp__sub_82F458C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17568
	ctx.r3.s64 = r11.s64 + -17568;
}

__attribute__((alias("__imp__sub_82F458C8"))) PPC_WEAK_FUNC(sub_82F458C8);
PPC_FUNC_IMPL(__imp__sub_82F458C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F458CC"))) PPC_WEAK_FUNC(sub_82F458CC);
PPC_FUNC_IMPL(__imp__sub_82F458CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F458D0"))) PPC_WEAK_FUNC(sub_82F458D0);
PPC_FUNC_IMPL(__imp__sub_82F458D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17560
	ctx.r3.s64 = r11.s64 + -17560;
}

__attribute__((alias("__imp__sub_82F458D8"))) PPC_WEAK_FUNC(sub_82F458D8);
PPC_FUNC_IMPL(__imp__sub_82F458D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F458DC"))) PPC_WEAK_FUNC(sub_82F458DC);
PPC_FUNC_IMPL(__imp__sub_82F458DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F458E0"))) PPC_WEAK_FUNC(sub_82F458E0);
PPC_FUNC_IMPL(__imp__sub_82F458E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17552
	ctx.r3.s64 = r11.s64 + -17552;
}

__attribute__((alias("__imp__sub_82F458E8"))) PPC_WEAK_FUNC(sub_82F458E8);
PPC_FUNC_IMPL(__imp__sub_82F458E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F458EC"))) PPC_WEAK_FUNC(sub_82F458EC);
PPC_FUNC_IMPL(__imp__sub_82F458EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F458F0"))) PPC_WEAK_FUNC(sub_82F458F0);
PPC_FUNC_IMPL(__imp__sub_82F458F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17544
	ctx.r3.s64 = r11.s64 + -17544;
}

__attribute__((alias("__imp__sub_82F458F8"))) PPC_WEAK_FUNC(sub_82F458F8);
PPC_FUNC_IMPL(__imp__sub_82F458F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F458FC"))) PPC_WEAK_FUNC(sub_82F458FC);
PPC_FUNC_IMPL(__imp__sub_82F458FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45900"))) PPC_WEAK_FUNC(sub_82F45900);
PPC_FUNC_IMPL(__imp__sub_82F45900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17536
	ctx.r3.s64 = r11.s64 + -17536;
}

__attribute__((alias("__imp__sub_82F45908"))) PPC_WEAK_FUNC(sub_82F45908);
PPC_FUNC_IMPL(__imp__sub_82F45908) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4590C"))) PPC_WEAK_FUNC(sub_82F4590C);
PPC_FUNC_IMPL(__imp__sub_82F4590C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45910"))) PPC_WEAK_FUNC(sub_82F45910);
PPC_FUNC_IMPL(__imp__sub_82F45910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17528
	ctx.r3.s64 = r11.s64 + -17528;
}

__attribute__((alias("__imp__sub_82F45918"))) PPC_WEAK_FUNC(sub_82F45918);
PPC_FUNC_IMPL(__imp__sub_82F45918) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4591C"))) PPC_WEAK_FUNC(sub_82F4591C);
PPC_FUNC_IMPL(__imp__sub_82F4591C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45920"))) PPC_WEAK_FUNC(sub_82F45920);
PPC_FUNC_IMPL(__imp__sub_82F45920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17520
	ctx.r3.s64 = r11.s64 + -17520;
}

__attribute__((alias("__imp__sub_82F45928"))) PPC_WEAK_FUNC(sub_82F45928);
PPC_FUNC_IMPL(__imp__sub_82F45928) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4592C"))) PPC_WEAK_FUNC(sub_82F4592C);
PPC_FUNC_IMPL(__imp__sub_82F4592C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45930"))) PPC_WEAK_FUNC(sub_82F45930);
PPC_FUNC_IMPL(__imp__sub_82F45930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17512
	ctx.r3.s64 = r11.s64 + -17512;
}

__attribute__((alias("__imp__sub_82F45938"))) PPC_WEAK_FUNC(sub_82F45938);
PPC_FUNC_IMPL(__imp__sub_82F45938) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4593C"))) PPC_WEAK_FUNC(sub_82F4593C);
PPC_FUNC_IMPL(__imp__sub_82F4593C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45940"))) PPC_WEAK_FUNC(sub_82F45940);
PPC_FUNC_IMPL(__imp__sub_82F45940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17504
	ctx.r3.s64 = r11.s64 + -17504;
}

__attribute__((alias("__imp__sub_82F45948"))) PPC_WEAK_FUNC(sub_82F45948);
PPC_FUNC_IMPL(__imp__sub_82F45948) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4594C"))) PPC_WEAK_FUNC(sub_82F4594C);
PPC_FUNC_IMPL(__imp__sub_82F4594C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45950"))) PPC_WEAK_FUNC(sub_82F45950);
PPC_FUNC_IMPL(__imp__sub_82F45950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17496
	ctx.r3.s64 = r11.s64 + -17496;
}

__attribute__((alias("__imp__sub_82F45958"))) PPC_WEAK_FUNC(sub_82F45958);
PPC_FUNC_IMPL(__imp__sub_82F45958) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4595C"))) PPC_WEAK_FUNC(sub_82F4595C);
PPC_FUNC_IMPL(__imp__sub_82F4595C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45960"))) PPC_WEAK_FUNC(sub_82F45960);
PPC_FUNC_IMPL(__imp__sub_82F45960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17488
	ctx.r3.s64 = r11.s64 + -17488;
}

__attribute__((alias("__imp__sub_82F45968"))) PPC_WEAK_FUNC(sub_82F45968);
PPC_FUNC_IMPL(__imp__sub_82F45968) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4596C"))) PPC_WEAK_FUNC(sub_82F4596C);
PPC_FUNC_IMPL(__imp__sub_82F4596C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45970"))) PPC_WEAK_FUNC(sub_82F45970);
PPC_FUNC_IMPL(__imp__sub_82F45970) {
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
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,13204(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13204, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F45998"))) PPC_WEAK_FUNC(sub_82F45998);
PPC_FUNC_IMPL(__imp__sub_82F45998) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4599C"))) PPC_WEAK_FUNC(sub_82F4599C);
PPC_FUNC_IMPL(__imp__sub_82F4599C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F459A0"))) PPC_WEAK_FUNC(sub_82F459A0);
PPC_FUNC_IMPL(__imp__sub_82F459A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17480
	ctx.r3.s64 = r11.s64 + -17480;
}

__attribute__((alias("__imp__sub_82F459A8"))) PPC_WEAK_FUNC(sub_82F459A8);
PPC_FUNC_IMPL(__imp__sub_82F459A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F459AC"))) PPC_WEAK_FUNC(sub_82F459AC);
PPC_FUNC_IMPL(__imp__sub_82F459AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F459B0"))) PPC_WEAK_FUNC(sub_82F459B0);
PPC_FUNC_IMPL(__imp__sub_82F459B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17472
	ctx.r3.s64 = r11.s64 + -17472;
}

__attribute__((alias("__imp__sub_82F459B8"))) PPC_WEAK_FUNC(sub_82F459B8);
PPC_FUNC_IMPL(__imp__sub_82F459B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F459BC"))) PPC_WEAK_FUNC(sub_82F459BC);
PPC_FUNC_IMPL(__imp__sub_82F459BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F459C0"))) PPC_WEAK_FUNC(sub_82F459C0);
PPC_FUNC_IMPL(__imp__sub_82F459C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17464
	ctx.r3.s64 = r11.s64 + -17464;
}

__attribute__((alias("__imp__sub_82F459C8"))) PPC_WEAK_FUNC(sub_82F459C8);
PPC_FUNC_IMPL(__imp__sub_82F459C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F459CC"))) PPC_WEAK_FUNC(sub_82F459CC);
PPC_FUNC_IMPL(__imp__sub_82F459CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F459D0"))) PPC_WEAK_FUNC(sub_82F459D0);
PPC_FUNC_IMPL(__imp__sub_82F459D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17456
	ctx.r3.s64 = r11.s64 + -17456;
}

__attribute__((alias("__imp__sub_82F459D8"))) PPC_WEAK_FUNC(sub_82F459D8);
PPC_FUNC_IMPL(__imp__sub_82F459D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F459DC"))) PPC_WEAK_FUNC(sub_82F459DC);
PPC_FUNC_IMPL(__imp__sub_82F459DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F459E0"))) PPC_WEAK_FUNC(sub_82F459E0);
PPC_FUNC_IMPL(__imp__sub_82F459E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17448
	ctx.r3.s64 = r11.s64 + -17448;
}

__attribute__((alias("__imp__sub_82F459E8"))) PPC_WEAK_FUNC(sub_82F459E8);
PPC_FUNC_IMPL(__imp__sub_82F459E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F459EC"))) PPC_WEAK_FUNC(sub_82F459EC);
PPC_FUNC_IMPL(__imp__sub_82F459EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F459F0"))) PPC_WEAK_FUNC(sub_82F459F0);
PPC_FUNC_IMPL(__imp__sub_82F459F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17440
	ctx.r3.s64 = r11.s64 + -17440;
}

__attribute__((alias("__imp__sub_82F459F8"))) PPC_WEAK_FUNC(sub_82F459F8);
PPC_FUNC_IMPL(__imp__sub_82F459F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F459FC"))) PPC_WEAK_FUNC(sub_82F459FC);
PPC_FUNC_IMPL(__imp__sub_82F459FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45A00"))) PPC_WEAK_FUNC(sub_82F45A00);
PPC_FUNC_IMPL(__imp__sub_82F45A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17432
	ctx.r3.s64 = r11.s64 + -17432;
}

__attribute__((alias("__imp__sub_82F45A08"))) PPC_WEAK_FUNC(sub_82F45A08);
PPC_FUNC_IMPL(__imp__sub_82F45A08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F45A0C"))) PPC_WEAK_FUNC(sub_82F45A0C);
PPC_FUNC_IMPL(__imp__sub_82F45A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45A10"))) PPC_WEAK_FUNC(sub_82F45A10);
PPC_FUNC_IMPL(__imp__sub_82F45A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17424
	ctx.r3.s64 = r11.s64 + -17424;
}

__attribute__((alias("__imp__sub_82F45A18"))) PPC_WEAK_FUNC(sub_82F45A18);
PPC_FUNC_IMPL(__imp__sub_82F45A18) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F45A1C"))) PPC_WEAK_FUNC(sub_82F45A1C);
PPC_FUNC_IMPL(__imp__sub_82F45A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45A20"))) PPC_WEAK_FUNC(sub_82F45A20);
PPC_FUNC_IMPL(__imp__sub_82F45A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17416
	ctx.r3.s64 = r11.s64 + -17416;
}

__attribute__((alias("__imp__sub_82F45A28"))) PPC_WEAK_FUNC(sub_82F45A28);
PPC_FUNC_IMPL(__imp__sub_82F45A28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F45A2C"))) PPC_WEAK_FUNC(sub_82F45A2C);
PPC_FUNC_IMPL(__imp__sub_82F45A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45A30"))) PPC_WEAK_FUNC(sub_82F45A30);
PPC_FUNC_IMPL(__imp__sub_82F45A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17408
	ctx.r3.s64 = r11.s64 + -17408;
}

__attribute__((alias("__imp__sub_82F45A38"))) PPC_WEAK_FUNC(sub_82F45A38);
PPC_FUNC_IMPL(__imp__sub_82F45A38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F45A3C"))) PPC_WEAK_FUNC(sub_82F45A3C);
PPC_FUNC_IMPL(__imp__sub_82F45A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45A40"))) PPC_WEAK_FUNC(sub_82F45A40);
PPC_FUNC_IMPL(__imp__sub_82F45A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17400
	ctx.r3.s64 = r11.s64 + -17400;
}

__attribute__((alias("__imp__sub_82F45A48"))) PPC_WEAK_FUNC(sub_82F45A48);
PPC_FUNC_IMPL(__imp__sub_82F45A48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F45A4C"))) PPC_WEAK_FUNC(sub_82F45A4C);
PPC_FUNC_IMPL(__imp__sub_82F45A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45A50"))) PPC_WEAK_FUNC(sub_82F45A50);
PPC_FUNC_IMPL(__imp__sub_82F45A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17392
	ctx.r3.s64 = r11.s64 + -17392;
}

__attribute__((alias("__imp__sub_82F45A58"))) PPC_WEAK_FUNC(sub_82F45A58);
PPC_FUNC_IMPL(__imp__sub_82F45A58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F45A5C"))) PPC_WEAK_FUNC(sub_82F45A5C);
PPC_FUNC_IMPL(__imp__sub_82F45A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45A60"))) PPC_WEAK_FUNC(sub_82F45A60);
PPC_FUNC_IMPL(__imp__sub_82F45A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17384
	ctx.r3.s64 = r11.s64 + -17384;
}

__attribute__((alias("__imp__sub_82F45A68"))) PPC_WEAK_FUNC(sub_82F45A68);
PPC_FUNC_IMPL(__imp__sub_82F45A68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F45A6C"))) PPC_WEAK_FUNC(sub_82F45A6C);
PPC_FUNC_IMPL(__imp__sub_82F45A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45A70"))) PPC_WEAK_FUNC(sub_82F45A70);
PPC_FUNC_IMPL(__imp__sub_82F45A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17376
	ctx.r3.s64 = r11.s64 + -17376;
}

__attribute__((alias("__imp__sub_82F45A78"))) PPC_WEAK_FUNC(sub_82F45A78);
PPC_FUNC_IMPL(__imp__sub_82F45A78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F45A7C"))) PPC_WEAK_FUNC(sub_82F45A7C);
PPC_FUNC_IMPL(__imp__sub_82F45A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45A80"))) PPC_WEAK_FUNC(sub_82F45A80);
PPC_FUNC_IMPL(__imp__sub_82F45A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17368
	ctx.r3.s64 = r11.s64 + -17368;
}

__attribute__((alias("__imp__sub_82F45A88"))) PPC_WEAK_FUNC(sub_82F45A88);
PPC_FUNC_IMPL(__imp__sub_82F45A88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F45A8C"))) PPC_WEAK_FUNC(sub_82F45A8C);
PPC_FUNC_IMPL(__imp__sub_82F45A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45A90"))) PPC_WEAK_FUNC(sub_82F45A90);
PPC_FUNC_IMPL(__imp__sub_82F45A90) {
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
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,13240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13240, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

