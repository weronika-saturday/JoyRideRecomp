#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83142308"))) PPC_WEAK_FUNC(sub_83142308);
PPC_FUNC_IMPL(__imp__sub_83142308) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314230C"))) PPC_WEAK_FUNC(sub_8314230C);
PPC_FUNC_IMPL(__imp__sub_8314230C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83142310"))) PPC_WEAK_FUNC(sub_83142310);
PPC_FUNC_IMPL(__imp__sub_83142310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-8988
	ctx.r5.s64 = ctx.r10.s64 + -8988;
	// addi r4,r9,13360
	ctx.r4.s64 = ctx.r9.s64 + 13360;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,-596
	ctx.r3.s64 = ctx.r8.s64 + -596;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83142374"))) PPC_WEAK_FUNC(sub_83142374);
PPC_FUNC_IMPL(__imp__sub_83142374) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142378"))) PPC_WEAK_FUNC(sub_83142378);
PPC_FUNC_IMPL(__imp__sub_83142378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r10,-22776
	ctx.r9.s64 = ctx.r10.s64 + -22776;
	// lwz r11,-22800(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22800);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142390"))) PPC_WEAK_FUNC(sub_83142390);
PPC_FUNC_IMPL(__imp__sub_83142390) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// addi r5,r10,-22776
	ctx.r5.s64 = ctx.r10.s64 + -22776;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-3396
	ctx.r5.s64 = ctx.r8.s64 + -3396;
	// addi r4,r7,13152
	ctx.r4.s64 = ctx.r7.s64 + 13152;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-548
	ctx.r3.s64 = ctx.r6.s64 + -548;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,5
	r31.s64 = 5;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,-740
	ctx.r9.s64 = ctx.r9.s64 + -740;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,40
	ctx.r6.s64 = 40;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8314240C"))) PPC_WEAK_FUNC(sub_8314240C);
PPC_FUNC_IMPL(__imp__sub_8314240C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142410"))) PPC_WEAK_FUNC(sub_83142410);
PPC_FUNC_IMPL(__imp__sub_83142410) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,-700
	ctx.r6.s64 = ctx.r10.s64 + -700;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-3492
	ctx.r5.s64 = ctx.r9.s64 + -3492;
	// addi r4,r8,13452
	ctx.r4.s64 = ctx.r8.s64 + 13452;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-500
	ctx.r3.s64 = ctx.r7.s64 + -500;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,368
	ctx.r6.s64 = 368;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83142488"))) PPC_WEAK_FUNC(sub_83142488);
PPC_FUNC_IMPL(__imp__sub_83142488) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314248C"))) PPC_WEAK_FUNC(sub_8314248C);
PPC_FUNC_IMPL(__imp__sub_8314248C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83142490"))) PPC_WEAK_FUNC(sub_83142490);
PPC_FUNC_IMPL(__imp__sub_83142490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82caf3f0
	sub_82CAF3F0(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,-452
	ctx.r8.s64 = ctx.r9.s64 + -452;
	// addi r11,r11,13452
	r11.s64 = r11.s64 + 13452;
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// stw r11,-452(r9)
	PPC_STORE_U32(ctx.r9.u32 + -452, r11.u32);
	// lis r9,-32053
	ctx.r9.s64 = -2100625408;
	// addi r10,r10,-3152
	ctx.r10.s64 = ctx.r10.s64 + -3152;
	// addi r9,r9,-3192
	ctx.r9.s64 = ctx.r9.s64 + -3192;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_831424E8"))) PPC_WEAK_FUNC(sub_831424E8);
PPC_FUNC_IMPL(__imp__sub_831424E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831424EC"))) PPC_WEAK_FUNC(sub_831424EC);
PPC_FUNC_IMPL(__imp__sub_831424EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831424F0"))) PPC_WEAK_FUNC(sub_831424F0);
PPC_FUNC_IMPL(__imp__sub_831424F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-8988
	ctx.r5.s64 = ctx.r10.s64 + -8988;
	// addi r4,r9,13344
	ctx.r4.s64 = ctx.r9.s64 + 13344;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,-436
	ctx.r3.s64 = ctx.r8.s64 + -436;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83142554"))) PPC_WEAK_FUNC(sub_83142554);
PPC_FUNC_IMPL(__imp__sub_83142554) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142558"))) PPC_WEAK_FUNC(sub_83142558);
PPC_FUNC_IMPL(__imp__sub_83142558) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,-648
	ctx.r6.s64 = ctx.r10.s64 + -648;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-10972
	ctx.r5.s64 = ctx.r9.s64 + -10972;
	// addi r4,r8,13436
	ctx.r4.s64 = ctx.r8.s64 + 13436;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-388
	ctx.r3.s64 = ctx.r7.s64 + -388;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,3
	r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,224
	ctx.r6.s64 = 224;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_831425D0"))) PPC_WEAK_FUNC(sub_831425D0);
PPC_FUNC_IMPL(__imp__sub_831425D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831425D4"))) PPC_WEAK_FUNC(sub_831425D4);
PPC_FUNC_IMPL(__imp__sub_831425D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831425D8"))) PPC_WEAK_FUNC(sub_831425D8);
PPC_FUNC_IMPL(__imp__sub_831425D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82caf540
	sub_82CAF540(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,-340
	ctx.r8.s64 = ctx.r9.s64 + -340;
	// addi r11,r11,13436
	r11.s64 = r11.s64 + 13436;
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// stw r11,-340(r9)
	PPC_STORE_U32(ctx.r9.u32 + -340, r11.u32);
	// lis r9,-32053
	ctx.r9.s64 = -2100625408;
	// addi r10,r10,-2816
	ctx.r10.s64 = ctx.r10.s64 + -2816;
	// addi r9,r9,-2856
	ctx.r9.s64 = ctx.r9.s64 + -2856;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83142630"))) PPC_WEAK_FUNC(sub_83142630);
PPC_FUNC_IMPL(__imp__sub_83142630) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142634"))) PPC_WEAK_FUNC(sub_83142634);
PPC_FUNC_IMPL(__imp__sub_83142634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83142638"))) PPC_WEAK_FUNC(sub_83142638);
PPC_FUNC_IMPL(__imp__sub_83142638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-204
	ctx.r7.s64 = ctx.r10.s64 + -204;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,14260
	ctx.r4.s64 = ctx.r9.s64 + 14260;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-324
	ctx.r3.s64 = ctx.r8.s64 + -324;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_831426A4"))) PPC_WEAK_FUNC(sub_831426A4);
PPC_FUNC_IMPL(__imp__sub_831426A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831426A8"))) PPC_WEAK_FUNC(sub_831426A8);
PPC_FUNC_IMPL(__imp__sub_831426A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-120
	ctx.r7.s64 = ctx.r10.s64 + -120;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,14292
	ctx.r4.s64 = ctx.r9.s64 + 14292;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-276
	ctx.r3.s64 = ctx.r8.s64 + -276;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83142714"))) PPC_WEAK_FUNC(sub_83142714);
PPC_FUNC_IMPL(__imp__sub_83142714) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142718"))) PPC_WEAK_FUNC(sub_83142718);
PPC_FUNC_IMPL(__imp__sub_83142718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r10,-22296
	ctx.r9.s64 = ctx.r10.s64 + -22296;
	// lwz r11,-22352(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22352);
	// stw r11,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142730"))) PPC_WEAK_FUNC(sub_83142730);
PPC_FUNC_IMPL(__imp__sub_83142730) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// addi r5,r10,-22296
	ctx.r5.s64 = ctx.r10.s64 + -22296;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,14312
	ctx.r4.s64 = ctx.r7.s64 + 14312;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-228
	ctx.r3.s64 = ctx.r6.s64 + -228;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,3
	r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,-140
	ctx.r9.s64 = ctx.r9.s64 + -140;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_831427AC"))) PPC_WEAK_FUNC(sub_831427AC);
PPC_FUNC_IMPL(__imp__sub_831427AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831427B0"))) PPC_WEAK_FUNC(sub_831427B0);
PPC_FUNC_IMPL(__imp__sub_831427B0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,-80
	ctx.r6.s64 = ctx.r10.s64 + -80;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-12796
	ctx.r5.s64 = ctx.r9.s64 + -12796;
	// addi r4,r8,14232
	ctx.r4.s64 = ctx.r8.s64 + 14232;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-180
	ctx.r3.s64 = ctx.r7.s64 + -180;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,3
	r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,44
	ctx.r6.s64 = 44;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83142828"))) PPC_WEAK_FUNC(sub_83142828);
PPC_FUNC_IMPL(__imp__sub_83142828) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314282C"))) PPC_WEAK_FUNC(sub_8314282C);
PPC_FUNC_IMPL(__imp__sub_8314282C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83142830"))) PPC_WEAK_FUNC(sub_83142830);
PPC_FUNC_IMPL(__imp__sub_83142830) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,1360
	ctx.r6.s64 = ctx.r10.s64 + 1360;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-12796
	ctx.r5.s64 = ctx.r9.s64 + -12796;
	// addi r4,r8,14968
	ctx.r4.s64 = ctx.r8.s64 + 14968;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-124
	ctx.r3.s64 = ctx.r7.s64 + -124;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_831428A8"))) PPC_WEAK_FUNC(sub_831428A8);
PPC_FUNC_IMPL(__imp__sub_831428A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831428AC"))) PPC_WEAK_FUNC(sub_831428AC);
PPC_FUNC_IMPL(__imp__sub_831428AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831428B0"))) PPC_WEAK_FUNC(sub_831428B0);
PPC_FUNC_IMPL(__imp__sub_831428B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,1440
	ctx.r7.s64 = ctx.r10.s64 + 1440;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,14688
	ctx.r4.s64 = ctx.r9.s64 + 14688;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-12
	ctx.r3.s64 = ctx.r8.s64 + -12;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8314291C"))) PPC_WEAK_FUNC(sub_8314291C);
PPC_FUNC_IMPL(__imp__sub_8314291C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142920"))) PPC_WEAK_FUNC(sub_83142920);
PPC_FUNC_IMPL(__imp__sub_83142920) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,1488
	ctx.r6.s64 = ctx.r10.s64 + 1488;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-12
	ctx.r5.s64 = ctx.r9.s64 + -12;
	// addi r4,r8,14716
	ctx.r4.s64 = ctx.r8.s64 + 14716;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-76
	ctx.r3.s64 = ctx.r7.s64 + -76;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83142998"))) PPC_WEAK_FUNC(sub_83142998);
PPC_FUNC_IMPL(__imp__sub_83142998) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314299C"))) PPC_WEAK_FUNC(sub_8314299C);
PPC_FUNC_IMPL(__imp__sub_8314299C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831429A0"))) PPC_WEAK_FUNC(sub_831429A0);
PPC_FUNC_IMPL(__imp__sub_831429A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r10,-21840
	ctx.r9.s64 = ctx.r10.s64 + -21840;
	// lwz r11,-21876(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -21876);
	// stw r11,128(r9)
	PPC_STORE_U32(ctx.r9.u32 + 128, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831429B8"))) PPC_WEAK_FUNC(sub_831429B8);
PPC_FUNC_IMPL(__imp__sub_831429B8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// addi r5,r10,-21840
	ctx.r5.s64 = ctx.r10.s64 + -21840;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,14848
	ctx.r4.s64 = ctx.r7.s64 + 14848;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,36
	ctx.r3.s64 = ctx.r6.s64 + 36;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,14
	r31.s64 = 14;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,1616
	ctx.r9.s64 = ctx.r9.s64 + 1616;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83142A34"))) PPC_WEAK_FUNC(sub_83142A34);
PPC_FUNC_IMPL(__imp__sub_83142A34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142A38"))) PPC_WEAK_FUNC(sub_83142A38);
PPC_FUNC_IMPL(__imp__sub_83142A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,1640
	ctx.r10.s64 = r11.s64 + 1640;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82658518
	sub_82658518(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,-28
	ctx.r8.s64 = ctx.r9.s64 + -28;
	// addi r11,r11,14848
	r11.s64 = r11.s64 + 14848;
	// lis r10,-32051
	ctx.r10.s64 = -2100494336;
	// stw r11,-28(r9)
	PPC_STORE_U32(ctx.r9.u32 + -28, r11.u32);
	// lis r9,-32051
	ctx.r9.s64 = -2100494336;
	// addi r10,r10,25936
	ctx.r10.s64 = ctx.r10.s64 + 25936;
	// addi r9,r9,25864
	ctx.r9.s64 = ctx.r9.s64 + 25864;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83142A9C"))) PPC_WEAK_FUNC(sub_83142A9C);
PPC_FUNC_IMPL(__imp__sub_83142A9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142AA0"))) PPC_WEAK_FUNC(sub_83142AA0);
PPC_FUNC_IMPL(__imp__sub_83142AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,1696
	ctx.r7.s64 = ctx.r10.s64 + 1696;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,15044
	ctx.r4.s64 = ctx.r9.s64 + 15044;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,132
	ctx.r3.s64 = ctx.r8.s64 + 132;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83142B0C"))) PPC_WEAK_FUNC(sub_83142B0C);
PPC_FUNC_IMPL(__imp__sub_83142B0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142B10"))) PPC_WEAK_FUNC(sub_83142B10);
PPC_FUNC_IMPL(__imp__sub_83142B10) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,1744
	ctx.r6.s64 = ctx.r10.s64 + 1744;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-12796
	ctx.r5.s64 = ctx.r9.s64 + -12796;
	// addi r4,r8,15100
	ctx.r4.s64 = ctx.r8.s64 + 15100;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,84
	ctx.r3.s64 = ctx.r7.s64 + 84;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,1
	r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83142B88"))) PPC_WEAK_FUNC(sub_83142B88);
PPC_FUNC_IMPL(__imp__sub_83142B88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142B8C"))) PPC_WEAK_FUNC(sub_83142B8C);
PPC_FUNC_IMPL(__imp__sub_83142B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83142B90"))) PPC_WEAK_FUNC(sub_83142B90);
PPC_FUNC_IMPL(__imp__sub_83142B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,1824
	ctx.r7.s64 = ctx.r10.s64 + 1824;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,14496
	ctx.r4.s64 = ctx.r9.s64 + 14496;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,276
	ctx.r3.s64 = ctx.r8.s64 + 276;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83142BFC"))) PPC_WEAK_FUNC(sub_83142BFC);
PPC_FUNC_IMPL(__imp__sub_83142BFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142C00"))) PPC_WEAK_FUNC(sub_83142C00);
PPC_FUNC_IMPL(__imp__sub_83142C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,1872
	ctx.r7.s64 = ctx.r10.s64 + 1872;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,14524
	ctx.r4.s64 = ctx.r9.s64 + 14524;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,228
	ctx.r3.s64 = ctx.r8.s64 + 228;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83142C6C"))) PPC_WEAK_FUNC(sub_83142C6C);
PPC_FUNC_IMPL(__imp__sub_83142C6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142C70"))) PPC_WEAK_FUNC(sub_83142C70);
PPC_FUNC_IMPL(__imp__sub_83142C70) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,1944
	ctx.r6.s64 = ctx.r10.s64 + 1944;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-12796
	ctx.r5.s64 = ctx.r9.s64 + -12796;
	// addi r4,r8,14556
	ctx.r4.s64 = ctx.r8.s64 + 14556;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,180
	ctx.r3.s64 = ctx.r7.s64 + 180;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,3
	r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,44
	ctx.r6.s64 = 44;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83142CE8"))) PPC_WEAK_FUNC(sub_83142CE8);
PPC_FUNC_IMPL(__imp__sub_83142CE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142CEC"))) PPC_WEAK_FUNC(sub_83142CEC);
PPC_FUNC_IMPL(__imp__sub_83142CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83142CF0"))) PPC_WEAK_FUNC(sub_83142CF0);
PPC_FUNC_IMPL(__imp__sub_83142CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,2064
	ctx.r7.s64 = ctx.r10.s64 + 2064;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,14636
	ctx.r4.s64 = ctx.r9.s64 + 14636;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,324
	ctx.r3.s64 = ctx.r8.s64 + 324;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83142D5C"))) PPC_WEAK_FUNC(sub_83142D5C);
PPC_FUNC_IMPL(__imp__sub_83142D5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142D60"))) PPC_WEAK_FUNC(sub_83142D60);
PPC_FUNC_IMPL(__imp__sub_83142D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r11,r11,2192
	r11.s64 = r11.s64 + 2192;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// addi r7,r11,456
	ctx.r7.s64 = r11.s64 + 456;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,19
	ctx.r6.s64 = 19;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r4,r9,14444
	ctx.r4.s64 = ctx.r9.s64 + 14444;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,372
	ctx.r3.s64 = ctx.r8.s64 + 372;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83142DCC"))) PPC_WEAK_FUNC(sub_83142DCC);
PPC_FUNC_IMPL(__imp__sub_83142DCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142DD0"))) PPC_WEAK_FUNC(sub_83142DD0);
PPC_FUNC_IMPL(__imp__sub_83142DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r11,r11,3040
	r11.s64 = r11.s64 + 3040;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r11,192
	ctx.r6.s64 = r11.s64 + 192;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,-3588
	ctx.r5.s64 = ctx.r9.s64 + -3588;
	// addi r4,r8,14428
	ctx.r4.s64 = ctx.r8.s64 + 14428;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r7,436
	ctx.r3.s64 = ctx.r7.s64 + 436;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83142E40"))) PPC_WEAK_FUNC(sub_83142E40);
PPC_FUNC_IMPL(__imp__sub_83142E40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142E44"))) PPC_WEAK_FUNC(sub_83142E44);
PPC_FUNC_IMPL(__imp__sub_83142E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83142E48"))) PPC_WEAK_FUNC(sub_83142E48);
PPC_FUNC_IMPL(__imp__sub_83142E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-5968
	ctx.r10.s64 = r11.s64 + -5968;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,14428
	r11.s64 = r11.s64 + 14428;
	// addi r6,r9,420
	ctx.r6.s64 = ctx.r9.s64 + 420;
	// lis r8,-32051
	ctx.r8.s64 = -2100494336;
	// stw r11,420(r9)
	PPC_STORE_U32(ctx.r9.u32 + 420, r11.u32);
	// lis r7,-32051
	ctx.r7.s64 = -2100494336;
	// addi r9,r10,-29804
	ctx.r9.s64 = ctx.r10.s64 + -29804;
	// addi r10,r8,26632
	ctx.r10.s64 = ctx.r8.s64 + 26632;
	// addi r11,r7,26712
	r11.s64 = ctx.r7.s64 + 26712;
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83142EB0"))) PPC_WEAK_FUNC(sub_83142EB0);
PPC_FUNC_IMPL(__imp__sub_83142EB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142EB4"))) PPC_WEAK_FUNC(sub_83142EB4);
PPC_FUNC_IMPL(__imp__sub_83142EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83142EB8"))) PPC_WEAK_FUNC(sub_83142EB8);
PPC_FUNC_IMPL(__imp__sub_83142EB8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,3360
	ctx.r6.s64 = ctx.r10.s64 + 3360;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-12796
	ctx.r5.s64 = ctx.r9.s64 + -12796;
	// addi r4,r8,15012
	ctx.r4.s64 = ctx.r8.s64 + 15012;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,484
	ctx.r3.s64 = ctx.r7.s64 + 484;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,1
	r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83142F30"))) PPC_WEAK_FUNC(sub_83142F30);
PPC_FUNC_IMPL(__imp__sub_83142F30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142F34"))) PPC_WEAK_FUNC(sub_83142F34);
PPC_FUNC_IMPL(__imp__sub_83142F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83142F38"))) PPC_WEAK_FUNC(sub_83142F38);
PPC_FUNC_IMPL(__imp__sub_83142F38) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,3440
	ctx.r6.s64 = ctx.r10.s64 + 3440;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-12796
	ctx.r5.s64 = ctx.r9.s64 + -12796;
	// addi r4,r8,14984
	ctx.r4.s64 = ctx.r8.s64 + 14984;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,532
	ctx.r3.s64 = ctx.r7.s64 + 532;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,1
	r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83142FB0"))) PPC_WEAK_FUNC(sub_83142FB0);
PPC_FUNC_IMPL(__imp__sub_83142FB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142FB4"))) PPC_WEAK_FUNC(sub_83142FB4);
PPC_FUNC_IMPL(__imp__sub_83142FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83142FB8"))) PPC_WEAK_FUNC(sub_83142FB8);
PPC_FUNC_IMPL(__imp__sub_83142FB8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,3520
	ctx.r6.s64 = ctx.r10.s64 + 3520;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-3540
	ctx.r5.s64 = ctx.r9.s64 + -3540;
	// addi r4,r8,14408
	ctx.r4.s64 = ctx.r8.s64 + 14408;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,596
	ctx.r3.s64 = ctx.r7.s64 + 596;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,4
	r31.s64 = 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83143030"))) PPC_WEAK_FUNC(sub_83143030);
PPC_FUNC_IMPL(__imp__sub_83143030) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143034"))) PPC_WEAK_FUNC(sub_83143034);
PPC_FUNC_IMPL(__imp__sub_83143034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143038"))) PPC_WEAK_FUNC(sub_83143038);
PPC_FUNC_IMPL(__imp__sub_83143038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-5968
	ctx.r10.s64 = r11.s64 + -5968;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,14408
	r11.s64 = r11.s64 + 14408;
	// addi r6,r9,580
	ctx.r6.s64 = ctx.r9.s64 + 580;
	// lis r8,-32051
	ctx.r8.s64 = -2100494336;
	// stw r11,580(r9)
	PPC_STORE_U32(ctx.r9.u32 + 580, r11.u32);
	// lis r7,-32051
	ctx.r7.s64 = -2100494336;
	// addi r9,r10,3656
	ctx.r9.s64 = ctx.r10.s64 + 3656;
	// addi r10,r8,27272
	ctx.r10.s64 = ctx.r8.s64 + 27272;
	// addi r11,r7,27352
	r11.s64 = ctx.r7.s64 + 27352;
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_831430A0"))) PPC_WEAK_FUNC(sub_831430A0);
PPC_FUNC_IMPL(__imp__sub_831430A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831430A4"))) PPC_WEAK_FUNC(sub_831430A4);
PPC_FUNC_IMPL(__imp__sub_831430A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831430A8"))) PPC_WEAK_FUNC(sub_831430A8);
PPC_FUNC_IMPL(__imp__sub_831430A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r11,r11,3808
	r11.s64 = r11.s64 + 3808;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r11,144
	ctx.r6.s64 = r11.s64 + 144;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,1076
	ctx.r5.s64 = ctx.r9.s64 + 1076;
	// addi r4,r8,15204
	ctx.r4.s64 = ctx.r8.s64 + 15204;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r7,644
	ctx.r3.s64 = ctx.r7.s64 + 644;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83143118"))) PPC_WEAK_FUNC(sub_83143118);
PPC_FUNC_IMPL(__imp__sub_83143118) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314311C"))) PPC_WEAK_FUNC(sub_8314311C);
PPC_FUNC_IMPL(__imp__sub_8314311C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143120"))) PPC_WEAK_FUNC(sub_83143120);
PPC_FUNC_IMPL(__imp__sub_83143120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cdbd88
	sub_82CDBD88(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,692
	ctx.r8.s64 = ctx.r9.s64 + 692;
	// addi r11,r11,15204
	r11.s64 = r11.s64 + 15204;
	// lis r10,-32051
	ctx.r10.s64 = -2100494336;
	// stw r11,692(r9)
	PPC_STORE_U32(ctx.r9.u32 + 692, r11.u32);
	// lis r9,-32051
	ctx.r9.s64 = -2100494336;
	// addi r10,r10,27560
	ctx.r10.s64 = ctx.r10.s64 + 27560;
	// addi r9,r9,27576
	ctx.r9.s64 = ctx.r9.s64 + 27576;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83143178"))) PPC_WEAK_FUNC(sub_83143178);
PPC_FUNC_IMPL(__imp__sub_83143178) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314317C"))) PPC_WEAK_FUNC(sub_8314317C);
PPC_FUNC_IMPL(__imp__sub_8314317C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143180"))) PPC_WEAK_FUNC(sub_83143180);
PPC_FUNC_IMPL(__imp__sub_83143180) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,4064
	ctx.r6.s64 = ctx.r10.s64 + 4064;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-1060
	ctx.r5.s64 = ctx.r9.s64 + -1060;
	// addi r4,r8,14656
	ctx.r4.s64 = ctx.r8.s64 + 14656;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,724
	ctx.r3.s64 = ctx.r7.s64 + 724;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,1
	r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_831431F8"))) PPC_WEAK_FUNC(sub_831431F8);
PPC_FUNC_IMPL(__imp__sub_831431F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831431FC"))) PPC_WEAK_FUNC(sub_831431FC);
PPC_FUNC_IMPL(__imp__sub_831431FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143200"))) PPC_WEAK_FUNC(sub_83143200);
PPC_FUNC_IMPL(__imp__sub_83143200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,18512
	ctx.r10.s64 = r11.s64 + 18512;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,14656
	r11.s64 = r11.s64 + 14656;
	// addi r6,r9,708
	ctx.r6.s64 = ctx.r9.s64 + 708;
	// lis r8,-32051
	ctx.r8.s64 = -2100494336;
	// stw r11,708(r9)
	PPC_STORE_U32(ctx.r9.u32 + 708, r11.u32);
	// lis r7,-32051
	ctx.r7.s64 = -2100494336;
	// addi r9,r10,1204
	ctx.r9.s64 = ctx.r10.s64 + 1204;
	// addi r10,r8,27704
	ctx.r10.s64 = ctx.r8.s64 + 27704;
	// addi r11,r7,27664
	r11.s64 = ctx.r7.s64 + 27664;
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83143268"))) PPC_WEAK_FUNC(sub_83143268);
PPC_FUNC_IMPL(__imp__sub_83143268) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314326C"))) PPC_WEAK_FUNC(sub_8314326C);
PPC_FUNC_IMPL(__imp__sub_8314326C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143270"))) PPC_WEAK_FUNC(sub_83143270);
PPC_FUNC_IMPL(__imp__sub_83143270) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,4128
	ctx.r6.s64 = ctx.r10.s64 + 4128;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-3540
	ctx.r5.s64 = ctx.r9.s64 + -3540;
	// addi r4,r8,14384
	ctx.r4.s64 = ctx.r8.s64 + 14384;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,772
	ctx.r3.s64 = ctx.r7.s64 + 772;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,8
	r31.s64 = 8;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_831432E8"))) PPC_WEAK_FUNC(sub_831432E8);
PPC_FUNC_IMPL(__imp__sub_831432E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831432EC"))) PPC_WEAK_FUNC(sub_831432EC);
PPC_FUNC_IMPL(__imp__sub_831432EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831432F0"))) PPC_WEAK_FUNC(sub_831432F0);
PPC_FUNC_IMPL(__imp__sub_831432F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-5968
	ctx.r10.s64 = r11.s64 + -5968;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,14384
	r11.s64 = r11.s64 + 14384;
	// addi r6,r9,820
	ctx.r6.s64 = ctx.r9.s64 + 820;
	// lis r8,-32051
	ctx.r8.s64 = -2100494336;
	// stw r11,820(r9)
	PPC_STORE_U32(ctx.r9.u32 + 820, r11.u32);
	// lis r7,-32051
	ctx.r7.s64 = -2100494336;
	// addi r9,r10,4324
	ctx.r9.s64 = ctx.r10.s64 + 4324;
	// addi r10,r8,27888
	ctx.r10.s64 = ctx.r8.s64 + 27888;
	// addi r11,r7,27848
	r11.s64 = ctx.r7.s64 + 27848;
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83143358"))) PPC_WEAK_FUNC(sub_83143358);
PPC_FUNC_IMPL(__imp__sub_83143358) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314335C"))) PPC_WEAK_FUNC(sub_8314335C);
PPC_FUNC_IMPL(__imp__sub_8314335C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143360"))) PPC_WEAK_FUNC(sub_83143360);
PPC_FUNC_IMPL(__imp__sub_83143360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,4444
	r11.s64 = r11.s64 + 4444;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r11,24
	ctx.r6.s64 = r11.s64 + 24;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,1444
	ctx.r5.s64 = ctx.r9.s64 + 1444;
	// addi r4,r8,15184
	ctx.r4.s64 = ctx.r8.s64 + 15184;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r7,836
	ctx.r3.s64 = ctx.r7.s64 + 836;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_831433D0"))) PPC_WEAK_FUNC(sub_831433D0);
PPC_FUNC_IMPL(__imp__sub_831433D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831433D4"))) PPC_WEAK_FUNC(sub_831433D4);
PPC_FUNC_IMPL(__imp__sub_831433D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831433D8"))) PPC_WEAK_FUNC(sub_831433D8);
PPC_FUNC_IMPL(__imp__sub_831433D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cdc898
	sub_82CDC898(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,884
	ctx.r8.s64 = ctx.r9.s64 + 884;
	// addi r11,r11,15184
	r11.s64 = r11.s64 + 15184;
	// lis r10,-32051
	ctx.r10.s64 = -2100494336;
	// stw r11,884(r9)
	PPC_STORE_U32(ctx.r9.u32 + 884, r11.u32);
	// lis r9,-32051
	ctx.r9.s64 = -2100494336;
	// addi r10,r10,28216
	ctx.r10.s64 = ctx.r10.s64 + 28216;
	// addi r9,r9,28232
	ctx.r9.s64 = ctx.r9.s64 + 28232;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83143430"))) PPC_WEAK_FUNC(sub_83143430);
PPC_FUNC_IMPL(__imp__sub_83143430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143434"))) PPC_WEAK_FUNC(sub_83143434);
PPC_FUNC_IMPL(__imp__sub_83143434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143438"))) PPC_WEAK_FUNC(sub_83143438);
PPC_FUNC_IMPL(__imp__sub_83143438) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,4544
	ctx.r6.s64 = ctx.r10.s64 + 4544;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-3540
	ctx.r5.s64 = ctx.r9.s64 + -3540;
	// addi r4,r8,14368
	ctx.r4.s64 = ctx.r8.s64 + 14368;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,916
	ctx.r3.s64 = ctx.r7.s64 + 916;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,4
	r31.s64 = 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_831434B0"))) PPC_WEAK_FUNC(sub_831434B0);
PPC_FUNC_IMPL(__imp__sub_831434B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831434B4"))) PPC_WEAK_FUNC(sub_831434B4);
PPC_FUNC_IMPL(__imp__sub_831434B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831434B8"))) PPC_WEAK_FUNC(sub_831434B8);
PPC_FUNC_IMPL(__imp__sub_831434B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-5968
	ctx.r10.s64 = r11.s64 + -5968;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,14368
	r11.s64 = r11.s64 + 14368;
	// addi r6,r9,900
	ctx.r6.s64 = ctx.r9.s64 + 900;
	// lis r8,-32051
	ctx.r8.s64 = -2100494336;
	// stw r11,900(r9)
	PPC_STORE_U32(ctx.r9.u32 + 900, r11.u32);
	// lis r7,-32051
	ctx.r7.s64 = -2100494336;
	// addi r9,r10,4644
	ctx.r9.s64 = ctx.r10.s64 + 4644;
	// addi r10,r8,28320
	ctx.r10.s64 = ctx.r8.s64 + 28320;
	// addi r11,r7,28400
	r11.s64 = ctx.r7.s64 + 28400;
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83143520"))) PPC_WEAK_FUNC(sub_83143520);
PPC_FUNC_IMPL(__imp__sub_83143520) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143524"))) PPC_WEAK_FUNC(sub_83143524);
PPC_FUNC_IMPL(__imp__sub_83143524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143528"))) PPC_WEAK_FUNC(sub_83143528);
PPC_FUNC_IMPL(__imp__sub_83143528) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,4720
	ctx.r6.s64 = ctx.r10.s64 + 4720;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-7324
	ctx.r5.s64 = ctx.r9.s64 + -7324;
	// addi r4,r8,14612
	ctx.r4.s64 = ctx.r8.s64 + 14612;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,964
	ctx.r3.s64 = ctx.r7.s64 + 964;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,180
	ctx.r6.s64 = 180;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_831435A0"))) PPC_WEAK_FUNC(sub_831435A0);
PPC_FUNC_IMPL(__imp__sub_831435A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831435A4"))) PPC_WEAK_FUNC(sub_831435A4);
PPC_FUNC_IMPL(__imp__sub_831435A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831435A8"))) PPC_WEAK_FUNC(sub_831435A8);
PPC_FUNC_IMPL(__imp__sub_831435A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r11,r11,5144
	r11.s64 = r11.s64 + 5144;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r11,192
	ctx.r6.s64 = r11.s64 + 192;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,1076
	ctx.r5.s64 = ctx.r9.s64 + 1076;
	// addi r4,r8,15168
	ctx.r4.s64 = ctx.r8.s64 + 15168;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r7,1012
	ctx.r3.s64 = ctx.r7.s64 + 1012;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83143618"))) PPC_WEAK_FUNC(sub_83143618);
PPC_FUNC_IMPL(__imp__sub_83143618) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314361C"))) PPC_WEAK_FUNC(sub_8314361C);
PPC_FUNC_IMPL(__imp__sub_8314361C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143620"))) PPC_WEAK_FUNC(sub_83143620);
PPC_FUNC_IMPL(__imp__sub_83143620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cde198
	sub_82CDE198(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,1060
	ctx.r8.s64 = ctx.r9.s64 + 1060;
	// addi r11,r11,15168
	r11.s64 = r11.s64 + 15168;
	// lis r10,-32051
	ctx.r10.s64 = -2100494336;
	// stw r11,1060(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1060, r11.u32);
	// lis r9,-32051
	ctx.r9.s64 = -2100494336;
	// addi r10,r10,28680
	ctx.r10.s64 = ctx.r10.s64 + 28680;
	// addi r9,r9,28696
	ctx.r9.s64 = ctx.r9.s64 + 28696;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83143678"))) PPC_WEAK_FUNC(sub_83143678);
PPC_FUNC_IMPL(__imp__sub_83143678) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314367C"))) PPC_WEAK_FUNC(sub_8314367C);
PPC_FUNC_IMPL(__imp__sub_8314367C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143680"))) PPC_WEAK_FUNC(sub_83143680);
PPC_FUNC_IMPL(__imp__sub_83143680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r10,-20232
	ctx.r9.s64 = ctx.r10.s64 + -20232;
	// lwz r11,-20280(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20280);
	// stw r11,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143698"))) PPC_WEAK_FUNC(sub_83143698);
PPC_FUNC_IMPL(__imp__sub_83143698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r11,5784
	ctx.r9.s64 = r11.s64 + 5784;
	// addi r4,r10,-20232
	ctx.r4.s64 = ctx.r10.s64 + -20232;
	// addi r5,r9,80
	ctx.r5.s64 = ctx.r9.s64 + 80;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,15148
	ctx.r4.s64 = ctx.r7.s64 + 15148;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,1076
	ctx.r3.s64 = ctx.r6.s64 + 1076;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83143710"))) PPC_WEAK_FUNC(sub_83143710);
PPC_FUNC_IMPL(__imp__sub_83143710) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143714"))) PPC_WEAK_FUNC(sub_83143714);
PPC_FUNC_IMPL(__imp__sub_83143714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143718"))) PPC_WEAK_FUNC(sub_83143718);
PPC_FUNC_IMPL(__imp__sub_83143718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cde628
	sub_82CDE628(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,1124
	ctx.r8.s64 = ctx.r9.s64 + 1124;
	// addi r11,r11,15148
	r11.s64 = r11.s64 + 15148;
	// lis r10,-32051
	ctx.r10.s64 = -2100494336;
	// stw r11,1124(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1124, r11.u32);
	// lis r9,-32051
	ctx.r9.s64 = -2100494336;
	// addi r10,r10,28784
	ctx.r10.s64 = ctx.r10.s64 + 28784;
	// addi r9,r9,28800
	ctx.r9.s64 = ctx.r9.s64 + 28800;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83143770"))) PPC_WEAK_FUNC(sub_83143770);
PPC_FUNC_IMPL(__imp__sub_83143770) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143774"))) PPC_WEAK_FUNC(sub_83143774);
PPC_FUNC_IMPL(__imp__sub_83143774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143778"))) PPC_WEAK_FUNC(sub_83143778);
PPC_FUNC_IMPL(__imp__sub_83143778) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,5920
	ctx.r6.s64 = ctx.r10.s64 + 5920;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-12796
	ctx.r5.s64 = ctx.r9.s64 + -12796;
	// addi r4,r8,14876
	ctx.r4.s64 = ctx.r8.s64 + 14876;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,1140
	ctx.r3.s64 = ctx.r7.s64 + 1140;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,3
	r31.s64 = 3;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_831437F4"))) PPC_WEAK_FUNC(sub_831437F4);
PPC_FUNC_IMPL(__imp__sub_831437F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831437F8"))) PPC_WEAK_FUNC(sub_831437F8);
PPC_FUNC_IMPL(__imp__sub_831437F8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,5992
	ctx.r6.s64 = ctx.r10.s64 + 5992;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-12796
	ctx.r5.s64 = ctx.r9.s64 + -12796;
	// addi r4,r8,14908
	ctx.r4.s64 = ctx.r8.s64 + 14908;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,1188
	ctx.r3.s64 = ctx.r7.s64 + 1188;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83143874"))) PPC_WEAK_FUNC(sub_83143874);
PPC_FUNC_IMPL(__imp__sub_83143874) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143878"))) PPC_WEAK_FUNC(sub_83143878);
PPC_FUNC_IMPL(__imp__sub_83143878) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,6040
	ctx.r6.s64 = ctx.r10.s64 + 6040;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-12796
	ctx.r5.s64 = ctx.r9.s64 + -12796;
	// addi r4,r8,14944
	ctx.r4.s64 = ctx.r8.s64 + 14944;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,1236
	ctx.r3.s64 = ctx.r7.s64 + 1236;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_831438F4"))) PPC_WEAK_FUNC(sub_831438F4);
PPC_FUNC_IMPL(__imp__sub_831438F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831438F8"))) PPC_WEAK_FUNC(sub_831438F8);
PPC_FUNC_IMPL(__imp__sub_831438F8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,6176
	ctx.r6.s64 = ctx.r10.s64 + 6176;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-7324
	ctx.r5.s64 = ctx.r9.s64 + -7324;
	// addi r4,r8,14580
	ctx.r4.s64 = ctx.r8.s64 + 14580;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,1284
	ctx.r3.s64 = ctx.r7.s64 + 1284;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,1
	r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83143970"))) PPC_WEAK_FUNC(sub_83143970);
PPC_FUNC_IMPL(__imp__sub_83143970) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143974"))) PPC_WEAK_FUNC(sub_83143974);
PPC_FUNC_IMPL(__imp__sub_83143974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143978"))) PPC_WEAK_FUNC(sub_83143978);
PPC_FUNC_IMPL(__imp__sub_83143978) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,6336
	ctx.r6.s64 = ctx.r10.s64 + 6336;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-3588
	ctx.r5.s64 = ctx.r9.s64 + -3588;
	// addi r4,r8,14348
	ctx.r4.s64 = ctx.r8.s64 + 14348;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,1348
	ctx.r3.s64 = ctx.r7.s64 + 1348;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,4
	r31.s64 = 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_831439F0"))) PPC_WEAK_FUNC(sub_831439F0);
PPC_FUNC_IMPL(__imp__sub_831439F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831439F4"))) PPC_WEAK_FUNC(sub_831439F4);
PPC_FUNC_IMPL(__imp__sub_831439F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831439F8"))) PPC_WEAK_FUNC(sub_831439F8);
PPC_FUNC_IMPL(__imp__sub_831439F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-5968
	ctx.r10.s64 = r11.s64 + -5968;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,14348
	r11.s64 = r11.s64 + 14348;
	// addi r6,r9,1332
	ctx.r6.s64 = ctx.r9.s64 + 1332;
	// lis r8,-32051
	ctx.r8.s64 = -2100494336;
	// stw r11,1332(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1332, r11.u32);
	// lis r7,-32051
	ctx.r7.s64 = -2100494336;
	// addi r9,r10,6436
	ctx.r9.s64 = ctx.r10.s64 + 6436;
	// addi r10,r8,30288
	ctx.r10.s64 = ctx.r8.s64 + 30288;
	// addi r11,r7,30368
	r11.s64 = ctx.r7.s64 + 30368;
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83143A60"))) PPC_WEAK_FUNC(sub_83143A60);
PPC_FUNC_IMPL(__imp__sub_83143A60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143A64"))) PPC_WEAK_FUNC(sub_83143A64);
PPC_FUNC_IMPL(__imp__sub_83143A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143A68"))) PPC_WEAK_FUNC(sub_83143A68);
PPC_FUNC_IMPL(__imp__sub_83143A68) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,6512
	ctx.r6.s64 = ctx.r10.s64 + 6512;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-7324
	ctx.r5.s64 = ctx.r9.s64 + -7324;
	// addi r4,r8,14468
	ctx.r4.s64 = ctx.r8.s64 + 14468;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,1396
	ctx.r3.s64 = ctx.r7.s64 + 1396;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,1
	r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,56
	ctx.r6.s64 = 56;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83143AE0"))) PPC_WEAK_FUNC(sub_83143AE0);
PPC_FUNC_IMPL(__imp__sub_83143AE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143AE4"))) PPC_WEAK_FUNC(sub_83143AE4);
PPC_FUNC_IMPL(__imp__sub_83143AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143AE8"))) PPC_WEAK_FUNC(sub_83143AE8);
PPC_FUNC_IMPL(__imp__sub_83143AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r11,r11,6888
	r11.s64 = r11.s64 + 6888;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r11,168
	ctx.r6.s64 = r11.s64 + 168;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,1076
	ctx.r5.s64 = ctx.r9.s64 + 1076;
	// addi r4,r8,15136
	ctx.r4.s64 = ctx.r8.s64 + 15136;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r7,1444
	ctx.r3.s64 = ctx.r7.s64 + 1444;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83143B58"))) PPC_WEAK_FUNC(sub_83143B58);
PPC_FUNC_IMPL(__imp__sub_83143B58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143B5C"))) PPC_WEAK_FUNC(sub_83143B5C);
PPC_FUNC_IMPL(__imp__sub_83143B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143B60"))) PPC_WEAK_FUNC(sub_83143B60);
PPC_FUNC_IMPL(__imp__sub_83143B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cdf5a0
	sub_82CDF5A0(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,1492
	ctx.r8.s64 = ctx.r9.s64 + 1492;
	// addi r11,r11,15136
	r11.s64 = r11.s64 + 15136;
	// lis r10,-32051
	ctx.r10.s64 = -2100494336;
	// stw r11,1492(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1492, r11.u32);
	// lis r9,-32051
	ctx.r9.s64 = -2100494336;
	// addi r10,r10,30832
	ctx.r10.s64 = ctx.r10.s64 + 30832;
	// addi r9,r9,30848
	ctx.r9.s64 = ctx.r9.s64 + 30848;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83143BB8"))) PPC_WEAK_FUNC(sub_83143BB8);
PPC_FUNC_IMPL(__imp__sub_83143BB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143BBC"))) PPC_WEAK_FUNC(sub_83143BBC);
PPC_FUNC_IMPL(__imp__sub_83143BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143BC0"))) PPC_WEAK_FUNC(sub_83143BC0);
PPC_FUNC_IMPL(__imp__sub_83143BC0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,7200
	ctx.r6.s64 = ctx.r10.s64 + 7200;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-3588
	ctx.r5.s64 = ctx.r9.s64 + -3588;
	// addi r4,r8,14324
	ctx.r4.s64 = ctx.r8.s64 + 14324;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,1524
	ctx.r3.s64 = ctx.r7.s64 + 1524;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,3
	r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83143C38"))) PPC_WEAK_FUNC(sub_83143C38);
PPC_FUNC_IMPL(__imp__sub_83143C38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143C3C"))) PPC_WEAK_FUNC(sub_83143C3C);
PPC_FUNC_IMPL(__imp__sub_83143C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143C40"))) PPC_WEAK_FUNC(sub_83143C40);
PPC_FUNC_IMPL(__imp__sub_83143C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-5968
	ctx.r10.s64 = r11.s64 + -5968;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,14324
	r11.s64 = r11.s64 + 14324;
	// addi r6,r9,1508
	ctx.r6.s64 = ctx.r9.s64 + 1508;
	// lis r8,-32051
	ctx.r8.s64 = -2100494336;
	// stw r11,1508(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1508, r11.u32);
	// lis r7,-32051
	ctx.r7.s64 = -2100494336;
	// addi r9,r10,7276
	ctx.r9.s64 = ctx.r10.s64 + 7276;
	// addi r10,r8,30936
	ctx.r10.s64 = ctx.r8.s64 + 30936;
	// addi r11,r7,31016
	r11.s64 = ctx.r7.s64 + 31016;
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83143CA8"))) PPC_WEAK_FUNC(sub_83143CA8);
PPC_FUNC_IMPL(__imp__sub_83143CA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143CAC"))) PPC_WEAK_FUNC(sub_83143CAC);
PPC_FUNC_IMPL(__imp__sub_83143CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143CB0"))) PPC_WEAK_FUNC(sub_83143CB0);
PPC_FUNC_IMPL(__imp__sub_83143CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r8,r9,-18976
	ctx.r8.s64 = ctx.r9.s64 + -18976;
	// lwz r11,-19016(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19016);
	// lwz r10,-19012(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19012);
	// stw r11,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, r11.u32);
	// stw r10,56(r8)
	PPC_STORE_U32(ctx.r8.u32 + 56, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143CD4"))) PPC_WEAK_FUNC(sub_83143CD4);
PPC_FUNC_IMPL(__imp__sub_83143CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143CD8"))) PPC_WEAK_FUNC(sub_83143CD8);
PPC_FUNC_IMPL(__imp__sub_83143CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-18976
	ctx.r7.s64 = ctx.r10.s64 + -18976;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r11,0
	r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,7388
	ctx.r4.s64 = ctx.r9.s64 + 7388;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,1572
	ctx.r3.s64 = ctx.r8.s64 + 1572;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83143D48"))) PPC_WEAK_FUNC(sub_83143D48);
PPC_FUNC_IMPL(__imp__sub_83143D48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143D4C"))) PPC_WEAK_FUNC(sub_83143D4C);
PPC_FUNC_IMPL(__imp__sub_83143D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143D50"))) PPC_WEAK_FUNC(sub_83143D50);
PPC_FUNC_IMPL(__imp__sub_83143D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,9464
	ctx.r9.s64 = r11.s64 + 9464;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r6,r9,40
	ctx.r6.s64 = ctx.r9.s64 + 40;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r4,r8,7420
	ctx.r4.s64 = ctx.r8.s64 + 7420;
	// addi r3,r7,1620
	ctx.r3.s64 = ctx.r7.s64 + 1620;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83143DBC"))) PPC_WEAK_FUNC(sub_83143DBC);
PPC_FUNC_IMPL(__imp__sub_83143DBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143DC0"))) PPC_WEAK_FUNC(sub_83143DC0);
PPC_FUNC_IMPL(__imp__sub_83143DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,9528
	ctx.r7.s64 = ctx.r10.s64 + 9528;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,11
	ctx.r6.s64 = 11;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,7324
	ctx.r4.s64 = ctx.r9.s64 + 7324;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,1668
	ctx.r3.s64 = ctx.r8.s64 + 1668;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,84
	ctx.r6.s64 = 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83143E2C"))) PPC_WEAK_FUNC(sub_83143E2C);
PPC_FUNC_IMPL(__imp__sub_83143E2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143E30"))) PPC_WEAK_FUNC(sub_83143E30);
PPC_FUNC_IMPL(__imp__sub_83143E30) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,9792
	ctx.r6.s64 = ctx.r10.s64 + 9792;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-12796
	ctx.r5.s64 = ctx.r9.s64 + -12796;
	// addi r4,r8,7352
	ctx.r4.s64 = ctx.r8.s64 + 7352;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,1716
	ctx.r3.s64 = ctx.r7.s64 + 1716;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83143EAC"))) PPC_WEAK_FUNC(sub_83143EAC);
PPC_FUNC_IMPL(__imp__sub_83143EAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143EB0"))) PPC_WEAK_FUNC(sub_83143EB0);
PPC_FUNC_IMPL(__imp__sub_83143EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ce51d0
	sub_82CE51D0(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,1764
	ctx.r8.s64 = ctx.r9.s64 + 1764;
	// addi r11,r11,7352
	r11.s64 = r11.s64 + 7352;
	// lis r10,-32050
	ctx.r10.s64 = -2100428800;
	// stw r11,1764(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1764, r11.u32);
	// lis r9,-32050
	ctx.r9.s64 = -2100428800;
	// addi r10,r10,10024
	ctx.r10.s64 = ctx.r10.s64 + 10024;
	// addi r9,r9,10040
	ctx.r9.s64 = ctx.r9.s64 + 10040;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83143F08"))) PPC_WEAK_FUNC(sub_83143F08);
PPC_FUNC_IMPL(__imp__sub_83143F08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143F0C"))) PPC_WEAK_FUNC(sub_83143F0C);
PPC_FUNC_IMPL(__imp__sub_83143F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83143F10"))) PPC_WEAK_FUNC(sub_83143F10);
PPC_FUNC_IMPL(__imp__sub_83143F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,9840
	ctx.r7.s64 = ctx.r10.s64 + 9840;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,6996
	ctx.r4.s64 = ctx.r9.s64 + 6996;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,1780
	ctx.r3.s64 = ctx.r8.s64 + 1780;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83143F7C"))) PPC_WEAK_FUNC(sub_83143F7C);
PPC_FUNC_IMPL(__imp__sub_83143F7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143F80"))) PPC_WEAK_FUNC(sub_83143F80);
PPC_FUNC_IMPL(__imp__sub_83143F80) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,9888
	ctx.r6.s64 = ctx.r10.s64 + 9888;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,3604
	ctx.r5.s64 = ctx.r9.s64 + 3604;
	// addi r4,r8,7020
	ctx.r4.s64 = ctx.r8.s64 + 7020;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,1828
	ctx.r3.s64 = ctx.r7.s64 + 1828;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,7
	r31.s64 = 7;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,72
	ctx.r6.s64 = 72;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83143FF8"))) PPC_WEAK_FUNC(sub_83143FF8);
PPC_FUNC_IMPL(__imp__sub_83143FF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143FFC"))) PPC_WEAK_FUNC(sub_83143FFC);
PPC_FUNC_IMPL(__imp__sub_83143FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83144000"))) PPC_WEAK_FUNC(sub_83144000);
PPC_FUNC_IMPL(__imp__sub_83144000) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r31,0
	r31.s64 = 0;
	// addi r10,r11,10076
	ctx.r10.s64 = r11.s64 + 10076;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,1876
	ctx.r8.s64 = ctx.r9.s64 + 1876;
	// addi r11,r11,7020
	r11.s64 = r11.s64 + 7020;
	// lis r10,-32050
	ctx.r10.s64 = -2100428800;
	// stw r11,1876(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1876, r11.u32);
	// lis r9,-32050
	ctx.r9.s64 = -2100428800;
	// addi r10,r10,10600
	ctx.r10.s64 = ctx.r10.s64 + 10600;
	// addi r9,r9,10552
	ctx.r9.s64 = ctx.r9.s64 + 10552;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8314407C"))) PPC_WEAK_FUNC(sub_8314407C);
PPC_FUNC_IMPL(__imp__sub_8314407C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144080"))) PPC_WEAK_FUNC(sub_83144080);
PPC_FUNC_IMPL(__imp__sub_83144080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r10,-18760
	ctx.r9.s64 = ctx.r10.s64 + -18760;
	// lwz r11,-18784(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -18784);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144098"))) PPC_WEAK_FUNC(sub_83144098);
PPC_FUNC_IMPL(__imp__sub_83144098) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r6,r10,10212
	ctx.r6.s64 = ctx.r10.s64 + 10212;
	// addi r5,r9,-18760
	ctx.r5.s64 = ctx.r9.s64 + -18760;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r8,7056
	ctx.r4.s64 = ctx.r8.s64 + 7056;
	// addi r3,r7,1892
	ctx.r3.s64 = ctx.r7.s64 + 1892;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r31,3
	r31.s64 = 3;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83144114"))) PPC_WEAK_FUNC(sub_83144114);
PPC_FUNC_IMPL(__imp__sub_83144114) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144118"))) PPC_WEAK_FUNC(sub_83144118);
PPC_FUNC_IMPL(__imp__sub_83144118) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r9,r11,10192
	ctx.r9.s64 = r11.s64 + 10192;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r9,40
	ctx.r6.s64 = ctx.r9.s64 + 40;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r5,r10,3604
	ctx.r5.s64 = ctx.r10.s64 + 3604;
	// addi r4,r8,7080
	ctx.r4.s64 = ctx.r8.s64 + 7080;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,1940
	ctx.r3.s64 = ctx.r7.s64 + 1940;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,8
	r31.s64 = 8;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83144190"))) PPC_WEAK_FUNC(sub_83144190);
PPC_FUNC_IMPL(__imp__sub_83144190) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144194"))) PPC_WEAK_FUNC(sub_83144194);
PPC_FUNC_IMPL(__imp__sub_83144194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83144198"))) PPC_WEAK_FUNC(sub_83144198);
PPC_FUNC_IMPL(__imp__sub_83144198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,10428
	ctx.r10.s64 = r11.s64 + 10428;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,1988
	ctx.r8.s64 = ctx.r9.s64 + 1988;
	// addi r11,r11,7080
	r11.s64 = r11.s64 + 7080;
	// lis r10,-32050
	ctx.r10.s64 = -2100428800;
	// stw r11,1988(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1988, r11.u32);
	// lis r9,-32050
	ctx.r9.s64 = -2100428800;
	// addi r10,r10,11288
	ctx.r10.s64 = ctx.r10.s64 + 11288;
	// addi r9,r9,11176
	ctx.r9.s64 = ctx.r9.s64 + 11176;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_831441FC"))) PPC_WEAK_FUNC(sub_831441FC);
PPC_FUNC_IMPL(__imp__sub_831441FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144200"))) PPC_WEAK_FUNC(sub_83144200);
PPC_FUNC_IMPL(__imp__sub_83144200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,10440
	ctx.r7.s64 = ctx.r10.s64 + 10440;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,6956
	ctx.r4.s64 = ctx.r9.s64 + 6956;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,2004
	ctx.r3.s64 = ctx.r8.s64 + 2004;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8314426C"))) PPC_WEAK_FUNC(sub_8314426C);
PPC_FUNC_IMPL(__imp__sub_8314426C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144270"))) PPC_WEAK_FUNC(sub_83144270);
PPC_FUNC_IMPL(__imp__sub_83144270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r9,10488
	ctx.r3.s64 = ctx.r9.s64 + 10488;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,6980
	ctx.r4.s64 = ctx.r7.s64 + 6980;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,2052
	ctx.r3.s64 = ctx.r6.s64 + 2052;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_831442E0"))) PPC_WEAK_FUNC(sub_831442E0);
PPC_FUNC_IMPL(__imp__sub_831442E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831442E4"))) PPC_WEAK_FUNC(sub_831442E4);
PPC_FUNC_IMPL(__imp__sub_831442E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831442E8"))) PPC_WEAK_FUNC(sub_831442E8);
PPC_FUNC_IMPL(__imp__sub_831442E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ce6a10
	sub_82CE6A10(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,2100
	ctx.r8.s64 = ctx.r9.s64 + 2100;
	// addi r11,r11,6980
	r11.s64 = r11.s64 + 6980;
	// lis r10,-32050
	ctx.r10.s64 = -2100428800;
	// stw r11,2100(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2100, r11.u32);
	// lis r9,-32050
	ctx.r9.s64 = -2100428800;
	// addi r10,r10,11584
	ctx.r10.s64 = ctx.r10.s64 + 11584;
	// addi r9,r9,11600
	ctx.r9.s64 = ctx.r9.s64 + 11600;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83144340"))) PPC_WEAK_FUNC(sub_83144340);
PPC_FUNC_IMPL(__imp__sub_83144340) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144344"))) PPC_WEAK_FUNC(sub_83144344);
PPC_FUNC_IMPL(__imp__sub_83144344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83144348"))) PPC_WEAK_FUNC(sub_83144348);
PPC_FUNC_IMPL(__imp__sub_83144348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,10512
	ctx.r7.s64 = ctx.r10.s64 + 10512;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,6848
	ctx.r4.s64 = ctx.r9.s64 + 6848;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,2116
	ctx.r3.s64 = ctx.r8.s64 + 2116;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_831443B4"))) PPC_WEAK_FUNC(sub_831443B4);
PPC_FUNC_IMPL(__imp__sub_831443B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831443B8"))) PPC_WEAK_FUNC(sub_831443B8);
PPC_FUNC_IMPL(__imp__sub_831443B8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,10560
	ctx.r6.s64 = ctx.r10.s64 + 10560;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-12796
	ctx.r5.s64 = ctx.r9.s64 + -12796;
	// addi r4,r8,6860
	ctx.r4.s64 = ctx.r8.s64 + 6860;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,2164
	ctx.r3.s64 = ctx.r7.s64 + 2164;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,1
	r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83144430"))) PPC_WEAK_FUNC(sub_83144430);
PPC_FUNC_IMPL(__imp__sub_83144430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144434"))) PPC_WEAK_FUNC(sub_83144434);
PPC_FUNC_IMPL(__imp__sub_83144434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83144438"))) PPC_WEAK_FUNC(sub_83144438);
PPC_FUNC_IMPL(__imp__sub_83144438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r9,10584
	ctx.r3.s64 = ctx.r9.s64 + 10584;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,2772
	ctx.r5.s64 = ctx.r8.s64 + 2772;
	// addi r4,r7,6868
	ctx.r4.s64 = ctx.r7.s64 + 6868;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,2212
	ctx.r3.s64 = ctx.r6.s64 + 2212;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_831444A8"))) PPC_WEAK_FUNC(sub_831444A8);
PPC_FUNC_IMPL(__imp__sub_831444A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831444AC"))) PPC_WEAK_FUNC(sub_831444AC);
PPC_FUNC_IMPL(__imp__sub_831444AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831444B0"))) PPC_WEAK_FUNC(sub_831444B0);
PPC_FUNC_IMPL(__imp__sub_831444B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,10656
	ctx.r7.s64 = ctx.r10.s64 + 10656;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,6784
	ctx.r4.s64 = ctx.r9.s64 + 6784;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,2260
	ctx.r3.s64 = ctx.r8.s64 + 2260;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8314451C"))) PPC_WEAK_FUNC(sub_8314451C);
PPC_FUNC_IMPL(__imp__sub_8314451C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144520"))) PPC_WEAK_FUNC(sub_83144520);
PPC_FUNC_IMPL(__imp__sub_83144520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r9,r11,10752
	ctx.r9.s64 = r11.s64 + 10752;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// addi r7,r9,20
	ctx.r7.s64 = ctx.r9.s64 + 20;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r11,0
	r11.s64 = 0;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r10,6768
	ctx.r4.s64 = ctx.r10.s64 + 6768;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,2308
	ctx.r3.s64 = ctx.r8.s64 + 2308;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8314458C"))) PPC_WEAK_FUNC(sub_8314458C);
PPC_FUNC_IMPL(__imp__sub_8314458C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144590"))) PPC_WEAK_FUNC(sub_83144590);
PPC_FUNC_IMPL(__imp__sub_83144590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r9,10820
	ctx.r3.s64 = ctx.r9.s64 + 10820;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,7576
	ctx.r4.s64 = ctx.r7.s64 + 7576;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,2356
	ctx.r3.s64 = ctx.r6.s64 + 2356;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83144600"))) PPC_WEAK_FUNC(sub_83144600);
PPC_FUNC_IMPL(__imp__sub_83144600) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144604"))) PPC_WEAK_FUNC(sub_83144604);
PPC_FUNC_IMPL(__imp__sub_83144604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83144608"))) PPC_WEAK_FUNC(sub_83144608);
PPC_FUNC_IMPL(__imp__sub_83144608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r9,10860
	ctx.r3.s64 = ctx.r9.s64 + 10860;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,7548
	ctx.r4.s64 = ctx.r7.s64 + 7548;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,2404
	ctx.r3.s64 = ctx.r6.s64 + 2404;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83144678"))) PPC_WEAK_FUNC(sub_83144678);
PPC_FUNC_IMPL(__imp__sub_83144678) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314467C"))) PPC_WEAK_FUNC(sub_8314467C);
PPC_FUNC_IMPL(__imp__sub_8314467C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83144680"))) PPC_WEAK_FUNC(sub_83144680);
PPC_FUNC_IMPL(__imp__sub_83144680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r9,10900
	ctx.r3.s64 = ctx.r9.s64 + 10900;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,7524
	ctx.r4.s64 = ctx.r7.s64 + 7524;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,2452
	ctx.r3.s64 = ctx.r6.s64 + 2452;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_831446F0"))) PPC_WEAK_FUNC(sub_831446F0);
PPC_FUNC_IMPL(__imp__sub_831446F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831446F4"))) PPC_WEAK_FUNC(sub_831446F4);
PPC_FUNC_IMPL(__imp__sub_831446F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831446F8"))) PPC_WEAK_FUNC(sub_831446F8);
PPC_FUNC_IMPL(__imp__sub_831446F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r10,-18264
	ctx.r9.s64 = ctx.r10.s64 + -18264;
	// lwz r11,-18284(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -18284);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144710"))) PPC_WEAK_FUNC(sub_83144710);
PPC_FUNC_IMPL(__imp__sub_83144710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r10,-18264
	ctx.r5.s64 = ctx.r10.s64 + -18264;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r11,0
	r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,7496
	ctx.r4.s64 = ctx.r7.s64 + 7496;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,2500
	ctx.r3.s64 = ctx.r6.s64 + 2500;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,10964
	ctx.r9.s64 = ctx.r9.s64 + 10964;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83144788"))) PPC_WEAK_FUNC(sub_83144788);
PPC_FUNC_IMPL(__imp__sub_83144788) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314478C"))) PPC_WEAK_FUNC(sub_8314478C);
PPC_FUNC_IMPL(__imp__sub_8314478C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83144790"))) PPC_WEAK_FUNC(sub_83144790);
PPC_FUNC_IMPL(__imp__sub_83144790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r9,11000
	ctx.r3.s64 = ctx.r9.s64 + 11000;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,7468
	ctx.r4.s64 = ctx.r7.s64 + 7468;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,2548
	ctx.r3.s64 = ctx.r6.s64 + 2548;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83144800"))) PPC_WEAK_FUNC(sub_83144800);
PPC_FUNC_IMPL(__imp__sub_83144800) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144804"))) PPC_WEAK_FUNC(sub_83144804);
PPC_FUNC_IMPL(__imp__sub_83144804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83144808"))) PPC_WEAK_FUNC(sub_83144808);
PPC_FUNC_IMPL(__imp__sub_83144808) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,11040
	ctx.r6.s64 = ctx.r10.s64 + 11040;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-12796
	ctx.r5.s64 = ctx.r9.s64 + -12796;
	// addi r4,r8,7220
	ctx.r4.s64 = ctx.r8.s64 + 7220;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,2596
	ctx.r3.s64 = ctx.r7.s64 + 2596;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,4
	r31.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83144884"))) PPC_WEAK_FUNC(sub_83144884);
PPC_FUNC_IMPL(__imp__sub_83144884) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144888"))) PPC_WEAK_FUNC(sub_83144888);
PPC_FUNC_IMPL(__imp__sub_83144888) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r31,0
	r31.s64 = 0;
	// addi r10,r11,11140
	ctx.r10.s64 = r11.s64 + 11140;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,2644
	ctx.r8.s64 = ctx.r9.s64 + 2644;
	// addi r11,r11,7220
	r11.s64 = r11.s64 + 7220;
	// lis r10,-32050
	ctx.r10.s64 = -2100428800;
	// stw r11,2644(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2644, r11.u32);
	// lis r9,-32050
	ctx.r9.s64 = -2100428800;
	// addi r10,r10,13440
	ctx.r10.s64 = ctx.r10.s64 + 13440;
	// addi r9,r9,13400
	ctx.r9.s64 = ctx.r9.s64 + 13400;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83144904"))) PPC_WEAK_FUNC(sub_83144904);
PPC_FUNC_IMPL(__imp__sub_83144904) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144908"))) PPC_WEAK_FUNC(sub_83144908);
PPC_FUNC_IMPL(__imp__sub_83144908) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,11152
	ctx.r6.s64 = ctx.r10.s64 + 11152;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-12796
	ctx.r5.s64 = ctx.r9.s64 + -12796;
	// addi r4,r8,7204
	ctx.r4.s64 = ctx.r8.s64 + 7204;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,2660
	ctx.r3.s64 = ctx.r7.s64 + 2660;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,3
	r31.s64 = 3;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83144984"))) PPC_WEAK_FUNC(sub_83144984);
PPC_FUNC_IMPL(__imp__sub_83144984) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144988"))) PPC_WEAK_FUNC(sub_83144988);
PPC_FUNC_IMPL(__imp__sub_83144988) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r31,0
	r31.s64 = 0;
	// addi r10,r11,11228
	ctx.r10.s64 = r11.s64 + 11228;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,2708
	ctx.r8.s64 = ctx.r9.s64 + 2708;
	// addi r11,r11,7204
	r11.s64 = r11.s64 + 7204;
	// lis r10,-32050
	ctx.r10.s64 = -2100428800;
	// stw r11,2708(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2708, r11.u32);
	// lis r9,-32050
	ctx.r9.s64 = -2100428800;
	// addi r10,r10,13888
	ctx.r10.s64 = ctx.r10.s64 + 13888;
	// addi r9,r9,13848
	ctx.r9.s64 = ctx.r9.s64 + 13848;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83144A10"))) PPC_WEAK_FUNC(sub_83144A10);
PPC_FUNC_IMPL(__imp__sub_83144A10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144A14"))) PPC_WEAK_FUNC(sub_83144A14);
PPC_FUNC_IMPL(__imp__sub_83144A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83144A18"))) PPC_WEAK_FUNC(sub_83144A18);
PPC_FUNC_IMPL(__imp__sub_83144A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r3,r9,11240
	ctx.r3.s64 = ctx.r9.s64 + 11240;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,6916
	ctx.r4.s64 = ctx.r7.s64 + 6916;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,2724
	ctx.r3.s64 = ctx.r6.s64 + 2724;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83144A88"))) PPC_WEAK_FUNC(sub_83144A88);
PPC_FUNC_IMPL(__imp__sub_83144A88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144A8C"))) PPC_WEAK_FUNC(sub_83144A8C);
PPC_FUNC_IMPL(__imp__sub_83144A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83144A90"))) PPC_WEAK_FUNC(sub_83144A90);
PPC_FUNC_IMPL(__imp__sub_83144A90) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,11304
	ctx.r6.s64 = ctx.r10.s64 + 11304;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-12796
	ctx.r5.s64 = ctx.r9.s64 + -12796;
	// addi r4,r8,6892
	ctx.r4.s64 = ctx.r8.s64 + 6892;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,2772
	ctx.r3.s64 = ctx.r7.s64 + 2772;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83144B0C"))) PPC_WEAK_FUNC(sub_83144B0C);
PPC_FUNC_IMPL(__imp__sub_83144B0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144B10"))) PPC_WEAK_FUNC(sub_83144B10);
PPC_FUNC_IMPL(__imp__sub_83144B10) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,11352
	ctx.r6.s64 = ctx.r10.s64 + 11352;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-12796
	ctx.r5.s64 = ctx.r9.s64 + -12796;
	// addi r4,r8,6824
	ctx.r4.s64 = ctx.r8.s64 + 6824;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,2820
	ctx.r3.s64 = ctx.r7.s64 + 2820;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83144B8C"))) PPC_WEAK_FUNC(sub_83144B8C);
PPC_FUNC_IMPL(__imp__sub_83144B8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144B90"))) PPC_WEAK_FUNC(sub_83144B90);
PPC_FUNC_IMPL(__imp__sub_83144B90) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,11416
	ctx.r6.s64 = ctx.r10.s64 + 11416;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-12796
	ctx.r5.s64 = ctx.r9.s64 + -12796;
	// addi r4,r8,7636
	ctx.r4.s64 = ctx.r8.s64 + 7636;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,2868
	ctx.r3.s64 = ctx.r7.s64 + 2868;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,4
	r31.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83144C0C"))) PPC_WEAK_FUNC(sub_83144C0C);
PPC_FUNC_IMPL(__imp__sub_83144C0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144C10"))) PPC_WEAK_FUNC(sub_83144C10);
PPC_FUNC_IMPL(__imp__sub_83144C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,11528
	r11.s64 = r11.s64 + 11528;
	// li r3,13
	ctx.r3.s64 = 13;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r6,r11,312
	ctx.r6.s64 = r11.s64 + 312;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,-12796
	ctx.r5.s64 = ctx.r9.s64 + -12796;
	// addi r4,r8,7604
	ctx.r4.s64 = ctx.r8.s64 + 7604;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r3,r7,2916
	ctx.r3.s64 = ctx.r7.s64 + 2916;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,176
	ctx.r6.s64 = 176;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83144C84"))) PPC_WEAK_FUNC(sub_83144C84);
PPC_FUNC_IMPL(__imp__sub_83144C84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144C88"))) PPC_WEAK_FUNC(sub_83144C88);
PPC_FUNC_IMPL(__imp__sub_83144C88) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r31,0
	r31.s64 = 0;
	// addi r10,r11,11944
	ctx.r10.s64 = r11.s64 + 11944;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,2964
	ctx.r8.s64 = ctx.r9.s64 + 2964;
	// addi r11,r11,7604
	r11.s64 = r11.s64 + 7604;
	// lis r10,-32050
	ctx.r10.s64 = -2100428800;
	// stw r11,2964(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2964, r11.u32);
	// lis r9,-32050
	ctx.r9.s64 = -2100428800;
	// addi r10,r10,15472
	ctx.r10.s64 = ctx.r10.s64 + 15472;
	// addi r9,r9,15432
	ctx.r9.s64 = ctx.r9.s64 + 15432;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83144D04"))) PPC_WEAK_FUNC(sub_83144D04);
PPC_FUNC_IMPL(__imp__sub_83144D04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144D08"))) PPC_WEAK_FUNC(sub_83144D08);
PPC_FUNC_IMPL(__imp__sub_83144D08) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,11956
	ctx.r6.s64 = ctx.r10.s64 + 11956;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,3604
	ctx.r5.s64 = ctx.r9.s64 + 3604;
	// addi r4,r8,7616
	ctx.r4.s64 = ctx.r8.s64 + 7616;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,2980
	ctx.r3.s64 = ctx.r7.s64 + 2980;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83144D80"))) PPC_WEAK_FUNC(sub_83144D80);
PPC_FUNC_IMPL(__imp__sub_83144D80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144D84"))) PPC_WEAK_FUNC(sub_83144D84);
PPC_FUNC_IMPL(__imp__sub_83144D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83144D88"))) PPC_WEAK_FUNC(sub_83144D88);
PPC_FUNC_IMPL(__imp__sub_83144D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,12008
	ctx.r10.s64 = r11.s64 + 12008;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,3028
	ctx.r8.s64 = ctx.r9.s64 + 3028;
	// addi r11,r11,7616
	r11.s64 = r11.s64 + 7616;
	// lis r10,-32050
	ctx.r10.s64 = -2100428800;
	// stw r11,3028(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3028, r11.u32);
	// lis r9,-32050
	ctx.r9.s64 = -2100428800;
	// addi r10,r10,15792
	ctx.r10.s64 = ctx.r10.s64 + 15792;
	// addi r9,r9,15752
	ctx.r9.s64 = ctx.r9.s64 + 15752;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83144DEC"))) PPC_WEAK_FUNC(sub_83144DEC);
PPC_FUNC_IMPL(__imp__sub_83144DEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144DF0"))) PPC_WEAK_FUNC(sub_83144DF0);
PPC_FUNC_IMPL(__imp__sub_83144DF0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,12020
	ctx.r6.s64 = ctx.r10.s64 + 12020;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,3604
	ctx.r5.s64 = ctx.r9.s64 + 3604;
	// addi r4,r8,7276
	ctx.r4.s64 = ctx.r8.s64 + 7276;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,3044
	ctx.r3.s64 = ctx.r7.s64 + 3044;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83144E68"))) PPC_WEAK_FUNC(sub_83144E68);
PPC_FUNC_IMPL(__imp__sub_83144E68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144E6C"))) PPC_WEAK_FUNC(sub_83144E6C);
PPC_FUNC_IMPL(__imp__sub_83144E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83144E70"))) PPC_WEAK_FUNC(sub_83144E70);
PPC_FUNC_IMPL(__imp__sub_83144E70) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r31,0
	r31.s64 = 0;
	// addi r10,r11,12120
	ctx.r10.s64 = r11.s64 + 12120;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,3092
	ctx.r8.s64 = ctx.r9.s64 + 3092;
	// addi r11,r11,7276
	r11.s64 = r11.s64 + 7276;
	// lis r10,-32050
	ctx.r10.s64 = -2100428800;
	// stw r11,3092(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3092, r11.u32);
	// lis r9,-32050
	ctx.r9.s64 = -2100428800;
	// addi r10,r10,16304
	ctx.r10.s64 = ctx.r10.s64 + 16304;
	// addi r9,r9,16160
	ctx.r9.s64 = ctx.r9.s64 + 16160;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83144EEC"))) PPC_WEAK_FUNC(sub_83144EEC);
PPC_FUNC_IMPL(__imp__sub_83144EEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144EF0"))) PPC_WEAK_FUNC(sub_83144EF0);
PPC_FUNC_IMPL(__imp__sub_83144EF0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,12068
	ctx.r6.s64 = ctx.r10.s64 + 12068;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-12796
	ctx.r5.s64 = ctx.r9.s64 + -12796;
	// addi r4,r8,7300
	ctx.r4.s64 = ctx.r8.s64 + 7300;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,3108
	ctx.r3.s64 = ctx.r7.s64 + 3108;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_83144F6C"))) PPC_WEAK_FUNC(sub_83144F6C);
PPC_FUNC_IMPL(__imp__sub_83144F6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144F70"))) PPC_WEAK_FUNC(sub_83144F70);
PPC_FUNC_IMPL(__imp__sub_83144F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ce79d8
	sub_82CE79D8(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,3156
	ctx.r8.s64 = ctx.r9.s64 + 3156;
	// addi r11,r11,7300
	r11.s64 = r11.s64 + 7300;
	// lis r10,-32050
	ctx.r10.s64 = -2100428800;
	// stw r11,3156(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3156, r11.u32);
	// lis r9,-32050
	ctx.r9.s64 = -2100428800;
	// addi r10,r10,16200
	ctx.r10.s64 = ctx.r10.s64 + 16200;
	// addi r9,r9,16216
	ctx.r9.s64 = ctx.r9.s64 + 16216;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83144FC8"))) PPC_WEAK_FUNC(sub_83144FC8);
PPC_FUNC_IMPL(__imp__sub_83144FC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144FCC"))) PPC_WEAK_FUNC(sub_83144FCC);
PPC_FUNC_IMPL(__imp__sub_83144FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

