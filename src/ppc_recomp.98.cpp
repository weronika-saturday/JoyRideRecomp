#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82485140"))) PPC_WEAK_FUNC(sub_82485140);
PPC_FUNC_IMPL(__imp__sub_82485140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824851a8
	if (cr6.eq) goto loc_824851A8;
	// bl 0x8248bfe8
	sub_8248BFE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824851A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824851BC"))) PPC_WEAK_FUNC(sub_824851BC);
PPC_FUNC_IMPL(__imp__sub_824851BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824851C0"))) PPC_WEAK_FUNC(sub_824851C0);
PPC_FUNC_IMPL(__imp__sub_824851C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82485228
	if (cr6.eq) goto loc_82485228;
	// bl 0x8248ba60
	sub_8248BA60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82485228:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248523C"))) PPC_WEAK_FUNC(sub_8248523C);
PPC_FUNC_IMPL(__imp__sub_8248523C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82485240"))) PPC_WEAK_FUNC(sub_82485240);
PPC_FUNC_IMPL(__imp__sub_82485240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824852a8
	if (cr6.eq) goto loc_824852A8;
	// bl 0x8248d2a8
	sub_8248D2A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824852A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824852BC"))) PPC_WEAK_FUNC(sub_824852BC);
PPC_FUNC_IMPL(__imp__sub_824852BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824852C0"))) PPC_WEAK_FUNC(sub_824852C0);
PPC_FUNC_IMPL(__imp__sub_824852C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82485328
	if (cr6.eq) goto loc_82485328;
	// bl 0x8248d038
	sub_8248D038(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82485328:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248533C"))) PPC_WEAK_FUNC(sub_8248533C);
PPC_FUNC_IMPL(__imp__sub_8248533C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82485340"))) PPC_WEAK_FUNC(sub_82485340);
PPC_FUNC_IMPL(__imp__sub_82485340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824853a8
	if (cr6.eq) goto loc_824853A8;
	// bl 0x8248cee0
	sub_8248CEE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824853A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824853BC"))) PPC_WEAK_FUNC(sub_824853BC);
PPC_FUNC_IMPL(__imp__sub_824853BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824853C0"))) PPC_WEAK_FUNC(sub_824853C0);
PPC_FUNC_IMPL(__imp__sub_824853C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,156
	ctx.r3.s64 = 156;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82485428
	if (cr6.eq) goto loc_82485428;
	// bl 0x8248ca78
	sub_8248CA78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82485428:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248543C"))) PPC_WEAK_FUNC(sub_8248543C);
PPC_FUNC_IMPL(__imp__sub_8248543C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82485440"))) PPC_WEAK_FUNC(sub_82485440);
PPC_FUNC_IMPL(__imp__sub_82485440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,68
	ctx.r3.s64 = 68;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824854a8
	if (cr6.eq) goto loc_824854A8;
	// bl 0x8248c3e8
	sub_8248C3E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824854A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824854BC"))) PPC_WEAK_FUNC(sub_824854BC);
PPC_FUNC_IMPL(__imp__sub_824854BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824854C0"))) PPC_WEAK_FUNC(sub_824854C0);
PPC_FUNC_IMPL(__imp__sub_824854C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82483c18
	sub_82483C18(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824854f8
	if (cr6.eq) goto loc_824854F8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824854F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248550C"))) PPC_WEAK_FUNC(sub_8248550C);
PPC_FUNC_IMPL(__imp__sub_8248550C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82485510"))) PPC_WEAK_FUNC(sub_82485510);
PPC_FUNC_IMPL(__imp__sub_82485510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-12508
	ctx.r9.s64 = r11.s64 + -12508;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82485544
	if (cr6.eq) goto loc_82485544;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82485544:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82485554"))) PPC_WEAK_FUNC(sub_82485554);
PPC_FUNC_IMPL(__imp__sub_82485554) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82485558"))) PPC_WEAK_FUNC(sub_82485558);
PPC_FUNC_IMPL(__imp__sub_82485558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// lfs f0,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
	// lfs f13,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// stb r10,2(r11)
	PPC_STORE_U8(r11.u32 + 2, ctx.r10.u8);
	// stfs f0,28(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// stb r10,3(r11)
	PPC_STORE_U8(r11.u32 + 3, ctx.r10.u8);
	// stfs f0,32(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// stfs f0,36(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// stb r10,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r10.u8);
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// stb r10,6(r11)
	PPC_STORE_U8(r11.u32 + 6, ctx.r10.u8);
	// stfs f13,44(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 44, temp.u32);
	// stb r10,7(r11)
	PPC_STORE_U8(r11.u32 + 7, ctx.r10.u8);
	// stfs f0,48(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// stb r10,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r10.u8);
	// stfs f0,52(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// stb r10,9(r11)
	PPC_STORE_U8(r11.u32 + 9, ctx.r10.u8);
	// stfs f0,56(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// stb r10,10(r11)
	PPC_STORE_U8(r11.u32 + 10, ctx.r10.u8);
	// stfs f0,60(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 60, temp.u32);
	// stb r10,11(r11)
	PPC_STORE_U8(r11.u32 + 11, ctx.r10.u8);
	// stfs f0,64(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 64, temp.u32);
	// stb r10,12(r11)
	PPC_STORE_U8(r11.u32 + 12, ctx.r10.u8);
	// stfs f0,68(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 68, temp.u32);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// stfs f0,72(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 72, temp.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// stfs f0,76(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 76, temp.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// stb r10,80(r11)
	PPC_STORE_U8(r11.u32 + 80, ctx.r10.u8);
	// stb r10,81(r11)
	PPC_STORE_U8(r11.u32 + 81, ctx.r10.u8);
	// stw r10,84(r11)
	PPC_STORE_U32(r11.u32 + 84, ctx.r10.u32);
	// stw r10,88(r11)
	PPC_STORE_U32(r11.u32 + 88, ctx.r10.u32);
	// stw r10,92(r11)
	PPC_STORE_U32(r11.u32 + 92, ctx.r10.u32);
	// stw r10,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r10.u32);
	// stw r10,100(r11)
	PPC_STORE_U32(r11.u32 + 100, ctx.r10.u32);
	// stw r10,104(r11)
	PPC_STORE_U32(r11.u32 + 104, ctx.r10.u32);
	// stw r10,108(r11)
	PPC_STORE_U32(r11.u32 + 108, ctx.r10.u32);
	// stb r10,128(r11)
	PPC_STORE_U8(r11.u32 + 128, ctx.r10.u8);
}

__attribute__((alias("__imp__sub_82485614"))) PPC_WEAK_FUNC(sub_82485614);
PPC_FUNC_IMPL(__imp__sub_82485614) {
	PPC_FUNC_PROLOGUE();
	// b 0x82705648
	sub_82705648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82485618"))) PPC_WEAK_FUNC(sub_82485618);
PPC_FUNC_IMPL(__imp__sub_82485618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
}

__attribute__((alias("__imp__sub_82485620"))) PPC_WEAK_FUNC(sub_82485620);
PPC_FUNC_IMPL(__imp__sub_82485620) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82485624"))) PPC_WEAK_FUNC(sub_82485624);
PPC_FUNC_IMPL(__imp__sub_82485624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485628"))) PPC_WEAK_FUNC(sub_82485628);
PPC_FUNC_IMPL(__imp__sub_82485628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82485634"))) PPC_WEAK_FUNC(sub_82485634);
PPC_FUNC_IMPL(__imp__sub_82485634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485638"))) PPC_WEAK_FUNC(sub_82485638);
PPC_FUNC_IMPL(__imp__sub_82485638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
}

__attribute__((alias("__imp__sub_82485640"))) PPC_WEAK_FUNC(sub_82485640);
PPC_FUNC_IMPL(__imp__sub_82485640) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82485644"))) PPC_WEAK_FUNC(sub_82485644);
PPC_FUNC_IMPL(__imp__sub_82485644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485648"))) PPC_WEAK_FUNC(sub_82485648);
PPC_FUNC_IMPL(__imp__sub_82485648) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
}

__attribute__((alias("__imp__sub_8248564C"))) PPC_WEAK_FUNC(sub_8248564C);
PPC_FUNC_IMPL(__imp__sub_8248564C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82485650"))) PPC_WEAK_FUNC(sub_82485650);
PPC_FUNC_IMPL(__imp__sub_82485650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
}

__attribute__((alias("__imp__sub_82485658"))) PPC_WEAK_FUNC(sub_82485658);
PPC_FUNC_IMPL(__imp__sub_82485658) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248565C"))) PPC_WEAK_FUNC(sub_8248565C);
PPC_FUNC_IMPL(__imp__sub_8248565C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485660"))) PPC_WEAK_FUNC(sub_82485660);
PPC_FUNC_IMPL(__imp__sub_82485660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
}

__attribute__((alias("__imp__sub_8248566C"))) PPC_WEAK_FUNC(sub_8248566C);
PPC_FUNC_IMPL(__imp__sub_8248566C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82485670"))) PPC_WEAK_FUNC(sub_82485670);
PPC_FUNC_IMPL(__imp__sub_82485670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,40(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// bl 0x82490170
	sub_82490170(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824856A4"))) PPC_WEAK_FUNC(sub_824856A4);
PPC_FUNC_IMPL(__imp__sub_824856A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824856A8"))) PPC_WEAK_FUNC(sub_824856A8);
PPC_FUNC_IMPL(__imp__sub_824856A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82485d98
	sub_82485D98(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82485c60
	sub_82485C60(ctx, base);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x82485558
	sub_82485558(ctx, base);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r31,0
	r31.s64 = 0;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// lfs f31,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stb r31,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, r31.u8);
	// stfs f31,24(r10)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// stb r31,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, r31.u8);
	// stfs f31,28(r10)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// stb r31,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, r31.u8);
	// stfs f31,32(r10)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// stb r31,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, r31.u8);
	// stfs f31,36(r10)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// stb r31,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, r31.u8);
	// stfs f31,40(r10)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// stb r31,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, r31.u8);
	// stb r31,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, r31.u8);
	// stb r31,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r31.u8);
	// stb r31,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, r31.u8);
	// stb r31,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r31.u8);
	// stb r31,11(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11, r31.u8);
	// stb r31,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, r31.u8);
	// stb r31,13(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13, r31.u8);
	// stw r31,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r31.u32);
	// stw r31,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, r31.u32);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, r31.u8);
	// stb r31,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, r31.u8);
	// stb r31,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, r31.u8);
	// stb r31,4(r9)
	PPC_STORE_U8(ctx.r9.u32 + 4, r31.u8);
	// stb r31,5(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5, r31.u8);
	// stb r31,6(r9)
	PPC_STORE_U8(ctx.r9.u32 + 6, r31.u8);
	// stb r31,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, r31.u8);
	// stb r31,8(r9)
	PPC_STORE_U8(ctx.r9.u32 + 8, r31.u8);
	// stb r31,9(r9)
	PPC_STORE_U8(ctx.r9.u32 + 9, r31.u8);
	// stb r31,10(r9)
	PPC_STORE_U8(ctx.r9.u32 + 10, r31.u8);
	// stb r31,11(r9)
	PPC_STORE_U8(ctx.r9.u32 + 11, r31.u8);
	// stb r31,12(r9)
	PPC_STORE_U8(ctx.r9.u32 + 12, r31.u8);
	// stw r31,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, r31.u32);
	// stb r31,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, r31.u8);
	// stb r31,21(r9)
	PPC_STORE_U8(ctx.r9.u32 + 21, r31.u8);
	// stb r31,22(r9)
	PPC_STORE_U8(ctx.r9.u32 + 22, r31.u8);
	// stb r31,23(r9)
	PPC_STORE_U8(ctx.r9.u32 + 23, r31.u8);
	// stb r31,24(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24, r31.u8);
	// stb r31,25(r9)
	PPC_STORE_U8(ctx.r9.u32 + 25, r31.u8);
	// stb r31,26(r9)
	PPC_STORE_U8(ctx.r9.u32 + 26, r31.u8);
	// stb r31,27(r9)
	PPC_STORE_U8(ctx.r9.u32 + 27, r31.u8);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stfs f31,12(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stb r31,1(r11)
	PPC_STORE_U8(r11.u32 + 1, r31.u8);
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// bl 0x82705648
	sub_82705648(ctx, base);
	// lwz r6,36(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lis r8,-31966
	ctx.r8.s64 = -2094923776;
	// addi r7,r8,-16748
	ctx.r7.s64 = ctx.r8.s64 + -16748;
	// stfs f31,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r31.u32);
	// stfs f31,8(r6)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lfs f0,-16748(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -16748);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 24, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248580C"))) PPC_WEAK_FUNC(sub_8248580C);
PPC_FUNC_IMPL(__imp__sub_8248580C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82485810"))) PPC_WEAK_FUNC(sub_82485810);
PPC_FUNC_IMPL(__imp__sub_82485810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lfs f1,-12516(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12516);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826ed8f0
	sub_826ED8F0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r31,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r31.u32);
	// li r31,0
	r31.s64 = 0;
	// addi r9,r10,-12436
	ctx.r9.s64 = ctx.r10.s64 + -12436;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// li r27,8
	r27.s64 = 8;
	// addi r28,r10,-12500
	r28.s64 = ctx.r10.s64 + -12500;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,26
	ctx.r8.s64 = 26;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r3,300
	ctx.r3.s64 = 300;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824858ac
	if (cr6.eq) goto loc_824858AC;
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// bl 0x826fe3a8
	sub_826FE3A8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stb r31,292(r29)
	PPC_STORE_U8(r29.u32 + 292, r31.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,296(r29)
	PPC_STORE_U32(r29.u32 + 296, r11.u32);
	// bl 0x82485d98
	sub_82485D98(ctx, base);
	// b 0x824858b0
	goto loc_824858B0;
loc_824858AC:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_824858B0:
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r8,27
	ctx.r8.s64 = 27;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r3,108
	ctx.r3.s64 = 108;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824858f4
	if (cr6.eq) goto loc_824858F4;
	// bl 0x82485c60
	sub_82485C60(ctx, base);
	// b 0x824858f8
	goto loc_824858F8;
loc_824858F4:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_824858F8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r8,28
	ctx.r8.s64 = 28;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,132
	ctx.r3.s64 = 132;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82485948
	if (cr6.eq) goto loc_82485948;
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// bl 0x827055e8
	sub_827055E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82485558
	sub_82485558(ctx, base);
	// b 0x8248594c
	goto loc_8248594C;
loc_82485948:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_8248594C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r8,29
	ctx.r8.s64 = 29;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r29,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r29.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f31,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// beq cr6,0x824859e8
	if (cr6.eq) goto loc_824859E8;
	// stfs f31,24(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r31.u8);
	// stfs f31,28(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stb r31,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, r31.u8);
	// stfs f31,32(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stb r31,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, r31.u8);
	// stfs f31,36(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stb r31,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, r31.u8);
	// stfs f31,40(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stb r31,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r31.u8);
	// stb r31,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r31.u8);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r31,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, r31.u8);
	// stb r31,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, r31.u8);
	// stb r31,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r31.u8);
	// stb r31,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, r31.u8);
	// stb r31,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, r31.u8);
	// stb r31,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, r31.u8);
	// stb r31,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r31.u8);
	// stb r31,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, r31.u8);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// b 0x824859ec
	goto loc_824859EC;
loc_824859E8:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_824859EC:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r8,30
	ctx.r8.s64 = 30;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82485aa8
	if (cr6.eq) goto loc_82485AA8;
	// stb r31,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r31.u8);
	// addi r11,r3,20
	r11.s64 = ctx.r3.s64 + 20;
	// stb r31,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r31.u8);
	// addi r11,r3,24
	r11.s64 = ctx.r3.s64 + 24;
	// stb r31,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, r31.u8);
	// stb r31,23(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23, r31.u8);
	// stb r31,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, r31.u8);
	// stb r31,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, r31.u8);
	// stb r31,26(r3)
	PPC_STORE_U8(ctx.r3.u32 + 26, r31.u8);
	// stb r31,27(r3)
	PPC_STORE_U8(ctx.r3.u32 + 27, r31.u8);
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r31.u8);
	// stb r31,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, r31.u8);
	// stb r31,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, r31.u8);
	// stb r31,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, r31.u8);
	// stb r31,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r31.u8);
	// stb r31,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r31.u8);
	// stb r31,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, r31.u8);
	// stb r31,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, r31.u8);
	// stb r31,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r31.u8);
	// stb r31,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, r31.u8);
	// stb r31,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, r31.u8);
	// stb r31,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, r31.u8);
	// stb r31,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r31.u8);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stb r31,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r31.u8);
	// stb r31,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r31.u8);
	// stb r31,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, r31.u8);
	// stb r31,23(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23, r31.u8);
	// stb r31,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, r31.u8);
	// stb r31,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, r31.u8);
	// stb r31,26(r3)
	PPC_STORE_U8(ctx.r3.u32 + 26, r31.u8);
	// stb r31,27(r3)
	PPC_STORE_U8(ctx.r3.u32 + 27, r31.u8);
	// b 0x82485aac
	goto loc_82485AAC;
loc_82485AA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82485AAC:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,31
	ctx.r8.s64 = 31;
	// stw r3,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r3.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82485aec
	if (cr6.eq) goto loc_82485AEC;
	// bl 0x82485d30
	sub_82485D30(ctx, base);
	// b 0x82485af0
	goto loc_82485AF0;
loc_82485AEC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82485AF0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r3,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r3.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x82485b74
	if (cr6.eq) goto loc_82485B74;
	// stfs f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// stfs f31,4(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// addi r9,r10,-16748
	ctx.r9.s64 = ctx.r10.s64 + -16748;
	// lfs f0,-16748(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16748);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x828e9464
	return;
loc_82485B74:
	// stw r31,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
}

__attribute__((alias("__imp__sub_82485B80"))) PPC_WEAK_FUNC(sub_82485B80);
PPC_FUNC_IMPL(__imp__sub_82485B80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82485B84"))) PPC_WEAK_FUNC(sub_82485B84);
PPC_FUNC_IMPL(__imp__sub_82485B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485B88"))) PPC_WEAK_FUNC(sub_82485B88);
PPC_FUNC_IMPL(__imp__sub_82485B88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,-12436
	ctx.r10.s64 = r11.s64 + -12436;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82485bc4
	if (cr6.eq) goto loc_82485BC4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
loc_82485BC4:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82485bd8
	if (cr6.eq) goto loc_82485BD8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
loc_82485BD8:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82485bec
	if (cr6.eq) goto loc_82485BEC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
loc_82485BEC:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82485c00
	if (cr6.eq) goto loc_82485C00;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
loc_82485C00:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82485c14
	if (cr6.eq) goto loc_82485C14;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
loc_82485C14:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82485c28
	if (cr6.eq) goto loc_82485C28;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
loc_82485C28:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82485c3c
	if (cr6.eq) goto loc_82485C3C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
loc_82485C3C:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,-12508
	ctx.r10.s64 = r11.s64 + -12508;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82485C5C"))) PPC_WEAK_FUNC(sub_82485C5C);
PPC_FUNC_IMPL(__imp__sub_82485C5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82485C60"))) PPC_WEAK_FUNC(sub_82485C60);
PPC_FUNC_IMPL(__imp__sub_82485C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, r11.u8);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, r11.u8);
	// lis r9,-31966
	ctx.r9.s64 = -2094923776;
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, r11.u8);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// addi r8,r9,-16764
	ctx.r8.s64 = ctx.r9.s64 + -16764;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, r11.u8);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stb r11,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, r11.u8);
	// stfs f0,36(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stfs f0,40(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, r11.u8);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stb r11,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, r11.u8);
	// stfs f0,48(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, r11.u8);
	// stfs f0,52(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r11.u8);
	// stfs f0,56(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, r11.u8);
	// stfs f0,60(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stb r11,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, r11.u8);
	// stfs f0,64(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stb r11,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, r11.u8);
	// stfs f0,68(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r11.u8);
	// stfs f0,72(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, r11.u8);
	// stfs f0,76(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stb r11,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, r11.u8);
	// stfs f0,80(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stfs f0,84(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stfs f0,88(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// lfs f0,-16764(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16764);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f0,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
}

__attribute__((alias("__imp__sub_82485D28"))) PPC_WEAK_FUNC(sub_82485D28);
PPC_FUNC_IMPL(__imp__sub_82485D28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82485D2C"))) PPC_WEAK_FUNC(sub_82485D2C);
PPC_FUNC_IMPL(__imp__sub_82485D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82485D30"))) PPC_WEAK_FUNC(sub_82485D30);
PPC_FUNC_IMPL(__imp__sub_82485D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827055e8
	sub_827055E8(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x82705648
	sub_82705648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82485D94"))) PPC_WEAK_FUNC(sub_82485D94);
PPC_FUNC_IMPL(__imp__sub_82485D94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82485D98"))) PPC_WEAK_FUNC(sub_82485D98);
PPC_FUNC_IMPL(__imp__sub_82485D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r30.u8);
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// stb r30,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r30.u8);
	// stb r30,2(r31)
	PPC_STORE_U8(r31.u32 + 2, r30.u8);
	// stb r30,3(r31)
	PPC_STORE_U8(r31.u32 + 3, r30.u8);
	// lfs f31,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stb r30,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r30.u8);
	// stb r30,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r30.u8);
	// stb r30,7(r31)
	PPC_STORE_U8(r31.u32 + 7, r30.u8);
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// stb r30,9(r31)
	PPC_STORE_U8(r31.u32 + 9, r30.u8);
	// stb r30,10(r31)
	PPC_STORE_U8(r31.u32 + 10, r30.u8);
	// stb r30,11(r31)
	PPC_STORE_U8(r31.u32 + 11, r30.u8);
	// stb r30,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r30.u8);
	// stb r30,13(r31)
	PPC_STORE_U8(r31.u32 + 13, r30.u8);
	// stb r30,14(r31)
	PPC_STORE_U8(r31.u32 + 14, r30.u8);
	// stb r30,15(r31)
	PPC_STORE_U8(r31.u32 + 15, r30.u8);
	// stb r30,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r30.u8);
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// stb r30,18(r31)
	PPC_STORE_U8(r31.u32 + 18, r30.u8);
	// stb r30,19(r31)
	PPC_STORE_U8(r31.u32 + 19, r30.u8);
	// stb r30,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r30.u8);
	// bl 0x826fe398
	sub_826FE398(ctx, base);
	// li r29,-1
	r29.s64 = -1;
	// stfs f31,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stfs f31,52(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// stfs f31,56(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
	// stfs f31,60(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stfs f31,64(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r29.u32);
	// stfs f31,68(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stfs f31,72(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// stfs f31,76(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// stfs f31,80(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// stfs f31,84(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// stfs f31,88(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stfs f31,92(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// stfs f31,96(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f31,100(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// stfs f31,104(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// stfs f31,108(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r10.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,144(r31)
	PPC_STORE_U32(r31.u32 + 144, ctx.r9.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r8,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r8.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r6,-31966
	ctx.r6.s64 = -2094923776;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-16748
	ctx.r4.s64 = ctx.r6.s64 + -16748;
	// stw r5,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r5.u32);
	// lis r11,-31966
	r11.s64 = -2094923776;
	// stw r7,152(r31)
	PPC_STORE_U32(r31.u32 + 152, ctx.r7.u32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lfs f0,-16748(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -16748);
	f0.f64 = double(temp.f32);
	// lis r9,-31966
	ctx.r9.s64 = -2094923776;
	// stfs f0,160(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// addi r8,r11,-16732
	ctx.r8.s64 = r11.s64 + -16732;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r7,r10,-25668
	ctx.r7.s64 = ctx.r10.s64 + -25668;
	// stfs f0,164(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// addi r3,r31,292
	ctx.r3.s64 = r31.s64 + 292;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// addi r6,r9,-16764
	ctx.r6.s64 = ctx.r9.s64 + -16764;
	// stfs f0,168(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,172(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 172, temp.u32);
	// lfs f0,-16732(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16732);
	f0.f64 = double(temp.f32);
	// stfs f0,176(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,180(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,184(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// lfs f0,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,188(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// lfs f0,-25668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25668);
	f0.f64 = double(temp.f32);
	// stfs f0,192(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 192, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,196(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 196, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,200(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 200, temp.u32);
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,204(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 204, temp.u32);
	// lfs f0,-16764(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16764);
	f0.f64 = double(temp.f32);
	// stfs f0,208(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 208, temp.u32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,212(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 212, temp.u32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,216(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 216, temp.u32);
	// lfs f0,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,220(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 220, temp.u32);
	// lfs f0,-25668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25668);
	f0.f64 = double(temp.f32);
	// stfs f0,224(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 224, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,228(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 228, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,232(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 232, temp.u32);
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,236(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 236, temp.u32);
	// lfs f0,-25668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25668);
	f0.f64 = double(temp.f32);
	// stfs f0,240(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 240, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,244(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 244, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,248(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 248, temp.u32);
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,252(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 252, temp.u32);
	// lfs f0,-25668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25668);
	f0.f64 = double(temp.f32);
	// stfs f0,256(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 256, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,260(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 260, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,264(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 264, temp.u32);
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,268(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 268, temp.u32);
	// lfs f0,-25668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25668);
	f0.f64 = double(temp.f32);
	// stfs f0,272(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 272, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,276(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 276, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,280(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 280, temp.u32);
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,284(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 284, temp.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r30.u32);
	// stw r29,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r29.u32);
	// bl 0x82418040
	sub_82418040(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_82485FE4"))) PPC_WEAK_FUNC(sub_82485FE4);
PPC_FUNC_IMPL(__imp__sub_82485FE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82485FE8"))) PPC_WEAK_FUNC(sub_82485FE8);
PPC_FUNC_IMPL(__imp__sub_82485FE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82485b88
	sub_82485B88(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82486020
	if (cr6.eq) goto loc_82486020;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82486020:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82486034"))) PPC_WEAK_FUNC(sub_82486034);
PPC_FUNC_IMPL(__imp__sub_82486034) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486038"))) PPC_WEAK_FUNC(sub_82486038);
PPC_FUNC_IMPL(__imp__sub_82486038) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82485660
	sub_82485660(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82486068"))) PPC_WEAK_FUNC(sub_82486068);
PPC_FUNC_IMPL(__imp__sub_82486068) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248606C"))) PPC_WEAK_FUNC(sub_8248606C);
PPC_FUNC_IMPL(__imp__sub_8248606C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82486070"))) PPC_WEAK_FUNC(sub_82486070);
PPC_FUNC_IMPL(__imp__sub_82486070) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826eda38
	sub_826EDA38(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x82485660
	sub_82485660(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824860A8"))) PPC_WEAK_FUNC(sub_824860A8);
PPC_FUNC_IMPL(__imp__sub_824860A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824860AC"))) PPC_WEAK_FUNC(sub_824860AC);
PPC_FUNC_IMPL(__imp__sub_824860AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824860B0"))) PPC_WEAK_FUNC(sub_824860B0);
PPC_FUNC_IMPL(__imp__sub_824860B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-12408
	ctx.r9.s64 = r11.s64 + -12408;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826ed958
	sub_826ED958(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82486100
	if (cr6.eq) goto loc_82486100;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82486100:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82486114"))) PPC_WEAK_FUNC(sub_82486114);
PPC_FUNC_IMPL(__imp__sub_82486114) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486118"))) PPC_WEAK_FUNC(sub_82486118);
PPC_FUNC_IMPL(__imp__sub_82486118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82485670
	sub_82485670(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82486154"))) PPC_WEAK_FUNC(sub_82486154);
PPC_FUNC_IMPL(__imp__sub_82486154) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486158"))) PPC_WEAK_FUNC(sub_82486158);
PPC_FUNC_IMPL(__imp__sub_82486158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8248619c
	if (cr6.eq) goto loc_8248619C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r7,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r7.u32);
loc_8248619C:
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824861cc
	if (cr6.eq) goto loc_824861CC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r7,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r7.u32);
loc_824861CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826edad8
	sub_826EDAD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824861E4"))) PPC_WEAK_FUNC(sub_824861E4);
PPC_FUNC_IMPL(__imp__sub_824861E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824861E8"))) PPC_WEAK_FUNC(sub_824861E8);
PPC_FUNC_IMPL(__imp__sub_824861E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826ed908
	sub_826ED908(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// addi r8,r11,-12424
	ctx.r8.s64 = r11.s64 + -12424;
	// addi r7,r10,-12352
	ctx.r7.s64 = ctx.r10.s64 + -12352;
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// addi r6,r9,-12368
	ctx.r6.s64 = ctx.r9.s64 + -12368;
	// stw r8,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r8.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// addi r29,r31,40
	r29.s64 = r31.s64 + 40;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r6,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r6.u32);
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// addi r29,r31,132
	r29.s64 = r31.s64 + 132;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// addi r29,r31,224
	r29.s64 = r31.s64 + 224;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_824862A4"))) PPC_WEAK_FUNC(sub_824862A4);
PPC_FUNC_IMPL(__imp__sub_824862A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824862A8"))) PPC_WEAK_FUNC(sub_824862A8);
PPC_FUNC_IMPL(__imp__sub_824862A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-12352
	ctx.r9.s64 = r11.s64 + -12352;
	// addi r8,r10,-12368
	ctx.r8.s64 = ctx.r10.s64 + -12368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r30,r3,224
	r30.s64 = ctx.r3.s64 + 224;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,132
	r30.s64 = r31.s64 + 132;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r7,-12408
	ctx.r5.s64 = ctx.r7.s64 + -12408;
	// addi r4,r6,3368
	ctx.r4.s64 = ctx.r6.s64 + 3368;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r4.u32);
	// bl 0x826ed958
	sub_826ED958(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82486378"))) PPC_WEAK_FUNC(sub_82486378);
PPC_FUNC_IMPL(__imp__sub_82486378) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248637C"))) PPC_WEAK_FUNC(sub_8248637C);
PPC_FUNC_IMPL(__imp__sub_8248637C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82486380"))) PPC_WEAK_FUNC(sub_82486380);
PPC_FUNC_IMPL(__imp__sub_82486380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82485650
	sub_82485650(ctx, base);
	// lwz r28,40(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// lwz r10,220(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 220);
	// lwz r29,28(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x824863c8
	if (cr6.eq) goto loc_824863C8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82486598
	sub_82486598(ctx, base);
loc_824863C8:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82486428
	if (cr6.eq) goto loc_82486428;
	// bl 0x825ca0c8
	sub_825CA0C8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82486428
	if (!cr6.eq) goto loc_82486428;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825ca170
	sub_825CA170(ctx, base);
	// lwz r29,28(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r30,r31,132
	r30.s64 = r31.s64 + 132;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x82486428
	if (cr6.eq) goto loc_82486428;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d0120
	sub_822D0120(ctx, base);
loc_82486428:
	// addi r31,r31,224
	r31.s64 = r31.s64 + 224;
	// lwz r30,28(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82486450
	if (cr6.eq) goto loc_82486450;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0120
	sub_822D0120(ctx, base);
loc_82486450:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82486458"))) PPC_WEAK_FUNC(sub_82486458);
PPC_FUNC_IMPL(__imp__sub_82486458) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8248645C"))) PPC_WEAK_FUNC(sub_8248645C);
PPC_FUNC_IMPL(__imp__sub_8248645C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82486460"))) PPC_WEAK_FUNC(sub_82486460);
PPC_FUNC_IMPL(__imp__sub_82486460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r3,132
	r31.s64 = ctx.r3.s64 + 132;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82486498
	if (cr6.eq) goto loc_82486498;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0120
	sub_822D0120(ctx, base);
loc_82486498:
	// lwz r11,224(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 224);
	// addi r31,r30,224
	r31.s64 = r30.s64 + 224;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824864bc
	if (cr6.eq) goto loc_824864BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0120
	sub_822D0120(ctx, base);
loc_824864BC:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r31,r30,40
	r31.s64 = r30.s64 + 40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824864e0
	if (cr6.eq) goto loc_824864E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82486598
	sub_82486598(ctx, base);
loc_824864E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_824864E4"))) PPC_WEAK_FUNC(sub_824864E4);
PPC_FUNC_IMPL(__imp__sub_824864E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824864E8"))) PPC_WEAK_FUNC(sub_824864E8);
PPC_FUNC_IMPL(__imp__sub_824864E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82485670
	sub_82485670(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// bl 0x826ed9f0
	sub_826ED9F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82486534"))) PPC_WEAK_FUNC(sub_82486534);
PPC_FUNC_IMPL(__imp__sub_82486534) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486538"))) PPC_WEAK_FUNC(sub_82486538);
PPC_FUNC_IMPL(__imp__sub_82486538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// beq cr6,0x82486580
	if (cr6.eq) goto loc_82486580;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,19796
	ctx.r4.s64 = ctx.r9.s64 + 19796;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_82486580:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82486590"))) PPC_WEAK_FUNC(sub_82486590);
PPC_FUNC_IMPL(__imp__sub_82486590) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486594"))) PPC_WEAK_FUNC(sub_82486594);
PPC_FUNC_IMPL(__imp__sub_82486594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82486598"))) PPC_WEAK_FUNC(sub_82486598);
PPC_FUNC_IMPL(__imp__sub_82486598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82486658
	if (cr6.eq) goto loc_82486658;
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,19796
	ctx.r4.s64 = ctx.r8.s64 + 19796;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// lis r7,-32211
	ctx.r7.s64 = -2110980096;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r7,-920
	ctx.r5.s64 = ctx.r7.s64 + -920;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r11,28
	r30.s64 = r11.s64 + 28;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// bl 0x822cfee0
	sub_822CFEE0(ctx, base);
	// lis r4,-32184
	ctx.r4.s64 = -2109210624;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r4,25912
	r11.s64 = ctx.r4.s64 + 25912;
	// li r6,50
	ctx.r6.s64 = 50;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// bl 0x822cff58
	sub_822CFF58(ctx, base);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r9,r10,16576
	ctx.r9.s64 = ctx.r10.s64 + 16576;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r4,r31,64
	ctx.r4.s64 = r31.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822cffd0
	sub_822CFFD0(ctx, base);
loc_82486658:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248666C"))) PPC_WEAK_FUNC(sub_8248666C);
PPC_FUNC_IMPL(__imp__sub_8248666C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486670"))) PPC_WEAK_FUNC(sub_82486670);
PPC_FUNC_IMPL(__imp__sub_82486670) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
}

__attribute__((alias("__imp__sub_82486674"))) PPC_WEAK_FUNC(sub_82486674);
PPC_FUNC_IMPL(__imp__sub_82486674) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x82486678
	goto loc_82486678;
loc_82486678:
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x824862a8
	sub_824862A8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824866b0
	if (cr6.eq) goto loc_824866B0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824866B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486678"))) PPC_WEAK_FUNC(sub_82486678);
PPC_FUNC_IMPL(__imp__sub_82486678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x824862a8
	sub_824862A8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824866b0
	if (cr6.eq) goto loc_824866B0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824866B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824866C8"))) PPC_WEAK_FUNC(sub_824866C8);
PPC_FUNC_IMPL(__imp__sub_824866C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// beq cr6,0x82486710
	if (cr6.eq) goto loc_82486710;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,20576
	ctx.r4.s64 = ctx.r9.s64 + 20576;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_82486710:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82486720"))) PPC_WEAK_FUNC(sub_82486720);
PPC_FUNC_IMPL(__imp__sub_82486720) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486724"))) PPC_WEAK_FUNC(sub_82486724);
PPC_FUNC_IMPL(__imp__sub_82486724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82486728"))) PPC_WEAK_FUNC(sub_82486728);
PPC_FUNC_IMPL(__imp__sub_82486728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r10.u32);
	// bl 0x82700538
	sub_82700538(ctx, base);
	// lwz r30,136(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82700280
	sub_82700280(ctx, base);
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	f0.f64 = double(temp.f32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,160(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 160, temp.u32);
	// lfs f13,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,164(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 164, temp.u32);
	// lfs f12,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,168(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 168, temp.u32);
	// lfs f11,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,172(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 172, temp.u32);
	// lfs f10,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,176(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 176, temp.u32);
	// lfs f9,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,180(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 180, temp.u32);
	// lfs f8,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,184(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 184, temp.u32);
	// lfs f7,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f7.f64 = double(temp.f32);
	// lfs f31,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f31.f64 = double(temp.f32);
	// stfs f7,188(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 188, temp.u32);
	// stfs f31,172(r8)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 172, temp.u32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f6,164(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 164);
	ctx.f6.f64 = double(temp.f32);
	// addi r4,r11,176
	ctx.r4.s64 = r11.s64 + 176;
	// lfs f4,168(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 168);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,160(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 160);
	ctx.f5.f64 = double(temp.f32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f6,164(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f5,160(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f4,168(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82339888
	sub_82339888(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f3,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r11,192
	ctx.r10.s64 = r11.s64 + 192;
	// lfs f0,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	f0.f64 = double(temp.f32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f10.f64 = double(temp.f32);
	// stfs f3,192(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r11.u32 + 192, temp.u32);
	// stfs f2,196(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 196, temp.u32);
	// stfs f1,200(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 200, temp.u32);
	// stfs f0,204(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 204, temp.u32);
	// stfs f13,208(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 208, temp.u32);
	// stfs f12,212(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 212, temp.u32);
	// stfs f11,216(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 216, temp.u32);
	// stfs f10,220(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 220, temp.u32);
	// lfs f7,196(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 196);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r10,208
	ctx.r10.s64 = ctx.r10.s64 + 208;
	// fmuls f6,f7,f7
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// lfs f9,192(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 192);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,200(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 200);
	ctx.f8.f64 = double(temp.f32);
	// fmr f4,f7
	ctx.f4.f64 = ctx.f7.f64;
	// lfs f2,204(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 204);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f8
	ctx.f3.f64 = ctx.f8.f64;
	// stfs f2,204(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 204, temp.u32);
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 320);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmadds f5,f9,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f6.f64));
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// fmadds f1,f8,f8,f5
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fsqrts f0,f1
	f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// fdivs f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 / f0.f64));
	// fmuls f12,f9,f13
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f12,192(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 192, temp.u32);
	// fmuls f11,f13,f7
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// stfs f11,196(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 196, temp.u32);
	// fmuls f10,f8,f13
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f10,200(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 200, temp.u32);
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f4,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f8
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f6,f9,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// lfs f3,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,12(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// fmadds f1,f4,f4,f6
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f6.f64));
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fsqrts f0,f1
	f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// fdivs f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 / f0.f64));
	// fmuls f12,f9,f13
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f11,f8,f13
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f10,f4,f13
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f10,8(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f9,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stfs f9,224(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 224, temp.u32);
	// addi r5,r8,-25636
	ctx.r5.s64 = ctx.r8.s64 + -25636;
	// lfs f0,4036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4036);
	f0.f64 = double(temp.f32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,228(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 228, temp.u32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,232(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 232, temp.u32);
	// lfs f6,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,236(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 236, temp.u32);
	// lfs f5,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,52(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f4,224(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 224);
	ctx.f4.f64 = double(temp.f32);
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// lfs f3,232(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 232);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,228(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 228);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f2
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmadds f13,f4,f4,f1
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f1.f64));
	// lfs f1,-12312(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12312);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f12,f3,f3,f13
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f13.f64));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f10,48(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r4,r11,224
	ctx.r4.s64 = r11.s64 + 224;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f9,196(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 196);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,228(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 228);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,200(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 200);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// lfs f5,232(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 232);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,224(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 224);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f2,f6,f5,f7
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f7.f64));
	// lfs f3,192(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 192);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f1,f4,f3,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f2.f64));
	// stfs f1,56(r6)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 56, temp.u32);
	// lwz r3,412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 412);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stfs f0,60(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 60, temp.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,64(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 64, temp.u32);
	// bl 0x823ed8f8
	sub_823ED8F8(ctx, base);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f1,80(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 80, temp.u32);
	// bl 0x823edac0
	sub_823EDAC0(ctx, base);
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f1,84(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 84, temp.u32);
	// bl 0x823edaa0
	sub_823EDAA0(ctx, base);
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stfs f1,88(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 88, temp.u32);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r10,r11,240
	ctx.r10.s64 = r11.s64 + 240;
	// lwz r10,44(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// lwz r3,504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 504);
	// lfs f12,368(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 368);
	ctx.f12.f64 = double(temp.f32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// stfs f12,240(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 240, temp.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f11,372(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 372);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,244(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 244, temp.u32);
	// lfs f10,376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 376);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stfs f10,248(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 248, temp.u32);
	// lfs f9,380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 380);
	ctx.f9.f64 = double(temp.f32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stfs f9,252(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 252, temp.u32);
	// stfs f12,256(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 256, temp.u32);
	// lfs f7,244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,260(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 260, temp.u32);
	// lfs f6,248(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 248);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,264(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 264, temp.u32);
	// lfs f5,252(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 252);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,268(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 268, temp.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lbz r7,317(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 317);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stb r7,7(r8)
	PPC_STORE_U8(ctx.r8.u32 + 7, ctx.r7.u8);
	// bl 0x8242c6d8
	sub_8242C6D8(ctx, base);
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r4,6
	ctx.r4.s64 = 6;
	// stb r3,8(r6)
	PPC_STORE_U8(ctx.r6.u32 + 8, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8242c6d8
	sub_8242C6D8(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82486b00
	if (!cr6.eq) goto loc_82486B00;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8242c6d8
	sub_8242C6D8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82486b00
	if (!cr6.eq) goto loc_82486B00;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8242c6d8
	sub_8242C6D8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x82486b04
	if (cr6.eq) goto loc_82486B04;
loc_82486B00:
	// li r11,1
	r11.s64 = 1;
loc_82486B04:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, r11.u8);
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f0,21036(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stb r8,10(r6)
	PPC_STORE_U8(ctx.r6.u32 + 10, ctx.r8.u8);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lbz r4,289(r29)
	ctx.r4.u64 = PPC_LOAD_U8(r29.u32 + 289);
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r3,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// stb r11,11(r5)
	PPC_STORE_U8(ctx.r5.u32 + 11, r11.u8);
	// lwz r10,292(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 292);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stw r10,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r10.u32);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// lbz r7,7(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 7);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x82486b6c
	if (!cr6.eq) goto loc_82486B6C;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lfs f13,104(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f11,104(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 104, temp.u32);
	// b 0x82486b70
	goto loc_82486B70;
loc_82486B6C:
	// stfs f0,104(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 104, temp.u32);
loc_82486B70:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f13,208(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f11,216(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 216);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,212(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 212);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f0,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f12.f64));
	// fadds f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// bl 0x828eb798
	sub_828EB798(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f0,-12304(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12304);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f8,f0
	cr6.compare(ctx.f8.f64, f0.f64);
	// bgt cr6,0x82486bac
	if (cr6.gt) goto loc_82486BAC;
	// li r11,0
	r11.s64 = 0;
loc_82486BAC:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stb r11,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, r11.u8);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x82485638
	sub_82485638(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82486c68
	if (!cr6.eq) goto loc_82486C68;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8242c778
	sub_8242C778(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82486c68
	if (!cr6.eq) goto loc_82486C68;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8242dd00
	sub_8242DD00(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82486c68
	if (!cr6.eq) goto loc_82486C68;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82486c10
	if (cr6.eq) goto loc_82486C10;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82486c14
	if (!cr6.eq) goto loc_82486C14;
loc_82486C10:
	// li r11,0
	r11.s64 = 0;
loc_82486C14:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r30,80(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8242dd00
	sub_8242DD00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82419370
	sub_82419370(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15728
	ctx.r4.s64 = r11.s64 + -15728;
	// bl 0x82419200
	sub_82419200(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r11,112
	ctx.r3.s64 = r11.s64 + 112;
	// lfs f2,-13388(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13388);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x826fe450
	sub_826FE450(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824191b8
	sub_824191B8(ctx, base);
	// b 0x82486c80
	goto loc_82486C80;
loc_82486C68:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r3,r11,112
	ctx.r3.s64 = r11.s64 + 112;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lfs f1,80(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826fe398
	sub_826FE398(ctx, base);
loc_82486C80:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r3,r11,112
	ctx.r3.s64 = r11.s64 + 112;
	// bl 0x826fe4a0
	sub_826FE4A0(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lfs f0,116(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 116);
	f0.f64 = double(temp.f32);
	// stfs f0,68(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 68, temp.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_82486CA8"))) PPC_WEAK_FUNC(sub_82486CA8);
PPC_FUNC_IMPL(__imp__sub_82486CA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82486CAC"))) PPC_WEAK_FUNC(sub_82486CAC);
PPC_FUNC_IMPL(__imp__sub_82486CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82486CB0"))) PPC_WEAK_FUNC(sub_82486CB0);
PPC_FUNC_IMPL(__imp__sub_82486CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826ed908
	sub_826ED908(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// addi r8,r11,-12424
	ctx.r8.s64 = r11.s64 + -12424;
	// addi r7,r10,-12280
	ctx.r7.s64 = ctx.r10.s64 + -12280;
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// addi r6,r9,-12296
	ctx.r6.s64 = ctx.r9.s64 + -12296;
	// stw r8,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r8.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// addi r29,r31,40
	r29.s64 = r31.s64 + 40;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r6,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r6.u32);
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// addi r29,r31,132
	r29.s64 = r31.s64 + 132;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// addi r29,r31,224
	r29.s64 = r31.s64 + 224;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r30.u32);
	// addi r29,r31,316
	r29.s64 = r31.s64 + 316;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
	// addi r29,r31,408
	r29.s64 = r31.s64 + 408;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,412(r31)
	PPC_STORE_U32(r31.u32 + 412, r30.u32);
	// stw r30,408(r31)
	PPC_STORE_U32(r31.u32 + 408, r30.u32);
	// addi r29,r31,500
	r29.s64 = r31.s64 + 500;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,504(r31)
	PPC_STORE_U32(r31.u32 + 504, r30.u32);
	// stw r30,500(r31)
	PPC_STORE_U32(r31.u32 + 500, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82486DD8"))) PPC_WEAK_FUNC(sub_82486DD8);
PPC_FUNC_IMPL(__imp__sub_82486DD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82486DDC"))) PPC_WEAK_FUNC(sub_82486DDC);
PPC_FUNC_IMPL(__imp__sub_82486DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82486DE0"))) PPC_WEAK_FUNC(sub_82486DE0);
PPC_FUNC_IMPL(__imp__sub_82486DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-12280
	ctx.r9.s64 = r11.s64 + -12280;
	// addi r8,r10,-12296
	ctx.r8.s64 = ctx.r10.s64 + -12296;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r30,r3,500
	r30.s64 = ctx.r3.s64 + 500;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,408
	r30.s64 = r31.s64 + 408;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,316
	r30.s64 = r31.s64 + 316;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,224
	r30.s64 = r31.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,132
	r30.s64 = r31.s64 + 132;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r7,-12408
	ctx.r5.s64 = ctx.r7.s64 + -12408;
	// addi r4,r6,3368
	ctx.r4.s64 = ctx.r6.s64 + 3368;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r4.u32);
	// bl 0x826ed958
	sub_826ED958(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82486F1C"))) PPC_WEAK_FUNC(sub_82486F1C);
PPC_FUNC_IMPL(__imp__sub_82486F1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82486F20"))) PPC_WEAK_FUNC(sub_82486F20);
PPC_FUNC_IMPL(__imp__sub_82486F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82485650
	sub_82485650(ctx, base);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// addi r31,r29,40
	r31.s64 = r29.s64 + 40;
	// lwz r9,220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// lwz r30,28(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x82486f68
	if (cr6.eq) goto loc_82486F68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82486598
	sub_82486598(ctx, base);
loc_82486F68:
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82486f9c
	if (cr6.eq) goto loc_82486F9C;
	// bl 0x825ca0c8
	sub_825CA0C8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82486fa0
	if (cr6.eq) goto loc_82486FA0;
loc_82486F9C:
	// li r11,0
	r11.s64 = 0;
loc_82486FA0:
	// clrlwi r28,r11,24
	r28.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(r28.u32, 1, xer);
	// bne cr6,0x8248706c
	if (!cr6.eq) goto loc_8248706C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ca170
	sub_825CA170(ctx, base);
	// lwz r31,28(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// addi r30,r29,132
	r30.s64 = r29.s64 + 132;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x82486fdc
	if (cr6.eq) goto loc_82486FDC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d0048
	sub_822D0048(ctx, base);
loc_82486FDC:
	// lwz r11,224(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 224);
	// addi r30,r29,224
	r30.s64 = r29.s64 + 224;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x82487000
	if (cr6.eq) goto loc_82487000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d0120
	sub_822D0120(ctx, base);
loc_82487000:
	// lwz r11,316(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 316);
	// addi r30,r29,316
	r30.s64 = r29.s64 + 316;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x82487024
	if (cr6.eq) goto loc_82487024;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8234df50
	sub_8234DF50(ctx, base);
loc_82487024:
	// lwz r11,408(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 408);
	// addi r30,r29,408
	r30.s64 = r29.s64 + 408;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x82487048
	if (cr6.eq) goto loc_82487048;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82487170
	sub_82487170(ctx, base);
loc_82487048:
	// lwz r11,500(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 500);
	// addi r30,r29,500
	r30.s64 = r29.s64 + 500;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x8248706c
	if (cr6.eq) goto loc_8248706C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8243a490
	sub_8243A490(ctx, base);
loc_8248706C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82487074"))) PPC_WEAK_FUNC(sub_82487074);
PPC_FUNC_IMPL(__imp__sub_82487074) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82487078"))) PPC_WEAK_FUNC(sub_82487078);
PPC_FUNC_IMPL(__imp__sub_82487078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r3,132
	r31.s64 = ctx.r3.s64 + 132;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824870b0
	if (cr6.eq) goto loc_824870B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0048
	sub_822D0048(ctx, base);
loc_824870B0:
	// lwz r11,224(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 224);
	// addi r31,r30,224
	r31.s64 = r30.s64 + 224;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824870d4
	if (cr6.eq) goto loc_824870D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0120
	sub_822D0120(ctx, base);
loc_824870D4:
	// lwz r11,316(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 316);
	// addi r31,r30,316
	r31.s64 = r30.s64 + 316;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824870f8
	if (cr6.eq) goto loc_824870F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234df50
	sub_8234DF50(ctx, base);
loc_824870F8:
	// lwz r11,408(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 408);
	// addi r31,r30,408
	r31.s64 = r30.s64 + 408;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8248711c
	if (cr6.eq) goto loc_8248711C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82487170
	sub_82487170(ctx, base);
loc_8248711C:
	// lwz r11,500(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 500);
	// addi r31,r30,500
	r31.s64 = r30.s64 + 500;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82487140
	if (cr6.eq) goto loc_82487140;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243a490
	sub_8243A490(ctx, base);
loc_82487140:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r31,r30,40
	r31.s64 = r30.s64 + 40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82487164
	if (cr6.eq) goto loc_82487164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82486598
	sub_82486598(ctx, base);
loc_82487164:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82487168"))) PPC_WEAK_FUNC(sub_82487168);
PPC_FUNC_IMPL(__imp__sub_82487168) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8248716C"))) PPC_WEAK_FUNC(sub_8248716C);
PPC_FUNC_IMPL(__imp__sub_8248716C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82487170"))) PPC_WEAK_FUNC(sub_82487170);
PPC_FUNC_IMPL(__imp__sub_82487170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82487230
	if (cr6.eq) goto loc_82487230;
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,20576
	ctx.r4.s64 = ctx.r8.s64 + 20576;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// lis r7,-32211
	ctx.r7.s64 = -2110980096;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r7,-920
	ctx.r5.s64 = ctx.r7.s64 + -920;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r11,28
	r30.s64 = r11.s64 + 28;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// bl 0x822cfee0
	sub_822CFEE0(ctx, base);
	// lis r4,-32184
	ctx.r4.s64 = -2109210624;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r4,26312
	r11.s64 = ctx.r4.s64 + 26312;
	// li r6,50
	ctx.r6.s64 = 50;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// bl 0x822cff58
	sub_822CFF58(ctx, base);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r9,r10,16576
	ctx.r9.s64 = ctx.r10.s64 + 16576;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r4,r31,64
	ctx.r4.s64 = r31.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822cffd0
	sub_822CFFD0(ctx, base);
loc_82487230:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82487244"))) PPC_WEAK_FUNC(sub_82487244);
PPC_FUNC_IMPL(__imp__sub_82487244) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487248"))) PPC_WEAK_FUNC(sub_82487248);
PPC_FUNC_IMPL(__imp__sub_82487248) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
}

__attribute__((alias("__imp__sub_8248724C"))) PPC_WEAK_FUNC(sub_8248724C);
PPC_FUNC_IMPL(__imp__sub_8248724C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x82487250
	goto loc_82487250;
loc_82487250:
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82486de0
	sub_82486DE0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82487288
	if (cr6.eq) goto loc_82487288;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82487288:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487250"))) PPC_WEAK_FUNC(sub_82487250);
PPC_FUNC_IMPL(__imp__sub_82487250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82486de0
	sub_82486DE0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82487288
	if (cr6.eq) goto loc_82487288;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82487288:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824872A0"))) PPC_WEAK_FUNC(sub_824872A0);
PPC_FUNC_IMPL(__imp__sub_824872A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824872A4"))) PPC_WEAK_FUNC(sub_824872A4);
PPC_FUNC_IMPL(__imp__sub_824872A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824872A8"))) PPC_WEAK_FUNC(sub_824872A8);
PPC_FUNC_IMPL(__imp__sub_824872A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824872AC"))) PPC_WEAK_FUNC(sub_824872AC);
PPC_FUNC_IMPL(__imp__sub_824872AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824872B0"))) PPC_WEAK_FUNC(sub_824872B0);
PPC_FUNC_IMPL(__imp__sub_824872B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r3,288(r9)
	PPC_STORE_U32(ctx.r9.u32 + 288, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r7,68(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r3,r11,292
	ctx.r3.s64 = r11.s64 + 292;
	// stw r6,296(r11)
	PPC_STORE_U32(r11.u32 + 296, ctx.r6.u32);
	// bl 0x82418040
	sub_82418040(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248731C"))) PPC_WEAK_FUNC(sub_8248731C);
PPC_FUNC_IMPL(__imp__sub_8248731C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487320"))) PPC_WEAK_FUNC(sub_82487320);
PPC_FUNC_IMPL(__imp__sub_82487320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r4,r11,156
	ctx.r4.s64 = r11.s64 + 156;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// bl 0x826ecb08
	sub_826ECB08(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// lwz r3,-14368(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82487368
	if (cr6.eq) goto loc_82487368;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8248736c
	if (!cr6.eq) goto loc_8248736C;
loc_82487368:
	// li r11,0
	r11.s64 = 0;
loc_8248736C:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r31,12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20204(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20204);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,44
	ctx.r4.s64 = r28.s64 + 44;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824873c0
	if (!cr6.eq) goto loc_824873C0;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824873c0
	if (!cr6.eq) goto loc_824873C0;
	// lwz r11,20204(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20204);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824873C0:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20200(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20200);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,72
	ctx.r4.s64 = r28.s64 + 72;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82487410
	if (!cr6.eq) goto loc_82487410;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82487410
	if (!cr6.eq) goto loc_82487410;
	// lwz r11,20200(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20200);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82487410:
	// lwz r3,40(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// bl 0x82485d98
	sub_82485D98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8248741C"))) PPC_WEAK_FUNC(sub_8248741C);
PPC_FUNC_IMPL(__imp__sub_8248741C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82487420"))) PPC_WEAK_FUNC(sub_82487420);
PPC_FUNC_IMPL(__imp__sub_82487420) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,21536
	ctx.r3.s64 = r11.s64 + 21536;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x82487484
	if (!cr6.eq) goto loc_82487484;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f2,3640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3640);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-13388(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13388);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826cc0f0
	sub_826CC0F0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82487928
	sub_82487928(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82487998
	sub_82487998(ctx, base);
loc_82487484:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248749C"))) PPC_WEAK_FUNC(sub_8248749C);
PPC_FUNC_IMPL(__imp__sub_8248749C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824874A0"))) PPC_WEAK_FUNC(sub_824874A0);
PPC_FUNC_IMPL(__imp__sub_824874A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824874d0
	if (cr6.eq) goto loc_824874D0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824874d4
	if (!cr6.eq) goto loc_824874D4;
loc_824874D0:
	// li r11,0
	r11.s64 = 0;
loc_824874D4:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r28,r10,-3784
	r28.s64 = ctx.r10.s64 + -3784;
	// lis r11,-32184
	r11.s64 = -2109210624;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r9,11476
	ctx.r3.s64 = ctx.r9.s64 + 11476;
	// addi r30,r11,29352
	r30.s64 = r11.s64 + 29352;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,20204(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20204);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,44
	ctx.r4.s64 = r31.s64 + 44;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// lis r11,-32184
	r11.s64 = -2109210624;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r7,11524
	ctx.r3.s64 = ctx.r7.s64 + 11524;
	// addi r30,r11,29728
	r30.s64 = r11.s64 + 29728;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20200(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20200);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,72
	ctx.r4.s64 = r31.s64 + 72;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r3,16(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r4,-31970
	ctx.r4.s64 = -2095185920;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r3,-14120(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + -14120);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824875a8
	if (cr6.eq) goto loc_824875A8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824875ac
	if (!cr6.eq) goto loc_824875AC;
loc_824875A8:
	// li r11,0
	r11.s64 = 0;
loc_824875AC:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x826ef7c0
	sub_826EF7C0(ctx, base);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-12196
	ctx.r9.s64 = ctx.r10.s64 + -12196;
	// li r10,103
	ctx.r10.s64 = 103;
	// stw r3,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r3.u32);
loc_824875DC:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x824875dc
	if (!cr6.eq) goto loc_824875DC;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r4,r9,-25704
	ctx.r4.s64 = ctx.r9.s64 + -25704;
	// stw r11,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, r11.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r30,8(r7)
	r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x826ed730
	sub_826ED730(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ecf18
	sub_826ECF18(ctx, base);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r3,156(r6)
	PPC_STORE_U32(ctx.r6.u32 + 156, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82487634"))) PPC_WEAK_FUNC(sub_82487634);
PPC_FUNC_IMPL(__imp__sub_82487634) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82487638"))) PPC_WEAK_FUNC(sub_82487638);
PPC_FUNC_IMPL(__imp__sub_82487638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r29,0
	r29.s64 = 0;
	// addi r8,r11,-12424
	ctx.r8.s64 = r11.s64 + -12424;
	// addi r7,r10,-12164
	ctx.r7.s64 = ctx.r10.s64 + -12164;
	// stw r29,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r29.u32);
	// addi r6,r9,-12180
	ctx.r6.s64 = ctx.r9.s64 + -12180;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r29.u32);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r6.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r30,r31,100
	r30.s64 = r31.s64 + 100;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r29,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r29.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_824876BC"))) PPC_WEAK_FUNC(sub_824876BC);
PPC_FUNC_IMPL(__imp__sub_824876BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824876C0"))) PPC_WEAK_FUNC(sub_824876C0);
PPC_FUNC_IMPL(__imp__sub_824876C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-12164
	ctx.r9.s64 = r11.s64 + -12164;
	// addi r8,r10,-12180
	ctx.r8.s64 = ctx.r10.s64 + -12180;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r30,r3,100
	r30.s64 = ctx.r3.s64 + 100;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r7,-12240
	ctx.r5.s64 = ctx.r7.s64 + -12240;
	// addi r4,r6,3368
	ctx.r4.s64 = ctx.r6.s64 + 3368;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82487758"))) PPC_WEAK_FUNC(sub_82487758);
PPC_FUNC_IMPL(__imp__sub_82487758) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248775C"))) PPC_WEAK_FUNC(sub_8248775C);
PPC_FUNC_IMPL(__imp__sub_8248775C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82487760"))) PPC_WEAK_FUNC(sub_82487760);
PPC_FUNC_IMPL(__imp__sub_82487760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82485650
	sub_82485650(ctx, base);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,100(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 100);
	// addi r31,r29,100
	r31.s64 = r29.s64 + 100;
	// lwz r9,220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// lwz r30,28(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x824877a8
	if (cr6.eq) goto loc_824877A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82486598
	sub_82486598(ctx, base);
loc_824877A8:
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r4,r10,-25700
	ctx.r4.s64 = ctx.r10.s64 + -25700;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r31,8(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826ed730
	sub_826ED730(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ecf80
	sub_826ECF80(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_824877D8"))) PPC_WEAK_FUNC(sub_824877D8);
PPC_FUNC_IMPL(__imp__sub_824877D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824877DC"))) PPC_WEAK_FUNC(sub_824877DC);
PPC_FUNC_IMPL(__imp__sub_824877DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824877E0"))) PPC_WEAK_FUNC(sub_824877E0);
PPC_FUNC_IMPL(__imp__sub_824877E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	r31.s64 = ctx.r3.s64 + 100;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82487818
	if (cr6.eq) goto loc_82487818;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82486598
	sub_82486598(ctx, base);
loc_82487818:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82487828"))) PPC_WEAK_FUNC(sub_82487828);
PPC_FUNC_IMPL(__imp__sub_82487828) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248782C"))) PPC_WEAK_FUNC(sub_8248782C);
PPC_FUNC_IMPL(__imp__sub_8248782C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82487830"))) PPC_WEAK_FUNC(sub_82487830);
PPC_FUNC_IMPL(__imp__sub_82487830) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8f08
	sub_826E8F08(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x82485660
	sub_82485660(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82487868"))) PPC_WEAK_FUNC(sub_82487868);
PPC_FUNC_IMPL(__imp__sub_82487868) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248786C"))) PPC_WEAK_FUNC(sub_8248786C);
PPC_FUNC_IMPL(__imp__sub_8248786C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82487870"))) PPC_WEAK_FUNC(sub_82487870);
PPC_FUNC_IMPL(__imp__sub_82487870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-12240
	ctx.r9.s64 = r11.s64 + -12240;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x824878c0
	if (cr6.eq) goto loc_824878C0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824878C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824878D4"))) PPC_WEAK_FUNC(sub_824878D4);
PPC_FUNC_IMPL(__imp__sub_824878D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824878D8"))) PPC_WEAK_FUNC(sub_824878D8);
PPC_FUNC_IMPL(__imp__sub_824878D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82485670
	sub_82485670(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// bl 0x826e8ec0
	sub_826E8EC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82487924"))) PPC_WEAK_FUNC(sub_82487924);
PPC_FUNC_IMPL(__imp__sub_82487924) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487928"))) PPC_WEAK_FUNC(sub_82487928);
PPC_FUNC_IMPL(__imp__sub_82487928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r3,-25708(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -25708);
	// lwz r30,12(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e9060
	sub_826E9060(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x826e97e0
	sub_826E97E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82487994"))) PPC_WEAK_FUNC(sub_82487994);
PPC_FUNC_IMPL(__imp__sub_82487994) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487998"))) PPC_WEAK_FUNC(sub_82487998);
PPC_FUNC_IMPL(__imp__sub_82487998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r3,-25748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -25748);
	// lwz r30,12(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e9060
	sub_826E9060(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x826e97e0
	sub_826E97E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82487A04"))) PPC_WEAK_FUNC(sub_82487A04);
PPC_FUNC_IMPL(__imp__sub_82487A04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487A08"))) PPC_WEAK_FUNC(sub_82487A08);
PPC_FUNC_IMPL(__imp__sub_82487A08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
}

__attribute__((alias("__imp__sub_82487A0C"))) PPC_WEAK_FUNC(sub_82487A0C);
PPC_FUNC_IMPL(__imp__sub_82487A0C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x82487a10
	goto loc_82487A10;
loc_82487A10:
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x824876c0
	sub_824876C0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82487a48
	if (cr6.eq) goto loc_82487A48;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82487A48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487A10"))) PPC_WEAK_FUNC(sub_82487A10);
PPC_FUNC_IMPL(__imp__sub_82487A10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x824876c0
	sub_824876C0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82487a48
	if (cr6.eq) goto loc_82487A48;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82487A48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82487A60"))) PPC_WEAK_FUNC(sub_82487A60);
PPC_FUNC_IMPL(__imp__sub_82487A60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487A64"))) PPC_WEAK_FUNC(sub_82487A64);
PPC_FUNC_IMPL(__imp__sub_82487A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82487A68"))) PPC_WEAK_FUNC(sub_82487A68);
PPC_FUNC_IMPL(__imp__sub_82487A68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487A6C"))) PPC_WEAK_FUNC(sub_82487A6C);
PPC_FUNC_IMPL(__imp__sub_82487A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82487A70"))) PPC_WEAK_FUNC(sub_82487A70);
PPC_FUNC_IMPL(__imp__sub_82487A70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r30,4(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82485618
	sub_82485618(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// bne cr6,0x82487ab8
	if (!cr6.eq) goto loc_82487AB8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// beq cr6,0x82487ab8
	if (cr6.eq) goto loc_82487AB8;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82487ab8
	if (cr6.eq) goto loc_82487AB8;
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
loc_82487AB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82487ABC"))) PPC_WEAK_FUNC(sub_82487ABC);
PPC_FUNC_IMPL(__imp__sub_82487ABC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82487AC0"))) PPC_WEAK_FUNC(sub_82487AC0);
PPC_FUNC_IMPL(__imp__sub_82487AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82485618
	sub_82485618(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// bne cr6,0x82487b08
	if (!cr6.eq) goto loc_82487B08;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,2(r11)
	PPC_STORE_U8(r11.u32 + 2, ctx.r10.u8);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r8,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r8.u32);
loc_82487B08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82487B1C"))) PPC_WEAK_FUNC(sub_82487B1C);
PPC_FUNC_IMPL(__imp__sub_82487B1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487B20"))) PPC_WEAK_FUNC(sub_82487B20);
PPC_FUNC_IMPL(__imp__sub_82487B20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82485618
	sub_82485618(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// bne cr6,0x82487b70
	if (!cr6.eq) goto loc_82487B70;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,3(r11)
	PPC_STORE_U8(r11.u32 + 3, ctx.r10.u8);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lfs f13,92(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f12,92(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 92, temp.u32);
loc_82487B70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82487B84"))) PPC_WEAK_FUNC(sub_82487B84);
PPC_FUNC_IMPL(__imp__sub_82487B84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487B88"))) PPC_WEAK_FUNC(sub_82487B88);
PPC_FUNC_IMPL(__imp__sub_82487B88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r31,8(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82485618
	sub_82485618(ctx, base);
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, r31.s32, xer);
	// beq cr6,0x82487bb8
	if (cr6.eq) goto loc_82487BB8;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x82487bd8
	if (!cr6.eq) goto loc_82487BD8;
loc_82487BB8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82487bd8
	if (!cr6.eq) goto loc_82487BD8;
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// bl 0x82485648
	sub_82485648(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r11,-12112
	ctx.r4.s64 = r11.s64 + -12112;
	// bl 0x824844d0
	sub_824844D0(ctx, base);
loc_82487BD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82487BDC"))) PPC_WEAK_FUNC(sub_82487BDC);
PPC_FUNC_IMPL(__imp__sub_82487BDC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82487BE0"))) PPC_WEAK_FUNC(sub_82487BE0);
PPC_FUNC_IMPL(__imp__sub_82487BE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82485618
	sub_82485618(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// bne cr6,0x82487c5c
	if (!cr6.eq) goto loc_82487C5C;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x82485638
	sub_82485638(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82487c30
	if (cr6.eq) goto loc_82487C30;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x82485638
	sub_82485638(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82487c5c
	if (!cr6.eq) goto loc_82487C5C;
loc_82487C30:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82487c50
	if (cr6.lt) goto loc_82487C50;
	// bne cr6,0x82487c5c
	if (!cr6.eq) goto loc_82487C5C;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,17(r11)
	PPC_STORE_U8(r11.u32 + 17, ctx.r10.u8);
	// b 0x82487c5c
	goto loc_82487C5C;
loc_82487C50:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,18(r11)
	PPC_STORE_U8(r11.u32 + 18, ctx.r10.u8);
loc_82487C5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82487C70"))) PPC_WEAK_FUNC(sub_82487C70);
PPC_FUNC_IMPL(__imp__sub_82487C70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487C74"))) PPC_WEAK_FUNC(sub_82487C74);
PPC_FUNC_IMPL(__imp__sub_82487C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82487C78"))) PPC_WEAK_FUNC(sub_82487C78);
PPC_FUNC_IMPL(__imp__sub_82487C78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82485618
	sub_82485618(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// bne cr6,0x82487cb4
	if (!cr6.eq) goto loc_82487CB4;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,19(r11)
	PPC_STORE_U8(r11.u32 + 19, ctx.r10.u8);
loc_82487CB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82487CC8"))) PPC_WEAK_FUNC(sub_82487CC8);
PPC_FUNC_IMPL(__imp__sub_82487CC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487CCC"))) PPC_WEAK_FUNC(sub_82487CCC);
PPC_FUNC_IMPL(__imp__sub_82487CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82487CD0"))) PPC_WEAK_FUNC(sub_82487CD0);
PPC_FUNC_IMPL(__imp__sub_82487CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,612(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 612);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r3,288(r9)
	PPC_STORE_U32(ctx.r9.u32 + 288, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,612(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 612);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r7,68(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r3,r11,292
	ctx.r3.s64 = r11.s64 + 292;
	// stw r6,296(r11)
	PPC_STORE_U32(r11.u32 + 296, ctx.r6.u32);
	// bl 0x82418040
	sub_82418040(ctx, base);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r4,28(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// lbz r3,7(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82487e00
	if (!cr6.eq) goto loc_82487E00;
	// lwz r3,612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 612);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825ca170
	sub_825CA170(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82487e00
	if (cr6.eq) goto loc_82487E00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ca170
	sub_825CA170(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,18084
	ctx.r4.s64 = ctx.r9.s64 + 18084;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82487e00
	if (cr6.eq) goto loc_82487E00;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r30,r11,-30968
	r30.s64 = r11.s64 + -30968;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x826e9c50
	sub_826E9C50(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82487e00
	if (cr6.eq) goto loc_82487E00;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x826e9ec8
	sub_826E9EC8(ctx, base);
loc_82487E00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82487E04"))) PPC_WEAK_FUNC(sub_82487E04);
PPC_FUNC_IMPL(__imp__sub_82487E04) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82487E08"))) PPC_WEAK_FUNC(sub_82487E08);
PPC_FUNC_IMPL(__imp__sub_82487E08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82485618
	sub_82485618(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// bne cr6,0x82487e54
	if (!cr6.eq) goto loc_82487E54;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,140(r11)
	PPC_STORE_U32(r11.u32 + 140, ctx.r3.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stb r10,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r10.u8);
loc_82487E54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82487E68"))) PPC_WEAK_FUNC(sub_82487E68);
PPC_FUNC_IMPL(__imp__sub_82487E68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487E6C"))) PPC_WEAK_FUNC(sub_82487E6C);
PPC_FUNC_IMPL(__imp__sub_82487E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82487E70"))) PPC_WEAK_FUNC(sub_82487E70);
PPC_FUNC_IMPL(__imp__sub_82487E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,704(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82487ee4
	if (cr6.eq) goto loc_82487EE4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r8,252(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82487ee4
	if (!cr6.eq) goto loc_82487EE4;
	// bl 0x826e8500
	sub_826E8500(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x82487ee0
	if (!cr6.eq) goto loc_82487EE0;
	// stb r10,6(r11)
	PPC_STORE_U8(r11.u32 + 6, ctx.r10.u8);
	// b 0x82487ee4
	goto loc_82487EE4;
loc_82487EE0:
	// stb r10,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r10.u8);
loc_82487EE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82487EF8"))) PPC_WEAK_FUNC(sub_82487EF8);
PPC_FUNC_IMPL(__imp__sub_82487EF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487EFC"))) PPC_WEAK_FUNC(sub_82487EFC);
PPC_FUNC_IMPL(__imp__sub_82487EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82487F00"))) PPC_WEAK_FUNC(sub_82487F00);
PPC_FUNC_IMPL(__imp__sub_82487F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,980(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 980);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
	// beq cr6,0x8248815c
	if (cr6.eq) goto loc_8248815C;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82700538
	sub_82700538(ctx, base);
	// lwz r3,796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 796);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r9,796(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 796);
	// stfs f0,176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stfs f11,188(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f10,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stfs f10,208(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,212(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,216(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,220(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lwz r11,32(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8248815c
	if (cr6.eq) goto loc_8248815C;
	// mr r27,r11
	r27.u64 = r11.u64;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r29,0
	r29.s64 = 0;
	// addi r28,r11,18232
	r28.s64 = r11.s64 + 18232;
loc_82487FBC:
	// lwz r3,980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 980);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r30,r9,r29
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x82488150
	if (!cr6.eq) goto loc_82488150;
	// lwz r3,980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 980);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82488150
	if (cr6.eq) goto loc_82488150;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lwzx r26,r10,r29
	r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// bl 0x82700538
	sub_82700538(ctx, base);
	// lwz r3,888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 888);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,136(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 136);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 520);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,24(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f0,f10
	ctx.f8.f64 = double(float(f0.f64 * ctx.f10.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f12,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f3,f11,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f3,124(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f2,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f1,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lfs f0,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f2
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f12,f1
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// lfs f8,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 + f0.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f7,120(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f8,124(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x822b40c8
	sub_822B40C8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f6,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,144(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f5,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,148(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f4,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,152(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f3,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,156(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82488150:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x82487fbc
	if (!cr0.eq) goto loc_82487FBC;
loc_8248815C:
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_82488168"))) PPC_WEAK_FUNC(sub_82488168);
PPC_FUNC_IMPL(__imp__sub_82488168) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8248816C"))) PPC_WEAK_FUNC(sub_8248816C);
PPC_FUNC_IMPL(__imp__sub_8248816C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82488170"))) PPC_WEAK_FUNC(sub_82488170);
PPC_FUNC_IMPL(__imp__sub_82488170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x828eaaf8
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82485618
	sub_82485618(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x824881bc
	if (cr6.eq) goto loc_824881BC;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x82485618
	sub_82485618(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// bne cr6,0x824882c4
	if (!cr6.eq) goto loc_824882C4;
loc_824881BC:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lfs f13,96(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f12,96(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 96, temp.u32);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lfs f29,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f29.f64 = double(temp.f32);
	// lfs f28,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	f28.f64 = double(temp.f32);
	// lfs f31,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f31.f64 = double(temp.f32);
	// lfs f30,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	f30.f64 = double(temp.f32);
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f29,88(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f28,92(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82485618
	sub_82485618(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r9,r3
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, xer);
	// bne cr6,0x82488230
	if (!cr6.eq) goto loc_82488230;
	// fneg f0,f31
	ctx.fpscr.disableFlushMode();
	f0.u64 = f31.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fneg f13,f30
	ctx.f13.u64 = f30.u64 ^ 0x8000000000000000;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fneg f12,f29
	ctx.f12.u64 = f29.u64 ^ 0x8000000000000000;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fneg f11,f28
	ctx.f11.u64 = f28.u64 ^ 0x8000000000000000;
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_82488230:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,-25600
	ctx.r5.s64 = ctx.r10.s64 + -25600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,-12116(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,192
	ctx.r10.s64 = r11.s64 + 192;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,200(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * f0.f64));
	// lfs f9,192(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 192);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f7,196(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 196);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,212(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 212);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmr f2,f9
	ctx.f2.f64 = ctx.f9.f64;
	// lfs f1,216(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 216);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f3,f7,f13
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f31,208(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 208);
	f31.f64 = double(temp.f32);
	// fmr f4,f7
	ctx.f4.f64 = ctx.f7.f64;
	// fmr f4,f11
	ctx.f4.f64 = ctx.f11.f64;
	// fmsubs f10,f9,f12,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f10.f64));
	// fmsubs f9,f7,f0,f8
	ctx.f9.f64 = double(float(ctx.f7.f64 * f0.f64 - ctx.f8.f64));
	// fmsubs f8,f11,f13,f5
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 - ctx.f5.f64));
	// fmadds f7,f11,f12,f3
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fmuls f6,f6,f10
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmadds f2,f0,f2,f7
	ctx.f2.f64 = double(float(f0.f64 * ctx.f2.f64 + ctx.f7.f64));
	// fmadds f5,f1,f9,f6
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f1,f31,f8,f5
	ctx.f1.f64 = double(float(f31.f64 * ctx.f8.f64 + ctx.f5.f64));
	// bl 0x828ea7c8
	sub_828EA7C8(ctx, base);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// stfs f4,100(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 100, temp.u32);
loc_824882C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x828eab44
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824882E0"))) PPC_WEAK_FUNC(sub_824882E0);
PPC_FUNC_IMPL(__imp__sub_824882E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824882E4"))) PPC_WEAK_FUNC(sub_824882E4);
PPC_FUNC_IMPL(__imp__sub_824882E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824882E8"))) PPC_WEAK_FUNC(sub_824882E8);
PPC_FUNC_IMPL(__imp__sub_824882E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r4,r11,156
	ctx.r4.s64 = r11.s64 + 156;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// bl 0x826ecb08
	sub_826ECB08(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// lwz r3,-14368(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82488330
	if (cr6.eq) goto loc_82488330;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82488334
	if (!cr6.eq) goto loc_82488334;
loc_82488330:
	// li r11,0
	r11.s64 = 0;
loc_82488334:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r31,12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,18204(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 18204);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r29,124
	ctx.r4.s64 = r29.s64 + 124;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82488388
	if (!cr6.eq) goto loc_82488388;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82488388
	if (!cr6.eq) goto loc_82488388;
	// lwz r11,18204(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 18204);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82488388:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,18200(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 18200);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r29,152
	ctx.r4.s64 = r29.s64 + 152;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824883d8
	if (!cr6.eq) goto loc_824883D8;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824883d8
	if (!cr6.eq) goto loc_824883D8;
	// lwz r11,18200(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 18200);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824883D8:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,18168(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 18168);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r29,180
	ctx.r4.s64 = r29.s64 + 180;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82488428
	if (!cr6.eq) goto loc_82488428;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82488428
	if (!cr6.eq) goto loc_82488428;
	// lwz r11,18168(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 18168);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82488428:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,19148(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19148);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r29,208
	ctx.r4.s64 = r29.s64 + 208;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82488478
	if (!cr6.eq) goto loc_82488478;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82488478
	if (!cr6.eq) goto loc_82488478;
	// lwz r11,19148(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19148);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82488478:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,19160(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19160);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r29,236
	ctx.r4.s64 = r29.s64 + 236;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824884c8
	if (!cr6.eq) goto loc_824884C8;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824884c8
	if (!cr6.eq) goto loc_824884C8;
	// lwz r11,19160(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19160);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824884C8:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,19152(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19152);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r29,264
	ctx.r4.s64 = r29.s64 + 264;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82488518
	if (!cr6.eq) goto loc_82488518;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82488518
	if (!cr6.eq) goto loc_82488518;
	// lwz r11,19152(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19152);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82488518:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20212(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20212);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r29,432
	ctx.r4.s64 = r29.s64 + 432;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82488568
	if (!cr6.eq) goto loc_82488568;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82488568
	if (!cr6.eq) goto loc_82488568;
	// lwz r11,20212(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20212);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82488568:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20204(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20204);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r29,348
	ctx.r4.s64 = r29.s64 + 348;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824885b8
	if (!cr6.eq) goto loc_824885B8;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824885b8
	if (!cr6.eq) goto loc_824885B8;
	// lwz r11,20204(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20204);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824885B8:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20200(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20200);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r29,376
	ctx.r4.s64 = r29.s64 + 376;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82488608
	if (!cr6.eq) goto loc_82488608;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82488608
	if (!cr6.eq) goto loc_82488608;
	// lwz r11,20200(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20200);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82488608:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,17692(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 17692);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r29,404
	ctx.r4.s64 = r29.s64 + 404;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82488658
	if (!cr6.eq) goto loc_82488658;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82488658
	if (!cr6.eq) goto loc_82488658;
	// lwz r11,17692(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 17692);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82488658:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,19804(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19804);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r29,460
	ctx.r4.s64 = r29.s64 + 460;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824886a8
	if (!cr6.eq) goto loc_824886A8;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824886a8
	if (!cr6.eq) goto loc_824886A8;
	// lwz r11,19804(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19804);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824886A8:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,19828(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19828);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r29,488
	ctx.r4.s64 = r29.s64 + 488;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824886f8
	if (!cr6.eq) goto loc_824886F8;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824886f8
	if (!cr6.eq) goto loc_824886F8;
	// lwz r11,19828(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19828);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824886F8:
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// bl 0x82485d98
	sub_82485D98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82488704"))) PPC_WEAK_FUNC(sub_82488704);
PPC_FUNC_IMPL(__imp__sub_82488704) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82488708"))) PPC_WEAK_FUNC(sub_82488708);
PPC_FUNC_IMPL(__imp__sub_82488708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,21536
	ctx.r3.s64 = r11.s64 + 21536;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x8248874c
	if (!cr6.eq) goto loc_8248874C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82489338
	sub_82489338(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82489398
	sub_82489398(ctx, base);
loc_8248874C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82488760"))) PPC_WEAK_FUNC(sub_82488760);
PPC_FUNC_IMPL(__imp__sub_82488760) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82488764"))) PPC_WEAK_FUNC(sub_82488764);
PPC_FUNC_IMPL(__imp__sub_82488764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82488768"))) PPC_WEAK_FUNC(sub_82488768);
PPC_FUNC_IMPL(__imp__sub_82488768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824887a0
	if (cr6.eq) goto loc_824887A0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824887a4
	if (!cr6.eq) goto loc_824887A4;
loc_824887A0:
	// li r11,0
	r11.s64 = 0;
loc_824887A4:
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824887c0
	if (cr6.eq) goto loc_824887C0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x822bd9b0
	sub_822BD9B0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// subfe r31,r11,r3
	temp.u8 = (~r11.u32 + ctx.r3.u32 < ~r11.u32) | (~r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r31.u64 = ~r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
loc_824887C0:
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824887f4
	if (!cr6.eq) goto loc_824887F4;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,21536
	ctx.r3.s64 = r11.s64 + 21536;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x824887f4
	if (!cr6.eq) goto loc_824887F4;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x824893f8
	sub_824893F8(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82489460
	sub_82489460(ctx, base);
loc_824887F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_824887F8"))) PPC_WEAK_FUNC(sub_824887F8);
PPC_FUNC_IMPL(__imp__sub_824887F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824887FC"))) PPC_WEAK_FUNC(sub_824887FC);
PPC_FUNC_IMPL(__imp__sub_824887FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82488800"))) PPC_WEAK_FUNC(sub_82488800);
PPC_FUNC_IMPL(__imp__sub_82488800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,-12424
	ctx.r8.s64 = r11.s64 + -12424;
	// li r30,0
	r30.s64 = 0;
	// addi r7,r10,-12076
	ctx.r7.s64 = ctx.r10.s64 + -12076;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// addi r6,r9,-12092
	ctx.r6.s64 = ctx.r9.s64 + -12092;
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r6,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r6.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// lfs f31,6664(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6664);
	f31.f64 = double(temp.f32);
	// lfs f30,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f30.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x826c8ff8
	sub_826C8FF8(ctx, base);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x826c8ff8
	sub_826C8FF8(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,180
	ctx.r3.s64 = r31.s64 + 180;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,236
	ctx.r3.s64 = r31.s64 + 236;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,264
	ctx.r3.s64 = r31.s64 + 264;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,292
	ctx.r3.s64 = r31.s64 + 292;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,320
	ctx.r3.s64 = r31.s64 + 320;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,348
	ctx.r3.s64 = r31.s64 + 348;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = r31.s64 + 376;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,404
	ctx.r3.s64 = r31.s64 + 404;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,432
	ctx.r3.s64 = r31.s64 + 432;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,460
	ctx.r3.s64 = r31.s64 + 460;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,488
	ctx.r3.s64 = r31.s64 + 488;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r29,r31,516
	r29.s64 = r31.s64 + 516;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,520(r31)
	PPC_STORE_U32(r31.u32 + 520, r30.u32);
	// stw r30,516(r31)
	PPC_STORE_U32(r31.u32 + 516, r30.u32);
	// addi r29,r31,608
	r29.s64 = r31.s64 + 608;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,612(r31)
	PPC_STORE_U32(r31.u32 + 612, r30.u32);
	// stw r30,608(r31)
	PPC_STORE_U32(r31.u32 + 608, r30.u32);
	// addi r29,r31,700
	r29.s64 = r31.s64 + 700;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,704(r31)
	PPC_STORE_U32(r31.u32 + 704, r30.u32);
	// stw r30,700(r31)
	PPC_STORE_U32(r31.u32 + 700, r30.u32);
	// addi r29,r31,792
	r29.s64 = r31.s64 + 792;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,796(r31)
	PPC_STORE_U32(r31.u32 + 796, r30.u32);
	// stw r30,792(r31)
	PPC_STORE_U32(r31.u32 + 792, r30.u32);
	// addi r29,r31,884
	r29.s64 = r31.s64 + 884;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,888(r31)
	PPC_STORE_U32(r31.u32 + 888, r30.u32);
	// stw r30,884(r31)
	PPC_STORE_U32(r31.u32 + 884, r30.u32);
	// addi r29,r31,976
	r29.s64 = r31.s64 + 976;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,980(r31)
	PPC_STORE_U32(r31.u32 + 980, r30.u32);
	// stw r30,976(r31)
	PPC_STORE_U32(r31.u32 + 976, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_824889E0"))) PPC_WEAK_FUNC(sub_824889E0);
PPC_FUNC_IMPL(__imp__sub_824889E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824889E4"))) PPC_WEAK_FUNC(sub_824889E4);
PPC_FUNC_IMPL(__imp__sub_824889E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824889E8"))) PPC_WEAK_FUNC(sub_824889E8);
PPC_FUNC_IMPL(__imp__sub_824889E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-12076
	ctx.r9.s64 = r11.s64 + -12076;
	// addi r8,r10,-12092
	ctx.r8.s64 = ctx.r10.s64 + -12092;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r30,r3,976
	r30.s64 = ctx.r3.s64 + 976;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,884
	r30.s64 = r31.s64 + 884;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,792
	r30.s64 = r31.s64 + 792;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,700
	r30.s64 = r31.s64 + 700;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,608
	r30.s64 = r31.s64 + 608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,516
	r30.s64 = r31.s64 + 516;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,488
	ctx.r3.s64 = r31.s64 + 488;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,460
	ctx.r3.s64 = r31.s64 + 460;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,432
	ctx.r3.s64 = r31.s64 + 432;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,404
	ctx.r3.s64 = r31.s64 + 404;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = r31.s64 + 376;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,348
	ctx.r3.s64 = r31.s64 + 348;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,320
	ctx.r3.s64 = r31.s64 + 320;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,292
	ctx.r3.s64 = r31.s64 + 292;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,264
	ctx.r3.s64 = r31.s64 + 264;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,236
	ctx.r3.s64 = r31.s64 + 236;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,180
	ctx.r3.s64 = r31.s64 + 180;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x826c8ec8
	sub_826C8EC8(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x826c8ec8
	sub_826C8EC8(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r7,-12240
	ctx.r5.s64 = ctx.r7.s64 + -12240;
	// addi r4,r6,3368
	ctx.r4.s64 = ctx.r6.s64 + 3368;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82488BA4"))) PPC_WEAK_FUNC(sub_82488BA4);
PPC_FUNC_IMPL(__imp__sub_82488BA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82488BA8"))) PPC_WEAK_FUNC(sub_82488BA8);
PPC_FUNC_IMPL(__imp__sub_82488BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82488bd8
	if (cr6.eq) goto loc_82488BD8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82488bdc
	if (!cr6.eq) goto loc_82488BDC;
loc_82488BD8:
	// li r11,0
	r11.s64 = 0;
loc_82488BDC:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r28,r10,-3784
	r28.s64 = ctx.r10.s64 + -3784;
	// lis r11,-32184
	r11.s64 = -2109210624;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r9,-8656
	ctx.r3.s64 = ctx.r9.s64 + -8656;
	// addi r30,r11,31336
	r30.s64 = r11.s64 + 31336;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,18204(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18204);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,124
	ctx.r4.s64 = r31.s64 + 124;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// lis r11,-32184
	r11.s64 = -2109210624;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r7,-8612
	ctx.r3.s64 = ctx.r7.s64 + -8612;
	// addi r30,r11,32264
	r30.s64 = r11.s64 + 32264;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,18200(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 18200);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,152
	ctx.r4.s64 = r31.s64 + 152;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r5,-31970
	ctx.r5.s64 = -2095185920;
	// lis r11,-32184
	r11.s64 = -2109210624;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r5,-8240
	ctx.r3.s64 = ctx.r5.s64 + -8240;
	// addi r30,r11,31344
	r30.s64 = r11.s64 + 31344;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,18168(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18168);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,180
	ctx.r4.s64 = r31.s64 + 180;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r11,-32184
	r11.s64 = -2109210624;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r10,5052
	ctx.r3.s64 = ctx.r10.s64 + 5052;
	// addi r30,r11,31424
	r30.s64 = r11.s64 + 31424;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19148(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19148);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// lis r11,-32184
	r11.s64 = -2109210624;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r8,4896
	ctx.r3.s64 = ctx.r8.s64 + 4896;
	// addi r30,r11,31520
	r30.s64 = r11.s64 + 31520;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,19160(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19160);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,236
	ctx.r4.s64 = r31.s64 + 236;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r6,-31970
	ctx.r6.s64 = -2095185920;
	// lis r11,-32183
	r11.s64 = -2109145088;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r6,5000
	ctx.r3.s64 = ctx.r6.s64 + 5000;
	// addi r30,r11,-32400
	r30.s64 = r11.s64 + -32400;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,19152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19152);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,264
	ctx.r4.s64 = r31.s64 + 264;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r11,-32184
	r11.s64 = -2109210624;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r10,11380
	ctx.r3.s64 = ctx.r10.s64 + 11380;
	// addi r30,r11,31624
	r30.s64 = r11.s64 + 31624;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,20212(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20212);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,432
	ctx.r4.s64 = r31.s64 + 432;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// lis r11,-32183
	r11.s64 = -2109145088;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r8,11476
	ctx.r3.s64 = ctx.r8.s64 + 11476;
	// addi r30,r11,-30872
	r30.s64 = r11.s64 + -30872;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20204(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20204);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,348
	ctx.r4.s64 = r31.s64 + 348;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r6,-31970
	ctx.r6.s64 = -2095185920;
	// lis r11,-32183
	r11.s64 = -2109145088;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r6,11524
	ctx.r3.s64 = ctx.r6.s64 + 11524;
	// addi r30,r11,-30968
	r30.s64 = r11.s64 + -30968;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r11,20200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20200);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,376
	ctx.r4.s64 = r31.s64 + 376;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r11,-32184
	r11.s64 = -2109210624;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r10,-13996
	ctx.r3.s64 = ctx.r10.s64 + -13996;
	// addi r30,r11,32368
	r30.s64 = r11.s64 + 32368;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,17692(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17692);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,404
	ctx.r4.s64 = r31.s64 + 404;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// lis r11,-32184
	r11.s64 = -2109210624;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r8,-3120
	ctx.r3.s64 = ctx.r8.s64 + -3120;
	// addi r30,r11,31712
	r30.s64 = r11.s64 + 31712;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,19804(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19804);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,460
	ctx.r4.s64 = r31.s64 + 460;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r6,-31970
	ctx.r6.s64 = -2095185920;
	// lis r11,-32184
	r11.s64 = -2109210624;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r6,-3360
	ctx.r3.s64 = ctx.r6.s64 + -3360;
	// addi r30,r11,31864
	r30.s64 = r11.s64 + 31864;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19828(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19828);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,488
	ctx.r4.s64 = r31.s64 + 488;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r9,5381
	ctx.r9.s64 = 5381;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r8
	r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82488fb0
	if (cr6.eq) goto loc_82488FB0;
loc_82488F94:
	// rlwinm r7,r9,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// extsb r11,r8
	r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82488f94
	if (!cr6.eq) goto loc_82488F94;
loc_82488FB0:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r4,r10,-25704
	ctx.r4.s64 = ctx.r10.s64 + -25704;
	// stw r9,148(r11)
	PPC_STORE_U32(r11.u32 + 148, ctx.r9.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r30,8(r8)
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x826ed730
	sub_826ED730(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ecf18
	sub_826ECF18(ctx, base);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r3,156(r7)
	PPC_STORE_U32(ctx.r7.u32 + 156, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82488FEC"))) PPC_WEAK_FUNC(sub_82488FEC);
PPC_FUNC_IMPL(__imp__sub_82488FEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82488FF0"))) PPC_WEAK_FUNC(sub_82488FF0);
PPC_FUNC_IMPL(__imp__sub_82488FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82485650
	sub_82485650(ctx, base);
	// lwz r30,40(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,516(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 516);
	// addi r29,r31,516
	r29.s64 = r31.s64 + 516;
	// lwz r28,28(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x82489034
	if (cr6.eq) goto loc_82489034;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824894c8
	sub_824894C8(ctx, base);
loc_82489034:
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// addi r29,r31,608
	r29.s64 = r31.s64 + 608;
	// lwz r10,608(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// lwz r28,28(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// beq cr6,0x82489060
	if (cr6.eq) goto loc_82489060;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82486598
	sub_82486598(ctx, base);
loc_82489060:
	// lwz r28,28(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r29,r31,792
	r29.s64 = r31.s64 + 792;
	// lwz r11,792(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 792);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x82489088
	if (cr6.eq) goto loc_82489088;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d0048
	sub_822D0048(ctx, base);
loc_82489088:
	// lwz r28,28(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r29,r31,884
	r29.s64 = r31.s64 + 884;
	// lwz r11,884(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 884);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x824890b0
	if (cr6.eq) goto loc_824890B0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d0120
	sub_822D0120(ctx, base);
loc_824890B0:
	// lwz r30,28(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r29,r31,976
	r29.s64 = r31.s64 + 976;
	// lwz r11,976(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 976);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x824890d8
	if (cr6.eq) goto loc_824890D8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824895a0
	sub_824895A0(ctx, base);
loc_824890D8:
	// lwz r3,612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 612);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8248910c
	if (cr6.eq) goto loc_8248910C;
	// bl 0x825ca0c8
	sub_825CA0C8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82489110
	if (cr6.eq) goto loc_82489110;
loc_8248910C:
	// li r11,0
	r11.s64 = 0;
loc_82489110:
	// clrlwi r28,r11,24
	r28.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(r28.u32, 1, xer);
	// bne cr6,0x8248914c
	if (!cr6.eq) goto loc_8248914C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825ca170
	sub_825CA170(ctx, base);
	// lwz r29,28(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,700(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 700);
	// addi r30,r31,700
	r30.s64 = r31.s64 + 700;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x8248914c
	if (cr6.eq) goto loc_8248914C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8243a490
	sub_8243A490(ctx, base);
loc_8248914C:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r4,r10,-25700
	ctx.r4.s64 = ctx.r10.s64 + -25700;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r31,8(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826ed730
	sub_826ED730(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ecf80
	sub_826ECF80(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8248917C"))) PPC_WEAK_FUNC(sub_8248917C);
PPC_FUNC_IMPL(__imp__sub_8248917C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82489180"))) PPC_WEAK_FUNC(sub_82489180);
PPC_FUNC_IMPL(__imp__sub_82489180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,976(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 976);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r3,976
	r31.s64 = ctx.r3.s64 + 976;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824891b8
	if (cr6.eq) goto loc_824891B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824895a0
	sub_824895A0(ctx, base);
loc_824891B8:
	// lwz r11,884(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 884);
	// addi r31,r30,884
	r31.s64 = r30.s64 + 884;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824891dc
	if (cr6.eq) goto loc_824891DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0120
	sub_822D0120(ctx, base);
loc_824891DC:
	// lwz r11,792(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 792);
	// addi r31,r30,792
	r31.s64 = r30.s64 + 792;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82489200
	if (cr6.eq) goto loc_82489200;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0048
	sub_822D0048(ctx, base);
loc_82489200:
	// lwz r11,700(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 700);
	// addi r31,r30,700
	r31.s64 = r30.s64 + 700;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82489224
	if (cr6.eq) goto loc_82489224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243a490
	sub_8243A490(ctx, base);
loc_82489224:
	// lwz r11,608(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 608);
	// addi r31,r30,608
	r31.s64 = r30.s64 + 608;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82489248
	if (cr6.eq) goto loc_82489248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82486598
	sub_82486598(ctx, base);
loc_82489248:
	// lwz r11,516(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 516);
	// addi r31,r30,516
	r31.s64 = r30.s64 + 516;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8248926c
	if (cr6.eq) goto loc_8248926C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824894c8
	sub_824894C8(ctx, base);
loc_8248926C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82489270"))) PPC_WEAK_FUNC(sub_82489270);
PPC_FUNC_IMPL(__imp__sub_82489270) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82489274"))) PPC_WEAK_FUNC(sub_82489274);
PPC_FUNC_IMPL(__imp__sub_82489274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82489278"))) PPC_WEAK_FUNC(sub_82489278);
PPC_FUNC_IMPL(__imp__sub_82489278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// beq cr6,0x824892c0
	if (cr6.eq) goto loc_824892C0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,20652
	ctx.r4.s64 = ctx.r9.s64 + 20652;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_824892C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824892D0"))) PPC_WEAK_FUNC(sub_824892D0);
PPC_FUNC_IMPL(__imp__sub_824892D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824892D4"))) PPC_WEAK_FUNC(sub_824892D4);
PPC_FUNC_IMPL(__imp__sub_824892D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824892D8"))) PPC_WEAK_FUNC(sub_824892D8);
PPC_FUNC_IMPL(__imp__sub_824892D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// beq cr6,0x82489320
	if (cr6.eq) goto loc_82489320;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,23452
	ctx.r4.s64 = ctx.r9.s64 + 23452;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_82489320:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82489330"))) PPC_WEAK_FUNC(sub_82489330);
PPC_FUNC_IMPL(__imp__sub_82489330) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82489334"))) PPC_WEAK_FUNC(sub_82489334);
PPC_FUNC_IMPL(__imp__sub_82489334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82489338"))) PPC_WEAK_FUNC(sub_82489338);
PPC_FUNC_IMPL(__imp__sub_82489338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-25712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -25712);
	// lwz r30,12(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e9060
	sub_826E9060(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e9450
	sub_826E9450(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82489394"))) PPC_WEAK_FUNC(sub_82489394);
PPC_FUNC_IMPL(__imp__sub_82489394) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82489398"))) PPC_WEAK_FUNC(sub_82489398);
PPC_FUNC_IMPL(__imp__sub_82489398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-25756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -25756);
	// lwz r30,12(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e9060
	sub_826E9060(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e9450
	sub_826E9450(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824893F4"))) PPC_WEAK_FUNC(sub_824893F4);
PPC_FUNC_IMPL(__imp__sub_824893F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824893F8"))) PPC_WEAK_FUNC(sub_824893F8);
PPC_FUNC_IMPL(__imp__sub_824893F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-25712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -25712);
	// lwz r30,12(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e9060
	sub_826E9060(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826e97e0
	sub_826E97E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248945C"))) PPC_WEAK_FUNC(sub_8248945C);
PPC_FUNC_IMPL(__imp__sub_8248945C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82489460"))) PPC_WEAK_FUNC(sub_82489460);
PPC_FUNC_IMPL(__imp__sub_82489460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-25756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -25756);
	// lwz r30,12(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e9060
	sub_826E9060(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826e97e0
	sub_826E97E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824894C4"))) PPC_WEAK_FUNC(sub_824894C4);
PPC_FUNC_IMPL(__imp__sub_824894C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824894C8"))) PPC_WEAK_FUNC(sub_824894C8);
PPC_FUNC_IMPL(__imp__sub_824894C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82489588
	if (cr6.eq) goto loc_82489588;
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,20652
	ctx.r4.s64 = ctx.r8.s64 + 20652;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// lis r7,-32211
	ctx.r7.s64 = -2110980096;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r7,-920
	ctx.r5.s64 = ctx.r7.s64 + -920;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r11,28
	r30.s64 = r11.s64 + 28;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// bl 0x822cfee0
	sub_822CFEE0(ctx, base);
	// lis r4,-32183
	ctx.r4.s64 = -2109145088;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r4,-28040
	r11.s64 = ctx.r4.s64 + -28040;
	// li r6,50
	ctx.r6.s64 = 50;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// bl 0x822cff58
	sub_822CFF58(ctx, base);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r9,r10,16576
	ctx.r9.s64 = ctx.r10.s64 + 16576;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r4,r31,64
	ctx.r4.s64 = r31.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822cffd0
	sub_822CFFD0(ctx, base);
loc_82489588:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248959C"))) PPC_WEAK_FUNC(sub_8248959C);
PPC_FUNC_IMPL(__imp__sub_8248959C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824895A0"))) PPC_WEAK_FUNC(sub_824895A0);
PPC_FUNC_IMPL(__imp__sub_824895A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82489660
	if (cr6.eq) goto loc_82489660;
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,23452
	ctx.r4.s64 = ctx.r8.s64 + 23452;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// lis r7,-32211
	ctx.r7.s64 = -2110980096;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r7,-920
	ctx.r5.s64 = ctx.r7.s64 + -920;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r11,28
	r30.s64 = r11.s64 + 28;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// bl 0x822cfee0
	sub_822CFEE0(ctx, base);
	// lis r4,-32183
	ctx.r4.s64 = -2109145088;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r4,-27944
	r11.s64 = ctx.r4.s64 + -27944;
	// li r6,50
	ctx.r6.s64 = 50;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// bl 0x822cff58
	sub_822CFF58(ctx, base);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r9,r10,16576
	ctx.r9.s64 = ctx.r10.s64 + 16576;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r4,r31,64
	ctx.r4.s64 = r31.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822cffd0
	sub_822CFFD0(ctx, base);
loc_82489660:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82489674"))) PPC_WEAK_FUNC(sub_82489674);
PPC_FUNC_IMPL(__imp__sub_82489674) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82489678"))) PPC_WEAK_FUNC(sub_82489678);
PPC_FUNC_IMPL(__imp__sub_82489678) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
}

__attribute__((alias("__imp__sub_8248967C"))) PPC_WEAK_FUNC(sub_8248967C);
PPC_FUNC_IMPL(__imp__sub_8248967C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x82489680
	goto loc_82489680;
loc_82489680:
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x824889e8
	sub_824889E8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824896b8
	if (cr6.eq) goto loc_824896B8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824896B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82489680"))) PPC_WEAK_FUNC(sub_82489680);
PPC_FUNC_IMPL(__imp__sub_82489680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x824889e8
	sub_824889E8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824896b8
	if (cr6.eq) goto loc_824896B8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824896B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824896D0"))) PPC_WEAK_FUNC(sub_824896D0);
PPC_FUNC_IMPL(__imp__sub_824896D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r31,8(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82485618
	sub_82485618(ctx, base);
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, r31.s32, xer);
	// beq cr6,0x82489700
	if (cr6.eq) goto loc_82489700;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x82489718
	if (!cr6.eq) goto loc_82489718;
loc_82489700:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82489718
	if (!cr6.eq) goto loc_82489718;
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// bl 0x82485648
	sub_82485648(ctx, base);
	// bl 0x82484638
	sub_82484638(ctx, base);
loc_82489718:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8248971C"))) PPC_WEAK_FUNC(sub_8248971C);
PPC_FUNC_IMPL(__imp__sub_8248971C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82489720"))) PPC_WEAK_FUNC(sub_82489720);
PPC_FUNC_IMPL(__imp__sub_82489720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82485618
	sub_82485618(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// bne cr6,0x8248975c
	if (!cr6.eq) goto loc_8248975C;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,20(r11)
	PPC_STORE_U8(r11.u32 + 20, ctx.r10.u8);
loc_8248975C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82489770"))) PPC_WEAK_FUNC(sub_82489770);
PPC_FUNC_IMPL(__imp__sub_82489770) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82489774"))) PPC_WEAK_FUNC(sub_82489774);
PPC_FUNC_IMPL(__imp__sub_82489774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82489778"))) PPC_WEAK_FUNC(sub_82489778);
PPC_FUNC_IMPL(__imp__sub_82489778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,104(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r8,68(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r3,r11,292
	ctx.r3.s64 = r11.s64 + 292;
	// stw r7,296(r11)
	PPC_STORE_U32(r11.u32 + 296, ctx.r7.u32);
	// bl 0x82418040
	sub_82418040(ctx, base);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,160(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 160, temp.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,164(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 164, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stfs f12,168(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 168, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stfs f11,172(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 172, temp.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lfs f10,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stfs f10,176(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 176, temp.u32);
	// addi r9,r6,6656
	ctx.r9.s64 = ctx.r6.s64 + 6656;
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r5,6644
	ctx.r6.s64 = ctx.r5.s64 + 6644;
	// stfs f9,180(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 180, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r11,160
	ctx.r4.s64 = r11.s64 + 160;
	// stfs f8,184(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 184, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f7,188(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 188, temp.u32);
	// lfs f30,15536(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 15536);
	f30.f64 = double(temp.f32);
	// lfs f6,164(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 164);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f30
	ctx.f5.f64 = double(float(ctx.f6.f64 - f30.f64));
	// lfs f4,172(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 172);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,168(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 168);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,160(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 160);
	ctx.f2.f64 = double(temp.f32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lfs f31,-25600(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25600);
	f31.f64 = double(temp.f32);
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lwz r6,44(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// bl 0x826eef18
	sub_826EEF18(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bne cr6,0x824898f8
	if (!cr6.eq) goto loc_824898F8;
	// lfs f0,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	f0.f64 = double(temp.f32);
	// addi r11,r11,160
	r11.s64 = r11.s64 + 160;
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 - f0.f64));
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(f0.f64 * ctx.f12.f64));
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f0,f11
	ctx.f7.f64 = double(float(f0.f64 * ctx.f11.f64));
	// lfs f8,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f0,f10
	ctx.f6.f64 = double(float(f0.f64 * ctx.f10.f64));
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f0,f8
	ctx.f5.f64 = double(float(f0.f64 * ctx.f8.f64));
	// fmuls f0,f13,f4
	f0.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// b 0x82489974
	goto loc_82489974;
loc_824898F8:
	// lfs f0,164(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 164);
	f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f13,160(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f30
	ctx.f12.f64 = double(float(f0.f64 + f30.f64));
	// lfs f11,168(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f10,172(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 172);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r11,160
	ctx.r4.s64 = r11.s64 + 160;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r6,44(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// bl 0x826eef18
	sub_826EEF18(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x824899ac
	if (!cr6.eq) goto loc_824899AC;
	// lfs f0,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	f0.f64 = double(temp.f32);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 - f0.f64));
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,160
	r11.s64 = r11.s64 + 160;
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(f0.f64 * ctx.f12.f64));
	// lfs f8,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f0,f11
	ctx.f7.f64 = double(float(f0.f64 * ctx.f11.f64));
	// fmuls f6,f0,f10
	ctx.f6.f64 = double(float(f0.f64 * ctx.f10.f64));
	// fmuls f5,f0,f8
	ctx.f5.f64 = double(float(f0.f64 * ctx.f8.f64));
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f0,f4,f13
	f0.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
loc_82489974:
	// lfs f3,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fadds f9,f0,f9
	ctx.f9.f64 = double(float(f0.f64 + ctx.f9.f64));
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f12,f3,f13
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f11,f2,f13
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f10,f1,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fadds f8,f12,f7
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// fadds f7,f11,f6
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// fadds f6,f10,f5
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f6,12(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
loc_824899AC:
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824899CC"))) PPC_WEAK_FUNC(sub_824899CC);
PPC_FUNC_IMPL(__imp__sub_824899CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824899D0"))) PPC_WEAK_FUNC(sub_824899D0);
PPC_FUNC_IMPL(__imp__sub_824899D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82489a00
	if (cr6.eq) goto loc_82489A00;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82489a04
	if (!cr6.eq) goto loc_82489A04;
loc_82489A00:
	// li r11,0
	r11.s64 = 0;
loc_82489A04:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r31,12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20212(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20212);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,44
	ctx.r4.s64 = r28.s64 + 44;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82489a58
	if (!cr6.eq) goto loc_82489A58;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82489a58
	if (!cr6.eq) goto loc_82489A58;
	// lwz r11,20212(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20212);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82489A58:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,19252(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19252);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,72
	ctx.r4.s64 = r28.s64 + 72;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82489aa8
	if (!cr6.eq) goto loc_82489AA8;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82489aa8
	if (!cr6.eq) goto loc_82489AA8;
	// lwz r11,19252(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19252);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82489AA8:
	// lwz r3,40(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// bl 0x82485d98
	sub_82485D98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82489AB4"))) PPC_WEAK_FUNC(sub_82489AB4);
PPC_FUNC_IMPL(__imp__sub_82489AB4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82489AB8"))) PPC_WEAK_FUNC(sub_82489AB8);
PPC_FUNC_IMPL(__imp__sub_82489AB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82489ae8
	if (cr6.eq) goto loc_82489AE8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82489aec
	if (!cr6.eq) goto loc_82489AEC;
loc_82489AE8:
	// li r11,0
	r11.s64 = 0;
loc_82489AEC:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r28,r10,-3784
	r28.s64 = ctx.r10.s64 + -3784;
	// lis r11,-32183
	r11.s64 = -2109145088;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r9,11380
	ctx.r3.s64 = ctx.r9.s64 + 11380;
	// addi r30,r11,-26928
	r30.s64 = r11.s64 + -26928;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,20212(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20212);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,44
	ctx.r4.s64 = r31.s64 + 44;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// lis r11,-32183
	r11.s64 = -2109145088;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r7,3680
	ctx.r3.s64 = ctx.r7.s64 + 3680;
	// addi r30,r11,-26848
	r30.s64 = r11.s64 + -26848;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19252(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 19252);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,72
	ctx.r4.s64 = r31.s64 + 72;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r3,16(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r4,-31970
	ctx.r4.s64 = -2095185920;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r3,-14120(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + -14120);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82489bc0
	if (cr6.eq) goto loc_82489BC0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82489bc4
	if (!cr6.eq) goto loc_82489BC4;
loc_82489BC0:
	// li r11,0
	r11.s64 = 0;
loc_82489BC4:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x826ef7c0
	sub_826EF7C0(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// li r10,5381
	ctx.r10.s64 = 5381;
	// stw r3,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r3.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r11,r8
	r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82489c1c
	if (cr6.eq) goto loc_82489C1C;
loc_82489C00:
	// rlwinm r7,r10,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// extsb r11,r8
	r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82489c00
	if (!cr6.eq) goto loc_82489C00;
loc_82489C1C:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r10,148(r11)
	PPC_STORE_U32(r11.u32 + 148, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82489C28"))) PPC_WEAK_FUNC(sub_82489C28);
PPC_FUNC_IMPL(__imp__sub_82489C28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82489C2C"))) PPC_WEAK_FUNC(sub_82489C2C);
PPC_FUNC_IMPL(__imp__sub_82489C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82489C30"))) PPC_WEAK_FUNC(sub_82489C30);
PPC_FUNC_IMPL(__imp__sub_82489C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// addi r8,r11,-12424
	ctx.r8.s64 = r11.s64 + -12424;
	// addi r7,r10,-12012
	ctx.r7.s64 = ctx.r10.s64 + -12012;
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// addi r6,r9,-12028
	ctx.r6.s64 = ctx.r9.s64 + -12028;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r6.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r29,r31,100
	r29.s64 = r31.s64 + 100;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// addi r29,r31,192
	r29.s64 = r31.s64 + 192;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82489CD8"))) PPC_WEAK_FUNC(sub_82489CD8);
PPC_FUNC_IMPL(__imp__sub_82489CD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82489CDC"))) PPC_WEAK_FUNC(sub_82489CDC);
PPC_FUNC_IMPL(__imp__sub_82489CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82489CE0"))) PPC_WEAK_FUNC(sub_82489CE0);
PPC_FUNC_IMPL(__imp__sub_82489CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-12012
	ctx.r9.s64 = r11.s64 + -12012;
	// addi r8,r10,-12028
	ctx.r8.s64 = ctx.r10.s64 + -12028;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r30,r3,192
	r30.s64 = ctx.r3.s64 + 192;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r30,r31,100
	r30.s64 = r31.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r7,-12240
	ctx.r5.s64 = ctx.r7.s64 + -12240;
	// addi r4,r6,3368
	ctx.r4.s64 = ctx.r6.s64 + 3368;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82489D9C"))) PPC_WEAK_FUNC(sub_82489D9C);
PPC_FUNC_IMPL(__imp__sub_82489D9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82489DA0"))) PPC_WEAK_FUNC(sub_82489DA0);
PPC_FUNC_IMPL(__imp__sub_82489DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82485650
	sub_82485650(ctx, base);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,192(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 192);
	// addi r30,r29,192
	r30.s64 = r29.s64 + 192;
	// lwz r9,220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// lwz r31,28(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// beq cr6,0x82489de8
	if (cr6.eq) goto loc_82489DE8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d0048
	sub_822D0048(ctx, base);
loc_82489DE8:
	// lwz r11,100(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 100);
	// addi r30,r29,100
	r30.s64 = r29.s64 + 100;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x82489e0c
	if (cr6.eq) goto loc_82489E0C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82486598
	sub_82486598(ctx, base);
loc_82489E0C:
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r4,r10,-25700
	ctx.r4.s64 = ctx.r10.s64 + -25700;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r31,8(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826ed730
	sub_826ED730(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ecf80
	sub_826ECF80(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82489E3C"))) PPC_WEAK_FUNC(sub_82489E3C);
PPC_FUNC_IMPL(__imp__sub_82489E3C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82489E40"))) PPC_WEAK_FUNC(sub_82489E40);
PPC_FUNC_IMPL(__imp__sub_82489E40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r3,192
	r31.s64 = ctx.r3.s64 + 192;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82489e78
	if (cr6.eq) goto loc_82489E78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0048
	sub_822D0048(ctx, base);
loc_82489E78:
	// lwz r11,100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// addi r31,r30,100
	r31.s64 = r30.s64 + 100;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82489e9c
	if (cr6.eq) goto loc_82489E9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82486598
	sub_82486598(ctx, base);
loc_82489E9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82489EA0"))) PPC_WEAK_FUNC(sub_82489EA0);
PPC_FUNC_IMPL(__imp__sub_82489EA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82489EA4"))) PPC_WEAK_FUNC(sub_82489EA4);
PPC_FUNC_IMPL(__imp__sub_82489EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82489EA8"))) PPC_WEAK_FUNC(sub_82489EA8);
PPC_FUNC_IMPL(__imp__sub_82489EA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
}

__attribute__((alias("__imp__sub_82489EAC"))) PPC_WEAK_FUNC(sub_82489EAC);
PPC_FUNC_IMPL(__imp__sub_82489EAC) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x82489eb0
	goto loc_82489EB0;
loc_82489EB0:
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82489ce0
	sub_82489CE0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82489ee8
	if (cr6.eq) goto loc_82489EE8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82489EE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82489EB0"))) PPC_WEAK_FUNC(sub_82489EB0);
PPC_FUNC_IMPL(__imp__sub_82489EB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82489ce0
	sub_82489CE0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82489ee8
	if (cr6.eq) goto loc_82489EE8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82489EE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82489F00"))) PPC_WEAK_FUNC(sub_82489F00);
PPC_FUNC_IMPL(__imp__sub_82489F00) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82485660
	sub_82485660(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82489F34"))) PPC_WEAK_FUNC(sub_82489F34);
PPC_FUNC_IMPL(__imp__sub_82489F34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82489F38"))) PPC_WEAK_FUNC(sub_82489F38);
PPC_FUNC_IMPL(__imp__sub_82489F38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82489f5c
	if (!cr6.eq) goto loc_82489F5C;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82489f60
	if (cr6.eq) goto loc_82489F60;
loc_82489F5C:
	// li r11,0
	r11.s64 = 0;
loc_82489F60:
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, r11.u8);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lbz r7,9(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 9);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x82489f8c
	if (!cr6.eq) goto loc_82489F8C;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82489f90
	if (cr6.eq) goto loc_82489F90;
loc_82489F8C:
	// li r11,0
	r11.s64 = 0;
loc_82489F90:
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, r11.u8);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lbz r7,10(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 10);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x82489fbc
	if (!cr6.eq) goto loc_82489FBC;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82489fc0
	if (cr6.eq) goto loc_82489FC0;
loc_82489FBC:
	// li r11,0
	r11.s64 = 0;
loc_82489FC0:
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stb r11,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, r11.u8);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lbz r7,11(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x82489fec
	if (!cr6.eq) goto loc_82489FEC;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r10,9(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 9);
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82489ff0
	if (cr6.eq) goto loc_82489FF0;
loc_82489FEC:
	// li r11,0
	r11.s64 = 0;
loc_82489FF0:
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lbz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 8);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8248a01c
	if (!cr6.eq) goto loc_8248A01C;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x8248a020
	if (cr6.eq) goto loc_8248A020;
loc_8248A01C:
	// li r11,0
	r11.s64 = 0;
loc_8248A020:
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, r11.u8);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lbz r7,9(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 9);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8248a04c
	if (!cr6.eq) goto loc_8248A04C;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x8248a050
	if (cr6.eq) goto loc_8248A050;
loc_8248A04C:
	// li r11,0
	r11.s64 = 0;
loc_8248A050:
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stb r11,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, r11.u8);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lbz r7,10(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 10);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8248a07c
	if (!cr6.eq) goto loc_8248A07C;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x8248a080
	if (cr6.eq) goto loc_8248A080;
loc_8248A07C:
	// li r11,0
	r11.s64 = 0;
loc_8248A080:
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lbz r7,11(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8248a0ac
	if (!cr6.eq) goto loc_8248A0AC;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r10,9(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 9);
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x8248a0b0
	if (cr6.eq) goto loc_8248A0B0;
loc_8248A0AC:
	// li r11,0
	r11.s64 = 0;
loc_8248A0B0:
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stb r11,11(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11, r11.u8);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r7,44(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 8);
	// stb r6,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r6.u8);
	// lwz r5,40(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lbz r11,9(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 9);
	// lwz r4,44(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stb r11,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, r11.u8);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r8,10(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// stb r8,6(r9)
	PPC_STORE_U8(ctx.r9.u32 + 6, ctx.r8.u8);
	// lwz r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r6,44(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r5,11(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 11);
	// stb r5,9(r6)
	PPC_STORE_U8(ctx.r6.u32 + 9, ctx.r5.u8);
}

__attribute__((alias("__imp__sub_8248A0F8"))) PPC_WEAK_FUNC(sub_8248A0F8);
PPC_FUNC_IMPL(__imp__sub_8248A0F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248A0FC"))) PPC_WEAK_FUNC(sub_8248A0FC);
PPC_FUNC_IMPL(__imp__sub_8248A0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248A100"))) PPC_WEAK_FUNC(sub_8248A100);
PPC_FUNC_IMPL(__imp__sub_8248A100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f13,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// lfs f12,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8248a134
	if (!cr6.gt) goto loc_8248A134;
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x8248a134
	if (!cr6.gt) goto loc_8248A134;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8248a150
	goto loc_8248A150;
loc_8248A134:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x8248a14c
	if (!cr6.lt) goto loc_8248A14C;
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	f0.f64 = double(temp.f32);
	// li r10,2
	ctx.r10.s64 = 2;
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bgt cr6,0x8248a150
	if (cr6.gt) goto loc_8248A150;
loc_8248A14C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8248A150:
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lbz r9,9(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 9);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfs f0,92(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	f0.f64 = double(temp.f32);
	// bne cr6,0x8248a190
	if (!cr6.eq) goto loc_8248A190;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8248a190
	if (!cr6.eq) goto loc_8248A190;
	// lfs f13,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x8248a194
	if (cr6.gt) goto loc_8248A194;
loc_8248A190:
	// li r11,0
	r11.s64 = 0;
loc_8248A194:
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stb r11,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, r11.u8);
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r7,9(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 9);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// beq cr6,0x8248a1bc
	if (cr6.eq) goto loc_8248A1BC;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f13,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x8248a1d0
	if (cr6.gt) goto loc_8248A1D0;
loc_8248A1BC:
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x8248a1d4
	if (cr6.eq) goto loc_8248A1D4;
loc_8248A1D0:
	// li r11,0
	r11.s64 = 0;
loc_8248A1D4:
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stb r11,17(r10)
	PPC_STORE_U8(ctx.r10.u32 + 17, r11.u8);
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r7,9(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 9);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8248a20c
	if (!cr6.eq) goto loc_8248A20C;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8248a20c
	if (!cr6.eq) goto loc_8248A20C;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8248a210
	if (cr6.eq) goto loc_8248A210;
loc_8248A20C:
	// li r11,0
	r11.s64 = 0;
loc_8248A210:
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stb r11,18(r10)
	PPC_STORE_U8(ctx.r10.u32 + 18, r11.u8);
}

__attribute__((alias("__imp__sub_8248A218"))) PPC_WEAK_FUNC(sub_8248A218);
PPC_FUNC_IMPL(__imp__sub_8248A218) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248A21C"))) PPC_WEAK_FUNC(sub_8248A21C);
PPC_FUNC_IMPL(__imp__sub_8248A21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248A220"))) PPC_WEAK_FUNC(sub_8248A220);
PPC_FUNC_IMPL(__imp__sub_8248A220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r11,0
	r11.s64 = 0;
	// stb r11,13(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13, r11.u8);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x8248a2a4
	if (!cr6.eq) goto loc_8248A2A4;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f0,80(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = f0.u64 & ~0x8000000000000000;
	// lfs f0,-11948(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11948);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8248a280
	if (!cr6.gt) goto loc_8248A280;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 14);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8248a288
	if (!cr6.eq) goto loc_8248A288;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// li r11,1
	r11.s64 = 1;
	// stb r11,13(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13, r11.u8);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stb r11,14(r9)
	PPC_STORE_U8(ctx.r9.u32 + 14, r11.u8);
	// b 0x8248a288
	goto loc_8248A288;
loc_8248A280:
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stb r11,14(r10)
	PPC_STORE_U8(ctx.r10.u32 + 14, r11.u8);
loc_8248A288:
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,84(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 84);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f12,84(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 84, temp.u32);
	// blr 
	return;
loc_8248A2A4:
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 84, temp.u32);
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stb r11,14(r8)
	PPC_STORE_U8(ctx.r8.u32 + 14, r11.u8);
}

__attribute__((alias("__imp__sub_8248A2CC"))) PPC_WEAK_FUNC(sub_8248A2CC);
PPC_FUNC_IMPL(__imp__sub_8248A2CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248A2D0"))) PPC_WEAK_FUNC(sub_8248A2D0);
PPC_FUNC_IMPL(__imp__sub_8248A2D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8248a320
	if (!cr6.eq) goto loc_8248A320;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lfs f0,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 88);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f12,88(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 88, temp.u32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f11,88(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,12(r11)
	PPC_STORE_U8(r11.u32 + 12, ctx.r10.u8);
	// blr 
	return;
loc_8248A320:
	// lbz r11,5(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 88, temp.u32);
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stb r9,12(r8)
	PPC_STORE_U8(ctx.r8.u32 + 12, ctx.r9.u8);
}

__attribute__((alias("__imp__sub_8248A348"))) PPC_WEAK_FUNC(sub_8248A348);
PPC_FUNC_IMPL(__imp__sub_8248A348) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248A34C"))) PPC_WEAK_FUNC(sub_8248A34C);
PPC_FUNC_IMPL(__imp__sub_8248A34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248A350"))) PPC_WEAK_FUNC(sub_8248A350);
PPC_FUNC_IMPL(__imp__sub_8248A350) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248A354"))) PPC_WEAK_FUNC(sub_8248A354);
PPC_FUNC_IMPL(__imp__sub_8248A354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

