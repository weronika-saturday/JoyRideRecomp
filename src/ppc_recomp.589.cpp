#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82FE9E70"))) PPC_WEAK_FUNC(sub_82FE9E70);
PPC_FUNC_IMPL(__imp__sub_82FE9E70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE9E74"))) PPC_WEAK_FUNC(sub_82FE9E74);
PPC_FUNC_IMPL(__imp__sub_82FE9E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FE9E78"))) PPC_WEAK_FUNC(sub_82FE9E78);
PPC_FUNC_IMPL(__imp__sub_82FE9E78) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-4328
	ctx.r7.s64 = ctx.r10.s64 + -4328;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,6892
	ctx.r4.s64 = ctx.r9.s64 + 6892;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-31276
	ctx.r3.s64 = ctx.r8.s64 + -31276;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FE9EE4"))) PPC_WEAK_FUNC(sub_82FE9EE4);
PPC_FUNC_IMPL(__imp__sub_82FE9EE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE9EE8"))) PPC_WEAK_FUNC(sub_82FE9EE8);
PPC_FUNC_IMPL(__imp__sub_82FE9EE8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,-4280
	ctx.r7.s64 = ctx.r10.s64 + -4280;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-20868
	ctx.r4.s64 = ctx.r9.s64 + -20868;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-31228
	ctx.r3.s64 = ctx.r8.s64 + -31228;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FE9F54"))) PPC_WEAK_FUNC(sub_82FE9F54);
PPC_FUNC_IMPL(__imp__sub_82FE9F54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE9F58"))) PPC_WEAK_FUNC(sub_82FE9F58);
PPC_FUNC_IMPL(__imp__sub_82FE9F58) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-4256
	ctx.r7.s64 = ctx.r10.s64 + -4256;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,6916
	ctx.r4.s64 = ctx.r9.s64 + 6916;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-31180
	ctx.r3.s64 = ctx.r8.s64 + -31180;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FE9FC4"))) PPC_WEAK_FUNC(sub_82FE9FC4);
PPC_FUNC_IMPL(__imp__sub_82FE9FC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FE9FC8"))) PPC_WEAK_FUNC(sub_82FE9FC8);
PPC_FUNC_IMPL(__imp__sub_82FE9FC8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-4208
	ctx.r7.s64 = ctx.r10.s64 + -4208;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,6944
	ctx.r4.s64 = ctx.r9.s64 + 6944;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-31132
	ctx.r3.s64 = ctx.r8.s64 + -31132;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEA034"))) PPC_WEAK_FUNC(sub_82FEA034);
PPC_FUNC_IMPL(__imp__sub_82FEA034) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEA038"))) PPC_WEAK_FUNC(sub_82FEA038);
PPC_FUNC_IMPL(__imp__sub_82FEA038) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-4040
	ctx.r7.s64 = ctx.r10.s64 + -4040;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
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
	// addi r3,r8,-31084
	ctx.r3.s64 = ctx.r8.s64 + -31084;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEA0A4"))) PPC_WEAK_FUNC(sub_82FEA0A4);
PPC_FUNC_IMPL(__imp__sub_82FEA0A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEA0A8"))) PPC_WEAK_FUNC(sub_82FEA0A8);
PPC_FUNC_IMPL(__imp__sub_82FEA0A8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-3992
	ctx.r7.s64 = ctx.r10.s64 + -3992;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,6980
	ctx.r4.s64 = ctx.r9.s64 + 6980;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-31036
	ctx.r3.s64 = ctx.r8.s64 + -31036;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEA114"))) PPC_WEAK_FUNC(sub_82FEA114);
PPC_FUNC_IMPL(__imp__sub_82FEA114) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEA118"))) PPC_WEAK_FUNC(sub_82FEA118);
PPC_FUNC_IMPL(__imp__sub_82FEA118) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-3968
	ctx.r7.s64 = ctx.r10.s64 + -3968;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
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
	// addi r3,r8,-30988
	ctx.r3.s64 = ctx.r8.s64 + -30988;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEA184"))) PPC_WEAK_FUNC(sub_82FEA184);
PPC_FUNC_IMPL(__imp__sub_82FEA184) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEA188"))) PPC_WEAK_FUNC(sub_82FEA188);
PPC_FUNC_IMPL(__imp__sub_82FEA188) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r6,r10,-3920
	ctx.r6.s64 = ctx.r10.s64 + -3920;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-31420
	ctx.r5.s64 = ctx.r9.s64 + -31420;
	// addi r4,r8,7020
	ctx.r4.s64 = ctx.r8.s64 + 7020;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-30940
	ctx.r3.s64 = ctx.r7.s64 + -30940;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,7
	r31.s64 = 7;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEA204"))) PPC_WEAK_FUNC(sub_82FEA204);
PPC_FUNC_IMPL(__imp__sub_82FEA204) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEA208"))) PPC_WEAK_FUNC(sub_82FEA208);
PPC_FUNC_IMPL(__imp__sub_82FEA208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// addi r9,r10,-30632
	ctx.r9.s64 = ctx.r10.s64 + -30632;
	// lwz r11,-3752(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -3752);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEA220"))) PPC_WEAK_FUNC(sub_82FEA220);
PPC_FUNC_IMPL(__imp__sub_82FEA220) {
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
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,-30632
	ctx.r6.s64 = ctx.r10.s64 + -30632;
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,7028
	ctx.r4.s64 = ctx.r8.s64 + 7028;
	// addi r3,r7,-30892
	ctx.r3.s64 = ctx.r7.s64 + -30892;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,31060
	ctx.r9.s64 = ctx.r9.s64 + 31060;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEA290"))) PPC_WEAK_FUNC(sub_82FEA290);
PPC_FUNC_IMPL(__imp__sub_82FEA290) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEA294"))) PPC_WEAK_FUNC(sub_82FEA294);
PPC_FUNC_IMPL(__imp__sub_82FEA294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEA298"))) PPC_WEAK_FUNC(sub_82FEA298);
PPC_FUNC_IMPL(__imp__sub_82FEA298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// addi r9,r10,-30512
	ctx.r9.s64 = ctx.r10.s64 + -30512;
	// lwz r11,-3748(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -3748);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEA2B0"))) PPC_WEAK_FUNC(sub_82FEA2B0);
PPC_FUNC_IMPL(__imp__sub_82FEA2B0) {
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
	// lis r9,-31950
	ctx.r9.s64 = -2093875200;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r5,r9,-30512
	ctx.r5.s64 = ctx.r9.s64 + -30512;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r6,r10,31204
	ctx.r6.s64 = ctx.r10.s64 + 31204;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r8,7056
	ctx.r4.s64 = ctx.r8.s64 + 7056;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r3,r7,-30844
	ctx.r3.s64 = ctx.r7.s64 + -30844;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEA328"))) PPC_WEAK_FUNC(sub_82FEA328);
PPC_FUNC_IMPL(__imp__sub_82FEA328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEA32C"))) PPC_WEAK_FUNC(sub_82FEA32C);
PPC_FUNC_IMPL(__imp__sub_82FEA32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEA330"))) PPC_WEAK_FUNC(sub_82FEA330);
PPC_FUNC_IMPL(__imp__sub_82FEA330) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r10,-3744
	ctx.r5.s64 = ctx.r10.s64 + -3744;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r11,0
	r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,-31420
	ctx.r5.s64 = ctx.r8.s64 + -31420;
	// addi r4,r7,7080
	ctx.r4.s64 = ctx.r7.s64 + 7080;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,-30796
	ctx.r3.s64 = ctx.r6.s64 + -30796;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,31184
	ctx.r9.s64 = ctx.r9.s64 + 31184;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FEA3A8"))) PPC_WEAK_FUNC(sub_82FEA3A8);
PPC_FUNC_IMPL(__imp__sub_82FEA3A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEA3AC"))) PPC_WEAK_FUNC(sub_82FEA3AC);
PPC_FUNC_IMPL(__imp__sub_82FEA3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEA3B0"))) PPC_WEAK_FUNC(sub_82FEA3B0);
PPC_FUNC_IMPL(__imp__sub_82FEA3B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// addi r9,r10,-30440
	ctx.r9.s64 = ctx.r10.s64 + -30440;
	// lwz r11,-3552(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -3552);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEA3C8"))) PPC_WEAK_FUNC(sub_82FEA3C8);
PPC_FUNC_IMPL(__imp__sub_82FEA3C8) {
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
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,-30440
	ctx.r6.s64 = ctx.r10.s64 + -30440;
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r11,0
	r11.s64 = 0;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// addi r4,r8,7092
	ctx.r4.s64 = ctx.r8.s64 + 7092;
	// addi r3,r7,-30748
	ctx.r3.s64 = ctx.r7.s64 + -30748;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,3
	r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,31276
	ctx.r9.s64 = ctx.r9.s64 + 31276;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEA444"))) PPC_WEAK_FUNC(sub_82FEA444);
PPC_FUNC_IMPL(__imp__sub_82FEA444) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEA448"))) PPC_WEAK_FUNC(sub_82FEA448);
PPC_FUNC_IMPL(__imp__sub_82FEA448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// addi r9,r10,-30368
	ctx.r9.s64 = ctx.r10.s64 + -30368;
	// lwz r11,-3548(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -3548);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEA460"))) PPC_WEAK_FUNC(sub_82FEA460);
PPC_FUNC_IMPL(__imp__sub_82FEA460) {
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
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,-30368
	ctx.r6.s64 = ctx.r10.s64 + -30368;
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,7160
	ctx.r4.s64 = ctx.r8.s64 + 7160;
	// addi r3,r7,-30700
	ctx.r3.s64 = ctx.r7.s64 + -30700;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,31352
	ctx.r9.s64 = ctx.r9.s64 + 31352;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEA4D0"))) PPC_WEAK_FUNC(sub_82FEA4D0);
PPC_FUNC_IMPL(__imp__sub_82FEA4D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEA4D4"))) PPC_WEAK_FUNC(sub_82FEA4D4);
PPC_FUNC_IMPL(__imp__sub_82FEA4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEA4D8"))) PPC_WEAK_FUNC(sub_82FEA4D8);
PPC_FUNC_IMPL(__imp__sub_82FEA4D8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-3544
	ctx.r7.s64 = ctx.r10.s64 + -3544;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,7180
	ctx.r4.s64 = ctx.r9.s64 + 7180;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-30652
	ctx.r3.s64 = ctx.r8.s64 + -30652;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEA544"))) PPC_WEAK_FUNC(sub_82FEA544);
PPC_FUNC_IMPL(__imp__sub_82FEA544) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEA548"))) PPC_WEAK_FUNC(sub_82FEA548);
PPC_FUNC_IMPL(__imp__sub_82FEA548) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-3520
	ctx.r7.s64 = ctx.r10.s64 + -3520;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,7204
	ctx.r4.s64 = ctx.r9.s64 + 7204;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-30604
	ctx.r3.s64 = ctx.r8.s64 + -30604;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEA5B4"))) PPC_WEAK_FUNC(sub_82FEA5B4);
PPC_FUNC_IMPL(__imp__sub_82FEA5B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEA5B8"))) PPC_WEAK_FUNC(sub_82FEA5B8);
PPC_FUNC_IMPL(__imp__sub_82FEA5B8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-3496
	ctx.r7.s64 = ctx.r10.s64 + -3496;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,7220
	ctx.r4.s64 = ctx.r9.s64 + 7220;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-30556
	ctx.r3.s64 = ctx.r8.s64 + -30556;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEA624"))) PPC_WEAK_FUNC(sub_82FEA624);
PPC_FUNC_IMPL(__imp__sub_82FEA624) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEA628"))) PPC_WEAK_FUNC(sub_82FEA628);
PPC_FUNC_IMPL(__imp__sub_82FEA628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// addi r9,r10,-30224
	ctx.r9.s64 = ctx.r10.s64 + -30224;
	// lwz r11,-3448(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -3448);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEA640"))) PPC_WEAK_FUNC(sub_82FEA640);
PPC_FUNC_IMPL(__imp__sub_82FEA640) {
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
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,-30224
	ctx.r6.s64 = ctx.r10.s64 + -30224;
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,7260
	ctx.r4.s64 = ctx.r8.s64 + 7260;
	// addi r3,r7,-30508
	ctx.r3.s64 = ctx.r7.s64 + -30508;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,31412
	ctx.r9.s64 = ctx.r9.s64 + 31412;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEA6B0"))) PPC_WEAK_FUNC(sub_82FEA6B0);
PPC_FUNC_IMPL(__imp__sub_82FEA6B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEA6B4"))) PPC_WEAK_FUNC(sub_82FEA6B4);
PPC_FUNC_IMPL(__imp__sub_82FEA6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEA6B8"))) PPC_WEAK_FUNC(sub_82FEA6B8);
PPC_FUNC_IMPL(__imp__sub_82FEA6B8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r6,r10,-3444
	ctx.r6.s64 = ctx.r10.s64 + -3444;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-31420
	ctx.r5.s64 = ctx.r9.s64 + -31420;
	// addi r4,r8,7276
	ctx.r4.s64 = ctx.r8.s64 + 7276;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-30460
	ctx.r3.s64 = ctx.r7.s64 + -30460;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEA730"))) PPC_WEAK_FUNC(sub_82FEA730);
PPC_FUNC_IMPL(__imp__sub_82FEA730) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEA734"))) PPC_WEAK_FUNC(sub_82FEA734);
PPC_FUNC_IMPL(__imp__sub_82FEA734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEA738"))) PPC_WEAK_FUNC(sub_82FEA738);
PPC_FUNC_IMPL(__imp__sub_82FEA738) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-3396
	ctx.r7.s64 = ctx.r10.s64 + -3396;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,7300
	ctx.r4.s64 = ctx.r9.s64 + 7300;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-30412
	ctx.r3.s64 = ctx.r8.s64 + -30412;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEA7A4"))) PPC_WEAK_FUNC(sub_82FEA7A4);
PPC_FUNC_IMPL(__imp__sub_82FEA7A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEA7A8"))) PPC_WEAK_FUNC(sub_82FEA7A8);
PPC_FUNC_IMPL(__imp__sub_82FEA7A8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-3344
	ctx.r7.s64 = ctx.r10.s64 + -3344;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,7308
	ctx.r4.s64 = ctx.r9.s64 + 7308;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-30364
	ctx.r3.s64 = ctx.r8.s64 + -30364;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEA814"))) PPC_WEAK_FUNC(sub_82FEA814);
PPC_FUNC_IMPL(__imp__sub_82FEA814) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEA818"))) PPC_WEAK_FUNC(sub_82FEA818);
PPC_FUNC_IMPL(__imp__sub_82FEA818) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-3248
	ctx.r7.s64 = ctx.r10.s64 + -3248;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r11,0
	r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,7352
	ctx.r4.s64 = ctx.r9.s64 + 7352;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-30316
	ctx.r3.s64 = ctx.r8.s64 + -30316;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEA888"))) PPC_WEAK_FUNC(sub_82FEA888);
PPC_FUNC_IMPL(__imp__sub_82FEA888) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEA88C"))) PPC_WEAK_FUNC(sub_82FEA88C);
PPC_FUNC_IMPL(__imp__sub_82FEA88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEA890"))) PPC_WEAK_FUNC(sub_82FEA890);
PPC_FUNC_IMPL(__imp__sub_82FEA890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-31950
	ctx.r9.s64 = -2093875200;
	// addi r8,r9,-30104
	ctx.r8.s64 = ctx.r9.s64 + -30104;
	// lwz r11,-3348(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -3348);
	// lwz r10,-3200(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3200);
	// stw r11,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, r11.u32);
	// stw r10,56(r8)
	PPC_STORE_U32(ctx.r8.u32 + 56, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEA8B4"))) PPC_WEAK_FUNC(sub_82FEA8B4);
PPC_FUNC_IMPL(__imp__sub_82FEA8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEA8B8"))) PPC_WEAK_FUNC(sub_82FEA8B8);
PPC_FUNC_IMPL(__imp__sub_82FEA8B8) {
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
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-30104
	ctx.r7.s64 = ctx.r10.s64 + -30104;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,7388
	ctx.r4.s64 = ctx.r9.s64 + 7388;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-30268
	ctx.r3.s64 = ctx.r8.s64 + -30268;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEA924"))) PPC_WEAK_FUNC(sub_82FEA924);
PPC_FUNC_IMPL(__imp__sub_82FEA924) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEA928"))) PPC_WEAK_FUNC(sub_82FEA928);
PPC_FUNC_IMPL(__imp__sub_82FEA928) {
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
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// addi r5,r9,-3196
	ctx.r5.s64 = ctx.r9.s64 + -3196;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r8,31576
	ctx.r9.s64 = ctx.r8.s64 + 31576;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r4,r7,7420
	ctx.r4.s64 = ctx.r7.s64 + 7420;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r6,-30220
	ctx.r3.s64 = ctx.r6.s64 + -30220;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEA994"))) PPC_WEAK_FUNC(sub_82FEA994);
PPC_FUNC_IMPL(__imp__sub_82FEA994) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEA998"))) PPC_WEAK_FUNC(sub_82FEA998);
PPC_FUNC_IMPL(__imp__sub_82FEA998) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-3148
	ctx.r7.s64 = ctx.r10.s64 + -3148;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,7444
	ctx.r4.s64 = ctx.r9.s64 + 7444;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-30172
	ctx.r3.s64 = ctx.r8.s64 + -30172;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEAA04"))) PPC_WEAK_FUNC(sub_82FEAA04);
PPC_FUNC_IMPL(__imp__sub_82FEAA04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEAA08"))) PPC_WEAK_FUNC(sub_82FEAA08);
PPC_FUNC_IMPL(__imp__sub_82FEAA08) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-3124
	ctx.r7.s64 = ctx.r10.s64 + -3124;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,7468
	ctx.r4.s64 = ctx.r9.s64 + 7468;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-30124
	ctx.r3.s64 = ctx.r8.s64 + -30124;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEAA74"))) PPC_WEAK_FUNC(sub_82FEAA74);
PPC_FUNC_IMPL(__imp__sub_82FEAA74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEAA78"))) PPC_WEAK_FUNC(sub_82FEAA78);
PPC_FUNC_IMPL(__imp__sub_82FEAA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// addi r9,r10,-30032
	ctx.r9.s64 = ctx.r10.s64 + -30032;
	// lwz r11,-3100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -3100);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEAA90"))) PPC_WEAK_FUNC(sub_82FEAA90);
PPC_FUNC_IMPL(__imp__sub_82FEAA90) {
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
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,-30032
	ctx.r6.s64 = ctx.r10.s64 + -30032;
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,7496
	ctx.r4.s64 = ctx.r8.s64 + 7496;
	// addi r3,r7,-30076
	ctx.r3.s64 = ctx.r7.s64 + -30076;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,31640
	ctx.r9.s64 = ctx.r9.s64 + 31640;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEAB00"))) PPC_WEAK_FUNC(sub_82FEAB00);
PPC_FUNC_IMPL(__imp__sub_82FEAB00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEAB04"))) PPC_WEAK_FUNC(sub_82FEAB04);
PPC_FUNC_IMPL(__imp__sub_82FEAB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEAB08"))) PPC_WEAK_FUNC(sub_82FEAB08);
PPC_FUNC_IMPL(__imp__sub_82FEAB08) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-3096
	ctx.r7.s64 = ctx.r10.s64 + -3096;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,7524
	ctx.r4.s64 = ctx.r9.s64 + 7524;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-30028
	ctx.r3.s64 = ctx.r8.s64 + -30028;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEAB74"))) PPC_WEAK_FUNC(sub_82FEAB74);
PPC_FUNC_IMPL(__imp__sub_82FEAB74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEAB78"))) PPC_WEAK_FUNC(sub_82FEAB78);
PPC_FUNC_IMPL(__imp__sub_82FEAB78) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-3072
	ctx.r7.s64 = ctx.r10.s64 + -3072;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,7548
	ctx.r4.s64 = ctx.r9.s64 + 7548;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-29980
	ctx.r3.s64 = ctx.r8.s64 + -29980;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEABE4"))) PPC_WEAK_FUNC(sub_82FEABE4);
PPC_FUNC_IMPL(__imp__sub_82FEABE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEABE8"))) PPC_WEAK_FUNC(sub_82FEABE8);
PPC_FUNC_IMPL(__imp__sub_82FEABE8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-3048
	ctx.r7.s64 = ctx.r10.s64 + -3048;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,7576
	ctx.r4.s64 = ctx.r9.s64 + 7576;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-29932
	ctx.r3.s64 = ctx.r8.s64 + -29932;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEAC54"))) PPC_WEAK_FUNC(sub_82FEAC54);
PPC_FUNC_IMPL(__imp__sub_82FEAC54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEAC58"))) PPC_WEAK_FUNC(sub_82FEAC58);
PPC_FUNC_IMPL(__imp__sub_82FEAC58) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,-3024
	ctx.r7.s64 = ctx.r10.s64 + -3024;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r11,0
	r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,-20832
	ctx.r4.s64 = ctx.r9.s64 + -20832;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-29884
	ctx.r3.s64 = ctx.r8.s64 + -29884;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEACC8"))) PPC_WEAK_FUNC(sub_82FEACC8);
PPC_FUNC_IMPL(__imp__sub_82FEACC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEACCC"))) PPC_WEAK_FUNC(sub_82FEACCC);
PPC_FUNC_IMPL(__imp__sub_82FEACCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEACD0"))) PPC_WEAK_FUNC(sub_82FEACD0);
PPC_FUNC_IMPL(__imp__sub_82FEACD0) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,-2880
	ctx.r7.s64 = ctx.r10.s64 + -2880;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-20812
	ctx.r4.s64 = ctx.r9.s64 + -20812;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-29836
	ctx.r3.s64 = ctx.r8.s64 + -29836;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEAD3C"))) PPC_WEAK_FUNC(sub_82FEAD3C);
PPC_FUNC_IMPL(__imp__sub_82FEAD3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEAD40"))) PPC_WEAK_FUNC(sub_82FEAD40);
PPC_FUNC_IMPL(__imp__sub_82FEAD40) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,-2736
	ctx.r7.s64 = ctx.r10.s64 + -2736;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-20796
	ctx.r4.s64 = ctx.r9.s64 + -20796;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-29788
	ctx.r3.s64 = ctx.r8.s64 + -29788;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEADAC"))) PPC_WEAK_FUNC(sub_82FEADAC);
PPC_FUNC_IMPL(__imp__sub_82FEADAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEADB0"))) PPC_WEAK_FUNC(sub_82FEADB0);
PPC_FUNC_IMPL(__imp__sub_82FEADB0) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,-2496
	ctx.r7.s64 = ctx.r10.s64 + -2496;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,14
	ctx.r6.s64 = 14;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-20776
	ctx.r4.s64 = ctx.r9.s64 + -20776;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-29740
	ctx.r3.s64 = ctx.r8.s64 + -29740;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEAE1C"))) PPC_WEAK_FUNC(sub_82FEAE1C);
PPC_FUNC_IMPL(__imp__sub_82FEAE1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEAE20"))) PPC_WEAK_FUNC(sub_82FEAE20);
PPC_FUNC_IMPL(__imp__sub_82FEAE20) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,-2160
	ctx.r7.s64 = ctx.r10.s64 + -2160;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r11,0
	r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,-20756
	ctx.r4.s64 = ctx.r9.s64 + -20756;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-29692
	ctx.r3.s64 = ctx.r8.s64 + -29692;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEAE90"))) PPC_WEAK_FUNC(sub_82FEAE90);
PPC_FUNC_IMPL(__imp__sub_82FEAE90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEAE94"))) PPC_WEAK_FUNC(sub_82FEAE94);
PPC_FUNC_IMPL(__imp__sub_82FEAE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEAE98"))) PPC_WEAK_FUNC(sub_82FEAE98);
PPC_FUNC_IMPL(__imp__sub_82FEAE98) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,-1968
	ctx.r7.s64 = ctx.r10.s64 + -1968;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-20732
	ctx.r4.s64 = ctx.r9.s64 + -20732;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-29644
	ctx.r3.s64 = ctx.r8.s64 + -29644;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEAF04"))) PPC_WEAK_FUNC(sub_82FEAF04);
PPC_FUNC_IMPL(__imp__sub_82FEAF04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEAF08"))) PPC_WEAK_FUNC(sub_82FEAF08);
PPC_FUNC_IMPL(__imp__sub_82FEAF08) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,-1776
	ctx.r7.s64 = ctx.r10.s64 + -1776;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-20712
	ctx.r4.s64 = ctx.r9.s64 + -20712;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-29596
	ctx.r3.s64 = ctx.r8.s64 + -29596;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEAF74"))) PPC_WEAK_FUNC(sub_82FEAF74);
PPC_FUNC_IMPL(__imp__sub_82FEAF74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEAF78"))) PPC_WEAK_FUNC(sub_82FEAF78);
PPC_FUNC_IMPL(__imp__sub_82FEAF78) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,-1488
	ctx.r7.s64 = ctx.r10.s64 + -1488;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-20688
	ctx.r4.s64 = ctx.r9.s64 + -20688;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-29548
	ctx.r3.s64 = ctx.r8.s64 + -29548;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEAFE4"))) PPC_WEAK_FUNC(sub_82FEAFE4);
PPC_FUNC_IMPL(__imp__sub_82FEAFE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEAFE8"))) PPC_WEAK_FUNC(sub_82FEAFE8);
PPC_FUNC_IMPL(__imp__sub_82FEAFE8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,-1104
	ctx.r7.s64 = ctx.r10.s64 + -1104;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-20664
	ctx.r4.s64 = ctx.r9.s64 + -20664;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-29500
	ctx.r3.s64 = ctx.r8.s64 + -29500;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEB054"))) PPC_WEAK_FUNC(sub_82FEB054);
PPC_FUNC_IMPL(__imp__sub_82FEB054) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEB058"))) PPC_WEAK_FUNC(sub_82FEB058);
PPC_FUNC_IMPL(__imp__sub_82FEB058) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,-888
	ctx.r7.s64 = ctx.r10.s64 + -888;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-20636
	ctx.r4.s64 = ctx.r9.s64 + -20636;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-29452
	ctx.r3.s64 = ctx.r8.s64 + -29452;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEB0C4"))) PPC_WEAK_FUNC(sub_82FEB0C4);
PPC_FUNC_IMPL(__imp__sub_82FEB0C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEB0C8"))) PPC_WEAK_FUNC(sub_82FEB0C8);
PPC_FUNC_IMPL(__imp__sub_82FEB0C8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,-696
	ctx.r7.s64 = ctx.r10.s64 + -696;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,18
	ctx.r6.s64 = 18;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-20612
	ctx.r4.s64 = ctx.r9.s64 + -20612;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-29404
	ctx.r3.s64 = ctx.r8.s64 + -29404;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEB134"))) PPC_WEAK_FUNC(sub_82FEB134);
PPC_FUNC_IMPL(__imp__sub_82FEB134) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEB138"))) PPC_WEAK_FUNC(sub_82FEB138);
PPC_FUNC_IMPL(__imp__sub_82FEB138) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,-264
	ctx.r7.s64 = ctx.r10.s64 + -264;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,18
	ctx.r6.s64 = 18;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-20584
	ctx.r4.s64 = ctx.r9.s64 + -20584;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-29356
	ctx.r3.s64 = ctx.r8.s64 + -29356;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEB1A4"))) PPC_WEAK_FUNC(sub_82FEB1A4);
PPC_FUNC_IMPL(__imp__sub_82FEB1A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEB1A8"))) PPC_WEAK_FUNC(sub_82FEB1A8);
PPC_FUNC_IMPL(__imp__sub_82FEB1A8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,168
	ctx.r7.s64 = ctx.r10.s64 + 168;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,22
	ctx.r6.s64 = 22;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-20560
	ctx.r4.s64 = ctx.r9.s64 + -20560;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-29308
	ctx.r3.s64 = ctx.r8.s64 + -29308;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEB214"))) PPC_WEAK_FUNC(sub_82FEB214);
PPC_FUNC_IMPL(__imp__sub_82FEB214) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEB218"))) PPC_WEAK_FUNC(sub_82FEB218);
PPC_FUNC_IMPL(__imp__sub_82FEB218) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,696
	ctx.r7.s64 = ctx.r10.s64 + 696;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,26
	ctx.r6.s64 = 26;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-20532
	ctx.r4.s64 = ctx.r9.s64 + -20532;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-29260
	ctx.r3.s64 = ctx.r8.s64 + -29260;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEB284"))) PPC_WEAK_FUNC(sub_82FEB284);
PPC_FUNC_IMPL(__imp__sub_82FEB284) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEB288"))) PPC_WEAK_FUNC(sub_82FEB288);
PPC_FUNC_IMPL(__imp__sub_82FEB288) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,1320
	ctx.r7.s64 = ctx.r10.s64 + 1320;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-20504
	ctx.r4.s64 = ctx.r9.s64 + -20504;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-29212
	ctx.r3.s64 = ctx.r8.s64 + -29212;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEB2F4"))) PPC_WEAK_FUNC(sub_82FEB2F4);
PPC_FUNC_IMPL(__imp__sub_82FEB2F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEB2F8"))) PPC_WEAK_FUNC(sub_82FEB2F8);
PPC_FUNC_IMPL(__imp__sub_82FEB2F8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,1488
	ctx.r7.s64 = ctx.r10.s64 + 1488;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-20480
	ctx.r4.s64 = ctx.r9.s64 + -20480;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-29164
	ctx.r3.s64 = ctx.r8.s64 + -29164;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEB364"))) PPC_WEAK_FUNC(sub_82FEB364);
PPC_FUNC_IMPL(__imp__sub_82FEB364) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEB368"))) PPC_WEAK_FUNC(sub_82FEB368);
PPC_FUNC_IMPL(__imp__sub_82FEB368) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,1872
	ctx.r7.s64 = ctx.r10.s64 + 1872;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-20456
	ctx.r4.s64 = ctx.r9.s64 + -20456;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-29116
	ctx.r3.s64 = ctx.r8.s64 + -29116;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEB3D4"))) PPC_WEAK_FUNC(sub_82FEB3D4);
PPC_FUNC_IMPL(__imp__sub_82FEB3D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEB3D8"))) PPC_WEAK_FUNC(sub_82FEB3D8);
PPC_FUNC_IMPL(__imp__sub_82FEB3D8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,2160
	ctx.r7.s64 = ctx.r10.s64 + 2160;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-20436
	ctx.r4.s64 = ctx.r9.s64 + -20436;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-29068
	ctx.r3.s64 = ctx.r8.s64 + -29068;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEB444"))) PPC_WEAK_FUNC(sub_82FEB444);
PPC_FUNC_IMPL(__imp__sub_82FEB444) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEB448"))) PPC_WEAK_FUNC(sub_82FEB448);
PPC_FUNC_IMPL(__imp__sub_82FEB448) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,2544
	ctx.r7.s64 = ctx.r10.s64 + 2544;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,20
	ctx.r6.s64 = 20;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-20416
	ctx.r4.s64 = ctx.r9.s64 + -20416;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-29020
	ctx.r3.s64 = ctx.r8.s64 + -29020;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEB4B4"))) PPC_WEAK_FUNC(sub_82FEB4B4);
PPC_FUNC_IMPL(__imp__sub_82FEB4B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEB4B8"))) PPC_WEAK_FUNC(sub_82FEB4B8);
PPC_FUNC_IMPL(__imp__sub_82FEB4B8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,3024
	ctx.r7.s64 = ctx.r10.s64 + 3024;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,24
	ctx.r6.s64 = 24;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-20392
	ctx.r4.s64 = ctx.r9.s64 + -20392;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-28972
	ctx.r3.s64 = ctx.r8.s64 + -28972;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEB524"))) PPC_WEAK_FUNC(sub_82FEB524);
PPC_FUNC_IMPL(__imp__sub_82FEB524) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEB528"))) PPC_WEAK_FUNC(sub_82FEB528);
PPC_FUNC_IMPL(__imp__sub_82FEB528) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// addi r6,r10,31664
	ctx.r6.s64 = ctx.r10.s64 + 31664;
	// addi r5,r9,3600
	ctx.r5.s64 = ctx.r9.s64 + 3600;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r8,7604
	ctx.r4.s64 = ctx.r8.s64 + 7604;
	// addi r3,r7,-28924
	ctx.r3.s64 = ctx.r7.s64 + -28924;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r31,13
	r31.s64 = 13;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEB5A4"))) PPC_WEAK_FUNC(sub_82FEB5A4);
PPC_FUNC_IMPL(__imp__sub_82FEB5A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEB5A8"))) PPC_WEAK_FUNC(sub_82FEB5A8);
PPC_FUNC_IMPL(__imp__sub_82FEB5A8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r6,r10,3912
	ctx.r6.s64 = ctx.r10.s64 + 3912;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-31420
	ctx.r5.s64 = ctx.r9.s64 + -31420;
	// addi r4,r8,7616
	ctx.r4.s64 = ctx.r8.s64 + 7616;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-28876
	ctx.r3.s64 = ctx.r7.s64 + -28876;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEB620"))) PPC_WEAK_FUNC(sub_82FEB620);
PPC_FUNC_IMPL(__imp__sub_82FEB620) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEB624"))) PPC_WEAK_FUNC(sub_82FEB624);
PPC_FUNC_IMPL(__imp__sub_82FEB624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEB628"))) PPC_WEAK_FUNC(sub_82FEB628);
PPC_FUNC_IMPL(__imp__sub_82FEB628) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,3960
	ctx.r7.s64 = ctx.r10.s64 + 3960;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,7636
	ctx.r4.s64 = ctx.r9.s64 + 7636;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-28828
	ctx.r3.s64 = ctx.r8.s64 + -28828;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEB694"))) PPC_WEAK_FUNC(sub_82FEB694);
PPC_FUNC_IMPL(__imp__sub_82FEB694) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEB698"))) PPC_WEAK_FUNC(sub_82FEB698);
PPC_FUNC_IMPL(__imp__sub_82FEB698) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,4056
	ctx.r7.s64 = ctx.r10.s64 + 4056;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// li r11,0
	r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,-11408
	ctx.r4.s64 = ctx.r9.s64 + -11408;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-28780
	ctx.r3.s64 = ctx.r8.s64 + -28780;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEB708"))) PPC_WEAK_FUNC(sub_82FEB708);
PPC_FUNC_IMPL(__imp__sub_82FEB708) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEB70C"))) PPC_WEAK_FUNC(sub_82FEB70C);
PPC_FUNC_IMPL(__imp__sub_82FEB70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEB710"))) PPC_WEAK_FUNC(sub_82FEB710);
PPC_FUNC_IMPL(__imp__sub_82FEB710) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,4320
	ctx.r7.s64 = ctx.r10.s64 + 4320;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// li r11,0
	r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,-11880
	ctx.r4.s64 = ctx.r9.s64 + -11880;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-28732
	ctx.r3.s64 = ctx.r8.s64 + -28732;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEB780"))) PPC_WEAK_FUNC(sub_82FEB780);
PPC_FUNC_IMPL(__imp__sub_82FEB780) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEB784"))) PPC_WEAK_FUNC(sub_82FEB784);
PPC_FUNC_IMPL(__imp__sub_82FEB784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEB788"))) PPC_WEAK_FUNC(sub_82FEB788);
PPC_FUNC_IMPL(__imp__sub_82FEB788) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-32380
	ctx.r5.s64 = ctx.r10.s64 + -32380;
	// addi r4,r9,-12376
	ctx.r4.s64 = ctx.r9.s64 + -12376;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,-28684
	ctx.r3.s64 = ctx.r8.s64 + -28684;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FEB7EC"))) PPC_WEAK_FUNC(sub_82FEB7EC);
PPC_FUNC_IMPL(__imp__sub_82FEB7EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEB7F0"))) PPC_WEAK_FUNC(sub_82FEB7F0);
PPC_FUNC_IMPL(__imp__sub_82FEB7F0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-32380
	ctx.r5.s64 = ctx.r10.s64 + -32380;
	// addi r4,r9,-12356
	ctx.r4.s64 = ctx.r9.s64 + -12356;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,-28636
	ctx.r3.s64 = ctx.r8.s64 + -28636;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FEB854"))) PPC_WEAK_FUNC(sub_82FEB854);
PPC_FUNC_IMPL(__imp__sub_82FEB854) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEB858"))) PPC_WEAK_FUNC(sub_82FEB858);
PPC_FUNC_IMPL(__imp__sub_82FEB858) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,4536
	ctx.r7.s64 = ctx.r10.s64 + 4536;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-12336
	ctx.r4.s64 = ctx.r9.s64 + -12336;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-28588
	ctx.r3.s64 = ctx.r8.s64 + -28588;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEB8C4"))) PPC_WEAK_FUNC(sub_82FEB8C4);
PPC_FUNC_IMPL(__imp__sub_82FEB8C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEB8C8"))) PPC_WEAK_FUNC(sub_82FEB8C8);
PPC_FUNC_IMPL(__imp__sub_82FEB8C8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r6,r10,4632
	ctx.r6.s64 = ctx.r10.s64 + 4632;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-28684
	ctx.r5.s64 = ctx.r9.s64 + -28684;
	// addi r4,r8,-12300
	ctx.r4.s64 = ctx.r8.s64 + -12300;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-28540
	ctx.r3.s64 = ctx.r7.s64 + -28540;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEB940"))) PPC_WEAK_FUNC(sub_82FEB940);
PPC_FUNC_IMPL(__imp__sub_82FEB940) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEB944"))) PPC_WEAK_FUNC(sub_82FEB944);
PPC_FUNC_IMPL(__imp__sub_82FEB944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEB948"))) PPC_WEAK_FUNC(sub_82FEB948);
PPC_FUNC_IMPL(__imp__sub_82FEB948) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r6,r10,4728
	ctx.r6.s64 = ctx.r10.s64 + 4728;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-28636
	ctx.r5.s64 = ctx.r9.s64 + -28636;
	// addi r4,r8,-12276
	ctx.r4.s64 = ctx.r8.s64 + -12276;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-28492
	ctx.r3.s64 = ctx.r7.s64 + -28492;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEB9C0"))) PPC_WEAK_FUNC(sub_82FEB9C0);
PPC_FUNC_IMPL(__imp__sub_82FEB9C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEB9C4"))) PPC_WEAK_FUNC(sub_82FEB9C4);
PPC_FUNC_IMPL(__imp__sub_82FEB9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEB9C8"))) PPC_WEAK_FUNC(sub_82FEB9C8);
PPC_FUNC_IMPL(__imp__sub_82FEB9C8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,4752
	ctx.r7.s64 = ctx.r10.s64 + 4752;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r11,0
	r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,-15808
	ctx.r4.s64 = ctx.r9.s64 + -15808;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-28444
	ctx.r3.s64 = ctx.r8.s64 + -28444;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEBA38"))) PPC_WEAK_FUNC(sub_82FEBA38);
PPC_FUNC_IMPL(__imp__sub_82FEBA38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEBA3C"))) PPC_WEAK_FUNC(sub_82FEBA3C);
PPC_FUNC_IMPL(__imp__sub_82FEBA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEBA40"))) PPC_WEAK_FUNC(sub_82FEBA40);
PPC_FUNC_IMPL(__imp__sub_82FEBA40) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,4824
	ctx.r7.s64 = ctx.r10.s64 + 4824;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r11,0
	r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,-15772
	ctx.r4.s64 = ctx.r9.s64 + -15772;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-28396
	ctx.r3.s64 = ctx.r8.s64 + -28396;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEBAB0"))) PPC_WEAK_FUNC(sub_82FEBAB0);
PPC_FUNC_IMPL(__imp__sub_82FEBAB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEBAB4"))) PPC_WEAK_FUNC(sub_82FEBAB4);
PPC_FUNC_IMPL(__imp__sub_82FEBAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEBAB8"))) PPC_WEAK_FUNC(sub_82FEBAB8);
PPC_FUNC_IMPL(__imp__sub_82FEBAB8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,4852
	ctx.r7.s64 = ctx.r10.s64 + 4852;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,8104
	ctx.r4.s64 = ctx.r9.s64 + 8104;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-28348
	ctx.r3.s64 = ctx.r8.s64 + -28348;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEBB24"))) PPC_WEAK_FUNC(sub_82FEBB24);
PPC_FUNC_IMPL(__imp__sub_82FEBB24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEBB28"))) PPC_WEAK_FUNC(sub_82FEBB28);
PPC_FUNC_IMPL(__imp__sub_82FEBB28) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,4880
	ctx.r7.s64 = ctx.r10.s64 + 4880;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,8132
	ctx.r4.s64 = ctx.r9.s64 + 8132;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-28300
	ctx.r3.s64 = ctx.r8.s64 + -28300;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEBB94"))) PPC_WEAK_FUNC(sub_82FEBB94);
PPC_FUNC_IMPL(__imp__sub_82FEBB94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEBB98"))) PPC_WEAK_FUNC(sub_82FEBB98);
PPC_FUNC_IMPL(__imp__sub_82FEBB98) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,5000
	ctx.r6.s64 = ctx.r10.s64 + 5000;
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,8148
	ctx.r4.s64 = ctx.r8.s64 + 8148;
	// addi r3,r7,-28252
	ctx.r3.s64 = ctx.r7.s64 + -28252;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,31800
	ctx.r9.s64 = ctx.r9.s64 + 31800;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEBC08"))) PPC_WEAK_FUNC(sub_82FEBC08);
PPC_FUNC_IMPL(__imp__sub_82FEBC08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEBC0C"))) PPC_WEAK_FUNC(sub_82FEBC0C);
PPC_FUNC_IMPL(__imp__sub_82FEBC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEBC10"))) PPC_WEAK_FUNC(sub_82FEBC10);
PPC_FUNC_IMPL(__imp__sub_82FEBC10) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,5048
	ctx.r7.s64 = ctx.r10.s64 + 5048;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,8168
	ctx.r4.s64 = ctx.r9.s64 + 8168;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-28204
	ctx.r3.s64 = ctx.r8.s64 + -28204;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEBC7C"))) PPC_WEAK_FUNC(sub_82FEBC7C);
PPC_FUNC_IMPL(__imp__sub_82FEBC7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEBC80"))) PPC_WEAK_FUNC(sub_82FEBC80);
PPC_FUNC_IMPL(__imp__sub_82FEBC80) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// addi r5,r10,5120
	ctx.r5.s64 = ctx.r10.s64 + 5120;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-32380
	ctx.r5.s64 = ctx.r8.s64 + -32380;
	// addi r4,r7,8196
	ctx.r4.s64 = ctx.r7.s64 + 8196;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-28156
	ctx.r3.s64 = ctx.r6.s64 + -28156;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,5
	r31.s64 = 5;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,31772
	ctx.r9.s64 = ctx.r9.s64 + 31772;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEBCFC"))) PPC_WEAK_FUNC(sub_82FEBCFC);
PPC_FUNC_IMPL(__imp__sub_82FEBCFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEBD00"))) PPC_WEAK_FUNC(sub_82FEBD00);
PPC_FUNC_IMPL(__imp__sub_82FEBD00) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,5240
	ctx.r7.s64 = ctx.r10.s64 + 5240;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,8208
	ctx.r4.s64 = ctx.r9.s64 + 8208;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-28108
	ctx.r3.s64 = ctx.r8.s64 + -28108;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEBD6C"))) PPC_WEAK_FUNC(sub_82FEBD6C);
PPC_FUNC_IMPL(__imp__sub_82FEBD6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEBD70"))) PPC_WEAK_FUNC(sub_82FEBD70);
PPC_FUNC_IMPL(__imp__sub_82FEBD70) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,5272
	ctx.r7.s64 = ctx.r10.s64 + 5272;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,8232
	ctx.r4.s64 = ctx.r9.s64 + 8232;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-28060
	ctx.r3.s64 = ctx.r8.s64 + -28060;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEBDDC"))) PPC_WEAK_FUNC(sub_82FEBDDC);
PPC_FUNC_IMPL(__imp__sub_82FEBDDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEBDE0"))) PPC_WEAK_FUNC(sub_82FEBDE0);
PPC_FUNC_IMPL(__imp__sub_82FEBDE0) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// addi r5,r10,5344
	ctx.r5.s64 = ctx.r10.s64 + 5344;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-32380
	ctx.r5.s64 = ctx.r8.s64 + -32380;
	// addi r4,r7,8280
	ctx.r4.s64 = ctx.r7.s64 + 8280;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-28012
	ctx.r3.s64 = ctx.r6.s64 + -28012;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,10
	r31.s64 = 10;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,31852
	ctx.r9.s64 = ctx.r9.s64 + 31852;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEBE5C"))) PPC_WEAK_FUNC(sub_82FEBE5C);
PPC_FUNC_IMPL(__imp__sub_82FEBE5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEBE60"))) PPC_WEAK_FUNC(sub_82FEBE60);
PPC_FUNC_IMPL(__imp__sub_82FEBE60) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// addi r6,r10,31872
	ctx.r6.s64 = ctx.r10.s64 + 31872;
	// addi r5,r9,5584
	ctx.r5.s64 = ctx.r9.s64 + 5584;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r8,26424
	ctx.r4.s64 = ctx.r8.s64 + 26424;
	// addi r3,r7,-27964
	ctx.r3.s64 = ctx.r7.s64 + -27964;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r31,11
	r31.s64 = 11;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEBEDC"))) PPC_WEAK_FUNC(sub_82FEBEDC);
PPC_FUNC_IMPL(__imp__sub_82FEBEDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEBEE0"))) PPC_WEAK_FUNC(sub_82FEBEE0);
PPC_FUNC_IMPL(__imp__sub_82FEBEE0) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,5856
	ctx.r7.s64 = ctx.r10.s64 + 5856;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,8332
	ctx.r4.s64 = ctx.r9.s64 + 8332;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-27916
	ctx.r3.s64 = ctx.r8.s64 + -27916;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEBF4C"))) PPC_WEAK_FUNC(sub_82FEBF4C);
PPC_FUNC_IMPL(__imp__sub_82FEBF4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEBF50"))) PPC_WEAK_FUNC(sub_82FEBF50);
PPC_FUNC_IMPL(__imp__sub_82FEBF50) {
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
	// lis r11,-32235
	r11.s64 = -2112552960;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r9,r11,31988
	ctx.r9.s64 = r11.s64 + 31988;
	// addi r4,r10,6000
	ctx.r4.s64 = ctx.r10.s64 + 6000;
	// addi r5,r9,44
	ctx.r5.s64 = ctx.r9.s64 + 44;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// li r10,17
	ctx.r10.s64 = 17;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-32380
	ctx.r5.s64 = ctx.r8.s64 + -32380;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,8588
	ctx.r4.s64 = ctx.r7.s64 + 8588;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-27868
	ctx.r3.s64 = ctx.r6.s64 + -27868;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FEBFC8"))) PPC_WEAK_FUNC(sub_82FEBFC8);
PPC_FUNC_IMPL(__imp__sub_82FEBFC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEBFCC"))) PPC_WEAK_FUNC(sub_82FEBFCC);
PPC_FUNC_IMPL(__imp__sub_82FEBFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEBFD0"))) PPC_WEAK_FUNC(sub_82FEBFD0);
PPC_FUNC_IMPL(__imp__sub_82FEBFD0) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,6408
	ctx.r7.s64 = ctx.r10.s64 + 6408;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,8608
	ctx.r4.s64 = ctx.r9.s64 + 8608;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-27820
	ctx.r3.s64 = ctx.r8.s64 + -27820;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEC03C"))) PPC_WEAK_FUNC(sub_82FEC03C);
PPC_FUNC_IMPL(__imp__sub_82FEC03C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC040"))) PPC_WEAK_FUNC(sub_82FEC040);
PPC_FUNC_IMPL(__imp__sub_82FEC040) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,6480
	ctx.r7.s64 = ctx.r10.s64 + 6480;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,8640
	ctx.r4.s64 = ctx.r9.s64 + 8640;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-27772
	ctx.r3.s64 = ctx.r8.s64 + -27772;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEC0AC"))) PPC_WEAK_FUNC(sub_82FEC0AC);
PPC_FUNC_IMPL(__imp__sub_82FEC0AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC0B0"))) PPC_WEAK_FUNC(sub_82FEC0B0);
PPC_FUNC_IMPL(__imp__sub_82FEC0B0) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// addi r5,r10,6576
	ctx.r5.s64 = ctx.r10.s64 + 6576;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-27868
	ctx.r5.s64 = ctx.r8.s64 + -27868;
	// addi r4,r7,8716
	ctx.r4.s64 = ctx.r7.s64 + 8716;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-27724
	ctx.r3.s64 = ctx.r6.s64 + -27724;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,3
	r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,32132
	ctx.r9.s64 = ctx.r9.s64 + 32132;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEC12C"))) PPC_WEAK_FUNC(sub_82FEC12C);
PPC_FUNC_IMPL(__imp__sub_82FEC12C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC130"))) PPC_WEAK_FUNC(sub_82FEC130);
PPC_FUNC_IMPL(__imp__sub_82FEC130) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r6,r10,6648
	ctx.r6.s64 = ctx.r10.s64 + 6648;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-27724
	ctx.r5.s64 = ctx.r9.s64 + -27724;
	// addi r4,r8,8744
	ctx.r4.s64 = ctx.r8.s64 + 8744;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-27676
	ctx.r3.s64 = ctx.r7.s64 + -27676;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEC1A8"))) PPC_WEAK_FUNC(sub_82FEC1A8);
PPC_FUNC_IMPL(__imp__sub_82FEC1A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC1AC"))) PPC_WEAK_FUNC(sub_82FEC1AC);
PPC_FUNC_IMPL(__imp__sub_82FEC1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEC1B0"))) PPC_WEAK_FUNC(sub_82FEC1B0);
PPC_FUNC_IMPL(__imp__sub_82FEC1B0) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// addi r5,r10,6676
	ctx.r5.s64 = ctx.r10.s64 + 6676;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-32380
	ctx.r5.s64 = ctx.r8.s64 + -32380;
	// addi r4,r7,8820
	ctx.r4.s64 = ctx.r7.s64 + 8820;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-27628
	ctx.r3.s64 = ctx.r6.s64 + -27628;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,32208
	ctx.r9.s64 = ctx.r9.s64 + 32208;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEC22C"))) PPC_WEAK_FUNC(sub_82FEC22C);
PPC_FUNC_IMPL(__imp__sub_82FEC22C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC230"))) PPC_WEAK_FUNC(sub_82FEC230);
PPC_FUNC_IMPL(__imp__sub_82FEC230) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// addi r5,r10,32228
	ctx.r5.s64 = ctx.r10.s64 + 32228;
	// addi r4,r9,6724
	ctx.r4.s64 = ctx.r9.s64 + 6724;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-27628
	ctx.r5.s64 = ctx.r8.s64 + -27628;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,8836
	ctx.r4.s64 = ctx.r7.s64 + 8836;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-27580
	ctx.r3.s64 = ctx.r6.s64 + -27580;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FEC2A8"))) PPC_WEAK_FUNC(sub_82FEC2A8);
PPC_FUNC_IMPL(__imp__sub_82FEC2A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC2AC"))) PPC_WEAK_FUNC(sub_82FEC2AC);
PPC_FUNC_IMPL(__imp__sub_82FEC2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEC2B0"))) PPC_WEAK_FUNC(sub_82FEC2B0);
PPC_FUNC_IMPL(__imp__sub_82FEC2B0) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// addi r5,r10,32240
	ctx.r5.s64 = ctx.r10.s64 + 32240;
	// addi r4,r9,6776
	ctx.r4.s64 = ctx.r9.s64 + 6776;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-27628
	ctx.r5.s64 = ctx.r8.s64 + -27628;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,8884
	ctx.r4.s64 = ctx.r7.s64 + 8884;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-27532
	ctx.r3.s64 = ctx.r6.s64 + -27532;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FEC328"))) PPC_WEAK_FUNC(sub_82FEC328);
PPC_FUNC_IMPL(__imp__sub_82FEC328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC32C"))) PPC_WEAK_FUNC(sub_82FEC32C);
PPC_FUNC_IMPL(__imp__sub_82FEC32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEC330"))) PPC_WEAK_FUNC(sub_82FEC330);
PPC_FUNC_IMPL(__imp__sub_82FEC330) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r6,r10,6872
	ctx.r6.s64 = ctx.r10.s64 + 6872;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-32380
	ctx.r5.s64 = ctx.r9.s64 + -32380;
	// addi r4,r8,21288
	ctx.r4.s64 = ctx.r8.s64 + 21288;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-27484
	ctx.r3.s64 = ctx.r7.s64 + -27484;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEC3A8"))) PPC_WEAK_FUNC(sub_82FEC3A8);
PPC_FUNC_IMPL(__imp__sub_82FEC3A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC3AC"))) PPC_WEAK_FUNC(sub_82FEC3AC);
PPC_FUNC_IMPL(__imp__sub_82FEC3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEC3B0"))) PPC_WEAK_FUNC(sub_82FEC3B0);
PPC_FUNC_IMPL(__imp__sub_82FEC3B0) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// addi r5,r10,32268
	ctx.r5.s64 = ctx.r10.s64 + 32268;
	// addi r4,r9,6896
	ctx.r4.s64 = ctx.r9.s64 + 6896;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-27628
	ctx.r5.s64 = ctx.r8.s64 + -27628;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,8992
	ctx.r4.s64 = ctx.r7.s64 + 8992;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-27436
	ctx.r3.s64 = ctx.r6.s64 + -27436;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FEC428"))) PPC_WEAK_FUNC(sub_82FEC428);
PPC_FUNC_IMPL(__imp__sub_82FEC428) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC42C"))) PPC_WEAK_FUNC(sub_82FEC42C);
PPC_FUNC_IMPL(__imp__sub_82FEC42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEC430"))) PPC_WEAK_FUNC(sub_82FEC430);
PPC_FUNC_IMPL(__imp__sub_82FEC430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-31950
	ctx.r9.s64 = -2093875200;
	// addi r8,r9,-29984
	ctx.r8.s64 = ctx.r9.s64 + -29984;
	// lwz r11,7068(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 7068);
	// lwz r10,7064(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7064);
	// stw r11,80(r8)
	PPC_STORE_U32(ctx.r8.u32 + 80, r11.u32);
	// stw r10,104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 104, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC454"))) PPC_WEAK_FUNC(sub_82FEC454);
PPC_FUNC_IMPL(__imp__sub_82FEC454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEC458"))) PPC_WEAK_FUNC(sub_82FEC458);
PPC_FUNC_IMPL(__imp__sub_82FEC458) {
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
	// lis r11,-32235
	r11.s64 = -2112552960;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// addi r9,r11,32408
	ctx.r9.s64 = r11.s64 + 32408;
	// addi r4,r10,-29984
	ctx.r4.s64 = ctx.r10.s64 + -29984;
	// addi r5,r9,60
	ctx.r5.s64 = ctx.r9.s64 + 60;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-32380
	ctx.r5.s64 = ctx.r8.s64 + -32380;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,9048
	ctx.r4.s64 = ctx.r7.s64 + 9048;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-27388
	ctx.r3.s64 = ctx.r6.s64 + -27388;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FEC4D0"))) PPC_WEAK_FUNC(sub_82FEC4D0);
PPC_FUNC_IMPL(__imp__sub_82FEC4D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC4D4"))) PPC_WEAK_FUNC(sub_82FEC4D4);
PPC_FUNC_IMPL(__imp__sub_82FEC4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEC4D8"))) PPC_WEAK_FUNC(sub_82FEC4D8);
PPC_FUNC_IMPL(__imp__sub_82FEC4D8) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// addi r5,r10,32504
	ctx.r5.s64 = ctx.r10.s64 + 32504;
	// addi r4,r9,7072
	ctx.r4.s64 = ctx.r9.s64 + 7072;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-27388
	ctx.r5.s64 = ctx.r8.s64 + -27388;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,9140
	ctx.r4.s64 = ctx.r7.s64 + 9140;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-27340
	ctx.r3.s64 = ctx.r6.s64 + -27340;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FEC550"))) PPC_WEAK_FUNC(sub_82FEC550);
PPC_FUNC_IMPL(__imp__sub_82FEC550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC554"))) PPC_WEAK_FUNC(sub_82FEC554);
PPC_FUNC_IMPL(__imp__sub_82FEC554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEC558"))) PPC_WEAK_FUNC(sub_82FEC558);
PPC_FUNC_IMPL(__imp__sub_82FEC558) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// addi r5,r10,32580
	ctx.r5.s64 = ctx.r10.s64 + 32580;
	// addi r4,r9,7216
	ctx.r4.s64 = ctx.r9.s64 + 7216;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-27388
	ctx.r5.s64 = ctx.r8.s64 + -27388;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,9156
	ctx.r4.s64 = ctx.r7.s64 + 9156;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-27292
	ctx.r3.s64 = ctx.r6.s64 + -27292;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FEC5D0"))) PPC_WEAK_FUNC(sub_82FEC5D0);
PPC_FUNC_IMPL(__imp__sub_82FEC5D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC5D4"))) PPC_WEAK_FUNC(sub_82FEC5D4);
PPC_FUNC_IMPL(__imp__sub_82FEC5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEC5D8"))) PPC_WEAK_FUNC(sub_82FEC5D8);
PPC_FUNC_IMPL(__imp__sub_82FEC5D8) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// addi r5,r10,32636
	ctx.r5.s64 = ctx.r10.s64 + 32636;
	// addi r4,r9,7408
	ctx.r4.s64 = ctx.r9.s64 + 7408;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-27388
	ctx.r5.s64 = ctx.r8.s64 + -27388;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,9180
	ctx.r4.s64 = ctx.r7.s64 + 9180;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-27244
	ctx.r3.s64 = ctx.r6.s64 + -27244;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FEC650"))) PPC_WEAK_FUNC(sub_82FEC650);
PPC_FUNC_IMPL(__imp__sub_82FEC650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC654"))) PPC_WEAK_FUNC(sub_82FEC654);
PPC_FUNC_IMPL(__imp__sub_82FEC654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEC658"))) PPC_WEAK_FUNC(sub_82FEC658);
PPC_FUNC_IMPL(__imp__sub_82FEC658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// addi r9,r10,-29840
	ctx.r9.s64 = ctx.r10.s64 + -29840;
	// lwz r11,7552(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 7552);
	// stw r11,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC670"))) PPC_WEAK_FUNC(sub_82FEC670);
PPC_FUNC_IMPL(__imp__sub_82FEC670) {
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
	// lis r11,-32235
	r11.s64 = -2112552960;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// addi r9,r11,32760
	ctx.r9.s64 = r11.s64 + 32760;
	// addi r4,r10,-29840
	ctx.r4.s64 = ctx.r10.s64 + -29840;
	// addi r5,r9,20
	ctx.r5.s64 = ctx.r9.s64 + 20;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-27388
	ctx.r5.s64 = ctx.r8.s64 + -27388;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,9200
	ctx.r4.s64 = ctx.r7.s64 + 9200;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-27196
	ctx.r3.s64 = ctx.r6.s64 + -27196;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FEC6E8"))) PPC_WEAK_FUNC(sub_82FEC6E8);
PPC_FUNC_IMPL(__imp__sub_82FEC6E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC6EC"))) PPC_WEAK_FUNC(sub_82FEC6EC);
PPC_FUNC_IMPL(__imp__sub_82FEC6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEC6F0"))) PPC_WEAK_FUNC(sub_82FEC6F0);
PPC_FUNC_IMPL(__imp__sub_82FEC6F0) {
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
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// addi r6,r10,-32688
	ctx.r6.s64 = ctx.r10.s64 + -32688;
	// addi r5,r9,7560
	ctx.r5.s64 = ctx.r9.s64 + 7560;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r8,9400
	ctx.r4.s64 = ctx.r8.s64 + 9400;
	// addi r3,r7,-27148
	ctx.r3.s64 = ctx.r7.s64 + -27148;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r31,11
	r31.s64 = 11;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEC76C"))) PPC_WEAK_FUNC(sub_82FEC76C);
PPC_FUNC_IMPL(__imp__sub_82FEC76C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC770"))) PPC_WEAK_FUNC(sub_82FEC770);
PPC_FUNC_IMPL(__imp__sub_82FEC770) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// addi r5,r10,7824
	ctx.r5.s64 = ctx.r10.s64 + 7824;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-27388
	ctx.r5.s64 = ctx.r8.s64 + -27388;
	// addi r4,r7,9432
	ctx.r4.s64 = ctx.r7.s64 + 9432;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-27100
	ctx.r3.s64 = ctx.r6.s64 + -27100;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,3
	r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,-32708
	ctx.r9.s64 = ctx.r9.s64 + -32708;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEC7EC"))) PPC_WEAK_FUNC(sub_82FEC7EC);
PPC_FUNC_IMPL(__imp__sub_82FEC7EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC7F0"))) PPC_WEAK_FUNC(sub_82FEC7F0);
PPC_FUNC_IMPL(__imp__sub_82FEC7F0) {
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
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// addi r6,r10,-32592
	ctx.r6.s64 = ctx.r10.s64 + -32592;
	// addi r5,r9,7896
	ctx.r5.s64 = ctx.r9.s64 + 7896;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r8,9572
	ctx.r4.s64 = ctx.r8.s64 + 9572;
	// addi r3,r7,-27052
	ctx.r3.s64 = ctx.r7.s64 + -27052;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r31,7
	r31.s64 = 7;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FEC86C"))) PPC_WEAK_FUNC(sub_82FEC86C);
PPC_FUNC_IMPL(__imp__sub_82FEC86C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC870"))) PPC_WEAK_FUNC(sub_82FEC870);
PPC_FUNC_IMPL(__imp__sub_82FEC870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// addi r9,r10,-29768
	ctx.r9.s64 = ctx.r10.s64 + -29768;
	// lwz r11,8068(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8068);
	// stw r11,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC888"))) PPC_WEAK_FUNC(sub_82FEC888);
PPC_FUNC_IMPL(__imp__sub_82FEC888) {
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
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// addi r9,r11,-32336
	ctx.r9.s64 = r11.s64 + -32336;
	// addi r4,r10,-29768
	ctx.r4.s64 = ctx.r10.s64 + -29768;
	// addi r5,r9,40
	ctx.r5.s64 = ctx.r9.s64 + 40;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-32380
	ctx.r5.s64 = ctx.r8.s64 + -32380;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,2684
	ctx.r4.s64 = ctx.r7.s64 + 2684;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-27004
	ctx.r3.s64 = ctx.r6.s64 + -27004;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FEC900"))) PPC_WEAK_FUNC(sub_82FEC900);
PPC_FUNC_IMPL(__imp__sub_82FEC900) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC904"))) PPC_WEAK_FUNC(sub_82FEC904);
PPC_FUNC_IMPL(__imp__sub_82FEC904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEC908"))) PPC_WEAK_FUNC(sub_82FEC908);
PPC_FUNC_IMPL(__imp__sub_82FEC908) {
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
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// addi r5,r10,-32276
	ctx.r5.s64 = ctx.r10.s64 + -32276;
	// addi r4,r9,8072
	ctx.r4.s64 = ctx.r9.s64 + 8072;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-27004
	ctx.r5.s64 = ctx.r8.s64 + -27004;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,2704
	ctx.r4.s64 = ctx.r7.s64 + 2704;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-26956
	ctx.r3.s64 = ctx.r6.s64 + -26956;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FEC980"))) PPC_WEAK_FUNC(sub_82FEC980);
PPC_FUNC_IMPL(__imp__sub_82FEC980) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEC984"))) PPC_WEAK_FUNC(sub_82FEC984);
PPC_FUNC_IMPL(__imp__sub_82FEC984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FEC988"))) PPC_WEAK_FUNC(sub_82FEC988);
PPC_FUNC_IMPL(__imp__sub_82FEC988) {
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
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// addi r5,r10,-32236
	ctx.r5.s64 = ctx.r10.s64 + -32236;
	// addi r4,r9,8192
	ctx.r4.s64 = ctx.r9.s64 + 8192;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-26956
	ctx.r5.s64 = ctx.r8.s64 + -26956;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,2724
	ctx.r4.s64 = ctx.r7.s64 + 2724;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-26908
	ctx.r3.s64 = ctx.r6.s64 + -26908;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FECA00"))) PPC_WEAK_FUNC(sub_82FECA00);
PPC_FUNC_IMPL(__imp__sub_82FECA00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FECA04"))) PPC_WEAK_FUNC(sub_82FECA04);
PPC_FUNC_IMPL(__imp__sub_82FECA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FECA08"))) PPC_WEAK_FUNC(sub_82FECA08);
PPC_FUNC_IMPL(__imp__sub_82FECA08) {
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
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// addi r5,r10,-32216
	ctx.r5.s64 = ctx.r10.s64 + -32216;
	// addi r4,r9,8216
	ctx.r4.s64 = ctx.r9.s64 + 8216;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-27004
	ctx.r5.s64 = ctx.r8.s64 + -27004;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,2752
	ctx.r4.s64 = ctx.r7.s64 + 2752;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-26860
	ctx.r3.s64 = ctx.r6.s64 + -26860;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FECA80"))) PPC_WEAK_FUNC(sub_82FECA80);
PPC_FUNC_IMPL(__imp__sub_82FECA80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FECA84"))) PPC_WEAK_FUNC(sub_82FECA84);
PPC_FUNC_IMPL(__imp__sub_82FECA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FECA88"))) PPC_WEAK_FUNC(sub_82FECA88);
PPC_FUNC_IMPL(__imp__sub_82FECA88) {
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
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// addi r5,r10,-32200
	ctx.r5.s64 = ctx.r10.s64 + -32200;
	// addi r4,r9,8264
	ctx.r4.s64 = ctx.r9.s64 + 8264;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-27004
	ctx.r5.s64 = ctx.r8.s64 + -27004;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,2776
	ctx.r4.s64 = ctx.r7.s64 + 2776;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-26812
	ctx.r3.s64 = ctx.r6.s64 + -26812;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FECB00"))) PPC_WEAK_FUNC(sub_82FECB00);
PPC_FUNC_IMPL(__imp__sub_82FECB00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FECB04"))) PPC_WEAK_FUNC(sub_82FECB04);
PPC_FUNC_IMPL(__imp__sub_82FECB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FECB08"))) PPC_WEAK_FUNC(sub_82FECB08);
PPC_FUNC_IMPL(__imp__sub_82FECB08) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,8432
	ctx.r7.s64 = ctx.r10.s64 + 8432;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
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
	// addi r4,r9,9680
	ctx.r4.s64 = ctx.r9.s64 + 9680;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-26764
	ctx.r3.s64 = ctx.r8.s64 + -26764;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FECB78"))) PPC_WEAK_FUNC(sub_82FECB78);
PPC_FUNC_IMPL(__imp__sub_82FECB78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FECB7C"))) PPC_WEAK_FUNC(sub_82FECB7C);
PPC_FUNC_IMPL(__imp__sub_82FECB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FECB80"))) PPC_WEAK_FUNC(sub_82FECB80);
PPC_FUNC_IMPL(__imp__sub_82FECB80) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,8536
	ctx.r7.s64 = ctx.r10.s64 + 8536;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r11,0
	r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,9692
	ctx.r4.s64 = ctx.r9.s64 + 9692;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-26716
	ctx.r3.s64 = ctx.r8.s64 + -26716;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FECBF0"))) PPC_WEAK_FUNC(sub_82FECBF0);
PPC_FUNC_IMPL(__imp__sub_82FECBF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FECBF4"))) PPC_WEAK_FUNC(sub_82FECBF4);
PPC_FUNC_IMPL(__imp__sub_82FECBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FECBF8"))) PPC_WEAK_FUNC(sub_82FECBF8);
PPC_FUNC_IMPL(__imp__sub_82FECBF8) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r10,8728
	ctx.r5.s64 = ctx.r10.s64 + 8728;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// li r10,6
	ctx.r10.s64 = 6;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// li r11,0
	r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,-26764
	ctx.r5.s64 = ctx.r8.s64 + -26764;
	// addi r4,r7,9724
	ctx.r4.s64 = ctx.r7.s64 + 9724;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,-26668
	ctx.r3.s64 = ctx.r6.s64 + -26668;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,-32096
	ctx.r9.s64 = ctx.r9.s64 + -32096;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FECC70"))) PPC_WEAK_FUNC(sub_82FECC70);
PPC_FUNC_IMPL(__imp__sub_82FECC70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FECC74"))) PPC_WEAK_FUNC(sub_82FECC74);
PPC_FUNC_IMPL(__imp__sub_82FECC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FECC78"))) PPC_WEAK_FUNC(sub_82FECC78);
PPC_FUNC_IMPL(__imp__sub_82FECC78) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r6,r10,8872
	ctx.r6.s64 = ctx.r10.s64 + 8872;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-17596
	ctx.r5.s64 = ctx.r9.s64 + -17596;
	// addi r4,r8,9740
	ctx.r4.s64 = ctx.r8.s64 + 9740;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-26620
	ctx.r3.s64 = ctx.r7.s64 + -26620;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FECCF4"))) PPC_WEAK_FUNC(sub_82FECCF4);
PPC_FUNC_IMPL(__imp__sub_82FECCF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FECCF8"))) PPC_WEAK_FUNC(sub_82FECCF8);
PPC_FUNC_IMPL(__imp__sub_82FECCF8) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// li r11,0
	r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,9768
	ctx.r4.s64 = ctx.r10.s64 + 9768;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r9,-26572
	ctx.r3.s64 = ctx.r9.s64 + -26572;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
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

__attribute__((alias("__imp__sub_82FECD58"))) PPC_WEAK_FUNC(sub_82FECD58);
PPC_FUNC_IMPL(__imp__sub_82FECD58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FECD5C"))) PPC_WEAK_FUNC(sub_82FECD5C);
PPC_FUNC_IMPL(__imp__sub_82FECD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FECD60"))) PPC_WEAK_FUNC(sub_82FECD60);
PPC_FUNC_IMPL(__imp__sub_82FECD60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// addi r9,r10,-29696
	ctx.r9.s64 = ctx.r10.s64 + -29696;
	// lwz r11,8532(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8532);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FECD78"))) PPC_WEAK_FUNC(sub_82FECD78);
PPC_FUNC_IMPL(__imp__sub_82FECD78) {
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
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r10,-29696
	ctx.r5.s64 = ctx.r10.s64 + -29696;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// li r10,3
	ctx.r10.s64 = 3;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// li r11,0
	r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,-32380
	ctx.r5.s64 = ctx.r8.s64 + -32380;
	// addi r4,r7,9808
	ctx.r4.s64 = ctx.r7.s64 + 9808;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,-26524
	ctx.r3.s64 = ctx.r6.s64 + -26524;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,-32020
	ctx.r9.s64 = ctx.r9.s64 + -32020;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FECDF0"))) PPC_WEAK_FUNC(sub_82FECDF0);
PPC_FUNC_IMPL(__imp__sub_82FECDF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FECDF4"))) PPC_WEAK_FUNC(sub_82FECDF4);
PPC_FUNC_IMPL(__imp__sub_82FECDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FECDF8"))) PPC_WEAK_FUNC(sub_82FECDF8);
PPC_FUNC_IMPL(__imp__sub_82FECDF8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-31976
	ctx.r9.s64 = ctx.r10.s64 + -31976;
	// addi r5,r8,-32380
	ctx.r5.s64 = ctx.r8.s64 + -32380;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r4,r7,9828
	ctx.r4.s64 = ctx.r7.s64 + 9828;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r3,r6,-26476
	ctx.r3.s64 = ctx.r6.s64 + -26476;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FECE64"))) PPC_WEAK_FUNC(sub_82FECE64);
PPC_FUNC_IMPL(__imp__sub_82FECE64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

