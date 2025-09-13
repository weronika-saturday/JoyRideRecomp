#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_824DD528"))) PPC_WEAK_FUNC(sub_824DD528);
PPC_FUNC_IMPL(__imp__sub_824DD528) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824DD52C"))) PPC_WEAK_FUNC(sub_824DD52C);
PPC_FUNC_IMPL(__imp__sub_824DD52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DD530"))) PPC_WEAK_FUNC(sub_824DD530);
PPC_FUNC_IMPL(__imp__sub_824DD530) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r9,16768
	r29.s64 = ctx.r9.s64 + 16768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824DD5C0"))) PPC_WEAK_FUNC(sub_824DD5C0);
PPC_FUNC_IMPL(__imp__sub_824DD5C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824DD5C4"))) PPC_WEAK_FUNC(sub_824DD5C4);
PPC_FUNC_IMPL(__imp__sub_824DD5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DD5C8"))) PPC_WEAK_FUNC(sub_824DD5C8);
PPC_FUNC_IMPL(__imp__sub_824DD5C8) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r8,r9,-4620
	ctx.r8.s64 = ctx.r9.s64 + -4620;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r7,-13340
	r29.s64 = ctx.r7.s64 + -13340;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r6,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824DD680"))) PPC_WEAK_FUNC(sub_824DD680);
PPC_FUNC_IMPL(__imp__sub_824DD680) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824DD684"))) PPC_WEAK_FUNC(sub_824DD684);
PPC_FUNC_IMPL(__imp__sub_824DD684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DD688"))) PPC_WEAK_FUNC(sub_824DD688);
PPC_FUNC_IMPL(__imp__sub_824DD688) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r8,r9,16768
	ctx.r8.s64 = ctx.r9.s64 + 16768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,-4620
	ctx.r6.s64 = ctx.r7.s64 + -4620;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_824DD728"))) PPC_WEAK_FUNC(sub_824DD728);
PPC_FUNC_IMPL(__imp__sub_824DD728) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824DD72C"))) PPC_WEAK_FUNC(sub_824DD72C);
PPC_FUNC_IMPL(__imp__sub_824DD72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DD730"))) PPC_WEAK_FUNC(sub_824DD730);
PPC_FUNC_IMPL(__imp__sub_824DD730) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r9,16768
	r29.s64 = ctx.r9.s64 + 16768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r8,5
	ctx.r8.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824DD7D0"))) PPC_WEAK_FUNC(sub_824DD7D0);
PPC_FUNC_IMPL(__imp__sub_824DD7D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824DD7D4"))) PPC_WEAK_FUNC(sub_824DD7D4);
PPC_FUNC_IMPL(__imp__sub_824DD7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DD7D8"))) PPC_WEAK_FUNC(sub_824DD7D8);
PPC_FUNC_IMPL(__imp__sub_824DD7D8) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r8,r9,16792
	ctx.r8.s64 = ctx.r9.s64 + 16792;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_824DD860"))) PPC_WEAK_FUNC(sub_824DD860);
PPC_FUNC_IMPL(__imp__sub_824DD860) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824DD864"))) PPC_WEAK_FUNC(sub_824DD864);
PPC_FUNC_IMPL(__imp__sub_824DD864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DD868"))) PPC_WEAK_FUNC(sub_824DD868);
PPC_FUNC_IMPL(__imp__sub_824DD868) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r9,128(r31)
	PPC_STORE_U8(r31.u32 + 128, ctx.r9.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r7,r8,16792
	ctx.r7.s64 = ctx.r8.s64 + 16792;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r6,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_824DD8F4"))) PPC_WEAK_FUNC(sub_824DD8F4);
PPC_FUNC_IMPL(__imp__sub_824DD8F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824DD8F8"))) PPC_WEAK_FUNC(sub_824DD8F8);
PPC_FUNC_IMPL(__imp__sub_824DD8F8) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r8,r9,16768
	ctx.r8.s64 = ctx.r9.s64 + 16768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r7,-4620
	r29.s64 = ctx.r7.s64 + -4620;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r6,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824DD9A0"))) PPC_WEAK_FUNC(sub_824DD9A0);
PPC_FUNC_IMPL(__imp__sub_824DD9A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824DD9A4"))) PPC_WEAK_FUNC(sub_824DD9A4);
PPC_FUNC_IMPL(__imp__sub_824DD9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DD9A8"))) PPC_WEAK_FUNC(sub_824DD9A8);
PPC_FUNC_IMPL(__imp__sub_824DD9A8) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r9,16792
	r29.s64 = ctx.r9.s64 + 16792;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824DDA28"))) PPC_WEAK_FUNC(sub_824DDA28);
PPC_FUNC_IMPL(__imp__sub_824DDA28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824DDA2C"))) PPC_WEAK_FUNC(sub_824DDA2C);
PPC_FUNC_IMPL(__imp__sub_824DDA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DDA30"))) PPC_WEAK_FUNC(sub_824DDA30);
PPC_FUNC_IMPL(__imp__sub_824DDA30) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r9,-4620
	r29.s64 = ctx.r9.s64 + -4620;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824DDAC0"))) PPC_WEAK_FUNC(sub_824DDAC0);
PPC_FUNC_IMPL(__imp__sub_824DDAC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824DDAC4"))) PPC_WEAK_FUNC(sub_824DDAC4);
PPC_FUNC_IMPL(__imp__sub_824DDAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DDAC8"))) PPC_WEAK_FUNC(sub_824DDAC8);
PPC_FUNC_IMPL(__imp__sub_824DDAC8) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r8,r9,16792
	ctx.r8.s64 = ctx.r9.s64 + 16792;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r7,-4620
	r29.s64 = ctx.r7.s64 + -4620;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r6,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824DDB70"))) PPC_WEAK_FUNC(sub_824DDB70);
PPC_FUNC_IMPL(__imp__sub_824DDB70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824DDB74"))) PPC_WEAK_FUNC(sub_824DDB74);
PPC_FUNC_IMPL(__imp__sub_824DDB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DDB78"))) PPC_WEAK_FUNC(sub_824DDB78);
PPC_FUNC_IMPL(__imp__sub_824DDB78) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r8,r9,16768
	ctx.r8.s64 = ctx.r9.s64 + 16768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,16792
	ctx.r6.s64 = ctx.r7.s64 + 16792;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_824DDC18"))) PPC_WEAK_FUNC(sub_824DDC18);
PPC_FUNC_IMPL(__imp__sub_824DDC18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824DDC1C"))) PPC_WEAK_FUNC(sub_824DDC1C);
PPC_FUNC_IMPL(__imp__sub_824DDC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DDC20"))) PPC_WEAK_FUNC(sub_824DDC20);
PPC_FUNC_IMPL(__imp__sub_824DDC20) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r9,16768
	r29.s64 = ctx.r9.s64 + 16768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824DDCA0"))) PPC_WEAK_FUNC(sub_824DDCA0);
PPC_FUNC_IMPL(__imp__sub_824DDCA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824DDCA4"))) PPC_WEAK_FUNC(sub_824DDCA4);
PPC_FUNC_IMPL(__imp__sub_824DDCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DDCA8"))) PPC_WEAK_FUNC(sub_824DDCA8);
PPC_FUNC_IMPL(__imp__sub_824DDCA8) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r8,r9,16780
	ctx.r8.s64 = ctx.r9.s64 + 16780;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r7,16768
	r29.s64 = ctx.r7.s64 + 16768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r6,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824DDD40"))) PPC_WEAK_FUNC(sub_824DDD40);
PPC_FUNC_IMPL(__imp__sub_824DDD40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824DDD44"))) PPC_WEAK_FUNC(sub_824DDD44);
PPC_FUNC_IMPL(__imp__sub_824DDD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DDD48"))) PPC_WEAK_FUNC(sub_824DDD48);
PPC_FUNC_IMPL(__imp__sub_824DDD48) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31966
	ctx.r9.s64 = -2094923776;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r8,r9,27688
	ctx.r8.s64 = ctx.r9.s64 + 27688;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_824DDDD0"))) PPC_WEAK_FUNC(sub_824DDDD0);
PPC_FUNC_IMPL(__imp__sub_824DDDD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824DDDD4"))) PPC_WEAK_FUNC(sub_824DDDD4);
PPC_FUNC_IMPL(__imp__sub_824DDDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DDDD8"))) PPC_WEAK_FUNC(sub_824DDDD8);
PPC_FUNC_IMPL(__imp__sub_824DDDD8) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r8,r9,16792
	ctx.r8.s64 = ctx.r9.s64 + 16792;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,-4620
	ctx.r6.s64 = ctx.r7.s64 + -4620;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_824DDE78"))) PPC_WEAK_FUNC(sub_824DDE78);
PPC_FUNC_IMPL(__imp__sub_824DDE78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824DDE7C"))) PPC_WEAK_FUNC(sub_824DDE7C);
PPC_FUNC_IMPL(__imp__sub_824DDE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DDE80"))) PPC_WEAK_FUNC(sub_824DDE80);
PPC_FUNC_IMPL(__imp__sub_824DDE80) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r8,r9,16792
	ctx.r8.s64 = ctx.r9.s64 + 16792;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r6,r7,-4620
	ctx.r6.s64 = ctx.r7.s64 + -4620;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// lis r5,-31970
	ctx.r5.s64 = -2095185920;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r5,-13340
	r11.s64 = ctx.r5.s64 + -13340;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_824DDF38"))) PPC_WEAK_FUNC(sub_824DDF38);
PPC_FUNC_IMPL(__imp__sub_824DDF38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824DDF3C"))) PPC_WEAK_FUNC(sub_824DDF3C);
PPC_FUNC_IMPL(__imp__sub_824DDF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DDF40"))) PPC_WEAK_FUNC(sub_824DDF40);
PPC_FUNC_IMPL(__imp__sub_824DDF40) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r9,-4620
	r29.s64 = ctx.r9.s64 + -4620;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824DDFC0"))) PPC_WEAK_FUNC(sub_824DDFC0);
PPC_FUNC_IMPL(__imp__sub_824DDFC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824DDFC4"))) PPC_WEAK_FUNC(sub_824DDFC4);
PPC_FUNC_IMPL(__imp__sub_824DDFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DDFC8"))) PPC_WEAK_FUNC(sub_824DDFC8);
PPC_FUNC_IMPL(__imp__sub_824DDFC8) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r8,r9,16792
	ctx.r8.s64 = ctx.r9.s64 + 16792;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r7,-4620
	r29.s64 = ctx.r7.s64 + -4620;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r6,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824DE060"))) PPC_WEAK_FUNC(sub_824DE060);
PPC_FUNC_IMPL(__imp__sub_824DE060) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824DE064"))) PPC_WEAK_FUNC(sub_824DE064);
PPC_FUNC_IMPL(__imp__sub_824DE064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE068"))) PPC_WEAK_FUNC(sub_824DE068);
PPC_FUNC_IMPL(__imp__sub_824DE068) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r8,r9,16768
	ctx.r8.s64 = ctx.r9.s64 + 16768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r6,r7,-4620
	ctx.r6.s64 = ctx.r7.s64 + -4620;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// lis r5,-31970
	ctx.r5.s64 = -2095185920;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r5,16792
	r11.s64 = ctx.r5.s64 + 16792;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_824DE120"))) PPC_WEAK_FUNC(sub_824DE120);
PPC_FUNC_IMPL(__imp__sub_824DE120) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824DE124"))) PPC_WEAK_FUNC(sub_824DE124);
PPC_FUNC_IMPL(__imp__sub_824DE124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE128"))) PPC_WEAK_FUNC(sub_824DE128);
PPC_FUNC_IMPL(__imp__sub_824DE128) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r8,r9,16780
	ctx.r8.s64 = ctx.r9.s64 + 16780;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_824DE1B0"))) PPC_WEAK_FUNC(sub_824DE1B0);
PPC_FUNC_IMPL(__imp__sub_824DE1B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824DE1B4"))) PPC_WEAK_FUNC(sub_824DE1B4);
PPC_FUNC_IMPL(__imp__sub_824DE1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE1B8"))) PPC_WEAK_FUNC(sub_824DE1B8);
PPC_FUNC_IMPL(__imp__sub_824DE1B8) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31966
	ctx.r9.s64 = -2094923776;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r8,r9,27728
	ctx.r8.s64 = ctx.r9.s64 + 27728;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_824DE240"))) PPC_WEAK_FUNC(sub_824DE240);
PPC_FUNC_IMPL(__imp__sub_824DE240) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824DE244"))) PPC_WEAK_FUNC(sub_824DE244);
PPC_FUNC_IMPL(__imp__sub_824DE244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE248"))) PPC_WEAK_FUNC(sub_824DE248);
PPC_FUNC_IMPL(__imp__sub_824DE248) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r8,r9,-4620
	ctx.r8.s64 = ctx.r9.s64 + -4620;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,16768
	ctx.r6.s64 = ctx.r7.s64 + 16768;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_824DE2E8"))) PPC_WEAK_FUNC(sub_824DE2E8);
PPC_FUNC_IMPL(__imp__sub_824DE2E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824DE2EC"))) PPC_WEAK_FUNC(sub_824DE2EC);
PPC_FUNC_IMPL(__imp__sub_824DE2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE2F0"))) PPC_WEAK_FUNC(sub_824DE2F0);
PPC_FUNC_IMPL(__imp__sub_824DE2F0) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r9,-4620
	r29.s64 = ctx.r9.s64 + -4620;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r28,r8,16768
	r28.s64 = ctx.r8.s64 + 16768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r7,5
	ctx.r7.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824DE398"))) PPC_WEAK_FUNC(sub_824DE398);
PPC_FUNC_IMPL(__imp__sub_824DE398) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824DE39C"))) PPC_WEAK_FUNC(sub_824DE39C);
PPC_FUNC_IMPL(__imp__sub_824DE39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE3A0"))) PPC_WEAK_FUNC(sub_824DE3A0);
PPC_FUNC_IMPL(__imp__sub_824DE3A0) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r8,r9,-4620
	ctx.r8.s64 = ctx.r9.s64 + -4620;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,-13340
	ctx.r6.s64 = ctx.r7.s64 + -13340;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_824DE440"))) PPC_WEAK_FUNC(sub_824DE440);
PPC_FUNC_IMPL(__imp__sub_824DE440) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824DE444"))) PPC_WEAK_FUNC(sub_824DE444);
PPC_FUNC_IMPL(__imp__sub_824DE444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE448"))) PPC_WEAK_FUNC(sub_824DE448);
PPC_FUNC_IMPL(__imp__sub_824DE448) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r8,r9,-4620
	ctx.r8.s64 = ctx.r9.s64 + -4620;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,16780
	ctx.r6.s64 = ctx.r7.s64 + 16780;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_824DE4E8"))) PPC_WEAK_FUNC(sub_824DE4E8);
PPC_FUNC_IMPL(__imp__sub_824DE4E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824DE4EC"))) PPC_WEAK_FUNC(sub_824DE4EC);
PPC_FUNC_IMPL(__imp__sub_824DE4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE4F0"))) PPC_WEAK_FUNC(sub_824DE4F0);
PPC_FUNC_IMPL(__imp__sub_824DE4F0) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r9,128(r31)
	PPC_STORE_U8(r31.u32 + 128, ctx.r9.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r7,r8,16792
	ctx.r7.s64 = ctx.r8.s64 + 16792;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// lis r6,-31970
	ctx.r6.s64 = -2095185920;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r6,16768
	ctx.r5.s64 = ctx.r6.s64 + 16768;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x822e9be8
	sub_822E9BE8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_824DE594"))) PPC_WEAK_FUNC(sub_824DE594);
PPC_FUNC_IMPL(__imp__sub_824DE594) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824DE598"))) PPC_WEAK_FUNC(sub_824DE598);
PPC_FUNC_IMPL(__imp__sub_824DE598) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d3108
	sub_824D3108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE5AC"))) PPC_WEAK_FUNC(sub_824DE5AC);
PPC_FUNC_IMPL(__imp__sub_824DE5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE5B0"))) PPC_WEAK_FUNC(sub_824DE5B0);
PPC_FUNC_IMPL(__imp__sub_824DE5B0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d31d0
	sub_824D31D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE5C4"))) PPC_WEAK_FUNC(sub_824DE5C4);
PPC_FUNC_IMPL(__imp__sub_824DE5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE5C8"))) PPC_WEAK_FUNC(sub_824DE5C8);
PPC_FUNC_IMPL(__imp__sub_824DE5C8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d32a8
	sub_824D32A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE5DC"))) PPC_WEAK_FUNC(sub_824DE5DC);
PPC_FUNC_IMPL(__imp__sub_824DE5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE5E0"))) PPC_WEAK_FUNC(sub_824DE5E0);
PPC_FUNC_IMPL(__imp__sub_824DE5E0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d33a8
	sub_824D33A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE5F4"))) PPC_WEAK_FUNC(sub_824DE5F4);
PPC_FUNC_IMPL(__imp__sub_824DE5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE5F8"))) PPC_WEAK_FUNC(sub_824DE5F8);
PPC_FUNC_IMPL(__imp__sub_824DE5F8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d3470
	sub_824D3470(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE60C"))) PPC_WEAK_FUNC(sub_824DE60C);
PPC_FUNC_IMPL(__imp__sub_824DE60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE610"))) PPC_WEAK_FUNC(sub_824DE610);
PPC_FUNC_IMPL(__imp__sub_824DE610) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d3558
	sub_824D3558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE624"))) PPC_WEAK_FUNC(sub_824DE624);
PPC_FUNC_IMPL(__imp__sub_824DE624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE628"))) PPC_WEAK_FUNC(sub_824DE628);
PPC_FUNC_IMPL(__imp__sub_824DE628) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d3650
	sub_824D3650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE63C"))) PPC_WEAK_FUNC(sub_824DE63C);
PPC_FUNC_IMPL(__imp__sub_824DE63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE640"))) PPC_WEAK_FUNC(sub_824DE640);
PPC_FUNC_IMPL(__imp__sub_824DE640) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d3750
	sub_824D3750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE654"))) PPC_WEAK_FUNC(sub_824DE654);
PPC_FUNC_IMPL(__imp__sub_824DE654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE658"))) PPC_WEAK_FUNC(sub_824DE658);
PPC_FUNC_IMPL(__imp__sub_824DE658) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d3838
	sub_824D3838(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE66C"))) PPC_WEAK_FUNC(sub_824DE66C);
PPC_FUNC_IMPL(__imp__sub_824DE66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE670"))) PPC_WEAK_FUNC(sub_824DE670);
PPC_FUNC_IMPL(__imp__sub_824DE670) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d3920
	sub_824D3920(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE684"))) PPC_WEAK_FUNC(sub_824DE684);
PPC_FUNC_IMPL(__imp__sub_824DE684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE688"))) PPC_WEAK_FUNC(sub_824DE688);
PPC_FUNC_IMPL(__imp__sub_824DE688) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d3a68
	sub_824D3A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE69C"))) PPC_WEAK_FUNC(sub_824DE69C);
PPC_FUNC_IMPL(__imp__sub_824DE69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE6A0"))) PPC_WEAK_FUNC(sub_824DE6A0);
PPC_FUNC_IMPL(__imp__sub_824DE6A0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d3be8
	sub_824D3BE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE6B4"))) PPC_WEAK_FUNC(sub_824DE6B4);
PPC_FUNC_IMPL(__imp__sub_824DE6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE6B8"))) PPC_WEAK_FUNC(sub_824DE6B8);
PPC_FUNC_IMPL(__imp__sub_824DE6B8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d3d08
	sub_824D3D08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE6CC"))) PPC_WEAK_FUNC(sub_824DE6CC);
PPC_FUNC_IMPL(__imp__sub_824DE6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE6D0"))) PPC_WEAK_FUNC(sub_824DE6D0);
PPC_FUNC_IMPL(__imp__sub_824DE6D0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d3e08
	sub_824D3E08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE6E4"))) PPC_WEAK_FUNC(sub_824DE6E4);
PPC_FUNC_IMPL(__imp__sub_824DE6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE6E8"))) PPC_WEAK_FUNC(sub_824DE6E8);
PPC_FUNC_IMPL(__imp__sub_824DE6E8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d3f48
	sub_824D3F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE6FC"))) PPC_WEAK_FUNC(sub_824DE6FC);
PPC_FUNC_IMPL(__imp__sub_824DE6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE700"))) PPC_WEAK_FUNC(sub_824DE700);
PPC_FUNC_IMPL(__imp__sub_824DE700) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d4028
	sub_824D4028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE714"))) PPC_WEAK_FUNC(sub_824DE714);
PPC_FUNC_IMPL(__imp__sub_824DE714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE718"))) PPC_WEAK_FUNC(sub_824DE718);
PPC_FUNC_IMPL(__imp__sub_824DE718) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d4128
	sub_824D4128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE72C"))) PPC_WEAK_FUNC(sub_824DE72C);
PPC_FUNC_IMPL(__imp__sub_824DE72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE730"))) PPC_WEAK_FUNC(sub_824DE730);
PPC_FUNC_IMPL(__imp__sub_824DE730) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d4200
	sub_824D4200(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE744"))) PPC_WEAK_FUNC(sub_824DE744);
PPC_FUNC_IMPL(__imp__sub_824DE744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE748"))) PPC_WEAK_FUNC(sub_824DE748);
PPC_FUNC_IMPL(__imp__sub_824DE748) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d42e8
	sub_824D42E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE75C"))) PPC_WEAK_FUNC(sub_824DE75C);
PPC_FUNC_IMPL(__imp__sub_824DE75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE760"))) PPC_WEAK_FUNC(sub_824DE760);
PPC_FUNC_IMPL(__imp__sub_824DE760) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d43b8
	sub_824D43B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE774"))) PPC_WEAK_FUNC(sub_824DE774);
PPC_FUNC_IMPL(__imp__sub_824DE774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE778"))) PPC_WEAK_FUNC(sub_824DE778);
PPC_FUNC_IMPL(__imp__sub_824DE778) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d4500
	sub_824D4500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE78C"))) PPC_WEAK_FUNC(sub_824DE78C);
PPC_FUNC_IMPL(__imp__sub_824DE78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE790"))) PPC_WEAK_FUNC(sub_824DE790);
PPC_FUNC_IMPL(__imp__sub_824DE790) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d45e8
	sub_824D45E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE7A4"))) PPC_WEAK_FUNC(sub_824DE7A4);
PPC_FUNC_IMPL(__imp__sub_824DE7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE7A8"))) PPC_WEAK_FUNC(sub_824DE7A8);
PPC_FUNC_IMPL(__imp__sub_824DE7A8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d46d0
	sub_824D46D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE7BC"))) PPC_WEAK_FUNC(sub_824DE7BC);
PPC_FUNC_IMPL(__imp__sub_824DE7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE7C0"))) PPC_WEAK_FUNC(sub_824DE7C0);
PPC_FUNC_IMPL(__imp__sub_824DE7C0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d47a8
	sub_824D47A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE7D4"))) PPC_WEAK_FUNC(sub_824DE7D4);
PPC_FUNC_IMPL(__imp__sub_824DE7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE7D8"))) PPC_WEAK_FUNC(sub_824DE7D8);
PPC_FUNC_IMPL(__imp__sub_824DE7D8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d4890
	sub_824D4890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE7EC"))) PPC_WEAK_FUNC(sub_824DE7EC);
PPC_FUNC_IMPL(__imp__sub_824DE7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE7F0"))) PPC_WEAK_FUNC(sub_824DE7F0);
PPC_FUNC_IMPL(__imp__sub_824DE7F0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d4990
	sub_824D4990(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE804"))) PPC_WEAK_FUNC(sub_824DE804);
PPC_FUNC_IMPL(__imp__sub_824DE804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE808"))) PPC_WEAK_FUNC(sub_824DE808);
PPC_FUNC_IMPL(__imp__sub_824DE808) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d4a78
	sub_824D4A78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE81C"))) PPC_WEAK_FUNC(sub_824DE81C);
PPC_FUNC_IMPL(__imp__sub_824DE81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE820"))) PPC_WEAK_FUNC(sub_824DE820);
PPC_FUNC_IMPL(__imp__sub_824DE820) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d4b70
	sub_824D4B70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE834"))) PPC_WEAK_FUNC(sub_824DE834);
PPC_FUNC_IMPL(__imp__sub_824DE834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE838"))) PPC_WEAK_FUNC(sub_824DE838);
PPC_FUNC_IMPL(__imp__sub_824DE838) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d4c58
	sub_824D4C58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE84C"))) PPC_WEAK_FUNC(sub_824DE84C);
PPC_FUNC_IMPL(__imp__sub_824DE84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE850"))) PPC_WEAK_FUNC(sub_824DE850);
PPC_FUNC_IMPL(__imp__sub_824DE850) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d4d40
	sub_824D4D40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE864"))) PPC_WEAK_FUNC(sub_824DE864);
PPC_FUNC_IMPL(__imp__sub_824DE864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE868"))) PPC_WEAK_FUNC(sub_824DE868);
PPC_FUNC_IMPL(__imp__sub_824DE868) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d4e38
	sub_824D4E38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE87C"))) PPC_WEAK_FUNC(sub_824DE87C);
PPC_FUNC_IMPL(__imp__sub_824DE87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE880"))) PPC_WEAK_FUNC(sub_824DE880);
PPC_FUNC_IMPL(__imp__sub_824DE880) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d4f00
	sub_824D4F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE894"))) PPC_WEAK_FUNC(sub_824DE894);
PPC_FUNC_IMPL(__imp__sub_824DE894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE898"))) PPC_WEAK_FUNC(sub_824DE898);
PPC_FUNC_IMPL(__imp__sub_824DE898) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d4fe8
	sub_824D4FE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE8AC"))) PPC_WEAK_FUNC(sub_824DE8AC);
PPC_FUNC_IMPL(__imp__sub_824DE8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE8B0"))) PPC_WEAK_FUNC(sub_824DE8B0);
PPC_FUNC_IMPL(__imp__sub_824DE8B0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d5118
	sub_824D5118(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE8C4"))) PPC_WEAK_FUNC(sub_824DE8C4);
PPC_FUNC_IMPL(__imp__sub_824DE8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE8C8"))) PPC_WEAK_FUNC(sub_824DE8C8);
PPC_FUNC_IMPL(__imp__sub_824DE8C8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d5210
	sub_824D5210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE8DC"))) PPC_WEAK_FUNC(sub_824DE8DC);
PPC_FUNC_IMPL(__imp__sub_824DE8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE8E0"))) PPC_WEAK_FUNC(sub_824DE8E0);
PPC_FUNC_IMPL(__imp__sub_824DE8E0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d5310
	sub_824D5310(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE8F4"))) PPC_WEAK_FUNC(sub_824DE8F4);
PPC_FUNC_IMPL(__imp__sub_824DE8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE8F8"))) PPC_WEAK_FUNC(sub_824DE8F8);
PPC_FUNC_IMPL(__imp__sub_824DE8F8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d53f8
	sub_824D53F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE90C"))) PPC_WEAK_FUNC(sub_824DE90C);
PPC_FUNC_IMPL(__imp__sub_824DE90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE910"))) PPC_WEAK_FUNC(sub_824DE910);
PPC_FUNC_IMPL(__imp__sub_824DE910) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d5508
	sub_824D5508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE924"))) PPC_WEAK_FUNC(sub_824DE924);
PPC_FUNC_IMPL(__imp__sub_824DE924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE928"))) PPC_WEAK_FUNC(sub_824DE928);
PPC_FUNC_IMPL(__imp__sub_824DE928) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d5608
	sub_824D5608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE93C"))) PPC_WEAK_FUNC(sub_824DE93C);
PPC_FUNC_IMPL(__imp__sub_824DE93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE940"))) PPC_WEAK_FUNC(sub_824DE940);
PPC_FUNC_IMPL(__imp__sub_824DE940) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d5708
	sub_824D5708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE954"))) PPC_WEAK_FUNC(sub_824DE954);
PPC_FUNC_IMPL(__imp__sub_824DE954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE958"))) PPC_WEAK_FUNC(sub_824DE958);
PPC_FUNC_IMPL(__imp__sub_824DE958) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d57f0
	sub_824D57F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE96C"))) PPC_WEAK_FUNC(sub_824DE96C);
PPC_FUNC_IMPL(__imp__sub_824DE96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE970"))) PPC_WEAK_FUNC(sub_824DE970);
PPC_FUNC_IMPL(__imp__sub_824DE970) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d5920
	sub_824D5920(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE984"))) PPC_WEAK_FUNC(sub_824DE984);
PPC_FUNC_IMPL(__imp__sub_824DE984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE988"))) PPC_WEAK_FUNC(sub_824DE988);
PPC_FUNC_IMPL(__imp__sub_824DE988) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d5a20
	sub_824D5A20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE99C"))) PPC_WEAK_FUNC(sub_824DE99C);
PPC_FUNC_IMPL(__imp__sub_824DE99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE9A0"))) PPC_WEAK_FUNC(sub_824DE9A0);
PPC_FUNC_IMPL(__imp__sub_824DE9A0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d5ae8
	sub_824D5AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE9B4"))) PPC_WEAK_FUNC(sub_824DE9B4);
PPC_FUNC_IMPL(__imp__sub_824DE9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE9B8"))) PPC_WEAK_FUNC(sub_824DE9B8);
PPC_FUNC_IMPL(__imp__sub_824DE9B8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d5bd0
	sub_824D5BD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE9CC"))) PPC_WEAK_FUNC(sub_824DE9CC);
PPC_FUNC_IMPL(__imp__sub_824DE9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE9D0"))) PPC_WEAK_FUNC(sub_824DE9D0);
PPC_FUNC_IMPL(__imp__sub_824DE9D0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d5cd0
	sub_824D5CD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE9E4"))) PPC_WEAK_FUNC(sub_824DE9E4);
PPC_FUNC_IMPL(__imp__sub_824DE9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DE9E8"))) PPC_WEAK_FUNC(sub_824DE9E8);
PPC_FUNC_IMPL(__imp__sub_824DE9E8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d5dd0
	sub_824D5DD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DE9FC"))) PPC_WEAK_FUNC(sub_824DE9FC);
PPC_FUNC_IMPL(__imp__sub_824DE9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEA00"))) PPC_WEAK_FUNC(sub_824DEA00);
PPC_FUNC_IMPL(__imp__sub_824DEA00) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d5ef0
	sub_824D5EF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEA14"))) PPC_WEAK_FUNC(sub_824DEA14);
PPC_FUNC_IMPL(__imp__sub_824DEA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEA18"))) PPC_WEAK_FUNC(sub_824DEA18);
PPC_FUNC_IMPL(__imp__sub_824DEA18) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d5fd8
	sub_824D5FD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEA2C"))) PPC_WEAK_FUNC(sub_824DEA2C);
PPC_FUNC_IMPL(__imp__sub_824DEA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEA30"))) PPC_WEAK_FUNC(sub_824DEA30);
PPC_FUNC_IMPL(__imp__sub_824DEA30) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d60d8
	sub_824D60D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEA44"))) PPC_WEAK_FUNC(sub_824DEA44);
PPC_FUNC_IMPL(__imp__sub_824DEA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEA48"))) PPC_WEAK_FUNC(sub_824DEA48);
PPC_FUNC_IMPL(__imp__sub_824DEA48) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d61a0
	sub_824D61A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEA5C"))) PPC_WEAK_FUNC(sub_824DEA5C);
PPC_FUNC_IMPL(__imp__sub_824DEA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEA60"))) PPC_WEAK_FUNC(sub_824DEA60);
PPC_FUNC_IMPL(__imp__sub_824DEA60) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d6288
	sub_824D6288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEA74"))) PPC_WEAK_FUNC(sub_824DEA74);
PPC_FUNC_IMPL(__imp__sub_824DEA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEA78"))) PPC_WEAK_FUNC(sub_824DEA78);
PPC_FUNC_IMPL(__imp__sub_824DEA78) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d6380
	sub_824D6380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEA8C"))) PPC_WEAK_FUNC(sub_824DEA8C);
PPC_FUNC_IMPL(__imp__sub_824DEA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEA90"))) PPC_WEAK_FUNC(sub_824DEA90);
PPC_FUNC_IMPL(__imp__sub_824DEA90) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d6480
	sub_824D6480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEAA4"))) PPC_WEAK_FUNC(sub_824DEAA4);
PPC_FUNC_IMPL(__imp__sub_824DEAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEAA8"))) PPC_WEAK_FUNC(sub_824DEAA8);
PPC_FUNC_IMPL(__imp__sub_824DEAA8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d6580
	sub_824D6580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEABC"))) PPC_WEAK_FUNC(sub_824DEABC);
PPC_FUNC_IMPL(__imp__sub_824DEABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEAC0"))) PPC_WEAK_FUNC(sub_824DEAC0);
PPC_FUNC_IMPL(__imp__sub_824DEAC0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d6648
	sub_824D6648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEAD4"))) PPC_WEAK_FUNC(sub_824DEAD4);
PPC_FUNC_IMPL(__imp__sub_824DEAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEAD8"))) PPC_WEAK_FUNC(sub_824DEAD8);
PPC_FUNC_IMPL(__imp__sub_824DEAD8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d6730
	sub_824D6730(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEAEC"))) PPC_WEAK_FUNC(sub_824DEAEC);
PPC_FUNC_IMPL(__imp__sub_824DEAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEAF0"))) PPC_WEAK_FUNC(sub_824DEAF0);
PPC_FUNC_IMPL(__imp__sub_824DEAF0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d6830
	sub_824D6830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEB04"))) PPC_WEAK_FUNC(sub_824DEB04);
PPC_FUNC_IMPL(__imp__sub_824DEB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEB08"))) PPC_WEAK_FUNC(sub_824DEB08);
PPC_FUNC_IMPL(__imp__sub_824DEB08) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d6918
	sub_824D6918(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEB1C"))) PPC_WEAK_FUNC(sub_824DEB1C);
PPC_FUNC_IMPL(__imp__sub_824DEB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEB20"))) PPC_WEAK_FUNC(sub_824DEB20);
PPC_FUNC_IMPL(__imp__sub_824DEB20) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d6a18
	sub_824D6A18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEB34"))) PPC_WEAK_FUNC(sub_824DEB34);
PPC_FUNC_IMPL(__imp__sub_824DEB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEB38"))) PPC_WEAK_FUNC(sub_824DEB38);
PPC_FUNC_IMPL(__imp__sub_824DEB38) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d6af0
	sub_824D6AF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEB4C"))) PPC_WEAK_FUNC(sub_824DEB4C);
PPC_FUNC_IMPL(__imp__sub_824DEB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEB50"))) PPC_WEAK_FUNC(sub_824DEB50);
PPC_FUNC_IMPL(__imp__sub_824DEB50) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d6bf0
	sub_824D6BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEB64"))) PPC_WEAK_FUNC(sub_824DEB64);
PPC_FUNC_IMPL(__imp__sub_824DEB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEB68"))) PPC_WEAK_FUNC(sub_824DEB68);
PPC_FUNC_IMPL(__imp__sub_824DEB68) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d6cf0
	sub_824D6CF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEB7C"))) PPC_WEAK_FUNC(sub_824DEB7C);
PPC_FUNC_IMPL(__imp__sub_824DEB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEB80"))) PPC_WEAK_FUNC(sub_824DEB80);
PPC_FUNC_IMPL(__imp__sub_824DEB80) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d6dd0
	sub_824D6DD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEB94"))) PPC_WEAK_FUNC(sub_824DEB94);
PPC_FUNC_IMPL(__imp__sub_824DEB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEB98"))) PPC_WEAK_FUNC(sub_824DEB98);
PPC_FUNC_IMPL(__imp__sub_824DEB98) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d6ed0
	sub_824D6ED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEBAC"))) PPC_WEAK_FUNC(sub_824DEBAC);
PPC_FUNC_IMPL(__imp__sub_824DEBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEBB0"))) PPC_WEAK_FUNC(sub_824DEBB0);
PPC_FUNC_IMPL(__imp__sub_824DEBB0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d6fb8
	sub_824D6FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEBC4"))) PPC_WEAK_FUNC(sub_824DEBC4);
PPC_FUNC_IMPL(__imp__sub_824DEBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEBC8"))) PPC_WEAK_FUNC(sub_824DEBC8);
PPC_FUNC_IMPL(__imp__sub_824DEBC8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d70b8
	sub_824D70B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEBDC"))) PPC_WEAK_FUNC(sub_824DEBDC);
PPC_FUNC_IMPL(__imp__sub_824DEBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEBE0"))) PPC_WEAK_FUNC(sub_824DEBE0);
PPC_FUNC_IMPL(__imp__sub_824DEBE0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d71d0
	sub_824D71D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEBF4"))) PPC_WEAK_FUNC(sub_824DEBF4);
PPC_FUNC_IMPL(__imp__sub_824DEBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEBF8"))) PPC_WEAK_FUNC(sub_824DEBF8);
PPC_FUNC_IMPL(__imp__sub_824DEBF8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d72c8
	sub_824D72C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEC0C"))) PPC_WEAK_FUNC(sub_824DEC0C);
PPC_FUNC_IMPL(__imp__sub_824DEC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEC10"))) PPC_WEAK_FUNC(sub_824DEC10);
PPC_FUNC_IMPL(__imp__sub_824DEC10) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d73e0
	sub_824D73E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEC24"))) PPC_WEAK_FUNC(sub_824DEC24);
PPC_FUNC_IMPL(__imp__sub_824DEC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEC28"))) PPC_WEAK_FUNC(sub_824DEC28);
PPC_FUNC_IMPL(__imp__sub_824DEC28) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d74f0
	sub_824D74F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEC3C"))) PPC_WEAK_FUNC(sub_824DEC3C);
PPC_FUNC_IMPL(__imp__sub_824DEC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEC40"))) PPC_WEAK_FUNC(sub_824DEC40);
PPC_FUNC_IMPL(__imp__sub_824DEC40) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d75b8
	sub_824D75B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEC54"))) PPC_WEAK_FUNC(sub_824DEC54);
PPC_FUNC_IMPL(__imp__sub_824DEC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEC58"))) PPC_WEAK_FUNC(sub_824DEC58);
PPC_FUNC_IMPL(__imp__sub_824DEC58) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d76b0
	sub_824D76B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEC6C"))) PPC_WEAK_FUNC(sub_824DEC6C);
PPC_FUNC_IMPL(__imp__sub_824DEC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEC70"))) PPC_WEAK_FUNC(sub_824DEC70);
PPC_FUNC_IMPL(__imp__sub_824DEC70) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d7798
	sub_824D7798(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEC84"))) PPC_WEAK_FUNC(sub_824DEC84);
PPC_FUNC_IMPL(__imp__sub_824DEC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEC88"))) PPC_WEAK_FUNC(sub_824DEC88);
PPC_FUNC_IMPL(__imp__sub_824DEC88) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d7880
	sub_824D7880(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEC9C"))) PPC_WEAK_FUNC(sub_824DEC9C);
PPC_FUNC_IMPL(__imp__sub_824DEC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DECA0"))) PPC_WEAK_FUNC(sub_824DECA0);
PPC_FUNC_IMPL(__imp__sub_824DECA0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d7948
	sub_824D7948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DECB4"))) PPC_WEAK_FUNC(sub_824DECB4);
PPC_FUNC_IMPL(__imp__sub_824DECB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DECB8"))) PPC_WEAK_FUNC(sub_824DECB8);
PPC_FUNC_IMPL(__imp__sub_824DECB8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d7a48
	sub_824D7A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DECCC"))) PPC_WEAK_FUNC(sub_824DECCC);
PPC_FUNC_IMPL(__imp__sub_824DECCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DECD0"))) PPC_WEAK_FUNC(sub_824DECD0);
PPC_FUNC_IMPL(__imp__sub_824DECD0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d7b40
	sub_824D7B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DECE4"))) PPC_WEAK_FUNC(sub_824DECE4);
PPC_FUNC_IMPL(__imp__sub_824DECE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DECE8"))) PPC_WEAK_FUNC(sub_824DECE8);
PPC_FUNC_IMPL(__imp__sub_824DECE8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d7c40
	sub_824D7C40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DECFC"))) PPC_WEAK_FUNC(sub_824DECFC);
PPC_FUNC_IMPL(__imp__sub_824DECFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DED00"))) PPC_WEAK_FUNC(sub_824DED00);
PPC_FUNC_IMPL(__imp__sub_824DED00) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d7d28
	sub_824D7D28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DED14"))) PPC_WEAK_FUNC(sub_824DED14);
PPC_FUNC_IMPL(__imp__sub_824DED14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DED18"))) PPC_WEAK_FUNC(sub_824DED18);
PPC_FUNC_IMPL(__imp__sub_824DED18) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d7e28
	sub_824D7E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DED2C"))) PPC_WEAK_FUNC(sub_824DED2C);
PPC_FUNC_IMPL(__imp__sub_824DED2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DED30"))) PPC_WEAK_FUNC(sub_824DED30);
PPC_FUNC_IMPL(__imp__sub_824DED30) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d7f28
	sub_824D7F28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DED44"))) PPC_WEAK_FUNC(sub_824DED44);
PPC_FUNC_IMPL(__imp__sub_824DED44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DED48"))) PPC_WEAK_FUNC(sub_824DED48);
PPC_FUNC_IMPL(__imp__sub_824DED48) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d8010
	sub_824D8010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DED5C"))) PPC_WEAK_FUNC(sub_824DED5C);
PPC_FUNC_IMPL(__imp__sub_824DED5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DED60"))) PPC_WEAK_FUNC(sub_824DED60);
PPC_FUNC_IMPL(__imp__sub_824DED60) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d8128
	sub_824D8128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DED74"))) PPC_WEAK_FUNC(sub_824DED74);
PPC_FUNC_IMPL(__imp__sub_824DED74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DED78"))) PPC_WEAK_FUNC(sub_824DED78);
PPC_FUNC_IMPL(__imp__sub_824DED78) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d8238
	sub_824D8238(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DED8C"))) PPC_WEAK_FUNC(sub_824DED8C);
PPC_FUNC_IMPL(__imp__sub_824DED8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DED90"))) PPC_WEAK_FUNC(sub_824DED90);
PPC_FUNC_IMPL(__imp__sub_824DED90) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d8338
	sub_824D8338(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEDA4"))) PPC_WEAK_FUNC(sub_824DEDA4);
PPC_FUNC_IMPL(__imp__sub_824DEDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEDA8"))) PPC_WEAK_FUNC(sub_824DEDA8);
PPC_FUNC_IMPL(__imp__sub_824DEDA8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d8438
	sub_824D8438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEDBC"))) PPC_WEAK_FUNC(sub_824DEDBC);
PPC_FUNC_IMPL(__imp__sub_824DEDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEDC0"))) PPC_WEAK_FUNC(sub_824DEDC0);
PPC_FUNC_IMPL(__imp__sub_824DEDC0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d8548
	sub_824D8548(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEDD4"))) PPC_WEAK_FUNC(sub_824DEDD4);
PPC_FUNC_IMPL(__imp__sub_824DEDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824DEDD8"))) PPC_WEAK_FUNC(sub_824DEDD8);
PPC_FUNC_IMPL(__imp__sub_824DEDD8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d8668
	sub_824D8668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824DEDEC"))) PPC_WEAK_FUNC(sub_824DEDEC);
PPC_FUNC_IMPL(__imp__sub_824DEDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

