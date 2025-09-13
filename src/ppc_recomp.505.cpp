#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F2D4E4"))) PPC_WEAK_FUNC(sub_82F2D4E4);
PPC_FUNC_IMPL(__imp__sub_82F2D4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D4E8"))) PPC_WEAK_FUNC(sub_82F2D4E8);
PPC_FUNC_IMPL(__imp__sub_82F2D4E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29392
	ctx.r3.s64 = r11.s64 + -29392;
}

__attribute__((alias("__imp__sub_82F2D4F0"))) PPC_WEAK_FUNC(sub_82F2D4F0);
PPC_FUNC_IMPL(__imp__sub_82F2D4F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D4F4"))) PPC_WEAK_FUNC(sub_82F2D4F4);
PPC_FUNC_IMPL(__imp__sub_82F2D4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D4F8"))) PPC_WEAK_FUNC(sub_82F2D4F8);
PPC_FUNC_IMPL(__imp__sub_82F2D4F8) {
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
	// addi r3,r10,1876
	ctx.r3.s64 = ctx.r10.s64 + 1876;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28364(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28364, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2D530"))) PPC_WEAK_FUNC(sub_82F2D530);
PPC_FUNC_IMPL(__imp__sub_82F2D530) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D534"))) PPC_WEAK_FUNC(sub_82F2D534);
PPC_FUNC_IMPL(__imp__sub_82F2D534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D538"))) PPC_WEAK_FUNC(sub_82F2D538);
PPC_FUNC_IMPL(__imp__sub_82F2D538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29384
	ctx.r3.s64 = r11.s64 + -29384;
}

__attribute__((alias("__imp__sub_82F2D540"))) PPC_WEAK_FUNC(sub_82F2D540);
PPC_FUNC_IMPL(__imp__sub_82F2D540) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D544"))) PPC_WEAK_FUNC(sub_82F2D544);
PPC_FUNC_IMPL(__imp__sub_82F2D544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D548"))) PPC_WEAK_FUNC(sub_82F2D548);
PPC_FUNC_IMPL(__imp__sub_82F2D548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29376
	ctx.r3.s64 = r11.s64 + -29376;
}

__attribute__((alias("__imp__sub_82F2D550"))) PPC_WEAK_FUNC(sub_82F2D550);
PPC_FUNC_IMPL(__imp__sub_82F2D550) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D554"))) PPC_WEAK_FUNC(sub_82F2D554);
PPC_FUNC_IMPL(__imp__sub_82F2D554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D558"))) PPC_WEAK_FUNC(sub_82F2D558);
PPC_FUNC_IMPL(__imp__sub_82F2D558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29368
	ctx.r3.s64 = r11.s64 + -29368;
}

__attribute__((alias("__imp__sub_82F2D560"))) PPC_WEAK_FUNC(sub_82F2D560);
PPC_FUNC_IMPL(__imp__sub_82F2D560) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D564"))) PPC_WEAK_FUNC(sub_82F2D564);
PPC_FUNC_IMPL(__imp__sub_82F2D564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D568"))) PPC_WEAK_FUNC(sub_82F2D568);
PPC_FUNC_IMPL(__imp__sub_82F2D568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29360
	ctx.r3.s64 = r11.s64 + -29360;
}

__attribute__((alias("__imp__sub_82F2D570"))) PPC_WEAK_FUNC(sub_82F2D570);
PPC_FUNC_IMPL(__imp__sub_82F2D570) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D574"))) PPC_WEAK_FUNC(sub_82F2D574);
PPC_FUNC_IMPL(__imp__sub_82F2D574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D578"))) PPC_WEAK_FUNC(sub_82F2D578);
PPC_FUNC_IMPL(__imp__sub_82F2D578) {
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
	// addi r3,r10,1420
	ctx.r3.s64 = ctx.r10.s64 + 1420;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28368(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28368, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2D5B0"))) PPC_WEAK_FUNC(sub_82F2D5B0);
PPC_FUNC_IMPL(__imp__sub_82F2D5B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D5B4"))) PPC_WEAK_FUNC(sub_82F2D5B4);
PPC_FUNC_IMPL(__imp__sub_82F2D5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D5B8"))) PPC_WEAK_FUNC(sub_82F2D5B8);
PPC_FUNC_IMPL(__imp__sub_82F2D5B8) {
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
	// addi r3,r10,4836
	ctx.r3.s64 = ctx.r10.s64 + 4836;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28372(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28372, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2D5F0"))) PPC_WEAK_FUNC(sub_82F2D5F0);
PPC_FUNC_IMPL(__imp__sub_82F2D5F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D5F4"))) PPC_WEAK_FUNC(sub_82F2D5F4);
PPC_FUNC_IMPL(__imp__sub_82F2D5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D5F8"))) PPC_WEAK_FUNC(sub_82F2D5F8);
PPC_FUNC_IMPL(__imp__sub_82F2D5F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29352
	ctx.r3.s64 = r11.s64 + -29352;
}

__attribute__((alias("__imp__sub_82F2D600"))) PPC_WEAK_FUNC(sub_82F2D600);
PPC_FUNC_IMPL(__imp__sub_82F2D600) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D604"))) PPC_WEAK_FUNC(sub_82F2D604);
PPC_FUNC_IMPL(__imp__sub_82F2D604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D608"))) PPC_WEAK_FUNC(sub_82F2D608);
PPC_FUNC_IMPL(__imp__sub_82F2D608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29344
	ctx.r3.s64 = r11.s64 + -29344;
}

__attribute__((alias("__imp__sub_82F2D610"))) PPC_WEAK_FUNC(sub_82F2D610);
PPC_FUNC_IMPL(__imp__sub_82F2D610) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D614"))) PPC_WEAK_FUNC(sub_82F2D614);
PPC_FUNC_IMPL(__imp__sub_82F2D614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D618"))) PPC_WEAK_FUNC(sub_82F2D618);
PPC_FUNC_IMPL(__imp__sub_82F2D618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29336
	ctx.r3.s64 = r11.s64 + -29336;
}

__attribute__((alias("__imp__sub_82F2D620"))) PPC_WEAK_FUNC(sub_82F2D620);
PPC_FUNC_IMPL(__imp__sub_82F2D620) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D624"))) PPC_WEAK_FUNC(sub_82F2D624);
PPC_FUNC_IMPL(__imp__sub_82F2D624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D628"))) PPC_WEAK_FUNC(sub_82F2D628);
PPC_FUNC_IMPL(__imp__sub_82F2D628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29328
	ctx.r3.s64 = r11.s64 + -29328;
}

__attribute__((alias("__imp__sub_82F2D630"))) PPC_WEAK_FUNC(sub_82F2D630);
PPC_FUNC_IMPL(__imp__sub_82F2D630) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D634"))) PPC_WEAK_FUNC(sub_82F2D634);
PPC_FUNC_IMPL(__imp__sub_82F2D634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D638"))) PPC_WEAK_FUNC(sub_82F2D638);
PPC_FUNC_IMPL(__imp__sub_82F2D638) {
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
	// addi r3,r10,3108
	ctx.r3.s64 = ctx.r10.s64 + 3108;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28376(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28376, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2D670"))) PPC_WEAK_FUNC(sub_82F2D670);
PPC_FUNC_IMPL(__imp__sub_82F2D670) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D674"))) PPC_WEAK_FUNC(sub_82F2D674);
PPC_FUNC_IMPL(__imp__sub_82F2D674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D678"))) PPC_WEAK_FUNC(sub_82F2D678);
PPC_FUNC_IMPL(__imp__sub_82F2D678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29320
	ctx.r3.s64 = r11.s64 + -29320;
}

__attribute__((alias("__imp__sub_82F2D680"))) PPC_WEAK_FUNC(sub_82F2D680);
PPC_FUNC_IMPL(__imp__sub_82F2D680) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D684"))) PPC_WEAK_FUNC(sub_82F2D684);
PPC_FUNC_IMPL(__imp__sub_82F2D684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D688"))) PPC_WEAK_FUNC(sub_82F2D688);
PPC_FUNC_IMPL(__imp__sub_82F2D688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29312
	ctx.r3.s64 = r11.s64 + -29312;
}

__attribute__((alias("__imp__sub_82F2D690"))) PPC_WEAK_FUNC(sub_82F2D690);
PPC_FUNC_IMPL(__imp__sub_82F2D690) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D694"))) PPC_WEAK_FUNC(sub_82F2D694);
PPC_FUNC_IMPL(__imp__sub_82F2D694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D698"))) PPC_WEAK_FUNC(sub_82F2D698);
PPC_FUNC_IMPL(__imp__sub_82F2D698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29304
	ctx.r3.s64 = r11.s64 + -29304;
}

__attribute__((alias("__imp__sub_82F2D6A0"))) PPC_WEAK_FUNC(sub_82F2D6A0);
PPC_FUNC_IMPL(__imp__sub_82F2D6A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D6A4"))) PPC_WEAK_FUNC(sub_82F2D6A4);
PPC_FUNC_IMPL(__imp__sub_82F2D6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D6A8"))) PPC_WEAK_FUNC(sub_82F2D6A8);
PPC_FUNC_IMPL(__imp__sub_82F2D6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29296
	ctx.r3.s64 = r11.s64 + -29296;
}

__attribute__((alias("__imp__sub_82F2D6B0"))) PPC_WEAK_FUNC(sub_82F2D6B0);
PPC_FUNC_IMPL(__imp__sub_82F2D6B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D6B4"))) PPC_WEAK_FUNC(sub_82F2D6B4);
PPC_FUNC_IMPL(__imp__sub_82F2D6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D6B8"))) PPC_WEAK_FUNC(sub_82F2D6B8);
PPC_FUNC_IMPL(__imp__sub_82F2D6B8) {
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
	// addi r3,r10,3152
	ctx.r3.s64 = ctx.r10.s64 + 3152;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28388(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28388, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2D6F0"))) PPC_WEAK_FUNC(sub_82F2D6F0);
PPC_FUNC_IMPL(__imp__sub_82F2D6F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D6F4"))) PPC_WEAK_FUNC(sub_82F2D6F4);
PPC_FUNC_IMPL(__imp__sub_82F2D6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D6F8"))) PPC_WEAK_FUNC(sub_82F2D6F8);
PPC_FUNC_IMPL(__imp__sub_82F2D6F8) {
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
	// addi r3,r10,-18976
	ctx.r3.s64 = ctx.r10.s64 + -18976;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28384(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28384, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2D730"))) PPC_WEAK_FUNC(sub_82F2D730);
PPC_FUNC_IMPL(__imp__sub_82F2D730) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D734"))) PPC_WEAK_FUNC(sub_82F2D734);
PPC_FUNC_IMPL(__imp__sub_82F2D734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D738"))) PPC_WEAK_FUNC(sub_82F2D738);
PPC_FUNC_IMPL(__imp__sub_82F2D738) {
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
	// addi r3,r10,-18896
	ctx.r3.s64 = ctx.r10.s64 + -18896;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28380(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28380, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2D770"))) PPC_WEAK_FUNC(sub_82F2D770);
PPC_FUNC_IMPL(__imp__sub_82F2D770) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D774"))) PPC_WEAK_FUNC(sub_82F2D774);
PPC_FUNC_IMPL(__imp__sub_82F2D774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D778"))) PPC_WEAK_FUNC(sub_82F2D778);
PPC_FUNC_IMPL(__imp__sub_82F2D778) {
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
	// addi r3,r10,4796
	ctx.r3.s64 = ctx.r10.s64 + 4796;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28392(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28392, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2D7B0"))) PPC_WEAK_FUNC(sub_82F2D7B0);
PPC_FUNC_IMPL(__imp__sub_82F2D7B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D7B4"))) PPC_WEAK_FUNC(sub_82F2D7B4);
PPC_FUNC_IMPL(__imp__sub_82F2D7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D7B8"))) PPC_WEAK_FUNC(sub_82F2D7B8);
PPC_FUNC_IMPL(__imp__sub_82F2D7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29288
	ctx.r3.s64 = r11.s64 + -29288;
}

__attribute__((alias("__imp__sub_82F2D7C0"))) PPC_WEAK_FUNC(sub_82F2D7C0);
PPC_FUNC_IMPL(__imp__sub_82F2D7C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D7C4"))) PPC_WEAK_FUNC(sub_82F2D7C4);
PPC_FUNC_IMPL(__imp__sub_82F2D7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D7C8"))) PPC_WEAK_FUNC(sub_82F2D7C8);
PPC_FUNC_IMPL(__imp__sub_82F2D7C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29280
	ctx.r3.s64 = r11.s64 + -29280;
}

__attribute__((alias("__imp__sub_82F2D7D0"))) PPC_WEAK_FUNC(sub_82F2D7D0);
PPC_FUNC_IMPL(__imp__sub_82F2D7D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D7D4"))) PPC_WEAK_FUNC(sub_82F2D7D4);
PPC_FUNC_IMPL(__imp__sub_82F2D7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D7D8"))) PPC_WEAK_FUNC(sub_82F2D7D8);
PPC_FUNC_IMPL(__imp__sub_82F2D7D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29272
	ctx.r3.s64 = r11.s64 + -29272;
}

__attribute__((alias("__imp__sub_82F2D7E0"))) PPC_WEAK_FUNC(sub_82F2D7E0);
PPC_FUNC_IMPL(__imp__sub_82F2D7E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D7E4"))) PPC_WEAK_FUNC(sub_82F2D7E4);
PPC_FUNC_IMPL(__imp__sub_82F2D7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D7E8"))) PPC_WEAK_FUNC(sub_82F2D7E8);
PPC_FUNC_IMPL(__imp__sub_82F2D7E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29264
	ctx.r3.s64 = r11.s64 + -29264;
}

__attribute__((alias("__imp__sub_82F2D7F0"))) PPC_WEAK_FUNC(sub_82F2D7F0);
PPC_FUNC_IMPL(__imp__sub_82F2D7F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D7F4"))) PPC_WEAK_FUNC(sub_82F2D7F4);
PPC_FUNC_IMPL(__imp__sub_82F2D7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D7F8"))) PPC_WEAK_FUNC(sub_82F2D7F8);
PPC_FUNC_IMPL(__imp__sub_82F2D7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29256
	ctx.r3.s64 = r11.s64 + -29256;
}

__attribute__((alias("__imp__sub_82F2D800"))) PPC_WEAK_FUNC(sub_82F2D800);
PPC_FUNC_IMPL(__imp__sub_82F2D800) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D804"))) PPC_WEAK_FUNC(sub_82F2D804);
PPC_FUNC_IMPL(__imp__sub_82F2D804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D808"))) PPC_WEAK_FUNC(sub_82F2D808);
PPC_FUNC_IMPL(__imp__sub_82F2D808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29248
	ctx.r3.s64 = r11.s64 + -29248;
}

__attribute__((alias("__imp__sub_82F2D810"))) PPC_WEAK_FUNC(sub_82F2D810);
PPC_FUNC_IMPL(__imp__sub_82F2D810) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D814"))) PPC_WEAK_FUNC(sub_82F2D814);
PPC_FUNC_IMPL(__imp__sub_82F2D814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D818"))) PPC_WEAK_FUNC(sub_82F2D818);
PPC_FUNC_IMPL(__imp__sub_82F2D818) {
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
	// addi r3,r10,1828
	ctx.r3.s64 = ctx.r10.s64 + 1828;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28412(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28412, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2D850"))) PPC_WEAK_FUNC(sub_82F2D850);
PPC_FUNC_IMPL(__imp__sub_82F2D850) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D854"))) PPC_WEAK_FUNC(sub_82F2D854);
PPC_FUNC_IMPL(__imp__sub_82F2D854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D858"))) PPC_WEAK_FUNC(sub_82F2D858);
PPC_FUNC_IMPL(__imp__sub_82F2D858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29240
	ctx.r3.s64 = r11.s64 + -29240;
}

__attribute__((alias("__imp__sub_82F2D860"))) PPC_WEAK_FUNC(sub_82F2D860);
PPC_FUNC_IMPL(__imp__sub_82F2D860) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D864"))) PPC_WEAK_FUNC(sub_82F2D864);
PPC_FUNC_IMPL(__imp__sub_82F2D864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D868"))) PPC_WEAK_FUNC(sub_82F2D868);
PPC_FUNC_IMPL(__imp__sub_82F2D868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29232
	ctx.r3.s64 = r11.s64 + -29232;
}

__attribute__((alias("__imp__sub_82F2D870"))) PPC_WEAK_FUNC(sub_82F2D870);
PPC_FUNC_IMPL(__imp__sub_82F2D870) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D874"))) PPC_WEAK_FUNC(sub_82F2D874);
PPC_FUNC_IMPL(__imp__sub_82F2D874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D878"))) PPC_WEAK_FUNC(sub_82F2D878);
PPC_FUNC_IMPL(__imp__sub_82F2D878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29224
	ctx.r3.s64 = r11.s64 + -29224;
}

__attribute__((alias("__imp__sub_82F2D880"))) PPC_WEAK_FUNC(sub_82F2D880);
PPC_FUNC_IMPL(__imp__sub_82F2D880) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D884"))) PPC_WEAK_FUNC(sub_82F2D884);
PPC_FUNC_IMPL(__imp__sub_82F2D884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D888"))) PPC_WEAK_FUNC(sub_82F2D888);
PPC_FUNC_IMPL(__imp__sub_82F2D888) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r11,28420(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28420, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2D8B0"))) PPC_WEAK_FUNC(sub_82F2D8B0);
PPC_FUNC_IMPL(__imp__sub_82F2D8B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D8B4"))) PPC_WEAK_FUNC(sub_82F2D8B4);
PPC_FUNC_IMPL(__imp__sub_82F2D8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D8B8"))) PPC_WEAK_FUNC(sub_82F2D8B8);
PPC_FUNC_IMPL(__imp__sub_82F2D8B8) {
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
	// addi r3,r10,1180
	ctx.r3.s64 = ctx.r10.s64 + 1180;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28424(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28424, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2D8F0"))) PPC_WEAK_FUNC(sub_82F2D8F0);
PPC_FUNC_IMPL(__imp__sub_82F2D8F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D8F4"))) PPC_WEAK_FUNC(sub_82F2D8F4);
PPC_FUNC_IMPL(__imp__sub_82F2D8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D8F8"))) PPC_WEAK_FUNC(sub_82F2D8F8);
PPC_FUNC_IMPL(__imp__sub_82F2D8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29216
	ctx.r3.s64 = r11.s64 + -29216;
}

__attribute__((alias("__imp__sub_82F2D900"))) PPC_WEAK_FUNC(sub_82F2D900);
PPC_FUNC_IMPL(__imp__sub_82F2D900) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D904"))) PPC_WEAK_FUNC(sub_82F2D904);
PPC_FUNC_IMPL(__imp__sub_82F2D904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D908"))) PPC_WEAK_FUNC(sub_82F2D908);
PPC_FUNC_IMPL(__imp__sub_82F2D908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29208
	ctx.r3.s64 = r11.s64 + -29208;
}

__attribute__((alias("__imp__sub_82F2D910"))) PPC_WEAK_FUNC(sub_82F2D910);
PPC_FUNC_IMPL(__imp__sub_82F2D910) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D914"))) PPC_WEAK_FUNC(sub_82F2D914);
PPC_FUNC_IMPL(__imp__sub_82F2D914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D918"))) PPC_WEAK_FUNC(sub_82F2D918);
PPC_FUNC_IMPL(__imp__sub_82F2D918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29200
	ctx.r3.s64 = r11.s64 + -29200;
}

__attribute__((alias("__imp__sub_82F2D920"))) PPC_WEAK_FUNC(sub_82F2D920);
PPC_FUNC_IMPL(__imp__sub_82F2D920) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D924"))) PPC_WEAK_FUNC(sub_82F2D924);
PPC_FUNC_IMPL(__imp__sub_82F2D924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D928"))) PPC_WEAK_FUNC(sub_82F2D928);
PPC_FUNC_IMPL(__imp__sub_82F2D928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29192
	ctx.r3.s64 = r11.s64 + -29192;
}

__attribute__((alias("__imp__sub_82F2D930"))) PPC_WEAK_FUNC(sub_82F2D930);
PPC_FUNC_IMPL(__imp__sub_82F2D930) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D934"))) PPC_WEAK_FUNC(sub_82F2D934);
PPC_FUNC_IMPL(__imp__sub_82F2D934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D938"))) PPC_WEAK_FUNC(sub_82F2D938);
PPC_FUNC_IMPL(__imp__sub_82F2D938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29184
	ctx.r3.s64 = r11.s64 + -29184;
}

__attribute__((alias("__imp__sub_82F2D940"))) PPC_WEAK_FUNC(sub_82F2D940);
PPC_FUNC_IMPL(__imp__sub_82F2D940) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D944"))) PPC_WEAK_FUNC(sub_82F2D944);
PPC_FUNC_IMPL(__imp__sub_82F2D944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D948"))) PPC_WEAK_FUNC(sub_82F2D948);
PPC_FUNC_IMPL(__imp__sub_82F2D948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29176
	ctx.r3.s64 = r11.s64 + -29176;
}

__attribute__((alias("__imp__sub_82F2D950"))) PPC_WEAK_FUNC(sub_82F2D950);
PPC_FUNC_IMPL(__imp__sub_82F2D950) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D954"))) PPC_WEAK_FUNC(sub_82F2D954);
PPC_FUNC_IMPL(__imp__sub_82F2D954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D958"))) PPC_WEAK_FUNC(sub_82F2D958);
PPC_FUNC_IMPL(__imp__sub_82F2D958) {
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
	// addi r3,r10,1124
	ctx.r3.s64 = ctx.r10.s64 + 1124;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28444(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28444, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2D990"))) PPC_WEAK_FUNC(sub_82F2D990);
PPC_FUNC_IMPL(__imp__sub_82F2D990) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D994"))) PPC_WEAK_FUNC(sub_82F2D994);
PPC_FUNC_IMPL(__imp__sub_82F2D994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D998"))) PPC_WEAK_FUNC(sub_82F2D998);
PPC_FUNC_IMPL(__imp__sub_82F2D998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29168
	ctx.r3.s64 = r11.s64 + -29168;
}

__attribute__((alias("__imp__sub_82F2D9A0"))) PPC_WEAK_FUNC(sub_82F2D9A0);
PPC_FUNC_IMPL(__imp__sub_82F2D9A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D9A4"))) PPC_WEAK_FUNC(sub_82F2D9A4);
PPC_FUNC_IMPL(__imp__sub_82F2D9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D9A8"))) PPC_WEAK_FUNC(sub_82F2D9A8);
PPC_FUNC_IMPL(__imp__sub_82F2D9A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29160
	ctx.r3.s64 = r11.s64 + -29160;
}

__attribute__((alias("__imp__sub_82F2D9B0"))) PPC_WEAK_FUNC(sub_82F2D9B0);
PPC_FUNC_IMPL(__imp__sub_82F2D9B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D9B4"))) PPC_WEAK_FUNC(sub_82F2D9B4);
PPC_FUNC_IMPL(__imp__sub_82F2D9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D9B8"))) PPC_WEAK_FUNC(sub_82F2D9B8);
PPC_FUNC_IMPL(__imp__sub_82F2D9B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29152
	ctx.r3.s64 = r11.s64 + -29152;
}

__attribute__((alias("__imp__sub_82F2D9C0"))) PPC_WEAK_FUNC(sub_82F2D9C0);
PPC_FUNC_IMPL(__imp__sub_82F2D9C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D9C4"))) PPC_WEAK_FUNC(sub_82F2D9C4);
PPC_FUNC_IMPL(__imp__sub_82F2D9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D9C8"))) PPC_WEAK_FUNC(sub_82F2D9C8);
PPC_FUNC_IMPL(__imp__sub_82F2D9C8) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r11,28452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28452, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2D9F0"))) PPC_WEAK_FUNC(sub_82F2D9F0);
PPC_FUNC_IMPL(__imp__sub_82F2D9F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D9F4"))) PPC_WEAK_FUNC(sub_82F2D9F4);
PPC_FUNC_IMPL(__imp__sub_82F2D9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D9F8"))) PPC_WEAK_FUNC(sub_82F2D9F8);
PPC_FUNC_IMPL(__imp__sub_82F2D9F8) {
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
	// addi r3,r10,1012
	ctx.r3.s64 = ctx.r10.s64 + 1012;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28448(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28448, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2DA30"))) PPC_WEAK_FUNC(sub_82F2DA30);
PPC_FUNC_IMPL(__imp__sub_82F2DA30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DA34"))) PPC_WEAK_FUNC(sub_82F2DA34);
PPC_FUNC_IMPL(__imp__sub_82F2DA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DA38"))) PPC_WEAK_FUNC(sub_82F2DA38);
PPC_FUNC_IMPL(__imp__sub_82F2DA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29144
	ctx.r3.s64 = r11.s64 + -29144;
}

__attribute__((alias("__imp__sub_82F2DA40"))) PPC_WEAK_FUNC(sub_82F2DA40);
PPC_FUNC_IMPL(__imp__sub_82F2DA40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2DA44"))) PPC_WEAK_FUNC(sub_82F2DA44);
PPC_FUNC_IMPL(__imp__sub_82F2DA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DA48"))) PPC_WEAK_FUNC(sub_82F2DA48);
PPC_FUNC_IMPL(__imp__sub_82F2DA48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29136
	ctx.r3.s64 = r11.s64 + -29136;
}

__attribute__((alias("__imp__sub_82F2DA50"))) PPC_WEAK_FUNC(sub_82F2DA50);
PPC_FUNC_IMPL(__imp__sub_82F2DA50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2DA54"))) PPC_WEAK_FUNC(sub_82F2DA54);
PPC_FUNC_IMPL(__imp__sub_82F2DA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DA58"))) PPC_WEAK_FUNC(sub_82F2DA58);
PPC_FUNC_IMPL(__imp__sub_82F2DA58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29128
	ctx.r3.s64 = r11.s64 + -29128;
}

__attribute__((alias("__imp__sub_82F2DA60"))) PPC_WEAK_FUNC(sub_82F2DA60);
PPC_FUNC_IMPL(__imp__sub_82F2DA60) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2DA64"))) PPC_WEAK_FUNC(sub_82F2DA64);
PPC_FUNC_IMPL(__imp__sub_82F2DA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DA68"))) PPC_WEAK_FUNC(sub_82F2DA68);
PPC_FUNC_IMPL(__imp__sub_82F2DA68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29120
	ctx.r3.s64 = r11.s64 + -29120;
}

__attribute__((alias("__imp__sub_82F2DA70"))) PPC_WEAK_FUNC(sub_82F2DA70);
PPC_FUNC_IMPL(__imp__sub_82F2DA70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2DA74"))) PPC_WEAK_FUNC(sub_82F2DA74);
PPC_FUNC_IMPL(__imp__sub_82F2DA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DA78"))) PPC_WEAK_FUNC(sub_82F2DA78);
PPC_FUNC_IMPL(__imp__sub_82F2DA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29112
	ctx.r3.s64 = r11.s64 + -29112;
}

__attribute__((alias("__imp__sub_82F2DA80"))) PPC_WEAK_FUNC(sub_82F2DA80);
PPC_FUNC_IMPL(__imp__sub_82F2DA80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2DA84"))) PPC_WEAK_FUNC(sub_82F2DA84);
PPC_FUNC_IMPL(__imp__sub_82F2DA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DA88"))) PPC_WEAK_FUNC(sub_82F2DA88);
PPC_FUNC_IMPL(__imp__sub_82F2DA88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29104
	ctx.r3.s64 = r11.s64 + -29104;
}

__attribute__((alias("__imp__sub_82F2DA90"))) PPC_WEAK_FUNC(sub_82F2DA90);
PPC_FUNC_IMPL(__imp__sub_82F2DA90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2DA94"))) PPC_WEAK_FUNC(sub_82F2DA94);
PPC_FUNC_IMPL(__imp__sub_82F2DA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DA98"))) PPC_WEAK_FUNC(sub_82F2DA98);
PPC_FUNC_IMPL(__imp__sub_82F2DA98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29096
	ctx.r3.s64 = r11.s64 + -29096;
}

__attribute__((alias("__imp__sub_82F2DAA0"))) PPC_WEAK_FUNC(sub_82F2DAA0);
PPC_FUNC_IMPL(__imp__sub_82F2DAA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2DAA4"))) PPC_WEAK_FUNC(sub_82F2DAA4);
PPC_FUNC_IMPL(__imp__sub_82F2DAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DAA8"))) PPC_WEAK_FUNC(sub_82F2DAA8);
PPC_FUNC_IMPL(__imp__sub_82F2DAA8) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r11,28472(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28472, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2DAD0"))) PPC_WEAK_FUNC(sub_82F2DAD0);
PPC_FUNC_IMPL(__imp__sub_82F2DAD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DAD4"))) PPC_WEAK_FUNC(sub_82F2DAD4);
PPC_FUNC_IMPL(__imp__sub_82F2DAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DAD8"))) PPC_WEAK_FUNC(sub_82F2DAD8);
PPC_FUNC_IMPL(__imp__sub_82F2DAD8) {
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
	// addi r3,r10,1068
	ctx.r3.s64 = ctx.r10.s64 + 1068;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28476(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28476, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2DB10"))) PPC_WEAK_FUNC(sub_82F2DB10);
PPC_FUNC_IMPL(__imp__sub_82F2DB10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DB14"))) PPC_WEAK_FUNC(sub_82F2DB14);
PPC_FUNC_IMPL(__imp__sub_82F2DB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DB18"))) PPC_WEAK_FUNC(sub_82F2DB18);
PPC_FUNC_IMPL(__imp__sub_82F2DB18) {
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
	// stw r3,28484(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28484, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2DB44"))) PPC_WEAK_FUNC(sub_82F2DB44);
PPC_FUNC_IMPL(__imp__sub_82F2DB44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DB48"))) PPC_WEAK_FUNC(sub_82F2DB48);
PPC_FUNC_IMPL(__imp__sub_82F2DB48) {
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
	// addi r3,r7,28488
	ctx.r3.s64 = ctx.r7.s64 + 28488;
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
	// addi r3,r6,-29088
	ctx.r3.s64 = ctx.r6.s64 + -29088;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2DBC0"))) PPC_WEAK_FUNC(sub_82F2DBC0);
PPC_FUNC_IMPL(__imp__sub_82F2DBC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DBC4"))) PPC_WEAK_FUNC(sub_82F2DBC4);
PPC_FUNC_IMPL(__imp__sub_82F2DBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DBC8"))) PPC_WEAK_FUNC(sub_82F2DBC8);
PPC_FUNC_IMPL(__imp__sub_82F2DBC8) {
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
	// addi r3,r10,108
	ctx.r3.s64 = ctx.r10.s64 + 108;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28480(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28480, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2DC00"))) PPC_WEAK_FUNC(sub_82F2DC00);
PPC_FUNC_IMPL(__imp__sub_82F2DC00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DC04"))) PPC_WEAK_FUNC(sub_82F2DC04);
PPC_FUNC_IMPL(__imp__sub_82F2DC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DC08"))) PPC_WEAK_FUNC(sub_82F2DC08);
PPC_FUNC_IMPL(__imp__sub_82F2DC08) {
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
	// addi r3,r10,356
	ctx.r3.s64 = ctx.r10.s64 + 356;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28520(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28520, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2DC40"))) PPC_WEAK_FUNC(sub_82F2DC40);
PPC_FUNC_IMPL(__imp__sub_82F2DC40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DC44"))) PPC_WEAK_FUNC(sub_82F2DC44);
PPC_FUNC_IMPL(__imp__sub_82F2DC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DC48"))) PPC_WEAK_FUNC(sub_82F2DC48);
PPC_FUNC_IMPL(__imp__sub_82F2DC48) {
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
	// addi r3,r10,404
	ctx.r3.s64 = ctx.r10.s64 + 404;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28532(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28532, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2DC80"))) PPC_WEAK_FUNC(sub_82F2DC80);
PPC_FUNC_IMPL(__imp__sub_82F2DC80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DC84"))) PPC_WEAK_FUNC(sub_82F2DC84);
PPC_FUNC_IMPL(__imp__sub_82F2DC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DC88"))) PPC_WEAK_FUNC(sub_82F2DC88);
PPC_FUNC_IMPL(__imp__sub_82F2DC88) {
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
	// addi r3,r10,-17056
	ctx.r3.s64 = ctx.r10.s64 + -17056;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28528(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28528, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2DCC0"))) PPC_WEAK_FUNC(sub_82F2DCC0);
PPC_FUNC_IMPL(__imp__sub_82F2DCC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DCC4"))) PPC_WEAK_FUNC(sub_82F2DCC4);
PPC_FUNC_IMPL(__imp__sub_82F2DCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DCC8"))) PPC_WEAK_FUNC(sub_82F2DCC8);
PPC_FUNC_IMPL(__imp__sub_82F2DCC8) {
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
	// addi r3,r10,-16984
	ctx.r3.s64 = ctx.r10.s64 + -16984;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28524(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28524, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2DD00"))) PPC_WEAK_FUNC(sub_82F2DD00);
PPC_FUNC_IMPL(__imp__sub_82F2DD00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DD04"))) PPC_WEAK_FUNC(sub_82F2DD04);
PPC_FUNC_IMPL(__imp__sub_82F2DD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DD08"))) PPC_WEAK_FUNC(sub_82F2DD08);
PPC_FUNC_IMPL(__imp__sub_82F2DD08) {
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
	// addi r3,r11,-19628
	ctx.r3.s64 = r11.s64 + -19628;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,28540(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28540, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2DD34"))) PPC_WEAK_FUNC(sub_82F2DD34);
PPC_FUNC_IMPL(__imp__sub_82F2DD34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DD38"))) PPC_WEAK_FUNC(sub_82F2DD38);
PPC_FUNC_IMPL(__imp__sub_82F2DD38) {
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
	// addi r3,r10,-432
	ctx.r3.s64 = ctx.r10.s64 + -432;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28536(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28536, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2DD70"))) PPC_WEAK_FUNC(sub_82F2DD70);
PPC_FUNC_IMPL(__imp__sub_82F2DD70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DD74"))) PPC_WEAK_FUNC(sub_82F2DD74);
PPC_FUNC_IMPL(__imp__sub_82F2DD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DD78"))) PPC_WEAK_FUNC(sub_82F2DD78);
PPC_FUNC_IMPL(__imp__sub_82F2DD78) {
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
	// addi r3,r11,-19140
	ctx.r3.s64 = r11.s64 + -19140;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,28548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28548, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2DDA4"))) PPC_WEAK_FUNC(sub_82F2DDA4);
PPC_FUNC_IMPL(__imp__sub_82F2DDA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DDA8"))) PPC_WEAK_FUNC(sub_82F2DDA8);
PPC_FUNC_IMPL(__imp__sub_82F2DDA8) {
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
	// addi r3,r10,-388
	ctx.r3.s64 = ctx.r10.s64 + -388;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28544(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28544, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2DDE0"))) PPC_WEAK_FUNC(sub_82F2DDE0);
PPC_FUNC_IMPL(__imp__sub_82F2DDE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DDE4"))) PPC_WEAK_FUNC(sub_82F2DDE4);
PPC_FUNC_IMPL(__imp__sub_82F2DDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DDE8"))) PPC_WEAK_FUNC(sub_82F2DDE8);
PPC_FUNC_IMPL(__imp__sub_82F2DDE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29080
	ctx.r3.s64 = r11.s64 + -29080;
}

__attribute__((alias("__imp__sub_82F2DDF0"))) PPC_WEAK_FUNC(sub_82F2DDF0);
PPC_FUNC_IMPL(__imp__sub_82F2DDF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2DDF4"))) PPC_WEAK_FUNC(sub_82F2DDF4);
PPC_FUNC_IMPL(__imp__sub_82F2DDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DDF8"))) PPC_WEAK_FUNC(sub_82F2DDF8);
PPC_FUNC_IMPL(__imp__sub_82F2DDF8) {
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
	// stw r3,28568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28568, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2DE24"))) PPC_WEAK_FUNC(sub_82F2DE24);
PPC_FUNC_IMPL(__imp__sub_82F2DE24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DE28"))) PPC_WEAK_FUNC(sub_82F2DE28);
PPC_FUNC_IMPL(__imp__sub_82F2DE28) {
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
	// addi r3,r7,28572
	ctx.r3.s64 = ctx.r7.s64 + 28572;
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
	// addi r3,r6,-29072
	ctx.r3.s64 = ctx.r6.s64 + -29072;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2DEA0"))) PPC_WEAK_FUNC(sub_82F2DEA0);
PPC_FUNC_IMPL(__imp__sub_82F2DEA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DEA4"))) PPC_WEAK_FUNC(sub_82F2DEA4);
PPC_FUNC_IMPL(__imp__sub_82F2DEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DEA8"))) PPC_WEAK_FUNC(sub_82F2DEA8);
PPC_FUNC_IMPL(__imp__sub_82F2DEA8) {
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
	// stw r11,28604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28604, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2DED0"))) PPC_WEAK_FUNC(sub_82F2DED0);
PPC_FUNC_IMPL(__imp__sub_82F2DED0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DED4"))) PPC_WEAK_FUNC(sub_82F2DED4);
PPC_FUNC_IMPL(__imp__sub_82F2DED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DED8"))) PPC_WEAK_FUNC(sub_82F2DED8);
PPC_FUNC_IMPL(__imp__sub_82F2DED8) {
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
	// addi r3,r10,252
	ctx.r3.s64 = ctx.r10.s64 + 252;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28608(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28608, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2DF10"))) PPC_WEAK_FUNC(sub_82F2DF10);
PPC_FUNC_IMPL(__imp__sub_82F2DF10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DF14"))) PPC_WEAK_FUNC(sub_82F2DF14);
PPC_FUNC_IMPL(__imp__sub_82F2DF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DF18"))) PPC_WEAK_FUNC(sub_82F2DF18);
PPC_FUNC_IMPL(__imp__sub_82F2DF18) {
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
	// addi r3,r10,304
	ctx.r3.s64 = ctx.r10.s64 + 304;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28612(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28612, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2DF50"))) PPC_WEAK_FUNC(sub_82F2DF50);
PPC_FUNC_IMPL(__imp__sub_82F2DF50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DF54"))) PPC_WEAK_FUNC(sub_82F2DF54);
PPC_FUNC_IMPL(__imp__sub_82F2DF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DF58"))) PPC_WEAK_FUNC(sub_82F2DF58);
PPC_FUNC_IMPL(__imp__sub_82F2DF58) {
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
	// addi r3,r10,2816
	ctx.r3.s64 = ctx.r10.s64 + 2816;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28616(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28616, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2DF90"))) PPC_WEAK_FUNC(sub_82F2DF90);
PPC_FUNC_IMPL(__imp__sub_82F2DF90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DF94"))) PPC_WEAK_FUNC(sub_82F2DF94);
PPC_FUNC_IMPL(__imp__sub_82F2DF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DF98"))) PPC_WEAK_FUNC(sub_82F2DF98);
PPC_FUNC_IMPL(__imp__sub_82F2DF98) {
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
	// addi r3,r10,2492
	ctx.r3.s64 = ctx.r10.s64 + 2492;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28620(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28620, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2DFD0"))) PPC_WEAK_FUNC(sub_82F2DFD0);
PPC_FUNC_IMPL(__imp__sub_82F2DFD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DFD4"))) PPC_WEAK_FUNC(sub_82F2DFD4);
PPC_FUNC_IMPL(__imp__sub_82F2DFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DFD8"))) PPC_WEAK_FUNC(sub_82F2DFD8);
PPC_FUNC_IMPL(__imp__sub_82F2DFD8) {
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
	// addi r3,r10,2608
	ctx.r3.s64 = ctx.r10.s64 + 2608;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28624(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28624, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E010"))) PPC_WEAK_FUNC(sub_82F2E010);
PPC_FUNC_IMPL(__imp__sub_82F2E010) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E014"))) PPC_WEAK_FUNC(sub_82F2E014);
PPC_FUNC_IMPL(__imp__sub_82F2E014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E018"))) PPC_WEAK_FUNC(sub_82F2E018);
PPC_FUNC_IMPL(__imp__sub_82F2E018) {
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
	// addi r3,r10,2968
	ctx.r3.s64 = ctx.r10.s64 + 2968;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28628(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28628, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E050"))) PPC_WEAK_FUNC(sub_82F2E050);
PPC_FUNC_IMPL(__imp__sub_82F2E050) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E054"))) PPC_WEAK_FUNC(sub_82F2E054);
PPC_FUNC_IMPL(__imp__sub_82F2E054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E058"))) PPC_WEAK_FUNC(sub_82F2E058);
PPC_FUNC_IMPL(__imp__sub_82F2E058) {
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
	// addi r3,r10,2548
	ctx.r3.s64 = ctx.r10.s64 + 2548;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28632(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28632, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E090"))) PPC_WEAK_FUNC(sub_82F2E090);
PPC_FUNC_IMPL(__imp__sub_82F2E090) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E094"))) PPC_WEAK_FUNC(sub_82F2E094);
PPC_FUNC_IMPL(__imp__sub_82F2E094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E098"))) PPC_WEAK_FUNC(sub_82F2E098);
PPC_FUNC_IMPL(__imp__sub_82F2E098) {
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
	// addi r3,r10,2664
	ctx.r3.s64 = ctx.r10.s64 + 2664;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28636(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28636, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E0D0"))) PPC_WEAK_FUNC(sub_82F2E0D0);
PPC_FUNC_IMPL(__imp__sub_82F2E0D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E0D4"))) PPC_WEAK_FUNC(sub_82F2E0D4);
PPC_FUNC_IMPL(__imp__sub_82F2E0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E0D8"))) PPC_WEAK_FUNC(sub_82F2E0D8);
PPC_FUNC_IMPL(__imp__sub_82F2E0D8) {
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
	// addi r3,r10,2864
	ctx.r3.s64 = ctx.r10.s64 + 2864;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28640(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28640, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E110"))) PPC_WEAK_FUNC(sub_82F2E110);
PPC_FUNC_IMPL(__imp__sub_82F2E110) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E114"))) PPC_WEAK_FUNC(sub_82F2E114);
PPC_FUNC_IMPL(__imp__sub_82F2E114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E118"))) PPC_WEAK_FUNC(sub_82F2E118);
PPC_FUNC_IMPL(__imp__sub_82F2E118) {
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
	// addi r3,r10,2916
	ctx.r3.s64 = ctx.r10.s64 + 2916;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28644(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28644, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E150"))) PPC_WEAK_FUNC(sub_82F2E150);
PPC_FUNC_IMPL(__imp__sub_82F2E150) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E154"))) PPC_WEAK_FUNC(sub_82F2E154);
PPC_FUNC_IMPL(__imp__sub_82F2E154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E158"))) PPC_WEAK_FUNC(sub_82F2E158);
PPC_FUNC_IMPL(__imp__sub_82F2E158) {
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
	// addi r3,r10,2724
	ctx.r3.s64 = ctx.r10.s64 + 2724;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28656(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28656, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E190"))) PPC_WEAK_FUNC(sub_82F2E190);
PPC_FUNC_IMPL(__imp__sub_82F2E190) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E194"))) PPC_WEAK_FUNC(sub_82F2E194);
PPC_FUNC_IMPL(__imp__sub_82F2E194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E198"))) PPC_WEAK_FUNC(sub_82F2E198);
PPC_FUNC_IMPL(__imp__sub_82F2E198) {
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
	// addi r3,r10,-14944
	ctx.r3.s64 = ctx.r10.s64 + -14944;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28652(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28652, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E1D0"))) PPC_WEAK_FUNC(sub_82F2E1D0);
PPC_FUNC_IMPL(__imp__sub_82F2E1D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E1D4"))) PPC_WEAK_FUNC(sub_82F2E1D4);
PPC_FUNC_IMPL(__imp__sub_82F2E1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E1D8"))) PPC_WEAK_FUNC(sub_82F2E1D8);
PPC_FUNC_IMPL(__imp__sub_82F2E1D8) {
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
	// addi r3,r10,-14864
	ctx.r3.s64 = ctx.r10.s64 + -14864;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28648(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28648, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E210"))) PPC_WEAK_FUNC(sub_82F2E210);
PPC_FUNC_IMPL(__imp__sub_82F2E210) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E214"))) PPC_WEAK_FUNC(sub_82F2E214);
PPC_FUNC_IMPL(__imp__sub_82F2E214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E218"))) PPC_WEAK_FUNC(sub_82F2E218);
PPC_FUNC_IMPL(__imp__sub_82F2E218) {
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
	// addi r3,r10,2768
	ctx.r3.s64 = ctx.r10.s64 + 2768;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28660(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28660, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E250"))) PPC_WEAK_FUNC(sub_82F2E250);
PPC_FUNC_IMPL(__imp__sub_82F2E250) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E254"))) PPC_WEAK_FUNC(sub_82F2E254);
PPC_FUNC_IMPL(__imp__sub_82F2E254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E258"))) PPC_WEAK_FUNC(sub_82F2E258);
PPC_FUNC_IMPL(__imp__sub_82F2E258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29064
	ctx.r3.s64 = r11.s64 + -29064;
}

__attribute__((alias("__imp__sub_82F2E260"))) PPC_WEAK_FUNC(sub_82F2E260);
PPC_FUNC_IMPL(__imp__sub_82F2E260) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E264"))) PPC_WEAK_FUNC(sub_82F2E264);
PPC_FUNC_IMPL(__imp__sub_82F2E264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E268"))) PPC_WEAK_FUNC(sub_82F2E268);
PPC_FUNC_IMPL(__imp__sub_82F2E268) {
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
	// stw r3,28680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28680, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E294"))) PPC_WEAK_FUNC(sub_82F2E294);
PPC_FUNC_IMPL(__imp__sub_82F2E294) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E298"))) PPC_WEAK_FUNC(sub_82F2E298);
PPC_FUNC_IMPL(__imp__sub_82F2E298) {
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
	// addi r3,r7,28684
	ctx.r3.s64 = ctx.r7.s64 + 28684;
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
	// addi r3,r6,-29056
	ctx.r3.s64 = ctx.r6.s64 + -29056;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E310"))) PPC_WEAK_FUNC(sub_82F2E310);
PPC_FUNC_IMPL(__imp__sub_82F2E310) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E314"))) PPC_WEAK_FUNC(sub_82F2E314);
PPC_FUNC_IMPL(__imp__sub_82F2E314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E318"))) PPC_WEAK_FUNC(sub_82F2E318);
PPC_FUNC_IMPL(__imp__sub_82F2E318) {
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
	// addi r3,r10,-256
	ctx.r3.s64 = ctx.r10.s64 + -256;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28716(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28716, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E350"))) PPC_WEAK_FUNC(sub_82F2E350);
PPC_FUNC_IMPL(__imp__sub_82F2E350) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

