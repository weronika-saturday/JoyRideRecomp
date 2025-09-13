#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F43564"))) PPC_WEAK_FUNC(sub_82F43564);
PPC_FUNC_IMPL(__imp__sub_82F43564) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F43568"))) PPC_WEAK_FUNC(sub_82F43568);
PPC_FUNC_IMPL(__imp__sub_82F43568) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r7,r10,15904
	ctx.r7.s64 = ctx.r10.s64 + 15904;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r11,0
	r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,16740
	ctx.r4.s64 = ctx.r9.s64 + 16740;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-11416
	ctx.r3.s64 = ctx.r8.s64 + -11416;
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

__attribute__((alias("__imp__sub_82F435D8"))) PPC_WEAK_FUNC(sub_82F435D8);
PPC_FUNC_IMPL(__imp__sub_82F435D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F435DC"))) PPC_WEAK_FUNC(sub_82F435DC);
PPC_FUNC_IMPL(__imp__sub_82F435DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F435E0"))) PPC_WEAK_FUNC(sub_82F435E0);
PPC_FUNC_IMPL(__imp__sub_82F435E0) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r7,r10,15976
	ctx.r7.s64 = ctx.r10.s64 + 15976;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,16784
	ctx.r4.s64 = ctx.r9.s64 + 16784;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-11368
	ctx.r3.s64 = ctx.r8.s64 + -11368;
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

__attribute__((alias("__imp__sub_82F4364C"))) PPC_WEAK_FUNC(sub_82F4364C);
PPC_FUNC_IMPL(__imp__sub_82F4364C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F43650"))) PPC_WEAK_FUNC(sub_82F43650);
PPC_FUNC_IMPL(__imp__sub_82F43650) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r7,r10,16072
	ctx.r7.s64 = ctx.r10.s64 + 16072;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,16816
	ctx.r4.s64 = ctx.r9.s64 + 16816;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-11320
	ctx.r3.s64 = ctx.r8.s64 + -11320;
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

__attribute__((alias("__imp__sub_82F436BC"))) PPC_WEAK_FUNC(sub_82F436BC);
PPC_FUNC_IMPL(__imp__sub_82F436BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F436C0"))) PPC_WEAK_FUNC(sub_82F436C0);
PPC_FUNC_IMPL(__imp__sub_82F436C0) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,15880
	ctx.r9.s64 = r11.s64 + 15880;
	// addi r4,r10,16144
	ctx.r4.s64 = ctx.r10.s64 + 16144;
	// addi r5,r9,768
	ctx.r5.s64 = ctx.r9.s64 + 768;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// li r10,21
	ctx.r10.s64 = 21;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-11464
	ctx.r5.s64 = ctx.r8.s64 + -11464;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,16844
	ctx.r4.s64 = ctx.r7.s64 + 16844;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,-11272
	ctx.r3.s64 = ctx.r6.s64 + -11272;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,544
	ctx.r6.s64 = 544;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F4373C"))) PPC_WEAK_FUNC(sub_82F4373C);
PPC_FUNC_IMPL(__imp__sub_82F4373C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F43740"))) PPC_WEAK_FUNC(sub_82F43740);
PPC_FUNC_IMPL(__imp__sub_82F43740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8263c1a0
	sub_8263C1A0(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r8,r9,-11224
	ctx.r8.s64 = ctx.r9.s64 + -11224;
	// addi r11,r11,16844
	r11.s64 = r11.s64 + 16844;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// stw r11,-11224(r9)
	PPC_STORE_U32(ctx.r9.u32 + -11224, r11.u32);
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// addi r10,r10,31008
	ctx.r10.s64 = ctx.r10.s64 + 31008;
	// addi r9,r9,30960
	ctx.r9.s64 = ctx.r9.s64 + 30960;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F43798"))) PPC_WEAK_FUNC(sub_82F43798);
PPC_FUNC_IMPL(__imp__sub_82F43798) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4379C"))) PPC_WEAK_FUNC(sub_82F4379C);
PPC_FUNC_IMPL(__imp__sub_82F4379C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F437A0"))) PPC_WEAK_FUNC(sub_82F437A0);
PPC_FUNC_IMPL(__imp__sub_82F437A0) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,17328
	ctx.r6.s64 = ctx.r10.s64 + 17328;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-10572
	ctx.r5.s64 = ctx.r9.s64 + -10572;
	// addi r4,r8,17496
	ctx.r4.s64 = ctx.r8.s64 + 17496;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-11132
	ctx.r3.s64 = ctx.r7.s64 + -11132;
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

__attribute__((alias("__imp__sub_82F43818"))) PPC_WEAK_FUNC(sub_82F43818);
PPC_FUNC_IMPL(__imp__sub_82F43818) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4381C"))) PPC_WEAK_FUNC(sub_82F4381C);
PPC_FUNC_IMPL(__imp__sub_82F4381C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F43820"))) PPC_WEAK_FUNC(sub_82F43820);
PPC_FUNC_IMPL(__imp__sub_82F43820) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8263d410
	sub_8263D410(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r8,r9,-11084
	ctx.r8.s64 = ctx.r9.s64 + -11084;
	// addi r11,r11,17496
	r11.s64 = r11.s64 + 17496;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// stw r11,-11084(r9)
	PPC_STORE_U32(ctx.r9.u32 + -11084, r11.u32);
	// lis r9,-32154
	ctx.r9.s64 = -2107244544;
	// addi r10,r10,-22416
	ctx.r10.s64 = ctx.r10.s64 + -22416;
	// addi r9,r9,-22456
	ctx.r9.s64 = ctx.r9.s64 + -22456;
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

__attribute__((alias("__imp__sub_82F43878"))) PPC_WEAK_FUNC(sub_82F43878);
PPC_FUNC_IMPL(__imp__sub_82F43878) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4387C"))) PPC_WEAK_FUNC(sub_82F4387C);
PPC_FUNC_IMPL(__imp__sub_82F4387C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F43880"))) PPC_WEAK_FUNC(sub_82F43880);
PPC_FUNC_IMPL(__imp__sub_82F43880) {
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
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-12796
	ctx.r5.s64 = ctx.r10.s64 + -12796;
	// addi r4,r9,18296
	ctx.r4.s64 = ctx.r9.s64 + 18296;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,-11068
	ctx.r3.s64 = ctx.r8.s64 + -11068;
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
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F438E4"))) PPC_WEAK_FUNC(sub_82F438E4);
PPC_FUNC_IMPL(__imp__sub_82F438E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F438E8"))) PPC_WEAK_FUNC(sub_82F438E8);
PPC_FUNC_IMPL(__imp__sub_82F438E8) {
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
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-12796
	ctx.r5.s64 = ctx.r10.s64 + -12796;
	// addi r4,r9,18660
	ctx.r4.s64 = ctx.r9.s64 + 18660;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,-11020
	ctx.r3.s64 = ctx.r8.s64 + -11020;
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
	// li r6,108
	ctx.r6.s64 = 108;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F4394C"))) PPC_WEAK_FUNC(sub_82F4394C);
PPC_FUNC_IMPL(__imp__sub_82F4394C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F43950"))) PPC_WEAK_FUNC(sub_82F43950);
PPC_FUNC_IMPL(__imp__sub_82F43950) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,20520
	ctx.r6.s64 = ctx.r10.s64 + 20520;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-11464
	ctx.r5.s64 = ctx.r9.s64 + -11464;
	// addi r4,r8,20568
	ctx.r4.s64 = ctx.r8.s64 + 20568;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-10972
	ctx.r3.s64 = ctx.r7.s64 + -10972;
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
	// li r6,164
	ctx.r6.s64 = 164;
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

__attribute__((alias("__imp__sub_82F439C8"))) PPC_WEAK_FUNC(sub_82F439C8);
PPC_FUNC_IMPL(__imp__sub_82F439C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F439CC"))) PPC_WEAK_FUNC(sub_82F439CC);
PPC_FUNC_IMPL(__imp__sub_82F439CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F439D0"))) PPC_WEAK_FUNC(sub_82F439D0);
PPC_FUNC_IMPL(__imp__sub_82F439D0) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r7,r10,20984
	ctx.r7.s64 = ctx.r10.s64 + 20984;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,21080
	ctx.r4.s64 = ctx.r9.s64 + 21080;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-10924
	ctx.r3.s64 = ctx.r8.s64 + -10924;
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

__attribute__((alias("__imp__sub_82F43A3C"))) PPC_WEAK_FUNC(sub_82F43A3C);
PPC_FUNC_IMPL(__imp__sub_82F43A3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F43A40"))) PPC_WEAK_FUNC(sub_82F43A40);
PPC_FUNC_IMPL(__imp__sub_82F43A40) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r7,r10,21008
	ctx.r7.s64 = ctx.r10.s64 + 21008;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,21100
	ctx.r4.s64 = ctx.r9.s64 + 21100;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-10876
	ctx.r3.s64 = ctx.r8.s64 + -10876;
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

__attribute__((alias("__imp__sub_82F43AAC"))) PPC_WEAK_FUNC(sub_82F43AAC);
PPC_FUNC_IMPL(__imp__sub_82F43AAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F43AB0"))) PPC_WEAK_FUNC(sub_82F43AB0);
PPC_FUNC_IMPL(__imp__sub_82F43AB0) {
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
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-8988
	ctx.r5.s64 = ctx.r10.s64 + -8988;
	// addi r4,r9,21112
	ctx.r4.s64 = ctx.r9.s64 + 21112;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,-10828
	ctx.r3.s64 = ctx.r8.s64 + -10828;
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

__attribute__((alias("__imp__sub_82F43B14"))) PPC_WEAK_FUNC(sub_82F43B14);
PPC_FUNC_IMPL(__imp__sub_82F43B14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F43B18"))) PPC_WEAK_FUNC(sub_82F43B18);
PPC_FUNC_IMPL(__imp__sub_82F43B18) {
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
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-10828
	ctx.r5.s64 = ctx.r10.s64 + -10828;
	// addi r4,r9,21136
	ctx.r4.s64 = ctx.r9.s64 + 21136;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,-10780
	ctx.r3.s64 = ctx.r8.s64 + -10780;
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

__attribute__((alias("__imp__sub_82F43B7C"))) PPC_WEAK_FUNC(sub_82F43B7C);
PPC_FUNC_IMPL(__imp__sub_82F43B7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F43B80"))) PPC_WEAK_FUNC(sub_82F43B80);
PPC_FUNC_IMPL(__imp__sub_82F43B80) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r7,r10,21864
	ctx.r7.s64 = ctx.r10.s64 + 21864;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r11,0
	r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,21936
	ctx.r4.s64 = ctx.r9.s64 + 21936;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-10732
	ctx.r3.s64 = ctx.r8.s64 + -10732;
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

__attribute__((alias("__imp__sub_82F43BF0"))) PPC_WEAK_FUNC(sub_82F43BF0);
PPC_FUNC_IMPL(__imp__sub_82F43BF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F43BF4"))) PPC_WEAK_FUNC(sub_82F43BF4);
PPC_FUNC_IMPL(__imp__sub_82F43BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F43BF8"))) PPC_WEAK_FUNC(sub_82F43BF8);
PPC_FUNC_IMPL(__imp__sub_82F43BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31964
	r11.s64 = -2094792704;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// addi r8,r9,-1424
	ctx.r8.s64 = ctx.r9.s64 + -1424;
	// lwz r11,-1464(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1464);
	// lwz r10,-1448(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1448);
	// stw r11,104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 104, r11.u32);
	// stw r10,152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 152, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F43C1C"))) PPC_WEAK_FUNC(sub_82F43C1C);
PPC_FUNC_IMPL(__imp__sub_82F43C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F43C20"))) PPC_WEAK_FUNC(sub_82F43C20);
PPC_FUNC_IMPL(__imp__sub_82F43C20) {
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
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r10,-1424
	ctx.r5.s64 = ctx.r10.s64 + -1424;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// li r10,12
	ctx.r10.s64 = 12;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r11,0
	r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,22052
	ctx.r4.s64 = ctx.r7.s64 + 22052;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,-10684
	ctx.r3.s64 = ctx.r6.s64 + -10684;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,21760
	ctx.r9.s64 = ctx.r9.s64 + 21760;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r8,0
	ctx.r8.s64 = 0;
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
}

__attribute__((alias("__imp__sub_82F43C98"))) PPC_WEAK_FUNC(sub_82F43C98);
PPC_FUNC_IMPL(__imp__sub_82F43C98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F43C9C"))) PPC_WEAK_FUNC(sub_82F43C9C);
PPC_FUNC_IMPL(__imp__sub_82F43C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F43CA0"))) PPC_WEAK_FUNC(sub_82F43CA0);
PPC_FUNC_IMPL(__imp__sub_82F43CA0) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,10568
	ctx.r10.s64 = r11.s64 + 10568;
	// li r9,-32768
	ctx.r9.s64 = -32768;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// sth r4,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r4.u16);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// sth r9,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r9.u16);
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r7,r8,-10636
	ctx.r7.s64 = ctx.r8.s64 + -10636;
	// addi r11,r11,22052
	r11.s64 = r11.s64 + 22052;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// stw r11,-10636(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10636, r11.u32);
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// addi r10,r10,15000
	ctx.r10.s64 = ctx.r10.s64 + 15000;
	// addi r9,r9,14960
	ctx.r9.s64 = ctx.r9.s64 + 14960;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F43D14"))) PPC_WEAK_FUNC(sub_82F43D14);
PPC_FUNC_IMPL(__imp__sub_82F43D14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F43D18"))) PPC_WEAK_FUNC(sub_82F43D18);
PPC_FUNC_IMPL(__imp__sub_82F43D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31964
	r11.s64 = -2094792704;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r9,r10,-1112
	ctx.r9.s64 = ctx.r10.s64 + -1112;
	// lwz r11,-1136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1136);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F43D30"))) PPC_WEAK_FUNC(sub_82F43D30);
PPC_FUNC_IMPL(__imp__sub_82F43D30) {
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
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r6,r10,-1112
	ctx.r6.s64 = ctx.r10.s64 + -1112;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,22288
	ctx.r4.s64 = ctx.r8.s64 + 22288;
	// addi r3,r7,-10620
	ctx.r3.s64 = ctx.r7.s64 + -10620;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,22244
	ctx.r9.s64 = ctx.r9.s64 + 22244;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
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

__attribute__((alias("__imp__sub_82F43DA0"))) PPC_WEAK_FUNC(sub_82F43DA0);
PPC_FUNC_IMPL(__imp__sub_82F43DA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F43DA4"))) PPC_WEAK_FUNC(sub_82F43DA4);
PPC_FUNC_IMPL(__imp__sub_82F43DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F43DA8"))) PPC_WEAK_FUNC(sub_82F43DA8);
PPC_FUNC_IMPL(__imp__sub_82F43DA8) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r9,r11,23128
	ctx.r9.s64 = r11.s64 + 23128;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r6,r9,20
	ctx.r6.s64 = ctx.r9.s64 + 20;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r5,r10,-12796
	ctx.r5.s64 = ctx.r10.s64 + -12796;
	// addi r4,r8,23172
	ctx.r4.s64 = ctx.r8.s64 + 23172;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-10572
	ctx.r3.s64 = ctx.r7.s64 + -10572;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,1
	r31.s64 = 1;
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
	// li r6,12
	ctx.r6.s64 = 12;
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

__attribute__((alias("__imp__sub_82F43E20"))) PPC_WEAK_FUNC(sub_82F43E20);
PPC_FUNC_IMPL(__imp__sub_82F43E20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F43E24"))) PPC_WEAK_FUNC(sub_82F43E24);
PPC_FUNC_IMPL(__imp__sub_82F43E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F43E28"))) PPC_WEAK_FUNC(sub_82F43E28);
PPC_FUNC_IMPL(__imp__sub_82F43E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31964
	r11.s64 = -2094792704;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r9,r10,-504
	ctx.r9.s64 = ctx.r10.s64 + -504;
	// lwz r11,-1032(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1032);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F43E40"))) PPC_WEAK_FUNC(sub_82F43E40);
PPC_FUNC_IMPL(__imp__sub_82F43E40) {
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
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r6,r10,-504
	ctx.r6.s64 = ctx.r10.s64 + -504;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,27544
	ctx.r4.s64 = ctx.r8.s64 + 27544;
	// addi r3,r7,-10524
	ctx.r3.s64 = ctx.r7.s64 + -10524;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,25384
	ctx.r9.s64 = ctx.r9.s64 + 25384;
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
	// li r6,2
	ctx.r6.s64 = 2;
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

__attribute__((alias("__imp__sub_82F43EB0"))) PPC_WEAK_FUNC(sub_82F43EB0);
PPC_FUNC_IMPL(__imp__sub_82F43EB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F43EB4"))) PPC_WEAK_FUNC(sub_82F43EB4);
PPC_FUNC_IMPL(__imp__sub_82F43EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F43EB8"))) PPC_WEAK_FUNC(sub_82F43EB8);
PPC_FUNC_IMPL(__imp__sub_82F43EB8) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,25424
	ctx.r6.s64 = ctx.r10.s64 + 25424;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-10524
	ctx.r5.s64 = ctx.r9.s64 + -10524;
	// addi r4,r8,27564
	ctx.r4.s64 = ctx.r8.s64 + 27564;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-10476
	ctx.r3.s64 = ctx.r7.s64 + -10476;
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
	// li r6,12
	ctx.r6.s64 = 12;
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

__attribute__((alias("__imp__sub_82F43F30"))) PPC_WEAK_FUNC(sub_82F43F30);
PPC_FUNC_IMPL(__imp__sub_82F43F30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F43F34"))) PPC_WEAK_FUNC(sub_82F43F34);
PPC_FUNC_IMPL(__imp__sub_82F43F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F43F38"))) PPC_WEAK_FUNC(sub_82F43F38);
PPC_FUNC_IMPL(__imp__sub_82F43F38) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r7,r10,25472
	ctx.r7.s64 = ctx.r10.s64 + 25472;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,27588
	ctx.r4.s64 = ctx.r9.s64 + 27588;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-10428
	ctx.r3.s64 = ctx.r8.s64 + -10428;
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

__attribute__((alias("__imp__sub_82F43FA4"))) PPC_WEAK_FUNC(sub_82F43FA4);
PPC_FUNC_IMPL(__imp__sub_82F43FA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F43FA8"))) PPC_WEAK_FUNC(sub_82F43FA8);
PPC_FUNC_IMPL(__imp__sub_82F43FA8) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,25496
	ctx.r6.s64 = ctx.r10.s64 + 25496;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-10524
	ctx.r5.s64 = ctx.r9.s64 + -10524;
	// addi r4,r8,27604
	ctx.r4.s64 = ctx.r8.s64 + 27604;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-10380
	ctx.r3.s64 = ctx.r7.s64 + -10380;
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

__attribute__((alias("__imp__sub_82F44020"))) PPC_WEAK_FUNC(sub_82F44020);
PPC_FUNC_IMPL(__imp__sub_82F44020) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F44024"))) PPC_WEAK_FUNC(sub_82F44024);
PPC_FUNC_IMPL(__imp__sub_82F44024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F44028"))) PPC_WEAK_FUNC(sub_82F44028);
PPC_FUNC_IMPL(__imp__sub_82F44028) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r31,r10,-956
	r31.s64 = ctx.r10.s64 + -956;
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82628d30
	sub_82628D30(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,-12728(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12728);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82F44074"))) PPC_WEAK_FUNC(sub_82F44074);
PPC_FUNC_IMPL(__imp__sub_82F44074) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F44078"))) PPC_WEAK_FUNC(sub_82F44078);
PPC_FUNC_IMPL(__imp__sub_82F44078) {
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
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r5,r10,-956
	ctx.r5.s64 = ctx.r10.s64 + -956;
	// addi r4,r9,25688
	ctx.r4.s64 = ctx.r9.s64 + 25688;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-10524
	ctx.r5.s64 = ctx.r8.s64 + -10524;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,27636
	ctx.r4.s64 = ctx.r7.s64 + 27636;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,-10332
	ctx.r3.s64 = ctx.r6.s64 + -10332;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F440F4"))) PPC_WEAK_FUNC(sub_82F440F4);
PPC_FUNC_IMPL(__imp__sub_82F440F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F440F8"))) PPC_WEAK_FUNC(sub_82F440F8);
PPC_FUNC_IMPL(__imp__sub_82F440F8) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,25760
	ctx.r6.s64 = ctx.r10.s64 + 25760;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-10524
	ctx.r5.s64 = ctx.r9.s64 + -10524;
	// addi r4,r8,27664
	ctx.r4.s64 = ctx.r8.s64 + 27664;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-10284
	ctx.r3.s64 = ctx.r7.s64 + -10284;
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
	// li r6,8
	ctx.r6.s64 = 8;
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

__attribute__((alias("__imp__sub_82F44170"))) PPC_WEAK_FUNC(sub_82F44170);
PPC_FUNC_IMPL(__imp__sub_82F44170) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F44174"))) PPC_WEAK_FUNC(sub_82F44174);
PPC_FUNC_IMPL(__imp__sub_82F44174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F44178"))) PPC_WEAK_FUNC(sub_82F44178);
PPC_FUNC_IMPL(__imp__sub_82F44178) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,25784
	ctx.r6.s64 = ctx.r10.s64 + 25784;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-10524
	ctx.r5.s64 = ctx.r9.s64 + -10524;
	// addi r4,r8,27696
	ctx.r4.s64 = ctx.r8.s64 + 27696;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-10236
	ctx.r3.s64 = ctx.r7.s64 + -10236;
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
	// li r6,144
	ctx.r6.s64 = 144;
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

__attribute__((alias("__imp__sub_82F441F0"))) PPC_WEAK_FUNC(sub_82F441F0);
PPC_FUNC_IMPL(__imp__sub_82F441F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F441F4"))) PPC_WEAK_FUNC(sub_82F441F4);
PPC_FUNC_IMPL(__imp__sub_82F441F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F441F8"))) PPC_WEAK_FUNC(sub_82F441F8);
PPC_FUNC_IMPL(__imp__sub_82F441F8) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,25832
	ctx.r6.s64 = ctx.r10.s64 + 25832;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-10524
	ctx.r5.s64 = ctx.r9.s64 + -10524;
	// addi r4,r8,27732
	ctx.r4.s64 = ctx.r8.s64 + 27732;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-10188
	ctx.r3.s64 = ctx.r7.s64 + -10188;
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

__attribute__((alias("__imp__sub_82F44270"))) PPC_WEAK_FUNC(sub_82F44270);
PPC_FUNC_IMPL(__imp__sub_82F44270) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F44274"))) PPC_WEAK_FUNC(sub_82F44274);
PPC_FUNC_IMPL(__imp__sub_82F44274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F44278"))) PPC_WEAK_FUNC(sub_82F44278);
PPC_FUNC_IMPL(__imp__sub_82F44278) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,25880
	ctx.r6.s64 = ctx.r10.s64 + 25880;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-10524
	ctx.r5.s64 = ctx.r9.s64 + -10524;
	// addi r4,r8,27772
	ctx.r4.s64 = ctx.r8.s64 + 27772;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-10140
	ctx.r3.s64 = ctx.r7.s64 + -10140;
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

__attribute__((alias("__imp__sub_82F442F0"))) PPC_WEAK_FUNC(sub_82F442F0);
PPC_FUNC_IMPL(__imp__sub_82F442F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F442F4"))) PPC_WEAK_FUNC(sub_82F442F4);
PPC_FUNC_IMPL(__imp__sub_82F442F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F442F8"))) PPC_WEAK_FUNC(sub_82F442F8);
PPC_FUNC_IMPL(__imp__sub_82F442F8) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,25928
	ctx.r6.s64 = ctx.r10.s64 + 25928;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-10524
	ctx.r5.s64 = ctx.r9.s64 + -10524;
	// addi r4,r8,27808
	ctx.r4.s64 = ctx.r8.s64 + 27808;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-10092
	ctx.r3.s64 = ctx.r7.s64 + -10092;
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
	// li r6,4
	ctx.r6.s64 = 4;
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

__attribute__((alias("__imp__sub_82F44370"))) PPC_WEAK_FUNC(sub_82F44370);
PPC_FUNC_IMPL(__imp__sub_82F44370) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F44374"))) PPC_WEAK_FUNC(sub_82F44374);
PPC_FUNC_IMPL(__imp__sub_82F44374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F44378"))) PPC_WEAK_FUNC(sub_82F44378);
PPC_FUNC_IMPL(__imp__sub_82F44378) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,25952
	ctx.r6.s64 = ctx.r10.s64 + 25952;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-10524
	ctx.r5.s64 = ctx.r9.s64 + -10524;
	// addi r4,r8,27840
	ctx.r4.s64 = ctx.r8.s64 + 27840;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-10044
	ctx.r3.s64 = ctx.r7.s64 + -10044;
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
	// li r6,4
	ctx.r6.s64 = 4;
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

__attribute__((alias("__imp__sub_82F443F0"))) PPC_WEAK_FUNC(sub_82F443F0);
PPC_FUNC_IMPL(__imp__sub_82F443F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F443F4"))) PPC_WEAK_FUNC(sub_82F443F4);
PPC_FUNC_IMPL(__imp__sub_82F443F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F443F8"))) PPC_WEAK_FUNC(sub_82F443F8);
PPC_FUNC_IMPL(__imp__sub_82F443F8) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,25976
	ctx.r6.s64 = ctx.r10.s64 + 25976;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-10524
	ctx.r5.s64 = ctx.r9.s64 + -10524;
	// addi r4,r8,27864
	ctx.r4.s64 = ctx.r8.s64 + 27864;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-9996
	ctx.r3.s64 = ctx.r7.s64 + -9996;
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
	// li r6,12
	ctx.r6.s64 = 12;
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

__attribute__((alias("__imp__sub_82F44470"))) PPC_WEAK_FUNC(sub_82F44470);
PPC_FUNC_IMPL(__imp__sub_82F44470) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F44474"))) PPC_WEAK_FUNC(sub_82F44474);
PPC_FUNC_IMPL(__imp__sub_82F44474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F44478"))) PPC_WEAK_FUNC(sub_82F44478);
PPC_FUNC_IMPL(__imp__sub_82F44478) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,26048
	ctx.r6.s64 = ctx.r10.s64 + 26048;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-10524
	ctx.r5.s64 = ctx.r9.s64 + -10524;
	// addi r4,r8,27892
	ctx.r4.s64 = ctx.r8.s64 + 27892;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-9948
	ctx.r3.s64 = ctx.r7.s64 + -9948;
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
	// li r6,12
	ctx.r6.s64 = 12;
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

__attribute__((alias("__imp__sub_82F444F0"))) PPC_WEAK_FUNC(sub_82F444F0);
PPC_FUNC_IMPL(__imp__sub_82F444F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F444F4"))) PPC_WEAK_FUNC(sub_82F444F4);
PPC_FUNC_IMPL(__imp__sub_82F444F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F444F8"))) PPC_WEAK_FUNC(sub_82F444F8);
PPC_FUNC_IMPL(__imp__sub_82F444F8) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,26120
	ctx.r6.s64 = ctx.r10.s64 + 26120;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-10524
	ctx.r5.s64 = ctx.r9.s64 + -10524;
	// addi r4,r8,27920
	ctx.r4.s64 = ctx.r8.s64 + 27920;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-9900
	ctx.r3.s64 = ctx.r7.s64 + -9900;
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
	// li r6,4
	ctx.r6.s64 = 4;
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

__attribute__((alias("__imp__sub_82F44570"))) PPC_WEAK_FUNC(sub_82F44570);
PPC_FUNC_IMPL(__imp__sub_82F44570) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F44574"))) PPC_WEAK_FUNC(sub_82F44574);
PPC_FUNC_IMPL(__imp__sub_82F44574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F44578"))) PPC_WEAK_FUNC(sub_82F44578);
PPC_FUNC_IMPL(__imp__sub_82F44578) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,26144
	ctx.r6.s64 = ctx.r10.s64 + 26144;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-10524
	ctx.r5.s64 = ctx.r9.s64 + -10524;
	// addi r4,r8,27944
	ctx.r4.s64 = ctx.r8.s64 + 27944;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-9852
	ctx.r3.s64 = ctx.r7.s64 + -9852;
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
	// li r6,4
	ctx.r6.s64 = 4;
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

__attribute__((alias("__imp__sub_82F445F0"))) PPC_WEAK_FUNC(sub_82F445F0);
PPC_FUNC_IMPL(__imp__sub_82F445F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F445F4"))) PPC_WEAK_FUNC(sub_82F445F4);
PPC_FUNC_IMPL(__imp__sub_82F445F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F445F8"))) PPC_WEAK_FUNC(sub_82F445F8);
PPC_FUNC_IMPL(__imp__sub_82F445F8) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r11,r11,26192
	r11.s64 = r11.s64 + 26192;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r11,120
	ctx.r6.s64 = r11.s64 + 120;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,-10524
	ctx.r5.s64 = ctx.r9.s64 + -10524;
	// addi r4,r8,27968
	ctx.r4.s64 = ctx.r8.s64 + 27968;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r7,-9804
	ctx.r3.s64 = ctx.r7.s64 + -9804;
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
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F44668"))) PPC_WEAK_FUNC(sub_82F44668);
PPC_FUNC_IMPL(__imp__sub_82F44668) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4466C"))) PPC_WEAK_FUNC(sub_82F4466C);
PPC_FUNC_IMPL(__imp__sub_82F4466C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F44670"))) PPC_WEAK_FUNC(sub_82F44670);
PPC_FUNC_IMPL(__imp__sub_82F44670) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r11,r11,26336
	r11.s64 = r11.s64 + 26336;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r11,144
	ctx.r6.s64 = r11.s64 + 144;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,-10524
	ctx.r5.s64 = ctx.r9.s64 + -10524;
	// addi r4,r8,27996
	ctx.r4.s64 = ctx.r8.s64 + 27996;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r7,-9756
	ctx.r3.s64 = ctx.r7.s64 + -9756;
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

__attribute__((alias("__imp__sub_82F446E0"))) PPC_WEAK_FUNC(sub_82F446E0);
PPC_FUNC_IMPL(__imp__sub_82F446E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F446E4"))) PPC_WEAK_FUNC(sub_82F446E4);
PPC_FUNC_IMPL(__imp__sub_82F446E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F446E8"))) PPC_WEAK_FUNC(sub_82F446E8);
PPC_FUNC_IMPL(__imp__sub_82F446E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31964
	r11.s64 = -2094792704;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r9,r10,-480
	ctx.r9.s64 = ctx.r10.s64 + -480;
	// lwz r11,-1024(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1024);
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F44700"))) PPC_WEAK_FUNC(sub_82F44700);
PPC_FUNC_IMPL(__imp__sub_82F44700) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r9,r11,26524
	ctx.r9.s64 = r11.s64 + 26524;
	// addi r4,r10,-480
	ctx.r4.s64 = ctx.r10.s64 + -480;
	// addi r5,r9,20
	ctx.r5.s64 = ctx.r9.s64 + 20;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-10524
	ctx.r5.s64 = ctx.r8.s64 + -10524;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,28048
	ctx.r4.s64 = ctx.r7.s64 + 28048;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-9708
	ctx.r3.s64 = ctx.r6.s64 + -9708;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
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

__attribute__((alias("__imp__sub_82F44778"))) PPC_WEAK_FUNC(sub_82F44778);
PPC_FUNC_IMPL(__imp__sub_82F44778) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4477C"))) PPC_WEAK_FUNC(sub_82F4477C);
PPC_FUNC_IMPL(__imp__sub_82F4477C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F44780"))) PPC_WEAK_FUNC(sub_82F44780);
PPC_FUNC_IMPL(__imp__sub_82F44780) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,26584
	ctx.r6.s64 = ctx.r10.s64 + 26584;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-10524
	ctx.r5.s64 = ctx.r9.s64 + -10524;
	// addi r4,r8,28076
	ctx.r4.s64 = ctx.r8.s64 + 28076;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-9660
	ctx.r3.s64 = ctx.r7.s64 + -9660;
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
	// li r6,12
	ctx.r6.s64 = 12;
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

__attribute__((alias("__imp__sub_82F447F8"))) PPC_WEAK_FUNC(sub_82F447F8);
PPC_FUNC_IMPL(__imp__sub_82F447F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F447FC"))) PPC_WEAK_FUNC(sub_82F447FC);
PPC_FUNC_IMPL(__imp__sub_82F447FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F44800"))) PPC_WEAK_FUNC(sub_82F44800);
PPC_FUNC_IMPL(__imp__sub_82F44800) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,26680
	ctx.r6.s64 = ctx.r10.s64 + 26680;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-10524
	ctx.r5.s64 = ctx.r9.s64 + -10524;
	// addi r4,r8,28108
	ctx.r4.s64 = ctx.r8.s64 + 28108;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-9612
	ctx.r3.s64 = ctx.r7.s64 + -9612;
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

__attribute__((alias("__imp__sub_82F44878"))) PPC_WEAK_FUNC(sub_82F44878);
PPC_FUNC_IMPL(__imp__sub_82F44878) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4487C"))) PPC_WEAK_FUNC(sub_82F4487C);
PPC_FUNC_IMPL(__imp__sub_82F4487C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F44880"))) PPC_WEAK_FUNC(sub_82F44880);
PPC_FUNC_IMPL(__imp__sub_82F44880) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,26848
	ctx.r6.s64 = ctx.r10.s64 + 26848;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-10524
	ctx.r5.s64 = ctx.r9.s64 + -10524;
	// addi r4,r8,28136
	ctx.r4.s64 = ctx.r8.s64 + 28136;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-9564
	ctx.r3.s64 = ctx.r7.s64 + -9564;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,5
	r31.s64 = 5;
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

__attribute__((alias("__imp__sub_82F448F8"))) PPC_WEAK_FUNC(sub_82F448F8);
PPC_FUNC_IMPL(__imp__sub_82F448F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F448FC"))) PPC_WEAK_FUNC(sub_82F448FC);
PPC_FUNC_IMPL(__imp__sub_82F448FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F44900"))) PPC_WEAK_FUNC(sub_82F44900);
PPC_FUNC_IMPL(__imp__sub_82F44900) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,26968
	ctx.r6.s64 = ctx.r10.s64 + 26968;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-10524
	ctx.r5.s64 = ctx.r9.s64 + -10524;
	// addi r4,r8,28168
	ctx.r4.s64 = ctx.r8.s64 + 28168;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-9516
	ctx.r3.s64 = ctx.r7.s64 + -9516;
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
	// li r6,8
	ctx.r6.s64 = 8;
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

__attribute__((alias("__imp__sub_82F44978"))) PPC_WEAK_FUNC(sub_82F44978);
PPC_FUNC_IMPL(__imp__sub_82F44978) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4497C"))) PPC_WEAK_FUNC(sub_82F4497C);
PPC_FUNC_IMPL(__imp__sub_82F4497C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F44980"))) PPC_WEAK_FUNC(sub_82F44980);
PPC_FUNC_IMPL(__imp__sub_82F44980) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,27040
	ctx.r6.s64 = ctx.r10.s64 + 27040;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-10524
	ctx.r5.s64 = ctx.r9.s64 + -10524;
	// addi r4,r8,28200
	ctx.r4.s64 = ctx.r8.s64 + 28200;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-9468
	ctx.r3.s64 = ctx.r7.s64 + -9468;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,6
	r31.s64 = 6;
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
	// li r6,16
	ctx.r6.s64 = 16;
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

__attribute__((alias("__imp__sub_82F449F8"))) PPC_WEAK_FUNC(sub_82F449F8);
PPC_FUNC_IMPL(__imp__sub_82F449F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F449FC"))) PPC_WEAK_FUNC(sub_82F449FC);
PPC_FUNC_IMPL(__imp__sub_82F449FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F44A00"))) PPC_WEAK_FUNC(sub_82F44A00);
PPC_FUNC_IMPL(__imp__sub_82F44A00) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,27184
	ctx.r6.s64 = ctx.r10.s64 + 27184;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-10524
	ctx.r5.s64 = ctx.r9.s64 + -10524;
	// addi r4,r8,28228
	ctx.r4.s64 = ctx.r8.s64 + 28228;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-9420
	ctx.r3.s64 = ctx.r7.s64 + -9420;
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

__attribute__((alias("__imp__sub_82F44A78"))) PPC_WEAK_FUNC(sub_82F44A78);
PPC_FUNC_IMPL(__imp__sub_82F44A78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F44A7C"))) PPC_WEAK_FUNC(sub_82F44A7C);
PPC_FUNC_IMPL(__imp__sub_82F44A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F44A80"))) PPC_WEAK_FUNC(sub_82F44A80);
PPC_FUNC_IMPL(__imp__sub_82F44A80) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,27280
	ctx.r6.s64 = ctx.r10.s64 + 27280;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-10524
	ctx.r5.s64 = ctx.r9.s64 + -10524;
	// addi r4,r8,28252
	ctx.r4.s64 = ctx.r8.s64 + 28252;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-9372
	ctx.r3.s64 = ctx.r7.s64 + -9372;
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

__attribute__((alias("__imp__sub_82F44AF8"))) PPC_WEAK_FUNC(sub_82F44AF8);
PPC_FUNC_IMPL(__imp__sub_82F44AF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F44AFC"))) PPC_WEAK_FUNC(sub_82F44AFC);
PPC_FUNC_IMPL(__imp__sub_82F44AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F44B00"))) PPC_WEAK_FUNC(sub_82F44B00);
PPC_FUNC_IMPL(__imp__sub_82F44B00) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,27376
	ctx.r6.s64 = ctx.r10.s64 + 27376;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-9372
	ctx.r5.s64 = ctx.r9.s64 + -9372;
	// addi r4,r8,28280
	ctx.r4.s64 = ctx.r8.s64 + 28280;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-9324
	ctx.r3.s64 = ctx.r7.s64 + -9324;
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

__attribute__((alias("__imp__sub_82F44B78"))) PPC_WEAK_FUNC(sub_82F44B78);
PPC_FUNC_IMPL(__imp__sub_82F44B78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F44B7C"))) PPC_WEAK_FUNC(sub_82F44B7C);
PPC_FUNC_IMPL(__imp__sub_82F44B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F44B80"))) PPC_WEAK_FUNC(sub_82F44B80);
PPC_FUNC_IMPL(__imp__sub_82F44B80) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,27424
	ctx.r6.s64 = ctx.r10.s64 + 27424;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-9372
	ctx.r5.s64 = ctx.r9.s64 + -9372;
	// addi r4,r8,28320
	ctx.r4.s64 = ctx.r8.s64 + 28320;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-9276
	ctx.r3.s64 = ctx.r7.s64 + -9276;
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

__attribute__((alias("__imp__sub_82F44BFC"))) PPC_WEAK_FUNC(sub_82F44BFC);
PPC_FUNC_IMPL(__imp__sub_82F44BFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F44C00"))) PPC_WEAK_FUNC(sub_82F44C00);
PPC_FUNC_IMPL(__imp__sub_82F44C00) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,27472
	ctx.r6.s64 = ctx.r10.s64 + 27472;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-9372
	ctx.r5.s64 = ctx.r9.s64 + -9372;
	// addi r4,r8,28360
	ctx.r4.s64 = ctx.r8.s64 + 28360;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-9228
	ctx.r3.s64 = ctx.r7.s64 + -9228;
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

__attribute__((alias("__imp__sub_82F44C78"))) PPC_WEAK_FUNC(sub_82F44C78);
PPC_FUNC_IMPL(__imp__sub_82F44C78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F44C7C"))) PPC_WEAK_FUNC(sub_82F44C7C);
PPC_FUNC_IMPL(__imp__sub_82F44C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F44C80"))) PPC_WEAK_FUNC(sub_82F44C80);
PPC_FUNC_IMPL(__imp__sub_82F44C80) {
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
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-9372
	ctx.r5.s64 = ctx.r10.s64 + -9372;
	// addi r4,r9,28408
	ctx.r4.s64 = ctx.r9.s64 + 28408;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,-9180
	ctx.r3.s64 = ctx.r8.s64 + -9180;
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

__attribute__((alias("__imp__sub_82F44CE4"))) PPC_WEAK_FUNC(sub_82F44CE4);
PPC_FUNC_IMPL(__imp__sub_82F44CE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F44CE8"))) PPC_WEAK_FUNC(sub_82F44CE8);
PPC_FUNC_IMPL(__imp__sub_82F44CE8) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,27520
	ctx.r6.s64 = ctx.r10.s64 + 27520;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-9372
	ctx.r5.s64 = ctx.r9.s64 + -9372;
	// addi r4,r8,28448
	ctx.r4.s64 = ctx.r8.s64 + 28448;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-9132
	ctx.r3.s64 = ctx.r7.s64 + -9132;
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

__attribute__((alias("__imp__sub_82F44D60"))) PPC_WEAK_FUNC(sub_82F44D60);
PPC_FUNC_IMPL(__imp__sub_82F44D60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F44D64"))) PPC_WEAK_FUNC(sub_82F44D64);
PPC_FUNC_IMPL(__imp__sub_82F44D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F44D68"))) PPC_WEAK_FUNC(sub_82F44D68);
PPC_FUNC_IMPL(__imp__sub_82F44D68) {
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
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-9372
	ctx.r5.s64 = ctx.r10.s64 + -9372;
	// addi r4,r9,28488
	ctx.r4.s64 = ctx.r9.s64 + 28488;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,-9084
	ctx.r3.s64 = ctx.r8.s64 + -9084;
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

__attribute__((alias("__imp__sub_82F44DCC"))) PPC_WEAK_FUNC(sub_82F44DCC);
PPC_FUNC_IMPL(__imp__sub_82F44DCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F44DD0"))) PPC_WEAK_FUNC(sub_82F44DD0);
PPC_FUNC_IMPL(__imp__sub_82F44DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31964
	r11.s64 = -2094792704;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r9,r10,-64
	ctx.r9.s64 = ctx.r10.s64 + -64;
	// lwz r11,-88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -88);
	// stw r11,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F44DE8"))) PPC_WEAK_FUNC(sub_82F44DE8);
PPC_FUNC_IMPL(__imp__sub_82F44DE8) {
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
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r10,-64
	ctx.r5.s64 = ctx.r10.s64 + -64;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// li r10,9
	ctx.r10.s64 = 9;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r11,0
	r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,29600
	ctx.r4.s64 = ctx.r7.s64 + 29600;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-9036
	ctx.r3.s64 = ctx.r6.s64 + -9036;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,29432
	ctx.r9.s64 = ctx.r9.s64 + 29432;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
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
}

__attribute__((alias("__imp__sub_82F44E60"))) PPC_WEAK_FUNC(sub_82F44E60);
PPC_FUNC_IMPL(__imp__sub_82F44E60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F44E64"))) PPC_WEAK_FUNC(sub_82F44E64);
PPC_FUNC_IMPL(__imp__sub_82F44E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F44E68"))) PPC_WEAK_FUNC(sub_82F44E68);
PPC_FUNC_IMPL(__imp__sub_82F44E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31964
	r11.s64 = -2094792704;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r9,r10,160
	ctx.r9.s64 = ctx.r10.s64 + 160;
	// lwz r11,152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F44E80"))) PPC_WEAK_FUNC(sub_82F44E80);
PPC_FUNC_IMPL(__imp__sub_82F44E80) {
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
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r10,160
	ctx.r5.s64 = ctx.r10.s64 + 160;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// li r10,12
	ctx.r10.s64 = 12;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r11,0
	r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,15536
	ctx.r4.s64 = ctx.r7.s64 + 15536;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,-8988
	ctx.r3.s64 = ctx.r6.s64 + -8988;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,29872
	ctx.r9.s64 = ctx.r9.s64 + 29872;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
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
}

__attribute__((alias("__imp__sub_82F44EF8"))) PPC_WEAK_FUNC(sub_82F44EF8);
PPC_FUNC_IMPL(__imp__sub_82F44EF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F44EFC"))) PPC_WEAK_FUNC(sub_82F44EFC);
PPC_FUNC_IMPL(__imp__sub_82F44EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F44F00"))) PPC_WEAK_FUNC(sub_82F44F00);
PPC_FUNC_IMPL(__imp__sub_82F44F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31964
	r11.s64 = -2094792704;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r9,r10,452
	ctx.r9.s64 = ctx.r10.s64 + 452;
	// lwz r11,448(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 448);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F44F18"))) PPC_WEAK_FUNC(sub_82F44F18);
PPC_FUNC_IMPL(__imp__sub_82F44F18) {
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
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// addi r5,r10,452
	ctx.r5.s64 = ctx.r10.s64 + 452;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,30296
	ctx.r4.s64 = ctx.r7.s64 + 30296;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-8940
	ctx.r3.s64 = ctx.r6.s64 + -8940;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,1
	r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,30276
	ctx.r9.s64 = ctx.r9.s64 + 30276;
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
	// li r6,12
	ctx.r6.s64 = 12;
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

__attribute__((alias("__imp__sub_82F44F94"))) PPC_WEAK_FUNC(sub_82F44F94);
PPC_FUNC_IMPL(__imp__sub_82F44F94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F44F98"))) PPC_WEAK_FUNC(sub_82F44F98);
PPC_FUNC_IMPL(__imp__sub_82F44F98) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r7,r10,30328
	ctx.r7.s64 = ctx.r10.s64 + 30328;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,30400
	ctx.r4.s64 = ctx.r9.s64 + 30400;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-8892
	ctx.r3.s64 = ctx.r8.s64 + -8892;
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
	// li r6,32
	ctx.r6.s64 = 32;
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

__attribute__((alias("__imp__sub_82F45004"))) PPC_WEAK_FUNC(sub_82F45004);
PPC_FUNC_IMPL(__imp__sub_82F45004) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F45008"))) PPC_WEAK_FUNC(sub_82F45008);
PPC_FUNC_IMPL(__imp__sub_82F45008) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r9,r11,-31972
	ctx.r9.s64 = r11.s64 + -31972;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// addi r6,r9,60
	ctx.r6.s64 = ctx.r9.s64 + 60;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-12796
	ctx.r5.s64 = ctx.r10.s64 + -12796;
	// addi r4,r8,-29944
	ctx.r4.s64 = ctx.r8.s64 + -29944;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-8844
	ctx.r3.s64 = ctx.r7.s64 + -8844;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,82
	r31.s64 = 82;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,848
	ctx.r6.s64 = 848;
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

__attribute__((alias("__imp__sub_82F45084"))) PPC_WEAK_FUNC(sub_82F45084);
PPC_FUNC_IMPL(__imp__sub_82F45084) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F45088"))) PPC_WEAK_FUNC(sub_82F45088);
PPC_FUNC_IMPL(__imp__sub_82F45088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-944(r1)
	ea = -944 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82641a70
	sub_82641A70(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r8,r9,-8796
	ctx.r8.s64 = ctx.r9.s64 + -8796;
	// addi r11,r11,-29944
	r11.s64 = r11.s64 + -29944;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// stw r11,-8796(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8796, r11.u32);
	// lis r9,-32152
	ctx.r9.s64 = -2107113472;
	// addi r10,r10,-15768
	ctx.r10.s64 = ctx.r10.s64 + -15768;
	// addi r9,r9,-15752
	ctx.r9.s64 = ctx.r9.s64 + -15752;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F450E0"))) PPC_WEAK_FUNC(sub_82F450E0);
PPC_FUNC_IMPL(__imp__sub_82F450E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F450E4"))) PPC_WEAK_FUNC(sub_82F450E4);
PPC_FUNC_IMPL(__imp__sub_82F450E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F450E8"))) PPC_WEAK_FUNC(sub_82F450E8);
PPC_FUNC_IMPL(__imp__sub_82F450E8) {
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
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-11272
	ctx.r5.s64 = ctx.r10.s64 + -11272;
	// addi r4,r9,-29932
	ctx.r4.s64 = ctx.r9.s64 + -29932;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,-8780
	ctx.r3.s64 = ctx.r8.s64 + -8780;
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
	// li r6,544
	ctx.r6.s64 = 544;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F4514C"))) PPC_WEAK_FUNC(sub_82F4514C);
PPC_FUNC_IMPL(__imp__sub_82F4514C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F45150"))) PPC_WEAK_FUNC(sub_82F45150);
PPC_FUNC_IMPL(__imp__sub_82F45150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8263c1a0
	sub_8263C1A0(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,-29932
	r11.s64 = r11.s64 + -29932;
	// addi r6,r9,-8732
	ctx.r6.s64 = ctx.r9.s64 + -8732;
	// lis r7,-32152
	ctx.r7.s64 = -2107113472;
	// stw r11,-8732(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8732, r11.u32);
	// lis r8,-32152
	ctx.r8.s64 = -2107113472;
	// addi r9,r10,13952
	ctx.r9.s64 = ctx.r10.s64 + 13952;
	// addi r10,r7,-15624
	ctx.r10.s64 = ctx.r7.s64 + -15624;
	// addi r11,r8,-15664
	r11.s64 = ctx.r8.s64 + -15664;
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r11.u32);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F451AC"))) PPC_WEAK_FUNC(sub_82F451AC);
PPC_FUNC_IMPL(__imp__sub_82F451AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F451B0"))) PPC_WEAK_FUNC(sub_82F451B0);
PPC_FUNC_IMPL(__imp__sub_82F451B0) {
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
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-12796
	ctx.r5.s64 = ctx.r10.s64 + -12796;
	// addi r4,r9,-29916
	ctx.r4.s64 = ctx.r9.s64 + -29916;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,-8716
	ctx.r3.s64 = ctx.r8.s64 + -8716;
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
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F45214"))) PPC_WEAK_FUNC(sub_82F45214);
PPC_FUNC_IMPL(__imp__sub_82F45214) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F45218"))) PPC_WEAK_FUNC(sub_82F45218);
PPC_FUNC_IMPL(__imp__sub_82F45218) {
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
	// addi r3,r11,11884
	ctx.r3.s64 = r11.s64 + 11884;
	// bl 0x8267f308
	sub_8267F308(ctx, base);
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18232
	ctx.r3.s64 = r11.s64 + -18232;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F45248"))) PPC_WEAK_FUNC(sub_82F45248);
PPC_FUNC_IMPL(__imp__sub_82F45248) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4524C"))) PPC_WEAK_FUNC(sub_82F4524C);
PPC_FUNC_IMPL(__imp__sub_82F4524C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45250"))) PPC_WEAK_FUNC(sub_82F45250);
PPC_FUNC_IMPL(__imp__sub_82F45250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32151
	r11.s64 = -2107047936;
	// lis r10,-32151
	ctx.r10.s64 = -2107047936;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,12928
	ctx.r3.s64 = ctx.r9.s64 + 12928;
	// addi r5,r11,-9720
	ctx.r5.s64 = r11.s64 + -9720;
	// addi r4,r10,-9776
	ctx.r4.s64 = ctx.r10.s64 + -9776;
	// b 0x82681400
	sub_82681400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F45270"))) PPC_WEAK_FUNC(sub_82F45270);
PPC_FUNC_IMPL(__imp__sub_82F45270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,12976
	ctx.r3.s64 = r11.s64 + 12976;
}

__attribute__((alias("__imp__sub_82F45278"))) PPC_WEAK_FUNC(sub_82F45278);
PPC_FUNC_IMPL(__imp__sub_82F45278) {
	PPC_FUNC_PROLOGUE();
	// b 0x82690210
	sub_82690210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4527C"))) PPC_WEAK_FUNC(sub_82F4527C);
PPC_FUNC_IMPL(__imp__sub_82F4527C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45280"))) PPC_WEAK_FUNC(sub_82F45280);
PPC_FUNC_IMPL(__imp__sub_82F45280) {
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
	// li r11,1
	r11.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// bl 0x82605a60
	sub_82605A60(ctx, base);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// std r11,12992(r10)
	PPC_STORE_U64(ctx.r10.u32 + 12992, r11.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F452B4"))) PPC_WEAK_FUNC(sub_82F452B4);
PPC_FUNC_IMPL(__imp__sub_82F452B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F452B8"))) PPC_WEAK_FUNC(sub_82F452B8);
PPC_FUNC_IMPL(__imp__sub_82F452B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lfd f0,12992(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 12992);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfd f0,-27696(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -27696);
	// fmul f0,f13,f0
	f0.f64 = ctx.f13.f64 * f0.f64;
	// stfd f0,13000(r9)
	PPC_STORE_U64(ctx.r9.u32 + 13000, f0.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F452DC"))) PPC_WEAK_FUNC(sub_82F452DC);
PPC_FUNC_IMPL(__imp__sub_82F452DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F452E0"))) PPC_WEAK_FUNC(sub_82F452E0);
PPC_FUNC_IMPL(__imp__sub_82F452E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18200
	ctx.r3.s64 = r11.s64 + -18200;
}

__attribute__((alias("__imp__sub_82F452E8"))) PPC_WEAK_FUNC(sub_82F452E8);
PPC_FUNC_IMPL(__imp__sub_82F452E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F452EC"))) PPC_WEAK_FUNC(sub_82F452EC);
PPC_FUNC_IMPL(__imp__sub_82F452EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F452F0"))) PPC_WEAK_FUNC(sub_82F452F0);
PPC_FUNC_IMPL(__imp__sub_82F452F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18192
	ctx.r3.s64 = r11.s64 + -18192;
}

__attribute__((alias("__imp__sub_82F452F8"))) PPC_WEAK_FUNC(sub_82F452F8);
PPC_FUNC_IMPL(__imp__sub_82F452F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F452FC"))) PPC_WEAK_FUNC(sub_82F452FC);
PPC_FUNC_IMPL(__imp__sub_82F452FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45300"))) PPC_WEAK_FUNC(sub_82F45300);
PPC_FUNC_IMPL(__imp__sub_82F45300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18184
	ctx.r3.s64 = r11.s64 + -18184;
}

__attribute__((alias("__imp__sub_82F45308"))) PPC_WEAK_FUNC(sub_82F45308);
PPC_FUNC_IMPL(__imp__sub_82F45308) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4530C"))) PPC_WEAK_FUNC(sub_82F4530C);
PPC_FUNC_IMPL(__imp__sub_82F4530C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45310"))) PPC_WEAK_FUNC(sub_82F45310);
PPC_FUNC_IMPL(__imp__sub_82F45310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18176
	ctx.r3.s64 = r11.s64 + -18176;
}

__attribute__((alias("__imp__sub_82F45318"))) PPC_WEAK_FUNC(sub_82F45318);
PPC_FUNC_IMPL(__imp__sub_82F45318) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4531C"))) PPC_WEAK_FUNC(sub_82F4531C);
PPC_FUNC_IMPL(__imp__sub_82F4531C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45320"))) PPC_WEAK_FUNC(sub_82F45320);
PPC_FUNC_IMPL(__imp__sub_82F45320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18168
	ctx.r3.s64 = r11.s64 + -18168;
}

__attribute__((alias("__imp__sub_82F45328"))) PPC_WEAK_FUNC(sub_82F45328);
PPC_FUNC_IMPL(__imp__sub_82F45328) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4532C"))) PPC_WEAK_FUNC(sub_82F4532C);
PPC_FUNC_IMPL(__imp__sub_82F4532C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45330"))) PPC_WEAK_FUNC(sub_82F45330);
PPC_FUNC_IMPL(__imp__sub_82F45330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18160
	ctx.r3.s64 = r11.s64 + -18160;
}

__attribute__((alias("__imp__sub_82F45338"))) PPC_WEAK_FUNC(sub_82F45338);
PPC_FUNC_IMPL(__imp__sub_82F45338) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4533C"))) PPC_WEAK_FUNC(sub_82F4533C);
PPC_FUNC_IMPL(__imp__sub_82F4533C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45340"))) PPC_WEAK_FUNC(sub_82F45340);
PPC_FUNC_IMPL(__imp__sub_82F45340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18152
	ctx.r3.s64 = r11.s64 + -18152;
}

__attribute__((alias("__imp__sub_82F45348"))) PPC_WEAK_FUNC(sub_82F45348);
PPC_FUNC_IMPL(__imp__sub_82F45348) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4534C"))) PPC_WEAK_FUNC(sub_82F4534C);
PPC_FUNC_IMPL(__imp__sub_82F4534C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45350"))) PPC_WEAK_FUNC(sub_82F45350);
PPC_FUNC_IMPL(__imp__sub_82F45350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18144
	ctx.r3.s64 = r11.s64 + -18144;
}

__attribute__((alias("__imp__sub_82F45358"))) PPC_WEAK_FUNC(sub_82F45358);
PPC_FUNC_IMPL(__imp__sub_82F45358) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4535C"))) PPC_WEAK_FUNC(sub_82F4535C);
PPC_FUNC_IMPL(__imp__sub_82F4535C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45360"))) PPC_WEAK_FUNC(sub_82F45360);
PPC_FUNC_IMPL(__imp__sub_82F45360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18136
	ctx.r3.s64 = r11.s64 + -18136;
}

__attribute__((alias("__imp__sub_82F45368"))) PPC_WEAK_FUNC(sub_82F45368);
PPC_FUNC_IMPL(__imp__sub_82F45368) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4536C"))) PPC_WEAK_FUNC(sub_82F4536C);
PPC_FUNC_IMPL(__imp__sub_82F4536C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45370"))) PPC_WEAK_FUNC(sub_82F45370);
PPC_FUNC_IMPL(__imp__sub_82F45370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18128
	ctx.r3.s64 = r11.s64 + -18128;
}

__attribute__((alias("__imp__sub_82F45378"))) PPC_WEAK_FUNC(sub_82F45378);
PPC_FUNC_IMPL(__imp__sub_82F45378) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4537C"))) PPC_WEAK_FUNC(sub_82F4537C);
PPC_FUNC_IMPL(__imp__sub_82F4537C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45380"))) PPC_WEAK_FUNC(sub_82F45380);
PPC_FUNC_IMPL(__imp__sub_82F45380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18120
	ctx.r3.s64 = r11.s64 + -18120;
}

__attribute__((alias("__imp__sub_82F45388"))) PPC_WEAK_FUNC(sub_82F45388);
PPC_FUNC_IMPL(__imp__sub_82F45388) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4538C"))) PPC_WEAK_FUNC(sub_82F4538C);
PPC_FUNC_IMPL(__imp__sub_82F4538C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45390"))) PPC_WEAK_FUNC(sub_82F45390);
PPC_FUNC_IMPL(__imp__sub_82F45390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18112
	ctx.r3.s64 = r11.s64 + -18112;
}

__attribute__((alias("__imp__sub_82F45398"))) PPC_WEAK_FUNC(sub_82F45398);
PPC_FUNC_IMPL(__imp__sub_82F45398) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4539C"))) PPC_WEAK_FUNC(sub_82F4539C);
PPC_FUNC_IMPL(__imp__sub_82F4539C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F453A0"))) PPC_WEAK_FUNC(sub_82F453A0);
PPC_FUNC_IMPL(__imp__sub_82F453A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18104
	ctx.r3.s64 = r11.s64 + -18104;
}

__attribute__((alias("__imp__sub_82F453A8"))) PPC_WEAK_FUNC(sub_82F453A8);
PPC_FUNC_IMPL(__imp__sub_82F453A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F453AC"))) PPC_WEAK_FUNC(sub_82F453AC);
PPC_FUNC_IMPL(__imp__sub_82F453AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F453B0"))) PPC_WEAK_FUNC(sub_82F453B0);
PPC_FUNC_IMPL(__imp__sub_82F453B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18096
	ctx.r3.s64 = r11.s64 + -18096;
}

__attribute__((alias("__imp__sub_82F453B8"))) PPC_WEAK_FUNC(sub_82F453B8);
PPC_FUNC_IMPL(__imp__sub_82F453B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F453BC"))) PPC_WEAK_FUNC(sub_82F453BC);
PPC_FUNC_IMPL(__imp__sub_82F453BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F453C0"))) PPC_WEAK_FUNC(sub_82F453C0);
PPC_FUNC_IMPL(__imp__sub_82F453C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18088
	ctx.r3.s64 = r11.s64 + -18088;
}

__attribute__((alias("__imp__sub_82F453C8"))) PPC_WEAK_FUNC(sub_82F453C8);
PPC_FUNC_IMPL(__imp__sub_82F453C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F453CC"))) PPC_WEAK_FUNC(sub_82F453CC);
PPC_FUNC_IMPL(__imp__sub_82F453CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F453D0"))) PPC_WEAK_FUNC(sub_82F453D0);
PPC_FUNC_IMPL(__imp__sub_82F453D0) {
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
	// stw r11,13024(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13024, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F453F8"))) PPC_WEAK_FUNC(sub_82F453F8);
PPC_FUNC_IMPL(__imp__sub_82F453F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F453FC"))) PPC_WEAK_FUNC(sub_82F453FC);
PPC_FUNC_IMPL(__imp__sub_82F453FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45400"))) PPC_WEAK_FUNC(sub_82F45400);
PPC_FUNC_IMPL(__imp__sub_82F45400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18080
	ctx.r3.s64 = r11.s64 + -18080;
}

__attribute__((alias("__imp__sub_82F45408"))) PPC_WEAK_FUNC(sub_82F45408);
PPC_FUNC_IMPL(__imp__sub_82F45408) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4540C"))) PPC_WEAK_FUNC(sub_82F4540C);
PPC_FUNC_IMPL(__imp__sub_82F4540C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45410"))) PPC_WEAK_FUNC(sub_82F45410);
PPC_FUNC_IMPL(__imp__sub_82F45410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18072
	ctx.r3.s64 = r11.s64 + -18072;
}

__attribute__((alias("__imp__sub_82F45418"))) PPC_WEAK_FUNC(sub_82F45418);
PPC_FUNC_IMPL(__imp__sub_82F45418) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4541C"))) PPC_WEAK_FUNC(sub_82F4541C);
PPC_FUNC_IMPL(__imp__sub_82F4541C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45420"))) PPC_WEAK_FUNC(sub_82F45420);
PPC_FUNC_IMPL(__imp__sub_82F45420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18064
	ctx.r3.s64 = r11.s64 + -18064;
}

__attribute__((alias("__imp__sub_82F45428"))) PPC_WEAK_FUNC(sub_82F45428);
PPC_FUNC_IMPL(__imp__sub_82F45428) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4542C"))) PPC_WEAK_FUNC(sub_82F4542C);
PPC_FUNC_IMPL(__imp__sub_82F4542C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45430"))) PPC_WEAK_FUNC(sub_82F45430);
PPC_FUNC_IMPL(__imp__sub_82F45430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18056
	ctx.r3.s64 = r11.s64 + -18056;
}

__attribute__((alias("__imp__sub_82F45438"))) PPC_WEAK_FUNC(sub_82F45438);
PPC_FUNC_IMPL(__imp__sub_82F45438) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4543C"))) PPC_WEAK_FUNC(sub_82F4543C);
PPC_FUNC_IMPL(__imp__sub_82F4543C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45440"))) PPC_WEAK_FUNC(sub_82F45440);
PPC_FUNC_IMPL(__imp__sub_82F45440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18048
	ctx.r3.s64 = r11.s64 + -18048;
}

__attribute__((alias("__imp__sub_82F45448"))) PPC_WEAK_FUNC(sub_82F45448);
PPC_FUNC_IMPL(__imp__sub_82F45448) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4544C"))) PPC_WEAK_FUNC(sub_82F4544C);
PPC_FUNC_IMPL(__imp__sub_82F4544C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45450"))) PPC_WEAK_FUNC(sub_82F45450);
PPC_FUNC_IMPL(__imp__sub_82F45450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18040
	ctx.r3.s64 = r11.s64 + -18040;
}

__attribute__((alias("__imp__sub_82F45458"))) PPC_WEAK_FUNC(sub_82F45458);
PPC_FUNC_IMPL(__imp__sub_82F45458) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4545C"))) PPC_WEAK_FUNC(sub_82F4545C);
PPC_FUNC_IMPL(__imp__sub_82F4545C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45460"))) PPC_WEAK_FUNC(sub_82F45460);
PPC_FUNC_IMPL(__imp__sub_82F45460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18032
	ctx.r3.s64 = r11.s64 + -18032;
}

__attribute__((alias("__imp__sub_82F45468"))) PPC_WEAK_FUNC(sub_82F45468);
PPC_FUNC_IMPL(__imp__sub_82F45468) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4546C"))) PPC_WEAK_FUNC(sub_82F4546C);
PPC_FUNC_IMPL(__imp__sub_82F4546C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45470"))) PPC_WEAK_FUNC(sub_82F45470);
PPC_FUNC_IMPL(__imp__sub_82F45470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18024
	ctx.r3.s64 = r11.s64 + -18024;
}

__attribute__((alias("__imp__sub_82F45478"))) PPC_WEAK_FUNC(sub_82F45478);
PPC_FUNC_IMPL(__imp__sub_82F45478) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4547C"))) PPC_WEAK_FUNC(sub_82F4547C);
PPC_FUNC_IMPL(__imp__sub_82F4547C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45480"))) PPC_WEAK_FUNC(sub_82F45480);
PPC_FUNC_IMPL(__imp__sub_82F45480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18016
	ctx.r3.s64 = r11.s64 + -18016;
}

__attribute__((alias("__imp__sub_82F45488"))) PPC_WEAK_FUNC(sub_82F45488);
PPC_FUNC_IMPL(__imp__sub_82F45488) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4548C"))) PPC_WEAK_FUNC(sub_82F4548C);
PPC_FUNC_IMPL(__imp__sub_82F4548C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F45490"))) PPC_WEAK_FUNC(sub_82F45490);
PPC_FUNC_IMPL(__imp__sub_82F45490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18008
	ctx.r3.s64 = r11.s64 + -18008;
}

__attribute__((alias("__imp__sub_82F45498"))) PPC_WEAK_FUNC(sub_82F45498);
PPC_FUNC_IMPL(__imp__sub_82F45498) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4549C"))) PPC_WEAK_FUNC(sub_82F4549C);
PPC_FUNC_IMPL(__imp__sub_82F4549C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

