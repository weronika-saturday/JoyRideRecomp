#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830F3634"))) PPC_WEAK_FUNC(sub_830F3634);
PPC_FUNC_IMPL(__imp__sub_830F3634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F3638"))) PPC_WEAK_FUNC(sub_830F3638);
PPC_FUNC_IMPL(__imp__sub_830F3638) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,9520
	ctx.r7.s64 = ctx.r10.s64 + 9520;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,9656
	ctx.r4.s64 = ctx.r9.s64 + 9656;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,1316
	ctx.r3.s64 = ctx.r8.s64 + 1316;
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

__attribute__((alias("__imp__sub_830F36A4"))) PPC_WEAK_FUNC(sub_830F36A4);
PPC_FUNC_IMPL(__imp__sub_830F36A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F36A8"))) PPC_WEAK_FUNC(sub_830F36A8);
PPC_FUNC_IMPL(__imp__sub_830F36A8) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,9592
	ctx.r7.s64 = ctx.r10.s64 + 9592;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,9684
	ctx.r4.s64 = ctx.r9.s64 + 9684;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,1364
	ctx.r3.s64 = ctx.r8.s64 + 1364;
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

__attribute__((alias("__imp__sub_830F3714"))) PPC_WEAK_FUNC(sub_830F3714);
PPC_FUNC_IMPL(__imp__sub_830F3714) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3718"))) PPC_WEAK_FUNC(sub_830F3718);
PPC_FUNC_IMPL(__imp__sub_830F3718) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,9640
	ctx.r7.s64 = ctx.r10.s64 + 9640;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,9716
	ctx.r4.s64 = ctx.r9.s64 + 9716;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,1412
	ctx.r3.s64 = ctx.r8.s64 + 1412;
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

__attribute__((alias("__imp__sub_830F3784"))) PPC_WEAK_FUNC(sub_830F3784);
PPC_FUNC_IMPL(__imp__sub_830F3784) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3788"))) PPC_WEAK_FUNC(sub_830F3788);
PPC_FUNC_IMPL(__imp__sub_830F3788) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,9688
	ctx.r6.s64 = ctx.r10.s64 + 9688;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-9964
	ctx.r5.s64 = ctx.r9.s64 + -9964;
	// addi r4,r8,9740
	ctx.r4.s64 = ctx.r8.s64 + 9740;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,1460
	ctx.r3.s64 = ctx.r7.s64 + 1460;
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

__attribute__((alias("__imp__sub_830F3800"))) PPC_WEAK_FUNC(sub_830F3800);
PPC_FUNC_IMPL(__imp__sub_830F3800) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3804"))) PPC_WEAK_FUNC(sub_830F3804);
PPC_FUNC_IMPL(__imp__sub_830F3804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F3808"))) PPC_WEAK_FUNC(sub_830F3808);
PPC_FUNC_IMPL(__imp__sub_830F3808) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,9736
	ctx.r6.s64 = ctx.r10.s64 + 9736;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-9964
	ctx.r5.s64 = ctx.r9.s64 + -9964;
	// addi r4,r8,9756
	ctx.r4.s64 = ctx.r8.s64 + 9756;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,1508
	ctx.r3.s64 = ctx.r7.s64 + 1508;
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

__attribute__((alias("__imp__sub_830F3880"))) PPC_WEAK_FUNC(sub_830F3880);
PPC_FUNC_IMPL(__imp__sub_830F3880) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3884"))) PPC_WEAK_FUNC(sub_830F3884);
PPC_FUNC_IMPL(__imp__sub_830F3884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F3888"))) PPC_WEAK_FUNC(sub_830F3888);
PPC_FUNC_IMPL(__imp__sub_830F3888) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,9760
	ctx.r6.s64 = ctx.r10.s64 + 9760;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-9964
	ctx.r5.s64 = ctx.r9.s64 + -9964;
	// addi r4,r8,9784
	ctx.r4.s64 = ctx.r8.s64 + 9784;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,1556
	ctx.r3.s64 = ctx.r7.s64 + 1556;
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

__attribute__((alias("__imp__sub_830F3900"))) PPC_WEAK_FUNC(sub_830F3900);
PPC_FUNC_IMPL(__imp__sub_830F3900) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3904"))) PPC_WEAK_FUNC(sub_830F3904);
PPC_FUNC_IMPL(__imp__sub_830F3904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F3908"))) PPC_WEAK_FUNC(sub_830F3908);
PPC_FUNC_IMPL(__imp__sub_830F3908) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,9784
	ctx.r7.s64 = ctx.r10.s64 + 9784;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,9816
	ctx.r4.s64 = ctx.r9.s64 + 9816;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,1604
	ctx.r3.s64 = ctx.r8.s64 + 1604;
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

__attribute__((alias("__imp__sub_830F3974"))) PPC_WEAK_FUNC(sub_830F3974);
PPC_FUNC_IMPL(__imp__sub_830F3974) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3978"))) PPC_WEAK_FUNC(sub_830F3978);
PPC_FUNC_IMPL(__imp__sub_830F3978) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,9832
	ctx.r6.s64 = ctx.r10.s64 + 9832;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-9964
	ctx.r5.s64 = ctx.r9.s64 + -9964;
	// addi r4,r8,9868
	ctx.r4.s64 = ctx.r8.s64 + 9868;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,1652
	ctx.r3.s64 = ctx.r7.s64 + 1652;
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

__attribute__((alias("__imp__sub_830F39F0"))) PPC_WEAK_FUNC(sub_830F39F0);
PPC_FUNC_IMPL(__imp__sub_830F39F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F39F4"))) PPC_WEAK_FUNC(sub_830F39F4);
PPC_FUNC_IMPL(__imp__sub_830F39F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F39F8"))) PPC_WEAK_FUNC(sub_830F39F8);
PPC_FUNC_IMPL(__imp__sub_830F39F8) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,9856
	ctx.r7.s64 = ctx.r10.s64 + 9856;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,9900
	ctx.r4.s64 = ctx.r9.s64 + 9900;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,1700
	ctx.r3.s64 = ctx.r8.s64 + 1700;
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

__attribute__((alias("__imp__sub_830F3A64"))) PPC_WEAK_FUNC(sub_830F3A64);
PPC_FUNC_IMPL(__imp__sub_830F3A64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3A68"))) PPC_WEAK_FUNC(sub_830F3A68);
PPC_FUNC_IMPL(__imp__sub_830F3A68) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,10096
	ctx.r6.s64 = ctx.r10.s64 + 10096;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-9964
	ctx.r5.s64 = ctx.r9.s64 + -9964;
	// addi r4,r8,9936
	ctx.r4.s64 = ctx.r8.s64 + 9936;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,1748
	ctx.r3.s64 = ctx.r7.s64 + 1748;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,18
	r31.s64 = 18;
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

__attribute__((alias("__imp__sub_830F3AE0"))) PPC_WEAK_FUNC(sub_830F3AE0);
PPC_FUNC_IMPL(__imp__sub_830F3AE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3AE4"))) PPC_WEAK_FUNC(sub_830F3AE4);
PPC_FUNC_IMPL(__imp__sub_830F3AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F3AE8"))) PPC_WEAK_FUNC(sub_830F3AE8);
PPC_FUNC_IMPL(__imp__sub_830F3AE8) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,10528
	ctx.r7.s64 = ctx.r10.s64 + 10528;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,17
	ctx.r6.s64 = 17;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,9952
	ctx.r4.s64 = ctx.r9.s64 + 9952;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,1796
	ctx.r3.s64 = ctx.r8.s64 + 1796;
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

__attribute__((alias("__imp__sub_830F3B54"))) PPC_WEAK_FUNC(sub_830F3B54);
PPC_FUNC_IMPL(__imp__sub_830F3B54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3B58"))) PPC_WEAK_FUNC(sub_830F3B58);
PPC_FUNC_IMPL(__imp__sub_830F3B58) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,10936
	ctx.r6.s64 = ctx.r10.s64 + 10936;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-3244
	ctx.r5.s64 = ctx.r9.s64 + -3244;
	// addi r4,r8,9980
	ctx.r4.s64 = ctx.r8.s64 + 9980;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,1844
	ctx.r3.s64 = ctx.r7.s64 + 1844;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,25
	r31.s64 = 25;
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

__attribute__((alias("__imp__sub_830F3BD0"))) PPC_WEAK_FUNC(sub_830F3BD0);
PPC_FUNC_IMPL(__imp__sub_830F3BD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3BD4"))) PPC_WEAK_FUNC(sub_830F3BD4);
PPC_FUNC_IMPL(__imp__sub_830F3BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F3BD8"))) PPC_WEAK_FUNC(sub_830F3BD8);
PPC_FUNC_IMPL(__imp__sub_830F3BD8) {
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
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-9964
	ctx.r5.s64 = ctx.r10.s64 + -9964;
	// addi r4,r9,10000
	ctx.r4.s64 = ctx.r9.s64 + 10000;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,1892
	ctx.r3.s64 = ctx.r8.s64 + 1892;
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

__attribute__((alias("__imp__sub_830F3C3C"))) PPC_WEAK_FUNC(sub_830F3C3C);
PPC_FUNC_IMPL(__imp__sub_830F3C3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3C40"))) PPC_WEAK_FUNC(sub_830F3C40);
PPC_FUNC_IMPL(__imp__sub_830F3C40) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,11536
	ctx.r6.s64 = ctx.r10.s64 + 11536;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,1892
	ctx.r5.s64 = ctx.r9.s64 + 1892;
	// addi r4,r8,10024
	ctx.r4.s64 = ctx.r8.s64 + 10024;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,1940
	ctx.r3.s64 = ctx.r7.s64 + 1940;
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

__attribute__((alias("__imp__sub_830F3CB8"))) PPC_WEAK_FUNC(sub_830F3CB8);
PPC_FUNC_IMPL(__imp__sub_830F3CB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3CBC"))) PPC_WEAK_FUNC(sub_830F3CBC);
PPC_FUNC_IMPL(__imp__sub_830F3CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F3CC0"))) PPC_WEAK_FUNC(sub_830F3CC0);
PPC_FUNC_IMPL(__imp__sub_830F3CC0) {
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
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-9964
	ctx.r5.s64 = ctx.r10.s64 + -9964;
	// addi r4,r9,10056
	ctx.r4.s64 = ctx.r9.s64 + 10056;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,1988
	ctx.r3.s64 = ctx.r8.s64 + 1988;
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

__attribute__((alias("__imp__sub_830F3D24"))) PPC_WEAK_FUNC(sub_830F3D24);
PPC_FUNC_IMPL(__imp__sub_830F3D24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3D28"))) PPC_WEAK_FUNC(sub_830F3D28);
PPC_FUNC_IMPL(__imp__sub_830F3D28) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,11656
	ctx.r7.s64 = ctx.r10.s64 + 11656;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,10072
	ctx.r4.s64 = ctx.r9.s64 + 10072;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,2036
	ctx.r3.s64 = ctx.r8.s64 + 2036;
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

__attribute__((alias("__imp__sub_830F3D94"))) PPC_WEAK_FUNC(sub_830F3D94);
PPC_FUNC_IMPL(__imp__sub_830F3D94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3D98"))) PPC_WEAK_FUNC(sub_830F3D98);
PPC_FUNC_IMPL(__imp__sub_830F3D98) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,11728
	ctx.r6.s64 = ctx.r10.s64 + 11728;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,1988
	ctx.r5.s64 = ctx.r9.s64 + 1988;
	// addi r4,r8,10116
	ctx.r4.s64 = ctx.r8.s64 + 10116;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,2084
	ctx.r3.s64 = ctx.r7.s64 + 2084;
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

__attribute__((alias("__imp__sub_830F3E10"))) PPC_WEAK_FUNC(sub_830F3E10);
PPC_FUNC_IMPL(__imp__sub_830F3E10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3E14"))) PPC_WEAK_FUNC(sub_830F3E14);
PPC_FUNC_IMPL(__imp__sub_830F3E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F3E18"))) PPC_WEAK_FUNC(sub_830F3E18);
PPC_FUNC_IMPL(__imp__sub_830F3E18) {
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
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-9964
	ctx.r5.s64 = ctx.r10.s64 + -9964;
	// addi r4,r9,10140
	ctx.r4.s64 = ctx.r9.s64 + 10140;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,2132
	ctx.r3.s64 = ctx.r8.s64 + 2132;
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

__attribute__((alias("__imp__sub_830F3E7C"))) PPC_WEAK_FUNC(sub_830F3E7C);
PPC_FUNC_IMPL(__imp__sub_830F3E7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3E80"))) PPC_WEAK_FUNC(sub_830F3E80);
PPC_FUNC_IMPL(__imp__sub_830F3E80) {
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
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-9964
	ctx.r5.s64 = ctx.r10.s64 + -9964;
	// addi r4,r9,10168
	ctx.r4.s64 = ctx.r9.s64 + 10168;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,2180
	ctx.r3.s64 = ctx.r8.s64 + 2180;
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

__attribute__((alias("__imp__sub_830F3EE4"))) PPC_WEAK_FUNC(sub_830F3EE4);
PPC_FUNC_IMPL(__imp__sub_830F3EE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3EE8"))) PPC_WEAK_FUNC(sub_830F3EE8);
PPC_FUNC_IMPL(__imp__sub_830F3EE8) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,11776
	ctx.r6.s64 = ctx.r10.s64 + 11776;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,2132
	ctx.r5.s64 = ctx.r9.s64 + 2132;
	// addi r4,r8,10192
	ctx.r4.s64 = ctx.r8.s64 + 10192;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,2228
	ctx.r3.s64 = ctx.r7.s64 + 2228;
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

__attribute__((alias("__imp__sub_830F3F60"))) PPC_WEAK_FUNC(sub_830F3F60);
PPC_FUNC_IMPL(__imp__sub_830F3F60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3F64"))) PPC_WEAK_FUNC(sub_830F3F64);
PPC_FUNC_IMPL(__imp__sub_830F3F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F3F68"))) PPC_WEAK_FUNC(sub_830F3F68);
PPC_FUNC_IMPL(__imp__sub_830F3F68) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,11872
	ctx.r6.s64 = ctx.r10.s64 + 11872;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,2180
	ctx.r5.s64 = ctx.r9.s64 + 2180;
	// addi r4,r8,10228
	ctx.r4.s64 = ctx.r8.s64 + 10228;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,2276
	ctx.r3.s64 = ctx.r7.s64 + 2276;
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

__attribute__((alias("__imp__sub_830F3FE0"))) PPC_WEAK_FUNC(sub_830F3FE0);
PPC_FUNC_IMPL(__imp__sub_830F3FE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3FE4"))) PPC_WEAK_FUNC(sub_830F3FE4);
PPC_FUNC_IMPL(__imp__sub_830F3FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F3FE8"))) PPC_WEAK_FUNC(sub_830F3FE8);
PPC_FUNC_IMPL(__imp__sub_830F3FE8) {
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
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-9964
	ctx.r5.s64 = ctx.r10.s64 + -9964;
	// addi r4,r9,10264
	ctx.r4.s64 = ctx.r9.s64 + 10264;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,2324
	ctx.r3.s64 = ctx.r8.s64 + 2324;
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

__attribute__((alias("__imp__sub_830F404C"))) PPC_WEAK_FUNC(sub_830F404C);
PPC_FUNC_IMPL(__imp__sub_830F404C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4050"))) PPC_WEAK_FUNC(sub_830F4050);
PPC_FUNC_IMPL(__imp__sub_830F4050) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,2324
	ctx.r5.s64 = ctx.r9.s64 + 2324;
	// addi r4,r8,10280
	ctx.r4.s64 = ctx.r8.s64 + 10280;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,2372
	ctx.r3.s64 = ctx.r7.s64 + 2372;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,10
	r31.s64 = 10;
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

__attribute__((alias("__imp__sub_830F40C8"))) PPC_WEAK_FUNC(sub_830F40C8);
PPC_FUNC_IMPL(__imp__sub_830F40C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F40CC"))) PPC_WEAK_FUNC(sub_830F40CC);
PPC_FUNC_IMPL(__imp__sub_830F40CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F40D0"))) PPC_WEAK_FUNC(sub_830F40D0);
PPC_FUNC_IMPL(__imp__sub_830F40D0) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,12208
	ctx.r7.s64 = ctx.r10.s64 + 12208;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,10304
	ctx.r4.s64 = ctx.r9.s64 + 10304;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,2420
	ctx.r3.s64 = ctx.r8.s64 + 2420;
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

__attribute__((alias("__imp__sub_830F413C"))) PPC_WEAK_FUNC(sub_830F413C);
PPC_FUNC_IMPL(__imp__sub_830F413C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4140"))) PPC_WEAK_FUNC(sub_830F4140);
PPC_FUNC_IMPL(__imp__sub_830F4140) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,12448
	ctx.r7.s64 = ctx.r10.s64 + 12448;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,10348
	ctx.r4.s64 = ctx.r9.s64 + 10348;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,2468
	ctx.r3.s64 = ctx.r8.s64 + 2468;
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

__attribute__((alias("__imp__sub_830F41AC"))) PPC_WEAK_FUNC(sub_830F41AC);
PPC_FUNC_IMPL(__imp__sub_830F41AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F41B0"))) PPC_WEAK_FUNC(sub_830F41B0);
PPC_FUNC_IMPL(__imp__sub_830F41B0) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,12520
	ctx.r7.s64 = ctx.r10.s64 + 12520;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,10380
	ctx.r4.s64 = ctx.r9.s64 + 10380;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,2516
	ctx.r3.s64 = ctx.r8.s64 + 2516;
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

__attribute__((alias("__imp__sub_830F421C"))) PPC_WEAK_FUNC(sub_830F421C);
PPC_FUNC_IMPL(__imp__sub_830F421C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4220"))) PPC_WEAK_FUNC(sub_830F4220);
PPC_FUNC_IMPL(__imp__sub_830F4220) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,12736
	ctx.r7.s64 = ctx.r10.s64 + 12736;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,10416
	ctx.r4.s64 = ctx.r9.s64 + 10416;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,2564
	ctx.r3.s64 = ctx.r8.s64 + 2564;
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

__attribute__((alias("__imp__sub_830F428C"))) PPC_WEAK_FUNC(sub_830F428C);
PPC_FUNC_IMPL(__imp__sub_830F428C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4290"))) PPC_WEAK_FUNC(sub_830F4290);
PPC_FUNC_IMPL(__imp__sub_830F4290) {
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
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-9964
	ctx.r5.s64 = ctx.r10.s64 + -9964;
	// addi r4,r9,10440
	ctx.r4.s64 = ctx.r9.s64 + 10440;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,2612
	ctx.r3.s64 = ctx.r8.s64 + 2612;
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

__attribute__((alias("__imp__sub_830F42F4"))) PPC_WEAK_FUNC(sub_830F42F4);
PPC_FUNC_IMPL(__imp__sub_830F42F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F42F8"))) PPC_WEAK_FUNC(sub_830F42F8);
PPC_FUNC_IMPL(__imp__sub_830F42F8) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,12760
	ctx.r6.s64 = ctx.r10.s64 + 12760;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,2612
	ctx.r5.s64 = ctx.r9.s64 + 2612;
	// addi r4,r8,10460
	ctx.r4.s64 = ctx.r8.s64 + 10460;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,2660
	ctx.r3.s64 = ctx.r7.s64 + 2660;
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

__attribute__((alias("__imp__sub_830F4370"))) PPC_WEAK_FUNC(sub_830F4370);
PPC_FUNC_IMPL(__imp__sub_830F4370) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4374"))) PPC_WEAK_FUNC(sub_830F4374);
PPC_FUNC_IMPL(__imp__sub_830F4374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F4378"))) PPC_WEAK_FUNC(sub_830F4378);
PPC_FUNC_IMPL(__imp__sub_830F4378) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,12832
	ctx.r7.s64 = ctx.r10.s64 + 12832;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,10488
	ctx.r4.s64 = ctx.r9.s64 + 10488;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,2708
	ctx.r3.s64 = ctx.r8.s64 + 2708;
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

__attribute__((alias("__imp__sub_830F43E4"))) PPC_WEAK_FUNC(sub_830F43E4);
PPC_FUNC_IMPL(__imp__sub_830F43E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F43E8"))) PPC_WEAK_FUNC(sub_830F43E8);
PPC_FUNC_IMPL(__imp__sub_830F43E8) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,12904
	ctx.r6.s64 = ctx.r10.s64 + 12904;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-9964
	ctx.r5.s64 = ctx.r9.s64 + -9964;
	// addi r4,r8,10536
	ctx.r4.s64 = ctx.r8.s64 + 10536;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,2756
	ctx.r3.s64 = ctx.r7.s64 + 2756;
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

__attribute__((alias("__imp__sub_830F4460"))) PPC_WEAK_FUNC(sub_830F4460);
PPC_FUNC_IMPL(__imp__sub_830F4460) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4464"))) PPC_WEAK_FUNC(sub_830F4464);
PPC_FUNC_IMPL(__imp__sub_830F4464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F4468"))) PPC_WEAK_FUNC(sub_830F4468);
PPC_FUNC_IMPL(__imp__sub_830F4468) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,12928
	ctx.r7.s64 = ctx.r10.s64 + 12928;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,10556
	ctx.r4.s64 = ctx.r9.s64 + 10556;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,2804
	ctx.r3.s64 = ctx.r8.s64 + 2804;
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

__attribute__((alias("__imp__sub_830F44D4"))) PPC_WEAK_FUNC(sub_830F44D4);
PPC_FUNC_IMPL(__imp__sub_830F44D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F44D8"))) PPC_WEAK_FUNC(sub_830F44D8);
PPC_FUNC_IMPL(__imp__sub_830F44D8) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,13000
	ctx.r6.s64 = ctx.r10.s64 + 13000;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,2756
	ctx.r5.s64 = ctx.r9.s64 + 2756;
	// addi r4,r8,10616
	ctx.r4.s64 = ctx.r8.s64 + 10616;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,2852
	ctx.r3.s64 = ctx.r7.s64 + 2852;
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

__attribute__((alias("__imp__sub_830F4550"))) PPC_WEAK_FUNC(sub_830F4550);
PPC_FUNC_IMPL(__imp__sub_830F4550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4554"))) PPC_WEAK_FUNC(sub_830F4554);
PPC_FUNC_IMPL(__imp__sub_830F4554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F4558"))) PPC_WEAK_FUNC(sub_830F4558);
PPC_FUNC_IMPL(__imp__sub_830F4558) {
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
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-9964
	ctx.r5.s64 = ctx.r10.s64 + -9964;
	// addi r4,r9,10644
	ctx.r4.s64 = ctx.r9.s64 + 10644;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,2900
	ctx.r3.s64 = ctx.r8.s64 + 2900;
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

__attribute__((alias("__imp__sub_830F45BC"))) PPC_WEAK_FUNC(sub_830F45BC);
PPC_FUNC_IMPL(__imp__sub_830F45BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F45C0"))) PPC_WEAK_FUNC(sub_830F45C0);
PPC_FUNC_IMPL(__imp__sub_830F45C0) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,13024
	ctx.r6.s64 = ctx.r10.s64 + 13024;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,2900
	ctx.r5.s64 = ctx.r9.s64 + 2900;
	// addi r4,r8,10668
	ctx.r4.s64 = ctx.r8.s64 + 10668;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,2948
	ctx.r3.s64 = ctx.r7.s64 + 2948;
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

__attribute__((alias("__imp__sub_830F4638"))) PPC_WEAK_FUNC(sub_830F4638);
PPC_FUNC_IMPL(__imp__sub_830F4638) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F463C"))) PPC_WEAK_FUNC(sub_830F463C);
PPC_FUNC_IMPL(__imp__sub_830F463C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F4640"))) PPC_WEAK_FUNC(sub_830F4640);
PPC_FUNC_IMPL(__imp__sub_830F4640) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,13192
	ctx.r7.s64 = ctx.r10.s64 + 13192;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,10700
	ctx.r4.s64 = ctx.r9.s64 + 10700;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,2996
	ctx.r3.s64 = ctx.r8.s64 + 2996;
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

__attribute__((alias("__imp__sub_830F46AC"))) PPC_WEAK_FUNC(sub_830F46AC);
PPC_FUNC_IMPL(__imp__sub_830F46AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F46B0"))) PPC_WEAK_FUNC(sub_830F46B0);
PPC_FUNC_IMPL(__imp__sub_830F46B0) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,13240
	ctx.r6.s64 = ctx.r10.s64 + 13240;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-9964
	ctx.r5.s64 = ctx.r9.s64 + -9964;
	// addi r4,r8,10716
	ctx.r4.s64 = ctx.r8.s64 + 10716;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,3044
	ctx.r3.s64 = ctx.r7.s64 + 3044;
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

__attribute__((alias("__imp__sub_830F4728"))) PPC_WEAK_FUNC(sub_830F4728);
PPC_FUNC_IMPL(__imp__sub_830F4728) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F472C"))) PPC_WEAK_FUNC(sub_830F472C);
PPC_FUNC_IMPL(__imp__sub_830F472C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F4730"))) PPC_WEAK_FUNC(sub_830F4730);
PPC_FUNC_IMPL(__imp__sub_830F4730) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,13312
	ctx.r6.s64 = ctx.r10.s64 + 13312;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-9964
	ctx.r5.s64 = ctx.r9.s64 + -9964;
	// addi r4,r8,10736
	ctx.r4.s64 = ctx.r8.s64 + 10736;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,3092
	ctx.r3.s64 = ctx.r7.s64 + 3092;
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

__attribute__((alias("__imp__sub_830F47A8"))) PPC_WEAK_FUNC(sub_830F47A8);
PPC_FUNC_IMPL(__imp__sub_830F47A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F47AC"))) PPC_WEAK_FUNC(sub_830F47AC);
PPC_FUNC_IMPL(__imp__sub_830F47AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F47B0"))) PPC_WEAK_FUNC(sub_830F47B0);
PPC_FUNC_IMPL(__imp__sub_830F47B0) {
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
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-9964
	ctx.r5.s64 = ctx.r10.s64 + -9964;
	// addi r4,r9,10752
	ctx.r4.s64 = ctx.r9.s64 + 10752;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,3140
	ctx.r3.s64 = ctx.r8.s64 + 3140;
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

__attribute__((alias("__imp__sub_830F4814"))) PPC_WEAK_FUNC(sub_830F4814);
PPC_FUNC_IMPL(__imp__sub_830F4814) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4818"))) PPC_WEAK_FUNC(sub_830F4818);
PPC_FUNC_IMPL(__imp__sub_830F4818) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,13384
	ctx.r6.s64 = ctx.r10.s64 + 13384;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,3140
	ctx.r5.s64 = ctx.r9.s64 + 3140;
	// addi r4,r8,10776
	ctx.r4.s64 = ctx.r8.s64 + 10776;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,3188
	ctx.r3.s64 = ctx.r7.s64 + 3188;
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

__attribute__((alias("__imp__sub_830F4890"))) PPC_WEAK_FUNC(sub_830F4890);
PPC_FUNC_IMPL(__imp__sub_830F4890) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4894"))) PPC_WEAK_FUNC(sub_830F4894);
PPC_FUNC_IMPL(__imp__sub_830F4894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F4898"))) PPC_WEAK_FUNC(sub_830F4898);
PPC_FUNC_IMPL(__imp__sub_830F4898) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,13456
	ctx.r6.s64 = ctx.r10.s64 + 13456;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-9964
	ctx.r5.s64 = ctx.r9.s64 + -9964;
	// addi r4,r8,10808
	ctx.r4.s64 = ctx.r8.s64 + 10808;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,3236
	ctx.r3.s64 = ctx.r7.s64 + 3236;
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

__attribute__((alias("__imp__sub_830F4910"))) PPC_WEAK_FUNC(sub_830F4910);
PPC_FUNC_IMPL(__imp__sub_830F4910) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4914"))) PPC_WEAK_FUNC(sub_830F4914);
PPC_FUNC_IMPL(__imp__sub_830F4914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F4918"))) PPC_WEAK_FUNC(sub_830F4918);
PPC_FUNC_IMPL(__imp__sub_830F4918) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,13480
	ctx.r6.s64 = ctx.r10.s64 + 13480;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-9964
	ctx.r5.s64 = ctx.r9.s64 + -9964;
	// addi r4,r8,10832
	ctx.r4.s64 = ctx.r8.s64 + 10832;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,3284
	ctx.r3.s64 = ctx.r7.s64 + 3284;
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

__attribute__((alias("__imp__sub_830F4990"))) PPC_WEAK_FUNC(sub_830F4990);
PPC_FUNC_IMPL(__imp__sub_830F4990) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4994"))) PPC_WEAK_FUNC(sub_830F4994);
PPC_FUNC_IMPL(__imp__sub_830F4994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F4998"))) PPC_WEAK_FUNC(sub_830F4998);
PPC_FUNC_IMPL(__imp__sub_830F4998) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,13504
	ctx.r6.s64 = ctx.r10.s64 + 13504;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,3236
	ctx.r5.s64 = ctx.r9.s64 + 3236;
	// addi r4,r8,10860
	ctx.r4.s64 = ctx.r8.s64 + 10860;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,3332
	ctx.r3.s64 = ctx.r7.s64 + 3332;
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

__attribute__((alias("__imp__sub_830F4A10"))) PPC_WEAK_FUNC(sub_830F4A10);
PPC_FUNC_IMPL(__imp__sub_830F4A10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4A14"))) PPC_WEAK_FUNC(sub_830F4A14);
PPC_FUNC_IMPL(__imp__sub_830F4A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F4A18"))) PPC_WEAK_FUNC(sub_830F4A18);
PPC_FUNC_IMPL(__imp__sub_830F4A18) {
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r11,26208
	ctx.r6.s64 = r11.s64 + 26208;
	// addi r4,r10,30528
	ctx.r4.s64 = ctx.r10.s64 + 30528;
	// addi r3,r9,3380
	ctx.r3.s64 = ctx.r9.s64 + 3380;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82c24678
	sub_82C24678(ctx, base);
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-13872
	ctx.r3.s64 = ctx.r8.s64 + -13872;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_830F4A5C"))) PPC_WEAK_FUNC(sub_830F4A5C);
PPC_FUNC_IMPL(__imp__sub_830F4A5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4A60"))) PPC_WEAK_FUNC(sub_830F4A60);
PPC_FUNC_IMPL(__imp__sub_830F4A60) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,17224
	ctx.r7.s64 = ctx.r10.s64 + 17224;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,3148
	ctx.r4.s64 = ctx.r9.s64 + 3148;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,3404
	ctx.r3.s64 = ctx.r8.s64 + 3404;
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

__attribute__((alias("__imp__sub_830F4ACC"))) PPC_WEAK_FUNC(sub_830F4ACC);
PPC_FUNC_IMPL(__imp__sub_830F4ACC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4AD0"))) PPC_WEAK_FUNC(sub_830F4AD0);
PPC_FUNC_IMPL(__imp__sub_830F4AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31938
	r11.s64 = -2093088768;
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// addi r9,r10,-23320
	ctx.r9.s64 = ctx.r10.s64 + -23320;
	// lwz r11,17344(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17344);
	// stw r11,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4AE8"))) PPC_WEAK_FUNC(sub_830F4AE8);
PPC_FUNC_IMPL(__imp__sub_830F4AE8) {
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// addi r9,r11,32132
	ctx.r9.s64 = r11.s64 + 32132;
	// addi r5,r10,-23320
	ctx.r5.s64 = ctx.r10.s64 + -23320;
	// addi r6,r9,20
	ctx.r6.s64 = ctx.r9.s64 + 20;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r8,3172
	ctx.r4.s64 = ctx.r8.s64 + 3172;
	// addi r3,r7,3452
	ctx.r3.s64 = ctx.r7.s64 + 3452;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r31,3
	r31.s64 = 3;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
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

__attribute__((alias("__imp__sub_830F4B64"))) PPC_WEAK_FUNC(sub_830F4B64);
PPC_FUNC_IMPL(__imp__sub_830F4B64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4B68"))) PPC_WEAK_FUNC(sub_830F4B68);
PPC_FUNC_IMPL(__imp__sub_830F4B68) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,17348
	ctx.r7.s64 = ctx.r10.s64 + 17348;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,3192
	ctx.r4.s64 = ctx.r9.s64 + 3192;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,3500
	ctx.r3.s64 = ctx.r8.s64 + 3500;
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

__attribute__((alias("__imp__sub_830F4BD4"))) PPC_WEAK_FUNC(sub_830F4BD4);
PPC_FUNC_IMPL(__imp__sub_830F4BD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4BD8"))) PPC_WEAK_FUNC(sub_830F4BD8);
PPC_FUNC_IMPL(__imp__sub_830F4BD8) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,17396
	ctx.r7.s64 = ctx.r10.s64 + 17396;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,3220
	ctx.r4.s64 = ctx.r9.s64 + 3220;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,3548
	ctx.r3.s64 = ctx.r8.s64 + 3548;
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

__attribute__((alias("__imp__sub_830F4C44"))) PPC_WEAK_FUNC(sub_830F4C44);
PPC_FUNC_IMPL(__imp__sub_830F4C44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4C48"))) PPC_WEAK_FUNC(sub_830F4C48);
PPC_FUNC_IMPL(__imp__sub_830F4C48) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,17448
	ctx.r6.s64 = ctx.r10.s64 + 17448;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,6428
	ctx.r5.s64 = ctx.r9.s64 + 6428;
	// addi r4,r8,3240
	ctx.r4.s64 = ctx.r8.s64 + 3240;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,3596
	ctx.r3.s64 = ctx.r7.s64 + 3596;
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

__attribute__((alias("__imp__sub_830F4CC0"))) PPC_WEAK_FUNC(sub_830F4CC0);
PPC_FUNC_IMPL(__imp__sub_830F4CC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4CC4"))) PPC_WEAK_FUNC(sub_830F4CC4);
PPC_FUNC_IMPL(__imp__sub_830F4CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F4CC8"))) PPC_WEAK_FUNC(sub_830F4CC8);
PPC_FUNC_IMPL(__imp__sub_830F4CC8) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,17544
	ctx.r7.s64 = ctx.r10.s64 + 17544;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,3260
	ctx.r4.s64 = ctx.r9.s64 + 3260;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,3644
	ctx.r3.s64 = ctx.r8.s64 + 3644;
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

__attribute__((alias("__imp__sub_830F4D34"))) PPC_WEAK_FUNC(sub_830F4D34);
PPC_FUNC_IMPL(__imp__sub_830F4D34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4D38"))) PPC_WEAK_FUNC(sub_830F4D38);
PPC_FUNC_IMPL(__imp__sub_830F4D38) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,17664
	ctx.r6.s64 = ctx.r10.s64 + 17664;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,3596
	ctx.r5.s64 = ctx.r9.s64 + 3596;
	// addi r4,r8,3316
	ctx.r4.s64 = ctx.r8.s64 + 3316;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,3692
	ctx.r3.s64 = ctx.r7.s64 + 3692;
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

__attribute__((alias("__imp__sub_830F4DB0"))) PPC_WEAK_FUNC(sub_830F4DB0);
PPC_FUNC_IMPL(__imp__sub_830F4DB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4DB4"))) PPC_WEAK_FUNC(sub_830F4DB4);
PPC_FUNC_IMPL(__imp__sub_830F4DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F4DB8"))) PPC_WEAK_FUNC(sub_830F4DB8);
PPC_FUNC_IMPL(__imp__sub_830F4DB8) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,17832
	ctx.r6.s64 = ctx.r10.s64 + 17832;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,3596
	ctx.r5.s64 = ctx.r9.s64 + 3596;
	// addi r4,r8,3352
	ctx.r4.s64 = ctx.r8.s64 + 3352;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,3740
	ctx.r3.s64 = ctx.r7.s64 + 3740;
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

__attribute__((alias("__imp__sub_830F4E30"))) PPC_WEAK_FUNC(sub_830F4E30);
PPC_FUNC_IMPL(__imp__sub_830F4E30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4E34"))) PPC_WEAK_FUNC(sub_830F4E34);
PPC_FUNC_IMPL(__imp__sub_830F4E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F4E38"))) PPC_WEAK_FUNC(sub_830F4E38);
PPC_FUNC_IMPL(__imp__sub_830F4E38) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,17856
	ctx.r7.s64 = ctx.r10.s64 + 17856;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,3384
	ctx.r4.s64 = ctx.r9.s64 + 3384;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,3788
	ctx.r3.s64 = ctx.r8.s64 + 3788;
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

__attribute__((alias("__imp__sub_830F4EA4"))) PPC_WEAK_FUNC(sub_830F4EA4);
PPC_FUNC_IMPL(__imp__sub_830F4EA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4EA8"))) PPC_WEAK_FUNC(sub_830F4EA8);
PPC_FUNC_IMPL(__imp__sub_830F4EA8) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,17976
	ctx.r6.s64 = ctx.r10.s64 + 17976;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,3596
	ctx.r5.s64 = ctx.r9.s64 + 3596;
	// addi r4,r8,3432
	ctx.r4.s64 = ctx.r8.s64 + 3432;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,3836
	ctx.r3.s64 = ctx.r7.s64 + 3836;
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

__attribute__((alias("__imp__sub_830F4F20"))) PPC_WEAK_FUNC(sub_830F4F20);
PPC_FUNC_IMPL(__imp__sub_830F4F20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4F24"))) PPC_WEAK_FUNC(sub_830F4F24);
PPC_FUNC_IMPL(__imp__sub_830F4F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F4F28"))) PPC_WEAK_FUNC(sub_830F4F28);
PPC_FUNC_IMPL(__imp__sub_830F4F28) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,18144
	ctx.r7.s64 = ctx.r10.s64 + 18144;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,3460
	ctx.r4.s64 = ctx.r9.s64 + 3460;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,3884
	ctx.r3.s64 = ctx.r8.s64 + 3884;
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

__attribute__((alias("__imp__sub_830F4F94"))) PPC_WEAK_FUNC(sub_830F4F94);
PPC_FUNC_IMPL(__imp__sub_830F4F94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F4F98"))) PPC_WEAK_FUNC(sub_830F4F98);
PPC_FUNC_IMPL(__imp__sub_830F4F98) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,18168
	ctx.r7.s64 = ctx.r10.s64 + 18168;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,3484
	ctx.r4.s64 = ctx.r9.s64 + 3484;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,3932
	ctx.r3.s64 = ctx.r8.s64 + 3932;
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

__attribute__((alias("__imp__sub_830F5004"))) PPC_WEAK_FUNC(sub_830F5004);
PPC_FUNC_IMPL(__imp__sub_830F5004) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5008"))) PPC_WEAK_FUNC(sub_830F5008);
PPC_FUNC_IMPL(__imp__sub_830F5008) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// addi r5,r10,18264
	ctx.r5.s64 = ctx.r10.s64 + 18264;
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lis r6,-31921
	ctx.r6.s64 = -2091974656;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,6428
	ctx.r5.s64 = ctx.r8.s64 + 6428;
	// addi r4,r7,3500
	ctx.r4.s64 = ctx.r7.s64 + 3500;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,3980
	ctx.r3.s64 = ctx.r6.s64 + 3980;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,1
	r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,32192
	ctx.r9.s64 = ctx.r9.s64 + 32192;
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

__attribute__((alias("__imp__sub_830F5084"))) PPC_WEAK_FUNC(sub_830F5084);
PPC_FUNC_IMPL(__imp__sub_830F5084) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5088"))) PPC_WEAK_FUNC(sub_830F5088);
PPC_FUNC_IMPL(__imp__sub_830F5088) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,18288
	ctx.r7.s64 = ctx.r10.s64 + 18288;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,3520
	ctx.r4.s64 = ctx.r9.s64 + 3520;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4028
	ctx.r3.s64 = ctx.r8.s64 + 4028;
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

__attribute__((alias("__imp__sub_830F50F4"))) PPC_WEAK_FUNC(sub_830F50F4);
PPC_FUNC_IMPL(__imp__sub_830F50F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F50F8"))) PPC_WEAK_FUNC(sub_830F50F8);
PPC_FUNC_IMPL(__imp__sub_830F50F8) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,18360
	ctx.r7.s64 = ctx.r10.s64 + 18360;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,3556
	ctx.r4.s64 = ctx.r9.s64 + 3556;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4076
	ctx.r3.s64 = ctx.r8.s64 + 4076;
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

__attribute__((alias("__imp__sub_830F5164"))) PPC_WEAK_FUNC(sub_830F5164);
PPC_FUNC_IMPL(__imp__sub_830F5164) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5168"))) PPC_WEAK_FUNC(sub_830F5168);
PPC_FUNC_IMPL(__imp__sub_830F5168) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,18504
	ctx.r7.s64 = ctx.r10.s64 + 18504;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,3592
	ctx.r4.s64 = ctx.r9.s64 + 3592;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4124
	ctx.r3.s64 = ctx.r8.s64 + 4124;
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

__attribute__((alias("__imp__sub_830F51D4"))) PPC_WEAK_FUNC(sub_830F51D4);
PPC_FUNC_IMPL(__imp__sub_830F51D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F51D8"))) PPC_WEAK_FUNC(sub_830F51D8);
PPC_FUNC_IMPL(__imp__sub_830F51D8) {
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
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,6428
	ctx.r5.s64 = ctx.r10.s64 + 6428;
	// addi r4,r9,3616
	ctx.r4.s64 = ctx.r9.s64 + 3616;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,4172
	ctx.r3.s64 = ctx.r8.s64 + 4172;
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

__attribute__((alias("__imp__sub_830F523C"))) PPC_WEAK_FUNC(sub_830F523C);
PPC_FUNC_IMPL(__imp__sub_830F523C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5240"))) PPC_WEAK_FUNC(sub_830F5240);
PPC_FUNC_IMPL(__imp__sub_830F5240) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,18648
	ctx.r6.s64 = ctx.r10.s64 + 18648;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,4172
	ctx.r5.s64 = ctx.r9.s64 + 4172;
	// addi r4,r8,3644
	ctx.r4.s64 = ctx.r8.s64 + 3644;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,4220
	ctx.r3.s64 = ctx.r7.s64 + 4220;
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

__attribute__((alias("__imp__sub_830F52B8"))) PPC_WEAK_FUNC(sub_830F52B8);
PPC_FUNC_IMPL(__imp__sub_830F52B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F52BC"))) PPC_WEAK_FUNC(sub_830F52BC);
PPC_FUNC_IMPL(__imp__sub_830F52BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F52C0"))) PPC_WEAK_FUNC(sub_830F52C0);
PPC_FUNC_IMPL(__imp__sub_830F52C0) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,18744
	ctx.r7.s64 = ctx.r10.s64 + 18744;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,3676
	ctx.r4.s64 = ctx.r9.s64 + 3676;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4268
	ctx.r3.s64 = ctx.r8.s64 + 4268;
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

__attribute__((alias("__imp__sub_830F532C"))) PPC_WEAK_FUNC(sub_830F532C);
PPC_FUNC_IMPL(__imp__sub_830F532C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5330"))) PPC_WEAK_FUNC(sub_830F5330);
PPC_FUNC_IMPL(__imp__sub_830F5330) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,18792
	ctx.r7.s64 = ctx.r10.s64 + 18792;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,3684
	ctx.r4.s64 = ctx.r9.s64 + 3684;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4316
	ctx.r3.s64 = ctx.r8.s64 + 4316;
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

__attribute__((alias("__imp__sub_830F539C"))) PPC_WEAK_FUNC(sub_830F539C);
PPC_FUNC_IMPL(__imp__sub_830F539C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F53A0"))) PPC_WEAK_FUNC(sub_830F53A0);
PPC_FUNC_IMPL(__imp__sub_830F53A0) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,18888
	ctx.r7.s64 = ctx.r10.s64 + 18888;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,3704
	ctx.r4.s64 = ctx.r9.s64 + 3704;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4364
	ctx.r3.s64 = ctx.r8.s64 + 4364;
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

__attribute__((alias("__imp__sub_830F540C"))) PPC_WEAK_FUNC(sub_830F540C);
PPC_FUNC_IMPL(__imp__sub_830F540C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5410"))) PPC_WEAK_FUNC(sub_830F5410);
PPC_FUNC_IMPL(__imp__sub_830F5410) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// addi r6,r10,18992
	ctx.r6.s64 = ctx.r10.s64 + 18992;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,26224
	ctx.r4.s64 = ctx.r8.s64 + 26224;
	// addi r3,r7,4412
	ctx.r3.s64 = ctx.r7.s64 + 4412;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,32244
	ctx.r9.s64 = ctx.r9.s64 + 32244;
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

__attribute__((alias("__imp__sub_830F5480"))) PPC_WEAK_FUNC(sub_830F5480);
PPC_FUNC_IMPL(__imp__sub_830F5480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5484"))) PPC_WEAK_FUNC(sub_830F5484);
PPC_FUNC_IMPL(__imp__sub_830F5484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F5488"))) PPC_WEAK_FUNC(sub_830F5488);
PPC_FUNC_IMPL(__imp__sub_830F5488) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,19256
	ctx.r7.s64 = ctx.r10.s64 + 19256;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,13
	ctx.r6.s64 = 13;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-4984
	ctx.r4.s64 = ctx.r9.s64 + -4984;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4460
	ctx.r3.s64 = ctx.r8.s64 + 4460;
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

__attribute__((alias("__imp__sub_830F54F4"))) PPC_WEAK_FUNC(sub_830F54F4);
PPC_FUNC_IMPL(__imp__sub_830F54F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F54F8"))) PPC_WEAK_FUNC(sub_830F54F8);
PPC_FUNC_IMPL(__imp__sub_830F54F8) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,19568
	ctx.r7.s64 = ctx.r10.s64 + 19568;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-4200
	ctx.r4.s64 = ctx.r9.s64 + -4200;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4508
	ctx.r3.s64 = ctx.r8.s64 + 4508;
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

__attribute__((alias("__imp__sub_830F5564"))) PPC_WEAK_FUNC(sub_830F5564);
PPC_FUNC_IMPL(__imp__sub_830F5564) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5568"))) PPC_WEAK_FUNC(sub_830F5568);
PPC_FUNC_IMPL(__imp__sub_830F5568) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r7,r10,19592
	ctx.r7.s64 = ctx.r10.s64 + 19592;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-27952
	ctx.r4.s64 = ctx.r9.s64 + -27952;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4556
	ctx.r3.s64 = ctx.r8.s64 + 4556;
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

__attribute__((alias("__imp__sub_830F55D4"))) PPC_WEAK_FUNC(sub_830F55D4);
PPC_FUNC_IMPL(__imp__sub_830F55D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F55D8"))) PPC_WEAK_FUNC(sub_830F55D8);
PPC_FUNC_IMPL(__imp__sub_830F55D8) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r7,r10,19616
	ctx.r7.s64 = ctx.r10.s64 + 19616;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-27932
	ctx.r4.s64 = ctx.r9.s64 + -27932;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4604
	ctx.r3.s64 = ctx.r8.s64 + 4604;
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

__attribute__((alias("__imp__sub_830F5644"))) PPC_WEAK_FUNC(sub_830F5644);
PPC_FUNC_IMPL(__imp__sub_830F5644) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5648"))) PPC_WEAK_FUNC(sub_830F5648);
PPC_FUNC_IMPL(__imp__sub_830F5648) {
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
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,5900
	ctx.r5.s64 = ctx.r10.s64 + 5900;
	// addi r4,r9,-3948
	ctx.r4.s64 = ctx.r9.s64 + -3948;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,4652
	ctx.r3.s64 = ctx.r8.s64 + 4652;
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

__attribute__((alias("__imp__sub_830F56AC"))) PPC_WEAK_FUNC(sub_830F56AC);
PPC_FUNC_IMPL(__imp__sub_830F56AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F56B0"))) PPC_WEAK_FUNC(sub_830F56B0);
PPC_FUNC_IMPL(__imp__sub_830F56B0) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,19664
	ctx.r6.s64 = ctx.r10.s64 + 19664;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,4652
	ctx.r5.s64 = ctx.r9.s64 + 4652;
	// addi r4,r8,1076
	ctx.r4.s64 = ctx.r8.s64 + 1076;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,4700
	ctx.r3.s64 = ctx.r7.s64 + 4700;
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

__attribute__((alias("__imp__sub_830F5728"))) PPC_WEAK_FUNC(sub_830F5728);
PPC_FUNC_IMPL(__imp__sub_830F5728) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F572C"))) PPC_WEAK_FUNC(sub_830F572C);
PPC_FUNC_IMPL(__imp__sub_830F572C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F5730"))) PPC_WEAK_FUNC(sub_830F5730);
PPC_FUNC_IMPL(__imp__sub_830F5730) {
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
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,4700
	ctx.r5.s64 = ctx.r10.s64 + 4700;
	// addi r4,r9,1104
	ctx.r4.s64 = ctx.r9.s64 + 1104;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,4748
	ctx.r3.s64 = ctx.r8.s64 + 4748;
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

__attribute__((alias("__imp__sub_830F5794"))) PPC_WEAK_FUNC(sub_830F5794);
PPC_FUNC_IMPL(__imp__sub_830F5794) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5798"))) PPC_WEAK_FUNC(sub_830F5798);
PPC_FUNC_IMPL(__imp__sub_830F5798) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,19808
	ctx.r7.s64 = ctx.r10.s64 + 19808;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-3852
	ctx.r4.s64 = ctx.r9.s64 + -3852;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4796
	ctx.r3.s64 = ctx.r8.s64 + 4796;
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

__attribute__((alias("__imp__sub_830F5804"))) PPC_WEAK_FUNC(sub_830F5804);
PPC_FUNC_IMPL(__imp__sub_830F5804) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5808"))) PPC_WEAK_FUNC(sub_830F5808);
PPC_FUNC_IMPL(__imp__sub_830F5808) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,19880
	ctx.r6.s64 = ctx.r10.s64 + 19880;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,4652
	ctx.r5.s64 = ctx.r9.s64 + 4652;
	// addi r4,r8,-3872
	ctx.r4.s64 = ctx.r8.s64 + -3872;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,4844
	ctx.r3.s64 = ctx.r7.s64 + 4844;
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

__attribute__((alias("__imp__sub_830F5880"))) PPC_WEAK_FUNC(sub_830F5880);
PPC_FUNC_IMPL(__imp__sub_830F5880) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5884"))) PPC_WEAK_FUNC(sub_830F5884);
PPC_FUNC_IMPL(__imp__sub_830F5884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F5888"))) PPC_WEAK_FUNC(sub_830F5888);
PPC_FUNC_IMPL(__imp__sub_830F5888) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,20000
	ctx.r7.s64 = ctx.r10.s64 + 20000;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-3824
	ctx.r4.s64 = ctx.r9.s64 + -3824;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4892
	ctx.r3.s64 = ctx.r8.s64 + 4892;
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

__attribute__((alias("__imp__sub_830F58F4"))) PPC_WEAK_FUNC(sub_830F58F4);
PPC_FUNC_IMPL(__imp__sub_830F58F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F58F8"))) PPC_WEAK_FUNC(sub_830F58F8);
PPC_FUNC_IMPL(__imp__sub_830F58F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31938
	r11.s64 = -2093088768;
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// addi r9,r10,-23248
	ctx.r9.s64 = ctx.r10.s64 + -23248;
	// lwz r11,18988(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18988);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5910"))) PPC_WEAK_FUNC(sub_830F5910);
PPC_FUNC_IMPL(__imp__sub_830F5910) {
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// addi r9,r11,32288
	ctx.r9.s64 = r11.s64 + 32288;
	// addi r4,r10,-23248
	ctx.r4.s64 = ctx.r10.s64 + -23248;
	// addi r5,r9,20
	ctx.r5.s64 = ctx.r9.s64 + 20;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31921
	ctx.r6.s64 = -2091974656;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,4652
	ctx.r5.s64 = ctx.r8.s64 + 4652;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-3680
	ctx.r4.s64 = ctx.r7.s64 + -3680;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,4940
	ctx.r3.s64 = ctx.r6.s64 + 4940;
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

__attribute__((alias("__imp__sub_830F5988"))) PPC_WEAK_FUNC(sub_830F5988);
PPC_FUNC_IMPL(__imp__sub_830F5988) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F598C"))) PPC_WEAK_FUNC(sub_830F598C);
PPC_FUNC_IMPL(__imp__sub_830F598C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F5990"))) PPC_WEAK_FUNC(sub_830F5990);
PPC_FUNC_IMPL(__imp__sub_830F5990) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,20072
	ctx.r6.s64 = ctx.r10.s64 + 20072;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,4652
	ctx.r5.s64 = ctx.r9.s64 + 4652;
	// addi r4,r8,31892
	ctx.r4.s64 = ctx.r8.s64 + 31892;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,4988
	ctx.r3.s64 = ctx.r7.s64 + 4988;
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

__attribute__((alias("__imp__sub_830F5A08"))) PPC_WEAK_FUNC(sub_830F5A08);
PPC_FUNC_IMPL(__imp__sub_830F5A08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5A0C"))) PPC_WEAK_FUNC(sub_830F5A0C);
PPC_FUNC_IMPL(__imp__sub_830F5A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F5A10"))) PPC_WEAK_FUNC(sub_830F5A10);
PPC_FUNC_IMPL(__imp__sub_830F5A10) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,20120
	ctx.r6.s64 = ctx.r10.s64 + 20120;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,4652
	ctx.r5.s64 = ctx.r9.s64 + 4652;
	// addi r4,r8,-3444
	ctx.r4.s64 = ctx.r8.s64 + -3444;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,5036
	ctx.r3.s64 = ctx.r7.s64 + 5036;
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

__attribute__((alias("__imp__sub_830F5A88"))) PPC_WEAK_FUNC(sub_830F5A88);
PPC_FUNC_IMPL(__imp__sub_830F5A88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5A8C"))) PPC_WEAK_FUNC(sub_830F5A8C);
PPC_FUNC_IMPL(__imp__sub_830F5A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F5A90"))) PPC_WEAK_FUNC(sub_830F5A90);
PPC_FUNC_IMPL(__imp__sub_830F5A90) {
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
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,5900
	ctx.r5.s64 = ctx.r10.s64 + 5900;
	// addi r4,r9,-3392
	ctx.r4.s64 = ctx.r9.s64 + -3392;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,5084
	ctx.r3.s64 = ctx.r8.s64 + 5084;
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

__attribute__((alias("__imp__sub_830F5AF4"))) PPC_WEAK_FUNC(sub_830F5AF4);
PPC_FUNC_IMPL(__imp__sub_830F5AF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5AF8"))) PPC_WEAK_FUNC(sub_830F5AF8);
PPC_FUNC_IMPL(__imp__sub_830F5AF8) {
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
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-31938
	ctx.r9.s64 = -2093088768;
	// addi r5,r10,32360
	ctx.r5.s64 = ctx.r10.s64 + 32360;
	// addi r4,r9,20144
	ctx.r4.s64 = ctx.r9.s64 + 20144;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31921
	ctx.r6.s64 = -2091974656;
	// li r9,17
	ctx.r9.s64 = 17;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,5084
	ctx.r5.s64 = ctx.r8.s64 + 5084;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-2592
	ctx.r4.s64 = ctx.r7.s64 + -2592;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,5132
	ctx.r3.s64 = ctx.r6.s64 + 5132;
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

__attribute__((alias("__imp__sub_830F5B70"))) PPC_WEAK_FUNC(sub_830F5B70);
PPC_FUNC_IMPL(__imp__sub_830F5B70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5B74"))) PPC_WEAK_FUNC(sub_830F5B74);
PPC_FUNC_IMPL(__imp__sub_830F5B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F5B78"))) PPC_WEAK_FUNC(sub_830F5B78);
PPC_FUNC_IMPL(__imp__sub_830F5B78) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,20552
	ctx.r6.s64 = ctx.r10.s64 + 20552;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,5084
	ctx.r5.s64 = ctx.r9.s64 + 5084;
	// addi r4,r8,31916
	ctx.r4.s64 = ctx.r8.s64 + 31916;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,5180
	ctx.r3.s64 = ctx.r7.s64 + 5180;
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

__attribute__((alias("__imp__sub_830F5BF0"))) PPC_WEAK_FUNC(sub_830F5BF0);
PPC_FUNC_IMPL(__imp__sub_830F5BF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5BF4"))) PPC_WEAK_FUNC(sub_830F5BF4);
PPC_FUNC_IMPL(__imp__sub_830F5BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F5BF8"))) PPC_WEAK_FUNC(sub_830F5BF8);
PPC_FUNC_IMPL(__imp__sub_830F5BF8) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,20576
	ctx.r6.s64 = ctx.r10.s64 + 20576;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,5084
	ctx.r5.s64 = ctx.r9.s64 + 5084;
	// addi r4,r8,-2544
	ctx.r4.s64 = ctx.r8.s64 + -2544;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,5228
	ctx.r3.s64 = ctx.r7.s64 + 5228;
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

__attribute__((alias("__imp__sub_830F5C70"))) PPC_WEAK_FUNC(sub_830F5C70);
PPC_FUNC_IMPL(__imp__sub_830F5C70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5C74"))) PPC_WEAK_FUNC(sub_830F5C74);
PPC_FUNC_IMPL(__imp__sub_830F5C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F5C78"))) PPC_WEAK_FUNC(sub_830F5C78);
PPC_FUNC_IMPL(__imp__sub_830F5C78) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,20744
	ctx.r6.s64 = ctx.r10.s64 + 20744;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,5084
	ctx.r5.s64 = ctx.r9.s64 + 5084;
	// addi r4,r8,-2396
	ctx.r4.s64 = ctx.r8.s64 + -2396;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,5276
	ctx.r3.s64 = ctx.r7.s64 + 5276;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,9
	r31.s64 = 9;
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

__attribute__((alias("__imp__sub_830F5CF0"))) PPC_WEAK_FUNC(sub_830F5CF0);
PPC_FUNC_IMPL(__imp__sub_830F5CF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5CF4"))) PPC_WEAK_FUNC(sub_830F5CF4);
PPC_FUNC_IMPL(__imp__sub_830F5CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F5CF8"))) PPC_WEAK_FUNC(sub_830F5CF8);
PPC_FUNC_IMPL(__imp__sub_830F5CF8) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,20960
	ctx.r6.s64 = ctx.r10.s64 + 20960;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,5084
	ctx.r5.s64 = ctx.r9.s64 + 5084;
	// addi r4,r8,-2324
	ctx.r4.s64 = ctx.r8.s64 + -2324;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,5324
	ctx.r3.s64 = ctx.r7.s64 + 5324;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,11
	r31.s64 = 11;
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

__attribute__((alias("__imp__sub_830F5D70"))) PPC_WEAK_FUNC(sub_830F5D70);
PPC_FUNC_IMPL(__imp__sub_830F5D70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5D74"))) PPC_WEAK_FUNC(sub_830F5D74);
PPC_FUNC_IMPL(__imp__sub_830F5D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F5D78"))) PPC_WEAK_FUNC(sub_830F5D78);
PPC_FUNC_IMPL(__imp__sub_830F5D78) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,21224
	ctx.r6.s64 = ctx.r10.s64 + 21224;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,5084
	ctx.r5.s64 = ctx.r9.s64 + 5084;
	// addi r4,r8,6996
	ctx.r4.s64 = ctx.r8.s64 + 6996;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,5372
	ctx.r3.s64 = ctx.r7.s64 + 5372;
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

__attribute__((alias("__imp__sub_830F5DF0"))) PPC_WEAK_FUNC(sub_830F5DF0);
PPC_FUNC_IMPL(__imp__sub_830F5DF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5DF4"))) PPC_WEAK_FUNC(sub_830F5DF4);
PPC_FUNC_IMPL(__imp__sub_830F5DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F5DF8"))) PPC_WEAK_FUNC(sub_830F5DF8);
PPC_FUNC_IMPL(__imp__sub_830F5DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31938
	r11.s64 = -2093088768;
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// addi r9,r10,-22960
	ctx.r9.s64 = ctx.r10.s64 + -22960;
	// lwz r11,21272(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21272);
	// stw r11,104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 104, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5E10"))) PPC_WEAK_FUNC(sub_830F5E10);
PPC_FUNC_IMPL(__imp__sub_830F5E10) {
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// addi r9,r11,32452
	ctx.r9.s64 = r11.s64 + 32452;
	// addi r4,r10,-22960
	ctx.r4.s64 = ctx.r10.s64 + -22960;
	// addi r5,r9,20
	ctx.r5.s64 = ctx.r9.s64 + 20;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31921
	ctx.r6.s64 = -2091974656;
	// li r10,17
	ctx.r10.s64 = 17;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,5084
	ctx.r5.s64 = ctx.r8.s64 + 5084;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,7128
	ctx.r4.s64 = ctx.r7.s64 + 7128;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,5420
	ctx.r3.s64 = ctx.r6.s64 + 5420;
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

__attribute__((alias("__imp__sub_830F5E88"))) PPC_WEAK_FUNC(sub_830F5E88);
PPC_FUNC_IMPL(__imp__sub_830F5E88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5E8C"))) PPC_WEAK_FUNC(sub_830F5E8C);
PPC_FUNC_IMPL(__imp__sub_830F5E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F5E90"))) PPC_WEAK_FUNC(sub_830F5E90);
PPC_FUNC_IMPL(__imp__sub_830F5E90) {
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
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-31938
	ctx.r9.s64 = -2093088768;
	// addi r5,r10,32564
	ctx.r5.s64 = ctx.r10.s64 + 32564;
	// addi r4,r9,21276
	ctx.r4.s64 = ctx.r9.s64 + 21276;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31921
	ctx.r6.s64 = -2091974656;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,6428
	ctx.r5.s64 = ctx.r8.s64 + 6428;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-25676
	ctx.r4.s64 = ctx.r7.s64 + -25676;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,5468
	ctx.r3.s64 = ctx.r6.s64 + 5468;
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

__attribute__((alias("__imp__sub_830F5F08"))) PPC_WEAK_FUNC(sub_830F5F08);
PPC_FUNC_IMPL(__imp__sub_830F5F08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5F0C"))) PPC_WEAK_FUNC(sub_830F5F0C);
PPC_FUNC_IMPL(__imp__sub_830F5F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F5F10"))) PPC_WEAK_FUNC(sub_830F5F10);
PPC_FUNC_IMPL(__imp__sub_830F5F10) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,21328
	ctx.r7.s64 = ctx.r10.s64 + 21328;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-1820
	ctx.r4.s64 = ctx.r9.s64 + -1820;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,5516
	ctx.r3.s64 = ctx.r8.s64 + 5516;
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

__attribute__((alias("__imp__sub_830F5F7C"))) PPC_WEAK_FUNC(sub_830F5F7C);
PPC_FUNC_IMPL(__imp__sub_830F5F7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5F80"))) PPC_WEAK_FUNC(sub_830F5F80);
PPC_FUNC_IMPL(__imp__sub_830F5F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31938
	r11.s64 = -2093088768;
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// addi r9,r10,-22552
	ctx.r9.s64 = ctx.r10.s64 + -22552;
	// lwz r11,21324(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21324);
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F5F98"))) PPC_WEAK_FUNC(sub_830F5F98);
PPC_FUNC_IMPL(__imp__sub_830F5F98) {
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// addi r9,r11,32600
	ctx.r9.s64 = r11.s64 + 32600;
	// addi r4,r10,-22552
	ctx.r4.s64 = ctx.r10.s64 + -22552;
	// addi r5,r9,24
	ctx.r5.s64 = ctx.r9.s64 + 24;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31921
	ctx.r6.s64 = -2091974656;
	// li r10,14
	ctx.r10.s64 = 14;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,5084
	ctx.r5.s64 = ctx.r8.s64 + 5084;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-21028
	ctx.r4.s64 = ctx.r7.s64 + -21028;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,5564
	ctx.r3.s64 = ctx.r6.s64 + 5564;
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

__attribute__((alias("__imp__sub_830F6010"))) PPC_WEAK_FUNC(sub_830F6010);
PPC_FUNC_IMPL(__imp__sub_830F6010) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F6014"))) PPC_WEAK_FUNC(sub_830F6014);
PPC_FUNC_IMPL(__imp__sub_830F6014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F6018"))) PPC_WEAK_FUNC(sub_830F6018);
PPC_FUNC_IMPL(__imp__sub_830F6018) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,21472
	ctx.r6.s64 = ctx.r10.s64 + 21472;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,5084
	ctx.r5.s64 = ctx.r9.s64 + 5084;
	// addi r4,r8,-1788
	ctx.r4.s64 = ctx.r8.s64 + -1788;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,5612
	ctx.r3.s64 = ctx.r7.s64 + 5612;
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

__attribute__((alias("__imp__sub_830F6090"))) PPC_WEAK_FUNC(sub_830F6090);
PPC_FUNC_IMPL(__imp__sub_830F6090) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F6094"))) PPC_WEAK_FUNC(sub_830F6094);
PPC_FUNC_IMPL(__imp__sub_830F6094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F6098"))) PPC_WEAK_FUNC(sub_830F6098);
PPC_FUNC_IMPL(__imp__sub_830F6098) {
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
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-31938
	ctx.r9.s64 = -2093088768;
	// addi r5,r10,32688
	ctx.r5.s64 = ctx.r10.s64 + 32688;
	// addi r4,r9,21520
	ctx.r4.s64 = ctx.r9.s64 + 21520;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31921
	ctx.r6.s64 = -2091974656;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,5084
	ctx.r5.s64 = ctx.r8.s64 + 5084;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-1752
	ctx.r4.s64 = ctx.r7.s64 + -1752;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,5660
	ctx.r3.s64 = ctx.r6.s64 + 5660;
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

__attribute__((alias("__imp__sub_830F6110"))) PPC_WEAK_FUNC(sub_830F6110);
PPC_FUNC_IMPL(__imp__sub_830F6110) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F6114"))) PPC_WEAK_FUNC(sub_830F6114);
PPC_FUNC_IMPL(__imp__sub_830F6114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F6118"))) PPC_WEAK_FUNC(sub_830F6118);
PPC_FUNC_IMPL(__imp__sub_830F6118) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,21640
	ctx.r7.s64 = ctx.r10.s64 + 21640;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,13
	ctx.r6.s64 = 13;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-1704
	ctx.r4.s64 = ctx.r9.s64 + -1704;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,5708
	ctx.r3.s64 = ctx.r8.s64 + 5708;
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

__attribute__((alias("__imp__sub_830F6184"))) PPC_WEAK_FUNC(sub_830F6184);
PPC_FUNC_IMPL(__imp__sub_830F6184) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F6188"))) PPC_WEAK_FUNC(sub_830F6188);
PPC_FUNC_IMPL(__imp__sub_830F6188) {
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
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-31938
	ctx.r9.s64 = -2093088768;
	// addi r5,r10,32712
	ctx.r5.s64 = ctx.r10.s64 + 32712;
	// addi r4,r9,21952
	ctx.r4.s64 = ctx.r9.s64 + 21952;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31921
	ctx.r6.s64 = -2091974656;
	// li r9,10
	ctx.r9.s64 = 10;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,5084
	ctx.r5.s64 = ctx.r8.s64 + 5084;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-20976
	ctx.r4.s64 = ctx.r7.s64 + -20976;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,5756
	ctx.r3.s64 = ctx.r6.s64 + 5756;
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

__attribute__((alias("__imp__sub_830F6200"))) PPC_WEAK_FUNC(sub_830F6200);
PPC_FUNC_IMPL(__imp__sub_830F6200) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F6204"))) PPC_WEAK_FUNC(sub_830F6204);
PPC_FUNC_IMPL(__imp__sub_830F6204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F6208"))) PPC_WEAK_FUNC(sub_830F6208);
PPC_FUNC_IMPL(__imp__sub_830F6208) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,22192
	ctx.r6.s64 = ctx.r10.s64 + 22192;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,5084
	ctx.r5.s64 = ctx.r9.s64 + 5084;
	// addi r4,r8,-1672
	ctx.r4.s64 = ctx.r8.s64 + -1672;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,5804
	ctx.r3.s64 = ctx.r7.s64 + 5804;
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

__attribute__((alias("__imp__sub_830F6280"))) PPC_WEAK_FUNC(sub_830F6280);
PPC_FUNC_IMPL(__imp__sub_830F6280) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F6284"))) PPC_WEAK_FUNC(sub_830F6284);
PPC_FUNC_IMPL(__imp__sub_830F6284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F6288"))) PPC_WEAK_FUNC(sub_830F6288);
PPC_FUNC_IMPL(__imp__sub_830F6288) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,22216
	ctx.r6.s64 = ctx.r10.s64 + 22216;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,5276
	ctx.r5.s64 = ctx.r9.s64 + 5276;
	// addi r4,r8,1460
	ctx.r4.s64 = ctx.r8.s64 + 1460;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,5852
	ctx.r3.s64 = ctx.r7.s64 + 5852;
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

__attribute__((alias("__imp__sub_830F6300"))) PPC_WEAK_FUNC(sub_830F6300);
PPC_FUNC_IMPL(__imp__sub_830F6300) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F6304"))) PPC_WEAK_FUNC(sub_830F6304);
PPC_FUNC_IMPL(__imp__sub_830F6304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F6308"))) PPC_WEAK_FUNC(sub_830F6308);
PPC_FUNC_IMPL(__imp__sub_830F6308) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// addi r6,r10,22336
	ctx.r6.s64 = ctx.r10.s64 + 22336;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,6428
	ctx.r5.s64 = ctx.r9.s64 + 6428;
	// addi r4,r8,-1236
	ctx.r4.s64 = ctx.r8.s64 + -1236;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,5900
	ctx.r3.s64 = ctx.r7.s64 + 5900;
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

__attribute__((alias("__imp__sub_830F6380"))) PPC_WEAK_FUNC(sub_830F6380);
PPC_FUNC_IMPL(__imp__sub_830F6380) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F6384"))) PPC_WEAK_FUNC(sub_830F6384);
PPC_FUNC_IMPL(__imp__sub_830F6384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F6388"))) PPC_WEAK_FUNC(sub_830F6388);
PPC_FUNC_IMPL(__imp__sub_830F6388) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,22360
	ctx.r7.s64 = ctx.r10.s64 + 22360;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-824
	ctx.r4.s64 = ctx.r9.s64 + -824;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,5948
	ctx.r3.s64 = ctx.r8.s64 + 5948;
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

__attribute__((alias("__imp__sub_830F63F4"))) PPC_WEAK_FUNC(sub_830F63F4);
PPC_FUNC_IMPL(__imp__sub_830F63F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F63F8"))) PPC_WEAK_FUNC(sub_830F63F8);
PPC_FUNC_IMPL(__imp__sub_830F63F8) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,22432
	ctx.r7.s64 = ctx.r10.s64 + 22432;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-756
	ctx.r4.s64 = ctx.r9.s64 + -756;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,5996
	ctx.r3.s64 = ctx.r8.s64 + 5996;
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

__attribute__((alias("__imp__sub_830F6464"))) PPC_WEAK_FUNC(sub_830F6464);
PPC_FUNC_IMPL(__imp__sub_830F6464) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F6468"))) PPC_WEAK_FUNC(sub_830F6468);
PPC_FUNC_IMPL(__imp__sub_830F6468) {
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
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-31938
	ctx.r9.s64 = -2093088768;
	// addi r5,r10,-32768
	ctx.r5.s64 = ctx.r10.s64 + -32768;
	// addi r4,r9,22504
	ctx.r4.s64 = ctx.r9.s64 + 22504;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31921
	ctx.r6.s64 = -2091974656;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,4652
	ctx.r5.s64 = ctx.r8.s64 + 4652;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-380
	ctx.r4.s64 = ctx.r7.s64 + -380;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,6044
	ctx.r3.s64 = ctx.r6.s64 + 6044;
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

__attribute__((alias("__imp__sub_830F64E0"))) PPC_WEAK_FUNC(sub_830F64E0);
PPC_FUNC_IMPL(__imp__sub_830F64E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F64E4"))) PPC_WEAK_FUNC(sub_830F64E4);
PPC_FUNC_IMPL(__imp__sub_830F64E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F64E8"))) PPC_WEAK_FUNC(sub_830F64E8);
PPC_FUNC_IMPL(__imp__sub_830F64E8) {
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
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// lis r6,-31921
	ctx.r6.s64 = -2091974656;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-32684
	ctx.r9.s64 = ctx.r10.s64 + -32684;
	// addi r5,r8,6428
	ctx.r5.s64 = ctx.r8.s64 + 6428;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r4,r7,-27916
	ctx.r4.s64 = ctx.r7.s64 + -27916;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,6092
	ctx.r3.s64 = ctx.r6.s64 + 6092;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
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

__attribute__((alias("__imp__sub_830F6550"))) PPC_WEAK_FUNC(sub_830F6550);
PPC_FUNC_IMPL(__imp__sub_830F6550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F6554"))) PPC_WEAK_FUNC(sub_830F6554);
PPC_FUNC_IMPL(__imp__sub_830F6554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

