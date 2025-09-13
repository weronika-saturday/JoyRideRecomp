#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F3D6E8"))) PPC_WEAK_FUNC(sub_82F3D6E8);
PPC_FUNC_IMPL(__imp__sub_82F3D6E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3D6EC"))) PPC_WEAK_FUNC(sub_82F3D6EC);
PPC_FUNC_IMPL(__imp__sub_82F3D6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D6F0"))) PPC_WEAK_FUNC(sub_82F3D6F0);
PPC_FUNC_IMPL(__imp__sub_82F3D6F0) {
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
	// stw r11,-23668(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23668, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D718"))) PPC_WEAK_FUNC(sub_82F3D718);
PPC_FUNC_IMPL(__imp__sub_82F3D718) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D71C"))) PPC_WEAK_FUNC(sub_82F3D71C);
PPC_FUNC_IMPL(__imp__sub_82F3D71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D720"))) PPC_WEAK_FUNC(sub_82F3D720);
PPC_FUNC_IMPL(__imp__sub_82F3D720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20208
	ctx.r3.s64 = r11.s64 + -20208;
}

__attribute__((alias("__imp__sub_82F3D728"))) PPC_WEAK_FUNC(sub_82F3D728);
PPC_FUNC_IMPL(__imp__sub_82F3D728) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3D72C"))) PPC_WEAK_FUNC(sub_82F3D72C);
PPC_FUNC_IMPL(__imp__sub_82F3D72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D730"))) PPC_WEAK_FUNC(sub_82F3D730);
PPC_FUNC_IMPL(__imp__sub_82F3D730) {
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
	// stw r11,-23648(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23648, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D758"))) PPC_WEAK_FUNC(sub_82F3D758);
PPC_FUNC_IMPL(__imp__sub_82F3D758) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D75C"))) PPC_WEAK_FUNC(sub_82F3D75C);
PPC_FUNC_IMPL(__imp__sub_82F3D75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D760"))) PPC_WEAK_FUNC(sub_82F3D760);
PPC_FUNC_IMPL(__imp__sub_82F3D760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20200
	ctx.r3.s64 = r11.s64 + -20200;
}

__attribute__((alias("__imp__sub_82F3D768"))) PPC_WEAK_FUNC(sub_82F3D768);
PPC_FUNC_IMPL(__imp__sub_82F3D768) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3D76C"))) PPC_WEAK_FUNC(sub_82F3D76C);
PPC_FUNC_IMPL(__imp__sub_82F3D76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D770"))) PPC_WEAK_FUNC(sub_82F3D770);
PPC_FUNC_IMPL(__imp__sub_82F3D770) {
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
	// stw r11,-23624(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23624, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3D798"))) PPC_WEAK_FUNC(sub_82F3D798);
PPC_FUNC_IMPL(__imp__sub_82F3D798) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3D79C"))) PPC_WEAK_FUNC(sub_82F3D79C);
PPC_FUNC_IMPL(__imp__sub_82F3D79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3D7A0"))) PPC_WEAK_FUNC(sub_82F3D7A0);
PPC_FUNC_IMPL(__imp__sub_82F3D7A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r10,5381
	ctx.r10.s64 = 5381;
	// addi r9,r11,23072
	ctx.r9.s64 = r11.s64 + 23072;
	// lbz r11,23072(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 23072);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f3d7d8
	if (cr6.eq) goto loc_82F3D7D8;
loc_82F3D7BC:
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
	// bne cr6,0x82f3d7bc
	if (!cr6.eq) goto loc_82F3D7BC;
loc_82F3D7D8:
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r9,r8,23060
	ctx.r9.s64 = ctx.r8.s64 + 23060;
	// addi r6,r11,-26112
	ctx.r6.s64 = r11.s64 + -26112;
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,23060(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 23060);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82f3d820
	if (cr6.eq) goto loc_82F3D820;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82F3D804:
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
	// bne cr6,0x82f3d804
	if (!cr6.eq) goto loc_82F3D804;
loc_82F3D820:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, r11.u32);
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,23048
	ctx.r9.s64 = ctx.r10.s64 + 23048;
	// lbz r10,23048(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 23048);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f3d85c
	if (cr6.eq) goto loc_82F3D85C;
loc_82F3D840:
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
	// bne cr6,0x82f3d840
	if (!cr6.eq) goto loc_82F3D840;
loc_82F3D85C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, r11.u32);
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,14820
	ctx.r9.s64 = ctx.r10.s64 + 14820;
	// lbz r10,14820(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14820);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f3d898
	if (cr6.eq) goto loc_82F3D898;
loc_82F3D87C:
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
	// bne cr6,0x82f3d87c
	if (!cr6.eq) goto loc_82F3D87C;
loc_82F3D898:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,52(r6)
	PPC_STORE_U32(ctx.r6.u32 + 52, r11.u32);
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,23036
	ctx.r9.s64 = ctx.r10.s64 + 23036;
	// lbz r10,23036(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 23036);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f3d8d4
	if (cr6.eq) goto loc_82F3D8D4;
loc_82F3D8B8:
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
	// bne cr6,0x82f3d8b8
	if (!cr6.eq) goto loc_82F3D8B8;
loc_82F3D8D4:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,68(r6)
	PPC_STORE_U32(ctx.r6.u32 + 68, r11.u32);
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-31420
	ctx.r9.s64 = ctx.r10.s64 + -31420;
	// lbz r10,-31420(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + -31420);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f3d910
	if (cr6.eq) goto loc_82F3D910;
loc_82F3D8F4:
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
	// bne cr6,0x82f3d8f4
	if (!cr6.eq) goto loc_82F3D8F4;
loc_82F3D910:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,84(r6)
	PPC_STORE_U32(ctx.r6.u32 + 84, r11.u32);
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,23016
	ctx.r9.s64 = ctx.r10.s64 + 23016;
	// lbz r10,23016(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 23016);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f3d94c
	if (cr6.eq) goto loc_82F3D94C;
loc_82F3D930:
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
	// bne cr6,0x82f3d930
	if (!cr6.eq) goto loc_82F3D930;
loc_82F3D94C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,100(r6)
	PPC_STORE_U32(ctx.r6.u32 + 100, r11.u32);
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,22996
	ctx.r9.s64 = ctx.r10.s64 + 22996;
	// lbz r10,22996(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 22996);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f3d988
	if (cr6.eq) goto loc_82F3D988;
loc_82F3D96C:
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
	// bne cr6,0x82f3d96c
	if (!cr6.eq) goto loc_82F3D96C;
loc_82F3D988:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,116(r6)
	PPC_STORE_U32(ctx.r6.u32 + 116, r11.u32);
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,22984
	ctx.r9.s64 = ctx.r10.s64 + 22984;
	// lbz r10,22984(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 22984);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f3d9c4
	if (cr6.eq) goto loc_82F3D9C4;
loc_82F3D9A8:
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
	// bne cr6,0x82f3d9a8
	if (!cr6.eq) goto loc_82F3D9A8;
loc_82F3D9C4:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,132(r6)
	PPC_STORE_U32(ctx.r6.u32 + 132, r11.u32);
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,22972
	ctx.r9.s64 = ctx.r10.s64 + 22972;
	// lbz r10,22972(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 22972);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f3da00
	if (cr6.eq) goto loc_82F3DA00;
loc_82F3D9E4:
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
	// bne cr6,0x82f3d9e4
	if (!cr6.eq) goto loc_82F3D9E4;
loc_82F3DA00:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,148(r6)
	PPC_STORE_U32(ctx.r6.u32 + 148, r11.u32);
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,22952
	ctx.r9.s64 = ctx.r10.s64 + 22952;
	// lbz r10,22952(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 22952);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f3da3c
	if (cr6.eq) goto loc_82F3DA3C;
loc_82F3DA20:
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
	// bne cr6,0x82f3da20
	if (!cr6.eq) goto loc_82F3DA20;
loc_82F3DA3C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,164(r6)
	PPC_STORE_U32(ctx.r6.u32 + 164, r11.u32);
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,22932
	ctx.r9.s64 = ctx.r10.s64 + 22932;
	// lbz r10,22932(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 22932);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f3da78
	if (cr6.eq) goto loc_82F3DA78;
loc_82F3DA5C:
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
	// bne cr6,0x82f3da5c
	if (!cr6.eq) goto loc_82F3DA5C;
loc_82F3DA78:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,180(r6)
	PPC_STORE_U32(ctx.r6.u32 + 180, r11.u32);
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,22920
	ctx.r9.s64 = ctx.r10.s64 + 22920;
	// lbz r10,22920(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 22920);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f3dab4
	if (cr6.eq) goto loc_82F3DAB4;
loc_82F3DA98:
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
	// bne cr6,0x82f3da98
	if (!cr6.eq) goto loc_82F3DA98;
loc_82F3DAB4:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, r11.u32);
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,22904
	ctx.r9.s64 = ctx.r10.s64 + 22904;
	// lbz r10,22904(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 22904);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f3daf0
	if (cr6.eq) goto loc_82F3DAF0;
loc_82F3DAD4:
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
	// bne cr6,0x82f3dad4
	if (!cr6.eq) goto loc_82F3DAD4;
loc_82F3DAF0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,212(r6)
	PPC_STORE_U32(ctx.r6.u32 + 212, r11.u32);
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,22888
	ctx.r9.s64 = ctx.r10.s64 + 22888;
	// lbz r10,22888(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 22888);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f3db2c
	if (cr6.eq) goto loc_82F3DB2C;
loc_82F3DB10:
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
	// bne cr6,0x82f3db10
	if (!cr6.eq) goto loc_82F3DB10;
loc_82F3DB2C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,228(r6)
	PPC_STORE_U32(ctx.r6.u32 + 228, r11.u32);
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,22876
	ctx.r9.s64 = ctx.r10.s64 + 22876;
	// lbz r10,22876(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 22876);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f3db68
	if (cr6.eq) goto loc_82F3DB68;
loc_82F3DB4C:
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
	// bne cr6,0x82f3db4c
	if (!cr6.eq) goto loc_82F3DB4C;
loc_82F3DB68:
	// stw r11,244(r6)
	PPC_STORE_U32(ctx.r6.u32 + 244, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3DB70"))) PPC_WEAK_FUNC(sub_82F3DB70);
PPC_FUNC_IMPL(__imp__sub_82F3DB70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,23088
	ctx.r9.s64 = ctx.r10.s64 + 23088;
	// li r10,77
	ctx.r10.s64 = 77;
loc_82F3DB80:
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
	// bne cr6,0x82f3db80
	if (!cr6.eq) goto loc_82F3DB80;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-23620(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23620, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3DBA8"))) PPC_WEAK_FUNC(sub_82F3DBA8);
PPC_FUNC_IMPL(__imp__sub_82F3DBA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,23096
	ctx.r9.s64 = ctx.r10.s64 + 23096;
	// li r10,70
	ctx.r10.s64 = 70;
loc_82F3DBB8:
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
	// bne cr6,0x82f3dbb8
	if (!cr6.eq) goto loc_82F3DBB8;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-23616(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23616, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3DBE0"))) PPC_WEAK_FUNC(sub_82F3DBE0);
PPC_FUNC_IMPL(__imp__sub_82F3DBE0) {
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
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-25704
	ctx.r3.s64 = ctx.r10.s64 + -25704;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-23608(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23608, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3DC18"))) PPC_WEAK_FUNC(sub_82F3DC18);
PPC_FUNC_IMPL(__imp__sub_82F3DC18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3DC1C"))) PPC_WEAK_FUNC(sub_82F3DC1C);
PPC_FUNC_IMPL(__imp__sub_82F3DC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DC20"))) PPC_WEAK_FUNC(sub_82F3DC20);
PPC_FUNC_IMPL(__imp__sub_82F3DC20) {
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
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-24704
	ctx.r3.s64 = ctx.r10.s64 + -24704;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-23612(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23612, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3DC58"))) PPC_WEAK_FUNC(sub_82F3DC58);
PPC_FUNC_IMPL(__imp__sub_82F3DC58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3DC5C"))) PPC_WEAK_FUNC(sub_82F3DC5C);
PPC_FUNC_IMPL(__imp__sub_82F3DC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DC60"))) PPC_WEAK_FUNC(sub_82F3DC60);
PPC_FUNC_IMPL(__imp__sub_82F3DC60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20192
	ctx.r3.s64 = r11.s64 + -20192;
}

__attribute__((alias("__imp__sub_82F3DC68"))) PPC_WEAK_FUNC(sub_82F3DC68);
PPC_FUNC_IMPL(__imp__sub_82F3DC68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3DC6C"))) PPC_WEAK_FUNC(sub_82F3DC6C);
PPC_FUNC_IMPL(__imp__sub_82F3DC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DC70"))) PPC_WEAK_FUNC(sub_82F3DC70);
PPC_FUNC_IMPL(__imp__sub_82F3DC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20104
	ctx.r3.s64 = r11.s64 + -20104;
}

__attribute__((alias("__imp__sub_82F3DC78"))) PPC_WEAK_FUNC(sub_82F3DC78);
PPC_FUNC_IMPL(__imp__sub_82F3DC78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3DC7C"))) PPC_WEAK_FUNC(sub_82F3DC7C);
PPC_FUNC_IMPL(__imp__sub_82F3DC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DC80"))) PPC_WEAK_FUNC(sub_82F3DC80);
PPC_FUNC_IMPL(__imp__sub_82F3DC80) {
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
	// stw r11,-23304(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23304, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3DCA8"))) PPC_WEAK_FUNC(sub_82F3DCA8);
PPC_FUNC_IMPL(__imp__sub_82F3DCA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3DCAC"))) PPC_WEAK_FUNC(sub_82F3DCAC);
PPC_FUNC_IMPL(__imp__sub_82F3DCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DCB0"))) PPC_WEAK_FUNC(sub_82F3DCB0);
PPC_FUNC_IMPL(__imp__sub_82F3DCB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20096
	ctx.r3.s64 = r11.s64 + -20096;
}

__attribute__((alias("__imp__sub_82F3DCB8"))) PPC_WEAK_FUNC(sub_82F3DCB8);
PPC_FUNC_IMPL(__imp__sub_82F3DCB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3DCBC"))) PPC_WEAK_FUNC(sub_82F3DCBC);
PPC_FUNC_IMPL(__imp__sub_82F3DCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DCC0"))) PPC_WEAK_FUNC(sub_82F3DCC0);
PPC_FUNC_IMPL(__imp__sub_82F3DCC0) {
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
	// stw r11,-23284(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23284, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3DCE8"))) PPC_WEAK_FUNC(sub_82F3DCE8);
PPC_FUNC_IMPL(__imp__sub_82F3DCE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3DCEC"))) PPC_WEAK_FUNC(sub_82F3DCEC);
PPC_FUNC_IMPL(__imp__sub_82F3DCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DCF0"))) PPC_WEAK_FUNC(sub_82F3DCF0);
PPC_FUNC_IMPL(__imp__sub_82F3DCF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20088
	ctx.r3.s64 = r11.s64 + -20088;
}

__attribute__((alias("__imp__sub_82F3DCF8"))) PPC_WEAK_FUNC(sub_82F3DCF8);
PPC_FUNC_IMPL(__imp__sub_82F3DCF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3DCFC"))) PPC_WEAK_FUNC(sub_82F3DCFC);
PPC_FUNC_IMPL(__imp__sub_82F3DCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DD00"))) PPC_WEAK_FUNC(sub_82F3DD00);
PPC_FUNC_IMPL(__imp__sub_82F3DD00) {
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
	// stw r11,-23264(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23264, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3DD28"))) PPC_WEAK_FUNC(sub_82F3DD28);
PPC_FUNC_IMPL(__imp__sub_82F3DD28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3DD2C"))) PPC_WEAK_FUNC(sub_82F3DD2C);
PPC_FUNC_IMPL(__imp__sub_82F3DD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DD30"))) PPC_WEAK_FUNC(sub_82F3DD30);
PPC_FUNC_IMPL(__imp__sub_82F3DD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20080
	ctx.r3.s64 = r11.s64 + -20080;
}

__attribute__((alias("__imp__sub_82F3DD38"))) PPC_WEAK_FUNC(sub_82F3DD38);
PPC_FUNC_IMPL(__imp__sub_82F3DD38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3DD3C"))) PPC_WEAK_FUNC(sub_82F3DD3C);
PPC_FUNC_IMPL(__imp__sub_82F3DD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DD40"))) PPC_WEAK_FUNC(sub_82F3DD40);
PPC_FUNC_IMPL(__imp__sub_82F3DD40) {
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
	// stw r11,-23244(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23244, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3DD68"))) PPC_WEAK_FUNC(sub_82F3DD68);
PPC_FUNC_IMPL(__imp__sub_82F3DD68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3DD6C"))) PPC_WEAK_FUNC(sub_82F3DD6C);
PPC_FUNC_IMPL(__imp__sub_82F3DD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DD70"))) PPC_WEAK_FUNC(sub_82F3DD70);
PPC_FUNC_IMPL(__imp__sub_82F3DD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20072
	ctx.r3.s64 = r11.s64 + -20072;
}

__attribute__((alias("__imp__sub_82F3DD78"))) PPC_WEAK_FUNC(sub_82F3DD78);
PPC_FUNC_IMPL(__imp__sub_82F3DD78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3DD7C"))) PPC_WEAK_FUNC(sub_82F3DD7C);
PPC_FUNC_IMPL(__imp__sub_82F3DD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DD80"))) PPC_WEAK_FUNC(sub_82F3DD80);
PPC_FUNC_IMPL(__imp__sub_82F3DD80) {
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
	// stw r11,-23144(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23144, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3DDA8"))) PPC_WEAK_FUNC(sub_82F3DDA8);
PPC_FUNC_IMPL(__imp__sub_82F3DDA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3DDAC"))) PPC_WEAK_FUNC(sub_82F3DDAC);
PPC_FUNC_IMPL(__imp__sub_82F3DDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DDB0"))) PPC_WEAK_FUNC(sub_82F3DDB0);
PPC_FUNC_IMPL(__imp__sub_82F3DDB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20064
	ctx.r3.s64 = r11.s64 + -20064;
}

__attribute__((alias("__imp__sub_82F3DDB8"))) PPC_WEAK_FUNC(sub_82F3DDB8);
PPC_FUNC_IMPL(__imp__sub_82F3DDB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3DDBC"))) PPC_WEAK_FUNC(sub_82F3DDBC);
PPC_FUNC_IMPL(__imp__sub_82F3DDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DDC0"))) PPC_WEAK_FUNC(sub_82F3DDC0);
PPC_FUNC_IMPL(__imp__sub_82F3DDC0) {
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
	// stw r11,-23124(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23124, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3DDE8"))) PPC_WEAK_FUNC(sub_82F3DDE8);
PPC_FUNC_IMPL(__imp__sub_82F3DDE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3DDEC"))) PPC_WEAK_FUNC(sub_82F3DDEC);
PPC_FUNC_IMPL(__imp__sub_82F3DDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DDF0"))) PPC_WEAK_FUNC(sub_82F3DDF0);
PPC_FUNC_IMPL(__imp__sub_82F3DDF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20056
	ctx.r3.s64 = r11.s64 + -20056;
}

__attribute__((alias("__imp__sub_82F3DDF8"))) PPC_WEAK_FUNC(sub_82F3DDF8);
PPC_FUNC_IMPL(__imp__sub_82F3DDF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3DDFC"))) PPC_WEAK_FUNC(sub_82F3DDFC);
PPC_FUNC_IMPL(__imp__sub_82F3DDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DE00"))) PPC_WEAK_FUNC(sub_82F3DE00);
PPC_FUNC_IMPL(__imp__sub_82F3DE00) {
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
	// stw r11,-23104(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23104, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3DE28"))) PPC_WEAK_FUNC(sub_82F3DE28);
PPC_FUNC_IMPL(__imp__sub_82F3DE28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3DE2C"))) PPC_WEAK_FUNC(sub_82F3DE2C);
PPC_FUNC_IMPL(__imp__sub_82F3DE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DE30"))) PPC_WEAK_FUNC(sub_82F3DE30);
PPC_FUNC_IMPL(__imp__sub_82F3DE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20048
	ctx.r3.s64 = r11.s64 + -20048;
}

__attribute__((alias("__imp__sub_82F3DE38"))) PPC_WEAK_FUNC(sub_82F3DE38);
PPC_FUNC_IMPL(__imp__sub_82F3DE38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3DE3C"))) PPC_WEAK_FUNC(sub_82F3DE3C);
PPC_FUNC_IMPL(__imp__sub_82F3DE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DE40"))) PPC_WEAK_FUNC(sub_82F3DE40);
PPC_FUNC_IMPL(__imp__sub_82F3DE40) {
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
	// stw r11,-23084(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23084, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3DE68"))) PPC_WEAK_FUNC(sub_82F3DE68);
PPC_FUNC_IMPL(__imp__sub_82F3DE68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3DE6C"))) PPC_WEAK_FUNC(sub_82F3DE6C);
PPC_FUNC_IMPL(__imp__sub_82F3DE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DE70"))) PPC_WEAK_FUNC(sub_82F3DE70);
PPC_FUNC_IMPL(__imp__sub_82F3DE70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20040
	ctx.r3.s64 = r11.s64 + -20040;
}

__attribute__((alias("__imp__sub_82F3DE78"))) PPC_WEAK_FUNC(sub_82F3DE78);
PPC_FUNC_IMPL(__imp__sub_82F3DE78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3DE7C"))) PPC_WEAK_FUNC(sub_82F3DE7C);
PPC_FUNC_IMPL(__imp__sub_82F3DE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DE80"))) PPC_WEAK_FUNC(sub_82F3DE80);
PPC_FUNC_IMPL(__imp__sub_82F3DE80) {
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
	// stw r11,-23064(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23064, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3DEA8"))) PPC_WEAK_FUNC(sub_82F3DEA8);
PPC_FUNC_IMPL(__imp__sub_82F3DEA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3DEAC"))) PPC_WEAK_FUNC(sub_82F3DEAC);
PPC_FUNC_IMPL(__imp__sub_82F3DEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DEB0"))) PPC_WEAK_FUNC(sub_82F3DEB0);
PPC_FUNC_IMPL(__imp__sub_82F3DEB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20032
	ctx.r3.s64 = r11.s64 + -20032;
}

__attribute__((alias("__imp__sub_82F3DEB8"))) PPC_WEAK_FUNC(sub_82F3DEB8);
PPC_FUNC_IMPL(__imp__sub_82F3DEB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3DEBC"))) PPC_WEAK_FUNC(sub_82F3DEBC);
PPC_FUNC_IMPL(__imp__sub_82F3DEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DEC0"))) PPC_WEAK_FUNC(sub_82F3DEC0);
PPC_FUNC_IMPL(__imp__sub_82F3DEC0) {
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
	// stw r11,-23044(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23044, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3DEE8"))) PPC_WEAK_FUNC(sub_82F3DEE8);
PPC_FUNC_IMPL(__imp__sub_82F3DEE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3DEEC"))) PPC_WEAK_FUNC(sub_82F3DEEC);
PPC_FUNC_IMPL(__imp__sub_82F3DEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DEF0"))) PPC_WEAK_FUNC(sub_82F3DEF0);
PPC_FUNC_IMPL(__imp__sub_82F3DEF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20024
	ctx.r3.s64 = r11.s64 + -20024;
}

__attribute__((alias("__imp__sub_82F3DEF8"))) PPC_WEAK_FUNC(sub_82F3DEF8);
PPC_FUNC_IMPL(__imp__sub_82F3DEF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3DEFC"))) PPC_WEAK_FUNC(sub_82F3DEFC);
PPC_FUNC_IMPL(__imp__sub_82F3DEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DF00"))) PPC_WEAK_FUNC(sub_82F3DF00);
PPC_FUNC_IMPL(__imp__sub_82F3DF00) {
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
	// stw r11,-23024(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23024, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3DF28"))) PPC_WEAK_FUNC(sub_82F3DF28);
PPC_FUNC_IMPL(__imp__sub_82F3DF28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3DF2C"))) PPC_WEAK_FUNC(sub_82F3DF2C);
PPC_FUNC_IMPL(__imp__sub_82F3DF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DF30"))) PPC_WEAK_FUNC(sub_82F3DF30);
PPC_FUNC_IMPL(__imp__sub_82F3DF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20016
	ctx.r3.s64 = r11.s64 + -20016;
}

__attribute__((alias("__imp__sub_82F3DF38"))) PPC_WEAK_FUNC(sub_82F3DF38);
PPC_FUNC_IMPL(__imp__sub_82F3DF38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3DF3C"))) PPC_WEAK_FUNC(sub_82F3DF3C);
PPC_FUNC_IMPL(__imp__sub_82F3DF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DF40"))) PPC_WEAK_FUNC(sub_82F3DF40);
PPC_FUNC_IMPL(__imp__sub_82F3DF40) {
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
	// stw r11,-23004(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23004, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3DF68"))) PPC_WEAK_FUNC(sub_82F3DF68);
PPC_FUNC_IMPL(__imp__sub_82F3DF68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3DF6C"))) PPC_WEAK_FUNC(sub_82F3DF6C);
PPC_FUNC_IMPL(__imp__sub_82F3DF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DF70"))) PPC_WEAK_FUNC(sub_82F3DF70);
PPC_FUNC_IMPL(__imp__sub_82F3DF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20008
	ctx.r3.s64 = r11.s64 + -20008;
}

__attribute__((alias("__imp__sub_82F3DF78"))) PPC_WEAK_FUNC(sub_82F3DF78);
PPC_FUNC_IMPL(__imp__sub_82F3DF78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3DF7C"))) PPC_WEAK_FUNC(sub_82F3DF7C);
PPC_FUNC_IMPL(__imp__sub_82F3DF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DF80"))) PPC_WEAK_FUNC(sub_82F3DF80);
PPC_FUNC_IMPL(__imp__sub_82F3DF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-20000
	ctx.r3.s64 = r11.s64 + -20000;
}

__attribute__((alias("__imp__sub_82F3DF88"))) PPC_WEAK_FUNC(sub_82F3DF88);
PPC_FUNC_IMPL(__imp__sub_82F3DF88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3DF8C"))) PPC_WEAK_FUNC(sub_82F3DF8C);
PPC_FUNC_IMPL(__imp__sub_82F3DF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DF90"))) PPC_WEAK_FUNC(sub_82F3DF90);
PPC_FUNC_IMPL(__imp__sub_82F3DF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19992
	ctx.r3.s64 = r11.s64 + -19992;
}

__attribute__((alias("__imp__sub_82F3DF98"))) PPC_WEAK_FUNC(sub_82F3DF98);
PPC_FUNC_IMPL(__imp__sub_82F3DF98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3DF9C"))) PPC_WEAK_FUNC(sub_82F3DF9C);
PPC_FUNC_IMPL(__imp__sub_82F3DF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DFA0"))) PPC_WEAK_FUNC(sub_82F3DFA0);
PPC_FUNC_IMPL(__imp__sub_82F3DFA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19984
	ctx.r3.s64 = r11.s64 + -19984;
}

__attribute__((alias("__imp__sub_82F3DFA8"))) PPC_WEAK_FUNC(sub_82F3DFA8);
PPC_FUNC_IMPL(__imp__sub_82F3DFA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3DFAC"))) PPC_WEAK_FUNC(sub_82F3DFAC);
PPC_FUNC_IMPL(__imp__sub_82F3DFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DFB0"))) PPC_WEAK_FUNC(sub_82F3DFB0);
PPC_FUNC_IMPL(__imp__sub_82F3DFB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19976
	ctx.r3.s64 = r11.s64 + -19976;
}

__attribute__((alias("__imp__sub_82F3DFB8"))) PPC_WEAK_FUNC(sub_82F3DFB8);
PPC_FUNC_IMPL(__imp__sub_82F3DFB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3DFBC"))) PPC_WEAK_FUNC(sub_82F3DFBC);
PPC_FUNC_IMPL(__imp__sub_82F3DFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DFC0"))) PPC_WEAK_FUNC(sub_82F3DFC0);
PPC_FUNC_IMPL(__imp__sub_82F3DFC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19968
	ctx.r3.s64 = r11.s64 + -19968;
}

__attribute__((alias("__imp__sub_82F3DFC8"))) PPC_WEAK_FUNC(sub_82F3DFC8);
PPC_FUNC_IMPL(__imp__sub_82F3DFC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3DFCC"))) PPC_WEAK_FUNC(sub_82F3DFCC);
PPC_FUNC_IMPL(__imp__sub_82F3DFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3DFD0"))) PPC_WEAK_FUNC(sub_82F3DFD0);
PPC_FUNC_IMPL(__imp__sub_82F3DFD0) {
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
	// stw r11,-22984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22984, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3DFF8"))) PPC_WEAK_FUNC(sub_82F3DFF8);
PPC_FUNC_IMPL(__imp__sub_82F3DFF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3DFFC"))) PPC_WEAK_FUNC(sub_82F3DFFC);
PPC_FUNC_IMPL(__imp__sub_82F3DFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E000"))) PPC_WEAK_FUNC(sub_82F3E000);
PPC_FUNC_IMPL(__imp__sub_82F3E000) {
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
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-18364
	ctx.r3.s64 = ctx.r10.s64 + -18364;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-22976(r9)
	PPC_STORE_U32(ctx.r9.u32 + -22976, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3E038"))) PPC_WEAK_FUNC(sub_82F3E038);
PPC_FUNC_IMPL(__imp__sub_82F3E038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E03C"))) PPC_WEAK_FUNC(sub_82F3E03C);
PPC_FUNC_IMPL(__imp__sub_82F3E03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E040"))) PPC_WEAK_FUNC(sub_82F3E040);
PPC_FUNC_IMPL(__imp__sub_82F3E040) {
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
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-18312
	ctx.r3.s64 = ctx.r10.s64 + -18312;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-22980(r9)
	PPC_STORE_U32(ctx.r9.u32 + -22980, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3E078"))) PPC_WEAK_FUNC(sub_82F3E078);
PPC_FUNC_IMPL(__imp__sub_82F3E078) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E07C"))) PPC_WEAK_FUNC(sub_82F3E07C);
PPC_FUNC_IMPL(__imp__sub_82F3E07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E080"))) PPC_WEAK_FUNC(sub_82F3E080);
PPC_FUNC_IMPL(__imp__sub_82F3E080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19960
	ctx.r3.s64 = r11.s64 + -19960;
}

__attribute__((alias("__imp__sub_82F3E088"))) PPC_WEAK_FUNC(sub_82F3E088);
PPC_FUNC_IMPL(__imp__sub_82F3E088) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3E08C"))) PPC_WEAK_FUNC(sub_82F3E08C);
PPC_FUNC_IMPL(__imp__sub_82F3E08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E090"))) PPC_WEAK_FUNC(sub_82F3E090);
PPC_FUNC_IMPL(__imp__sub_82F3E090) {
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
	// stw r11,-22956(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22956, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3E0B8"))) PPC_WEAK_FUNC(sub_82F3E0B8);
PPC_FUNC_IMPL(__imp__sub_82F3E0B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E0BC"))) PPC_WEAK_FUNC(sub_82F3E0BC);
PPC_FUNC_IMPL(__imp__sub_82F3E0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E0C0"))) PPC_WEAK_FUNC(sub_82F3E0C0);
PPC_FUNC_IMPL(__imp__sub_82F3E0C0) {
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
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-22952(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22952, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3E0EC"))) PPC_WEAK_FUNC(sub_82F3E0EC);
PPC_FUNC_IMPL(__imp__sub_82F3E0EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E0F0"))) PPC_WEAK_FUNC(sub_82F3E0F0);
PPC_FUNC_IMPL(__imp__sub_82F3E0F0) {
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
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,-22948
	ctx.r3.s64 = ctx.r7.s64 + -22948;
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
	// addi r3,r6,-19952
	ctx.r3.s64 = ctx.r6.s64 + -19952;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3E168"))) PPC_WEAK_FUNC(sub_82F3E168);
PPC_FUNC_IMPL(__imp__sub_82F3E168) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E16C"))) PPC_WEAK_FUNC(sub_82F3E16C);
PPC_FUNC_IMPL(__imp__sub_82F3E16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E170"))) PPC_WEAK_FUNC(sub_82F3E170);
PPC_FUNC_IMPL(__imp__sub_82F3E170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,23088
	ctx.r9.s64 = ctx.r10.s64 + 23088;
	// li r10,77
	ctx.r10.s64 = 77;
loc_82F3E180:
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
	// bne cr6,0x82f3e180
	if (!cr6.eq) goto loc_82F3E180;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-22916(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22916, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E1A8"))) PPC_WEAK_FUNC(sub_82F3E1A8);
PPC_FUNC_IMPL(__imp__sub_82F3E1A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,23096
	ctx.r9.s64 = ctx.r10.s64 + 23096;
	// li r10,70
	ctx.r10.s64 = 70;
loc_82F3E1B8:
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
	// bne cr6,0x82f3e1b8
	if (!cr6.eq) goto loc_82F3E1B8;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-22912(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22912, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E1E0"))) PPC_WEAK_FUNC(sub_82F3E1E0);
PPC_FUNC_IMPL(__imp__sub_82F3E1E0) {
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
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-18092
	ctx.r3.s64 = ctx.r10.s64 + -18092;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-22904(r9)
	PPC_STORE_U32(ctx.r9.u32 + -22904, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3E218"))) PPC_WEAK_FUNC(sub_82F3E218);
PPC_FUNC_IMPL(__imp__sub_82F3E218) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E21C"))) PPC_WEAK_FUNC(sub_82F3E21C);
PPC_FUNC_IMPL(__imp__sub_82F3E21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E220"))) PPC_WEAK_FUNC(sub_82F3E220);
PPC_FUNC_IMPL(__imp__sub_82F3E220) {
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
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-18140
	ctx.r3.s64 = ctx.r10.s64 + -18140;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-22908(r9)
	PPC_STORE_U32(ctx.r9.u32 + -22908, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3E258"))) PPC_WEAK_FUNC(sub_82F3E258);
PPC_FUNC_IMPL(__imp__sub_82F3E258) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E25C"))) PPC_WEAK_FUNC(sub_82F3E25C);
PPC_FUNC_IMPL(__imp__sub_82F3E25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E260"))) PPC_WEAK_FUNC(sub_82F3E260);
PPC_FUNC_IMPL(__imp__sub_82F3E260) {
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
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-22900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22900, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3E28C"))) PPC_WEAK_FUNC(sub_82F3E28C);
PPC_FUNC_IMPL(__imp__sub_82F3E28C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E290"))) PPC_WEAK_FUNC(sub_82F3E290);
PPC_FUNC_IMPL(__imp__sub_82F3E290) {
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
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,-22896
	ctx.r3.s64 = ctx.r7.s64 + -22896;
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
	// addi r3,r6,-19944
	ctx.r3.s64 = ctx.r6.s64 + -19944;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3E308"))) PPC_WEAK_FUNC(sub_82F3E308);
PPC_FUNC_IMPL(__imp__sub_82F3E308) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E30C"))) PPC_WEAK_FUNC(sub_82F3E30C);
PPC_FUNC_IMPL(__imp__sub_82F3E30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E310"))) PPC_WEAK_FUNC(sub_82F3E310);
PPC_FUNC_IMPL(__imp__sub_82F3E310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19936
	ctx.r3.s64 = r11.s64 + -19936;
}

__attribute__((alias("__imp__sub_82F3E318"))) PPC_WEAK_FUNC(sub_82F3E318);
PPC_FUNC_IMPL(__imp__sub_82F3E318) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3E31C"))) PPC_WEAK_FUNC(sub_82F3E31C);
PPC_FUNC_IMPL(__imp__sub_82F3E31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E320"))) PPC_WEAK_FUNC(sub_82F3E320);
PPC_FUNC_IMPL(__imp__sub_82F3E320) {
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
	// stw r11,-22844(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22844, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3E348"))) PPC_WEAK_FUNC(sub_82F3E348);
PPC_FUNC_IMPL(__imp__sub_82F3E348) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E34C"))) PPC_WEAK_FUNC(sub_82F3E34C);
PPC_FUNC_IMPL(__imp__sub_82F3E34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E350"))) PPC_WEAK_FUNC(sub_82F3E350);
PPC_FUNC_IMPL(__imp__sub_82F3E350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19928
	ctx.r3.s64 = r11.s64 + -19928;
}

__attribute__((alias("__imp__sub_82F3E358"))) PPC_WEAK_FUNC(sub_82F3E358);
PPC_FUNC_IMPL(__imp__sub_82F3E358) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3E35C"))) PPC_WEAK_FUNC(sub_82F3E35C);
PPC_FUNC_IMPL(__imp__sub_82F3E35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E360"))) PPC_WEAK_FUNC(sub_82F3E360);
PPC_FUNC_IMPL(__imp__sub_82F3E360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,31572
	ctx.r9.s64 = ctx.r10.s64 + 31572;
	// li r10,110
	ctx.r10.s64 = 110;
loc_82F3E370:
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
	// bne cr6,0x82f3e370
	if (!cr6.eq) goto loc_82F3E370;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-22824(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22824, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E398"))) PPC_WEAK_FUNC(sub_82F3E398);
PPC_FUNC_IMPL(__imp__sub_82F3E398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,31592
	ctx.r9.s64 = ctx.r10.s64 + 31592;
	// li r10,118
	ctx.r10.s64 = 118;
loc_82F3E3A8:
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
	// bne cr6,0x82f3e3a8
	if (!cr6.eq) goto loc_82F3E3A8;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-22820(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22820, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E3D0"))) PPC_WEAK_FUNC(sub_82F3E3D0);
PPC_FUNC_IMPL(__imp__sub_82F3E3D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,31612
	ctx.r9.s64 = ctx.r10.s64 + 31612;
	// li r10,118
	ctx.r10.s64 = 118;
loc_82F3E3E0:
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
	// bne cr6,0x82f3e3e0
	if (!cr6.eq) goto loc_82F3E3E0;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-22816(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22816, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E408"))) PPC_WEAK_FUNC(sub_82F3E408);
PPC_FUNC_IMPL(__imp__sub_82F3E408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,31632
	ctx.r9.s64 = ctx.r10.s64 + 31632;
	// li r10,118
	ctx.r10.s64 = 118;
loc_82F3E418:
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
	// bne cr6,0x82f3e418
	if (!cr6.eq) goto loc_82F3E418;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-22812(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22812, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E440"))) PPC_WEAK_FUNC(sub_82F3E440);
PPC_FUNC_IMPL(__imp__sub_82F3E440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,31656
	ctx.r9.s64 = ctx.r10.s64 + 31656;
	// li r10,118
	ctx.r10.s64 = 118;
loc_82F3E450:
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
	// bne cr6,0x82f3e450
	if (!cr6.eq) goto loc_82F3E450;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-22808(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22808, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E478"))) PPC_WEAK_FUNC(sub_82F3E478);
PPC_FUNC_IMPL(__imp__sub_82F3E478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,31680
	ctx.r9.s64 = ctx.r10.s64 + 31680;
	// li r10,118
	ctx.r10.s64 = 118;
loc_82F3E488:
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
	// bne cr6,0x82f3e488
	if (!cr6.eq) goto loc_82F3E488;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-22804(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22804, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E4B0"))) PPC_WEAK_FUNC(sub_82F3E4B0);
PPC_FUNC_IMPL(__imp__sub_82F3E4B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,31704
	ctx.r9.s64 = ctx.r10.s64 + 31704;
	// li r10,118
	ctx.r10.s64 = 118;
loc_82F3E4C0:
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
	// bne cr6,0x82f3e4c0
	if (!cr6.eq) goto loc_82F3E4C0;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-22800(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22800, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E4E8"))) PPC_WEAK_FUNC(sub_82F3E4E8);
PPC_FUNC_IMPL(__imp__sub_82F3E4E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19920
	ctx.r3.s64 = r11.s64 + -19920;
}

__attribute__((alias("__imp__sub_82F3E4F0"))) PPC_WEAK_FUNC(sub_82F3E4F0);
PPC_FUNC_IMPL(__imp__sub_82F3E4F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3E4F4"))) PPC_WEAK_FUNC(sub_82F3E4F4);
PPC_FUNC_IMPL(__imp__sub_82F3E4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E4F8"))) PPC_WEAK_FUNC(sub_82F3E4F8);
PPC_FUNC_IMPL(__imp__sub_82F3E4F8) {
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
	// stw r11,-22780(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22780, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3E520"))) PPC_WEAK_FUNC(sub_82F3E520);
PPC_FUNC_IMPL(__imp__sub_82F3E520) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E524"))) PPC_WEAK_FUNC(sub_82F3E524);
PPC_FUNC_IMPL(__imp__sub_82F3E524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E528"))) PPC_WEAK_FUNC(sub_82F3E528);
PPC_FUNC_IMPL(__imp__sub_82F3E528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19912
	ctx.r3.s64 = r11.s64 + -19912;
}

__attribute__((alias("__imp__sub_82F3E530"))) PPC_WEAK_FUNC(sub_82F3E530);
PPC_FUNC_IMPL(__imp__sub_82F3E530) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3E534"))) PPC_WEAK_FUNC(sub_82F3E534);
PPC_FUNC_IMPL(__imp__sub_82F3E534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E538"))) PPC_WEAK_FUNC(sub_82F3E538);
PPC_FUNC_IMPL(__imp__sub_82F3E538) {
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
	// stw r11,-22760(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22760, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3E560"))) PPC_WEAK_FUNC(sub_82F3E560);
PPC_FUNC_IMPL(__imp__sub_82F3E560) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E564"))) PPC_WEAK_FUNC(sub_82F3E564);
PPC_FUNC_IMPL(__imp__sub_82F3E564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E568"))) PPC_WEAK_FUNC(sub_82F3E568);
PPC_FUNC_IMPL(__imp__sub_82F3E568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19904
	ctx.r3.s64 = r11.s64 + -19904;
}

__attribute__((alias("__imp__sub_82F3E570"))) PPC_WEAK_FUNC(sub_82F3E570);
PPC_FUNC_IMPL(__imp__sub_82F3E570) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3E574"))) PPC_WEAK_FUNC(sub_82F3E574);
PPC_FUNC_IMPL(__imp__sub_82F3E574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E578"))) PPC_WEAK_FUNC(sub_82F3E578);
PPC_FUNC_IMPL(__imp__sub_82F3E578) {
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
	// stw r11,-22740(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22740, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3E5A0"))) PPC_WEAK_FUNC(sub_82F3E5A0);
PPC_FUNC_IMPL(__imp__sub_82F3E5A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E5A4"))) PPC_WEAK_FUNC(sub_82F3E5A4);
PPC_FUNC_IMPL(__imp__sub_82F3E5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E5A8"))) PPC_WEAK_FUNC(sub_82F3E5A8);
PPC_FUNC_IMPL(__imp__sub_82F3E5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19896
	ctx.r3.s64 = r11.s64 + -19896;
}

__attribute__((alias("__imp__sub_82F3E5B0"))) PPC_WEAK_FUNC(sub_82F3E5B0);
PPC_FUNC_IMPL(__imp__sub_82F3E5B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3E5B4"))) PPC_WEAK_FUNC(sub_82F3E5B4);
PPC_FUNC_IMPL(__imp__sub_82F3E5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E5B8"))) PPC_WEAK_FUNC(sub_82F3E5B8);
PPC_FUNC_IMPL(__imp__sub_82F3E5B8) {
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
	// stw r11,-22720(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22720, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3E5E0"))) PPC_WEAK_FUNC(sub_82F3E5E0);
PPC_FUNC_IMPL(__imp__sub_82F3E5E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E5E4"))) PPC_WEAK_FUNC(sub_82F3E5E4);
PPC_FUNC_IMPL(__imp__sub_82F3E5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E5E8"))) PPC_WEAK_FUNC(sub_82F3E5E8);
PPC_FUNC_IMPL(__imp__sub_82F3E5E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,14660
	ctx.r9.s64 = ctx.r10.s64 + 14660;
	// li r10,83
	ctx.r10.s64 = 83;
loc_82F3E5F8:
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
	// bne cr6,0x82f3e5f8
	if (!cr6.eq) goto loc_82F3E5F8;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-22716(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22716, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E620"))) PPC_WEAK_FUNC(sub_82F3E620);
PPC_FUNC_IMPL(__imp__sub_82F3E620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19888
	ctx.r3.s64 = r11.s64 + -19888;
}

__attribute__((alias("__imp__sub_82F3E628"))) PPC_WEAK_FUNC(sub_82F3E628);
PPC_FUNC_IMPL(__imp__sub_82F3E628) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3E62C"))) PPC_WEAK_FUNC(sub_82F3E62C);
PPC_FUNC_IMPL(__imp__sub_82F3E62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E630"))) PPC_WEAK_FUNC(sub_82F3E630);
PPC_FUNC_IMPL(__imp__sub_82F3E630) {
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
	// stw r11,-22696(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22696, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3E658"))) PPC_WEAK_FUNC(sub_82F3E658);
PPC_FUNC_IMPL(__imp__sub_82F3E658) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E65C"))) PPC_WEAK_FUNC(sub_82F3E65C);
PPC_FUNC_IMPL(__imp__sub_82F3E65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E660"))) PPC_WEAK_FUNC(sub_82F3E660);
PPC_FUNC_IMPL(__imp__sub_82F3E660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19880
	ctx.r3.s64 = r11.s64 + -19880;
}

__attribute__((alias("__imp__sub_82F3E668"))) PPC_WEAK_FUNC(sub_82F3E668);
PPC_FUNC_IMPL(__imp__sub_82F3E668) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3E66C"))) PPC_WEAK_FUNC(sub_82F3E66C);
PPC_FUNC_IMPL(__imp__sub_82F3E66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E670"))) PPC_WEAK_FUNC(sub_82F3E670);
PPC_FUNC_IMPL(__imp__sub_82F3E670) {
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
	// stw r11,-22676(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22676, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3E698"))) PPC_WEAK_FUNC(sub_82F3E698);
PPC_FUNC_IMPL(__imp__sub_82F3E698) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E69C"))) PPC_WEAK_FUNC(sub_82F3E69C);
PPC_FUNC_IMPL(__imp__sub_82F3E69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E6A0"))) PPC_WEAK_FUNC(sub_82F3E6A0);
PPC_FUNC_IMPL(__imp__sub_82F3E6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19872
	ctx.r3.s64 = r11.s64 + -19872;
}

__attribute__((alias("__imp__sub_82F3E6A8"))) PPC_WEAK_FUNC(sub_82F3E6A8);
PPC_FUNC_IMPL(__imp__sub_82F3E6A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3E6AC"))) PPC_WEAK_FUNC(sub_82F3E6AC);
PPC_FUNC_IMPL(__imp__sub_82F3E6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E6B0"))) PPC_WEAK_FUNC(sub_82F3E6B0);
PPC_FUNC_IMPL(__imp__sub_82F3E6B0) {
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
	// stw r11,-22652(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22652, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3E6D8"))) PPC_WEAK_FUNC(sub_82F3E6D8);
PPC_FUNC_IMPL(__imp__sub_82F3E6D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E6DC"))) PPC_WEAK_FUNC(sub_82F3E6DC);
PPC_FUNC_IMPL(__imp__sub_82F3E6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E6E0"))) PPC_WEAK_FUNC(sub_82F3E6E0);
PPC_FUNC_IMPL(__imp__sub_82F3E6E0) {
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
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-22648(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22648, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3E70C"))) PPC_WEAK_FUNC(sub_82F3E70C);
PPC_FUNC_IMPL(__imp__sub_82F3E70C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E710"))) PPC_WEAK_FUNC(sub_82F3E710);
PPC_FUNC_IMPL(__imp__sub_82F3E710) {
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
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,-22644
	ctx.r3.s64 = ctx.r7.s64 + -22644;
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
	// addi r3,r6,-19864
	ctx.r3.s64 = ctx.r6.s64 + -19864;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3E788"))) PPC_WEAK_FUNC(sub_82F3E788);
PPC_FUNC_IMPL(__imp__sub_82F3E788) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E78C"))) PPC_WEAK_FUNC(sub_82F3E78C);
PPC_FUNC_IMPL(__imp__sub_82F3E78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E790"))) PPC_WEAK_FUNC(sub_82F3E790);
PPC_FUNC_IMPL(__imp__sub_82F3E790) {
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
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-22612(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22612, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3E7BC"))) PPC_WEAK_FUNC(sub_82F3E7BC);
PPC_FUNC_IMPL(__imp__sub_82F3E7BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E7C0"))) PPC_WEAK_FUNC(sub_82F3E7C0);
PPC_FUNC_IMPL(__imp__sub_82F3E7C0) {
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
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,-22608
	ctx.r3.s64 = ctx.r7.s64 + -22608;
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
	// addi r3,r6,-19856
	ctx.r3.s64 = ctx.r6.s64 + -19856;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3E838"))) PPC_WEAK_FUNC(sub_82F3E838);
PPC_FUNC_IMPL(__imp__sub_82F3E838) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E83C"))) PPC_WEAK_FUNC(sub_82F3E83C);
PPC_FUNC_IMPL(__imp__sub_82F3E83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E840"))) PPC_WEAK_FUNC(sub_82F3E840);
PPC_FUNC_IMPL(__imp__sub_82F3E840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19848
	ctx.r3.s64 = r11.s64 + -19848;
}

__attribute__((alias("__imp__sub_82F3E848"))) PPC_WEAK_FUNC(sub_82F3E848);
PPC_FUNC_IMPL(__imp__sub_82F3E848) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3E84C"))) PPC_WEAK_FUNC(sub_82F3E84C);
PPC_FUNC_IMPL(__imp__sub_82F3E84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E850"))) PPC_WEAK_FUNC(sub_82F3E850);
PPC_FUNC_IMPL(__imp__sub_82F3E850) {
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
	// stw r11,-22560(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22560, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3E878"))) PPC_WEAK_FUNC(sub_82F3E878);
PPC_FUNC_IMPL(__imp__sub_82F3E878) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E87C"))) PPC_WEAK_FUNC(sub_82F3E87C);
PPC_FUNC_IMPL(__imp__sub_82F3E87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E880"))) PPC_WEAK_FUNC(sub_82F3E880);
PPC_FUNC_IMPL(__imp__sub_82F3E880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19840
	ctx.r3.s64 = r11.s64 + -19840;
}

__attribute__((alias("__imp__sub_82F3E888"))) PPC_WEAK_FUNC(sub_82F3E888);
PPC_FUNC_IMPL(__imp__sub_82F3E888) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3E88C"))) PPC_WEAK_FUNC(sub_82F3E88C);
PPC_FUNC_IMPL(__imp__sub_82F3E88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E890"))) PPC_WEAK_FUNC(sub_82F3E890);
PPC_FUNC_IMPL(__imp__sub_82F3E890) {
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
	// stw r11,-22540(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22540, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3E8B8"))) PPC_WEAK_FUNC(sub_82F3E8B8);
PPC_FUNC_IMPL(__imp__sub_82F3E8B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E8BC"))) PPC_WEAK_FUNC(sub_82F3E8BC);
PPC_FUNC_IMPL(__imp__sub_82F3E8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3E8C0"))) PPC_WEAK_FUNC(sub_82F3E8C0);
PPC_FUNC_IMPL(__imp__sub_82F3E8C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,5381
	ctx.r10.s64 = 5381;
	// addi r9,r11,-27208
	ctx.r9.s64 = r11.s64 + -27208;
	// lbz r11,-27208(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -27208);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f3e8f8
	if (cr6.eq) goto loc_82F3E8F8;
loc_82F3E8DC:
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
	// bne cr6,0x82f3e8dc
	if (!cr6.eq) goto loc_82F3E8DC;
loc_82F3E8F8:
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r9,r8,-27228
	ctx.r9.s64 = ctx.r8.s64 + -27228;
	// addi r6,r11,-22536
	ctx.r6.s64 = r11.s64 + -22536;
	// li r11,5381
	r11.s64 = 5381;
	// lbz r8,-27228(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + -27228);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82f3e940
	if (cr6.eq) goto loc_82F3E940;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82F3E924:
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
	// bne cr6,0x82f3e924
	if (!cr6.eq) goto loc_82F3E924;
loc_82F3E940:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r11.u32);
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-27240
	ctx.r9.s64 = ctx.r10.s64 + -27240;
	// lbz r10,-27240(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + -27240);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f3e97c
	if (cr6.eq) goto loc_82F3E97C;
loc_82F3E960:
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
	// bne cr6,0x82f3e960
	if (!cr6.eq) goto loc_82F3E960;
loc_82F3E97C:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r11.u32);
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-27264
	ctx.r9.s64 = ctx.r10.s64 + -27264;
	// lbz r10,-27264(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + -27264);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f3e9b8
	if (cr6.eq) goto loc_82F3E9B8;
loc_82F3E99C:
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
	// bne cr6,0x82f3e99c
	if (!cr6.eq) goto loc_82F3E99C;
loc_82F3E9B8:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, r11.u32);
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-27292
	ctx.r9.s64 = ctx.r10.s64 + -27292;
	// lbz r10,-27292(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + -27292);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f3e9f4
	if (cr6.eq) goto loc_82F3E9F4;
loc_82F3E9D8:
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
	// bne cr6,0x82f3e9d8
	if (!cr6.eq) goto loc_82F3E9D8;
loc_82F3E9F4:
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3E9FC"))) PPC_WEAK_FUNC(sub_82F3E9FC);
PPC_FUNC_IMPL(__imp__sub_82F3E9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3EA00"))) PPC_WEAK_FUNC(sub_82F3EA00);
PPC_FUNC_IMPL(__imp__sub_82F3EA00) {
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
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-22516(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22516, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3EA2C"))) PPC_WEAK_FUNC(sub_82F3EA2C);
PPC_FUNC_IMPL(__imp__sub_82F3EA2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3EA30"))) PPC_WEAK_FUNC(sub_82F3EA30);
PPC_FUNC_IMPL(__imp__sub_82F3EA30) {
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
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,-22512
	ctx.r3.s64 = ctx.r7.s64 + -22512;
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
	// addi r3,r6,-19832
	ctx.r3.s64 = ctx.r6.s64 + -19832;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3EAA8"))) PPC_WEAK_FUNC(sub_82F3EAA8);
PPC_FUNC_IMPL(__imp__sub_82F3EAA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3EAAC"))) PPC_WEAK_FUNC(sub_82F3EAAC);
PPC_FUNC_IMPL(__imp__sub_82F3EAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3EAB0"))) PPC_WEAK_FUNC(sub_82F3EAB0);
PPC_FUNC_IMPL(__imp__sub_82F3EAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19824
	ctx.r3.s64 = r11.s64 + -19824;
}

__attribute__((alias("__imp__sub_82F3EAB8"))) PPC_WEAK_FUNC(sub_82F3EAB8);
PPC_FUNC_IMPL(__imp__sub_82F3EAB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3EABC"))) PPC_WEAK_FUNC(sub_82F3EABC);
PPC_FUNC_IMPL(__imp__sub_82F3EABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3EAC0"))) PPC_WEAK_FUNC(sub_82F3EAC0);
PPC_FUNC_IMPL(__imp__sub_82F3EAC0) {
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
	// stw r11,-22464(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22464, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3EAE8"))) PPC_WEAK_FUNC(sub_82F3EAE8);
PPC_FUNC_IMPL(__imp__sub_82F3EAE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3EAEC"))) PPC_WEAK_FUNC(sub_82F3EAEC);
PPC_FUNC_IMPL(__imp__sub_82F3EAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3EAF0"))) PPC_WEAK_FUNC(sub_82F3EAF0);
PPC_FUNC_IMPL(__imp__sub_82F3EAF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19816
	ctx.r3.s64 = r11.s64 + -19816;
}

__attribute__((alias("__imp__sub_82F3EAF8"))) PPC_WEAK_FUNC(sub_82F3EAF8);
PPC_FUNC_IMPL(__imp__sub_82F3EAF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3EAFC"))) PPC_WEAK_FUNC(sub_82F3EAFC);
PPC_FUNC_IMPL(__imp__sub_82F3EAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3EB00"))) PPC_WEAK_FUNC(sub_82F3EB00);
PPC_FUNC_IMPL(__imp__sub_82F3EB00) {
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
	// stw r11,-22444(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22444, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3EB28"))) PPC_WEAK_FUNC(sub_82F3EB28);
PPC_FUNC_IMPL(__imp__sub_82F3EB28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3EB2C"))) PPC_WEAK_FUNC(sub_82F3EB2C);
PPC_FUNC_IMPL(__imp__sub_82F3EB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3EB30"))) PPC_WEAK_FUNC(sub_82F3EB30);
PPC_FUNC_IMPL(__imp__sub_82F3EB30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-19808
	ctx.r3.s64 = r11.s64 + -19808;
}

__attribute__((alias("__imp__sub_82F3EB38"))) PPC_WEAK_FUNC(sub_82F3EB38);
PPC_FUNC_IMPL(__imp__sub_82F3EB38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3EB3C"))) PPC_WEAK_FUNC(sub_82F3EB3C);
PPC_FUNC_IMPL(__imp__sub_82F3EB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3EB40"))) PPC_WEAK_FUNC(sub_82F3EB40);
PPC_FUNC_IMPL(__imp__sub_82F3EB40) {
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
	// stw r11,-22424(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22424, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

