#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F392DC"))) PPC_WEAK_FUNC(sub_82F392DC);
PPC_FUNC_IMPL(__imp__sub_82F392DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F392E0"))) PPC_WEAK_FUNC(sub_82F392E0);
PPC_FUNC_IMPL(__imp__sub_82F392E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23168
	ctx.r3.s64 = r11.s64 + -23168;
}

__attribute__((alias("__imp__sub_82F392E8"))) PPC_WEAK_FUNC(sub_82F392E8);
PPC_FUNC_IMPL(__imp__sub_82F392E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F392EC"))) PPC_WEAK_FUNC(sub_82F392EC);
PPC_FUNC_IMPL(__imp__sub_82F392EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F392F0"))) PPC_WEAK_FUNC(sub_82F392F0);
PPC_FUNC_IMPL(__imp__sub_82F392F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23160
	ctx.r3.s64 = r11.s64 + -23160;
}

__attribute__((alias("__imp__sub_82F392F8"))) PPC_WEAK_FUNC(sub_82F392F8);
PPC_FUNC_IMPL(__imp__sub_82F392F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F392FC"))) PPC_WEAK_FUNC(sub_82F392FC);
PPC_FUNC_IMPL(__imp__sub_82F392FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39300"))) PPC_WEAK_FUNC(sub_82F39300);
PPC_FUNC_IMPL(__imp__sub_82F39300) {
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
	// stw r11,-27092(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27092, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F39328"))) PPC_WEAK_FUNC(sub_82F39328);
PPC_FUNC_IMPL(__imp__sub_82F39328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3932C"))) PPC_WEAK_FUNC(sub_82F3932C);
PPC_FUNC_IMPL(__imp__sub_82F3932C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39330"))) PPC_WEAK_FUNC(sub_82F39330);
PPC_FUNC_IMPL(__imp__sub_82F39330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r11,5381
	r11.s64 = 5381;
	// lwz r9,28628(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28628);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f39368
	if (cr6.eq) goto loc_82F39368;
loc_82F3934C:
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
	// bne cr6,0x82f3934c
	if (!cr6.eq) goto loc_82F3934C;
loc_82F39368:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27088(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27088, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39374"))) PPC_WEAK_FUNC(sub_82F39374);
PPC_FUNC_IMPL(__imp__sub_82F39374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39378"))) PPC_WEAK_FUNC(sub_82F39378);
PPC_FUNC_IMPL(__imp__sub_82F39378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r11,5381
	r11.s64 = 5381;
	// lwz r9,28632(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28632);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f393b0
	if (cr6.eq) goto loc_82F393B0;
loc_82F39394:
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
	// bne cr6,0x82f39394
	if (!cr6.eq) goto loc_82F39394;
loc_82F393B0:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27084(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27084, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F393BC"))) PPC_WEAK_FUNC(sub_82F393BC);
PPC_FUNC_IMPL(__imp__sub_82F393BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F393C0"))) PPC_WEAK_FUNC(sub_82F393C0);
PPC_FUNC_IMPL(__imp__sub_82F393C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r11,5381
	r11.s64 = 5381;
	// lwz r9,28636(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28636);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f393f8
	if (cr6.eq) goto loc_82F393F8;
loc_82F393DC:
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
	// bne cr6,0x82f393dc
	if (!cr6.eq) goto loc_82F393DC;
loc_82F393F8:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27080(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27080, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39404"))) PPC_WEAK_FUNC(sub_82F39404);
PPC_FUNC_IMPL(__imp__sub_82F39404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39408"))) PPC_WEAK_FUNC(sub_82F39408);
PPC_FUNC_IMPL(__imp__sub_82F39408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r11,5381
	r11.s64 = 5381;
	// lwz r9,28664(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28664);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f39440
	if (cr6.eq) goto loc_82F39440;
loc_82F39424:
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
	// bne cr6,0x82f39424
	if (!cr6.eq) goto loc_82F39424;
loc_82F39440:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27076(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27076, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3944C"))) PPC_WEAK_FUNC(sub_82F3944C);
PPC_FUNC_IMPL(__imp__sub_82F3944C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39450"))) PPC_WEAK_FUNC(sub_82F39450);
PPC_FUNC_IMPL(__imp__sub_82F39450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r11,5381
	r11.s64 = 5381;
	// lwz r9,28640(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28640);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f39488
	if (cr6.eq) goto loc_82F39488;
loc_82F3946C:
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
	// bne cr6,0x82f3946c
	if (!cr6.eq) goto loc_82F3946C;
loc_82F39488:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27072(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27072, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39494"))) PPC_WEAK_FUNC(sub_82F39494);
PPC_FUNC_IMPL(__imp__sub_82F39494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39498"))) PPC_WEAK_FUNC(sub_82F39498);
PPC_FUNC_IMPL(__imp__sub_82F39498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r11,5381
	r11.s64 = 5381;
	// lwz r9,28644(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28644);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f394d0
	if (cr6.eq) goto loc_82F394D0;
loc_82F394B4:
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
	// bne cr6,0x82f394b4
	if (!cr6.eq) goto loc_82F394B4;
loc_82F394D0:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27068(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27068, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F394DC"))) PPC_WEAK_FUNC(sub_82F394DC);
PPC_FUNC_IMPL(__imp__sub_82F394DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F394E0"))) PPC_WEAK_FUNC(sub_82F394E0);
PPC_FUNC_IMPL(__imp__sub_82F394E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r11,5381
	r11.s64 = 5381;
	// lwz r9,28648(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28648);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f39518
	if (cr6.eq) goto loc_82F39518;
loc_82F394FC:
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
	// bne cr6,0x82f394fc
	if (!cr6.eq) goto loc_82F394FC;
loc_82F39518:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27064(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27064, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39524"))) PPC_WEAK_FUNC(sub_82F39524);
PPC_FUNC_IMPL(__imp__sub_82F39524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39528"))) PPC_WEAK_FUNC(sub_82F39528);
PPC_FUNC_IMPL(__imp__sub_82F39528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r11,5381
	r11.s64 = 5381;
	// lwz r9,28708(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28708);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f39560
	if (cr6.eq) goto loc_82F39560;
loc_82F39544:
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
	// bne cr6,0x82f39544
	if (!cr6.eq) goto loc_82F39544;
loc_82F39560:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27060(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27060, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3956C"))) PPC_WEAK_FUNC(sub_82F3956C);
PPC_FUNC_IMPL(__imp__sub_82F3956C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39570"))) PPC_WEAK_FUNC(sub_82F39570);
PPC_FUNC_IMPL(__imp__sub_82F39570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r11,5381
	r11.s64 = 5381;
	// lwz r9,28652(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28652);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f395a8
	if (cr6.eq) goto loc_82F395A8;
loc_82F3958C:
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
	// bne cr6,0x82f3958c
	if (!cr6.eq) goto loc_82F3958C;
loc_82F395A8:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27056(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27056, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F395B4"))) PPC_WEAK_FUNC(sub_82F395B4);
PPC_FUNC_IMPL(__imp__sub_82F395B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F395B8"))) PPC_WEAK_FUNC(sub_82F395B8);
PPC_FUNC_IMPL(__imp__sub_82F395B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r11,5381
	r11.s64 = 5381;
	// lwz r9,28656(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28656);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f395f0
	if (cr6.eq) goto loc_82F395F0;
loc_82F395D4:
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
	// bne cr6,0x82f395d4
	if (!cr6.eq) goto loc_82F395D4;
loc_82F395F0:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27052(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27052, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F395FC"))) PPC_WEAK_FUNC(sub_82F395FC);
PPC_FUNC_IMPL(__imp__sub_82F395FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39600"))) PPC_WEAK_FUNC(sub_82F39600);
PPC_FUNC_IMPL(__imp__sub_82F39600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r11,5381
	r11.s64 = 5381;
	// lwz r9,28688(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28688);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f39638
	if (cr6.eq) goto loc_82F39638;
loc_82F3961C:
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
	// bne cr6,0x82f3961c
	if (!cr6.eq) goto loc_82F3961C;
loc_82F39638:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27048(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27048, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39644"))) PPC_WEAK_FUNC(sub_82F39644);
PPC_FUNC_IMPL(__imp__sub_82F39644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39648"))) PPC_WEAK_FUNC(sub_82F39648);
PPC_FUNC_IMPL(__imp__sub_82F39648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r11,5381
	r11.s64 = 5381;
	// lwz r9,28692(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28692);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f39680
	if (cr6.eq) goto loc_82F39680;
loc_82F39664:
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
	// bne cr6,0x82f39664
	if (!cr6.eq) goto loc_82F39664;
loc_82F39680:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27044(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27044, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3968C"))) PPC_WEAK_FUNC(sub_82F3968C);
PPC_FUNC_IMPL(__imp__sub_82F3968C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39690"))) PPC_WEAK_FUNC(sub_82F39690);
PPC_FUNC_IMPL(__imp__sub_82F39690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r11,5381
	r11.s64 = 5381;
	// lwz r9,28696(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28696);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f396c8
	if (cr6.eq) goto loc_82F396C8;
loc_82F396AC:
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
	// bne cr6,0x82f396ac
	if (!cr6.eq) goto loc_82F396AC;
loc_82F396C8:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27040(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27040, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F396D4"))) PPC_WEAK_FUNC(sub_82F396D4);
PPC_FUNC_IMPL(__imp__sub_82F396D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F396D8"))) PPC_WEAK_FUNC(sub_82F396D8);
PPC_FUNC_IMPL(__imp__sub_82F396D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r11,5381
	r11.s64 = 5381;
	// lwz r9,28700(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28700);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f39710
	if (cr6.eq) goto loc_82F39710;
loc_82F396F4:
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
	// bne cr6,0x82f396f4
	if (!cr6.eq) goto loc_82F396F4;
loc_82F39710:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27036(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27036, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3971C"))) PPC_WEAK_FUNC(sub_82F3971C);
PPC_FUNC_IMPL(__imp__sub_82F3971C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39720"))) PPC_WEAK_FUNC(sub_82F39720);
PPC_FUNC_IMPL(__imp__sub_82F39720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r11,5381
	r11.s64 = 5381;
	// lwz r9,28712(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28712);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f39758
	if (cr6.eq) goto loc_82F39758;
loc_82F3973C:
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
	// bne cr6,0x82f3973c
	if (!cr6.eq) goto loc_82F3973C;
loc_82F39758:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27032(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27032, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39764"))) PPC_WEAK_FUNC(sub_82F39764);
PPC_FUNC_IMPL(__imp__sub_82F39764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39768"))) PPC_WEAK_FUNC(sub_82F39768);
PPC_FUNC_IMPL(__imp__sub_82F39768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r11,5381
	r11.s64 = 5381;
	// lwz r9,28716(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28716);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f397a0
	if (cr6.eq) goto loc_82F397A0;
loc_82F39784:
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
	// bne cr6,0x82f39784
	if (!cr6.eq) goto loc_82F39784;
loc_82F397A0:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27028(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27028, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F397AC"))) PPC_WEAK_FUNC(sub_82F397AC);
PPC_FUNC_IMPL(__imp__sub_82F397AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F397B0"))) PPC_WEAK_FUNC(sub_82F397B0);
PPC_FUNC_IMPL(__imp__sub_82F397B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r11,5381
	r11.s64 = 5381;
	// lwz r9,28720(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28720);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f397e8
	if (cr6.eq) goto loc_82F397E8;
loc_82F397CC:
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
	// bne cr6,0x82f397cc
	if (!cr6.eq) goto loc_82F397CC;
loc_82F397E8:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27024(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27024, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F397F4"))) PPC_WEAK_FUNC(sub_82F397F4);
PPC_FUNC_IMPL(__imp__sub_82F397F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F397F8"))) PPC_WEAK_FUNC(sub_82F397F8);
PPC_FUNC_IMPL(__imp__sub_82F397F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r11,5381
	r11.s64 = 5381;
	// lwz r9,28724(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28724);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f39830
	if (cr6.eq) goto loc_82F39830;
loc_82F39814:
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
	// bne cr6,0x82f39814
	if (!cr6.eq) goto loc_82F39814;
loc_82F39830:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27020(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27020, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3983C"))) PPC_WEAK_FUNC(sub_82F3983C);
PPC_FUNC_IMPL(__imp__sub_82F3983C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39840"))) PPC_WEAK_FUNC(sub_82F39840);
PPC_FUNC_IMPL(__imp__sub_82F39840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23152
	ctx.r3.s64 = r11.s64 + -23152;
}

__attribute__((alias("__imp__sub_82F39848"))) PPC_WEAK_FUNC(sub_82F39848);
PPC_FUNC_IMPL(__imp__sub_82F39848) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3984C"))) PPC_WEAK_FUNC(sub_82F3984C);
PPC_FUNC_IMPL(__imp__sub_82F3984C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39850"))) PPC_WEAK_FUNC(sub_82F39850);
PPC_FUNC_IMPL(__imp__sub_82F39850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23144
	ctx.r3.s64 = r11.s64 + -23144;
}

__attribute__((alias("__imp__sub_82F39858"))) PPC_WEAK_FUNC(sub_82F39858);
PPC_FUNC_IMPL(__imp__sub_82F39858) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3985C"))) PPC_WEAK_FUNC(sub_82F3985C);
PPC_FUNC_IMPL(__imp__sub_82F3985C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39860"))) PPC_WEAK_FUNC(sub_82F39860);
PPC_FUNC_IMPL(__imp__sub_82F39860) {
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
	// stw r11,-27000(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27000, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F39888"))) PPC_WEAK_FUNC(sub_82F39888);
PPC_FUNC_IMPL(__imp__sub_82F39888) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3988C"))) PPC_WEAK_FUNC(sub_82F3988C);
PPC_FUNC_IMPL(__imp__sub_82F3988C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39890"))) PPC_WEAK_FUNC(sub_82F39890);
PPC_FUNC_IMPL(__imp__sub_82F39890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-21280
	ctx.r9.s64 = ctx.r10.s64 + -21280;
	// li r10,65
	ctx.r10.s64 = 65;
loc_82F398A0:
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
	// bne cr6,0x82f398a0
	if (!cr6.eq) goto loc_82F398A0;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-26996(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26996, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F398C8"))) PPC_WEAK_FUNC(sub_82F398C8);
PPC_FUNC_IMPL(__imp__sub_82F398C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-21272
	ctx.r9.s64 = ctx.r10.s64 + -21272;
	// li r10,65
	ctx.r10.s64 = 65;
loc_82F398D8:
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
	// bne cr6,0x82f398d8
	if (!cr6.eq) goto loc_82F398D8;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-26992(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26992, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39900"))) PPC_WEAK_FUNC(sub_82F39900);
PPC_FUNC_IMPL(__imp__sub_82F39900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-21264
	ctx.r9.s64 = ctx.r10.s64 + -21264;
	// li r10,69
	ctx.r10.s64 = 69;
loc_82F39910:
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
	// bne cr6,0x82f39910
	if (!cr6.eq) goto loc_82F39910;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-26988(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26988, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39938"))) PPC_WEAK_FUNC(sub_82F39938);
PPC_FUNC_IMPL(__imp__sub_82F39938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-21256
	ctx.r9.s64 = ctx.r10.s64 + -21256;
	// li r10,83
	ctx.r10.s64 = 83;
loc_82F39948:
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
	// bne cr6,0x82f39948
	if (!cr6.eq) goto loc_82F39948;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-26984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26984, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39970"))) PPC_WEAK_FUNC(sub_82F39970);
PPC_FUNC_IMPL(__imp__sub_82F39970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-21252
	ctx.r9.s64 = ctx.r10.s64 + -21252;
	// li r10,67
	ctx.r10.s64 = 67;
loc_82F39980:
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
	// bne cr6,0x82f39980
	if (!cr6.eq) goto loc_82F39980;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-26980(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26980, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F399A8"))) PPC_WEAK_FUNC(sub_82F399A8);
PPC_FUNC_IMPL(__imp__sub_82F399A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-21228
	ctx.r9.s64 = ctx.r10.s64 + -21228;
	// li r10,67
	ctx.r10.s64 = 67;
loc_82F399B8:
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
	// bne cr6,0x82f399b8
	if (!cr6.eq) goto loc_82F399B8;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-26976(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26976, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F399E0"))) PPC_WEAK_FUNC(sub_82F399E0);
PPC_FUNC_IMPL(__imp__sub_82F399E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-21204
	ctx.r9.s64 = ctx.r10.s64 + -21204;
	// li r10,67
	ctx.r10.s64 = 67;
loc_82F399F0:
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
	// bne cr6,0x82f399f0
	if (!cr6.eq) goto loc_82F399F0;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-26972(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26972, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39A18"))) PPC_WEAK_FUNC(sub_82F39A18);
PPC_FUNC_IMPL(__imp__sub_82F39A18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-21180
	ctx.r9.s64 = ctx.r10.s64 + -21180;
	// li r10,67
	ctx.r10.s64 = 67;
loc_82F39A28:
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
	// bne cr6,0x82f39a28
	if (!cr6.eq) goto loc_82F39A28;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-26968(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26968, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39A50"))) PPC_WEAK_FUNC(sub_82F39A50);
PPC_FUNC_IMPL(__imp__sub_82F39A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-21156
	ctx.r9.s64 = ctx.r10.s64 + -21156;
	// li r10,67
	ctx.r10.s64 = 67;
loc_82F39A60:
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
	// bne cr6,0x82f39a60
	if (!cr6.eq) goto loc_82F39A60;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-26964(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26964, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39A88"))) PPC_WEAK_FUNC(sub_82F39A88);
PPC_FUNC_IMPL(__imp__sub_82F39A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-21132
	ctx.r9.s64 = ctx.r10.s64 + -21132;
	// li r10,67
	ctx.r10.s64 = 67;
loc_82F39A98:
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
	// bne cr6,0x82f39a98
	if (!cr6.eq) goto loc_82F39A98;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-26960(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26960, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39AC0"))) PPC_WEAK_FUNC(sub_82F39AC0);
PPC_FUNC_IMPL(__imp__sub_82F39AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-21112
	ctx.r9.s64 = ctx.r10.s64 + -21112;
	// li r10,67
	ctx.r10.s64 = 67;
loc_82F39AD0:
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
	// bne cr6,0x82f39ad0
	if (!cr6.eq) goto loc_82F39AD0;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-26956(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26956, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39AF8"))) PPC_WEAK_FUNC(sub_82F39AF8);
PPC_FUNC_IMPL(__imp__sub_82F39AF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-21084
	ctx.r9.s64 = ctx.r10.s64 + -21084;
	// li r10,82
	ctx.r10.s64 = 82;
loc_82F39B08:
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
	// bne cr6,0x82f39b08
	if (!cr6.eq) goto loc_82F39B08;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-26952(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26952, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39B30"))) PPC_WEAK_FUNC(sub_82F39B30);
PPC_FUNC_IMPL(__imp__sub_82F39B30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-21056
	ctx.r9.s64 = ctx.r10.s64 + -21056;
	// li r10,82
	ctx.r10.s64 = 82;
loc_82F39B40:
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
	// bne cr6,0x82f39b40
	if (!cr6.eq) goto loc_82F39B40;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-26948(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26948, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39B68"))) PPC_WEAK_FUNC(sub_82F39B68);
PPC_FUNC_IMPL(__imp__sub_82F39B68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-21028
	ctx.r9.s64 = ctx.r10.s64 + -21028;
	// li r10,82
	ctx.r10.s64 = 82;
loc_82F39B78:
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
	// bne cr6,0x82f39b78
	if (!cr6.eq) goto loc_82F39B78;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-26944(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26944, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39BA0"))) PPC_WEAK_FUNC(sub_82F39BA0);
PPC_FUNC_IMPL(__imp__sub_82F39BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-21000
	ctx.r9.s64 = ctx.r10.s64 + -21000;
	// li r10,82
	ctx.r10.s64 = 82;
loc_82F39BB0:
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
	// bne cr6,0x82f39bb0
	if (!cr6.eq) goto loc_82F39BB0;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-26940(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26940, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39BD8"))) PPC_WEAK_FUNC(sub_82F39BD8);
PPC_FUNC_IMPL(__imp__sub_82F39BD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-20972
	ctx.r9.s64 = ctx.r10.s64 + -20972;
	// li r10,82
	ctx.r10.s64 = 82;
loc_82F39BE8:
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
	// bne cr6,0x82f39be8
	if (!cr6.eq) goto loc_82F39BE8;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-26936(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26936, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39C10"))) PPC_WEAK_FUNC(sub_82F39C10);
PPC_FUNC_IMPL(__imp__sub_82F39C10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-20944
	ctx.r9.s64 = ctx.r10.s64 + -20944;
	// li r10,82
	ctx.r10.s64 = 82;
loc_82F39C20:
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
	// bne cr6,0x82f39c20
	if (!cr6.eq) goto loc_82F39C20;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-26932(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26932, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39C48"))) PPC_WEAK_FUNC(sub_82F39C48);
PPC_FUNC_IMPL(__imp__sub_82F39C48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-20916
	ctx.r9.s64 = ctx.r10.s64 + -20916;
	// li r10,82
	ctx.r10.s64 = 82;
loc_82F39C58:
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
	// bne cr6,0x82f39c58
	if (!cr6.eq) goto loc_82F39C58;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-26928(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26928, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39C80"))) PPC_WEAK_FUNC(sub_82F39C80);
PPC_FUNC_IMPL(__imp__sub_82F39C80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-20888
	ctx.r9.s64 = ctx.r10.s64 + -20888;
	// li r10,82
	ctx.r10.s64 = 82;
loc_82F39C90:
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
	// bne cr6,0x82f39c90
	if (!cr6.eq) goto loc_82F39C90;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-26924(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26924, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39CB8"))) PPC_WEAK_FUNC(sub_82F39CB8);
PPC_FUNC_IMPL(__imp__sub_82F39CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23136
	ctx.r3.s64 = r11.s64 + -23136;
}

__attribute__((alias("__imp__sub_82F39CC0"))) PPC_WEAK_FUNC(sub_82F39CC0);
PPC_FUNC_IMPL(__imp__sub_82F39CC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F39CC4"))) PPC_WEAK_FUNC(sub_82F39CC4);
PPC_FUNC_IMPL(__imp__sub_82F39CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39CC8"))) PPC_WEAK_FUNC(sub_82F39CC8);
PPC_FUNC_IMPL(__imp__sub_82F39CC8) {
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
	// stw r11,-26904(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26904, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F39CF0"))) PPC_WEAK_FUNC(sub_82F39CF0);
PPC_FUNC_IMPL(__imp__sub_82F39CF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39CF4"))) PPC_WEAK_FUNC(sub_82F39CF4);
PPC_FUNC_IMPL(__imp__sub_82F39CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39CF8"))) PPC_WEAK_FUNC(sub_82F39CF8);
PPC_FUNC_IMPL(__imp__sub_82F39CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23128
	ctx.r3.s64 = r11.s64 + -23128;
}

__attribute__((alias("__imp__sub_82F39D00"))) PPC_WEAK_FUNC(sub_82F39D00);
PPC_FUNC_IMPL(__imp__sub_82F39D00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F39D04"))) PPC_WEAK_FUNC(sub_82F39D04);
PPC_FUNC_IMPL(__imp__sub_82F39D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39D08"))) PPC_WEAK_FUNC(sub_82F39D08);
PPC_FUNC_IMPL(__imp__sub_82F39D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23120
	ctx.r3.s64 = r11.s64 + -23120;
}

__attribute__((alias("__imp__sub_82F39D10"))) PPC_WEAK_FUNC(sub_82F39D10);
PPC_FUNC_IMPL(__imp__sub_82F39D10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F39D14"))) PPC_WEAK_FUNC(sub_82F39D14);
PPC_FUNC_IMPL(__imp__sub_82F39D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39D18"))) PPC_WEAK_FUNC(sub_82F39D18);
PPC_FUNC_IMPL(__imp__sub_82F39D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23112
	ctx.r3.s64 = r11.s64 + -23112;
}

__attribute__((alias("__imp__sub_82F39D20"))) PPC_WEAK_FUNC(sub_82F39D20);
PPC_FUNC_IMPL(__imp__sub_82F39D20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F39D24"))) PPC_WEAK_FUNC(sub_82F39D24);
PPC_FUNC_IMPL(__imp__sub_82F39D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39D28"))) PPC_WEAK_FUNC(sub_82F39D28);
PPC_FUNC_IMPL(__imp__sub_82F39D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23104
	ctx.r3.s64 = r11.s64 + -23104;
}

__attribute__((alias("__imp__sub_82F39D30"))) PPC_WEAK_FUNC(sub_82F39D30);
PPC_FUNC_IMPL(__imp__sub_82F39D30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F39D34"))) PPC_WEAK_FUNC(sub_82F39D34);
PPC_FUNC_IMPL(__imp__sub_82F39D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39D38"))) PPC_WEAK_FUNC(sub_82F39D38);
PPC_FUNC_IMPL(__imp__sub_82F39D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23096
	ctx.r3.s64 = r11.s64 + -23096;
}

__attribute__((alias("__imp__sub_82F39D40"))) PPC_WEAK_FUNC(sub_82F39D40);
PPC_FUNC_IMPL(__imp__sub_82F39D40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F39D44"))) PPC_WEAK_FUNC(sub_82F39D44);
PPC_FUNC_IMPL(__imp__sub_82F39D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39D48"))) PPC_WEAK_FUNC(sub_82F39D48);
PPC_FUNC_IMPL(__imp__sub_82F39D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23088
	ctx.r3.s64 = r11.s64 + -23088;
}

__attribute__((alias("__imp__sub_82F39D50"))) PPC_WEAK_FUNC(sub_82F39D50);
PPC_FUNC_IMPL(__imp__sub_82F39D50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F39D54"))) PPC_WEAK_FUNC(sub_82F39D54);
PPC_FUNC_IMPL(__imp__sub_82F39D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39D58"))) PPC_WEAK_FUNC(sub_82F39D58);
PPC_FUNC_IMPL(__imp__sub_82F39D58) {
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
	// stw r11,-26868(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26868, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F39D80"))) PPC_WEAK_FUNC(sub_82F39D80);
PPC_FUNC_IMPL(__imp__sub_82F39D80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39D84"))) PPC_WEAK_FUNC(sub_82F39D84);
PPC_FUNC_IMPL(__imp__sub_82F39D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39D88"))) PPC_WEAK_FUNC(sub_82F39D88);
PPC_FUNC_IMPL(__imp__sub_82F39D88) {
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
	// stw r3,-26864(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26864, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F39DB4"))) PPC_WEAK_FUNC(sub_82F39DB4);
PPC_FUNC_IMPL(__imp__sub_82F39DB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39DB8"))) PPC_WEAK_FUNC(sub_82F39DB8);
PPC_FUNC_IMPL(__imp__sub_82F39DB8) {
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
	// addi r3,r7,-26860
	ctx.r3.s64 = ctx.r7.s64 + -26860;
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
	// addi r3,r6,-23080
	ctx.r3.s64 = ctx.r6.s64 + -23080;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F39E30"))) PPC_WEAK_FUNC(sub_82F39E30);
PPC_FUNC_IMPL(__imp__sub_82F39E30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39E34"))) PPC_WEAK_FUNC(sub_82F39E34);
PPC_FUNC_IMPL(__imp__sub_82F39E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39E38"))) PPC_WEAK_FUNC(sub_82F39E38);
PPC_FUNC_IMPL(__imp__sub_82F39E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23072
	ctx.r3.s64 = r11.s64 + -23072;
}

__attribute__((alias("__imp__sub_82F39E40"))) PPC_WEAK_FUNC(sub_82F39E40);
PPC_FUNC_IMPL(__imp__sub_82F39E40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F39E44"))) PPC_WEAK_FUNC(sub_82F39E44);
PPC_FUNC_IMPL(__imp__sub_82F39E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39E48"))) PPC_WEAK_FUNC(sub_82F39E48);
PPC_FUNC_IMPL(__imp__sub_82F39E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23064
	ctx.r3.s64 = r11.s64 + -23064;
}

__attribute__((alias("__imp__sub_82F39E50"))) PPC_WEAK_FUNC(sub_82F39E50);
PPC_FUNC_IMPL(__imp__sub_82F39E50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F39E54"))) PPC_WEAK_FUNC(sub_82F39E54);
PPC_FUNC_IMPL(__imp__sub_82F39E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39E58"))) PPC_WEAK_FUNC(sub_82F39E58);
PPC_FUNC_IMPL(__imp__sub_82F39E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23056
	ctx.r3.s64 = r11.s64 + -23056;
}

__attribute__((alias("__imp__sub_82F39E60"))) PPC_WEAK_FUNC(sub_82F39E60);
PPC_FUNC_IMPL(__imp__sub_82F39E60) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F39E64"))) PPC_WEAK_FUNC(sub_82F39E64);
PPC_FUNC_IMPL(__imp__sub_82F39E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39E68"))) PPC_WEAK_FUNC(sub_82F39E68);
PPC_FUNC_IMPL(__imp__sub_82F39E68) {
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
	// stw r11,-26796(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26796, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F39E90"))) PPC_WEAK_FUNC(sub_82F39E90);
PPC_FUNC_IMPL(__imp__sub_82F39E90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39E94"))) PPC_WEAK_FUNC(sub_82F39E94);
PPC_FUNC_IMPL(__imp__sub_82F39E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39E98"))) PPC_WEAK_FUNC(sub_82F39E98);
PPC_FUNC_IMPL(__imp__sub_82F39E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23048
	ctx.r3.s64 = r11.s64 + -23048;
}

__attribute__((alias("__imp__sub_82F39EA0"))) PPC_WEAK_FUNC(sub_82F39EA0);
PPC_FUNC_IMPL(__imp__sub_82F39EA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F39EA4"))) PPC_WEAK_FUNC(sub_82F39EA4);
PPC_FUNC_IMPL(__imp__sub_82F39EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39EA8"))) PPC_WEAK_FUNC(sub_82F39EA8);
PPC_FUNC_IMPL(__imp__sub_82F39EA8) {
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
	// stw r11,-26776(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26776, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F39ED0"))) PPC_WEAK_FUNC(sub_82F39ED0);
PPC_FUNC_IMPL(__imp__sub_82F39ED0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39ED4"))) PPC_WEAK_FUNC(sub_82F39ED4);
PPC_FUNC_IMPL(__imp__sub_82F39ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39ED8"))) PPC_WEAK_FUNC(sub_82F39ED8);
PPC_FUNC_IMPL(__imp__sub_82F39ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23040
	ctx.r3.s64 = r11.s64 + -23040;
}

__attribute__((alias("__imp__sub_82F39EE0"))) PPC_WEAK_FUNC(sub_82F39EE0);
PPC_FUNC_IMPL(__imp__sub_82F39EE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F39EE4"))) PPC_WEAK_FUNC(sub_82F39EE4);
PPC_FUNC_IMPL(__imp__sub_82F39EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39EE8"))) PPC_WEAK_FUNC(sub_82F39EE8);
PPC_FUNC_IMPL(__imp__sub_82F39EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23032
	ctx.r3.s64 = r11.s64 + -23032;
}

__attribute__((alias("__imp__sub_82F39EF0"))) PPC_WEAK_FUNC(sub_82F39EF0);
PPC_FUNC_IMPL(__imp__sub_82F39EF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F39EF4"))) PPC_WEAK_FUNC(sub_82F39EF4);
PPC_FUNC_IMPL(__imp__sub_82F39EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39EF8"))) PPC_WEAK_FUNC(sub_82F39EF8);
PPC_FUNC_IMPL(__imp__sub_82F39EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23024
	ctx.r3.s64 = r11.s64 + -23024;
}

__attribute__((alias("__imp__sub_82F39F00"))) PPC_WEAK_FUNC(sub_82F39F00);
PPC_FUNC_IMPL(__imp__sub_82F39F00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F39F04"))) PPC_WEAK_FUNC(sub_82F39F04);
PPC_FUNC_IMPL(__imp__sub_82F39F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39F08"))) PPC_WEAK_FUNC(sub_82F39F08);
PPC_FUNC_IMPL(__imp__sub_82F39F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23016
	ctx.r3.s64 = r11.s64 + -23016;
}

__attribute__((alias("__imp__sub_82F39F10"))) PPC_WEAK_FUNC(sub_82F39F10);
PPC_FUNC_IMPL(__imp__sub_82F39F10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F39F14"))) PPC_WEAK_FUNC(sub_82F39F14);
PPC_FUNC_IMPL(__imp__sub_82F39F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39F18"))) PPC_WEAK_FUNC(sub_82F39F18);
PPC_FUNC_IMPL(__imp__sub_82F39F18) {
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
	// stw r11,-26740(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26740, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F39F40"))) PPC_WEAK_FUNC(sub_82F39F40);
PPC_FUNC_IMPL(__imp__sub_82F39F40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39F44"))) PPC_WEAK_FUNC(sub_82F39F44);
PPC_FUNC_IMPL(__imp__sub_82F39F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39F48"))) PPC_WEAK_FUNC(sub_82F39F48);
PPC_FUNC_IMPL(__imp__sub_82F39F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23008
	ctx.r3.s64 = r11.s64 + -23008;
}

__attribute__((alias("__imp__sub_82F39F50"))) PPC_WEAK_FUNC(sub_82F39F50);
PPC_FUNC_IMPL(__imp__sub_82F39F50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F39F54"))) PPC_WEAK_FUNC(sub_82F39F54);
PPC_FUNC_IMPL(__imp__sub_82F39F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39F58"))) PPC_WEAK_FUNC(sub_82F39F58);
PPC_FUNC_IMPL(__imp__sub_82F39F58) {
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
	// stw r11,-26720(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26720, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F39F80"))) PPC_WEAK_FUNC(sub_82F39F80);
PPC_FUNC_IMPL(__imp__sub_82F39F80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39F84"))) PPC_WEAK_FUNC(sub_82F39F84);
PPC_FUNC_IMPL(__imp__sub_82F39F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39F88"))) PPC_WEAK_FUNC(sub_82F39F88);
PPC_FUNC_IMPL(__imp__sub_82F39F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23000
	ctx.r3.s64 = r11.s64 + -23000;
}

__attribute__((alias("__imp__sub_82F39F90"))) PPC_WEAK_FUNC(sub_82F39F90);
PPC_FUNC_IMPL(__imp__sub_82F39F90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F39F94"))) PPC_WEAK_FUNC(sub_82F39F94);
PPC_FUNC_IMPL(__imp__sub_82F39F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39F98"))) PPC_WEAK_FUNC(sub_82F39F98);
PPC_FUNC_IMPL(__imp__sub_82F39F98) {
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
	// stw r11,-26700(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26700, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F39FC0"))) PPC_WEAK_FUNC(sub_82F39FC0);
PPC_FUNC_IMPL(__imp__sub_82F39FC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39FC4"))) PPC_WEAK_FUNC(sub_82F39FC4);
PPC_FUNC_IMPL(__imp__sub_82F39FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39FC8"))) PPC_WEAK_FUNC(sub_82F39FC8);
PPC_FUNC_IMPL(__imp__sub_82F39FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22992
	ctx.r3.s64 = r11.s64 + -22992;
}

__attribute__((alias("__imp__sub_82F39FD0"))) PPC_WEAK_FUNC(sub_82F39FD0);
PPC_FUNC_IMPL(__imp__sub_82F39FD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F39FD4"))) PPC_WEAK_FUNC(sub_82F39FD4);
PPC_FUNC_IMPL(__imp__sub_82F39FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39FD8"))) PPC_WEAK_FUNC(sub_82F39FD8);
PPC_FUNC_IMPL(__imp__sub_82F39FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22984
	ctx.r3.s64 = r11.s64 + -22984;
}

__attribute__((alias("__imp__sub_82F39FE0"))) PPC_WEAK_FUNC(sub_82F39FE0);
PPC_FUNC_IMPL(__imp__sub_82F39FE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F39FE4"))) PPC_WEAK_FUNC(sub_82F39FE4);
PPC_FUNC_IMPL(__imp__sub_82F39FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39FE8"))) PPC_WEAK_FUNC(sub_82F39FE8);
PPC_FUNC_IMPL(__imp__sub_82F39FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22976
	ctx.r3.s64 = r11.s64 + -22976;
}

__attribute__((alias("__imp__sub_82F39FF0"))) PPC_WEAK_FUNC(sub_82F39FF0);
PPC_FUNC_IMPL(__imp__sub_82F39FF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F39FF4"))) PPC_WEAK_FUNC(sub_82F39FF4);
PPC_FUNC_IMPL(__imp__sub_82F39FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39FF8"))) PPC_WEAK_FUNC(sub_82F39FF8);
PPC_FUNC_IMPL(__imp__sub_82F39FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22968
	ctx.r3.s64 = r11.s64 + -22968;
}

__attribute__((alias("__imp__sub_82F3A000"))) PPC_WEAK_FUNC(sub_82F3A000);
PPC_FUNC_IMPL(__imp__sub_82F3A000) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A004"))) PPC_WEAK_FUNC(sub_82F3A004);
PPC_FUNC_IMPL(__imp__sub_82F3A004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A008"))) PPC_WEAK_FUNC(sub_82F3A008);
PPC_FUNC_IMPL(__imp__sub_82F3A008) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,-31260
	ctx.r3.s64 = r11.s64 + -31260;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-26656(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26656, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3A034"))) PPC_WEAK_FUNC(sub_82F3A034);
PPC_FUNC_IMPL(__imp__sub_82F3A034) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A038"))) PPC_WEAK_FUNC(sub_82F3A038);
PPC_FUNC_IMPL(__imp__sub_82F3A038) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,-19420
	ctx.r3.s64 = r11.s64 + -19420;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-26652(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26652, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3A064"))) PPC_WEAK_FUNC(sub_82F3A064);
PPC_FUNC_IMPL(__imp__sub_82F3A064) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A068"))) PPC_WEAK_FUNC(sub_82F3A068);
PPC_FUNC_IMPL(__imp__sub_82F3A068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22960
	ctx.r3.s64 = r11.s64 + -22960;
}

__attribute__((alias("__imp__sub_82F3A070"))) PPC_WEAK_FUNC(sub_82F3A070);
PPC_FUNC_IMPL(__imp__sub_82F3A070) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A074"))) PPC_WEAK_FUNC(sub_82F3A074);
PPC_FUNC_IMPL(__imp__sub_82F3A074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A078"))) PPC_WEAK_FUNC(sub_82F3A078);
PPC_FUNC_IMPL(__imp__sub_82F3A078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22952
	ctx.r3.s64 = r11.s64 + -22952;
}

__attribute__((alias("__imp__sub_82F3A080"))) PPC_WEAK_FUNC(sub_82F3A080);
PPC_FUNC_IMPL(__imp__sub_82F3A080) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A084"))) PPC_WEAK_FUNC(sub_82F3A084);
PPC_FUNC_IMPL(__imp__sub_82F3A084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A088"))) PPC_WEAK_FUNC(sub_82F3A088);
PPC_FUNC_IMPL(__imp__sub_82F3A088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22944
	ctx.r3.s64 = r11.s64 + -22944;
}

__attribute__((alias("__imp__sub_82F3A090"))) PPC_WEAK_FUNC(sub_82F3A090);
PPC_FUNC_IMPL(__imp__sub_82F3A090) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A094"))) PPC_WEAK_FUNC(sub_82F3A094);
PPC_FUNC_IMPL(__imp__sub_82F3A094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A098"))) PPC_WEAK_FUNC(sub_82F3A098);
PPC_FUNC_IMPL(__imp__sub_82F3A098) {
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
	// stw r11,-26632(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26632, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3A0C0"))) PPC_WEAK_FUNC(sub_82F3A0C0);
PPC_FUNC_IMPL(__imp__sub_82F3A0C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A0C4"))) PPC_WEAK_FUNC(sub_82F3A0C4);
PPC_FUNC_IMPL(__imp__sub_82F3A0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A0C8"))) PPC_WEAK_FUNC(sub_82F3A0C8);
PPC_FUNC_IMPL(__imp__sub_82F3A0C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-18852
	ctx.r9.s64 = ctx.r10.s64 + -18852;
	// li r10,98
	ctx.r10.s64 = 98;
loc_82F3A0D8:
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
	// bne cr6,0x82f3a0d8
	if (!cr6.eq) goto loc_82F3A0D8;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-26628(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26628, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A100"))) PPC_WEAK_FUNC(sub_82F3A100);
PPC_FUNC_IMPL(__imp__sub_82F3A100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22936
	ctx.r3.s64 = r11.s64 + -22936;
}

__attribute__((alias("__imp__sub_82F3A108"))) PPC_WEAK_FUNC(sub_82F3A108);
PPC_FUNC_IMPL(__imp__sub_82F3A108) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A10C"))) PPC_WEAK_FUNC(sub_82F3A10C);
PPC_FUNC_IMPL(__imp__sub_82F3A10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A110"))) PPC_WEAK_FUNC(sub_82F3A110);
PPC_FUNC_IMPL(__imp__sub_82F3A110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22928
	ctx.r3.s64 = r11.s64 + -22928;
}

__attribute__((alias("__imp__sub_82F3A118"))) PPC_WEAK_FUNC(sub_82F3A118);
PPC_FUNC_IMPL(__imp__sub_82F3A118) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A11C"))) PPC_WEAK_FUNC(sub_82F3A11C);
PPC_FUNC_IMPL(__imp__sub_82F3A11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A120"))) PPC_WEAK_FUNC(sub_82F3A120);
PPC_FUNC_IMPL(__imp__sub_82F3A120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22920
	ctx.r3.s64 = r11.s64 + -22920;
}

__attribute__((alias("__imp__sub_82F3A128"))) PPC_WEAK_FUNC(sub_82F3A128);
PPC_FUNC_IMPL(__imp__sub_82F3A128) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A12C"))) PPC_WEAK_FUNC(sub_82F3A12C);
PPC_FUNC_IMPL(__imp__sub_82F3A12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A130"))) PPC_WEAK_FUNC(sub_82F3A130);
PPC_FUNC_IMPL(__imp__sub_82F3A130) {
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
	// stw r11,-26608(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26608, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3A158"))) PPC_WEAK_FUNC(sub_82F3A158);
PPC_FUNC_IMPL(__imp__sub_82F3A158) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A15C"))) PPC_WEAK_FUNC(sub_82F3A15C);
PPC_FUNC_IMPL(__imp__sub_82F3A15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A160"))) PPC_WEAK_FUNC(sub_82F3A160);
PPC_FUNC_IMPL(__imp__sub_82F3A160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22912
	ctx.r3.s64 = r11.s64 + -22912;
}

__attribute__((alias("__imp__sub_82F3A168"))) PPC_WEAK_FUNC(sub_82F3A168);
PPC_FUNC_IMPL(__imp__sub_82F3A168) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A16C"))) PPC_WEAK_FUNC(sub_82F3A16C);
PPC_FUNC_IMPL(__imp__sub_82F3A16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A170"))) PPC_WEAK_FUNC(sub_82F3A170);
PPC_FUNC_IMPL(__imp__sub_82F3A170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22904
	ctx.r3.s64 = r11.s64 + -22904;
}

__attribute__((alias("__imp__sub_82F3A178"))) PPC_WEAK_FUNC(sub_82F3A178);
PPC_FUNC_IMPL(__imp__sub_82F3A178) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A17C"))) PPC_WEAK_FUNC(sub_82F3A17C);
PPC_FUNC_IMPL(__imp__sub_82F3A17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A180"))) PPC_WEAK_FUNC(sub_82F3A180);
PPC_FUNC_IMPL(__imp__sub_82F3A180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22896
	ctx.r3.s64 = r11.s64 + -22896;
}

__attribute__((alias("__imp__sub_82F3A188"))) PPC_WEAK_FUNC(sub_82F3A188);
PPC_FUNC_IMPL(__imp__sub_82F3A188) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A18C"))) PPC_WEAK_FUNC(sub_82F3A18C);
PPC_FUNC_IMPL(__imp__sub_82F3A18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A190"))) PPC_WEAK_FUNC(sub_82F3A190);
PPC_FUNC_IMPL(__imp__sub_82F3A190) {
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
	// stw r11,-26588(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26588, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3A1B8"))) PPC_WEAK_FUNC(sub_82F3A1B8);
PPC_FUNC_IMPL(__imp__sub_82F3A1B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A1BC"))) PPC_WEAK_FUNC(sub_82F3A1BC);
PPC_FUNC_IMPL(__imp__sub_82F3A1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A1C0"))) PPC_WEAK_FUNC(sub_82F3A1C0);
PPC_FUNC_IMPL(__imp__sub_82F3A1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22888
	ctx.r3.s64 = r11.s64 + -22888;
}

__attribute__((alias("__imp__sub_82F3A1C8"))) PPC_WEAK_FUNC(sub_82F3A1C8);
PPC_FUNC_IMPL(__imp__sub_82F3A1C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A1CC"))) PPC_WEAK_FUNC(sub_82F3A1CC);
PPC_FUNC_IMPL(__imp__sub_82F3A1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A1D0"))) PPC_WEAK_FUNC(sub_82F3A1D0);
PPC_FUNC_IMPL(__imp__sub_82F3A1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22880
	ctx.r3.s64 = r11.s64 + -22880;
}

__attribute__((alias("__imp__sub_82F3A1D8"))) PPC_WEAK_FUNC(sub_82F3A1D8);
PPC_FUNC_IMPL(__imp__sub_82F3A1D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A1DC"))) PPC_WEAK_FUNC(sub_82F3A1DC);
PPC_FUNC_IMPL(__imp__sub_82F3A1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A1E0"))) PPC_WEAK_FUNC(sub_82F3A1E0);
PPC_FUNC_IMPL(__imp__sub_82F3A1E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22872
	ctx.r3.s64 = r11.s64 + -22872;
}

__attribute__((alias("__imp__sub_82F3A1E8"))) PPC_WEAK_FUNC(sub_82F3A1E8);
PPC_FUNC_IMPL(__imp__sub_82F3A1E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A1EC"))) PPC_WEAK_FUNC(sub_82F3A1EC);
PPC_FUNC_IMPL(__imp__sub_82F3A1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A1F0"))) PPC_WEAK_FUNC(sub_82F3A1F0);
PPC_FUNC_IMPL(__imp__sub_82F3A1F0) {
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
	// stw r11,-26568(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26568, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3A218"))) PPC_WEAK_FUNC(sub_82F3A218);
PPC_FUNC_IMPL(__imp__sub_82F3A218) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A21C"))) PPC_WEAK_FUNC(sub_82F3A21C);
PPC_FUNC_IMPL(__imp__sub_82F3A21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A220"))) PPC_WEAK_FUNC(sub_82F3A220);
PPC_FUNC_IMPL(__imp__sub_82F3A220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,6388
	ctx.r9.s64 = ctx.r10.s64 + 6388;
	// li r10,75
	ctx.r10.s64 = 75;
loc_82F3A230:
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
	// bne cr6,0x82f3a230
	if (!cr6.eq) goto loc_82F3A230;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-26564(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26564, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A258"))) PPC_WEAK_FUNC(sub_82F3A258);
PPC_FUNC_IMPL(__imp__sub_82F3A258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-18832
	ctx.r9.s64 = ctx.r10.s64 + -18832;
	// li r10,105
	ctx.r10.s64 = 105;
loc_82F3A268:
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
	// bne cr6,0x82f3a268
	if (!cr6.eq) goto loc_82F3A268;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-26560(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26560, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A290"))) PPC_WEAK_FUNC(sub_82F3A290);
PPC_FUNC_IMPL(__imp__sub_82F3A290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-18816
	ctx.r9.s64 = ctx.r10.s64 + -18816;
	// li r10,105
	ctx.r10.s64 = 105;
loc_82F3A2A0:
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
	// bne cr6,0x82f3a2a0
	if (!cr6.eq) goto loc_82F3A2A0;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-26556(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26556, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A2C8"))) PPC_WEAK_FUNC(sub_82F3A2C8);
PPC_FUNC_IMPL(__imp__sub_82F3A2C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-20712
	ctx.r9.s64 = ctx.r10.s64 + -20712;
	// li r10,105
	ctx.r10.s64 = 105;
loc_82F3A2D8:
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
	// bne cr6,0x82f3a2d8
	if (!cr6.eq) goto loc_82F3A2D8;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-26552(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26552, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A300"))) PPC_WEAK_FUNC(sub_82F3A300);
PPC_FUNC_IMPL(__imp__sub_82F3A300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22864
	ctx.r3.s64 = r11.s64 + -22864;
}

__attribute__((alias("__imp__sub_82F3A308"))) PPC_WEAK_FUNC(sub_82F3A308);
PPC_FUNC_IMPL(__imp__sub_82F3A308) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A30C"))) PPC_WEAK_FUNC(sub_82F3A30C);
PPC_FUNC_IMPL(__imp__sub_82F3A30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A310"))) PPC_WEAK_FUNC(sub_82F3A310);
PPC_FUNC_IMPL(__imp__sub_82F3A310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22856
	ctx.r3.s64 = r11.s64 + -22856;
}

__attribute__((alias("__imp__sub_82F3A318"))) PPC_WEAK_FUNC(sub_82F3A318);
PPC_FUNC_IMPL(__imp__sub_82F3A318) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A31C"))) PPC_WEAK_FUNC(sub_82F3A31C);
PPC_FUNC_IMPL(__imp__sub_82F3A31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A320"))) PPC_WEAK_FUNC(sub_82F3A320);
PPC_FUNC_IMPL(__imp__sub_82F3A320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22848
	ctx.r3.s64 = r11.s64 + -22848;
}

__attribute__((alias("__imp__sub_82F3A328"))) PPC_WEAK_FUNC(sub_82F3A328);
PPC_FUNC_IMPL(__imp__sub_82F3A328) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A32C"))) PPC_WEAK_FUNC(sub_82F3A32C);
PPC_FUNC_IMPL(__imp__sub_82F3A32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A330"))) PPC_WEAK_FUNC(sub_82F3A330);
PPC_FUNC_IMPL(__imp__sub_82F3A330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22840
	ctx.r3.s64 = r11.s64 + -22840;
}

__attribute__((alias("__imp__sub_82F3A338"))) PPC_WEAK_FUNC(sub_82F3A338);
PPC_FUNC_IMPL(__imp__sub_82F3A338) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A33C"))) PPC_WEAK_FUNC(sub_82F3A33C);
PPC_FUNC_IMPL(__imp__sub_82F3A33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A340"))) PPC_WEAK_FUNC(sub_82F3A340);
PPC_FUNC_IMPL(__imp__sub_82F3A340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22832
	ctx.r3.s64 = r11.s64 + -22832;
}

__attribute__((alias("__imp__sub_82F3A348"))) PPC_WEAK_FUNC(sub_82F3A348);
PPC_FUNC_IMPL(__imp__sub_82F3A348) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A34C"))) PPC_WEAK_FUNC(sub_82F3A34C);
PPC_FUNC_IMPL(__imp__sub_82F3A34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A350"))) PPC_WEAK_FUNC(sub_82F3A350);
PPC_FUNC_IMPL(__imp__sub_82F3A350) {
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
	// stw r11,-26500(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26500, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3A378"))) PPC_WEAK_FUNC(sub_82F3A378);
PPC_FUNC_IMPL(__imp__sub_82F3A378) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3A37C"))) PPC_WEAK_FUNC(sub_82F3A37C);
PPC_FUNC_IMPL(__imp__sub_82F3A37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A380"))) PPC_WEAK_FUNC(sub_82F3A380);
PPC_FUNC_IMPL(__imp__sub_82F3A380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22824
	ctx.r3.s64 = r11.s64 + -22824;
}

__attribute__((alias("__imp__sub_82F3A388"))) PPC_WEAK_FUNC(sub_82F3A388);
PPC_FUNC_IMPL(__imp__sub_82F3A388) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A38C"))) PPC_WEAK_FUNC(sub_82F3A38C);
PPC_FUNC_IMPL(__imp__sub_82F3A38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A390"))) PPC_WEAK_FUNC(sub_82F3A390);
PPC_FUNC_IMPL(__imp__sub_82F3A390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22816
	ctx.r3.s64 = r11.s64 + -22816;
}

__attribute__((alias("__imp__sub_82F3A398"))) PPC_WEAK_FUNC(sub_82F3A398);
PPC_FUNC_IMPL(__imp__sub_82F3A398) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A39C"))) PPC_WEAK_FUNC(sub_82F3A39C);
PPC_FUNC_IMPL(__imp__sub_82F3A39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A3A0"))) PPC_WEAK_FUNC(sub_82F3A3A0);
PPC_FUNC_IMPL(__imp__sub_82F3A3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22808
	ctx.r3.s64 = r11.s64 + -22808;
}

__attribute__((alias("__imp__sub_82F3A3A8"))) PPC_WEAK_FUNC(sub_82F3A3A8);
PPC_FUNC_IMPL(__imp__sub_82F3A3A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A3AC"))) PPC_WEAK_FUNC(sub_82F3A3AC);
PPC_FUNC_IMPL(__imp__sub_82F3A3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A3B0"))) PPC_WEAK_FUNC(sub_82F3A3B0);
PPC_FUNC_IMPL(__imp__sub_82F3A3B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22800
	ctx.r3.s64 = r11.s64 + -22800;
}

__attribute__((alias("__imp__sub_82F3A3B8"))) PPC_WEAK_FUNC(sub_82F3A3B8);
PPC_FUNC_IMPL(__imp__sub_82F3A3B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A3BC"))) PPC_WEAK_FUNC(sub_82F3A3BC);
PPC_FUNC_IMPL(__imp__sub_82F3A3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A3C0"))) PPC_WEAK_FUNC(sub_82F3A3C0);
PPC_FUNC_IMPL(__imp__sub_82F3A3C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22792
	ctx.r3.s64 = r11.s64 + -22792;
}

__attribute__((alias("__imp__sub_82F3A3C8"))) PPC_WEAK_FUNC(sub_82F3A3C8);
PPC_FUNC_IMPL(__imp__sub_82F3A3C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A3CC"))) PPC_WEAK_FUNC(sub_82F3A3CC);
PPC_FUNC_IMPL(__imp__sub_82F3A3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3A3D0"))) PPC_WEAK_FUNC(sub_82F3A3D0);
PPC_FUNC_IMPL(__imp__sub_82F3A3D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22784
	ctx.r3.s64 = r11.s64 + -22784;
}

__attribute__((alias("__imp__sub_82F3A3D8"))) PPC_WEAK_FUNC(sub_82F3A3D8);
PPC_FUNC_IMPL(__imp__sub_82F3A3D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3A3DC"))) PPC_WEAK_FUNC(sub_82F3A3DC);
PPC_FUNC_IMPL(__imp__sub_82F3A3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

