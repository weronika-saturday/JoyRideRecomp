#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_824A5DB4"))) PPC_WEAK_FUNC(sub_824A5DB4);
PPC_FUNC_IMPL(__imp__sub_824A5DB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5DB8"))) PPC_WEAK_FUNC(sub_824A5DB8);
PPC_FUNC_IMPL(__imp__sub_824A5DB8) {
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
	// beq cr6,0x824a5e20
	if (cr6.eq) goto loc_824A5E20;
	// bl 0x824aa9a8
	sub_824AA9A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5E20:
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

__attribute__((alias("__imp__sub_824A5E34"))) PPC_WEAK_FUNC(sub_824A5E34);
PPC_FUNC_IMPL(__imp__sub_824A5E34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5E38"))) PPC_WEAK_FUNC(sub_824A5E38);
PPC_FUNC_IMPL(__imp__sub_824A5E38) {
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
	// beq cr6,0x824a5ea0
	if (cr6.eq) goto loc_824A5EA0;
	// bl 0x824ac3e8
	sub_824AC3E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5EA0:
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

__attribute__((alias("__imp__sub_824A5EB4"))) PPC_WEAK_FUNC(sub_824A5EB4);
PPC_FUNC_IMPL(__imp__sub_824A5EB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5EB8"))) PPC_WEAK_FUNC(sub_824A5EB8);
PPC_FUNC_IMPL(__imp__sub_824A5EB8) {
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
	// beq cr6,0x824a5f20
	if (cr6.eq) goto loc_824A5F20;
	// bl 0x824abde8
	sub_824ABDE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5F20:
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

__attribute__((alias("__imp__sub_824A5F34"))) PPC_WEAK_FUNC(sub_824A5F34);
PPC_FUNC_IMPL(__imp__sub_824A5F34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5F38"))) PPC_WEAK_FUNC(sub_824A5F38);
PPC_FUNC_IMPL(__imp__sub_824A5F38) {
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
	// beq cr6,0x824a5fa0
	if (cr6.eq) goto loc_824A5FA0;
	// bl 0x824ac830
	sub_824AC830(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5FA0:
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

__attribute__((alias("__imp__sub_824A5FB4"))) PPC_WEAK_FUNC(sub_824A5FB4);
PPC_FUNC_IMPL(__imp__sub_824A5FB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5FB8"))) PPC_WEAK_FUNC(sub_824A5FB8);
PPC_FUNC_IMPL(__imp__sub_824A5FB8) {
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
	// beq cr6,0x824a6020
	if (cr6.eq) goto loc_824A6020;
	// bl 0x822b1e58
	sub_822B1E58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A6020:
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

__attribute__((alias("__imp__sub_824A6034"))) PPC_WEAK_FUNC(sub_824A6034);
PPC_FUNC_IMPL(__imp__sub_824A6034) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A6038"))) PPC_WEAK_FUNC(sub_824A6038);
PPC_FUNC_IMPL(__imp__sub_824A6038) {
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
	// beq cr6,0x824a60a0
	if (cr6.eq) goto loc_824A60A0;
	// bl 0x822b2b30
	sub_822B2B30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A60A0:
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

__attribute__((alias("__imp__sub_824A60B4"))) PPC_WEAK_FUNC(sub_824A60B4);
PPC_FUNC_IMPL(__imp__sub_824A60B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A60B8"))) PPC_WEAK_FUNC(sub_824A60B8);
PPC_FUNC_IMPL(__imp__sub_824A60B8) {
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
	// beq cr6,0x824a6120
	if (cr6.eq) goto loc_824A6120;
	// bl 0x822b2f30
	sub_822B2F30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A6120:
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

__attribute__((alias("__imp__sub_824A6134"))) PPC_WEAK_FUNC(sub_824A6134);
PPC_FUNC_IMPL(__imp__sub_824A6134) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A6138"))) PPC_WEAK_FUNC(sub_824A6138);
PPC_FUNC_IMPL(__imp__sub_824A6138) {
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
	// beq cr6,0x824a61a0
	if (cr6.eq) goto loc_824A61A0;
	// bl 0x822b23b0
	sub_822B23B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A61A0:
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

__attribute__((alias("__imp__sub_824A61B4"))) PPC_WEAK_FUNC(sub_824A61B4);
PPC_FUNC_IMPL(__imp__sub_824A61B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A61B8"))) PPC_WEAK_FUNC(sub_824A61B8);
PPC_FUNC_IMPL(__imp__sub_824A61B8) {
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
	// beq cr6,0x824a6220
	if (cr6.eq) goto loc_824A6220;
	// bl 0x822b2938
	sub_822B2938(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A6220:
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

__attribute__((alias("__imp__sub_824A6234"))) PPC_WEAK_FUNC(sub_824A6234);
PPC_FUNC_IMPL(__imp__sub_824A6234) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A6238"))) PPC_WEAK_FUNC(sub_824A6238);
PPC_FUNC_IMPL(__imp__sub_824A6238) {
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
	// beq cr6,0x824a62a0
	if (cr6.eq) goto loc_824A62A0;
	// bl 0x824abc80
	sub_824ABC80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A62A0:
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

__attribute__((alias("__imp__sub_824A62B4"))) PPC_WEAK_FUNC(sub_824A62B4);
PPC_FUNC_IMPL(__imp__sub_824A62B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A62B8"))) PPC_WEAK_FUNC(sub_824A62B8);
PPC_FUNC_IMPL(__imp__sub_824A62B8) {
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
	// beq cr6,0x824a6320
	if (cr6.eq) goto loc_824A6320;
	// bl 0x824ac548
	sub_824AC548(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A6320:
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

__attribute__((alias("__imp__sub_824A6334"))) PPC_WEAK_FUNC(sub_824A6334);
PPC_FUNC_IMPL(__imp__sub_824A6334) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A6338"))) PPC_WEAK_FUNC(sub_824A6338);
PPC_FUNC_IMPL(__imp__sub_824A6338) {
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
	// li r3,96
	ctx.r3.s64 = 96;
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
	// beq cr6,0x824a63a0
	if (cr6.eq) goto loc_824A63A0;
	// bl 0x824aad08
	sub_824AAD08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A63A0:
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

__attribute__((alias("__imp__sub_824A63B4"))) PPC_WEAK_FUNC(sub_824A63B4);
PPC_FUNC_IMPL(__imp__sub_824A63B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A63B8"))) PPC_WEAK_FUNC(sub_824A63B8);
PPC_FUNC_IMPL(__imp__sub_824A63B8) {
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
	// bl 0x824a3cf0
	sub_824A3CF0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a63f0
	if (cr6.eq) goto loc_824A63F0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824A63F0:
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

__attribute__((alias("__imp__sub_824A6404"))) PPC_WEAK_FUNC(sub_824A6404);
PPC_FUNC_IMPL(__imp__sub_824A6404) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A6408"))) PPC_WEAK_FUNC(sub_824A6408);
PPC_FUNC_IMPL(__imp__sub_824A6408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lbz r11,4(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a642c
	if (!cr6.eq) goto loc_824A642C;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r11,1
	r11.s64 = 1;
	// stb r11,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, r11.u8);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// stb r11,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, r11.u8);
	// blr 
	return;
loc_824A642C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// li r11,0
	r11.s64 = 0;
	// stfs f0,8(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, r11.u8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_824A6454"))) PPC_WEAK_FUNC(sub_824A6454);
PPC_FUNC_IMPL(__imp__sub_824A6454) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A6458"))) PPC_WEAK_FUNC(sub_824A6458);
PPC_FUNC_IMPL(__imp__sub_824A6458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lbz r11,4(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a649c
	if (!cr6.eq) goto loc_824A649C;
	// lbz r11,85(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 85);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a648c
	if (cr6.eq) goto loc_824A648C;
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, r11.u8);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r11.u32);
	// stb r10,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r10.u8);
	// stb r11,85(r3)
	PPC_STORE_U8(ctx.r3.u32 + 85, r11.u8);
	// blr 
	return;
loc_824A648C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
loc_824A649C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// li r11,0
	r11.s64 = 0;
	// stfs f0,8(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, r11.u8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_824A64C4"))) PPC_WEAK_FUNC(sub_824A64C4);
PPC_FUNC_IMPL(__imp__sub_824A64C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A64C8"))) PPC_WEAK_FUNC(sub_824A64C8);
PPC_FUNC_IMPL(__imp__sub_824A64C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lbz r11,4(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a64e0
	if (!cr6.eq) goto loc_824A64E0;
	// li r11,1
	r11.s64 = 1;
	// stb r11,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, r11.u8);
	// blr 
	return;
loc_824A64E0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// li r11,0
	r11.s64 = 0;
	// stfs f0,8(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, r11.u8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A650C"))) PPC_WEAK_FUNC(sub_824A650C);
PPC_FUNC_IMPL(__imp__sub_824A650C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A6510"))) PPC_WEAK_FUNC(sub_824A6510);
PPC_FUNC_IMPL(__imp__sub_824A6510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// li r11,1
	r11.s64 = 1;
	// stb r11,85(r3)
	PPC_STORE_U8(ctx.r3.u32 + 85, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A6528"))) PPC_WEAK_FUNC(sub_824A6528);
PPC_FUNC_IMPL(__imp__sub_824A6528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// beq cr6,0x824a6544
	if (cr6.eq) goto loc_824A6544;
	// stw r5,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r5.u32);
loc_824A6544:
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x824a6558
	if (!cr6.gt) goto loc_824A6558;
	// li r11,1
	r11.s64 = 1;
	// stb r11,85(r3)
	PPC_STORE_U8(ctx.r3.u32 + 85, r11.u8);
loc_824A6558:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r11.u8);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x824a7218
	sub_824A7218(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824A658C"))) PPC_WEAK_FUNC(sub_824A658C);
PPC_FUNC_IMPL(__imp__sub_824A658C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A6590"))) PPC_WEAK_FUNC(sub_824A6590);
PPC_FUNC_IMPL(__imp__sub_824A6590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// stb r10,85(r3)
	PPC_STORE_U8(ctx.r3.u32 + 85, ctx.r10.u8);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// stb r10,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
loc_824A65B0:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bgt cr6,0x824a65b0
	if (cr6.gt) goto loc_824A65B0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A65CC"))) PPC_WEAK_FUNC(sub_824A65CC);
PPC_FUNC_IMPL(__imp__sub_824A65CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A65D0"))) PPC_WEAK_FUNC(sub_824A65D0);
PPC_FUNC_IMPL(__imp__sub_824A65D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r27,r11,-3884
	r27.s64 = r11.s64 + -3884;
	// li r29,0
	r29.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r26,-32249
	r26.s64 = -2113470464;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rotlwi r11,r4,0
	r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x824a66a0
	if (cr6.eq) goto loc_824A66A0;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,8(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x824a66a0
	if (cr6.gt) goto loc_824A66A0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x824a6658
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824A6658;
	// bdzf 4*cr6+eq,0x824a6664
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824A6664;
	// bne cr6,0x824a669c
	if (!cr6.eq) goto loc_824A669C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a6408
	sub_824A6408(ctx, base);
	// b 0x824a66a0
	goto loc_824A66A0;
loc_824A6658:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a6458
	sub_824A6458(ctx, base);
	// b 0x824a66a0
	goto loc_824A66A0;
loc_824A6664:
	// lbz r11,4(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a667c
	if (!cr6.eq) goto loc_824A667C;
	// li r11,1
	r11.s64 = 1;
	// stb r11,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, r11.u8);
	// b 0x824a66a0
	goto loc_824A66A0;
loc_824A667C:
	// lfs f13,21036(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x824a66a0
	if (cr6.lt) goto loc_824A66A0;
	// li r11,3
	r11.s64 = 3;
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stb r29,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, r29.u8);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x824a66a0
	goto loc_824A66A0;
loc_824A669C:
	// bl 0x824a72b0
	sub_824A72B0(ctx, base);
loc_824A66A0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a6944
	if (cr6.eq) goto loc_824A6944;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r28,40(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// lwz r3,-14368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824a66d4
	if (cr6.eq) goto loc_824A66D4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a66d8
	if (!cr6.eq) goto loc_824A66D8;
loc_824A66D4:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_824A66D8:
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a6720
	if (cr6.eq) goto loc_824A6720;
	// lwz r4,224(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 224);
	// bl 0x825cb820
	sub_825CB820(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a6720
	if (cr6.eq) goto loc_824A6720;
	// bl 0x825ca0d8
	sub_825CA0D8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a6720
	if (cr6.eq) goto loc_824A6720;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825ca178
	sub_825CA178(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x8234d8f0
	sub_8234D8F0(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_824A6720:
	// lwz r11,100(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 100);
	// addi r3,r28,100
	ctx.r3.s64 = r28.s64 + 100;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,17676
	ctx.r4.s64 = ctx.r9.s64 + 17676;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x824a6950
	if (cr6.eq) goto loc_824A6950;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a6950
	if (cr6.eq) goto loc_824A6950;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f29,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	f29.f64 = double(temp.f32);
	// lfs f31,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	f31.f64 = double(temp.f32);
	// lfs f30,60(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	f30.f64 = double(temp.f32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lfs f1,44(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r29,r8,-24876
	r29.s64 = ctx.r8.s64 + -24876;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	f0.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfs f4,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f3,108(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f2,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	f0.f64 = double(temp.f32);
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,44(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// stfs f2,112(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f9,140(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x82339968
	sub_82339968(ctx, base);
	// lfs f8,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f7.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lfs f6,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f6.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f5,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f5.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f5,124(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f1,44(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// lfs f4,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// fmuls f1,f2,f4
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fadds f3,f29,f0
	ctx.f3.f64 = double(float(f29.f64 + f0.f64));
	// fmadds f11,f12,f13,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f1.f64));
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fnmadds f8,f10,f9,f11
	ctx.f8.f64 = double(float(-(ctx.f10.f64 * ctx.f9.f64 + ctx.f11.f64)));
	// lfs f13,21036(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// fsel f7,f8,f8,f13
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f8.f64 : ctx.f13.f64;
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - f0.f64));
	// fsel f5,f6,f0,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? f0.f64 : ctx.f7.f64;
	// fadds f4,f5,f29
	ctx.f4.f64 = double(float(ctx.f5.f64 + f29.f64));
	// fdivs f3,f4,f3
	ctx.f3.f64 = double(float(ctx.f4.f64 / ctx.f3.f64));
	// fsel f2,f3,f3,f13
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? ctx.f3.f64 : ctx.f13.f64;
	// fsubs f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 - f0.f64));
	// fsel f12,f1,f0,f2
	ctx.f12.f64 = ctx.f1.f64 >= 0.0 ? f0.f64 : ctx.f2.f64;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x824a68d4
	if (cr6.gt) goto loc_824A68D4;
	// lfs f11,64(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,68(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
loc_824A68D4:
	// lfs f10,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f12,f31
	cr6.compare(ctx.f12.f64, f31.f64);
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// bge cr6,0x824a68e8
	if (!cr6.lt) goto loc_824A68E8;
	// stfs f31,48(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
loc_824A68E8:
	// lfs f12,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f30
	cr6.compare(ctx.f12.f64, f30.f64);
	// ble cr6,0x824a68f8
	if (!cr6.gt) goto loc_824A68F8;
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
loc_824A68F8:
	// lfs f12,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x824a6914
	if (!cr6.gt) goto loc_824A6914;
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f31,48(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
loc_824A6914:
	// lfs f13,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// lfs f11,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f0,f12
	ctx.f9.f64 = double(float(f0.f64 - ctx.f12.f64));
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmadds f7,f9,f10,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f8.f64));
	// stfs f7,48(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f29,-80(r1)
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_824A6944:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
loc_824A6950:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
}

__attribute__((alias("__imp__sub_824A6960"))) PPC_WEAK_FUNC(sub_824A6960);
PPC_FUNC_IMPL(__imp__sub_824A6960) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_824A6964"))) PPC_WEAK_FUNC(sub_824A6964);
PPC_FUNC_IMPL(__imp__sub_824A6964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A6968"))) PPC_WEAK_FUNC(sub_824A6968);
PPC_FUNC_IMPL(__imp__sub_824A6968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r8,r9,-24876
	ctx.r8.s64 = ctx.r9.s64 + -24876;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r7,24192(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lfs f0,-24876(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24876);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// beq cr6,0x824a6b80
	if (cr6.eq) goto loc_824A6B80;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,27116
	ctx.r4.s64 = ctx.r8.s64 + 27116;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a6b80
	if (cr6.eq) goto loc_824A6B80;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r27,1
	r27.s64 = 1;
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,17676
	ctx.r4.s64 = ctx.r9.s64 + 17676;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a6b80
	if (cr6.eq) goto loc_824A6B80;
	// lis r29,-31970
	r29.s64 = -2095185920;
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824a6a3c
	if (cr6.eq) goto loc_824A6A3C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a6a40
	if (!cr6.eq) goto loc_824A6A40;
loc_824A6A3C:
	// li r11,0
	r11.s64 = 0;
loc_824A6A40:
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a6b30
	if (cr6.eq) goto loc_824A6B30;
	// bl 0x822b92d0
	sub_822B92D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a6b30
	if (cr6.eq) goto loc_824A6B30;
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x824a6a74
	if (cr6.eq) goto loc_824A6A74;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x824a6a78
	if (!cr6.eq) goto loc_824A6A78;
loc_824A6A74:
	// li r11,1
	r11.s64 = 1;
loc_824A6A78:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a6b30
	if (cr6.eq) goto loc_824A6B30;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a6b30
	if (cr6.eq) goto loc_824A6B30;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8242dd00
	sub_8242DD00(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824a6b30
	if (cr6.eq) goto loc_824A6B30;
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824a6ad4
	if (cr6.eq) goto loc_824A6AD4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a6ad8
	if (!cr6.eq) goto loc_824A6AD8;
loc_824A6AD4:
	// li r11,0
	r11.s64 = 0;
loc_824A6AD8:
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a6b30
	if (cr6.eq) goto loc_824A6B30;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r4,224(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// bl 0x825cb820
	sub_825CB820(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a6b30
	if (cr6.eq) goto loc_824A6B30;
	// bl 0x825ca0d8
	sub_825CA0D8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a6b30
	if (cr6.eq) goto loc_824A6B30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ca380
	sub_825CA380(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x824a6b2c
	if (cr6.eq) goto loc_824A6B2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ca380
	sub_825CA380(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x824a6b30
	if (!cr6.eq) goto loc_824A6B30;
loc_824A6B2C:
	// li r27,0
	r27.s64 = 0;
loc_824A6B30:
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x824a6b58
	if (cr6.eq) goto loc_824A6B58;
	// lwz r5,88(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 88);
	// b 0x824a6b5c
	goto loc_824A6B5C;
loc_824A6B58:
	// lwz r5,92(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 92);
loc_824A6B5C:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f11,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f11,12(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
loc_824A6B80:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824A6B90"))) PPC_WEAK_FUNC(sub_824A6B90);
PPC_FUNC_IMPL(__imp__sub_824A6B90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_824A6B94"))) PPC_WEAK_FUNC(sub_824A6B94);
PPC_FUNC_IMPL(__imp__sub_824A6B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A6B98"))) PPC_WEAK_FUNC(sub_824A6B98);
PPC_FUNC_IMPL(__imp__sub_824A6B98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// addi r9,r10,-3808
	ctx.r9.s64 = ctx.r10.s64 + -3808;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// ble cr6,0x824a6bcc
	if (!cr6.gt) goto loc_824A6BCC;
loc_824A6BB4:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bgt cr6,0x824a6bb4
	if (cr6.gt) goto loc_824A6BB4;
loc_824A6BCC:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
}

__attribute__((alias("__imp__sub_824A6BD0"))) PPC_WEAK_FUNC(sub_824A6BD0);
PPC_FUNC_IMPL(__imp__sub_824A6BD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x824a7468
	sub_824A7468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A6BD4"))) PPC_WEAK_FUNC(sub_824A6BD4);
PPC_FUNC_IMPL(__imp__sub_824A6BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A6BD8"))) PPC_WEAK_FUNC(sub_824A6BD8);
PPC_FUNC_IMPL(__imp__sub_824A6BD8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r11,-26420(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -26420);
	// lwz r3,-14368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x824a6c1c
	if (cr6.eq) goto loc_824A6C1C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a6c20
	if (!cr6.eq) goto loc_824A6C20;
loc_824A6C1C:
	// li r11,0
	r11.s64 = 0;
loc_824A6C20:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a6c6c
	if (cr6.eq) goto loc_824A6C6C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a6c6c
	if (!cr6.eq) goto loc_824A6C6C;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824A6C6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A6C80"))) PPC_WEAK_FUNC(sub_824A6C80);
PPC_FUNC_IMPL(__imp__sub_824A6C80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A6C84"))) PPC_WEAK_FUNC(sub_824A6C84);
PPC_FUNC_IMPL(__imp__sub_824A6C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A6C88"))) PPC_WEAK_FUNC(sub_824A6C88);
PPC_FUNC_IMPL(__imp__sub_824A6C88) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r11,-26424(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -26424);
	// lwz r3,-14368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x824a6ccc
	if (cr6.eq) goto loc_824A6CCC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a6cd0
	if (!cr6.eq) goto loc_824A6CD0;
loc_824A6CCC:
	// li r11,0
	r11.s64 = 0;
loc_824A6CD0:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a6d1c
	if (cr6.eq) goto loc_824A6D1C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a6d1c
	if (!cr6.eq) goto loc_824A6D1C;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824A6D1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A6D30"))) PPC_WEAK_FUNC(sub_824A6D30);
PPC_FUNC_IMPL(__imp__sub_824A6D30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A6D34"))) PPC_WEAK_FUNC(sub_824A6D34);
PPC_FUNC_IMPL(__imp__sub_824A6D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A6D38"))) PPC_WEAK_FUNC(sub_824A6D38);
PPC_FUNC_IMPL(__imp__sub_824A6D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r28,0
	r28.s64 = 0;
	// addi r9,r11,-3808
	ctx.r9.s64 = r11.s64 + -3808;
	// addi r8,r10,-3820
	ctx.r8.s64 = ctx.r10.s64 + -3820;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r28.u32);
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r28.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r28.u32);
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r28.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// or r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 | ctx.r3.u64;
	// addi r29,r11,-24876
	r29.s64 = r11.s64 + -24876;
	// stw r6,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r6.u32);
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// lfs f0,-24876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24876);
	f0.f64 = double(temp.f32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r3,r3,-3668
	ctx.r3.s64 = ctx.r3.s64 + -3668;
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f0,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r10.u32);
	// lfs f31,21036(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// lfs f30,-25600(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -25600);
	f30.f64 = double(temp.f32);
	// stb r28,84(r31)
	PPC_STORE_U8(r31.u32 + 84, r28.u8);
	// stfs f30,48(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stb r28,85(r31)
	PPC_STORE_U8(r31.u32 + 85, r28.u8);
	// stfs f31,52(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f31,56(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f31,60(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f31,64(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a6e68
	if (cr6.eq) goto loc_824A6E68;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a6e68
	if (cr6.eq) goto loc_824A6E68;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a6e68
	if (cr6.eq) goto loc_824A6E68;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_824A6E68:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// lfs f11,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r11,-3692
	ctx.r3.s64 = r11.s64 + -3692;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824a6ef8
	if (cr6.eq) goto loc_824A6EF8;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a6ef8
	if (cr6.eq) goto loc_824A6EF8;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a6efc
	if (!cr6.eq) goto loc_824A6EFC;
loc_824A6EF8:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_824A6EFC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r11,-3712
	ctx.r3.s64 = r11.s64 + -3712;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824a6f74
	if (cr6.eq) goto loc_824A6F74;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a6f74
	if (cr6.eq) goto loc_824A6F74;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a6f78
	if (!cr6.eq) goto loc_824A6F78;
loc_824A6F74:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_824A6F78:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r11,-3732
	ctx.r3.s64 = r11.s64 + -3732;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824a6ff0
	if (cr6.eq) goto loc_824A6FF0;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a6ff0
	if (cr6.eq) goto loc_824A6FF0;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a6ff4
	if (!cr6.eq) goto loc_824A6FF4;
loc_824A6FF0:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_824A6FF4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r11,-3760
	ctx.r3.s64 = r11.s64 + -3760;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824a706c
	if (cr6.eq) goto loc_824A706C;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a706c
	if (cr6.eq) goto loc_824A706C;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a7070
	if (!cr6.eq) goto loc_824A7070;
loc_824A706C:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_824A7070:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r10,-3780
	ctx.r3.s64 = ctx.r10.s64 + -3780;
	// lfs f0,-3848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -3848);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824a70f0
	if (cr6.eq) goto loc_824A70F0;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a70f0
	if (cr6.eq) goto loc_824A70F0;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a70f4
	if (!cr6.eq) goto loc_824A70F4;
loc_824A70F0:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_824A70F4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,72(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// addi r3,r11,-3792
	ctx.r3.s64 = r11.s64 + -3792;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824a716c
	if (cr6.eq) goto loc_824A716C;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a716c
	if (cr6.eq) goto loc_824A716C;
	// bl 0x822ba4c0
	sub_822BA4C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a7170
	if (!cr6.eq) goto loc_824A7170;
loc_824A716C:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_824A7170:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// addi r3,r10,-3804
	ctx.r3.s64 = ctx.r10.s64 + -3804;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824a71e4
	if (cr6.eq) goto loc_824A71E4;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a71e4
	if (cr6.eq) goto loc_824A71E4;
	// bl 0x822ba4c0
	sub_822BA4C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a71e8
	if (!cr6.eq) goto loc_824A71E8;
loc_824A71E4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
loc_824A71E8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
}

__attribute__((alias("__imp__sub_824A7208"))) PPC_WEAK_FUNC(sub_824A7208);
PPC_FUNC_IMPL(__imp__sub_824A7208) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824A720C"))) PPC_WEAK_FUNC(sub_824A720C);
PPC_FUNC_IMPL(__imp__sub_824A720C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A7210"))) PPC_WEAK_FUNC(sub_824A7210);
PPC_FUNC_IMPL(__imp__sub_824A7210) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_824A7210"))) PPC_WEAK_FUNC(sub_824A7210);
PPC_FUNC_IMPL(__imp__sub_824A7210) {
	PPC_FUNC_PROLOGUE();
	// b 0x824a7550
	sub_824A7550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A7214"))) PPC_WEAK_FUNC(sub_824A7214);
PPC_FUNC_IMPL(__imp__sub_824A7214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A7218"))) PPC_WEAK_FUNC(sub_824A7218);
PPC_FUNC_IMPL(__imp__sub_824A7218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x824a7258
	if (!cr6.gt) goto loc_824A7258;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824A7258:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a7294
	if (cr0.eq) goto loc_824A7294;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r7,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r7.u32);
loc_824A7294:
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

__attribute__((alias("__imp__sub_824A72A8"))) PPC_WEAK_FUNC(sub_824A72A8);
PPC_FUNC_IMPL(__imp__sub_824A72A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A72AC"))) PPC_WEAK_FUNC(sub_824A72AC);
PPC_FUNC_IMPL(__imp__sub_824A72AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A72B0"))) PPC_WEAK_FUNC(sub_824A72B0);
PPC_FUNC_IMPL(__imp__sub_824A72B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r8,r10,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r10.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// srawi r10,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x824a7318
	if (!cr6.lt) goto loc_824A7318;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
loc_824A72D4:
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r7,r11,16
	ctx.r7.s64 = r11.s64 + 16;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r3,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r3.u32);
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r7,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r7.u32);
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r6,r11,-1
	ctx.r6.s64 = r11.s64 + -1;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// blt cr6,0x824a72d4
	if (cr6.lt) goto loc_824A72D4;
loc_824A7318:
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r11.u32);
}

__attribute__((alias("__imp__sub_824A7328"))) PPC_WEAK_FUNC(sub_824A7328);
PPC_FUNC_IMPL(__imp__sub_824A7328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A732C"))) PPC_WEAK_FUNC(sub_824A732C);
PPC_FUNC_IMPL(__imp__sub_824A732C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A7330"))) PPC_WEAK_FUNC(sub_824A7330);
PPC_FUNC_IMPL(__imp__sub_824A7330) {
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
	// li r11,0
	r11.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r7,34
	ctx.r7.s64 = 34;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// addi r6,r6,4776
	ctx.r6.s64 = ctx.r6.s64 + 4776;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r3,r10,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824A7394"))) PPC_WEAK_FUNC(sub_824A7394);
PPC_FUNC_IMPL(__imp__sub_824A7394) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A7398"))) PPC_WEAK_FUNC(sub_824A7398);
PPC_FUNC_IMPL(__imp__sub_824A7398) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-3832
	ctx.r9.s64 = r11.s64 + -3832;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x824a73dc
	if (!cr6.gt) goto loc_824A73DC;
loc_824A73C4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x824a73c4
	if (cr6.gt) goto loc_824A73C4;
loc_824A73DC:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a73f4
	if (cr6.eq) goto loc_824A73F4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824A73F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A7404"))) PPC_WEAK_FUNC(sub_824A7404);
PPC_FUNC_IMPL(__imp__sub_824A7404) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A7408"))) PPC_WEAK_FUNC(sub_824A7408);
PPC_FUNC_IMPL(__imp__sub_824A7408) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-3820
	ctx.r9.s64 = ctx.r10.s64 + -3820;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// or r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 | ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A7460"))) PPC_WEAK_FUNC(sub_824A7460);
PPC_FUNC_IMPL(__imp__sub_824A7460) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A7464"))) PPC_WEAK_FUNC(sub_824A7464);
PPC_FUNC_IMPL(__imp__sub_824A7464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A7468"))) PPC_WEAK_FUNC(sub_824A7468);
PPC_FUNC_IMPL(__imp__sub_824A7468) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-3820
	ctx.r9.s64 = r11.s64 + -3820;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x824a74ac
	if (!cr6.gt) goto loc_824A74AC;
loc_824A7494:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x824a7494
	if (cr6.gt) goto loc_824A7494;
loc_824A74AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a7550
	sub_824A7550(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,-3832
	ctx.r10.s64 = r11.s64 + -3832;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x824a74e8
	if (!cr6.gt) goto loc_824A74E8;
loc_824A74D0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x824a74d0
	if (cr6.gt) goto loc_824A74D0;
loc_824A74E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A74F8"))) PPC_WEAK_FUNC(sub_824A74F8);
PPC_FUNC_IMPL(__imp__sub_824A74F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A74FC"))) PPC_WEAK_FUNC(sub_824A74FC);
PPC_FUNC_IMPL(__imp__sub_824A74FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A7500"))) PPC_WEAK_FUNC(sub_824A7500);
PPC_FUNC_IMPL(__imp__sub_824A7500) {
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
	// bl 0x824a7468
	sub_824A7468(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a7538
	if (cr6.eq) goto loc_824A7538;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824A7538:
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

__attribute__((alias("__imp__sub_824A754C"))) PPC_WEAK_FUNC(sub_824A754C);
PPC_FUNC_IMPL(__imp__sub_824A754C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A7550"))) PPC_WEAK_FUNC(sub_824A7550);
PPC_FUNC_IMPL(__imp__sub_824A7550) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// beq cr6,0x824a7634
	if (cr6.eq) goto loc_824A7634;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a75c4
	if (!cr6.eq) goto loc_824A75C4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// beq cr6,0x824a7634
	if (cr6.eq) goto loc_824A7634;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x824a7330
	sub_824A7330(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x824a7634
	goto loc_824A7634;
loc_824A75C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824a7408
	sub_824A7408(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x824a75f0
	if (!cr6.gt) goto loc_824A75F0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824A75F0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82408360
	sub_82408360(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bl 0x824a7468
	sub_824A7468(ctx, base);
loc_824A7634:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A7648"))) PPC_WEAK_FUNC(sub_824A7648);
PPC_FUNC_IMPL(__imp__sub_824A7648) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A764C"))) PPC_WEAK_FUNC(sub_824A764C);
PPC_FUNC_IMPL(__imp__sub_824A764C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A7650"))) PPC_WEAK_FUNC(sub_824A7650);
PPC_FUNC_IMPL(__imp__sub_824A7650) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,-3808
	ctx.r10.s64 = r11.s64 + -3808;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x824a76a0
	if (!cr6.gt) goto loc_824A76A0;
loc_824A7688:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x824a7688
	if (cr6.gt) goto loc_824A7688;
loc_824A76A0:
	// bl 0x824a7468
	sub_824A7468(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a76bc
	if (cr6.eq) goto loc_824A76BC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824A76BC:
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

__attribute__((alias("__imp__sub_824A76D0"))) PPC_WEAK_FUNC(sub_824A76D0);
PPC_FUNC_IMPL(__imp__sub_824A76D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A76D4"))) PPC_WEAK_FUNC(sub_824A76D4);
PPC_FUNC_IMPL(__imp__sub_824A76D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A76D8"))) PPC_WEAK_FUNC(sub_824A76D8);
PPC_FUNC_IMPL(__imp__sub_824A76D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// neg r10,r11
	ctx.r10.s64 = -r11.s64;
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~r11.u64;
	// rlwinm r3,r9,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A76EC"))) PPC_WEAK_FUNC(sub_824A76EC);
PPC_FUNC_IMPL(__imp__sub_824A76EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A76F0"))) PPC_WEAK_FUNC(sub_824A76F0);
PPC_FUNC_IMPL(__imp__sub_824A76F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A7700"))) PPC_WEAK_FUNC(sub_824A7700);
PPC_FUNC_IMPL(__imp__sub_824A7700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A770C"))) PPC_WEAK_FUNC(sub_824A770C);
PPC_FUNC_IMPL(__imp__sub_824A770C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A7710"))) PPC_WEAK_FUNC(sub_824A7710);
PPC_FUNC_IMPL(__imp__sub_824A7710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// subfc r7,r9,r8
	xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A7730"))) PPC_WEAK_FUNC(sub_824A7730);
PPC_FUNC_IMPL(__imp__sub_824A7730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A7740"))) PPC_WEAK_FUNC(sub_824A7740);
PPC_FUNC_IMPL(__imp__sub_824A7740) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x824a77f8
	if (!cr6.gt) goto loc_824A77F8;
	// mr r28,r11
	r28.u64 = r11.u64;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r31,0
	r31.s64 = 0;
	// lis r29,-31970
	r29.s64 = -2095185920;
	// addi r30,r11,21536
	r30.s64 = r11.s64 + 21536;
loc_824A7774:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x824a779c
	if (cr6.eq) goto loc_824A779C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a77a0
	if (!cr6.eq) goto loc_824A77A0;
loc_824A779C:
	// li r11,0
	r11.s64 = 0;
loc_824A77A0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x826e53d0
	sub_826E53D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a77ec
	if (cr6.eq) goto loc_824A77EC;
	// lwz r11,100(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a77ec
	if (cr6.eq) goto loc_824A77EC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824A77EC:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x824a7774
	if (!cr0.eq) goto loc_824A7774;
loc_824A77F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_824A77FC"))) PPC_WEAK_FUNC(sub_824A77FC);
PPC_FUNC_IMPL(__imp__sub_824A77FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_824A7800"))) PPC_WEAK_FUNC(sub_824A7800);
PPC_FUNC_IMPL(__imp__sub_824A7800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x824a7818
	if (!cr6.gt) goto loc_824A7818;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// blr 
	return;
loc_824A7818:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A7820"))) PPC_WEAK_FUNC(sub_824A7820);
PPC_FUNC_IMPL(__imp__sub_824A7820) {
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
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a799c
	if (cr6.eq) goto loc_824A799C;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,17676
	ctx.r4.s64 = ctx.r8.s64 + 17676;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a78c0
	if (cr6.eq) goto loc_824A78C0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14368(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824a78a4
	if (cr6.eq) goto loc_824A78A4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a78a8
	if (!cr6.eq) goto loc_824A78A8;
loc_824A78A4:
	// li r11,0
	r11.s64 = 0;
loc_824A78A8:
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// bl 0x825cb820
	sub_825CB820(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_824A78C0:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r11,220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a799c
	if (cr6.eq) goto loc_824A799C;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824a7914
	if (cr6.eq) goto loc_824A7914;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a7918
	if (!cr6.eq) goto loc_824A7918;
loc_824A7914:
	// li r11,0
	r11.s64 = 0;
loc_824A7918:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r31,88(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cb620
	sub_825CB620(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a799c
	if (cr6.eq) goto loc_824A799C;
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x825ca0c8
	sub_825CA0C8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824a799c
	if (cr6.eq) goto loc_824A799C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ca170
	sub_825CA170(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822b0328
	sub_822B0328(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a799c
	if (cr6.eq) goto loc_824A799C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_824A799C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824A79A0"))) PPC_WEAK_FUNC(sub_824A79A0);
PPC_FUNC_IMPL(__imp__sub_824A79A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824A79A4"))) PPC_WEAK_FUNC(sub_824A79A4);
PPC_FUNC_IMPL(__imp__sub_824A79A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A79A8"))) PPC_WEAK_FUNC(sub_824A79A8);
PPC_FUNC_IMPL(__imp__sub_824A79A8) {
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
	// li r29,0
	r29.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// bl 0x824a7820
	sub_824A7820(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824a7a74
	if (cr6.eq) goto loc_824A7A74;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a7a74
	if (cr6.eq) goto loc_824A7A74;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bgt cr6,0x824a7a74
	if (cr6.gt) goto loc_824A7A74;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242c518
	sub_8242C518(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r28,24
	ctx.r9.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824a7a74
	if (cr6.eq) goto loc_824A7A74;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a7a74
	if (cr6.eq) goto loc_824A7A74;
	// lbz r11,52(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a7a64
	if (cr6.eq) goto loc_824A7A64;
	// lbz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824a7a5c
	if (!cr6.eq) goto loc_824A7A5C;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x824a7a5c
	if (!cr6.eq) goto loc_824A7A5C;
	// li r11,1
	r11.s64 = 1;
	// stb r11,44(r30)
	PPC_STORE_U8(r30.u32 + 44, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_824A7A5C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a7a74
	if (!cr6.eq) goto loc_824A7A74;
loc_824A7A64:
	// lbz r11,44(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a7a74
	if (cr6.eq) goto loc_824A7A74;
	// stb r29,44(r30)
	PPC_STORE_U8(r30.u32 + 44, r29.u8);
loc_824A7A74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824A7A78"))) PPC_WEAK_FUNC(sub_824A7A78);
PPC_FUNC_IMPL(__imp__sub_824A7A78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824A7A7C"))) PPC_WEAK_FUNC(sub_824A7A7C);
PPC_FUNC_IMPL(__imp__sub_824A7A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A7A80"))) PPC_WEAK_FUNC(sub_824A7A80);
PPC_FUNC_IMPL(__imp__sub_824A7A80) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r11,-3648
	ctx.r9.s64 = r11.s64 + -3648;
	// addi r8,r10,23372
	ctx.r8.s64 = ctx.r10.s64 + 23372;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r6,20
	ctx.r6.s64 = 20;
	// or r5,r7,r3
	ctx.r5.u64 = ctx.r7.u64 | ctx.r3.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r5,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// stw r6,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r6.u32);
	// stw r4,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r4.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stb r30,44(r31)
	PPC_STORE_U8(r31.u32 + 44, r30.u8);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
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

__attribute__((alias("__imp__sub_824A7B1C"))) PPC_WEAK_FUNC(sub_824A7B1C);
PPC_FUNC_IMPL(__imp__sub_824A7B1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A7B20"))) PPC_WEAK_FUNC(sub_824A7B20);
PPC_FUNC_IMPL(__imp__sub_824A7B20) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,76
	ctx.r3.s64 = ctx.r3.s64 + 76;
	// addi r10,r11,-3648
	ctx.r10.s64 = r11.s64 + -3648;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x822fdff8
	sub_822FDFF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A7B68"))) PPC_WEAK_FUNC(sub_824A7B68);
PPC_FUNC_IMPL(__imp__sub_824A7B68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A7B6C"))) PPC_WEAK_FUNC(sub_824A7B6C);
PPC_FUNC_IMPL(__imp__sub_824A7B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A7B70"))) PPC_WEAK_FUNC(sub_824A7B70);
PPC_FUNC_IMPL(__imp__sub_824A7B70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31970
	r27.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824a7ba0
	if (cr6.eq) goto loc_824A7BA0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a7ba4
	if (!cr6.eq) goto loc_824A7BA4;
loc_824A7BA0:
	// li r11,0
	r11.s64 = 0;
loc_824A7BA4:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,18144(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18144);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,48
	ctx.r4.s64 = r28.s64 + 48;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a7bf8
	if (!cr6.eq) goto loc_824A7BF8;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a7bf8
	if (!cr6.eq) goto loc_824A7BF8;
	// lwz r11,18144(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18144);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824A7BF8:
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824a7c14
	if (cr6.eq) goto loc_824A7C14;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a7c18
	if (!cr6.eq) goto loc_824A7C18;
loc_824A7C14:
	// li r11,0
	r11.s64 = 0;
loc_824A7C18:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,18152(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18152);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,76
	ctx.r4.s64 = r28.s64 + 76;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a7c6c
	if (!cr6.eq) goto loc_824A7C6C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a7c6c
	if (!cr6.eq) goto loc_824A7C6C;
	// lwz r11,18152(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18152);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824A7C6C:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r11,-26416(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -26416);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x824a7c98
	if (cr6.eq) goto loc_824A7C98;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a7c9c
	if (!cr6.eq) goto loc_824A7C9C;
loc_824A7C98:
	// li r11,0
	r11.s64 = 0;
loc_824A7C9C:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a7ce8
	if (cr6.eq) goto loc_824A7CE8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a7ce8
	if (!cr6.eq) goto loc_824A7CE8;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824A7CE8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_824A7CEC"))) PPC_WEAK_FUNC(sub_824A7CEC);
PPC_FUNC_IMPL(__imp__sub_824A7CEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824A7CF0"))) PPC_WEAK_FUNC(sub_824A7CF0);
PPC_FUNC_IMPL(__imp__sub_824A7CF0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bl 0x824a7820
	sub_824A7820(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a7f20
	if (cr6.eq) goto loc_824A7F20;
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x824a7f20
	if (cr6.eq) goto loc_824A7F20;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x824a7ea8
	if (!cr6.eq) goto loc_824A7EA8;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x824a7ea8
	if (!cr6.gt) goto loc_824A7EA8;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lis r29,-31970
	r29.s64 = -2095185920;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x824a7d74
	if (cr6.eq) goto loc_824A7D74;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a7d78
	if (!cr6.eq) goto loc_824A7D78;
loc_824A7D74:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_824A7D78:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x826e53d0
	sub_826E53D0(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x822d7ae0
	sub_822D7AE0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a7db8
	if (cr6.eq) goto loc_824A7DB8;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824A7DB8:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lbz r10,232(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 232);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824a7f20
	if (cr6.eq) goto loc_824A7F20;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825ca0d8
	sub_825CA0D8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a7f20
	if (cr6.eq) goto loc_824A7F20;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x824a7df4
	if (!cr6.gt) goto loc_824A7DF4;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x824a7df8
	goto loc_824A7DF8;
loc_824A7DF4:
	// li r11,-1
	r11.s64 = -1;
loc_824A7DF8:
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824a7e18
	if (cr6.eq) goto loc_824A7E18;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a7e1c
	if (!cr6.eq) goto loc_824A7E1C;
loc_824A7E18:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_824A7E1C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x826e53d0
	sub_826E53D0(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a7f20
	if (cr6.eq) goto loc_824A7F20;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x822d7ae0
	sub_822D7AE0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a7f20
	if (cr6.eq) goto loc_824A7F20;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// bl 0x824a8558
	sub_824A8558(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a7f20
	if (cr6.eq) goto loc_824A7F20;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825ca380
	sub_825CA380(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r8.u8);
	// lwz r11,19632(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19632);
	// lwz r10,18436(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18436);
	// b 0x824a7f08
	goto loc_824A7F08;
loc_824A7EA8:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lbz r10,232(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 232);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824a7f20
	if (cr6.eq) goto loc_824A7F20;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825ca0d8
	sub_825CA0D8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a7f20
	if (cr6.eq) goto loc_824A7F20;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// bl 0x824a8558
	sub_824A8558(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a7f20
	if (cr6.eq) goto loc_824A7F20;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825ca380
	sub_825CA380(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, r31.u8);
	// lwz r11,19632(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19632);
	// lwz r10,18436(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18436);
loc_824A7F08:
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lwz r3,100(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// bl 0x824a8618
	sub_824A8618(ctx, base);
loc_824A7F20:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_824A7F24"))) PPC_WEAK_FUNC(sub_824A7F24);
PPC_FUNC_IMPL(__imp__sub_824A7F24) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824A7F28"))) PPC_WEAK_FUNC(sub_824A7F28);
PPC_FUNC_IMPL(__imp__sub_824A7F28) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// ble cr6,0x824a7f74
	if (!cr6.gt) goto loc_824A7F74;
loc_824A7F5C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bgt cr6,0x824a7f5c
	if (cr6.gt) goto loc_824A7F5C;
loc_824A7F74:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a7fb8
	if (cr6.eq) goto loc_824A7FB8;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,23468
	ctx.r4.s64 = ctx.r8.s64 + 23468;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a7fb8
	if (cr6.eq) goto loc_824A7FB8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824A7FB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a7cf0
	sub_824A7CF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A7FD0"))) PPC_WEAK_FUNC(sub_824A7FD0);
PPC_FUNC_IMPL(__imp__sub_824A7FD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A7FD4"))) PPC_WEAK_FUNC(sub_824A7FD4);
PPC_FUNC_IMPL(__imp__sub_824A7FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A7FD8"))) PPC_WEAK_FUNC(sub_824A7FD8);
PPC_FUNC_IMPL(__imp__sub_824A7FD8) {
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
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x824a8018
	if (cr6.lt) goto loc_824A8018;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// ble cr6,0x824a801c
	if (!cr6.gt) goto loc_824A801C;
loc_824A8018:
	// li r11,1
	r11.s64 = 1;
loc_824A801C:
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x824a8098
	if (cr6.eq) goto loc_824A8098;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824a8048
	if (cr6.eq) goto loc_824A8048;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a804c
	if (!cr6.eq) goto loc_824A804C;
loc_824A8048:
	// li r11,0
	r11.s64 = 0;
loc_824A804C:
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x826e53d0
	sub_826E53D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x824a8084
	if (!cr6.gt) goto loc_824A8084;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_824A8084:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x824a8098
	if (!cr6.eq) goto loc_824A8098;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a7cf0
	sub_824A7CF0(ctx, base);
loc_824A8098:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_824A80B0"))) PPC_WEAK_FUNC(sub_824A80B0);
PPC_FUNC_IMPL(__imp__sub_824A80B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A80B4"))) PPC_WEAK_FUNC(sub_824A80B4);
PPC_FUNC_IMPL(__imp__sub_824A80B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A80B8"))) PPC_WEAK_FUNC(sub_824A80B8);
PPC_FUNC_IMPL(__imp__sub_824A80B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// lis r31,-31970
	r31.s64 = -2095185920;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r30,r11,21536
	r30.s64 = r11.s64 + 21536;
	// ble cr6,0x824a818c
	if (!cr6.gt) goto loc_824A818C;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,-14368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// beq cr6,0x824a8110
	if (cr6.eq) goto loc_824A8110;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a8114
	if (!cr6.eq) goto loc_824A8114;
loc_824A8110:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_824A8114:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x826e53d0
	sub_826E53D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a8180
	if (cr6.eq) goto loc_824A8180;
	// lwz r11,100(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x824a818c
	if (!cr6.eq) goto loc_824A818C;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x824a818c
	if (!cr6.eq) goto loc_824A818C;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,36(r28)
	PPC_STORE_U32(r28.u32 + 36, r11.u32);
	// b 0x824a8184
	goto loc_824A8184;
loc_824A8180:
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 12);
loc_824A8184:
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// bl 0x82580f78
	sub_82580F78(ctx, base);
loc_824A818C:
	// lwz r3,-14368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824a81a8
	if (cr6.eq) goto loc_824A81A8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a81ac
	if (!cr6.eq) goto loc_824A81AC;
loc_824A81A8:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_824A81AC:
	// addi r29,r28,36
	r29.s64 = r28.s64 + 36;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826e53d0
	sub_826E53D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a82bc
	if (cr6.eq) goto loc_824A82BC;
	// lwz r11,100(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x824a82c4
	if (!cr6.eq) goto loc_824A82C4;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// li r30,-1
	r30.s64 = -1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x824a8228
	if (cr6.eq) goto loc_824A8228;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x824a8228
	if (cr6.eq) goto loc_824A8228;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x824a8228
	if (cr6.eq) goto loc_824A8228;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x824a8290
	if (!cr6.eq) goto loc_824A8290;
loc_824A8228:
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a7cf0
	sub_824A7CF0(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// bl 0x824a7820
	sub_824A7820(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824a8290
	if (cr6.eq) goto loc_824A8290;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a8290
	if (cr6.eq) goto loc_824A8290;
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// bl 0x822b0e10
	sub_822B0E10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a8290
	if (cr6.eq) goto loc_824A8290;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8245eb20
	sub_8245EB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a8290
	if (cr6.eq) goto loc_824A8290;
	// lwz r11,288(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, r11.u32);
loc_824A8290:
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x824a82c4
	if (!cr6.eq) goto loc_824A82C4;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x824a82c4
	if (cr6.eq) goto loc_824A82C4;
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a7cf0
	sub_824A7CF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_824A82BC:
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_824A82C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_824A82C8"))) PPC_WEAK_FUNC(sub_824A82C8);
PPC_FUNC_IMPL(__imp__sub_824A82C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_824A82CC"))) PPC_WEAK_FUNC(sub_824A82CC);
PPC_FUNC_IMPL(__imp__sub_824A82CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A82D0"))) PPC_WEAK_FUNC(sub_824A82D0);
PPC_FUNC_IMPL(__imp__sub_824A82D0) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824a8308
	if (cr6.eq) goto loc_824A8308;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a830c
	if (!cr6.eq) goto loc_824A830C;
loc_824A8308:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_824A830C:
	// addi r31,r30,36
	r31.s64 = r30.s64 + 36;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826e53d0
	sub_826E53D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a83d0
	if (cr6.eq) goto loc_824A83D0;
	// lwz r11,100(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,21536
	ctx.r4.s64 = ctx.r9.s64 + 21536;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r7,64(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x824a83d0
	if (!cr6.eq) goto loc_824A83D0;
	// li r11,-1
	r11.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x824a7cf0
	sub_824A7CF0(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// bl 0x824a7820
	sub_824A7820(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824a83d0
	if (cr6.eq) goto loc_824A83D0;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a83d0
	if (cr6.eq) goto loc_824A83D0;
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// bl 0x822b0e10
	sub_822B0E10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a83d0
	if (cr6.eq) goto loc_824A83D0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8245eb20
	sub_8245EB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a83d0
	if (cr6.eq) goto loc_824A83D0;
	// lwz r11,288(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, r11.u32);
loc_824A83D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824A83D4"))) PPC_WEAK_FUNC(sub_824A83D4);
PPC_FUNC_IMPL(__imp__sub_824A83D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824A83D8"))) PPC_WEAK_FUNC(sub_824A83D8);
PPC_FUNC_IMPL(__imp__sub_824A83D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31970
	r29.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32181
	r11.s64 = -2109014016;
	// addi r28,r11,-32584
	r28.s64 = r11.s64 + -32584;
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824a8410
	if (cr6.eq) goto loc_824A8410;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a8414
	if (!cr6.eq) goto loc_824A8414;
loc_824A8410:
	// li r10,0
	ctx.r10.s64 = 0;
loc_824A8414:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r27,12(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r30,r11,-3784
	r30.s64 = r11.s64 + -3784;
	// addi r3,r10,-7944
	ctx.r3.s64 = ctx.r10.s64 + -7944;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,18144(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18144);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lis r11,-32181
	r11.s64 = -2109014016;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-32048
	r28.s64 = r11.s64 + -32048;
	// beq cr6,0x824a8488
	if (cr6.eq) goto loc_824A8488;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a848c
	if (!cr6.eq) goto loc_824A848C;
loc_824A8488:
	// li r11,0
	r11.s64 = 0;
loc_824A848C:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,-8036
	ctx.r3.s64 = ctx.r10.s64 + -8036;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,18152(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18152);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,76
	ctx.r4.s64 = r31.s64 + 76;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r11,-26412(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26412);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x824a8500
	if (cr6.eq) goto loc_824A8500;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a8504
	if (!cr6.eq) goto loc_824A8504;
loc_824A8500:
	// li r11,0
	r11.s64 = 0;
loc_824A8504:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a8550
	if (cr6.eq) goto loc_824A8550;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a8550
	if (!cr6.eq) goto loc_824A8550;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824A8550:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_824A8554"))) PPC_WEAK_FUNC(sub_824A8554);
PPC_FUNC_IMPL(__imp__sub_824A8554) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824A8558"))) PPC_WEAK_FUNC(sub_824A8558);
PPC_FUNC_IMPL(__imp__sub_824A8558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,23468
	ctx.r4.s64 = ctx.r9.s64 + 23468;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// addic r8,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// subfe r3,r8,r3
	temp.u8 = (~ctx.r8.u32 + ctx.r3.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A85A4"))) PPC_WEAK_FUNC(sub_824A85A4);
PPC_FUNC_IMPL(__imp__sub_824A85A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A85A8"))) PPC_WEAK_FUNC(sub_824A85A8);
PPC_FUNC_IMPL(__imp__sub_824A85A8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,76
	ctx.r3.s64 = ctx.r3.s64 + 76;
	// addi r10,r11,-3648
	ctx.r10.s64 = r11.s64 + -3648;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x822fdff8
	sub_822FDFF8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824a8600
	if (cr6.eq) goto loc_824A8600;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824A8600:
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

__attribute__((alias("__imp__sub_824A8614"))) PPC_WEAK_FUNC(sub_824A8614);
PPC_FUNC_IMPL(__imp__sub_824A8614) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A8618"))) PPC_WEAK_FUNC(sub_824A8618);
PPC_FUNC_IMPL(__imp__sub_824A8618) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a868c
	if (cr6.eq) goto loc_824A868C;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-3640
	ctx.r8.s64 = ctx.r9.s64 + -3640;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r6,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r6.u32);
	// lbz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 8);
	// stb r5,24(r11)
	PPC_STORE_U8(r11.u32 + 24, ctx.r5.u8);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r4,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r4.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r10.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_824A868C:
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

__attribute__((alias("__imp__sub_824A86A0"))) PPC_WEAK_FUNC(sub_824A86A0);
PPC_FUNC_IMPL(__imp__sub_824A86A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A86A4"))) PPC_WEAK_FUNC(sub_824A86A4);
PPC_FUNC_IMPL(__imp__sub_824A86A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A86A8"))) PPC_WEAK_FUNC(sub_824A86A8);
PPC_FUNC_IMPL(__imp__sub_824A86A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,3920
	ctx.r9.s64 = r11.s64 + 3920;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A86C4"))) PPC_WEAK_FUNC(sub_824A86C4);
PPC_FUNC_IMPL(__imp__sub_824A86C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A86C8"))) PPC_WEAK_FUNC(sub_824A86C8);
PPC_FUNC_IMPL(__imp__sub_824A86C8) {
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
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3432
	ctx.r7.s64 = ctx.r10.s64 + 3432;
	// addi r6,r9,-3612
	ctx.r6.s64 = ctx.r9.s64 + -3612;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r5,r8,-3628
	ctx.r5.s64 = ctx.r8.s64 + -3628;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A8734"))) PPC_WEAK_FUNC(sub_824A8734);
PPC_FUNC_IMPL(__imp__sub_824A8734) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A8738"))) PPC_WEAK_FUNC(sub_824A8738);
PPC_FUNC_IMPL(__imp__sub_824A8738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eaaf4
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,44(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r30,80
	r29.s64 = r30.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r28,40(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// lbz r11,140(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 140);
	// lfs f0,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 64);
	f0.f64 = double(temp.f32);
	// lfs f13,68(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lfs f12,72(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,76(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fadds f30,f0,f10
	f30.f64 = double(float(f0.f64 + ctx.f10.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fadds f29,f13,f9
	f29.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// lfs f7,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// fadds f28,f12,f8
	f28.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// fadds f27,f11,f7
	f27.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// bne cr6,0x824a8948
	if (!cr6.eq) goto loc_824A8948;
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f11,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f30,176(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f29,180(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f28,184(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// bl 0x82339888
	sub_82339888(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,16(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f31,4492(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4492);
	f31.f64 = double(temp.f32);
	// fmuls f1,f10,f31
	ctx.f1.f64 = double(float(ctx.f10.f64 * f31.f64));
	// bl 0x822b3ef0
	sub_822B3EF0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b40c8
	sub_822B40C8(ctx, base);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f9,20(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f1,f9,f31
	ctx.f1.f64 = double(float(ctx.f9.f64 * f31.f64));
	// lfs f7,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f5,92(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822b3ef0
	sub_822B3EF0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b40c8
	sub_822B40C8(ctx, base);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f4,24(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f4,f31
	ctx.f1.f64 = double(float(ctx.f4.f64 * f31.f64));
	// lfs f2,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822b3ef0
	sub_822B3EF0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b40c8
	sub_822B40C8(ctx, base);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lbz r4,216(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 216);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bne cr6,0x824a88f0
	if (!cr6.eq) goto loc_824A88F0;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lbz r10,141(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 141);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x824a8900
	if (cr6.eq) goto loc_824A8900;
loc_824A88F0:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lbz r10,13(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 13);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x824a8934
	if (!cr6.eq) goto loc_824A8934;
loc_824A8900:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,-25596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25596);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b3ef0
	sub_822B3EF0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b40c8
	sub_822B40C8(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
loc_824A8934:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// stfs f11,32(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
loc_824A8948:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stfs f30,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f29,8(r11)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f28,12(r11)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f27,16(r11)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eab40
}

__attribute__((alias("__imp__sub_824A8968"))) PPC_WEAK_FUNC(sub_824A8968);
PPC_FUNC_IMPL(__imp__sub_824A8968) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824A896C"))) PPC_WEAK_FUNC(sub_824A896C);
PPC_FUNC_IMPL(__imp__sub_824A896C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A8970"))) PPC_WEAK_FUNC(sub_824A8970);
PPC_FUNC_IMPL(__imp__sub_824A8970) {
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
	// bl 0x824a8738
	sub_824A8738(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x824b4ce0
	sub_824B4CE0(ctx, base);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,18232
	ctx.r4.s64 = ctx.r9.s64 + 18232;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a89d8
	if (cr6.eq) goto loc_824A89D8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r5,r11,4
	ctx.r5.s64 = r11.s64 + 4;
	// addi r4,r11,20
	ctx.r4.s64 = r11.s64 + 20;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824A89D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A89E8"))) PPC_WEAK_FUNC(sub_824A89E8);
PPC_FUNC_IMPL(__imp__sub_824A89E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A89EC"))) PPC_WEAK_FUNC(sub_824A89EC);
PPC_FUNC_IMPL(__imp__sub_824A89EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A89F0"))) PPC_WEAK_FUNC(sub_824A89F0);
PPC_FUNC_IMPL(__imp__sub_824A89F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x824a8738
	sub_824A8738(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A89F4"))) PPC_WEAK_FUNC(sub_824A89F4);
PPC_FUNC_IMPL(__imp__sub_824A89F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A89F8"))) PPC_WEAK_FUNC(sub_824A89F8);
PPC_FUNC_IMPL(__imp__sub_824A89F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A8A08"))) PPC_WEAK_FUNC(sub_824A8A08);
PPC_FUNC_IMPL(__imp__sub_824A8A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A8A18"))) PPC_WEAK_FUNC(sub_824A8A18);
PPC_FUNC_IMPL(__imp__sub_824A8A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,3920
	ctx.r9.s64 = r11.s64 + 3920;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A8A34"))) PPC_WEAK_FUNC(sub_824A8A34);
PPC_FUNC_IMPL(__imp__sub_824A8A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A8A38"))) PPC_WEAK_FUNC(sub_824A8A38);
PPC_FUNC_IMPL(__imp__sub_824A8A38) {
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
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3432
	ctx.r7.s64 = ctx.r10.s64 + 3432;
	// addi r6,r9,-3548
	ctx.r6.s64 = ctx.r9.s64 + -3548;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r5,r8,-3564
	ctx.r5.s64 = ctx.r8.s64 + -3564;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A8AA4"))) PPC_WEAK_FUNC(sub_824A8AA4);
PPC_FUNC_IMPL(__imp__sub_824A8AA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A8AA8"))) PPC_WEAK_FUNC(sub_824A8AA8);
PPC_FUNC_IMPL(__imp__sub_824A8AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stfs f0,116(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 116, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A8AC8"))) PPC_WEAK_FUNC(sub_824A8AC8);
PPC_FUNC_IMPL(__imp__sub_824A8AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A8AD8"))) PPC_WEAK_FUNC(sub_824A8AD8);
PPC_FUNC_IMPL(__imp__sub_824A8AD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A8ADC"))) PPC_WEAK_FUNC(sub_824A8ADC);
PPC_FUNC_IMPL(__imp__sub_824A8ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A8AE0"))) PPC_WEAK_FUNC(sub_824A8AE0);
PPC_FUNC_IMPL(__imp__sub_824A8AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,3920
	ctx.r9.s64 = r11.s64 + 3920;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A8AFC"))) PPC_WEAK_FUNC(sub_824A8AFC);
PPC_FUNC_IMPL(__imp__sub_824A8AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A8B00"))) PPC_WEAK_FUNC(sub_824A8B00);
PPC_FUNC_IMPL(__imp__sub_824A8B00) {
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
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3432
	ctx.r7.s64 = ctx.r10.s64 + 3432;
	// addi r6,r9,-3476
	ctx.r6.s64 = ctx.r9.s64 + -3476;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r5,r8,-3492
	ctx.r5.s64 = ctx.r8.s64 + -3492;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// stb r11,60(r31)
	PPC_STORE_U8(r31.u32 + 60, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A8B70"))) PPC_WEAK_FUNC(sub_824A8B70);
PPC_FUNC_IMPL(__imp__sub_824A8B70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A8B74"))) PPC_WEAK_FUNC(sub_824A8B74);
PPC_FUNC_IMPL(__imp__sub_824A8B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A8B78"))) PPC_WEAK_FUNC(sub_824A8B78);
PPC_FUNC_IMPL(__imp__sub_824A8B78) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r10,92(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// lfs f13,10696(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10696);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,100(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 100);
	f0.f64 = double(temp.f32);
	// lfs f12,104(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,116(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - f0.f64));
	// lfs f7,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// lfs f5,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fmuls f3,f8,f8
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f2,f6,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fmadds f1,f4,f4,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fsqrts f0,f1
	f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// fsubs f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 - f0.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x824a8be0
	if (!cr6.lt) goto loc_824A8BE0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_824A8BE0:
	// stfs f0,116(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 116, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_824A8BE8"))) PPC_WEAK_FUNC(sub_824A8BE8);
PPC_FUNC_IMPL(__imp__sub_824A8BE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A8BEC"))) PPC_WEAK_FUNC(sub_824A8BEC);
PPC_FUNC_IMPL(__imp__sub_824A8BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A8BF0"))) PPC_WEAK_FUNC(sub_824A8BF0);
PPC_FUNC_IMPL(__imp__sub_824A8BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
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
	// bl 0x828eaae0
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// ble cr6,0x824a8cd0
	if (!cr6.gt) goto loc_824A8CD0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r9,r9,88
	ctx.r9.s64 = ctx.r9.s64 + 88;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f0,96(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 96);
	f0.f64 = double(temp.f32);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lfs f13,100(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,108(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lfs f10,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ble cr6,0x824a8ca4
	if (!cr6.gt) goto loc_824A8CA4;
loc_824A8C8C:
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x824a8c8c
	if (cr6.gt) goto loc_824A8C8C;
loc_824A8CA4:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
	// bl 0x822c2fd8
	sub_822C2FD8(ctx, base);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
	// bl 0x822c2fd8
	sub_822C2FD8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,60(r31)
	PPC_STORE_U8(r31.u32 + 60, r11.u8);
	// b 0x824a8f40
	goto loc_824A8F40;
loc_824A8CD0:
	// lbz r11,60(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a8f40
	if (!cr6.eq) goto loc_824A8F40;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,-10212
	ctx.r4.s64 = ctx.r10.s64 + -10212;
	// addi r5,r11,144
	ctx.r5.s64 = r11.s64 + 144;
	// lfs f31,96(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 96);
	f31.f64 = double(temp.f32);
	// lfs f30,100(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 100);
	f30.f64 = double(temp.f32);
	// lfs f29,104(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 104);
	f29.f64 = double(temp.f32);
	// lfs f28,108(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 108);
	f28.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f29,104(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f28,108(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f0.f64 = double(temp.f32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(f0.f64 * f0.f64));
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r11,88
	r11.s64 = r11.s64 + 88;
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// stfs f29,88(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f11,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f11.f64 = double(temp.f32);
	// stfs f28,92(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 / ctx.f8.f64));
	// fmuls f25,f7,f13
	f25.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f24,f7,f11
	f24.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f23,f7,f0
	f23.f64 = double(float(ctx.f7.f64 * f0.f64));
	// ble cr6,0x824a8d84
	if (!cr6.gt) goto loc_824A8D84;
loc_824A8D6C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bgt cr6,0x824a8d6c
	if (cr6.gt) goto loc_824A8D6C;
loc_824A8D84:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
	// bl 0x822c2fd8
	sub_822C2FD8(ctx, base);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
	// bl 0x822c2fd8
	sub_822C2FD8(ctx, base);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lfs f22,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	f22.f64 = double(temp.f32);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r30,r11,-24804
	r30.s64 = r11.s64 + -24804;
	// lfs f10,144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// fmuls f9,f24,f10
	ctx.f9.f64 = double(float(f24.f64 * ctx.f10.f64));
	// lfs f0,-24804(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24804);
	f0.f64 = double(temp.f32);
	// fmuls f8,f25,f10
	ctx.f8.f64 = double(float(f25.f64 * ctx.f10.f64));
	// lfs f27,4580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4580);
	f27.f64 = double(temp.f32);
	// fmuls f7,f23,f10
	ctx.f7.f64 = double(float(f23.f64 * ctx.f10.f64));
	// lfs f26,4028(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4028);
	f26.f64 = double(temp.f32);
	// fmuls f6,f10,f22
	ctx.f6.f64 = double(float(ctx.f10.f64 * f22.f64));
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fadds f30,f9,f30
	f30.f64 = double(float(ctx.f9.f64 + f30.f64));
	// fadds f31,f8,f31
	f31.f64 = double(float(ctx.f8.f64 + f31.f64));
	// stfs f31,160(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f29,f7,f29
	f29.f64 = double(float(ctx.f7.f64 + f29.f64));
	// stfs f29,168(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fadds f28,f6,f28
	f28.f64 = double(float(ctx.f6.f64 + f28.f64));
	// stfs f28,172(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f28,156(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fadds f5,f30,f27
	ctx.f5.f64 = double(float(f30.f64 + f27.f64));
	// stfs f5,164(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fsubs f4,f30,f26
	ctx.f4.f64 = double(float(f30.f64 - f26.f64));
	// stfs f4,148(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r3,288(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 288);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x824ba110
	sub_824BA110(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a8f20
	if (cr6.eq) goto loc_824A8F20;
loc_824A8E54:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f0.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// lfs f11,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lfs f10,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f9,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f24,f6
	ctx.f5.f64 = double(float(f24.f64 * ctx.f6.f64));
	// fadds f30,f10,f5
	f30.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f4,f25,f6
	ctx.f4.f64 = double(float(f25.f64 * ctx.f6.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f3,f23,f6
	ctx.f3.f64 = double(float(f23.f64 * ctx.f6.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f2,f6,f22
	ctx.f2.f64 = double(float(ctx.f6.f64 * f22.f64));
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fadds f1,f30,f27
	ctx.f1.f64 = double(float(f30.f64 + f27.f64));
	// stfs f1,164(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f31,f9,f4
	f31.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// stfs f31,160(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f29,f8,f3
	f29.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// stfs f29,168(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fadds f28,f7,f2
	f28.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// stfs f28,172(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fsubs f0,f30,f26
	f0.f64 = double(float(f30.f64 - f26.f64));
	// stfs f0,148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f28,156(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lwz r8,288(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 288);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x824ba110
	sub_824BA110(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a8e54
	if (!cr6.eq) goto loc_824A8E54;
loc_824A8F20:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// stfs f31,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f30,20(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f29,24(r11)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stfs f28,28(r11)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// stb r10,60(r31)
	PPC_STORE_U8(r31.u32 + 60, ctx.r10.u8);
loc_824A8F40:
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x828eab2c
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A8F64"))) PPC_WEAK_FUNC(sub_824A8F64);
PPC_FUNC_IMPL(__imp__sub_824A8F64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A8F68"))) PPC_WEAK_FUNC(sub_824A8F68);
PPC_FUNC_IMPL(__imp__sub_824A8F68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// bl 0x824a8bf0
	sub_824A8BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a8b78
	sub_824A8B78(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824a9034
	if (cr6.eq) goto loc_824A9034;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x824a8fd8
	if (!cr6.gt) goto loc_824A8FD8;
loc_824A8FC0:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bgt cr6,0x824a8fc0
	if (cr6.gt) goto loc_824A8FC0;
loc_824A8FD8:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824a8ff8
	if (cr6.eq) goto loc_824A8FF8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a8ffc
	if (!cr6.eq) goto loc_824A8FFC;
loc_824A8FF8:
	// li r11,0
	r11.s64 = 0;
loc_824A8FFC:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,84(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// lwz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,220(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 220);
	// bl 0x822b2d40
	sub_822B2D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822b2e20
	sub_822B2E20(ctx, base);
	// b 0x824a91d8
	goto loc_824A91D8;
loc_824A9034:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r8,-24804
	ctx.r5.s64 = ctx.r8.s64 + -24804;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lfs f31,-3504(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3504);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f0.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f11,16(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f9,96(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,100(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,104(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,108(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f3,f11,f10
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f5,f13,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f4,f0,f9
	ctx.f4.f64 = double(float(f0.f64 - ctx.f9.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f3,92(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x824a91d8
	if (!cr6.eq) goto loc_824A91D8;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r9,r11,-10228
	ctx.r9.s64 = r11.s64 + -10228;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r10,-10196
	ctx.r8.s64 = ctx.r10.s64 + -10196;
	// lfs f3,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f3.f64 = double(temp.f32);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// stfs f3,140(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f9,-10228(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -10228);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmuls f2,f12,f9
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f7,-10196(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10196);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f30,f0,f11
	f30.f64 = double(float(f0.f64 * ctx.f11.f64));
	// fmuls f29,f13,f10
	f29.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f8,21036(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21036);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f8,124(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f6,148(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f5,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmsubs f11,f13,f11,f2
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f2.f64));
	// lfs f4,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// stfs f5,152(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmsubs f10,f12,f10,f30
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - f30.f64));
	// stfs f4,156(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmsubs f9,f0,f9,f29
	ctx.f9.f64 = double(float(f0.f64 * ctx.f9.f64 - f29.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fmsubs f5,f0,f10,f8
	ctx.f5.f64 = double(float(f0.f64 * ctx.f10.f64 - ctx.f8.f64));
	// stfs f5,116(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmsubs f4,f9,f13,f7
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f7.f64));
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmsubs f3,f11,f12,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x822b3280
	sub_822B3280(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// fmuls f2,f0,f0
	ctx.f2.f64 = double(float(f0.f64 * f0.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f10,-25600(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -25600);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f1,f13,f13,f2
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fmadds f9,f12,f12,f1
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f1.f64));
	// fmadds f8,f11,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fdivs f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 / ctx.f7.f64));
	// fmuls f5,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// stfs f5,20(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// fmuls f4,f0,f6
	ctx.f4.f64 = double(float(f0.f64 * ctx.f6.f64));
	// stfs f4,24(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// fmuls f3,f12,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// stfs f3,28(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// fmuls f2,f11,f6
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// stfs f2,32(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
loc_824A91D8:
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A9200"))) PPC_WEAK_FUNC(sub_824A9200);
PPC_FUNC_IMPL(__imp__sub_824A9200) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9204"))) PPC_WEAK_FUNC(sub_824A9204);
PPC_FUNC_IMPL(__imp__sub_824A9204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A9208"))) PPC_WEAK_FUNC(sub_824A9208);
PPC_FUNC_IMPL(__imp__sub_824A9208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9220"))) PPC_WEAK_FUNC(sub_824A9220);
PPC_FUNC_IMPL(__imp__sub_824A9220) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9224"))) PPC_WEAK_FUNC(sub_824A9224);
PPC_FUNC_IMPL(__imp__sub_824A9224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A9228"))) PPC_WEAK_FUNC(sub_824A9228);
PPC_FUNC_IMPL(__imp__sub_824A9228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,3920
	ctx.r9.s64 = r11.s64 + 3920;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A9244"))) PPC_WEAK_FUNC(sub_824A9244);
PPC_FUNC_IMPL(__imp__sub_824A9244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A9248"))) PPC_WEAK_FUNC(sub_824A9248);
PPC_FUNC_IMPL(__imp__sub_824A9248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lbz r8,124(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 124);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f0,96(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 96);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f13,100(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f12,104(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f11,108(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stb r8,124(r9)
	PPC_STORE_U8(ctx.r9.u32 + 124, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9298"))) PPC_WEAK_FUNC(sub_824A9298);
PPC_FUNC_IMPL(__imp__sub_824A9298) {
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
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3432
	ctx.r7.s64 = ctx.r10.s64 + 3432;
	// addi r6,r9,-3408
	ctx.r6.s64 = ctx.r9.s64 + -3408;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r5,r8,-3424
	ctx.r5.s64 = ctx.r8.s64 + -3424;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A9304"))) PPC_WEAK_FUNC(sub_824A9304);
PPC_FUNC_IMPL(__imp__sub_824A9304) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9308"))) PPC_WEAK_FUNC(sub_824A9308);
PPC_FUNC_IMPL(__imp__sub_824A9308) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r28,-31970
	r28.s64 = -2095185920;
	// li r29,0
	r29.s64 = 0;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// ble cr6,0x824a954c
	if (!cr6.gt) goto loc_824A954C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r11,r11,112
	r11.s64 = r11.s64 + 112;
	// lwz r31,0(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f0,-13388(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -13388);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// lfs f13,72(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fmr f4,f7
	ctx.f4.f64 = ctx.f7.f64;
	// lfs f12,76(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f2,f8,f8,f9
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f9.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f3,108(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f1,f7,f7,f2
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fsqrts f9,f1
	ctx.f9.f64 = double(float(sqrt(ctx.f1.f64)));
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, f0.f64);
	// bge cr6,0x824a93dc
	if (!cr6.lt) goto loc_824A93DC;
	// fneg f0,f13
	f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fneg f13,f12
	ctx.f13.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fneg f12,f11
	ctx.f12.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fneg f11,f10
	ctx.f11.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_824A93DC:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r27,r11,-24788
	r27.s64 = r11.s64 + -24788;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f31,-3432(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3432);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,-3364(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3364);
	f0.f64 = double(temp.f32);
	// fmadds f6,f12,f8,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmadds f5,f11,f7,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fcmpu cr6,f5,f0
	cr6.compare(ctx.f5.f64, f0.f64);
	// bge cr6,0x824a954c
	if (!cr6.lt) goto loc_824A954C;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,3
	ctx.r9.s64 = 3;
	// lfs f0,4580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4580);
	f0.f64 = double(temp.f32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, f0.f64);
	// ble cr6,0x824a94b0
	if (!cr6.gt) goto loc_824A94B0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfs f0,3648(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3648);
	f0.f64 = double(temp.f32);
	// fmuls f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fmuls f4,f12,f0
	ctx.f4.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fadds f3,f10,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// fadds f2,f9,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// fadds f1,f8,f4
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// stfs f1,12(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// b 0x824a94d0
	goto loc_824A94D0;
loc_824A94B0:
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f12,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f11,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
loc_824A94D0:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,124(r11)
	PPC_STORE_U8(r11.u32 + 124, ctx.r10.u8);
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lbz r8,212(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 212);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x824a9540
	if (!cr6.eq) goto loc_824A9540;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824a9540
	if (cr6.eq) goto loc_824A9540;
	// lwz r3,-14368(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824a9518
	if (cr6.eq) goto loc_824A9518;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a951c
	if (!cr6.eq) goto loc_824A951C;
loc_824A9518:
	// li r11,0
	r11.s64 = 0;
loc_824A951C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r29,84(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x822b4af0
	sub_822B4AF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822b4bc0
	sub_822B4BC0(ctx, base);
loc_824A9540:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r29,1
	r29.s64 = 1;
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
loc_824A954C:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a9610
	if (!cr6.eq) goto loc_824A9610;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lbz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 212);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824a95b8
	if (!cr6.eq) goto loc_824A95B8;
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x824a95b8
	if (cr6.eq) goto loc_824A95B8;
	// lwz r3,-14368(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824a9590
	if (cr6.eq) goto loc_824A9590;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a9594
	if (!cr6.eq) goto loc_824A9594;
loc_824A9590:
	// li r11,0
	r11.s64 = 0;
loc_824A9594:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r31,84(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x822b4af0
	sub_822B4AF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822b4bc0
	sub_822B4BC0(ctx, base);
loc_824A95B8:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r8,56(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lbz r7,124(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 124);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x824a9610
	if (!cr6.eq) goto loc_824A9610;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lfs f0,96(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 96);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f13,100(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f12,104(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f11,108(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r8,56(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// stb r9,124(r8)
	PPC_STORE_U8(ctx.r8.u32 + 124, ctx.r9.u8);
loc_824A9610:
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
}

__attribute__((alias("__imp__sub_824A9620"))) PPC_WEAK_FUNC(sub_824A9620);
PPC_FUNC_IMPL(__imp__sub_824A9620) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824A9624"))) PPC_WEAK_FUNC(sub_824A9624);
PPC_FUNC_IMPL(__imp__sub_824A9624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A9628"))) PPC_WEAK_FUNC(sub_824A9628);
PPC_FUNC_IMPL(__imp__sub_824A9628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,3920
	ctx.r9.s64 = r11.s64 + 3920;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A9644"))) PPC_WEAK_FUNC(sub_824A9644);
PPC_FUNC_IMPL(__imp__sub_824A9644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A9648"))) PPC_WEAK_FUNC(sub_824A9648);
PPC_FUNC_IMPL(__imp__sub_824A9648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9694"))) PPC_WEAK_FUNC(sub_824A9694);
PPC_FUNC_IMPL(__imp__sub_824A9694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A9698"))) PPC_WEAK_FUNC(sub_824A9698);
PPC_FUNC_IMPL(__imp__sub_824A9698) {
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
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3432
	ctx.r7.s64 = ctx.r10.s64 + 3432;
	// addi r6,r9,-3340
	ctx.r6.s64 = ctx.r9.s64 + -3340;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r5,r8,-3356
	ctx.r5.s64 = ctx.r8.s64 + -3356;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A9704"))) PPC_WEAK_FUNC(sub_824A9704);
PPC_FUNC_IMPL(__imp__sub_824A9704) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9708"))) PPC_WEAK_FUNC(sub_824A9708);
PPC_FUNC_IMPL(__imp__sub_824A9708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9718"))) PPC_WEAK_FUNC(sub_824A9718);
PPC_FUNC_IMPL(__imp__sub_824A9718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9728"))) PPC_WEAK_FUNC(sub_824A9728);
PPC_FUNC_IMPL(__imp__sub_824A9728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,3920
	ctx.r9.s64 = r11.s64 + 3920;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A9744"))) PPC_WEAK_FUNC(sub_824A9744);
PPC_FUNC_IMPL(__imp__sub_824A9744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A9748"))) PPC_WEAK_FUNC(sub_824A9748);
PPC_FUNC_IMPL(__imp__sub_824A9748) {
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
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3432
	ctx.r7.s64 = ctx.r10.s64 + 3432;
	// addi r6,r9,-3264
	ctx.r6.s64 = ctx.r9.s64 + -3264;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r5,r8,-3280
	ctx.r5.s64 = ctx.r8.s64 + -3280;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A97B4"))) PPC_WEAK_FUNC(sub_824A97B4);
PPC_FUNC_IMPL(__imp__sub_824A97B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A97B8"))) PPC_WEAK_FUNC(sub_824A97B8);
PPC_FUNC_IMPL(__imp__sub_824A97B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// addi r12,r1,-96
	r12.s64 = ctx.r1.s64 + -96;
	// bl 0x828eaaf0
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// li r24,0
	r24.s64 = 0;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r7,24192(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24192);
	// lis r21,-32254
	r21.s64 = -2113798144;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lfs f26,21036(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	f26.f64 = double(temp.f32);
	// mr r30,r24
	r30.u64 = r24.u64;
	// addi r22,r10,-24756
	r22.s64 = ctx.r10.s64 + -24756;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r7,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r7.u32);
	// bne cr6,0x824a980c
	if (!cr6.eq) goto loc_824A980C;
	// b 0x824a9bc4
	goto loc_824A9BC4;
loc_824A980C:
	// lis r23,-31970
	r23.s64 = -2095185920;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,-14368(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -14368);
	// lwz r26,0(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824a9834
	if (cr6.eq) goto loc_824A9834;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a9838
	if (!cr6.eq) goto loc_824A9838;
loc_824A9834:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_824A9838:
	// addi r4,r26,8
	ctx.r4.s64 = r26.s64 + 8;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x826e53d0
	sub_826E53D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a9bc4
	if (cr6.eq) goto loc_824A9BC4;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lfs f0,104(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 104);
	f0.f64 = double(temp.f32);
	// lfs f13,108(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r26,40
	r30.s64 = r26.s64 + 40;
	// lfs f12,112(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,116(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f31,32(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 32);
	f31.f64 = double(temp.f32);
	// lfs f30,40(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 40);
	f30.f64 = double(temp.f32);
	// lfs f29,44(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 44);
	f29.f64 = double(temp.f32);
	// lfs f28,48(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 48);
	f28.f64 = double(temp.f32);
	// lfs f27,52(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 52);
	f27.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x822cfc78
	sub_822CFC78(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a99c4
	if (cr6.eq) goto loc_824A99C4;
	// addi r5,r26,56
	ctx.r5.s64 = r26.s64 + 56;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82700280
	sub_82700280(ctx, base);
	// lwz r25,96(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a99c4
	if (cr6.eq) goto loc_824A99C4;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r28,r24
	r28.u64 = r24.u64;
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x824a99c4
	if (!cr6.gt) goto loc_824A99C4;
	// mr r29,r24
	r29.u64 = r24.u64;
loc_824A98EC:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,156(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 156);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a99ac
	if (cr6.eq) goto loc_824A99AC;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82700538
	sub_82700538(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f10,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,104(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 104);
	f0.f64 = double(temp.f32);
	// fsubs f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 - f0.f64));
	// lfs f13,96(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f12,100(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f11,108(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fmuls f5,f0,f0
	ctx.f5.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f4,f13,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f3,f12,f12,f4
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fsqrts f11,f3
	ctx.f11.f64 = double(float(sqrt(ctx.f3.f64)));
	// fcmpu cr6,f31,f11
	cr6.compare(f31.f64, ctx.f11.f64);
	// ble cr6,0x824a99ac
	if (!cr6.gt) goto loc_824A99AC;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f30,f9
	f30.f64 = ctx.f9.f64;
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f29,f8
	f29.f64 = ctx.f8.f64;
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f28,f10
	f28.f64 = ctx.f10.f64;
	// stfs f6,124(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f27,f7
	f27.f64 = ctx.f7.f64;
	// fmr f31,f11
	f31.f64 = ctx.f11.f64;
loc_824A99AC:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// blt cr6,0x824a98ec
	if (cr6.lt) goto loc_824A98EC;
loc_824A99C4:
	// fabs f0,f31
	ctx.fpscr.disableFlushMode();
	f0.u64 = f31.u64 & ~0x8000000000000000;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lfs f13,148(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x824a9a6c
	if (!cr6.lt) goto loc_824A9A6C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r3,-14368(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r8,220(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// lwz r11,18172(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18172);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stb r24,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, r24.u8);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// beq cr6,0x824a9a18
	if (cr6.eq) goto loc_824A9A18;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a9a1c
	if (!cr6.eq) goto loc_824A9A1C;
loc_824A9A18:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_824A9A1C:
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a9cf8
	if (cr6.eq) goto loc_824A9CF8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a9cf8
	if (!cr6.eq) goto loc_824A9CF8;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
	// b 0x824a9cf8
	goto loc_824A9CF8;
loc_824A9A6C:
	// lwz r30,36(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f31,-3292(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r21.u32 + -3292);
	f31.f64 = double(temp.f32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f30,4(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f29,8(r30)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f28,12(r30)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// stfs f27,16(r30)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x824a9bc0
	if (!cr6.eq) goto loc_824A9BC0;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r9,r11,-10100
	ctx.r9.s64 = r11.s64 + -10100;
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// lfs f4,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,188(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f9,-10100(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -10100);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r10,-10084
	ctx.r8.s64 = ctx.r10.s64 + -10084;
	// fmuls f3,f12,f9
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f26,156(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f2,f0,f11
	ctx.f2.f64 = double(float(f0.f64 * ctx.f11.f64));
	// fmuls f31,f13,f10
	f31.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f8,-10084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10084);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f8,192(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f7,196(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f6,200(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lfs f5,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmsubs f11,f13,f11,f3
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f3.f64));
	// stfs f5,204(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f26,172(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmsubs f10,f12,f10,f2
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f2.f64));
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmsubs f9,f0,f9,f31
	ctx.f9.f64 = double(float(f0.f64 * ctx.f9.f64 - f31.f64));
	// stfs f12,180(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f11,152(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fmsubs f5,f0,f10,f8
	ctx.f5.f64 = double(float(f0.f64 * ctx.f10.f64 - ctx.f8.f64));
	// stfs f5,164(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmsubs f4,f9,f13,f7
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f7.f64));
	// stfs f4,168(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmsubs f3,f11,f12,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f3,160(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x822b3280
	sub_822B3280(ctx, base);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f0.f64 = double(temp.f32);
	// fmuls f2,f0,f0
	ctx.f2.f64 = double(float(f0.f64 * f0.f64));
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-25600(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25600);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f1,f13,f13,f2
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fmadds f9,f12,f12,f1
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f1.f64));
	// fmadds f8,f11,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fdivs f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 / ctx.f7.f64));
	// fmuls f4,f13,f6
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmuls f3,f0,f6
	ctx.f3.f64 = double(float(f0.f64 * ctx.f6.f64));
	// fmuls f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f2,f12,f6
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fneg f0,f4
	f0.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// stfs f0,24(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// fneg f13,f3
	ctx.f13.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// stfs f13,28(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 28, temp.u32);
	// fneg f1,f5
	ctx.f1.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// stfs f1,20(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// fneg f12,f2
	ctx.f12.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfs f12,32(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 32, temp.u32);
loc_824A9BC0:
	// li r30,1
	r30.s64 = 1;
loc_824A9BC4:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a9cf8
	if (!cr6.eq) goto loc_824A9CF8;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lbz r10,143(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 143);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x824a9cf0
	if (!cr6.eq) goto loc_824A9CF0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r24,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r24.u8);
	// addi r8,r4,112
	ctx.r8.s64 = ctx.r4.s64 + 112;
	// addi r3,r4,20
	ctx.r3.s64 = ctx.r4.s64 + 20;
	// lwz r4,288(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 288);
	// addi r6,r11,96
	ctx.r6.s64 = r11.s64 + 96;
	// addi r5,r11,144
	ctx.r5.s64 = r11.s64 + 144;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x824c1050
	sub_824C1050(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r4,r11,96
	ctx.r4.s64 = r11.s64 + 96;
	// lwz r3,288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 288);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x824bec30
	sub_824BEC30(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f26.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 288);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x824bfa40
	sub_824BFA40(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// lfs f12,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f11,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,-3292(r21)
	temp.u32 = PPC_LOAD_U32(r21.u32 + -3292);
	ctx.f1.f64 = double(temp.f32);
	// lfs f10,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 - f0.f64));
	// lfs f7,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f5,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fsubs f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
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
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f12,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// lfs f2,132(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 132);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f11,f2,f12
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// lfs f1,136(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,128(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-3296(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -3296);
	f0.f64 = double(temp.f32);
	// fmadds f8,f1,f10,f11
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f7,f9,f13,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fcmpu cr6,f7,f0
	cr6.compare(ctx.f7.f64, f0.f64);
	// ble cr6,0x824a9cf4
	if (!cr6.gt) goto loc_824A9CF4;
	// bl 0x824a9d10
	sub_824A9D10(ctx, base);
	// b 0x824a9cf8
	goto loc_824A9CF8;
loc_824A9CF0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_824A9CF4:
	// bl 0x824a9d78
	sub_824A9D78(ctx, base);
loc_824A9CF8:
	// lwz r3,260(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-96
	r12.s64 = ctx.r1.s64 + -96;
	// bl 0x828eab3c
}

__attribute__((alias("__imp__sub_824A9D0C"))) PPC_WEAK_FUNC(sub_824A9D0C);
PPC_FUNC_IMPL(__imp__sub_824A9D0C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_824A9D10"))) PPC_WEAK_FUNC(sub_824A9D10);
PPC_FUNC_IMPL(__imp__sub_824A9D10) {
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
	// lwz r3,-24980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -24980);
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

__attribute__((alias("__imp__sub_824A9D74"))) PPC_WEAK_FUNC(sub_824A9D74);
PPC_FUNC_IMPL(__imp__sub_824A9D74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9D78"))) PPC_WEAK_FUNC(sub_824A9D78);
PPC_FUNC_IMPL(__imp__sub_824A9D78) {
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
	// lwz r3,-24976(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -24976);
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

__attribute__((alias("__imp__sub_824A9DDC"))) PPC_WEAK_FUNC(sub_824A9DDC);
PPC_FUNC_IMPL(__imp__sub_824A9DDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9DE0"))) PPC_WEAK_FUNC(sub_824A9DE0);
PPC_FUNC_IMPL(__imp__sub_824A9DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stfs f0,116(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 116, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9E00"))) PPC_WEAK_FUNC(sub_824A9E00);
PPC_FUNC_IMPL(__imp__sub_824A9E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9E10"))) PPC_WEAK_FUNC(sub_824A9E10);
PPC_FUNC_IMPL(__imp__sub_824A9E10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9E14"))) PPC_WEAK_FUNC(sub_824A9E14);
PPC_FUNC_IMPL(__imp__sub_824A9E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A9E18"))) PPC_WEAK_FUNC(sub_824A9E18);
PPC_FUNC_IMPL(__imp__sub_824A9E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,3920
	ctx.r9.s64 = r11.s64 + 3920;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A9E34"))) PPC_WEAK_FUNC(sub_824A9E34);
PPC_FUNC_IMPL(__imp__sub_824A9E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A9E38"))) PPC_WEAK_FUNC(sub_824A9E38);
PPC_FUNC_IMPL(__imp__sub_824A9E38) {
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
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3432
	ctx.r7.s64 = ctx.r10.s64 + 3432;
	// addi r6,r9,-3192
	ctx.r6.s64 = ctx.r9.s64 + -3192;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r5,r8,-3208
	ctx.r5.s64 = ctx.r8.s64 + -3208;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A9EA4"))) PPC_WEAK_FUNC(sub_824A9EA4);
PPC_FUNC_IMPL(__imp__sub_824A9EA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9EA8"))) PPC_WEAK_FUNC(sub_824A9EA8);
PPC_FUNC_IMPL(__imp__sub_824A9EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
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
	// bl 0x828eaae0
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lis r9,-31966
	ctx.r9.s64 = -2094923776;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r9,-10036
	ctx.r4.s64 = ctx.r9.s64 + -10036;
	// lwz r8,24192(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// addi r5,r11,144
	ctx.r5.s64 = r11.s64 + 144;
	// lfs f31,96(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 96);
	f31.f64 = double(temp.f32);
	// lfs f30,100(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 100);
	f30.f64 = double(temp.f32);
	// lfs f29,104(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 104);
	f29.f64 = double(temp.f32);
	// lfs f28,108(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 108);
	f28.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r8,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f29,88(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f28,92(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f0.f64 = double(temp.f32);
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(f0.f64 * f0.f64));
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r11,88
	r11.s64 = r11.s64 + 88;
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f12,-25600(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// stfs f29,104(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f11,21036(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21036);
	ctx.f11.f64 = double(temp.f32);
	// stfs f28,108(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 / ctx.f8.f64));
	// fmuls f25,f7,f13
	f25.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f24,f7,f11
	f24.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f23,f7,f0
	f23.f64 = double(float(ctx.f7.f64 * f0.f64));
	// ble cr6,0x824a9f7c
	if (!cr6.gt) goto loc_824A9F7C;
loc_824A9F64:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bgt cr6,0x824a9f64
	if (cr6.gt) goto loc_824A9F64;
loc_824A9F7C:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
	// bl 0x822c2fd8
	sub_822C2FD8(ctx, base);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
	// bl 0x822c2fd8
	sub_822C2FD8(ctx, base);
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lfs f22,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	f22.f64 = double(temp.f32);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r31,r11,-24740
	r31.s64 = r11.s64 + -24740;
	// lfs f10,144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// fmuls f9,f24,f10
	ctx.f9.f64 = double(float(f24.f64 * ctx.f10.f64));
	// lfs f0,-24740(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24740);
	f0.f64 = double(temp.f32);
	// fmuls f8,f25,f10
	ctx.f8.f64 = double(float(f25.f64 * ctx.f10.f64));
	// lfs f27,4580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4580);
	f27.f64 = double(temp.f32);
	// fmuls f7,f23,f10
	ctx.f7.f64 = double(float(f23.f64 * ctx.f10.f64));
	// lfs f26,4028(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4028);
	f26.f64 = double(temp.f32);
	// fmuls f6,f10,f22
	ctx.f6.f64 = double(float(ctx.f10.f64 * f22.f64));
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fadds f30,f9,f30
	f30.f64 = double(float(ctx.f9.f64 + f30.f64));
	// fadds f31,f8,f31
	f31.f64 = double(float(ctx.f8.f64 + f31.f64));
	// stfs f31,160(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f29,f7,f29
	f29.f64 = double(float(ctx.f7.f64 + f29.f64));
	// stfs f29,168(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fadds f28,f6,f28
	f28.f64 = double(float(ctx.f6.f64 + f28.f64));
	// stfs f28,172(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f28,156(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fadds f5,f30,f27
	ctx.f5.f64 = double(float(f30.f64 + f27.f64));
	// stfs f5,164(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fsubs f4,f30,f26
	ctx.f4.f64 = double(float(f30.f64 - f26.f64));
	// stfs f4,148(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r3,288(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 288);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x824ba110
	sub_824BA110(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824aa118
	if (cr6.eq) goto loc_824AA118;
loc_824AA04C:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f0.f64 = double(temp.f32);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// lfs f11,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// lfs f10,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f9,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f24,f6
	ctx.f5.f64 = double(float(f24.f64 * ctx.f6.f64));
	// fadds f30,f10,f5
	f30.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f4,f25,f6
	ctx.f4.f64 = double(float(f25.f64 * ctx.f6.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f3,f23,f6
	ctx.f3.f64 = double(float(f23.f64 * ctx.f6.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f2,f6,f22
	ctx.f2.f64 = double(float(ctx.f6.f64 * f22.f64));
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fadds f1,f30,f27
	ctx.f1.f64 = double(float(f30.f64 + f27.f64));
	// stfs f1,164(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f31,f9,f4
	f31.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// stfs f31,160(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f29,f8,f3
	f29.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// stfs f29,168(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fadds f28,f7,f2
	f28.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// stfs f28,172(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fsubs f0,f30,f26
	f0.f64 = double(float(f30.f64 - f26.f64));
	// stfs f0,148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f28,156(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lwz r8,288(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 288);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x824ba110
	sub_824BA110(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824aa04c
	if (!cr6.eq) goto loc_824AA04C;
loc_824AA118:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// stfs f31,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f30,20(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f29,24(r11)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stfs f28,28(r11)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x828eab2c
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824AA154"))) PPC_WEAK_FUNC(sub_824AA154);
PPC_FUNC_IMPL(__imp__sub_824AA154) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AA158"))) PPC_WEAK_FUNC(sub_824AA158);
PPC_FUNC_IMPL(__imp__sub_824AA158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r8,100(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// bne cr6,0x824aa19c
	if (!cr6.eq) goto loc_824AA19C;
	// bl 0x824a9ea8
	sub_824A9EA8(ctx, base);
loc_824AA19C:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x824aa220
	if (!cr6.gt) goto loc_824AA220;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lbz r10,142(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 142);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x824aa220
	if (!cr6.eq) goto loc_824AA220;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lbz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 212);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824aa214
	if (!cr6.eq) goto loc_824AA214;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824aa1ec
	if (cr6.eq) goto loc_824AA1EC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824aa1f0
	if (!cr6.eq) goto loc_824AA1F0;
loc_824AA1EC:
	// li r11,0
	r11.s64 = 0;
loc_824AA1F0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,84(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x822b4af0
	sub_822B4AF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822b4bc0
	sub_822B4BC0(ctx, base);
loc_824AA214:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x822b4ca0
	sub_822B4CA0(ctx, base);
	// b 0x824aa3c0
	goto loc_824AA3C0;
loc_824AA220:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lwz r31,36(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r8,-24740
	ctx.r5.s64 = ctx.r8.s64 + -24740;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,92(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// lfs f31,-3220(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3220);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f0,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	f0.f64 = double(temp.f32);
	// lfs f13,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f9,96(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,100(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,104(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,108(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f3,f11,f10
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f5,f13,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f4,f0,f9
	ctx.f4.f64 = double(float(f0.f64 - ctx.f9.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f3,92(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x824aa3c0
	if (!cr6.eq) goto loc_824AA3C0;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r9,r11,-10052
	ctx.r9.s64 = r11.s64 + -10052;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r10,-10020
	ctx.r8.s64 = ctx.r10.s64 + -10020;
	// lfs f3,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f3.f64 = double(temp.f32);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// stfs f3,140(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f9,-10052(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -10052);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmuls f2,f12,f9
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f7,-10020(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10020);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f30,f0,f11
	f30.f64 = double(float(f0.f64 * ctx.f11.f64));
	// fmuls f29,f13,f10
	f29.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f8,21036(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21036);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f8,124(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f6,148(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f5,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmsubs f11,f13,f11,f2
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f2.f64));
	// lfs f4,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// stfs f5,152(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmsubs f10,f12,f10,f30
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - f30.f64));
	// stfs f4,156(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmsubs f9,f0,f9,f29
	ctx.f9.f64 = double(float(f0.f64 * ctx.f9.f64 - f29.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fmsubs f5,f0,f10,f8
	ctx.f5.f64 = double(float(f0.f64 * ctx.f10.f64 - ctx.f8.f64));
	// stfs f5,116(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmsubs f4,f9,f13,f7
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f7.f64));
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmsubs f3,f11,f12,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x822b3280
	sub_822B3280(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// fmuls f2,f0,f0
	ctx.f2.f64 = double(float(f0.f64 * f0.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-25600(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -25600);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f1,f13,f13,f2
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fmadds f9,f12,f12,f1
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f1.f64));
	// fmadds f8,f11,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fdivs f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 / ctx.f7.f64));
	// fmuls f5,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// stfs f5,20(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// fmuls f4,f0,f6
	ctx.f4.f64 = double(float(f0.f64 * ctx.f6.f64));
	// stfs f4,24(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// fmuls f3,f12,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// stfs f3,28(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// fmuls f2,f11,f6
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// stfs f2,32(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
loc_824AA3C0:
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824AA3E8"))) PPC_WEAK_FUNC(sub_824AA3E8);
PPC_FUNC_IMPL(__imp__sub_824AA3E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AA3EC"))) PPC_WEAK_FUNC(sub_824AA3EC);
PPC_FUNC_IMPL(__imp__sub_824AA3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AA3F0"))) PPC_WEAK_FUNC(sub_824AA3F0);
PPC_FUNC_IMPL(__imp__sub_824AA3F0) {
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
	// beq cr6,0x824aa438
	if (cr6.eq) goto loc_824AA438;
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
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_824AA438:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824AA448"))) PPC_WEAK_FUNC(sub_824AA448);
PPC_FUNC_IMPL(__imp__sub_824AA448) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AA44C"))) PPC_WEAK_FUNC(sub_824AA44C);
PPC_FUNC_IMPL(__imp__sub_824AA44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AA450"))) PPC_WEAK_FUNC(sub_824AA450);
PPC_FUNC_IMPL(__imp__sub_824AA450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r26,r11
	r26.s64 = r11.s32;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r26,r7
	cr6.compare<uint32_t>(r26.u32, ctx.r7.u32, xer);
	// beq cr6,0x824aa624
	if (cr6.eq) goto loc_824AA624;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r22,-31934
	r22.s64 = -2092826624;
	// lis r23,-31934
	r23.s64 = -2092826624;
	// lis r27,-31970
	r27.s64 = -2095185920;
	// addi r25,r11,-31260
	r25.s64 = r11.s64 + -31260;
	// addi r24,r10,-3148
	r24.s64 = ctx.r10.s64 + -3148;
loc_824AA49C:
	// lwz r29,0(r26)
	r29.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x824aa604
	if (!cr6.eq) goto loc_824AA604;
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lbz r10,245(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 245);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x824aa578
	if (!cr6.eq) goto loc_824AA578;
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824aa4d8
	if (cr6.eq) goto loc_824AA4D8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824aa4dc
	if (!cr6.eq) goto loc_824AA4DC;
loc_824AA4D8:
	// li r11,0
	r11.s64 = 0;
loc_824AA4DC:
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x825cb620
	sub_825CB620(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825ca0d8
	sub_825CA0D8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824aa578
	if (cr6.eq) goto loc_824AA578;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lwz r11,23576(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 23576);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x825ca178
	sub_825CA178(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,28
	r30.s64 = r11.s64 + 28;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824aa578
	if (cr6.eq) goto loc_824AA578;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824aa578
	if (!cr6.eq) goto loc_824AA578;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824AA578:
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// bl 0x824b4d20
	sub_824B4D20(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,18176(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 18176);
	// lwz r11,-14368(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// beq cr6,0x824aa5b4
	if (cr6.eq) goto loc_824AA5B4;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824aa5b8
	if (!cr6.eq) goto loc_824AA5B8;
loc_824AA5B4:
	// li r11,0
	r11.s64 = 0;
loc_824AA5B8:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824aa604
	if (cr6.eq) goto loc_824AA604;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824aa604
	if (!cr6.eq) goto loc_824AA604;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824AA604:
	// lwz r11,52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r26,r8
	cr6.compare<uint32_t>(r26.u32, ctx.r8.u32, xer);
	// bne cr6,0x824aa49c
	if (!cr6.eq) goto loc_824AA49C;
loc_824AA624:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_824AA628"))) PPC_WEAK_FUNC(sub_824AA628);
PPC_FUNC_IMPL(__imp__sub_824AA628) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_824AA62C"))) PPC_WEAK_FUNC(sub_824AA62C);
PPC_FUNC_IMPL(__imp__sub_824AA62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AA630"))) PPC_WEAK_FUNC(sub_824AA630);
PPC_FUNC_IMPL(__imp__sub_824AA630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824aa99c
	if (!cr6.eq) goto loc_824AA99C;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r3,r11,200
	ctx.r3.s64 = r11.s64 + 200;
	// bl 0x826ca118
	sub_826CA118(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x824aa74c
	if (!cr6.eq) goto loc_824AA74C;
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lbz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 236);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824aa68c
	if (cr6.eq) goto loc_824AA68C;
	// lwz r10,52(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x824aa74c
	if (!cr6.gt) goto loc_824AA74C;
loc_824AA68C:
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 196);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824aa700
	if (cr6.eq) goto loc_824AA700;
	// lwz r11,44(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lwz r9,240(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// lwz r3,196(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,68(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 68);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// addi r31,r11,200
	r31.s64 = r11.s64 + 200;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x826ea888
	sub_826EA888(ctx, base);
	// b 0x824aa724
	goto loc_824AA724;
loc_824AA700:
	// lwz r3,68(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 68);
	// addi r31,r11,200
	r31.s64 = r11.s64 + 200;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x826eaac8
	sub_826EAAC8(ctx, base);
loc_824AA724:
	// lwz r3,68(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 68);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,60(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 60);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x826ec880
	sub_826EC880(ctx, base);
loc_824AA74C:
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// addi r3,r11,208
	ctx.r3.s64 = r11.s64 + 208;
	// bl 0x826ca118
	sub_826CA118(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x824aa990
	if (!cr6.eq) goto loc_824AA990;
	// lwz r9,52(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r27,r11
	r27.s64 = r11.s32;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r27,r7
	cr6.compare<uint32_t>(r27.u32, ctx.r7.u32, xer);
	// beq cr6,0x824aa990
	if (cr6.eq) goto loc_824AA990;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r25,-31934
	r25.s64 = -2092826624;
	// lis r26,-31970
	r26.s64 = -2095185920;
	// addi r24,r11,18084
	r24.s64 = r11.s64 + 18084;
loc_824AA794:
	// lwz r29,0(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x824aa970
	if (!cr6.eq) goto loc_824AA970;
	// lwz r3,-14368(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824aa7c0
	if (cr6.eq) goto loc_824AA7C0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824aa7c4
	if (!cr6.eq) goto loc_824AA7C4;
loc_824AA7C0:
	// li r11,0
	r11.s64 = 0;
loc_824AA7C4:
	// addi r4,r29,8
	ctx.r4.s64 = r29.s64 + 8;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x826e53d0
	sub_826E53D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824aa970
	if (cr6.eq) goto loc_824AA970;
	// lwz r11,100(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824aa970
	if (cr6.eq) goto loc_824AA970;
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 196);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824aa874
	if (cr6.eq) goto loc_824AA874;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r3,196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 196);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r30,r11,208
	r30.s64 = r11.s64 + 208;
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x826ea888
	sub_826EA888(ctx, base);
	// b 0x824aa898
	goto loc_824AA898;
loc_824AA874:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,208
	r30.s64 = r11.s64 + 208;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x826eaac8
	sub_826EAAC8(ctx, base);
loc_824AA898:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x826e8500
	sub_826E8500(ctx, base);
	// lwz r9,40(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lbz r8,246(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 246);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x824aa970
	if (!cr6.eq) goto loc_824AA970;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r31,48(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x826e98e0
	sub_826E98E0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x824aa970
	if (!cr6.eq) goto loc_824AA970;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,18184(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 18184);
	// lwz r3,-14368(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x824aa920
	if (cr6.eq) goto loc_824AA920;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824aa924
	if (!cr6.eq) goto loc_824AA924;
loc_824AA920:
	// li r11,0
	r11.s64 = 0;
loc_824AA924:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824aa970
	if (cr6.eq) goto loc_824AA970;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824aa970
	if (!cr6.eq) goto loc_824AA970;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824AA970:
	// lwz r11,52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(r27.u32, ctx.r9.u32, xer);
	// bne cr6,0x824aa794
	if (!cr6.eq) goto loc_824AA794;
loc_824AA990:
	// lwz r11,60(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 60);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
loc_824AA99C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
}

__attribute__((alias("__imp__sub_824AA9A4"))) PPC_WEAK_FUNC(sub_824AA9A4);
PPC_FUNC_IMPL(__imp__sub_824AA9A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_824AA9A8"))) PPC_WEAK_FUNC(sub_824AA9A8);
PPC_FUNC_IMPL(__imp__sub_824AA9A8) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// addi r8,r11,3448
	ctx.r8.s64 = r11.s64 + 3448;
	// addi r7,r10,-3104
	ctx.r7.s64 = ctx.r10.s64 + -3104;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// addi r6,r9,-3120
	ctx.r6.s64 = ctx.r9.s64 + -3120;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// addi r29,r31,64
	r29.s64 = r31.s64 + 64;
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r6.u32);
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
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_824AAA2C"))) PPC_WEAK_FUNC(sub_824AAA2C);
PPC_FUNC_IMPL(__imp__sub_824AAA2C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824AAA30"))) PPC_WEAK_FUNC(sub_824AAA30);
PPC_FUNC_IMPL(__imp__sub_824AAA30) {
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
	// addi r9,r11,-3104
	ctx.r9.s64 = r11.s64 + -3104;
	// addi r8,r10,-3120
	ctx.r8.s64 = ctx.r10.s64 + -3120;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r30,r3,64
	r30.s64 = ctx.r3.s64 + 64;
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
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r7,3464
	ctx.r5.s64 = ctx.r7.s64 + 3464;
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

__attribute__((alias("__imp__sub_824AAAB8"))) PPC_WEAK_FUNC(sub_824AAAB8);
PPC_FUNC_IMPL(__imp__sub_824AAAB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AAABC"))) PPC_WEAK_FUNC(sub_824AAABC);
PPC_FUNC_IMPL(__imp__sub_824AAABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AAAC0"))) PPC_WEAK_FUNC(sub_824AAAC0);
PPC_FUNC_IMPL(__imp__sub_824AAAC0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x824b4cf8
	sub_824B4CF8(ctx, base);
	// lwz r31,220(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824aab0c
	if (cr6.eq) goto loc_824AAB0C;
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// lwz r29,28(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x824aab0c
	if (cr6.eq) goto loc_824AAB0C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824aab70
	sub_824AAB70(ctx, base);
loc_824AAB0C:
	// addic r11,r31,-1
	xer.ca = r31.u32 > 0;
	r11.s64 = r31.s64 + -1;
	// subfe r3,r11,r31
	temp.u8 = (~r11.u32 + r31.u32 < ~r11.u32) | (~r11.u32 + r31.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~r11.u64 + r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_824AAB18"))) PPC_WEAK_FUNC(sub_824AAB18);
PPC_FUNC_IMPL(__imp__sub_824AAB18) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824AAB1C"))) PPC_WEAK_FUNC(sub_824AAB1C);
PPC_FUNC_IMPL(__imp__sub_824AAB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AAB20"))) PPC_WEAK_FUNC(sub_824AAB20);
PPC_FUNC_IMPL(__imp__sub_824AAB20) {
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
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r31,r3,64
	r31.s64 = ctx.r3.s64 + 64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824aab58
	if (cr6.eq) goto loc_824AAB58;
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
	// bl 0x824aab70
	sub_824AAB70(ctx, base);
loc_824AAB58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824AAB68"))) PPC_WEAK_FUNC(sub_824AAB68);
PPC_FUNC_IMPL(__imp__sub_824AAB68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AAB6C"))) PPC_WEAK_FUNC(sub_824AAB6C);
PPC_FUNC_IMPL(__imp__sub_824AAB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AAB70"))) PPC_WEAK_FUNC(sub_824AAB70);
PPC_FUNC_IMPL(__imp__sub_824AAB70) {
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
	// beq cr6,0x824aac30
	if (cr6.eq) goto loc_824AAC30;
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
	// addi r4,r8,18084
	ctx.r4.s64 = ctx.r8.s64 + 18084;
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
	// lis r4,-32181
	ctx.r4.s64 = -2109014016;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r4,-23568
	r11.s64 = ctx.r4.s64 + -23568;
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
loc_824AAC30:
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

__attribute__((alias("__imp__sub_824AAC44"))) PPC_WEAK_FUNC(sub_824AAC44);
PPC_FUNC_IMPL(__imp__sub_824AAC44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AAC48"))) PPC_WEAK_FUNC(sub_824AAC48);
PPC_FUNC_IMPL(__imp__sub_824AAC48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
}

__attribute__((alias("__imp__sub_824AAC4C"))) PPC_WEAK_FUNC(sub_824AAC4C);
PPC_FUNC_IMPL(__imp__sub_824AAC4C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x824aac50
	goto loc_824AAC50;
loc_824AAC50:
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
	// bl 0x824aaa30
	sub_824AAA30(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824aac88
	if (cr6.eq) goto loc_824AAC88;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824AAC88:
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

__attribute__((alias("__imp__sub_824AAC50"))) PPC_WEAK_FUNC(sub_824AAC50);
PPC_FUNC_IMPL(__imp__sub_824AAC50) {
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
	// bl 0x824aaa30
	sub_824AAA30(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824aac88
	if (cr6.eq) goto loc_824AAC88;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824AAC88:
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

__attribute__((alias("__imp__sub_824AACA0"))) PPC_WEAK_FUNC(sub_824AACA0);
PPC_FUNC_IMPL(__imp__sub_824AACA0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-3040
	ctx.r9.s64 = r11.s64 + -3040;
	// addi r8,r10,-3056
	ctx.r8.s64 = ctx.r10.s64 + -3056;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r7,3464
	ctx.r5.s64 = ctx.r7.s64 + 3464;
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
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824AAD04"))) PPC_WEAK_FUNC(sub_824AAD04);
PPC_FUNC_IMPL(__imp__sub_824AAD04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AAD08"))) PPC_WEAK_FUNC(sub_824AAD08);
PPC_FUNC_IMPL(__imp__sub_824AAD08) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,3448
	ctx.r7.s64 = ctx.r10.s64 + 3448;
	// addi r6,r9,-3040
	ctx.r6.s64 = ctx.r9.s64 + -3040;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r5,r8,-3056
	ctx.r5.s64 = ctx.r8.s64 + -3056;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// stb r11,64(r31)
	PPC_STORE_U8(r31.u32 + 64, r11.u8);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824AAD84"))) PPC_WEAK_FUNC(sub_824AAD84);
PPC_FUNC_IMPL(__imp__sub_824AAD84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824AAD88"))) PPC_WEAK_FUNC(sub_824AAD88);
PPC_FUNC_IMPL(__imp__sub_824AAD88) {
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
	// beq cr6,0x824aadb8
	if (cr6.eq) goto loc_824AADB8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824aadbc
	if (!cr6.eq) goto loc_824AADBC;
loc_824AADB8:
	// li r11,0
	r11.s64 = 0;
loc_824AADBC:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,18132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18132);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,68
	ctx.r4.s64 = r28.s64 + 68;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824aae10
	if (!cr6.eq) goto loc_824AAE10;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824aae10
	if (!cr6.eq) goto loc_824AAE10;
	// lwz r11,18132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18132);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824AAE10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824AAE14"))) PPC_WEAK_FUNC(sub_824AAE14);
PPC_FUNC_IMPL(__imp__sub_824AAE14) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824AAE18"))) PPC_WEAK_FUNC(sub_824AAE18);
PPC_FUNC_IMPL(__imp__sub_824AAE18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r9,220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x824ab080
	if (!cr6.eq) goto loc_824AB080;
	// lis r28,-31970
	r28.s64 = -2095185920;
	// lwz r3,-14368(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824aae60
	if (cr6.eq) goto loc_824AAE60;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824aae64
	if (!cr6.eq) goto loc_824AAE64;
loc_824AAE60:
	// li r11,0
	r11.s64 = 0;
loc_824AAE64:
	// lwz r10,44(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// lwz r30,88(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// lwz r3,292(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// bl 0x825ca220
	sub_825CA220(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825cb620
	sub_825CB620(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824aaffc
	if (cr6.eq) goto loc_824AAFFC;
	// bl 0x825ca0c8
	sub_825CA0C8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824aaffc
	if (cr6.eq) goto loc_824AAFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825ca368
	sub_825CA368(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8242c4b0
	sub_8242C4B0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824aaffc
	if (!cr6.eq) goto loc_824AAFFC;
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	f0.f64 = double(temp.f32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r31,68
	ctx.r7.s64 = r31.s64 + 68;
	// lfs f12,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r31,52
	ctx.r6.s64 = r31.s64 + 52;
	// lfs f11,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,-14368(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r11,19336(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19336);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x824aaf2c
	if (cr6.eq) goto loc_824AAF2C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824aaf30
	if (!cr6.eq) goto loc_824AAF30;
loc_824AAF2C:
	// li r11,0
	r11.s64 = 0;
loc_824AAF30:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824aaf7c
	if (cr6.eq) goto loc_824AAF7C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824aaf7c
	if (!cr6.eq) goto loc_824AAF7C;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824AAF7C:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,-14368(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r11,19328(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19328);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x824aafac
	if (cr6.eq) goto loc_824AAFAC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824aafb0
	if (!cr6.eq) goto loc_824AAFB0;
loc_824AAFAC:
	// li r11,0
	r11.s64 = 0;
loc_824AAFB0:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824aaffc
	if (cr6.eq) goto loc_824AAFFC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824aaffc
	if (!cr6.eq) goto loc_824AAFFC;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824AAFFC:
	// lwz r11,44(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r3,-14368(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r9,220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// lwz r11,18192(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18192);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// beq cr6,0x824ab030
	if (cr6.eq) goto loc_824AB030;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ab034
	if (!cr6.eq) goto loc_824AB034;
loc_824AB030:
	// li r11,0
	r11.s64 = 0;
loc_824AB034:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824ab080
	if (cr6.eq) goto loc_824AB080;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824ab080
	if (!cr6.eq) goto loc_824AB080;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824AB080:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824AB084"))) PPC_WEAK_FUNC(sub_824AB084);
PPC_FUNC_IMPL(__imp__sub_824AB084) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824AB088"))) PPC_WEAK_FUNC(sub_824AB088);
PPC_FUNC_IMPL(__imp__sub_824AB088) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824ab0b8
	if (cr6.eq) goto loc_824AB0B8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ab0bc
	if (!cr6.eq) goto loc_824AB0BC;
loc_824AB0B8:
	// li r11,0
	r11.s64 = 0;
loc_824AB0BC:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lis r11,-32181
	r11.s64 = -2109014016;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,-7800
	ctx.r3.s64 = ctx.r9.s64 + -7800;
	// addi r31,r11,-20968
	r31.s64 = r11.s64 + -20968;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,18132(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18132);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r30,68
	ctx.r4.s64 = r30.s64 + 68;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824AB114"))) PPC_WEAK_FUNC(sub_824AB114);
PPC_FUNC_IMPL(__imp__sub_824AB114) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824AB118"))) PPC_WEAK_FUNC(sub_824AB118);
PPC_FUNC_IMPL(__imp__sub_824AB118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f0
	// addi r12,r1,-120
	r12.s64 = ctx.r1.s64 + -120;
	// bl 0x828eaaf4
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r9.u32);
	// bne cr6,0x824ab9bc
	if (!cr6.eq) goto loc_824AB9BC;
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r18,1
	r18.s64 = 1;
	// li r23,0
	r23.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// mr r19,r18
	r19.u64 = r18.u64;
	// stb r18,1(r11)
	PPC_STORE_U8(r11.u32 + 1, r18.u8);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r3,292(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824ab190
	if (cr6.eq) goto loc_824AB190;
	// bl 0x825ca0c8
	sub_825CA0C8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824ab190
	if (cr6.eq) goto loc_824AB190;
	// lwz r11,44(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// lbz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 212);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r19,r9,27,31,31
	r19.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_824AB190:
	// lwz r10,44(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// lis r20,-31934
	r20.s64 = -2092826624;
	// lis r21,-31934
	r21.s64 = -2092826624;
	// lis r22,-31970
	r22.s64 = -2095185920;
	// lwz r11,240(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x824ab664
	if (cr6.eq) goto loc_824AB664;
	// lwz r9,40(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 40);
	// lwz r8,192(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 192);
	// subf r26,r8,r11
	r26.s64 = r11.s64 - ctx.r8.s64;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// bge cr6,0x824ab1c4
	if (!cr6.lt) goto loc_824AB1C4;
	// mr r26,r18
	r26.u64 = r18.u64;
loc_824AB1C4:
	// lwz r9,248(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x824ab270
	if (!cr6.eq) goto loc_824AB270;
	// addi r4,r10,296
	ctx.r4.s64 = ctx.r10.s64 + 296;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82700f60
	sub_82700F60(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x824ab270
	if (cr6.eq) goto loc_824AB270;
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_824AB1EC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r8
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x824ab240
	if (!cr6.eq) goto loc_824AB240;
	// lwz r10,44(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r8,248(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bne cr6,0x824ab240
	if (!cr6.eq) goto loc_824AB240;
	// lwz r10,244(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x824ab268
	if (cr6.lt) goto loc_824AB268;
loc_824AB240:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x824ab1ec
	if (!cr6.eq) goto loc_824AB1EC;
	// b 0x824ab270
	goto loc_824AB270;
loc_824AB268:
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r25,r18
	r25.u64 = r18.u64;
loc_824AB270:
	// lwz r11,44(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// addi r30,r11,296
	r30.s64 = r11.s64 + 296;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,296(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 296);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic r9,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// subfe r29,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	r29.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x824ab664
	if (cr6.eq) goto loc_824AB664;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r28,r11,17676
	r28.s64 = r11.s64 + 17676;
loc_824AB2A4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r8
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpw cr6,r26,r7
	cr6.compare<int32_t>(r26.s32, ctx.r7.s32, xer);
	// bne cr6,0x824ab35c
	if (!cr6.eq) goto loc_824AB35C;
	// lwz r11,44(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r9,244(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 244);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x824ab2f0
	if (cr6.eq) goto loc_824AB2F0;
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824ab35c
	if (cr6.eq) goto loc_824AB35C;
loc_824AB2F0:
	// lwz r3,-14368(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824ab30c
	if (cr6.eq) goto loc_824AB30C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ab310
	if (!cr6.eq) goto loc_824AB310;
loc_824AB30C:
	// li r11,0
	r11.s64 = 0;
loc_824AB310:
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x825cb620
	sub_825CB620(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x825ca0c8
	sub_825CA0C8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824ab35c
	if (cr6.eq) goto loc_824AB35C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
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
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ab384
	if (!cr6.eq) goto loc_824AB384;
loc_824AB35C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x824ab2a4
	if (!cr6.eq) goto loc_824AB2A4;
	// b 0x824ab664
	goto loc_824AB664;
loc_824AB384:
	// clrlwi r11,r19,24
	r11.u64 = r19.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824ab660
	if (cr6.eq) goto loc_824AB660;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r25,24
	ctx.r9.u64 = r25.u32 & 0xFF;
	// lwz r11,40(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 40);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824ab3b8
	if (cr6.eq) goto loc_824AB3B8;
	// lfs f1,188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 188);
	ctx.f1.f64 = double(temp.f32);
	// b 0x824ab3bc
	goto loc_824AB3BC;
loc_824AB3B8:
	// lfs f1,184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
loc_824AB3BC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,40(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 40);
	// lwz r8,44(r24)
	ctx.r8.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// lwz r3,292(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 292);
	// lfs f31,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	f31.f64 = double(temp.f32);
	// lfs f30,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	f30.f64 = double(temp.f32);
	// lfs f29,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	f29.f64 = double(temp.f32);
	// lfs f28,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	f28.f64 = double(temp.f32);
	// lfs f27,176(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	f27.f64 = double(temp.f32);
	// bl 0x825ca220
	sub_825CA220(ctx, base);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lwz r11,-14368(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + -14368);
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	f0.f64 = double(temp.f32);
	// stw r3,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// stb r18,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, r18.u8);
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// lfs f11,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,19312(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19312);
	// stfs f0,180(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f12,188(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f11,192(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f31,196(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f30,200(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// stfs f29,204(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f28,208(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f27,212(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// beq cr6,0x824ab460
	if (cr6.eq) goto loc_824AB460;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ab464
	if (!cr6.eq) goto loc_824AB464;
loc_824AB460:
	// li r11,0
	r11.s64 = 0;
loc_824AB464:
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824ab4b0
	if (cr6.eq) goto loc_824AB4B0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824ab4b0
	if (!cr6.eq) goto loc_824AB4B0;
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824AB4B0:
	// lwz r11,44(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 292);
	// bl 0x825ca220
	sub_825CA220(ctx, base);
	// lwz r10,19336(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 19336);
	// lwz r11,-14368(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + -14368);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// beq cr6,0x824ab4e8
	if (cr6.eq) goto loc_824AB4E8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ab4ec
	if (!cr6.eq) goto loc_824AB4EC;
loc_824AB4E8:
	// li r11,0
	r11.s64 = 0;
loc_824AB4EC:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824ab538
	if (cr6.eq) goto loc_824AB538;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824ab538
	if (!cr6.eq) goto loc_824AB538;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824AB538:
	// lwz r11,44(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 292);
	// bl 0x825ca220
	sub_825CA220(ctx, base);
	// lwz r10,19328(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 19328);
	// lwz r11,-14368(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + -14368);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x824ab570
	if (cr6.eq) goto loc_824AB570;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ab574
	if (!cr6.eq) goto loc_824AB574;
loc_824AB570:
	// li r11,0
	r11.s64 = 0;
loc_824AB574:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824ab5c0
	if (cr6.eq) goto loc_824AB5C0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824ab5c0
	if (!cr6.eq) goto loc_824AB5C0;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824AB5C0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825ca170
	sub_825CA170(ctx, base);
	// lwz r11,44(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 292);
	// lwz r31,224(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 224);
	// bl 0x825ca170
	sub_825CA170(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lwz r8,224(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// lwz r3,-14368(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + -14368);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r11,20524(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20524);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// beq cr6,0x824ab610
	if (cr6.eq) goto loc_824AB610;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ab614
	if (!cr6.eq) goto loc_824AB614;
loc_824AB610:
	// li r11,0
	r11.s64 = 0;
loc_824AB614:
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824ab660
	if (cr6.eq) goto loc_824AB660;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824ab660
	if (!cr6.eq) goto loc_824AB660;
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824AB660:
	// mr r23,r18
	r23.u64 = r18.u64;
loc_824AB664:
	// clrlwi r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824ab82c
	if (!cr6.eq) goto loc_824AB82C;
	// clrlwi r11,r19,24
	r11.u64 = r19.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824ab82c
	if (cr6.eq) goto loc_824AB82C;
	// lwz r11,40(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 40);
	// lwz r10,44(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// lfs f31,176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 176);
	f31.f64 = double(temp.f32);
	// lfs f30,180(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 180);
	f30.f64 = double(temp.f32);
	// lwz r3,292(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// bl 0x825ca220
	sub_825CA220(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lwz r11,-14368(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + -14368);
	// stfs f30,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// lwz r10,19316(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19316);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// beq cr6,0x824ab6cc
	if (cr6.eq) goto loc_824AB6CC;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ab6d0
	if (!cr6.eq) goto loc_824AB6D0;
loc_824AB6CC:
	// li r11,0
	r11.s64 = 0;
loc_824AB6D0:
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824ab71c
	if (cr6.eq) goto loc_824AB71C;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824ab71c
	if (!cr6.eq) goto loc_824AB71C;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824AB71C:
	// lwz r11,44(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 292);
	// bl 0x825ca220
	sub_825CA220(ctx, base);
	// lwz r10,19336(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 19336);
	// lwz r11,-14368(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + -14368);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x824ab754
	if (cr6.eq) goto loc_824AB754;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ab758
	if (!cr6.eq) goto loc_824AB758;
loc_824AB754:
	// li r11,0
	r11.s64 = 0;
loc_824AB758:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824ab7a4
	if (cr6.eq) goto loc_824AB7A4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824ab7a4
	if (!cr6.eq) goto loc_824AB7A4;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824AB7A4:
	// lwz r11,44(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 292);
	// bl 0x825ca220
	sub_825CA220(ctx, base);
	// lwz r10,19328(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 19328);
	// lwz r11,-14368(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + -14368);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// beq cr6,0x824ab7dc
	if (cr6.eq) goto loc_824AB7DC;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ab7e0
	if (!cr6.eq) goto loc_824AB7E0;
loc_824AB7DC:
	// li r11,0
	r11.s64 = 0;
loc_824AB7E0:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824ab82c
	if (cr6.eq) goto loc_824AB82C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824ab82c
	if (!cr6.eq) goto loc_824AB82C;
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824AB82C:
	// clrlwi r11,r19,24
	r11.u64 = r19.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824ab9b8
	if (cr6.eq) goto loc_824AB9B8;
	// lwz r3,-14368(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824ab854
	if (cr6.eq) goto loc_824AB854;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ab858
	if (!cr6.eq) goto loc_824AB858;
loc_824AB854:
	// li r11,0
	r11.s64 = 0;
loc_824AB858:
	// lwz r10,44(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// lwz r31,88(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// lwz r3,292(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// bl 0x825ca220
	sub_825CA220(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cb620
	sub_825CB620(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824ab9b8
	if (cr6.eq) goto loc_824AB9B8;
	// bl 0x825ca0c8
	sub_825CA0C8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824ab9b8
	if (cr6.eq) goto loc_824AB9B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ca170
	sub_825CA170(ctx, base);
	// lwz r11,100(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r30,r3,100
	r30.s64 = ctx.r3.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,18228
	ctx.r4.s64 = ctx.r9.s64 + 18228;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824ab9b8
	if (cr6.eq) goto loc_824AB9B8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,18232
	ctx.r4.s64 = ctx.r9.s64 + 18232;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824ab9b8
	if (cr6.eq) goto loc_824AB9B8;
	// lwz r3,-14368(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824ab910
	if (cr6.eq) goto loc_824AB910;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824ab914
	if (!cr6.eq) goto loc_824AB914;
loc_824AB910:
	// li r11,0
	r11.s64 = 0;
loc_824AB914:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,84(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,44(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,292(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// bl 0x825ca220
	sub_825CA220(ctx, base);
	// lwz r4,44(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lwz r4,220(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 220);
	// bl 0x824abad8
	sub_824ABAD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x824abb80
	sub_824ABB80(ctx, base);
loc_824AB9B8:
	// stb r18,64(r24)
	PPC_STORE_U8(r24.u32 + 64, r18.u8);
loc_824AB9BC:
	// lwz r3,324(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// addi r12,r1,-120
	r12.s64 = ctx.r1.s64 + -120;
	// bl 0x828eab40
}

__attribute__((alias("__imp__sub_824AB9D0"))) PPC_WEAK_FUNC(sub_824AB9D0);
PPC_FUNC_IMPL(__imp__sub_824AB9D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_824AB9D4"))) PPC_WEAK_FUNC(sub_824AB9D4);
PPC_FUNC_IMPL(__imp__sub_824AB9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824AB9D8"))) PPC_WEAK_FUNC(sub_824AB9D8);
PPC_FUNC_IMPL(__imp__sub_824AB9D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
}

__attribute__((alias("__imp__sub_824AB9DC"))) PPC_WEAK_FUNC(sub_824AB9DC);
PPC_FUNC_IMPL(__imp__sub_824AB9DC) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x824ab9e0
	goto loc_824AB9E0;
loc_824AB9E0:
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-3040
	ctx.r9.s64 = r11.s64 + -3040;
	// addi r8,r10,-3056
	ctx.r8.s64 = ctx.r10.s64 + -3056;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r7,3464
	ctx.r5.s64 = ctx.r7.s64 + 3464;
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
	// clrlwi r3,r30,31
	ctx.r3.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x824aba54
	if (cr6.eq) goto loc_824ABA54;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824ABA54:
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

__attribute__((alias("__imp__sub_824AB9E0"))) PPC_WEAK_FUNC(sub_824AB9E0);
PPC_FUNC_IMPL(__imp__sub_824AB9E0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-3040
	ctx.r9.s64 = r11.s64 + -3040;
	// addi r8,r10,-3056
	ctx.r8.s64 = ctx.r10.s64 + -3056;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r7,3464
	ctx.r5.s64 = ctx.r7.s64 + 3464;
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
	// clrlwi r3,r30,31
	ctx.r3.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x824aba54
	if (cr6.eq) goto loc_824ABA54;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824ABA54:
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

__attribute__((alias("__imp__sub_824ABA6C"))) PPC_WEAK_FUNC(sub_824ABA6C);
PPC_FUNC_IMPL(__imp__sub_824ABA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824ABA70"))) PPC_WEAK_FUNC(sub_824ABA70);
PPC_FUNC_IMPL(__imp__sub_824ABA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,8
	r11.s64 = 8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,87
	r11.s64 = 5701632;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_824ABA9C:
	// srawi r9,r11,24
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFF) != 0);
	ctx.r9.s64 = r11.s32 >> 24;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x824aba9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824ABA9C;
	// li r5,84
	ctx.r5.s64 = 84;
	// addi r3,r31,3
	ctx.r3.s64 = r31.s64 + 3;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824ABAD0"))) PPC_WEAK_FUNC(sub_824ABAD0);
PPC_FUNC_IMPL(__imp__sub_824ABAD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824ABAD4"))) PPC_WEAK_FUNC(sub_824ABAD4);
PPC_FUNC_IMPL(__imp__sub_824ABAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824ABAD8"))) PPC_WEAK_FUNC(sub_824ABAD8);
PPC_FUNC_IMPL(__imp__sub_824ABAD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,18132(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18132);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f11,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f10,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,36(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,40(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f8,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,44(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f7,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,48(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f6,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,52(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f5,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,56(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f4,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,60(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f3,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,64(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f2,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,68(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f1,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,72(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,76(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
}

__attribute__((alias("__imp__sub_824ABB78"))) PPC_WEAK_FUNC(sub_824ABB78);
PPC_FUNC_IMPL(__imp__sub_824ABB78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824ABB7C"))) PPC_WEAK_FUNC(sub_824ABB7C);
PPC_FUNC_IMPL(__imp__sub_824ABB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824ABB80"))) PPC_WEAK_FUNC(sub_824ABB80);
PPC_FUNC_IMPL(__imp__sub_824ABB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// bl 0x824aba70
	sub_824ABA70(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lwz r3,-14368(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824abbcc
	if (cr6.eq) goto loc_824ABBCC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824abbd0
	if (!cr6.eq) goto loc_824ABBD0;
loc_824ABBCC:
	// li r11,0
	r11.s64 = 0;
loc_824ABBD0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824abc1c
	if (cr6.eq) goto loc_824ABC1C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824abc1c
	if (!cr6.eq) goto loc_824ABC1C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824ABC1C:
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r11,0
	r11.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_824ABC2C:
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// rlwinm r8,r11,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r8,r9
	r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bdnz 0x824abc2c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824ABC2C;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = r11.u32 & 0xFFFF;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824741f0
	sub_824741F0(ctx, base);
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_824ABC5C"))) PPC_WEAK_FUNC(sub_824ABC5C);
PPC_FUNC_IMPL(__imp__sub_824ABC5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824ABC60"))) PPC_WEAK_FUNC(sub_824ABC60);
PPC_FUNC_IMPL(__imp__sub_824ABC60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,3464
	ctx.r9.s64 = r11.s64 + 3464;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824ABC7C"))) PPC_WEAK_FUNC(sub_824ABC7C);
PPC_FUNC_IMPL(__imp__sub_824ABC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

