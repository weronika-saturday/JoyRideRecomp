#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825DEE60"))) PPC_WEAK_FUNC(sub_825DEE60);
PPC_FUNC_IMPL(__imp__sub_825DEE60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r30,12812(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12812);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825deee4
	if (cr6.eq) goto loc_825DEEE4;
	// lwz r11,11036(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11036);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825dee94
	if (cr6.eq) goto loc_825DEE94;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// b 0x825deee4
	goto loc_825DEEE4;
loc_825DEE94:
	// lwz r11,11040(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11040);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825deee4
	if (cr0.eq) goto loc_825DEEE4;
	// lwz r11,13932(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13932);
	// lwz r3,13928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 13928);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x825deebc
	if (cr6.lt) goto loc_825DEEBC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f4bc0
	sub_825F4BC0(ctx, base);
loc_825DEEBC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// rlwimi r11,r30,30,2,31
	r11.u64 = (__builtin_rotateleft32(r30.u32, 30) & 0x3FFFFFFF) | (r11.u64 & 0xFFFFFFFFC0000000);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r11,r11,0,2,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// stw r9,13928(r31)
	PPC_STORE_U32(r31.u32 + 13928, ctx.r9.u32);
loc_825DEEE4:
	// stw r29,12812(r31)
	PPC_STORE_U32(r31.u32 + 12812, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825DEEEC"))) PPC_WEAK_FUNC(sub_825DEEEC);
PPC_FUNC_IMPL(__imp__sub_825DEEEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825DEEF0"))) PPC_WEAK_FUNC(sub_825DEEF0);
PPC_FUNC_IMPL(__imp__sub_825DEEF0) {
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
	// addi r11,r4,3204
	r11.s64 = ctx.r4.s64 + 3204;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r3
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825def1c
	if (cr6.eq) goto loc_825DEF1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
loc_825DEF1C:
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

__attribute__((alias("__imp__sub_825DEF30"))) PPC_WEAK_FUNC(sub_825DEF30);
PPC_FUNC_IMPL(__imp__sub_825DEF30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DEF34"))) PPC_WEAK_FUNC(sub_825DEF34);
PPC_FUNC_IMPL(__imp__sub_825DEF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DEF38"))) PPC_WEAK_FUNC(sub_825DEF38);
PPC_FUNC_IMPL(__imp__sub_825DEF38) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12832(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12832);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825def5c
	if (cr6.eq) goto loc_825DEF5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
loc_825DEF5C:
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

__attribute__((alias("__imp__sub_825DEF70"))) PPC_WEAK_FUNC(sub_825DEF70);
PPC_FUNC_IMPL(__imp__sub_825DEF70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DEF74"))) PPC_WEAK_FUNC(sub_825DEF74);
PPC_FUNC_IMPL(__imp__sub_825DEF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DEF78"))) PPC_WEAK_FUNC(sub_825DEF78);
PPC_FUNC_IMPL(__imp__sub_825DEF78) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-1648(r1)
	ea = -1648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825ebff0
	sub_825EBFF0(ctx, base);
	// addi r30,r31,15408
	r30.s64 = r31.s64 + 15408;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r8,r11,1536
	ctx.r8.s64 = r11.s64 + 1536;
loc_825DEFB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x825defd0
	if (!cr0.eq) goto loc_825DEFD0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x825defb0
	if (!cr6.eq) goto loc_825DEFB0;
loc_825DEFD0:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825df030
	if (cr0.eq) goto loc_825DF030;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x825df014
	if (cr6.eq) goto loc_825DF014;
	// lwz r3,24364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24364);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825df008
	if (cr6.eq) goto loc_825DF008;
	// lwz r11,24368(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24368);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825df008
	if (!cr0.eq) goto loc_825DF008;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82605748
	sub_82605748(ctx, base);
loc_825DF008:
	// lwz r11,24368(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24368);
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// stw r11,24368(r31)
	PPC_STORE_U32(r31.u32 + 24368, r11.u32);
loc_825DF014:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,17116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17116);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,17116(r31)
	PPC_STORE_U32(r31.u32 + 17116, r11.u32);
loc_825DF030:
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825DF044"))) PPC_WEAK_FUNC(sub_825DF044);
PPC_FUNC_IMPL(__imp__sub_825DF044) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DF048"))) PPC_WEAK_FUNC(sub_825DF048);
PPC_FUNC_IMPL(__imp__sub_825DF048) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-1648(r1)
	ea = -1648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825ec088
	sub_825EC088(ctx, base);
	// addi r30,r31,15408
	r30.s64 = r31.s64 + 15408;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r8,r11,1536
	ctx.r8.s64 = r11.s64 + 1536;
loc_825DF080:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x825df0a0
	if (!cr0.eq) goto loc_825DF0A0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x825df080
	if (!cr6.eq) goto loc_825DF080;
loc_825DF0A0:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825df100
	if (cr0.eq) goto loc_825DF100;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x825df0e4
	if (cr6.eq) goto loc_825DF0E4;
	// lwz r3,24364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24364);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825df0d8
	if (cr6.eq) goto loc_825DF0D8;
	// lwz r11,24368(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24368);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825df0d8
	if (!cr0.eq) goto loc_825DF0D8;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82605748
	sub_82605748(ctx, base);
loc_825DF0D8:
	// lwz r11,24368(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24368);
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// stw r11,24368(r31)
	PPC_STORE_U32(r31.u32 + 24368, r11.u32);
loc_825DF0E4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,17116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17116);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,17116(r31)
	PPC_STORE_U32(r31.u32 + 17116, r11.u32);
loc_825DF100:
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825DF114"))) PPC_WEAK_FUNC(sub_825DF114);
PPC_FUNC_IMPL(__imp__sub_825DF114) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DF118"))) PPC_WEAK_FUNC(sub_825DF118);
PPC_FUNC_IMPL(__imp__sub_825DF118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// lwz r10,28(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// li r9,1
	ctx.r9.s64 = 1;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// stwx r10,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// srd r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r7,32(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// rlwinm r10,r7,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xFFF;
	// rlwinm r9,r7,0,3,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1FFFF000;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// clrlwi r7,r7,20
	ctx.r7.u64 = ctx.r7.u32 & 0xFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,1156(r11)
	PPC_STORE_U32(r11.u32 + 1156, ctx.r10.u32);
	// lwz r10,36(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// stw r10,1160(r11)
	PPC_STORE_U32(r11.u32 + 1160, ctx.r10.u32);
	// lwz r10,40(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// stw r10,1164(r11)
	PPC_STORE_U32(r11.u32 + 1164, ctx.r10.u32);
	// lwz r10,44(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// stw r10,1168(r11)
	PPC_STORE_U32(r11.u32 + 1168, ctx.r10.u32);
	// lwz r7,48(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// rlwinm r10,r7,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r9,r7,0,3,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1FFFF000;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// clrlwi r7,r7,20
	ctx.r7.u64 = ctx.r7.u32 & 0xFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,1172(r11)
	PPC_STORE_U32(r11.u32 + 1172, ctx.r10.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r8,r11
	r11.u64 = ctx.r8.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
}

__attribute__((alias("__imp__sub_825DF1B0"))) PPC_WEAK_FUNC(sub_825DF1B0);
PPC_FUNC_IMPL(__imp__sub_825DF1B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DF1B4"))) PPC_WEAK_FUNC(sub_825DF1B4);
PPC_FUNC_IMPL(__imp__sub_825DF1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DF1B8"))) PPC_WEAK_FUNC(sub_825DF1B8);
PPC_FUNC_IMPL(__imp__sub_825DF1B8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x825df240
	if (!cr6.eq) goto loc_825DF240;
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825df1ec
	if (!cr6.gt) goto loc_825DF1EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825DF1EC:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r11,r11,24576
	r11.u64 = r11.u64 | 24576;
	// ori r10,r10,25088
	ctx.r10.u64 = ctx.r10.u64 | 25088;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r11,-1
	r11.s64 = -1;
	// lwz r9,13084(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13084);
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// ori r8,r8,24832
	ctx.r8.u64 = ctx.r8.u64 | 24832;
	// ori r7,r7,25344
	ctx.r7.u64 = ctx.r7.u64 | 25344;
	// li r6,0
	ctx.r6.s64 = 0;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lwz r11,13088(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13088);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_825DF240:
	// lwz r11,10440(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10440);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,10436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10436);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,17,0,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r7,r9,17
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 17;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// srawi r6,r11,17
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = r11.s32 >> 17;
	// srawi r5,r8,17
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 17;
	// srawi r4,r10,17
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 17;
	// bl 0x825dc610
	sub_825DC610(ctx, base);
	// lwz r11,11044(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11044);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r4,r11,20,30,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x3;
	// bl 0x825e6a08
	sub_825E6A08(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825DF2A8"))) PPC_WEAK_FUNC(sub_825DF2A8);
PPC_FUNC_IMPL(__imp__sub_825DF2A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DF2AC"))) PPC_WEAK_FUNC(sub_825DF2AC);
PPC_FUNC_IMPL(__imp__sub_825DF2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DF2B0"))) PPC_WEAK_FUNC(sub_825DF2B0);
PPC_FUNC_IMPL(__imp__sub_825DF2B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x828eaaf0
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12816(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12816);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// fmr f29,f5
	f29.f64 = ctx.f5.f64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// fmr f28,f6
	f28.f64 = ctx.f6.f64;
	// bne 0x825df2f8
	if (!cr0.eq) goto loc_825DF2F8;
	// lwz r9,12832(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12832);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825df4ec
	if (cr6.eq) goto loc_825DF4EC;
loc_825DF2F8:
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r8,r11,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x825df30c
	if (cr0.eq) goto loc_825DF30C;
	// li r11,1
	r11.s64 = 1;
	// b 0x825df398
	goto loc_825DF398;
loc_825DF30C:
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825df390
	if (cr0.eq) goto loc_825DF390;
	// lwz r11,13104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13104);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825df328
	if (cr6.eq) goto loc_825DF328;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825df390
	if (!cr6.eq) goto loc_825DF390;
loc_825DF328:
	// lwz r11,12820(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12820);
	// lwz r10,13108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13108);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825df340
	if (cr6.eq) goto loc_825DF340;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825df390
	if (!cr6.eq) goto loc_825DF390;
loc_825DF340:
	// lwz r11,12824(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12824);
	// lwz r10,13112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13112);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825df358
	if (cr6.eq) goto loc_825DF358;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825df390
	if (!cr6.eq) goto loc_825DF390;
loc_825DF358:
	// lwz r11,12828(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12828);
	// lwz r10,13116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13116);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825df370
	if (cr6.eq) goto loc_825DF370;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825df390
	if (!cr6.eq) goto loc_825DF390;
loc_825DF370:
	// lwz r11,12832(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12832);
	// lwz r10,13120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13120);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825df388
	if (cr6.eq) goto loc_825DF388;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825df390
	if (!cr6.eq) goto loc_825DF390;
loc_825DF388:
	// li r11,1
	r11.s64 = 1;
	// b 0x825df394
	goto loc_825DF394;
loc_825DF390:
	// li r11,0
	r11.s64 = 0;
loc_825DF394:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_825DF398:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825df3ac
	if (cr0.eq) goto loc_825DF3AC;
	// lwz r11,13556(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13556);
	// lwz r7,13560(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 13560);
	// b 0x825df3c0
	goto loc_825DF3C0;
loc_825DF3AC:
	// lwz r10,36(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// rlwinm r11,r10,14,18,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// rlwinm r10,r10,29,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x7FFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
loc_825DF3C0:
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f31.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// fctiwz f0,f3
	f0.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f0,f30
	f0.s64 = (f30.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f30.f64));
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x825df3f4
	if (!cr6.lt) goto loc_825DF3F4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_825DF3F4:
	// fctiwz f0,f4
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// blt cr6,0x825df410
	if (cr6.lt) goto loc_825DF410;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_825DF410:
	// subf. r11,r6,r11
	r11.s64 = r11.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// blt 0x825df424
	if (cr0.lt) goto loc_825DF424;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x825df42c
	if (!cr6.lt) goto loc_825DF42C;
loc_825DF424:
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_825DF42C:
	// extsw r11,r11
	r11.s64 = r11.s32;
	// stfs f31,13024(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 13024, temp.u32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// stfs f30,13028(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 13028, temp.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// li r11,0
	r11.s64 = 0;
	// frsp f27,f0
	f27.f64 = double(float(f0.f64));
	// stfs f29,13040(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 13040, temp.u32);
	// fcfid f0,f13
	f0.f64 = double(ctx.f13.s64);
	// stfs f28,13044(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 13044, temp.u32);
	// stfs f27,13036(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 13036, temp.u32);
	// stw r11,13048(r31)
	PPC_STORE_U32(r31.u32 + 13048, r11.u32);
	// addi r4,r31,13052
	ctx.r4.s64 = r31.s64 + 13052;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// frsp f26,f0
	f26.f64 = double(float(f0.f64));
	// stfs f26,13032(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 13032, temp.u32);
	// bl 0x825debc0
	sub_825DEBC0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fsubs f0,f28,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f28.f64 - f29.f64));
	// stfs f0,10520(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 10520, temp.u32);
	// stfs f29,10524(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 10524, temp.u32);
	// lfs f0,3792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	f0.f64 = double(temp.f32);
	// fmuls f13,f26,f0
	ctx.f13.f64 = double(float(f26.f64 * f0.f64));
	// stfs f13,10504(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 10504, temp.u32);
	// fmuls f0,f27,f0
	f0.f64 = double(float(f27.f64 * f0.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f13,10508(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 10508, temp.u32);
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f13,10512(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 10512, temp.u32);
	// fadds f0,f0,f30
	f0.f64 = double(float(f0.f64 + f30.f64));
	// stfs f0,10516(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 10516, temp.u32);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,1024
	r11.u64 = r11.u64 | 67108864;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,512
	r11.u64 = r11.u64 | 33554432;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,256
	r11.u64 = r11.u64 | 16777216;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,128
	r11.u64 = r11.u64 | 8388608;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,64
	r11.u64 = r11.u64 | 4194304;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,32
	r11.u64 = r11.u64 | 2097152;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_825DF4EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x828eab3c
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825DF504"))) PPC_WEAK_FUNC(sub_825DF504);
PPC_FUNC_IMPL(__imp__sub_825DF504) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DF508"))) PPC_WEAK_FUNC(sub_825DF508);
PPC_FUNC_IMPL(__imp__sub_825DF508) {
	PPC_FUNC_PROLOGUE();
	// stw r4,12288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12288, ctx.r4.u32);
	// addi r4,r3,13052
	ctx.r4.s64 = ctx.r3.s64 + 13052;
}

__attribute__((alias("__imp__sub_825DF510"))) PPC_WEAK_FUNC(sub_825DF510);
PPC_FUNC_IMPL(__imp__sub_825DF510) {
	PPC_FUNC_PROLOGUE();
	// b 0x825debc0
	sub_825DEBC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DF514"))) PPC_WEAK_FUNC(sub_825DF514);
PPC_FUNC_IMPL(__imp__sub_825DF514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DF518"))) PPC_WEAK_FUNC(sub_825DF518);
PPC_FUNC_IMPL(__imp__sub_825DF518) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f6,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f2,f11
	ctx.f2.f64 = double(float(ctx.f11.f64));
	// frsp f3,f12
	ctx.f3.f64 = double(float(ctx.f12.f64));
	// frsp f4,f13
	ctx.f4.f64 = double(float(ctx.f13.f64));
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// bl 0x825df2b0
	sub_825DF2B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825DF594"))) PPC_WEAK_FUNC(sub_825DF594);
PPC_FUNC_IMPL(__imp__sub_825DF594) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DF598"))) PPC_WEAK_FUNC(sub_825DF598);
PPC_FUNC_IMPL(__imp__sub_825DF598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lfs f6,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
}

__attribute__((alias("__imp__sub_825DF5B4"))) PPC_WEAK_FUNC(sub_825DF5B4);
PPC_FUNC_IMPL(__imp__sub_825DF5B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x825df2b0
	sub_825DF2B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DF5B8"))) PPC_WEAK_FUNC(sub_825DF5B8);
PPC_FUNC_IMPL(__imp__sub_825DF5B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm. r11,r10,16,30,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825df5cc
	if (!cr0.eq) goto loc_825DF5CC;
	// li r11,0
	r11.s64 = 0;
	// b 0x825df5e4
	goto loc_825DF5E4;
loc_825DF5CC:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// lis r11,0
	r11.s64 = 0;
	// bne cr6,0x825df5e0
	if (!cr6.eq) goto loc_825DF5E0;
	// ori r11,r11,32769
	r11.u64 = r11.u64 | 32769;
	// b 0x825df5e4
	goto loc_825DF5E4;
loc_825DF5E0:
	// ori r11,r11,49155
	r11.u64 = r11.u64 | 49155;
loc_825DF5E4:
	// li r12,1
	r12.s64 = 1;
	// stw r11,10684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10684, r11.u32);
	// stw r10,10368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10368, ctx.r10.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// rldicr r12,r12,57,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// or r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 | r12.u64;
	// std r9,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r9.u64);
	// li r12,1
	r12.s64 = 1;
	// ld r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// addi r9,r11,-468
	ctx.r9.s64 = r11.s64 + -468;
	// rldicr r12,r12,36,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// addi r4,r10,-492
	ctx.r4.s64 = ctx.r10.s64 + -492;
	// or r8,r8,r12
	ctx.r8.u64 = ctx.r8.u64 | r12.u64;
	// std r8,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r8.u64);
	// lwz r11,-468(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -468);
	// stw r11,13052(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13052, r11.u32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,13056(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13056, r11.u32);
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,13060(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13060, r11.u32);
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,13064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13064, r11.u32);
}

__attribute__((alias("__imp__sub_825DF644"))) PPC_WEAK_FUNC(sub_825DF644);
PPC_FUNC_IMPL(__imp__sub_825DF644) {
	PPC_FUNC_PROLOGUE();
	// b 0x825df518
	sub_825DF518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DF648"))) PPC_WEAK_FUNC(sub_825DF648);
PPC_FUNC_IMPL(__imp__sub_825DF648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// addi r11,r4,3204
	r11.s64 = ctx.r4.s64 + 3204;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stwx r5,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r5.u32);
	// beq cr6,0x825df778
	if (cr6.eq) goto loc_825DF778;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x825df67c
	if (cr6.eq) goto loc_825DF67C;
	// addi r11,r4,1
	r11.s64 = ctx.r4.s64 + 1;
loc_825DF67C:
	// addi r10,r11,2593
	ctx.r10.s64 = r11.s64 + 2593;
	// lwz r7,28(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r8,r9,263
	ctx.r8.u64 = ctx.r9.u64 | 263;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r3,r11,r8
	ctx.r3.u64 = r11.u64 + ctx.r8.u64;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stwx r7,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r7.u32);
	// srawi r11,r3,16
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	r11.s64 = ctx.r3.s32 >> 16;
	// clrldi r10,r3,56
	ctx.r10.u64 = ctx.r3.u64 & 0xFF;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// srd r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// addi r10,r4,3102
	ctx.r10.s64 = ctx.r4.s64 + 3102;
	// ldx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U64(r11.u32 + r31.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// or r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 | ctx.r3.u64;
	// stdx r7,r11,r31
	PPC_STORE_U64(r11.u32 + r31.u32, ctx.r7.u64);
	// lwzx r11,r6,r31
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwzx r7,r10,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// stwx r7,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r7.u32);
	// beq cr6,0x825df778
	if (cr6.eq) goto loc_825DF778;
	// subfic r11,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	r11.s64 = 0 - ctx.r4.s64;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = r11.u64 & ctx.r10.u64;
	// addi r11,r3,2593
	r11.s64 = ctx.r3.s64 + 2593;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r30,r31
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// rlwinm r11,r6,16,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x825df718
	if (cr6.eq) goto loc_825DF718;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x825df718
	if (cr6.eq) goto loc_825DF718;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x825df718
	if (cr6.eq) goto loc_825DF718;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// bne cr6,0x825df778
	if (!cr6.eq) goto loc_825DF778;
loc_825DF718:
	// rlwinm r10,r6,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825df778
	if (cr0.eq) goto loc_825DF778;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// rlwinm r7,r11,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// not r29,r10
	r29.u64 = ~ctx.r10.u64;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// addi r7,r7,-3
	ctx.r7.s64 = ctx.r7.s64 + -3;
	// rlwinm r11,r11,17,0,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0xFFFE0000;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// rlwinm r29,r29,16,0,15
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// and r11,r29,r11
	r11.u64 = r29.u64 & r11.u64;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// srawi r11,r8,16
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	r11.s64 = ctx.r8.s32 >> 16;
	// rlwimi r10,r6,0,16,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r10.u64 & 0xF0000);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r30,r31
	PPC_STORE_U32(r30.u32 + r31.u32, ctx.r10.u32);
	// clrldi r10,r8,56
	ctx.r10.u64 = ctx.r8.u64 & 0xFF;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// ldx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + r31.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stdx r10,r11,r31
	PPC_STORE_U64(r11.u32 + r31.u32, ctx.r10.u64);
loc_825DF778:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825df938
	if (!cr6.eq) goto loc_825DF938;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x825df7c4
	if (!cr6.eq) goto loc_825DF7C4;
	// lwz r10,10372(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10372);
	// rlwinm r11,r10,16,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x825df7a8
	if (cr6.eq) goto loc_825DF7A8;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x825df7a8
	if (cr6.eq) goto loc_825DF7A8;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// bne cr6,0x825df7c4
	if (!cr6.eq) goto loc_825DF7C4;
loc_825DF7A8:
	// li r12,1
	r12.s64 = 1;
	// rlwinm r11,r10,0,16,11
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10372(r31)
	PPC_STORE_U32(r31.u32 + 10372, r11.u32);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_825DF7C4:
	// lbz r11,11071(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11071);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// andi. r10,r11,247
	ctx.r10.u64 = r11.u64 & 247;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r10,11071(r31)
	PPC_STORE_U8(r31.u32 + 11071, ctx.r10.u8);
	// beq cr6,0x825df814
	if (cr6.eq) goto loc_825DF814;
	// lhz r11,28(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 28);
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x825df7f8
	if (cr6.eq) goto loc_825DF7F8;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x825df7f8
	if (cr6.eq) goto loc_825DF7F8;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// bne cr6,0x825df80c
	if (!cr6.eq) goto loc_825DF80C;
loc_825DF7F8:
	// ori r11,r10,8
	r11.u64 = ctx.r10.u64 | 8;
	// stb r11,11071(r31)
	PPC_STORE_U8(r31.u32 + 11071, r11.u8);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_825DF80C:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x825df820
	goto loc_825DF820;
loc_825DF814:
	// lwz r4,12832(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12832);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825df828
	if (cr6.eq) goto loc_825DF828;
loc_825DF820:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825df5b8
	sub_825DF5B8(ctx, base);
loc_825DF828:
	// lwz r11,13092(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13092);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825df900
	if (!cr6.eq) goto loc_825DF900;
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825df900
	if (!cr0.eq) goto loc_825DF900;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825df900
	if (!cr0.eq) goto loc_825DF900;
	// lbz r10,12563(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 12563);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x825df900
	if (!cr0.eq) goto loc_825DF900;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825df864
	if (cr0.eq) goto loc_825DF864;
	// li r11,1
	r11.s64 = 1;
	// b 0x825df8f4
	goto loc_825DF8F4;
loc_825DF864:
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825df8ec
	if (cr0.eq) goto loc_825DF8EC;
	// lwz r11,12816(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12816);
	// lwz r10,13104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13104);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825df884
	if (cr6.eq) goto loc_825DF884;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825df8ec
	if (!cr6.eq) goto loc_825DF8EC;
loc_825DF884:
	// lwz r11,12820(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12820);
	// lwz r10,13108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13108);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825df89c
	if (cr6.eq) goto loc_825DF89C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825df8ec
	if (!cr6.eq) goto loc_825DF8EC;
loc_825DF89C:
	// lwz r11,12824(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12824);
	// lwz r10,13112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13112);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825df8b4
	if (cr6.eq) goto loc_825DF8B4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825df8ec
	if (!cr6.eq) goto loc_825DF8EC;
loc_825DF8B4:
	// lwz r11,12828(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12828);
	// lwz r10,13116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13116);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825df8cc
	if (cr6.eq) goto loc_825DF8CC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825df8ec
	if (!cr6.eq) goto loc_825DF8EC;
loc_825DF8CC:
	// lwz r11,12832(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12832);
	// lwz r10,13120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13120);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825df8e4
	if (cr6.eq) goto loc_825DF8E4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825df8ec
	if (!cr6.eq) goto loc_825DF8EC;
loc_825DF8E4:
	// li r11,1
	r11.s64 = 1;
	// b 0x825df8f0
	goto loc_825DF8F0;
loc_825DF8EC:
	// li r11,0
	r11.s64 = 0;
loc_825DF8F0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_825DF8F4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x825df904
	if (!cr0.eq) goto loc_825DF904;
loc_825DF900:
	// li r11,0
	r11.s64 = 0;
loc_825DF904:
	// lbz r10,11068(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// lwz r9,12292(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12292);
	// rlwimi r10,r11,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// stb r10,11068(r31)
	PPC_STORE_U8(r31.u32 + 11068, ctx.r10.u8);
	// lwz r10,12816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12816);
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r11,10460(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10460);
	// stw r9,12292(r31)
	PPC_STORE_U32(r31.u32 + 12292, ctx.r9.u32);
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// rlwimi r11,r10,0,28,31
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xF) | (r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r11,10460(r31)
	PPC_STORE_U32(r31.u32 + 10460, r11.u32);
	// b 0x825df9bc
	goto loc_825DF9BC;
loc_825DF938:
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// bne cr6,0x825df964
	if (!cr6.eq) goto loc_825DF964;
	// lwz r11,12820(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12820);
	// lwz r10,12296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12296);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// lwz r9,10460(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 10460);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	// stw r10,12296(r31)
	PPC_STORE_U32(r31.u32 + 12296, ctx.r10.u32);
	// rlwimi r9,r11,4,24,27
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 4) & 0xF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF0F);
	// b 0x825df9b8
	goto loc_825DF9B8;
loc_825DF964:
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// bne cr6,0x825df990
	if (!cr6.eq) goto loc_825DF990;
	// lwz r11,12824(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12824);
	// lwz r10,12300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12300);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// lwz r9,10460(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 10460);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	// stw r10,12300(r31)
	PPC_STORE_U32(r31.u32 + 12300, ctx.r10.u32);
	// rlwimi r9,r11,8,20,23
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF0FF);
	// b 0x825df9b8
	goto loc_825DF9B8;
loc_825DF990:
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bne cr6,0x825df9d0
	if (!cr6.eq) goto loc_825DF9D0;
	// lwz r11,12828(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12828);
	// lwz r10,12304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12304);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// lwz r9,10460(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 10460);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	// stw r10,12304(r31)
	PPC_STORE_U32(r31.u32 + 12304, ctx.r10.u32);
	// rlwimi r9,r11,12,16,19
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0xF000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0FFF);
loc_825DF9B8:
	// stw r9,10460(r31)
	PPC_STORE_U32(r31.u32 + 10460, ctx.r9.u32);
loc_825DF9BC:
	// li r12,1
	r12.s64 = 1;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_825DF9D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825DF9D4"))) PPC_WEAK_FUNC(sub_825DF9D4);
PPC_FUNC_IMPL(__imp__sub_825DF9D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825DF9D8"))) PPC_WEAK_FUNC(sub_825DF9D8);
PPC_FUNC_IMPL(__imp__sub_825DF9D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,12832(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12832, ctx.r4.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825dfb1c
	if (cr6.eq) goto loc_825DFB1C;
	// lwz r11,12816(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12816);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825dfa10
	if (!cr6.eq) goto loc_825DFA10;
	// bl 0x825df5b8
	sub_825DF5B8(ctx, base);
loc_825DFA10:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r11,10376(r31)
	PPC_STORE_U32(r31.u32 + 10376, r11.u32);
	// lbz r10,11070(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11070);
	// lbz r9,11071(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 11071);
	// rlwinm. r9,r9,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r11,10560(r31)
	PPC_STORE_U32(r31.u32 + 10560, r11.u32);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// rlwimi r10,r11,5,26,26
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 5) & 0x20) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFDF);
	// stb r10,11070(r31)
	PPC_STORE_U8(r31.u32 + 11070, ctx.r10.u8);
	// beq 0x825dfaf8
	if (cr0.eq) goto loc_825DFAF8;
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825dfa50
	if (cr0.eq) goto loc_825DFA50;
	// li r11,1
	r11.s64 = 1;
	// b 0x825dfae0
	goto loc_825DFAE0;
loc_825DFA50:
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825dfad8
	if (cr0.eq) goto loc_825DFAD8;
	// lwz r11,12816(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12816);
	// lwz r10,13104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13104);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825dfa70
	if (cr6.eq) goto loc_825DFA70;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825dfad8
	if (!cr6.eq) goto loc_825DFAD8;
loc_825DFA70:
	// lwz r11,12820(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12820);
	// lwz r10,13108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13108);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825dfa88
	if (cr6.eq) goto loc_825DFA88;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825dfad8
	if (!cr6.eq) goto loc_825DFAD8;
loc_825DFA88:
	// lwz r11,12824(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12824);
	// lwz r10,13112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13112);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825dfaa0
	if (cr6.eq) goto loc_825DFAA0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825dfad8
	if (!cr6.eq) goto loc_825DFAD8;
loc_825DFAA0:
	// lwz r11,12828(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12828);
	// lwz r10,13116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13116);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825dfab8
	if (cr6.eq) goto loc_825DFAB8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825dfad8
	if (!cr6.eq) goto loc_825DFAD8;
loc_825DFAB8:
	// lwz r11,12832(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12832);
	// lwz r10,13120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13120);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825dfad0
	if (cr6.eq) goto loc_825DFAD0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825dfad8
	if (!cr6.eq) goto loc_825DFAD8;
loc_825DFAD0:
	// li r11,1
	r11.s64 = 1;
	// b 0x825dfadc
	goto loc_825DFADC;
loc_825DFAD8:
	// li r11,0
	r11.s64 = 0;
loc_825DFADC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_825DFAE0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825dfaf8
	if (cr0.eq) goto loc_825DFAF8;
	// lwz r11,10368(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10368);
	// lwz r10,13548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13548);
	// rlwimi r11,r10,18,0,13
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xFFFC0000) | (r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,10368(r31)
	PPC_STORE_U32(r31.u32 + 10368, r11.u32);
loc_825DFAF8:
	// li r12,1
	r12.s64 = 1;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// rldicr r12,r12,55,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 55) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// b 0x825dfb3c
	goto loc_825DFB3C;
loc_825DFB1C:
	// lwz r11,10560(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10560);
	// lbz r10,11070(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11070);
	// rlwinm r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// andi. r10,r10,223
	ctx.r10.u64 = ctx.r10.u64 & 223;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,10560(r31)
	PPC_STORE_U32(r31.u32 + 10560, r11.u32);
	// stb r10,11070(r31)
	PPC_STORE_U8(r31.u32 + 11070, ctx.r10.u8);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
loc_825DFB3C:
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// lwz r11,13092(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13092);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825dfc18
	if (!cr6.eq) goto loc_825DFC18;
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825dfc18
	if (!cr0.eq) goto loc_825DFC18;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825dfc18
	if (!cr0.eq) goto loc_825DFC18;
	// lbz r10,12563(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 12563);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x825dfc18
	if (!cr0.eq) goto loc_825DFC18;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825dfb7c
	if (cr0.eq) goto loc_825DFB7C;
	// li r11,1
	r11.s64 = 1;
	// b 0x825dfc0c
	goto loc_825DFC0C;
loc_825DFB7C:
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825dfc04
	if (cr0.eq) goto loc_825DFC04;
	// lwz r11,12816(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12816);
	// lwz r10,13104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13104);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825dfb9c
	if (cr6.eq) goto loc_825DFB9C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825dfc04
	if (!cr6.eq) goto loc_825DFC04;
loc_825DFB9C:
	// lwz r11,12820(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12820);
	// lwz r10,13108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13108);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825dfbb4
	if (cr6.eq) goto loc_825DFBB4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825dfc04
	if (!cr6.eq) goto loc_825DFC04;
loc_825DFBB4:
	// lwz r11,12824(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12824);
	// lwz r10,13112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13112);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825dfbcc
	if (cr6.eq) goto loc_825DFBCC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825dfc04
	if (!cr6.eq) goto loc_825DFC04;
loc_825DFBCC:
	// lwz r11,12828(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12828);
	// lwz r10,13116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13116);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825dfbe4
	if (cr6.eq) goto loc_825DFBE4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825dfc04
	if (!cr6.eq) goto loc_825DFC04;
loc_825DFBE4:
	// lwz r11,12832(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12832);
	// lwz r10,13120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13120);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825dfbfc
	if (cr6.eq) goto loc_825DFBFC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825dfc04
	if (!cr6.eq) goto loc_825DFC04;
loc_825DFBFC:
	// li r11,1
	r11.s64 = 1;
	// b 0x825dfc08
	goto loc_825DFC08;
loc_825DFC04:
	// li r11,0
	r11.s64 = 0;
loc_825DFC08:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_825DFC0C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x825dfc1c
	if (!cr0.eq) goto loc_825DFC1C;
loc_825DFC18:
	// li r11,0
	r11.s64 = 0;
loc_825DFC1C:
	// lbz r10,11068(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// lwz r9,12308(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12308);
	// rlwimi r10,r11,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// stb r10,11068(r31)
	PPC_STORE_U8(r31.u32 + 11068, ctx.r10.u8);
	// lwz r11,10548(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10548);
	// lwz r10,12832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12832);
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r9,12308(r31)
	PPC_STORE_U32(r31.u32 + 12308, ctx.r9.u32);
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// rlwimi r11,r10,1,30,30
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,10548(r31)
	PPC_STORE_U32(r31.u32 + 10548, r11.u32);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// lwz r11,12312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12312);
	// lwz r10,10548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10548);
	// lwz r9,12832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12832);
	// subfic r9,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r11,12312(r31)
	PPC_STORE_U32(r31.u32 + 12312, r11.u32);
	// and r11,r9,r11
	r11.u64 = ctx.r9.u64 & r11.u64;
	// rlwimi r11,r10,0,0,30
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFE) | (r11.u64 & 0xFFFFFFFF00000001);
	// stw r11,10548(r31)
	PPC_STORE_U32(r31.u32 + 10548, r11.u32);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
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

__attribute__((alias("__imp__sub_825DFCAC"))) PPC_WEAK_FUNC(sub_825DFCAC);
PPC_FUNC_IMPL(__imp__sub_825DFCAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DFCB0"))) PPC_WEAK_FUNC(sub_825DFCB0);
PPC_FUNC_IMPL(__imp__sub_825DFCB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x825df648
	sub_825DF648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DFCB0"))) PPC_WEAK_FUNC(sub_825DFCB0);
PPC_FUNC_IMPL(__imp__sub_825DFCB0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825DFCB4"))) PPC_WEAK_FUNC(sub_825DFCB4);
PPC_FUNC_IMPL(__imp__sub_825DFCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DFCB8"))) PPC_WEAK_FUNC(sub_825DFCB8);
PPC_FUNC_IMPL(__imp__sub_825DFCB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,13844(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13844);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
}

__attribute__((alias("__imp__sub_825DFCC0"))) PPC_WEAK_FUNC(sub_825DFCC0);
PPC_FUNC_IMPL(__imp__sub_825DFCC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DFCC4"))) PPC_WEAK_FUNC(sub_825DFCC4);
PPC_FUNC_IMPL(__imp__sub_825DFCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DFCC8"))) PPC_WEAK_FUNC(sub_825DFCC8);
PPC_FUNC_IMPL(__imp__sub_825DFCC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,12264(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12264);
	// rlwinm r10,r6,30,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xFF;
	// mullw r9,r5,r6
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// lbz r25,12904(r3)
	r25.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12904);
	// stb r10,12904(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12904, ctx.r10.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// rlwinm r22,r9,30,2,31
	r22.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825dfd18
	if (cr6.eq) goto loc_825DFD18;
	// lwz r11,13072(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13072);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825dfd18
	if (cr6.eq) goto loc_825DFD18;
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
loc_825DFD18:
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// li r26,0
	r26.s64 = 0;
	// rldicr r11,r11,0,62
	r11.u64 = __builtin_rotateleft64(r11.u64, 0) & 0xFFFFFFFFFFFFFFFE;
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// mr r28,r11
	r28.u64 = r11.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// ld r27,32(r31)
	r27.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// ld r30,16(r31)
	r30.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ld r29,8(r31)
	r29.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// beq cr6,0x825dfd58
	if (cr6.eq) goto loc_825DFD58;
	// addi r6,r31,1920
	ctx.r6.s64 = r31.s64 + 1920;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7908
	sub_825F7908(ctx, base);
	// std r26,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r26.u64);
loc_825DFD58:
	// cmpldi cr6,r29,0
	cr6.compare<uint64_t>(r29.u64, 0, xer);
	// beq cr6,0x825dfd78
	if (cr6.eq) goto loc_825DFD78;
	// addi r6,r31,6016
	ctx.r6.s64 = r31.s64 + 6016;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7908
	sub_825F7908(ctx, base);
	// std r26,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r26.u64);
loc_825DFD78:
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(r30.u64, 0, xer);
	// beq cr6,0x825dfe58
	if (cr6.eq) goto loc_825DFE58;
	// rlwinm r11,r30,0,11,14
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825dfd9c
	if (cr6.eq) goto loc_825DFD9C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f86a0
	sub_825F86A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825DFD9C:
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r30
	r11.u64 = r11.u64 & r30.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825dfdc0
	if (cr6.eq) goto loc_825DFDC0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 10560);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f71e0
	sub_825F71E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825DFDC0:
	// clrldi r11,r30,52
	r11.u64 = r30.u64 & 0xFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825dfde0
	if (cr6.eq) goto loc_825DFDE0;
	// addi r6,r31,10548
	ctx.r6.s64 = r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r30,52,11
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825DFDE0:
	// rlwinm r11,r30,0,15,19
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825dfe00
	if (cr6.eq) goto loc_825DFE00;
	// addi r6,r31,10528
	ctx.r6.s64 = r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r30,47,4
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825DFE00:
	// lis r12,0
	r12.s64 = 0;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,42,21
	r12.u64 = __builtin_rotateleft64(r12.u64, 42) & 0xFFFFFC0000000000;
	// and r11,r30,r12
	r11.u64 = r30.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825dfe2c
	if (cr6.eq) goto loc_825DFE2C;
	// addi r6,r31,10368
	ctx.r6.s64 = r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r30,6,15
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825DFE2C:
	// lis r12,-32
	r12.s64 = -2097152;
	// clrldi r12,r12,22
	r12.u64 = r12.u64 & 0x3FFFFFFFFFF;
	// and r11,r30,r12
	r11.u64 = r30.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825dfe54
	if (cr6.eq) goto loc_825DFE54;
	// addi r6,r31,10444
	ctx.r6.s64 = r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r30,22,20
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825DFE54:
	// std r26,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r26.u64);
loc_825DFE58:
	// cmpldi cr6,r28,0
	cr6.compare<uint64_t>(r28.u64, 0, xer);
	// beq cr6,0x825dfea8
	if (cr6.eq) goto loc_825DFEA8;
	// clrldi r11,r28,32
	r11.u64 = r28.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825dfe78
	if (cr6.eq) goto loc_825DFE78;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f77b0
	sub_825F77B0(ctx, base);
loc_825DFE78:
	// lis r12,31
	r12.s64 = 2031616;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,34,29
	r12.u64 = __builtin_rotateleft64(r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r11,r28,r12
	r11.u64 = r28.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825dfea4
	if (cr6.eq) goto loc_825DFEA4;
	// addi r6,r31,10596
	ctx.r6.s64 = r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r28,9,20
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825DFEA4:
	// std r26,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r26.u64);
loc_825DFEA8:
	// cmpldi cr6,r27,0
	cr6.compare<uint64_t>(r27.u64, 0, xer);
	// beq cr6,0x825dff6c
	if (cr6.eq) goto loc_825DFF6C;
	// li r12,255
	r12.s64 = 255;
	// rldicr r12,r12,38,25
	r12.u64 = __builtin_rotateleft64(r12.u64, 38) & 0xFFFFFFC000000000;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825dfed8
	if (cr6.eq) goto loc_825DFED8;
	// addi r6,r31,10832
	ctx.r6.s64 = r31.s64 + 10832;
	// li r5,9088
	ctx.r5.s64 = 9088;
	// rldicr r4,r27,18,7
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 18) & 0xFF00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825DFED8:
	// li r12,63
	r12.s64 = 63;
	// rldicr r12,r12,49,14
	r12.u64 = __builtin_rotateleft64(r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825dfef8
	if (cr6.eq) goto loc_825DFEF8;
	// rldicr r4,r27,9,5
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 9) & 0xFC00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7630
	sub_825F7630(ctx, base);
loc_825DFEF8:
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825dff20
	if (cr6.eq) goto loc_825DFF20;
	// addi r6,r31,10112
	ctx.r6.s64 = r31.s64 + 10112;
	// li r5,18688
	ctx.r5.s64 = 18688;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825DFF20:
	// clrldi r11,r27,26
	r11.u64 = r27.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825dff40
	if (cr6.eq) goto loc_825DFF40;
	// addi r6,r31,10680
	ctx.r6.s64 = r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r27,26,37
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825DFF40:
	// rldicr r11,r27,0,1
	r11.u64 = __builtin_rotateleft64(r27.u64, 0) & 0xC000000000000000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825dff68
	if (cr6.eq) goto loc_825DFF68;
	// lbz r11,11072(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825dff60
	if (!cr0.eq) goto loc_825DFF60;
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825dff68
	if (cr0.eq) goto loc_825DFF68;
loc_825DFF60:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d12f0
	sub_825D12F0(ctx, base);
loc_825DFF68:
	// std r26,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r26.u64);
loc_825DFF6C:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r30,48(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// stb r25,12904(r31)
	PPC_STORE_U8(r31.u32 + 12904, r25.u8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x825dff8c
	if (!cr6.gt) goto loc_825DFF8C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825DFF8C:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3538
	sub_825E3538(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x825dffb0
	if (!cr0.eq) goto loc_825DFFB0;
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825e017c
	goto loc_825E017C;
loc_825DFFB0:
	// li r11,8450
	r11.s64 = 8450;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r11.u32);
	r30.u32 = ea;
	// rlwinm r11,r28,12,20,31
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 12) & 0xFFF;
	// ori r8,r10,18618
	ctx.r8.u64 = ctx.r10.u64 | 18618;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// clrlwi r10,r28,3
	ctx.r10.u64 = r28.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// stwu r26,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r26.u32);
	r30.u32 = ea;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// ori r11,r11,3
	r11.u64 = r11.u64 | 3;
	// ori r10,r9,2
	ctx.r10.u64 = ctx.r9.u64 | 2;
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r8,1896(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 1896);
	// rlwimi r10,r22,2,6,29
	ctx.r10.u64 = (__builtin_rotateleft32(r22.u32, 2) & 0x3FFFFFC) | (ctx.r10.u64 & 0xFFFFFFFFFC000003);
	// ori r9,r9,20480
	ctx.r9.u64 = ctx.r9.u64 | 20480;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// lwz r8,1900(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 1900);
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// lwz r8,1904(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 1904);
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// lwz r8,1908(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 1908);
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r11.u32);
	r30.u32 = ea;
	// stwu r10,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r30.u32 = ea;
	// stwu r9,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r30.u32 = ea;
	// stwu r26,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r26.u32);
	r30.u32 = ea;
	// stwu r26,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r26.u32);
	r30.u32 = ea;
	// stwu r26,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r26.u32);
	r30.u32 = ea;
	// lbz r11,12563(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12563);
	// lbz r10,11068(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// addic r8,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r8.s64 = r11.s64 + -1;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lbz r10,12498(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12498);
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r8.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwimi r10,r11,8,23,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0x100) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFEFF);
	// clrlwi r29,r10,23
	r29.u64 = ctx.r10.u32 & 0x1FF;
	// rlwinm r29,r29,0,26,23
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// bne 0x825e0094
	if (!cr0.eq) goto loc_825E0094;
	// lis r11,-16383
	r11.s64 = -1073676288;
	// clrlwi r10,r23,26
	ctx.r10.u64 = r23.u32 & 0x3F;
	// ori r11,r11,8705
	r11.u64 = r11.u64 | 8705;
	// rlwinm r9,r24,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 16) & 0xFFFF0000;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r11.u32);
	r30.u32 = ea;
	// or r11,r10,r9
	r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stwu r29,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r29.u32);
	r30.u32 = ea;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r10.u32 = ea;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// b 0x825e0160
	goto loc_825E0160;
loc_825E0094:
	// lwz r11,13628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13628);
	// addi r3,r31,13616
	ctx.r3.s64 = r31.s64 + 13616;
	// lwz r10,13632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13632);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x825e00b4
	if (!cr6.gt) goto loc_825E00B4;
	// bl 0x825e4030
	sub_825E4030(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825E00B4:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r8,r11,16
	ctx.r8.s64 = r11.s64 + 16;
	// ori r9,r9,24576
	ctx.r9.u64 = ctx.r9.u64 | 24576;
	// stw r8,13628(r31)
	PPC_STORE_U32(r31.u32 + 13628, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// rlwinm r6,r24,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r7,r23,26
	ctx.r7.u64 = r23.u32 & 0x3F;
	// lis r9,-16383
	ctx.r9.s64 = -1073676288;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// ori r9,r9,8705
	ctx.r9.u64 = ctx.r9.u64 | 8705;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// ori r7,r7,128
	ctx.r7.u64 = ctx.r7.u64 | 128;
	// lis r5,-16384
	ctx.r5.s64 = -1073741824;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// ori r8,r5,24576
	ctx.r8.u64 = ctx.r5.u64 | 24576;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stwu r9,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r6.u32 = ea;
	// ori r4,r10,23041
	ctx.r4.u64 = ctx.r10.u64 | 23041;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r11,r11,0,3,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1FFFFFFE;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r9,26
	ctx.r9.s64 = 26;
	// stwu r29,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, r29.u32);
	ctx.r6.u32 = ea;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// ori r10,r3,17921
	ctx.r10.u64 = ctx.r3.u64 | 17921;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stwu r7,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r6.u32 = ea;
	// li r3,25
	ctx.r3.s64 = 25;
	// stwu r8,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r6.u32 = ea;
	// stwu r5,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r6.u32 = ea;
	// stwu r4,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r6.u32 = ea;
	// stwu r9,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r6.u32 = ea;
	// stwu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r6.u32 = ea;
	// stwu r10,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r6.u32 = ea;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// stwu r3,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r11.u32 = ea;
loc_825E0160:
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// std r10,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r10.u64);
	// stw r11,13844(r31)
	PPC_STORE_U32(r31.u32 + 13844, r11.u32);
	// stw r28,13848(r31)
	PPC_STORE_U32(r31.u32 + 13848, r28.u32);
	// stw r22,13856(r31)
	PPC_STORE_U32(r31.u32 + 13856, r22.u32);
loc_825E017C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825E0180"))) PPC_WEAK_FUNC(sub_825E0180);
PPC_FUNC_IMPL(__imp__sub_825E0180) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_825E0184"))) PPC_WEAK_FUNC(sub_825E0184);
PPC_FUNC_IMPL(__imp__sub_825E0184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E0188"))) PPC_WEAK_FUNC(sub_825E0188);
PPC_FUNC_IMPL(__imp__sub_825E0188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x825dfcc8
	sub_825DFCC8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825e01c8
	if (cr0.eq) goto loc_825E01C8;
	// mullw r5,r30,r29
	ctx.r5.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,13844(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13844);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
loc_825E01C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825E01CC"))) PPC_WEAK_FUNC(sub_825E01CC);
PPC_FUNC_IMPL(__imp__sub_825E01CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825E01D0"))) PPC_WEAK_FUNC(sub_825E01D0);
PPC_FUNC_IMPL(__imp__sub_825E01D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e4
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mullw r11,r6,r9
	r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r17,r10
	r17.u64 = ctx.r10.u64;
	// rlwinm. r22,r8,0,29,29
	r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// rlwinm r19,r11,30,2,31
	r19.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// beq 0x825e020c
	if (cr0.eq) goto loc_825E020C;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// b 0x825e0214
	goto loc_825E0214;
loc_825E020C:
	// addi r11,r23,1
	r11.s64 = r23.s64 + 1;
	// rlwinm r18,r11,31,1,31
	r18.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
loc_825E0214:
	// lbz r11,12264(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12264);
	// rlwinm r10,r9,30,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0xFF;
	// lbz r26,12904(r31)
	r26.u64 = PPC_LOAD_U8(r31.u32 + 12904);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stb r10,12904(r31)
	PPC_STORE_U8(r31.u32 + 12904, ctx.r10.u8);
	// beq cr6,0x825e0244
	if (cr6.eq) goto loc_825E0244;
	// lwz r11,13072(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13072);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825e0244
	if (cr6.eq) goto loc_825E0244;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_825E0244:
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// li r25,0
	r25.s64 = 0;
	// ld r27,32(r31)
	r27.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// ld r28,24(r31)
	r28.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// ld r30,16(r31)
	r30.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ld r29,8(r31)
	r29.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// beq cr6,0x825e0278
	if (cr6.eq) goto loc_825E0278;
	// addi r6,r31,1920
	ctx.r6.s64 = r31.s64 + 1920;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7908
	sub_825F7908(ctx, base);
	// std r25,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r25.u64);
loc_825E0278:
	// cmpldi cr6,r29,0
	cr6.compare<uint64_t>(r29.u64, 0, xer);
	// beq cr6,0x825e0298
	if (cr6.eq) goto loc_825E0298;
	// addi r6,r31,6016
	ctx.r6.s64 = r31.s64 + 6016;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7908
	sub_825F7908(ctx, base);
	// std r25,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r25.u64);
loc_825E0298:
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(r30.u64, 0, xer);
	// beq cr6,0x825e0378
	if (cr6.eq) goto loc_825E0378;
	// rlwinm r11,r30,0,11,14
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e02bc
	if (cr6.eq) goto loc_825E02BC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f86a0
	sub_825F86A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825E02BC:
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r30
	r11.u64 = r11.u64 & r30.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e02e0
	if (cr6.eq) goto loc_825E02E0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 10560);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f71e0
	sub_825F71E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825E02E0:
	// clrldi r11,r30,52
	r11.u64 = r30.u64 & 0xFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e0300
	if (cr6.eq) goto loc_825E0300;
	// addi r6,r31,10548
	ctx.r6.s64 = r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r30,52,11
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E0300:
	// rlwinm r11,r30,0,15,19
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e0320
	if (cr6.eq) goto loc_825E0320;
	// addi r6,r31,10528
	ctx.r6.s64 = r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r30,47,4
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E0320:
	// lis r12,0
	r12.s64 = 0;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,42,21
	r12.u64 = __builtin_rotateleft64(r12.u64, 42) & 0xFFFFFC0000000000;
	// and r11,r30,r12
	r11.u64 = r30.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e034c
	if (cr6.eq) goto loc_825E034C;
	// addi r6,r31,10368
	ctx.r6.s64 = r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r30,6,15
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E034C:
	// lis r12,-32
	r12.s64 = -2097152;
	// clrldi r12,r12,22
	r12.u64 = r12.u64 & 0x3FFFFFFFFFF;
	// and r11,r30,r12
	r11.u64 = r30.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e0374
	if (cr6.eq) goto loc_825E0374;
	// addi r6,r31,10444
	ctx.r6.s64 = r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r30,22,20
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E0374:
	// std r25,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r25.u64);
loc_825E0378:
	// cmpldi cr6,r28,0
	cr6.compare<uint64_t>(r28.u64, 0, xer);
	// beq cr6,0x825e03c8
	if (cr6.eq) goto loc_825E03C8;
	// clrldi r11,r28,32
	r11.u64 = r28.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e0398
	if (cr6.eq) goto loc_825E0398;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f77b0
	sub_825F77B0(ctx, base);
loc_825E0398:
	// lis r12,31
	r12.s64 = 2031616;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,34,29
	r12.u64 = __builtin_rotateleft64(r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r11,r28,r12
	r11.u64 = r28.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e03c4
	if (cr6.eq) goto loc_825E03C4;
	// addi r6,r31,10596
	ctx.r6.s64 = r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r28,9,20
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E03C4:
	// std r25,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r25.u64);
loc_825E03C8:
	// cmpldi cr6,r27,0
	cr6.compare<uint64_t>(r27.u64, 0, xer);
	// beq cr6,0x825e048c
	if (cr6.eq) goto loc_825E048C;
	// li r12,255
	r12.s64 = 255;
	// rldicr r12,r12,38,25
	r12.u64 = __builtin_rotateleft64(r12.u64, 38) & 0xFFFFFFC000000000;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e03f8
	if (cr6.eq) goto loc_825E03F8;
	// addi r6,r31,10832
	ctx.r6.s64 = r31.s64 + 10832;
	// li r5,9088
	ctx.r5.s64 = 9088;
	// rldicr r4,r27,18,7
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 18) & 0xFF00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E03F8:
	// li r12,63
	r12.s64 = 63;
	// rldicr r12,r12,49,14
	r12.u64 = __builtin_rotateleft64(r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e0418
	if (cr6.eq) goto loc_825E0418;
	// rldicr r4,r27,9,5
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 9) & 0xFC00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7630
	sub_825F7630(ctx, base);
loc_825E0418:
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e0440
	if (cr6.eq) goto loc_825E0440;
	// addi r6,r31,10112
	ctx.r6.s64 = r31.s64 + 10112;
	// li r5,18688
	ctx.r5.s64 = 18688;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E0440:
	// clrldi r11,r27,26
	r11.u64 = r27.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e0460
	if (cr6.eq) goto loc_825E0460;
	// addi r6,r31,10680
	ctx.r6.s64 = r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r27,26,37
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E0460:
	// rldicr r11,r27,0,1
	r11.u64 = __builtin_rotateleft64(r27.u64, 0) & 0xC000000000000000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e0488
	if (cr6.eq) goto loc_825E0488;
	// lbz r11,11072(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825e0480
	if (!cr0.eq) goto loc_825E0480;
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e0488
	if (cr0.eq) goto loc_825E0488;
loc_825E0480:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d12f0
	sub_825D12F0(ctx, base);
loc_825E0488:
	// std r25,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r25.u64);
loc_825E048C:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r30,48(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// stb r26,12904(r31)
	PPC_STORE_U8(r31.u32 + 12904, r26.u8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x825e04ac
	if (!cr6.gt) goto loc_825E04AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825E04AC:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3538
	sub_825E3538(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3538
	sub_825E3538(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x825e06f0
	if (cr6.eq) goto loc_825E06F0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e06f0
	if (cr6.eq) goto loc_825E06F0;
	// li r11,8450
	r11.s64 = 8450;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r11.u32);
	r30.u32 = ea;
	// mr r15,r25
	r15.u64 = r25.u64;
	// ori r8,r10,18618
	ctx.r8.u64 = ctx.r10.u64 | 18618;
	// rlwinm r11,r28,12,20,31
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 12) & 0xFFF;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// addi r10,r11,512
	ctx.r10.s64 = r11.s64 + 512;
	// stwu r20,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r20.u32);
	r30.u32 = ea;
	// clrlwi r11,r28,3
	r11.u64 = r28.u32 & 0x1FFFFFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwimi r4,r19,2,6,29
	ctx.r4.u64 = (__builtin_rotateleft32(r19.u32, 2) & 0x3FFFFFC) | (ctx.r4.u64 & 0xFFFFFFFFFC000003);
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// ori r8,r11,3
	ctx.r8.u64 = r11.u64 | 3;
	// lis r11,2
	r11.s64 = 131072;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// ori r20,r11,20480
	r20.u64 = r11.u64 | 20480;
	// rlwinm r11,r26,12,20,31
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 12) & 0xFFF;
	// stwu r25,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r25.u32);
	r30.u32 = ea;
	// clrlwi r9,r26,3
	ctx.r9.u64 = r26.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// stwu r25,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r25.u32);
	r30.u32 = ea;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r16,r25
	r16.u64 = r25.u64;
	// add r25,r11,r9
	r25.u64 = r11.u64 + ctx.r9.u64;
	// clrlwi r11,r21,26
	r11.u64 = r21.u32 & 0x3F;
	// stwu r15,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r15.u32);
	r30.u32 = ea;
	// rlwinm r9,r23,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r24,30,0,1
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 30) & 0xC0000000;
	// or r29,r11,r9
	r29.u64 = r11.u64 | ctx.r9.u64;
	// clrlwi r7,r23,8
	ctx.r7.u64 = r23.u32 & 0xFFFFFF;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// stwu r15,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r15.u32);
	r30.u32 = ea;
	// or r27,r7,r10
	r27.u64 = ctx.r7.u64 | ctx.r10.u64;
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// stwu r4,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	r30.u32 = ea;
	// stwu r20,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r20.u32);
	r30.u32 = ea;
	// stwu r15,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r15.u32);
	r30.u32 = ea;
	// stwu r15,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r15.u32);
	r30.u32 = ea;
	// stwu r15,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r15.u32);
	r30.u32 = ea;
	// lbz r11,12563(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12563);
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// addic r8,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r8.s64 = r11.s64 + -1;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r8.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// lbz r9,12498(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12498);
	// rlwimi r9,r11,8,23,23
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0x100) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFEFF);
	// andi. r24,r9,319
	r24.u64 = ctx.r9.u64 & 319;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// beq cr6,0x825e05c8
	if (cr6.eq) goto loc_825E05C8;
	// rlwinm r11,r23,1,8,30
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFE;
	// ori r29,r29,2048
	r29.u64 = r29.u64 | 2048;
	// or r27,r11,r10
	r27.u64 = r11.u64 | ctx.r10.u64;
loc_825E05C8:
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825e05f8
	if (!cr0.eq) goto loc_825E05F8;
	// lis r11,-16381
	r11.s64 = -1073545216;
	// ori r11,r11,8705
	r11.u64 = r11.u64 | 8705;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r11.u32);
	r30.u32 = ea;
	// stwu r24,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r24.u32);
	r30.u32 = ea;
	// stwu r29,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r29.u32);
	r30.u32 = ea;
	// stwu r25,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r25.u32);
	r30.u32 = ea;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stwu r27,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r27.u32);
	r11.u32 = ea;
	// b 0x825e06bc
	goto loc_825E06BC;
loc_825E05F8:
	// lwz r11,13628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13628);
	// addi r3,r31,13616
	ctx.r3.s64 = r31.s64 + 13616;
	// lwz r10,13632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13632);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x825e0618
	if (!cr6.gt) goto loc_825E0618;
	// bl 0x825e4030
	sub_825E4030(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825E0618:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r8,r11,16
	ctx.r8.s64 = r11.s64 + 16;
	// ori r9,r9,24576
	ctx.r9.u64 = ctx.r9.u64 | 24576;
	// stw r8,13628(r31)
	PPC_STORE_U32(r31.u32 + 13628, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lis r5,-16383
	ctx.r5.s64 = -1073676288;
	// lis r9,-16381
	ctx.r9.s64 = -1073545216;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// ori r9,r9,8705
	ctx.r9.u64 = ctx.r9.u64 | 8705;
	// ori r7,r7,24576
	ctx.r7.u64 = ctx.r7.u64 | 24576;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// ori r8,r5,23041
	ctx.r8.u64 = ctx.r5.u64 | 23041;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// li r4,26
	ctx.r4.s64 = 26;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r11,r11,0,3,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1FFFFFFE;
	// stwu r9,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r5.u32 = ea;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stwu r24,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, r24.u32);
	ctx.r5.u32 = ea;
	// ori r10,r9,17921
	ctx.r10.u64 = ctx.r9.u64 | 17921;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r9,25
	ctx.r9.s64 = 25;
	// stwu r29,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, r29.u32);
	ctx.r5.u32 = ea;
	// stwu r25,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r5.u32 = ea;
	// stwu r27,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r5.u32 = ea;
	// stwu r7,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r5.u32 = ea;
	// stwu r6,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r5.u32 = ea;
	// stwu r8,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r5.u32 = ea;
	// stwu r4,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r5.u32 = ea;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r5.u32 = ea;
	// stwu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r5.u32 = ea;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
loc_825E06BC:
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,308(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// std r10,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r10.u64);
	// stw r11,13844(r31)
	PPC_STORE_U32(r31.u32 + 13844, r11.u32);
	// stw r28,13848(r31)
	PPC_STORE_U32(r31.u32 + 13848, r28.u32);
	// stw r26,13852(r31)
	PPC_STORE_U32(r31.u32 + 13852, r26.u32);
	// stw r19,13856(r31)
	PPC_STORE_U32(r31.u32 + 13856, r19.u32);
	// stw r18,13860(r31)
	PPC_STORE_U32(r31.u32 + 13860, r18.u32);
	// stw r28,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r28.u32);
	// stw r26,0(r17)
	PPC_STORE_U32(r17.u32 + 0, r26.u32);
	// b 0x825e0708
	goto loc_825E0708;
loc_825E06F0:
	// lwz r11,308(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r25,0(r17)
	PPC_STORE_U32(r17.u32 + 0, r25.u32);
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
loc_825E0708:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_825E070C"))) PPC_WEAK_FUNC(sub_825E070C);
PPC_FUNC_IMPL(__imp__sub_825E070C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9434
	return;
}

__attribute__((alias("__imp__sub_825E0710"))) PPC_WEAK_FUNC(sub_825E0710);
PPC_FUNC_IMPL(__imp__sub_825E0710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,260(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// neg r5,r5
	ctx.r5.s64 = -ctx.r5.s64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x825e01d0
	sub_825E01D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x825e07a8
	if (!cr0.eq) goto loc_825E07A8;
	// mullw r11,r29,r30
	r11.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mullw r5,r28,r30
	ctx.r5.s64 = int64_t(r28.s32) * int64_t(r30.s32);
	// add r4,r11,r24
	ctx.r4.u64 = r11.u64 + r24.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// rlwinm r11,r26,0,29,29
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x4;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// mullw r11,r11,r27
	r11.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// rlwinm r5,r11,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,13844(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13844);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
loc_825E07A8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825E07AC"))) PPC_WEAK_FUNC(sub_825E07AC);
PPC_FUNC_IMPL(__imp__sub_825E07AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825E07B0"))) PPC_WEAK_FUNC(sub_825E07B0);
PPC_FUNC_IMPL(__imp__sub_825E07B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r27,32(r3)
	r27.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ld r28,24(r3)
	r28.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// ld r30,16(r3)
	r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// ld r29,8(r3)
	r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// li r26,0
	r26.s64 = 0;
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// beq cr6,0x825e07fc
	if (cr6.eq) goto loc_825E07FC;
	// addi r6,r3,1920
	ctx.r6.s64 = ctx.r3.s64 + 1920;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// bl 0x825f7908
	sub_825F7908(ctx, base);
	// std r26,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r26.u64);
loc_825E07FC:
	// cmpldi cr6,r29,0
	cr6.compare<uint64_t>(r29.u64, 0, xer);
	// beq cr6,0x825e081c
	if (cr6.eq) goto loc_825E081C;
	// addi r6,r31,6016
	ctx.r6.s64 = r31.s64 + 6016;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7908
	sub_825F7908(ctx, base);
	// std r26,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r26.u64);
loc_825E081C:
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(r30.u64, 0, xer);
	// beq cr6,0x825e08fc
	if (cr6.eq) goto loc_825E08FC;
	// rlwinm r11,r30,0,11,14
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e0840
	if (cr6.eq) goto loc_825E0840;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f86a0
	sub_825F86A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825E0840:
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r30
	r11.u64 = r11.u64 & r30.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e0864
	if (cr6.eq) goto loc_825E0864;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 10560);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f71e0
	sub_825F71E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825E0864:
	// clrldi r11,r30,52
	r11.u64 = r30.u64 & 0xFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e0884
	if (cr6.eq) goto loc_825E0884;
	// addi r6,r31,10548
	ctx.r6.s64 = r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r30,52,11
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E0884:
	// rlwinm r11,r30,0,15,19
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e08a4
	if (cr6.eq) goto loc_825E08A4;
	// addi r6,r31,10528
	ctx.r6.s64 = r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r30,47,4
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E08A4:
	// lis r12,0
	r12.s64 = 0;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,42,21
	r12.u64 = __builtin_rotateleft64(r12.u64, 42) & 0xFFFFFC0000000000;
	// and r11,r30,r12
	r11.u64 = r30.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e08d0
	if (cr6.eq) goto loc_825E08D0;
	// addi r6,r31,10368
	ctx.r6.s64 = r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r30,6,15
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E08D0:
	// lis r12,-32
	r12.s64 = -2097152;
	// clrldi r12,r12,22
	r12.u64 = r12.u64 & 0x3FFFFFFFFFF;
	// and r11,r30,r12
	r11.u64 = r30.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e08f8
	if (cr6.eq) goto loc_825E08F8;
	// addi r6,r31,10444
	ctx.r6.s64 = r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r30,22,20
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E08F8:
	// std r26,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r26.u64);
loc_825E08FC:
	// cmpldi cr6,r28,0
	cr6.compare<uint64_t>(r28.u64, 0, xer);
	// beq cr6,0x825e094c
	if (cr6.eq) goto loc_825E094C;
	// clrldi r11,r28,32
	r11.u64 = r28.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e091c
	if (cr6.eq) goto loc_825E091C;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f77b0
	sub_825F77B0(ctx, base);
loc_825E091C:
	// lis r12,31
	r12.s64 = 2031616;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,34,29
	r12.u64 = __builtin_rotateleft64(r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r11,r28,r12
	r11.u64 = r28.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e0948
	if (cr6.eq) goto loc_825E0948;
	// addi r6,r31,10596
	ctx.r6.s64 = r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r28,9,20
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E0948:
	// std r26,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r26.u64);
loc_825E094C:
	// cmpldi cr6,r27,0
	cr6.compare<uint64_t>(r27.u64, 0, xer);
	// beq cr6,0x825e0a10
	if (cr6.eq) goto loc_825E0A10;
	// li r12,255
	r12.s64 = 255;
	// rldicr r12,r12,38,25
	r12.u64 = __builtin_rotateleft64(r12.u64, 38) & 0xFFFFFFC000000000;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e097c
	if (cr6.eq) goto loc_825E097C;
	// addi r6,r31,10832
	ctx.r6.s64 = r31.s64 + 10832;
	// li r5,9088
	ctx.r5.s64 = 9088;
	// rldicr r4,r27,18,7
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 18) & 0xFF00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E097C:
	// li r12,63
	r12.s64 = 63;
	// rldicr r12,r12,49,14
	r12.u64 = __builtin_rotateleft64(r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e099c
	if (cr6.eq) goto loc_825E099C;
	// rldicr r4,r27,9,5
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 9) & 0xFC00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7630
	sub_825F7630(ctx, base);
loc_825E099C:
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e09c4
	if (cr6.eq) goto loc_825E09C4;
	// addi r6,r31,10112
	ctx.r6.s64 = r31.s64 + 10112;
	// li r5,18688
	ctx.r5.s64 = 18688;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E09C4:
	// clrldi r11,r27,26
	r11.u64 = r27.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e09e4
	if (cr6.eq) goto loc_825E09E4;
	// addi r6,r31,10680
	ctx.r6.s64 = r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r27,26,37
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E09E4:
	// rldicr r11,r27,0,1
	r11.u64 = __builtin_rotateleft64(r27.u64, 0) & 0xC000000000000000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e0a0c
	if (cr6.eq) goto loc_825E0A0C;
	// lbz r11,11072(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825e0a04
	if (!cr0.eq) goto loc_825E0A04;
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e0a0c
	if (cr0.eq) goto loc_825E0A0C;
loc_825E0A04:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d12f0
	sub_825D12F0(ctx, base);
loc_825E0A0C:
	// std r26,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r26.u64);
loc_825E0A10:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r26,r31,12498
	r26.s64 = r31.s64 + 12498;
	// addi r27,r11,2392
	r27.s64 = r11.s64 + 2392;
loc_825E0A1C:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825e0a34
	if (!cr6.gt) goto loc_825E0A34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E0A34:
	// li r11,8450
	r11.s64 = 8450;
	// mr r29,r24
	r29.u64 = r24.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r24,65535
	cr6.compare<uint32_t>(r24.u32, 65535, xer);
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ble cr6,0x825e0a70
	if (!cr6.gt) goto loc_825E0A70;
	// rlwinm r11,r25,3,0,28
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwzx r11,r11,r27
	r11.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// divwu r10,r10,r11
	ctx.r10.u32 = ctx.r10.u32 / r11.u32;
	// twllei r11,0
	if (r11.u32 <= 0) __builtin_debugtrap();
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// mullw r29,r10,r11
	r29.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
loc_825E0A70:
	// lbz r11,12563(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12563);
	// lbz r10,11068(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// addic r9,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r9.s64 = r11.s64 + -1;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subfe r9,r9,r11
	temp.u8 = (~ctx.r9.u32 + r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// lbzx r11,r26,r11
	r11.u64 = PPC_LOAD_U8(r26.u32 + r11.u32);
	// rlwimi r11,r9,8,23,23
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0x100) | (r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// clrlwi r28,r11,23
	r28.u64 = r11.u32 & 0x1FF;
	// rlwinm r28,r28,0,26,23
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// bne 0x825e0ac8
	if (!cr0.eq) goto loc_825E0AC8;
	// lis r11,-16383
	r11.s64 = -1073676288;
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF0000;
	// ori r11,r11,8705
	r11.u64 = r11.u64 | 8705;
	// clrlwi r9,r25,26
	ctx.r9.u64 = r25.u32 & 0x3F;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r11.u32);
	r30.u32 = ea;
	// or r11,r10,r9
	r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r10.u32 = ea;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// b 0x825e0b94
	goto loc_825E0B94;
loc_825E0AC8:
	// lwz r11,13628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13628);
	// addi r3,r31,13616
	ctx.r3.s64 = r31.s64 + 13616;
	// lwz r10,13632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13632);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x825e0ae8
	if (!cr6.gt) goto loc_825E0AE8;
	// bl 0x825e4030
	sub_825E4030(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825E0AE8:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r8,r11,16
	ctx.r8.s64 = r11.s64 + 16;
	// ori r9,r9,24576
	ctx.r9.u64 = ctx.r9.u64 | 24576;
	// stw r8,13628(r31)
	PPC_STORE_U32(r31.u32 + 13628, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// clrlwi r6,r25,26
	ctx.r6.u64 = r25.u32 & 0x3F;
	// rlwinm r7,r29,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF0000;
	// lis r9,-16383
	ctx.r9.s64 = -1073676288;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// ori r9,r9,8705
	ctx.r9.u64 = ctx.r9.u64 | 8705;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// ori r7,r7,128
	ctx.r7.u64 = ctx.r7.u64 | 128;
	// lis r5,-16384
	ctx.r5.s64 = -1073741824;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// ori r8,r5,24576
	ctx.r8.u64 = ctx.r5.u64 | 24576;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stwu r9,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r6.u32 = ea;
	// ori r4,r10,23041
	ctx.r4.u64 = ctx.r10.u64 | 23041;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r11,r11,0,3,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1FFFFFFE;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r9,26
	ctx.r9.s64 = 26;
	// stwu r28,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r6.u32 = ea;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// ori r10,r3,17921
	ctx.r10.u64 = ctx.r3.u64 | 17921;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stwu r7,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r6.u32 = ea;
	// li r3,25
	ctx.r3.s64 = 25;
	// stwu r8,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r6.u32 = ea;
	// stwu r5,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r6.u32 = ea;
	// stwu r4,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r6.u32 = ea;
	// stwu r9,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r6.u32 = ea;
	// stwu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r6.u32 = ea;
	// stwu r10,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r6.u32 = ea;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// stwu r3,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r11.u32 = ea;
loc_825E0B94:
	// subf. r10,r29,r24
	ctx.r10.s64 = r24.s64 - r29.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// beq 0x825e0bbc
	if (cr0.eq) goto loc_825E0BBC;
	// addi r9,r27,4
	ctx.r9.s64 = r27.s64 + 4;
	// rlwinm r11,r25,3,0,28
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// subf r9,r11,r29
	ctx.r9.s64 = r29.s64 - r11.s64;
	// add r24,r11,r10
	r24.u64 = r11.u64 + ctx.r10.u64;
	// add r23,r9,r23
	r23.u64 = ctx.r9.u64 + r23.u64;
	// b 0x825e0a1c
	goto loc_825E0A1C;
loc_825E0BBC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825E0BC0"))) PPC_WEAK_FUNC(sub_825E0BC0);
PPC_FUNC_IMPL(__imp__sub_825E0BC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_825E0BC4"))) PPC_WEAK_FUNC(sub_825E0BC4);
PPC_FUNC_IMPL(__imp__sub_825E0BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E0BC8"))) PPC_WEAK_FUNC(sub_825E0BC8);
PPC_FUNC_IMPL(__imp__sub_825E0BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r17{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93ec
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r27,32(r3)
	r27.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ld r28,24(r3)
	r28.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// ld r30,16(r3)
	r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// ld r29,8(r3)
	r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// li r26,0
	r26.s64 = 0;
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// beq cr6,0x825e0c18
	if (cr6.eq) goto loc_825E0C18;
	// addi r6,r3,1920
	ctx.r6.s64 = ctx.r3.s64 + 1920;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// bl 0x825f7908
	sub_825F7908(ctx, base);
	// std r26,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r26.u64);
loc_825E0C18:
	// cmpldi cr6,r29,0
	cr6.compare<uint64_t>(r29.u64, 0, xer);
	// beq cr6,0x825e0c38
	if (cr6.eq) goto loc_825E0C38;
	// addi r6,r31,6016
	ctx.r6.s64 = r31.s64 + 6016;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7908
	sub_825F7908(ctx, base);
	// std r26,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r26.u64);
loc_825E0C38:
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(r30.u64, 0, xer);
	// beq cr6,0x825e0d18
	if (cr6.eq) goto loc_825E0D18;
	// rlwinm r11,r30,0,11,14
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e0c5c
	if (cr6.eq) goto loc_825E0C5C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f86a0
	sub_825F86A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825E0C5C:
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r30
	r11.u64 = r11.u64 & r30.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e0c80
	if (cr6.eq) goto loc_825E0C80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 10560);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f71e0
	sub_825F71E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825E0C80:
	// clrldi r11,r30,52
	r11.u64 = r30.u64 & 0xFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e0ca0
	if (cr6.eq) goto loc_825E0CA0;
	// addi r6,r31,10548
	ctx.r6.s64 = r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r30,52,11
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E0CA0:
	// rlwinm r11,r30,0,15,19
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e0cc0
	if (cr6.eq) goto loc_825E0CC0;
	// addi r6,r31,10528
	ctx.r6.s64 = r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r30,47,4
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E0CC0:
	// lis r12,0
	r12.s64 = 0;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,42,21
	r12.u64 = __builtin_rotateleft64(r12.u64, 42) & 0xFFFFFC0000000000;
	// and r11,r30,r12
	r11.u64 = r30.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e0cec
	if (cr6.eq) goto loc_825E0CEC;
	// addi r6,r31,10368
	ctx.r6.s64 = r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r30,6,15
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E0CEC:
	// lis r12,-32
	r12.s64 = -2097152;
	// clrldi r12,r12,22
	r12.u64 = r12.u64 & 0x3FFFFFFFFFF;
	// and r11,r30,r12
	r11.u64 = r30.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e0d14
	if (cr6.eq) goto loc_825E0D14;
	// addi r6,r31,10444
	ctx.r6.s64 = r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r30,22,20
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E0D14:
	// std r26,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r26.u64);
loc_825E0D18:
	// cmpldi cr6,r28,0
	cr6.compare<uint64_t>(r28.u64, 0, xer);
	// beq cr6,0x825e0d68
	if (cr6.eq) goto loc_825E0D68;
	// clrldi r11,r28,32
	r11.u64 = r28.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e0d38
	if (cr6.eq) goto loc_825E0D38;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f77b0
	sub_825F77B0(ctx, base);
loc_825E0D38:
	// lis r12,31
	r12.s64 = 2031616;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,34,29
	r12.u64 = __builtin_rotateleft64(r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r11,r28,r12
	r11.u64 = r28.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e0d64
	if (cr6.eq) goto loc_825E0D64;
	// addi r6,r31,10596
	ctx.r6.s64 = r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r28,9,20
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E0D64:
	// std r26,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r26.u64);
loc_825E0D68:
	// cmpldi cr6,r27,0
	cr6.compare<uint64_t>(r27.u64, 0, xer);
	// beq cr6,0x825e0e2c
	if (cr6.eq) goto loc_825E0E2C;
	// li r12,255
	r12.s64 = 255;
	// rldicr r12,r12,38,25
	r12.u64 = __builtin_rotateleft64(r12.u64, 38) & 0xFFFFFFC000000000;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e0d98
	if (cr6.eq) goto loc_825E0D98;
	// addi r6,r31,10832
	ctx.r6.s64 = r31.s64 + 10832;
	// li r5,9088
	ctx.r5.s64 = 9088;
	// rldicr r4,r27,18,7
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 18) & 0xFF00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E0D98:
	// li r12,63
	r12.s64 = 63;
	// rldicr r12,r12,49,14
	r12.u64 = __builtin_rotateleft64(r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e0db8
	if (cr6.eq) goto loc_825E0DB8;
	// rldicr r4,r27,9,5
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 9) & 0xFC00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7630
	sub_825F7630(ctx, base);
loc_825E0DB8:
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e0de0
	if (cr6.eq) goto loc_825E0DE0;
	// addi r6,r31,10112
	ctx.r6.s64 = r31.s64 + 10112;
	// li r5,18688
	ctx.r5.s64 = 18688;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E0DE0:
	// clrldi r11,r27,26
	r11.u64 = r27.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e0e00
	if (cr6.eq) goto loc_825E0E00;
	// addi r6,r31,10680
	ctx.r6.s64 = r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r27,26,37
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E0E00:
	// rldicr r11,r27,0,1
	r11.u64 = __builtin_rotateleft64(r27.u64, 0) & 0xC000000000000000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e0e28
	if (cr6.eq) goto loc_825E0E28;
	// lbz r11,11072(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825e0e20
	if (!cr0.eq) goto loc_825E0E20;
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e0e28
	if (cr0.eq) goto loc_825E0E28;
loc_825E0E20:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d12f0
	sub_825D12F0(ctx, base);
loc_825E0E28:
	// std r26,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r26.u64);
loc_825E0E2C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r24,12812(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 12812);
	// addi r23,r31,12498
	r23.s64 = r31.s64 + 12498;
	// clrlwi r22,r18,26
	r22.u64 = r18.u32 & 0x3F;
	// addi r20,r11,2392
	r20.s64 = r11.s64 + 2392;
loc_825E0E40:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825e0e58
	if (!cr6.gt) goto loc_825E0E58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E0E58:
	// li r11,8450
	r11.s64 = 8450;
	// mr r27,r19
	r27.u64 = r19.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r19,65535
	cr6.compare<uint32_t>(r19.u32, 65535, xer);
	// stwu r17,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r17.u32);
	ctx.r3.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// ble cr6,0x825e0e94
	if (!cr6.gt) goto loc_825E0E94;
	// rlwinm r11,r18,3,0,28
	r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwzx r11,r11,r20
	r11.u64 = PPC_LOAD_U32(r11.u32 + r20.u32);
	// divwu r10,r10,r11
	ctx.r10.u32 = ctx.r10.u32 / r11.u32;
	// twllei r11,0
	if (r11.u32 <= 0) __builtin_debugtrap();
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// mullw r27,r10,r11
	r27.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
loc_825E0E94:
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// rlwinm r11,r21,1,0,30
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,12563(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 12563);
	// rlwinm r7,r27,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0xFFFF0000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addic r5,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// subfe r5,r5,r8
	temp.u8 = (~ctx.r5.u32 + ctx.r8.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// lbzx r4,r23,r8
	ctx.r4.u64 = PPC_LOAD_U8(r23.u32 + ctx.r8.u32);
	// addi r8,r9,512
	ctx.r8.s64 = ctx.r9.s64 + 512;
	// clrlwi r9,r11,3
	ctx.r9.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwimi r4,r5,8,23,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0x100) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFEFF);
	// rlwinm r11,r6,1,0,1
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xC0000000;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// clrlwi r5,r27,8
	ctx.r5.u64 = r27.u32 & 0xFFFFFF;
	// rlwinm r6,r6,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80000000;
	// andi. r26,r4,319
	r26.u64 = ctx.r4.u64 & 319;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// or r30,r7,r22
	r30.u64 = ctx.r7.u64 | r22.u64;
	// add r28,r8,r9
	r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// or r29,r5,r11
	r29.u64 = ctx.r5.u64 | r11.u64;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq 0x825e0f18
	if (cr0.eq) goto loc_825E0F18;
	// rlwinm r9,r21,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r27,1,8,30
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// or r29,r8,r11
	r29.u64 = ctx.r8.u64 | r11.u64;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// ori r30,r30,2048
	r30.u64 = r30.u64 | 2048;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
loc_825E0F18:
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825e0f48
	if (!cr0.eq) goto loc_825E0F48;
	// lis r11,-16381
	r11.s64 = -1073545216;
	// ori r11,r11,8705
	r11.u64 = r11.u64 | 8705;
	// stwu r11,4(r25)
	ea = 4 + r25.u32;
	PPC_STORE_U32(ea, r11.u32);
	r25.u32 = ea;
	// stwu r26,4(r25)
	ea = 4 + r25.u32;
	PPC_STORE_U32(ea, r26.u32);
	r25.u32 = ea;
	// stwu r30,4(r25)
	ea = 4 + r25.u32;
	PPC_STORE_U32(ea, r30.u32);
	r25.u32 = ea;
	// stwu r28,4(r25)
	ea = 4 + r25.u32;
	PPC_STORE_U32(ea, r28.u32);
	r25.u32 = ea;
	// mr r11,r25
	r11.u64 = r25.u64;
	// stwu r29,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r29.u32);
	r11.u32 = ea;
	// b 0x825e100c
	goto loc_825E100C;
loc_825E0F48:
	// lwz r11,13628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13628);
	// addi r3,r31,13616
	ctx.r3.s64 = r31.s64 + 13616;
	// lwz r10,13632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13632);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x825e0f68
	if (!cr6.gt) goto loc_825E0F68;
	// bl 0x825e4030
	sub_825E4030(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825E0F68:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r8,r11,16
	ctx.r8.s64 = r11.s64 + 16;
	// ori r9,r9,24576
	ctx.r9.u64 = ctx.r9.u64 | 24576;
	// stw r8,13628(r31)
	PPC_STORE_U32(r31.u32 + 13628, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lis r5,-16383
	ctx.r5.s64 = -1073676288;
	// lis r9,-16381
	ctx.r9.s64 = -1073545216;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// ori r9,r9,8705
	ctx.r9.u64 = ctx.r9.u64 | 8705;
	// ori r7,r7,24576
	ctx.r7.u64 = ctx.r7.u64 | 24576;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// ori r8,r5,23041
	ctx.r8.u64 = ctx.r5.u64 | 23041;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// li r4,26
	ctx.r4.s64 = 26;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r11,r11,0,3,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1FFFFFFE;
	// stwu r9,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r5.u32 = ea;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stwu r26,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r5.u32 = ea;
	// ori r10,r9,17921
	ctx.r10.u64 = ctx.r9.u64 | 17921;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r9,25
	ctx.r9.s64 = 25;
	// stwu r30,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, r30.u32);
	ctx.r5.u32 = ea;
	// stwu r28,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r5.u32 = ea;
	// stwu r29,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, r29.u32);
	ctx.r5.u32 = ea;
	// stwu r7,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r5.u32 = ea;
	// stwu r6,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r5.u32 = ea;
	// stwu r8,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r5.u32 = ea;
	// stwu r4,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r5.u32 = ea;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r5.u32 = ea;
	// stwu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r5.u32 = ea;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
loc_825E100C:
	// subf. r10,r27,r19
	ctx.r10.s64 = r19.s64 - r27.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// beq 0x825e1034
	if (cr0.eq) goto loc_825E1034;
	// addi r9,r20,4
	ctx.r9.s64 = r20.s64 + 4;
	// rlwinm r11,r18,3,0,28
	r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// subf r9,r11,r27
	ctx.r9.s64 = r27.s64 - r11.s64;
	// add r19,r11,r10
	r19.u64 = r11.u64 + ctx.r10.u64;
	// add r21,r9,r21
	r21.u64 = ctx.r9.u64 + r21.u64;
	// b 0x825e0e40
	goto loc_825E0E40;
loc_825E1034:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_825E1038"))) PPC_WEAK_FUNC(sub_825E1038);
PPC_FUNC_IMPL(__imp__sub_825E1038) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e943c
	return;
}

__attribute__((alias("__imp__sub_825E103C"))) PPC_WEAK_FUNC(sub_825E103C);
PPC_FUNC_IMPL(__imp__sub_825E103C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E1040"))) PPC_WEAK_FUNC(sub_825E1040);
PPC_FUNC_IMPL(__imp__sub_825E1040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,30
	cr6.compare<uint32_t>(ctx.r3.u32, 30, xer);
	// beq cr6,0x825e1084
	if (cr6.eq) goto loc_825E1084;
	// cmplwi cr6,r3,31
	cr6.compare<uint32_t>(ctx.r3.u32, 31, xer);
	// beq cr6,0x825e1084
	if (cr6.eq) goto loc_825E1084;
	// cmplwi cr6,r3,32
	cr6.compare<uint32_t>(ctx.r3.u32, 32, xer);
	// beq cr6,0x825e1084
	if (cr6.eq) goto loc_825E1084;
	// cmplwi cr6,r3,36
	cr6.compare<uint32_t>(ctx.r3.u32, 36, xer);
	// beq cr6,0x825e1084
	if (cr6.eq) goto loc_825E1084;
	// cmplwi cr6,r3,37
	cr6.compare<uint32_t>(ctx.r3.u32, 37, xer);
	// beq cr6,0x825e1084
	if (cr6.eq) goto loc_825E1084;
	// cmplwi cr6,r3,38
	cr6.compare<uint32_t>(ctx.r3.u32, 38, xer);
	// beq cr6,0x825e1084
	if (cr6.eq) goto loc_825E1084;
	// cmplwi cr6,r3,57
	cr6.compare<uint32_t>(ctx.r3.u32, 57, xer);
	// beq cr6,0x825e1084
	if (cr6.eq) goto loc_825E1084;
	// cmplwi cr6,r3,63
	cr6.compare<uint32_t>(ctx.r3.u32, 63, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!cr6.eq) return;
loc_825E1084:
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_825E1088"))) PPC_WEAK_FUNC(sub_825E1088);
PPC_FUNC_IMPL(__imp__sub_825E1088) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E108C"))) PPC_WEAK_FUNC(sub_825E108C);
PPC_FUNC_IMPL(__imp__sub_825E108C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E1090"))) PPC_WEAK_FUNC(sub_825E1090);
PPC_FUNC_IMPL(__imp__sub_825E1090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v55{};
	PPCVRegister v56{};
	PPCVRegister v57{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// vor128 v60,v1,v1
	_mm_store_si128((__m128i*)v60.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,-224
	r11.s64 = r11.s64 + -224;
	// addi r10,r10,-240
	ctx.r10.s64 = ctx.r10.s64 + -240;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,-256
	ctx.r9.s64 = ctx.r9.s64 + -256;
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r10
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw128 v59,v63,0
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// vspltw128 v0,v62,3
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x0));
	// vspltw128 v56,v62,2
	_mm_store_si128((__m128i*)v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x55));
	// lvx128 v61,r0,r9
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw128 v55,v62,1
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xAA));
	// vmulfp128 v59,v60,v59
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v59.f32, _mm_mul_ps(_mm_load_ps(v60.f32), _mm_load_ps(v59.f32)));
	// vspltw128 v62,v62,0
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xFF));
	// vspltw128 v58,v63,2
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// vspltw128 v57,v63,3
	_mm_store_si128((__m128i*)v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// vcmpgtfp128 v12,v56,v60
	_mm_store_ps(ctx.v12.f32, _mm_cmpgt_ps(_mm_load_ps(v56.f32), _mm_load_ps(v60.f32)));
	// vspltw128 v9,v61,2
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x55));
	// vcmpgtfp128 v7,v55,v60
	_mm_store_ps(ctx.v7.f32, _mm_cmpgt_ps(_mm_load_ps(v55.f32), _mm_load_ps(v60.f32)));
	// vcmpgtfp128 v8,v62,v60
	_mm_store_ps(ctx.v8.f32, _mm_cmpgt_ps(_mm_load_ps(v62.f32), _mm_load_ps(v60.f32)));
	// vspltw128 v4,v61,3
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x0));
	// vspltw128 v11,v61,1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xAA));
	// vspltw128 v63,v63,1
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vrfin128 v62,v59
	_mm_store_ps(v62.f32, _mm_round_ps(_mm_load_ps(v59.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// vmulfp128 v61,v62,v58
	_mm_store_ps(v61.f32, _mm_mul_ps(_mm_load_ps(v62.f32), _mm_load_ps(v58.f32)));
	// vmulfp128 v59,v62,v57
	_mm_store_ps(v59.f32, _mm_mul_ps(_mm_load_ps(v62.f32), _mm_load_ps(v57.f32)));
	// vmulfp128 v63,v62,v63
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(v62.f32), _mm_load_ps(v63.f32)));
	// vmulfp128 v13,v62,v0
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v62.f32), _mm_load_ps(ctx.v0.f32)));
	// vrfiz128 v10,v61
	_mm_store_ps(ctx.v10.f32, _mm_round_ps(_mm_load_ps(v61.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vrfiz128 v5,v59
	_mm_store_ps(ctx.v5.f32, _mm_round_ps(_mm_load_ps(v59.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vrfiz128 v6,v63
	_mm_store_ps(ctx.v6.f32, _mm_round_ps(_mm_load_ps(v63.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vmaddfp v9,v10,v0,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v10,v5,v0,v4
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v4.f32)));
	// vmaddfp v11,v6,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vsel v12,v10,v9,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v10.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vsel v0,v12,v11,v7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vsel v1,v0,v13,v8
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vrlimi128 v1,v60,1,0
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(v60.f32), 228), 1));
}

__attribute__((alias("__imp__sub_825E1130"))) PPC_WEAK_FUNC(sub_825E1130);
PPC_FUNC_IMPL(__imp__sub_825E1130) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E1134"))) PPC_WEAK_FUNC(sub_825E1134);
PPC_FUNC_IMPL(__imp__sub_825E1134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E1138"))) PPC_WEAK_FUNC(sub_825E1138);
PPC_FUNC_IMPL(__imp__sub_825E1138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// stfs f1,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// rlwinm. r11,r10,0,0,0
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e1150
	if (cr0.eq) goto loc_825E1150;
	// li r11,0
	r11.s64 = 0;
	// b 0x825e1194
	goto loc_825E1194;
loc_825E1150:
	// rlwinm r11,r10,9,23,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FF;
	// cmplwi cr6,r11,113
	cr6.compare<uint32_t>(r11.u32, 113, xer);
	// blt cr6,0x825e1170
	if (cr6.lt) goto loc_825E1170;
	// rlwinm r11,r10,0,5,8
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7800000;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,29,3,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x825e1194
	goto loc_825E1194;
loc_825E1170:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// clrlwi r9,r10,9
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFF;
	// subfic r11,r11,113
	xer.ca = r11.u32 <= 113;
	r11.s64 = 113 - r11.s64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// srw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r11.u8 & 0x3F));
loc_825E1194:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwimi r3,r11,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
}

__attribute__((alias("__imp__sub_825E119C"))) PPC_WEAK_FUNC(sub_825E119C);
PPC_FUNC_IMPL(__imp__sub_825E119C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E11A0"))) PPC_WEAK_FUNC(sub_825E11A0);
PPC_FUNC_IMPL(__imp__sub_825E11A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825e1208
	if (!cr6.eq) goto loc_825E1208;
	// lhz r11,10376(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10376);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825e1260
	if (!cr0.eq) goto loc_825E1260;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f0,-204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -204);
	f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// lfs f0,-208(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -208);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x825e1258
	goto loc_825E1258;
loc_825E1208:
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// rlwinm r11,r11,1,25,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x7E;
	// addi r10,r10,-1104
	ctx.r10.s64 = ctx.r10.s64 + -1104;
	// lhzx r11,r11,r10
	r11.u64 = PPC_LOAD_U16(r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,20,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF00;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825e1260
	if (!cr0.eq) goto loc_825E1260;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f0,-208(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -208);
	f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// lfs f0,-204(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -204);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_825E1258:
	// or r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 | r31.u64;
	// b 0x825e126c
	goto loc_825E126C;
loc_825E1260:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825e1138
	sub_825E1138(ctx, base);
	// rlwinm r11,r3,11,21,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0x7FF;
loc_825E126C:
	// lbz r10,10562(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 10562);
	// lwz r9,10560(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 10560);
	// subf r10,r10,r31
	ctx.r10.s64 = r31.s64 - ctx.r10.s64;
	// stw r3,10796(r30)
	PPC_STORE_U32(r30.u32 + 10796, ctx.r3.u32);
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// addic r8,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r9,6,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x800;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r10,r10,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,10792(r30)
	PPC_STORE_U32(r30.u32 + 10792, r11.u32);
	// ld r11,32(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 32);
	// ori r11,r11,768
	r11.u64 = r11.u64 | 768;
	// std r11,32(r30)
	PPC_STORE_U64(r30.u32 + 32, r11.u64);
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

__attribute__((alias("__imp__sub_825E12BC"))) PPC_WEAK_FUNC(sub_825E12BC);
PPC_FUNC_IMPL(__imp__sub_825E12BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E12C0"))) PPC_WEAK_FUNC(sub_825E12C0);
PPC_FUNC_IMPL(__imp__sub_825E12C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCVRegister v127{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// li r12,-80
	r12.s64 = -80;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,240
	r11.s64 = ctx.r1.s64 + 240;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r30,1
	r30.s64 = 1;
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r29,32
	r29.s64 = 32;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e13b0
	if (cr6.eq) goto loc_825E13B0;
	// rlwinm r9,r4,29,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x4;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r11,4
	r11.s64 = 4;
	// li r6,-64
	ctx.r6.s64 = -64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// or r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 | ctx.r4.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_825E132C:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm. r11,r7,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x825e13a0
	if (!cr0.gt) goto loc_825E13A0;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// bge cr6,0x825e13a0
	if (!cr6.lt) goto loc_825E13A0;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// bgt cr6,0x825e1360
	if (cr6.gt) goto loc_825E1360;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_825E1360:
	// cmpwi cr6,r9,254
	cr6.compare<int32_t>(ctx.r9.s32, 254, xer);
	// bge cr6,0x825e1378
	if (!cr6.lt) goto loc_825E1378;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bgt cr6,0x825e137c
	if (cr6.gt) goto loc_825E137C;
	// mr r11,r30
	r11.u64 = r30.u64;
	// b 0x825e137c
	goto loc_825E137C;
loc_825E1378:
	// li r11,254
	r11.s64 = 254;
loc_825E137C:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,23,0,8
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0xFF800000;
	// rlwinm r7,r7,0,9,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFF807FFFFF;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// stvx128 v127,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwx r11,r8,r5
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, r11.u32);
	// lvx128 v127,r0,r4
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
loc_825E13A0:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x825e132c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825E132C;
	// addi r11,r1,240
	r11.s64 = ctx.r1.s64 + 240;
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_825E13B0:
	// cmplwi cr6,r31,15
	cr6.compare<uint32_t>(r31.u32, 15, xer);
	// bgt cr6,0x825e1710
	if (cr6.gt) goto loc_825E1710;
	// lis r12,-32253
	r12.s64 = -2113732608;
	// addi r12,r12,-296
	r12.s64 = r12.s64 + -296;
	// lbzx r0,r12,r31
	r0.u64 = PPC_LOAD_U8(r12.u32 + r31.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32162
	r12.s64 = -2107768832;
	// nop 
	// addi r12,r12,5088
	r12.s64 = r12.s64 + 5088;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)v127.u8));
	// bl 0x825e1090
	sub_825E1090(ctx, base);
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(r31.u32, 10, xer);
	// li r11,2
	r11.s64 = 2;
	// beq cr6,0x825e13fc
	if (cr6.eq) goto loc_825E13FC;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_825E13FC:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)v62.u32, _mm_set1_epi32(int(0x0)));
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r10,r10,-156
	ctx.r10.s64 = ctx.r10.s64 + -156;
	// addi r9,r9,-160
	ctx.r9.s64 = ctx.r9.s64 + -160;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbzx r11,r11,r9
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// slw r10,r30,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r10.u8 & 0x3F));
	// lfs f0,-25600(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f0.f64 = double(temp.f32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// slw r8,r30,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (r30.u32 << (r11.u8 & 0x3F));
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mulli r8,r11,3
	ctx.r8.s64 = r11.s64 * 3;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 1);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 - f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v63,r0,r7
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v61,v127,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v61.f32, _mm_mul_ps(_mm_load_ps(v127.f32), _mm_load_ps(v63.f32)));
	// vmaxfp128 v62,v62,v61
	_mm_store_ps(v62.f32, _mm_max_ps(_mm_load_ps(v62.f32), _mm_load_ps(v61.f32)));
	// vminfp128 v63,v63,v62
	_mm_store_ps(v63.f32, _mm_min_ps(_mm_load_ps(v63.f32), _mm_load_ps(v62.f32)));
	// vrfin128 v63,v63
	_mm_store_ps(v63.f32, _mm_round_ps(_mm_load_ps(v63.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// vcfpsxws128 v63,v63,0
	_mm_store_si128((__m128i*)v63.s32, _mm_vctsxs(_mm_load_ps(v63.f32)));
	// stvlx128 v63,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// stvrx128 v63,r5,r9
	ea = ctx.r5.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// slw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// slw r11,r7,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// or r10,r11,r6
	ctx.r10.u64 = r11.u64 | ctx.r6.u64;
loc_825E14C8:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// b 0x825e1714
	goto loc_825E1714;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-364
	r11.s64 = r11.s64 + -364;
	// addi r10,r10,6240
	ctx.r10.s64 = ctx.r10.s64 + 6240;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r9,r9,-25600
	ctx.r9.s64 = ctx.r9.s64 + -25600;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r8,-176
	ctx.r10.s64 = ctx.r8.s64 + -176;
	// vspltw128 v63,v63,0
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// addi r11,r11,-21056
	r11.s64 = r11.s64 + -21056;
	// vspltw128 v62,v62,0
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xFF));
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lvlx128 v61,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r8,-192
	ctx.r8.s64 = ctx.r8.s64 + -192;
	// vmulfp128 v60,v127,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v60.f32, _mm_mul_ps(_mm_load_ps(v127.f32), _mm_load_ps(v63.f32)));
	// vspltw128 v61,v61,0
	_mm_store_si128((__m128i*)v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xFF));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,16
	r11.s64 = 16;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(r31.u32, 5, xer);
	// lvx128 v63,r0,r8
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmaxfp128 v62,v62,v60
	_mm_store_ps(v62.f32, _mm_max_ps(_mm_load_ps(v62.f32), _mm_load_ps(v60.f32)));
	// vminfp128 v12,v61,v62
	_mm_store_ps(ctx.v12.f32, _mm_min_ps(_mm_load_ps(v61.f32), _mm_load_ps(v62.f32)));
	// vmaddfp v0,v12,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vrfin128 v62,v0
	_mm_store_ps(v62.f32, _mm_round_ps(_mm_load_ps(ctx.v0.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// vcfpsxws128 v62,v62,0
	_mm_store_si128((__m128i*)v62.s32, _mm_vctsxs(_mm_load_ps(v62.f32)));
	// vxor128 v63,v62,v63
	_mm_store_si128((__m128i*)v63.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v63.u8)));
	// stvlx128 v63,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// stvrx128 v63,r10,r11
	ea = ctx.r10.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r11,r11,16,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF0000;
	// bne cr6,0x825e1584
	if (!cr6.eq) goto loc_825E1584;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r29,64
	r29.s64 = 64;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r7,r10,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r11,r9
	ctx.r10.u64 = r11.u64 | ctx.r9.u64;
	// or r11,r7,r8
	r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// b 0x825e1714
	goto loc_825E1714;
loc_825E1584:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
	// b 0x825e14c8
	goto loc_825E14C8;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f31,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
loc_825E15A4:
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// li r4,-124
	ctx.r4.s64 = -124;
	// lfsx f1,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828eddc8
	sub_828EDDC8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addis r11,r11,1
	r11.s64 = r11.s64 + 65536;
	// addi r11,r11,-32768
	r11.s64 = r11.s64 + -32768;
	// rlwinm. r10,r11,0,1,5
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7C000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq 0x825e15ec
	if (cr0.eq) goto loc_825E15EC;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// li r11,1023
	r11.s64 = 1023;
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// blt cr6,0x825e15f0
	if (cr6.lt) goto loc_825E15F0;
	// li r11,511
	r11.s64 = 511;
	// b 0x825e15f0
	goto loc_825E15F0;
loc_825E15EC:
	// rlwinm r11,r11,16,22,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0x3FF;
loc_825E15F0:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stwx r11,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, r11.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r31,12
	cr6.compare<uint32_t>(r31.u32, 12, xer);
	// blt cr6,0x825e15a4
	if (cr6.lt) goto loc_825E15A4;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,3640(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3640);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x825e162c
	if (!cr6.gt) goto loc_825E162C;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// b 0x825e1630
	goto loc_825E1630;
loc_825E162C:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_825E1630:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x825e1648
	if (!cr6.lt) goto loc_825E1648;
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bgt cr6,0x825e164c
	if (cr6.gt) goto loc_825E164C;
	// fmr f0,f31
	f0.f64 = f31.f64;
	// b 0x825e164c
	goto loc_825E164C;
loc_825E1648:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f12.f64;
loc_825E164C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f13,3792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r11,r11,10,0,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0xFFFFFC00;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,10,0,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0xFFFFFC00;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,10,0,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0xFFFFFC00;
	// or r10,r11,r8
	ctx.r10.u64 = r11.u64 | ctx.r8.u64;
	// b 0x825e14c8
	goto loc_825E14C8;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)v63.u32, _mm_set1_epi32(int(0x0)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vpkd3d128 v63,v127,3,1,3
	ctx.fpscr.enableFlushModeUnconditional();
	__builtin_trap();
	// vspltw128 v63,v63,0
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// stvewx128 v63,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r11,82(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// rlwimi r10,r11,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x825e14c8
	goto loc_825E14C8;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)v63.u32, _mm_set1_epi32(int(0x0)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r29,64
	r29.s64 = 64;
	// vpkd3d128 v63,v127,5,2,2
	temp.u32 = (v127.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((v127.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((v127.u32[0]&0x7FE000)>>13) : 0x0;
	v63.u16[4] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	v63.u16[4] |= ((v127.u32[0]&0x80000000)>>16);
	temp.u32 = (v127.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((v127.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((v127.u32[1]&0x7FE000)>>13) : 0x0;
	v63.u16[5] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	v63.u16[5] |= ((v127.u32[1]&0x80000000)>>16);
	temp.u32 = (v127.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((v127.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((v127.u32[2]&0x7FE000)>>13) : 0x0;
	v63.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	v63.u16[6] |= ((v127.u32[2]&0x80000000)>>16);
	temp.u32 = (v127.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((v127.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((v127.u32[3]&0x7FE000)>>13) : 0x0;
	v63.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	v63.u16[7] |= ((v127.u32[3]&0x80000000)>>16);
	// vspltw128 v62,v63,0
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// vspltw128 v63,v63,1
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// stvewx128 v62,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lhz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rlwimi r10,r9,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// lhz r11,84(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// rlwimi r11,r9,16,0,15
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (r11.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x825e1714
	goto loc_825E1714;
	// lwz r11,240(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// b 0x825e1714
	goto loc_825E1714;
	// lwz r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// li r29,64
	r29.s64 = 64;
	// lwz r11,244(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// b 0x825e1714
	goto loc_825E1714;
loc_825E1710:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825E1714:
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
}

__attribute__((alias("__imp__sub_825E1730"))) PPC_WEAK_FUNC(sub_825E1730);
PPC_FUNC_IMPL(__imp__sub_825E1730) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825E1734"))) PPC_WEAK_FUNC(sub_825E1734);
PPC_FUNC_IMPL(__imp__sub_825E1734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E1738"))) PPC_WEAK_FUNC(sub_825E1738);
PPC_FUNC_IMPL(__imp__sub_825E1738) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x825e1758
	if (!cr6.eq) goto loc_825E1758;
	// addi r11,r3,10372
	r11.s64 = ctx.r3.s64 + 10372;
	// b 0x825e1764
	goto loc_825E1764;
loc_825E1758:
	// addi r11,r5,2594
	r11.s64 = ctx.r5.s64 + 2594;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
loc_825E1764:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// rlwinm r3,r11,16,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xF;
	// bne cr6,0x825e1788
	if (!cr6.eq) goto loc_825E1788;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r4,r11,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x3F;
	// bl 0x825e12c0
	sub_825E12C0(ctx, base);
	// b 0x825e17ec
	goto loc_825E17EC;
loc_825E1788:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r8,r10,-280
	ctx.r8.s64 = ctx.r10.s64 + -280;
	// addi r10,r11,-1104
	ctx.r10.s64 = r11.s64 + -1104;
	// clrlwi r11,r9,26
	r11.u64 = ctx.r9.u32 & 0x3F;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(r11.u32, 54, xer);
	// lbzx r8,r3,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbzx r31,r8,r9
	r31.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// bne cr6,0x825e17bc
	if (!cr6.eq) goto loc_825E17BC;
	// li r11,7
	r11.s64 = 7;
loc_825E17BC:
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhzx r11,r11,r10
	r11.u64 = PPC_LOAD_U16(r11.u32 + ctx.r10.u32);
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xF;
	// clrlwi r29,r11,24
	r29.u64 = r11.u32 & 0xFF;
	// bl 0x825e12c0
	sub_825E12C0(ctx, base);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// ble cr6,0x825e17ec
	if (!cr6.gt) goto loc_825E17EC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_825E17EC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,10800(r30)
	PPC_STORE_U32(r30.u32 + 10800, r11.u32);
	// stw r10,10804(r30)
	PPC_STORE_U32(r30.u32 + 10804, ctx.r10.u32);
	// ld r11,32(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 32);
	// ori r11,r11,192
	r11.u64 = r11.u64 | 192;
	// std r11,32(r30)
	PPC_STORE_U64(r30.u32 + 32, r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825E180C"))) PPC_WEAK_FUNC(sub_825E180C);
PPC_FUNC_IMPL(__imp__sub_825E180C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825E1810"))) PPC_WEAK_FUNC(sub_825E1810);
PPC_FUNC_IMPL(__imp__sub_825E1810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ld r27,32(r3)
	r27.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// li r26,0
	r26.s64 = 0;
	// ld r28,24(r3)
	r28.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// ld r30,16(r3)
	r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ld r29,8(r3)
	r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// beq cr6,0x825e1850
	if (cr6.eq) goto loc_825E1850;
	// addi r6,r3,1920
	ctx.r6.s64 = ctx.r3.s64 + 1920;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// bl 0x825f7908
	sub_825F7908(ctx, base);
	// std r26,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r26.u64);
loc_825E1850:
	// cmpldi cr6,r29,0
	cr6.compare<uint64_t>(r29.u64, 0, xer);
	// beq cr6,0x825e1870
	if (cr6.eq) goto loc_825E1870;
	// addi r6,r31,6016
	ctx.r6.s64 = r31.s64 + 6016;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7908
	sub_825F7908(ctx, base);
	// std r26,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r26.u64);
loc_825E1870:
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(r30.u64, 0, xer);
	// beq cr6,0x825e1950
	if (cr6.eq) goto loc_825E1950;
	// rlwinm r11,r30,0,11,14
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e1894
	if (cr6.eq) goto loc_825E1894;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f86a0
	sub_825F86A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825E1894:
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r30
	r11.u64 = r11.u64 & r30.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e18b8
	if (cr6.eq) goto loc_825E18B8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 10560);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f71e0
	sub_825F71E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825E18B8:
	// clrldi r11,r30,52
	r11.u64 = r30.u64 & 0xFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e18d8
	if (cr6.eq) goto loc_825E18D8;
	// addi r6,r31,10548
	ctx.r6.s64 = r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r30,52,11
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E18D8:
	// rlwinm r11,r30,0,15,19
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e18f8
	if (cr6.eq) goto loc_825E18F8;
	// addi r6,r31,10528
	ctx.r6.s64 = r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r30,47,4
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E18F8:
	// lis r12,0
	r12.s64 = 0;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,42,21
	r12.u64 = __builtin_rotateleft64(r12.u64, 42) & 0xFFFFFC0000000000;
	// and r11,r30,r12
	r11.u64 = r30.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e1924
	if (cr6.eq) goto loc_825E1924;
	// addi r6,r31,10368
	ctx.r6.s64 = r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r30,6,15
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E1924:
	// lis r12,-32
	r12.s64 = -2097152;
	// clrldi r12,r12,22
	r12.u64 = r12.u64 & 0x3FFFFFFFFFF;
	// and r11,r30,r12
	r11.u64 = r30.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e194c
	if (cr6.eq) goto loc_825E194C;
	// addi r6,r31,10444
	ctx.r6.s64 = r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r30,22,20
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E194C:
	// std r26,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r26.u64);
loc_825E1950:
	// cmpldi cr6,r28,0
	cr6.compare<uint64_t>(r28.u64, 0, xer);
	// beq cr6,0x825e19a0
	if (cr6.eq) goto loc_825E19A0;
	// clrldi r11,r28,32
	r11.u64 = r28.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e1970
	if (cr6.eq) goto loc_825E1970;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f77b0
	sub_825F77B0(ctx, base);
loc_825E1970:
	// lis r12,31
	r12.s64 = 2031616;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,34,29
	r12.u64 = __builtin_rotateleft64(r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r11,r28,r12
	r11.u64 = r28.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e199c
	if (cr6.eq) goto loc_825E199C;
	// addi r6,r31,10596
	ctx.r6.s64 = r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r28,9,20
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E199C:
	// std r26,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r26.u64);
loc_825E19A0:
	// cmpldi cr6,r27,0
	cr6.compare<uint64_t>(r27.u64, 0, xer);
	// beq cr6,0x825e1a64
	if (cr6.eq) goto loc_825E1A64;
	// li r12,255
	r12.s64 = 255;
	// rldicr r12,r12,38,25
	r12.u64 = __builtin_rotateleft64(r12.u64, 38) & 0xFFFFFFC000000000;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e19d0
	if (cr6.eq) goto loc_825E19D0;
	// addi r6,r31,10832
	ctx.r6.s64 = r31.s64 + 10832;
	// li r5,9088
	ctx.r5.s64 = 9088;
	// rldicr r4,r27,18,7
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 18) & 0xFF00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E19D0:
	// li r12,63
	r12.s64 = 63;
	// rldicr r12,r12,49,14
	r12.u64 = __builtin_rotateleft64(r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e19f0
	if (cr6.eq) goto loc_825E19F0;
	// rldicr r4,r27,9,5
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 9) & 0xFC00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7630
	sub_825F7630(ctx, base);
loc_825E19F0:
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e1a18
	if (cr6.eq) goto loc_825E1A18;
	// addi r6,r31,10112
	ctx.r6.s64 = r31.s64 + 10112;
	// li r5,18688
	ctx.r5.s64 = 18688;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E1A18:
	// clrldi r11,r27,26
	r11.u64 = r27.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e1a38
	if (cr6.eq) goto loc_825E1A38;
	// addi r6,r31,10680
	ctx.r6.s64 = r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r27,26,37
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825E1A38:
	// rldicr r11,r27,0,1
	r11.u64 = __builtin_rotateleft64(r27.u64, 0) & 0xC000000000000000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e1a60
	if (cr6.eq) goto loc_825E1A60;
	// lbz r11,11072(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825e1a58
	if (!cr0.eq) goto loc_825E1A58;
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e1a60
	if (cr0.eq) goto loc_825E1A60;
loc_825E1A58:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d12f0
	sub_825D12F0(ctx, base);
loc_825E1A60:
	// std r26,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r26.u64);
loc_825E1A64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825E1A68"))) PPC_WEAK_FUNC(sub_825E1A68);
PPC_FUNC_IMPL(__imp__sub_825E1A68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825E1A6C"))) PPC_WEAK_FUNC(sub_825E1A6C);
PPC_FUNC_IMPL(__imp__sub_825E1A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E1A70"))) PPC_WEAK_FUNC(sub_825E1A70);
PPC_FUNC_IMPL(__imp__sub_825E1A70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
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
	PPCRegister f31{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r7,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r7.u32);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// stw r10,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r10.u32);
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// mr r15,r8
	r15.u64 = ctx.r8.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// rlwinm. r11,r4,0,17,17
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r25,0
	r25.s64 = 0;
	// li r22,1
	r22.s64 = 1;
	// beq 0x825e1acc
	if (cr0.eq) goto loc_825E1ACC;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r22.u32);
	// lwz r11,-19236(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19236);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825e1ad0
	if (cr6.eq) goto loc_825E1AD0;
loc_825E1ACC:
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r25.u32);
loc_825E1AD0:
	// rlwinm. r11,r21,0,16,16
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e1aec
	if (cr0.eq) goto loc_825E1AEC;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r22,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r22.u32);
	// lwz r11,-19232(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19232);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825e1af0
	if (cr6.eq) goto loc_825E1AF0;
loc_825E1AEC:
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r25.u32);
loc_825E1AF0:
	// clrlwi r11,r21,29
	r11.u64 = r21.u32 & 0x7;
	// rlwinm. r10,r21,0,25,27
	ctx.r10.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x70;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// bne 0x825e1b48
	if (!cr0.eq) goto loc_825E1B48;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x825e1b10
	if (!cr6.eq) goto loc_825E1B10;
	// lwz r11,12832(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12832);
	// b 0x825e1b1c
	goto loc_825E1B1C;
loc_825E1B10:
	// addi r11,r11,3204
	r11.s64 = r11.s64 + 3204;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
loc_825E1B1C:
	// lhz r11,24(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 24);
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e1b34
	if (!cr6.eq) goto loc_825E1B34;
	// ori r21,r21,16
	r21.u64 = r21.u64 | 16;
	// b 0x825e1b48
	goto loc_825E1B48;
loc_825E1B34:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x825e1b44
	if (!cr6.eq) goto loc_825E1B44;
	// ori r21,r21,80
	r21.u64 = r21.u64 | 80;
	// b 0x825e1b48
	goto loc_825E1B48;
loc_825E1B44:
	// ori r21,r21,112
	r21.u64 = r21.u64 | 112;
loc_825E1B48:
	// lwz r17,476(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// bne cr6,0x825e1b6c
	if (!cr6.eq) goto loc_825E1B6C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,21424
	r11.s64 = r11.s64 + 21424;
	// addi r17,r1,208
	r17.s64 = ctx.r1.s64 + 208;
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_825E1B6C:
	// lwz r11,40(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 40);
	// lwz r10,48(r15)
	ctx.r10.u64 = PPC_LOAD_U32(r15.u32 + 48);
	// rlwinm r11,r11,2,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x2;
	// lwz r9,36(r15)
	ctx.r9.u64 = PPC_LOAD_U32(r15.u32 + 36);
	// rlwinm r10,r10,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,1024
	cr6.compare<uint32_t>(ctx.r10.u32, 1024, xer);
	// beq cr6,0x825e1b98
	if (cr6.eq) goto loc_825E1B98;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
	// rlwinm r9,r9,19,19,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1FFF;
	// b 0x825e1ba4
	goto loc_825E1BA4;
loc_825E1B98:
	// clrlwi r10,r9,21
	ctx.r10.u64 = ctx.r9.u32 & 0x7FF;
	// li r22,8
	r22.s64 = 8;
	// rlwinm r9,r9,21,21,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x7FF;
loc_825E1BA4:
	// lwz r30,32(r15)
	r30.u64 = PPC_LOAD_U32(r15.u32 + 32);
	// add r24,r9,r11
	r24.u64 = ctx.r9.u64 + r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r24.u32);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// clrlwi r3,r30,26
	ctx.r3.u64 = r30.u32 & 0x3F;
	// bl 0x825d38c0
	sub_825D38C0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// rlwinm r9,r30,1,25,30
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0x7E;
	// lwz r8,28(r15)
	ctx.r8.u64 = PPC_LOAD_U32(r15.u32 + 28);
	// addi r11,r11,-1104
	r11.s64 = r11.s64 + -1104;
	// lwz r20,468(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// rlwinm r10,r30,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFF000;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r8,r8,15,18,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 15) & 0x3FE0;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// addi r27,r15,28
	r27.s64 = r15.s64 + 28;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// lbzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r30,156(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// rlwinm r28,r9,29,3,31
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// divwu r19,r8,r11
	r19.u32 = ctx.r8.u32 / r11.u32;
	// twllei r11,0
	if (r11.u32 <= 0) __builtin_debugtrap();
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r28.u32);
	// bne cr6,0x825e1c24
	if (!cr6.eq) goto loc_825E1C24;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x825e1c78
	if (cr6.eq) goto loc_825E1C78;
loc_825E1C24:
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r11,r22,-1
	r11.s64 = r22.s64 + -1;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// addi r9,r1,168
	ctx.r9.s64 = ctx.r1.s64 + 168;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,156
	ctx.r6.s64 = ctx.r1.s64 + 156;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// andc r4,r20,r11
	ctx.r4.u64 = r20.u64 & ~r11.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x825d45a8
	sub_825D45A8(ctx, base);
	// lwz r11,156(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// twllei r28,0
	if (r28.u32 <= 0) __builtin_debugtrap();
	// divwu r19,r11,r28
	r19.u32 = r11.u32 / r28.u32;
	// lwz r24,128(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_825E1C78:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x825e1c98
	if (!cr6.eq) goto loc_825E1C98;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r23,r1,192
	r23.s64 = ctx.r1.s64 + 192;
	// stw r24,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r24.u32);
	// stw r25,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r25.u32);
	// stw r25,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r25.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
loc_825E1C98:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x825e1ca8
	if (!cr6.eq) goto loc_825E1CA8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r11,-152
	r29.s64 = r11.s64 + -152;
loc_825E1CA8:
	// rlwinm r11,r10,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// twllei r30,0
	if (r30.u32 <= 0) __builtin_debugtrap();
	// addi r7,r11,512
	ctx.r7.s64 = r11.s64 + 512;
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lwz r6,0(r23)
	ctx.r6.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// subf r5,r9,r24
	ctx.r5.s64 = r24.s64 - ctx.r9.s64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// lwz r4,40(r15)
	ctx.r4.u64 = PPC_LOAD_U32(r15.u32 + 40);
	// subf r6,r6,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r6.s64;
	// lwz r29,32(r15)
	r29.u64 = PPC_LOAD_U32(r15.u32 + 32);
	// mullw r8,r9,r19
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r19.s32);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r9,r6,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r7,r7,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// mullw r10,r8,r28
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(r28.s32);
	// rlwinm r6,r4,0,28,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xE;
	// divwu r8,r5,r30
	ctx.r8.u32 = ctx.r5.u32 / r30.u32;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// clrlwi r30,r29,26
	r30.u64 = r29.u32 & 0x3F;
	// addic r7,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// add r26,r8,r11
	r26.u64 = ctx.r8.u64 + r11.u64;
	// add r18,r10,r9
	r18.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r27,r21,6,26,31
	r27.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 6) & 0x3F;
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// rlwinm r14,r3,30,30,31
	r14.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3;
	// subfe r25,r7,r6
	temp.u8 = (~ctx.r7.u32 + ctx.r6.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	r25.u64 = ~ctx.r7.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplwi cr6,r30,54
	cr6.compare<uint32_t>(r30.u32, 54, xer);
	// bne cr6,0x825e1d30
	if (!cr6.eq) goto loc_825E1D30;
	// li r30,7
	r30.s64 = 7;
	// b 0x825e1d9c
	goto loc_825E1D9C;
loc_825E1D30:
	// cmplwi cr6,r30,55
	cr6.compare<uint32_t>(r30.u32, 55, xer);
	// bne cr6,0x825e1d40
	if (!cr6.eq) goto loc_825E1D40;
	// li r30,16
	r30.s64 = 16;
	// b 0x825e1d9c
	goto loc_825E1D9C;
loc_825E1D40:
	// cmplwi cr6,r30,56
	cr6.compare<uint32_t>(r30.u32, 56, xer);
	// bne cr6,0x825e1d50
	if (!cr6.eq) goto loc_825E1D50;
	// li r30,17
	r30.s64 = 17;
	// b 0x825e1d9c
	goto loc_825E1D9C;
loc_825E1D50:
	// cmplwi cr6,r30,27
	cr6.compare<uint32_t>(r30.u32, 27, xer);
	// bne cr6,0x825e1d60
	if (!cr6.eq) goto loc_825E1D60;
	// li r30,30
	r30.s64 = 30;
	// b 0x825e1d9c
	goto loc_825E1D9C;
loc_825E1D60:
	// cmplwi cr6,r30,28
	cr6.compare<uint32_t>(r30.u32, 28, xer);
	// bne cr6,0x825e1d70
	if (!cr6.eq) goto loc_825E1D70;
	// li r30,31
	r30.s64 = 31;
	// b 0x825e1d9c
	goto loc_825E1D9C;
loc_825E1D70:
	// cmplwi cr6,r30,29
	cr6.compare<uint32_t>(r30.u32, 29, xer);
	// bne cr6,0x825e1d80
	if (!cr6.eq) goto loc_825E1D80;
	// li r30,32
	r30.s64 = 32;
	// b 0x825e1d9c
	goto loc_825E1D9C;
loc_825E1D80:
	// cmplwi cr6,r30,22
	cr6.compare<uint32_t>(r30.u32, 22, xer);
	// beq cr6,0x825e1d98
	if (cr6.eq) goto loc_825E1D98;
	// cmplwi cr6,r30,23
	cr6.compare<uint32_t>(r30.u32, 23, xer);
	// beq cr6,0x825e1d98
	if (cr6.eq) goto loc_825E1D98;
	// cmplwi cr6,r30,50
	cr6.compare<uint32_t>(r30.u32, 50, xer);
	// bne cr6,0x825e1d9c
	if (!cr6.eq) goto loc_825E1D9C;
loc_825E1D98:
	// li r30,6
	r30.s64 = 6;
loc_825E1D9C:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// addi r11,r14,-1
	r11.s64 = r14.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// bne cr6,0x825e1db8
	if (!cr6.eq) goto loc_825E1DB8;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r28,r11,2
	r28.s64 = r11.s64 + 2;
	// b 0x825e1dbc
	goto loc_825E1DBC;
loc_825E1DB8:
	// rlwinm r28,r11,27,31,31
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_825E1DBC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e1040
	sub_825E1040(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825e1dd0
	if (cr0.eq) goto loc_825E1DD0;
	// li r28,7
	r28.s64 = 7;
loc_825E1DD0:
	// rlwimi r27,r25,8,23,23
	r27.u64 = (__builtin_rotateleft32(r25.u32, 8) & 0x100) | (r27.u64 & 0xFFFFFFFFFFFFFEFF);
	// lwz r11,48(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 48);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// andi. r9,r27,319
	ctx.r9.u64 = r27.u64 & 319;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rlwimi r28,r9,3,0,28
	r28.u64 = (__builtin_rotateleft32(ctx.r9.u32, 3) & 0xFFFFFFF8) | (r28.u64 & 0xFFFFFFFF00000007);
	// rlwinm r6,r11,0,21,22
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x600;
	// rlwimi r10,r28,6,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(r28.u32, 6) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// rlwinm r8,r26,16,2,15
	ctx.r8.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 16) & 0x3FFF0000;
	// clrlwi r9,r19,18
	ctx.r9.u64 = r19.u32 & 0x3FFF;
	// rlwinm r7,r29,26,30,31
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 26) & 0x3;
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// or r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r11,r10,r7
	r11.u64 = ctx.r10.u64 | ctx.r7.u64;
	// cmplwi cr6,r6,1024
	cr6.compare<uint32_t>(ctx.r6.u32, 1024, xer);
	// bne cr6,0x825e1e34
	if (!cr6.eq) goto loc_825E1E34;
	// addi r10,r22,-1
	ctx.r10.s64 = r22.s64 + -1;
	// mullw r9,r19,r24
	ctx.r9.s64 = int64_t(r19.s32) * int64_t(r24.s32);
	// stw r9,10820(r31)
	PPC_STORE_U32(r31.u32 + 10820, ctx.r9.u32);
	// ld r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// and r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 & r20.u64;
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
	// rlwinm r10,r10,4,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x70;
	// std r9,32(r31)
	PPC_STORE_U64(r31.u32 + 32, ctx.r9.u64);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
loc_825E1E34:
	// rlwinm. r10,r21,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// beq 0x825e1e48
	if (cr0.eq) goto loc_825E1E48;
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x825e1e68
	goto loc_825E1E68;
loc_825E1E48:
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x825e1e5c
	if (!cr6.eq) goto loc_825E1E5C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x825e1e68
	goto loc_825E1E68;
loc_825E1E5C:
	// cmplwi cr6,r30,61
	cr6.compare<uint32_t>(r30.u32, 61, xer);
	// bne cr6,0x825e1e68
	if (!cr6.eq) goto loc_825E1E68;
	// li r9,2
	ctx.r9.s64 = 2;
loc_825E1E68:
	// stw r11,10788(r31)
	PPC_STORE_U32(r31.u32 + 10788, r11.u32);
	// andi. r10,r21,887
	ctx.r10.u64 = r21.u64 & 887;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r9,r9,20,10,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x300000;
	// stw r18,10780(r31)
	PPC_STORE_U32(r31.u32 + 10780, r18.u32);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// stw r8,10784(r31)
	PPC_STORE_U32(r31.u32 + 10784, ctx.r8.u32);
	// lwz r29,500(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// li r20,-1
	r20.s64 = -1;
	// or r28,r9,r10
	r28.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmplwi cr6,r30,61
	cr6.compare<uint32_t>(r30.u32, 61, xer);
	// stw r28,10776(r31)
	PPC_STORE_U32(r31.u32 + 10776, r28.u32);
	// ld r11,32(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// ori r11,r11,15360
	r11.u64 = r11.u64 | 15360;
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
	// bne cr6,0x825e1f68
	if (!cr6.eq) goto loc_825E1F68;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825e1f30
	if (cr6.eq) goto loc_825E1F30;
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r8,20(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lbz r11,28(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 28);
	// lbz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 32);
	// rlwimi r8,r9,4,25,27
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0x70) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF8F);
	// lbz r7,31(r29)
	ctx.r7.u64 = PPC_LOAD_U8(r29.u32 + 31);
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// lbz r6,35(r29)
	ctx.r6.u64 = PPC_LOAD_U8(r29.u32 + 35);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// rlwinm r8,r8,4,21,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x7F0;
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// lbz r7,30(r29)
	ctx.r7.u64 = PPC_LOAD_U8(r29.u32 + 30);
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// lbz r6,34(r29)
	ctx.r6.u64 = PPC_LOAD_U8(r29.u32 + 34);
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// rlwinm r8,r8,0,25,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lbz r4,29(r29)
	ctx.r4.u64 = PPC_LOAD_U8(r29.u32 + 29);
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r3,33(r29)
	ctx.r3.u64 = PPC_LOAD_U8(r29.u32 + 33);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r8,r5,29
	ctx.r8.u64 = ctx.r5.u32 & 0x7;
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r10,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r9,r8
	r11.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r10,r7,r4
	ctx.r10.u64 = ctx.r7.u64 | ctx.r4.u64;
	// or r9,r6,r3
	ctx.r9.u64 = ctx.r6.u64 | ctx.r3.u64;
	// b 0x825e1f40
	goto loc_825E1F40;
loc_825E1F30:
	// lis r10,-32640
	ctx.r10.s64 = -2139095040;
	// li r11,4369
	r11.s64 = 4369;
	// ori r10,r10,32896
	ctx.r10.u64 = ctx.r10.u64 | 32896;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
loc_825E1F40:
	// stw r11,10808(r31)
	PPC_STORE_U32(r31.u32 + 10808, r11.u32);
	// stw r10,10812(r31)
	PPC_STORE_U32(r31.u32 + 10812, ctx.r10.u32);
	// stw r9,10816(r31)
	PPC_STORE_U32(r31.u32 + 10816, ctx.r9.u32);
	// ld r11,32(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// ori r11,r11,60
	r11.u64 = r11.u64 | 60;
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
	// ori r11,r11,30
	r11.u64 = r11.u64 | 30;
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
	// ori r11,r11,15
	r11.u64 = r11.u64 | 15;
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
loc_825E1F68:
	// rlwinm. r26,r21,0,22,22
	r26.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x825e1f84
	if (cr0.eq) goto loc_825E1F84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,492(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x825e11a0
	sub_825E11A0(ctx, base);
loc_825E1F84:
	// rlwinm. r11,r21,0,23,23
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e1fa0
	if (cr0.eq) goto loc_825E1FA0;
	// clrlwi r5,r28,29
	ctx.r5.u64 = r28.u32 & 0x7;
	// lvx128 v1,r0,r17
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((r17.u32) & ~0xF), VectorMaskL));
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e1738
	sub_825E1738(ctx, base);
loc_825E1FA0:
	// lwz r11,8(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// li r22,0
	r22.s64 = 0;
	// lwz r10,12(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// addi r9,r11,7
	ctx.r9.s64 = r11.s64 + 7;
	// lwz r11,10436(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10436);
	// lwz r27,0(r23)
	r27.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// rlwinm r8,r11,17,0,14
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0xFFFE0000;
	// lwz r25,4(r23)
	r25.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// rlwinm r24,r9,0,0,28
	r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// srawi r9,r8,17
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 17;
	// rlwinm r23,r10,0,0,28
	r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpw cr6,r27,r9
	cr6.compare<int32_t>(r27.s32, ctx.r9.s32, xer);
	// blt cr6,0x825e200c
	if (cr6.lt) goto loc_825E200C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r11,r11,17
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FFFF) != 0);
	r11.s64 = r11.s32 >> 17;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x825e200c
	if (cr6.lt) goto loc_825E200C;
	// lwz r11,10440(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10440);
	// rlwinm r10,r11,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0xFFFE0000;
	// srawi r10,r10,17
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 17;
	// cmpw cr6,r24,r10
	cr6.compare<int32_t>(r24.s32, ctx.r10.s32, xer);
	// bgt cr6,0x825e200c
	if (cr6.gt) goto loc_825E200C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r11,r11,17
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FFFF) != 0);
	r11.s64 = r11.s32 >> 17;
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(r23.s32, r11.s32, xer);
	// ble cr6,0x825e2028
	if (!cr6.gt) goto loc_825E2028;
loc_825E200C:
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dc610
	sub_825DC610(ctx, base);
	// li r22,1
	r22.s64 = 1;
loc_825E2028:
	// lwz r11,436(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e21e0
	if (!cr6.eq) goto loc_825E21E0;
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// beq cr6,0x825e2154
	if (cr6.eq) goto loc_825E2154;
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r4
	r11.u64 = r11.u64 & ctx.r4.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e2060
	if (cr6.eq) goto loc_825E2060;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 10560);
	// bl 0x825f71e0
	sub_825F71E0(ctx, base);
	// std r3,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r3.u64);
loc_825E2060:
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// clrldi r10,r11,52
	ctx.r10.u64 = r11.u64 & 0xFFF;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x825e2090
	if (cr6.eq) goto loc_825E2090;
	// addi r6,r31,10548
	ctx.r6.s64 = r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r11,52,11
	ctx.r4.u64 = __builtin_rotateleft64(r11.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// rldicr r11,r11,0,51
	r11.u64 = __builtin_rotateleft64(r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_825E2090:
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// rlwinm r10,r11,0,15,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x825e20c8
	if (cr6.eq) goto loc_825E20C8;
	// addi r6,r31,10528
	ctx.r6.s64 = r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r11,47,4
	ctx.r4.u64 = __builtin_rotateleft64(r11.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
	// lis r12,-2
	r12.s64 = -131072;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r12,r12,4095
	r12.u64 = r12.u64 | 4095;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_825E20C8:
	// lis r12,0
	r12.s64 = 0;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,42,21
	r12.u64 = __builtin_rotateleft64(r12.u64, 42) & 0xFFFFFC0000000000;
	// and r10,r11,r12
	ctx.r10.u64 = r11.u64 & r12.u64;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x825e2110
	if (cr6.eq) goto loc_825E2110;
	// addi r6,r31,10368
	ctx.r6.s64 = r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r11,6,15
	ctx.r4.u64 = __builtin_rotateleft64(r11.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
	// lis r12,-1
	r12.s64 = -65536;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r12,r12,0
	r12.u64 = r12.u64 | 0;
	// rldicr r12,r12,42,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_825E2110:
	// lis r12,-32
	r12.s64 = -2097152;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// clrldi r12,r12,22
	r12.u64 = r12.u64 & 0x3FFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = r11.u64 & r12.u64;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x825e2154
	if (cr6.eq) goto loc_825E2154;
	// addi r6,r31,10444
	ctx.r6.s64 = r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r11,22,20
	ctx.r4.u64 = __builtin_rotateleft64(r11.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
	// lis r12,-32
	r12.s64 = -2097152;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r12,r12,0
	r12.u64 = r12.u64 | 0;
	// rldicr r12,r12,21,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 21) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_825E2154:
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e21a4
	if (cr6.eq) goto loc_825E21A4;
	// lis r12,31
	r12.s64 = 2031616;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,34,29
	r12.u64 = __builtin_rotateleft64(r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r10,r11,r12
	ctx.r10.u64 = r11.u64 & r12.u64;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x825e21a4
	if (cr6.eq) goto loc_825E21A4;
	// addi r6,r31,10596
	ctx.r6.s64 = r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r11,9,20
	ctx.r4.u64 = __builtin_rotateleft64(r11.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
	// lis r12,-32
	r12.s64 = -2097152;
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// ori r12,r12,0
	r12.u64 = r12.u64 | 0;
	// rldicr r12,r12,34,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
loc_825E21A4:
	// ld r11,32(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825e221c
	if (cr6.eq) goto loc_825E221C;
	// clrldi r10,r11,26
	ctx.r10.u64 = r11.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x825e221c
	if (cr6.eq) goto loc_825E221C;
	// addi r6,r31,10680
	ctx.r6.s64 = r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r11,26,37
	ctx.r4.u64 = __builtin_rotateleft64(r11.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
	// ld r11,32(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// rldicr r11,r11,0,25
	r11.u64 = __builtin_rotateleft64(r11.u64, 0) & 0xFFFFFFC000000000;
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
	// b 0x825e221c
	goto loc_825E221C;
loc_825E21E0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e1810
	sub_825E1810(ctx, base);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x825e221c
	if (cr6.eq) goto loc_825E221C;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825e220c
	if (!cr6.gt) goto loc_825E220C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E220C:
	// li r11,8450
	r11.s64 = 8450;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r16,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r16.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_825E221C:
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825e2230
	if (cr0.eq) goto loc_825E2230;
	// li r11,1
	r11.s64 = 1;
	// b 0x825e22c0
	goto loc_825E22C0;
loc_825E2230:
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e22b8
	if (cr0.eq) goto loc_825E22B8;
	// lwz r11,12816(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12816);
	// lwz r10,13104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13104);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825e2250
	if (cr6.eq) goto loc_825E2250;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e22b8
	if (!cr6.eq) goto loc_825E22B8;
loc_825E2250:
	// lwz r11,12820(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12820);
	// lwz r10,13108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13108);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825e2268
	if (cr6.eq) goto loc_825E2268;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e22b8
	if (!cr6.eq) goto loc_825E22B8;
loc_825E2268:
	// lwz r11,12824(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12824);
	// lwz r10,13112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13112);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825e2280
	if (cr6.eq) goto loc_825E2280;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e22b8
	if (!cr6.eq) goto loc_825E22B8;
loc_825E2280:
	// lwz r11,12828(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12828);
	// lwz r10,13116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13116);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825e2298
	if (cr6.eq) goto loc_825E2298;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e22b8
	if (!cr6.eq) goto loc_825E22B8;
loc_825E2298:
	// lwz r11,12832(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12832);
	// lwz r10,13120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13120);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825e22b0
	if (cr6.eq) goto loc_825E22B0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e22b8
	if (!cr6.eq) goto loc_825E22B8;
loc_825E22B0:
	// li r11,1
	r11.s64 = 1;
	// b 0x825e22bc
	goto loc_825E22BC;
loc_825E22B8:
	// li r11,0
	r11.s64 = 0;
loc_825E22BC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_825E22C0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e23cc
	if (cr0.eq) goto loc_825E23CC;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825e22e0
	if (!cr6.gt) goto loc_825E22E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E22E0:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,24832
	r11.u64 = r11.u64 | 24832;
	// li r28,0
	r28.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r10,13124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13124);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x825e23a0
	if (!cr6.gt) goto loc_825E23A0;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r31,13368
	r30.s64 = r31.s64 + 13368;
loc_825E2310:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r7,3
	ctx.r7.s64 = 3;
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
	// lwz r6,152(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// slw r7,r7,r29
	ctx.r7.u64 = r29.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r29.u8 & 0x3F));
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// li r5,8985
	ctx.r5.s64 = 8985;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// ori r3,r10,21761
	ctx.r3.u64 = ctx.r10.u64 | 21761;
	// rlwinm r11,r9,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// mullw r10,r8,r19
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(r19.s32);
	// stwu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r4.u32 = ea;
	// stwu r3,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r4.u32 = ea;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stwu r5,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r4.u32 = ea;
	// mullw r11,r11,r6
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r6.s32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// add r11,r11,r18
	r11.u64 = r11.u64 + r18.u64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r10.u32 = ea;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// ble cr6,0x825e2388
	if (!cr6.gt) goto loc_825E2388;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825E2388:
	// lwz r10,13124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13124);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// blt cr6,0x825e2310
	if (cr6.lt) goto loc_825E2310;
loc_825E23A0:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
	// ori r9,r9,24832
	ctx.r9.u64 = ctx.r9.u64 | 24832;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,13084(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13084);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// lwz r10,13088(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13088);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
loc_825E23CC:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825e23e8
	if (!cr6.gt) goto loc_825E23E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825E23E8:
	// lbz r10,11070(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11070);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ori r28,r9,17920
	r28.u64 = ctx.r9.u64 | 17920;
	// beq 0x825e2434
	if (cr0.eq) goto loc_825E2434;
	// stwu r28,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r28.u32);
	r11.u32 = ea;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r28,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r28.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r28,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r28.u32);
	r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// lbz r10,11070(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11070);
	// andi. r10,r10,247
	ctx.r10.u64 = ctx.r10.u64 & 247;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r10,11070(r31)
	PPC_STORE_U8(r31.u32 + 11070, ctx.r10.u8);
loc_825E2434:
	// lwz r21,436(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r29,136(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// bne cr6,0x825e24b8
	if (!cr6.eq) goto loc_825E24B8;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x825e24b8
	if (!cr6.eq) goto loc_825E24B8;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,256
	ctx.r9.s64 = 256;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// lis r8,-16368
	ctx.r8.s64 = -1072693248;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r8,11008
	ctx.r8.u64 = ctx.r8.u64 | 11008;
	// li r7,15
	ctx.r7.s64 = 15;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// li r5,60
	ctx.r5.s64 = 60;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// addi r4,r6,-360
	ctx.r4.s64 = ctx.r6.s64 + -360;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// mr r30,r11
	r30.u64 = r11.u64;
	// stwu r7,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r11,r30,60
	r11.s64 = r30.s64 + 60;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
loc_825E24B8:
	// li r10,8712
	ctx.r10.s64 = 8712;
	// li r9,6
	ctx.r9.s64 = 6;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r10,8704
	ctx.r10.s64 = 8704;
	// li r19,0
	r19.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
	// mr r30,r19
	r30.u64 = r19.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r19,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r19.u32);
	r11.u32 = ea;
	// beq cr6,0x825e2520
	if (cr6.eq) goto loc_825E2520;
	// lbz r9,11069(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 11069);
	// lbz r10,11070(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11070);
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
	// lwz r7,10560(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 10560);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stb r9,11069(r31)
	PPC_STORE_U8(r31.u32 + 11069, ctx.r9.u8);
	// rlwimi r8,r10,30,28,28
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x8) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF7);
	// rlwinm r10,r7,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r8,r8,29,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x7;
	// rlwinm r8,r8,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// or r30,r8,r10
	r30.u64 = ctx.r8.u64 | ctx.r10.u64;
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// oris r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 131072;
	// std r9,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r9.u64);
loc_825E2520:
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x825e2538
	if (cr6.eq) goto loc_825E2538;
	// lbz r11,11072(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e2540
	if (cr0.eq) goto loc_825E2540;
loc_825E2538:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d12f0
	sub_825D12F0(ctx, base);
loc_825E2540:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f71e0
	sub_825F71E0(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x825e25f4
	if (!cr6.eq) goto loc_825E25F4;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825e2570
	if (!cr6.gt) goto loc_825E2570;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E2570:
	// lis r11,2
	r11.s64 = 131072;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,8448
	r11.u64 = r11.u64 | 8448;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r8,8851
	ctx.r8.s64 = 8851;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,768
	ctx.r4.s64 = 768;
	// li r30,8978
	r30.s64 = 8978;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// ori r10,r6,8708
	ctx.r10.u64 = ctx.r6.u64 | 8708;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r29,0
	r29.s64 = 0;
	// mr r11,r19
	r11.u64 = r19.u64;
	// ori r11,r29,65535
	r11.u64 = r29.u64 | 65535;
	// stwu r19,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r19.u32);
	ctx.r3.u32 = ea;
	// li r26,8205
	r26.s64 = 8205;
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r29,r19
	r29.u64 = r19.u64;
	// stwu r19,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r19.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r19,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r19.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r19,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r19.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_825E25F4:
	// lwz r26,144(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x825e2684
	if (!cr6.eq) goto loc_825E2684;
	// li r12,1
	r12.s64 = 1;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// rldicr r12,r12,41,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// rldicr r12,r12,40,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 40) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// rldicr r12,r12,39,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// rldicr r12,r12,35,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// li r12,1
	r12.s64 = 1;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// rldicr r12,r12,44,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ld r11,32(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_825E2684:
	// cmplwi cr6,r14,3
	cr6.compare<uint32_t>(r14.u32, 3, xer);
	// bne cr6,0x825e2720
	if (!cr6.eq) goto loc_825E2720;
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x825e2720
	if (cr6.eq) goto loc_825E2720;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r30,r19
	r30.u64 = r19.u64;
	// beq cr6,0x825e26a8
	if (cr6.eq) goto loc_825E26A8;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
loc_825E26A8:
	// addi r11,r30,2593
	r11.s64 = r30.s64 + 2593;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r31
	r29.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// rlwinm r11,r29,0,12,15
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xF0000;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825e2720
	if (!cr6.eq) goto loc_825E2720;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825e26dc
	if (!cr6.gt) goto loc_825E26DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E26DC:
	// addis r10,r30,2
	ctx.r10.s64 = r30.s64 + 131072;
	// addi r11,r30,8193
	r11.s64 = r30.s64 + 8193;
	// addi r10,r10,263
	ctx.r10.s64 = ctx.r10.s64 + 263;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// clrlwi r8,r29,6
	ctx.r8.u64 = r29.u32 & 0x3FFFFFF;
	// srawi r11,r10,16
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	r11.s64 = ctx.r10.s32 >> 16;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,0,20,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFF00FFF;
	// clrldi r10,r10,56
	ctx.r10.u64 = ctx.r10.u64 & 0xFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// ldx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + r31.u32);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stdx r10,r11,r31
	PPC_STORE_U64(r11.u32 + r31.u32, ctx.r10.u64);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_825E2720:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// bne cr6,0x825e2888
	if (!cr6.eq) goto loc_825E2888;
	// lwz r30,48(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x825e2744
	if (!cr6.gt) goto loc_825E2744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825E2744:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3538
	sub_825E3538(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x825e2764
	if (!cr0.eq) goto loc_825E2764;
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// b 0x825e2bb8
	goto loc_825E2BB8;
loc_825E2764:
	// rlwinm r11,r3,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFF;
	// lwz r9,10688(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 10688);
	// clrlwi r10,r3,3
	ctx.r10.u64 = ctx.r3.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// bne 0x825e2790
	if (!cr0.eq) goto loc_825E2790;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3792(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	f0.f64 = double(temp.f32);
	// b 0x825e2798
	goto loc_825E2798;
loc_825E2790:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
loc_825E2798:
	// extsw r10,r27
	ctx.r10.s64 = r27.s32;
	// std r10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// extsw r10,r25
	ctx.r10.s64 = r25.s32;
	// std r10,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r10.u64);
	// subf r10,r25,r23
	ctx.r10.s64 = r23.s64 - r25.s64;
	// subf r9,r27,r24
	ctx.r9.s64 = r24.s64 - r27.s64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r10,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r10.u64);
	// lfd f10,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r9,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r9.u64);
	// lfd f11,168(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lis r9,5
	ctx.r9.s64 = 327680;
	// lfd f13,192(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,176(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// ori r10,r9,18432
	ctx.r10.u64 = ctx.r9.u64 | 18432;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// ori r11,r11,3
	r11.u64 = r11.u64 | 3;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r9,r9,26
	ctx.r9.u64 = ctx.r9.u64 | 26;
	// ori r4,r4,20480
	ctx.r4.u64 = ctx.r4.u64 | 20480;
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// mr r27,r19
	r27.u64 = r19.u64;
	// mr r25,r19
	r25.u64 = r19.u64;
	// mr r24,r19
	r24.u64 = r19.u64;
	// li r29,3
	r29.s64 = 3;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 - f0.f64));
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fadds f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 + f0.f64));
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stwu r10,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r30.u32 = ea;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r11.u32);
	r30.u32 = ea;
	// stwu r9,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r30.u32 = ea;
	// stwu r19,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r19.u32);
	r30.u32 = ea;
	// stwu r19,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r19.u32);
	r30.u32 = ea;
	// stwu r19,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r19.u32);
	r30.u32 = ea;
	// stwu r19,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r19.u32);
	r30.u32 = ea;
	// stwu r4,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	r30.u32 = ea;
	// stwu r19,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r19.u32);
	r30.u32 = ea;
	// stwu r19,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r19.u32);
	r30.u32 = ea;
	// stwu r19,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r19.u32);
	r30.u32 = ea;
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// b 0x825e288c
	goto loc_825E288C;
loc_825E2888:
	// mr r29,r21
	r29.u64 = r21.u64;
loc_825E288C:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825e28a4
	if (!cr6.gt) goto loc_825E28A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E28A4:
	// lwz r11,13092(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13092);
	// li r10,136
	ctx.r10.s64 = 136;
	// li r9,8199
	ctx.r9.s64 = 8199;
	// oris r11,r11,49152
	r11.u64 = r11.u64 | 3221225472;
	// rlwimi r10,r29,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(r29.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// ori r11,r11,13824
	r11.u64 = r11.u64 | 13824;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r11,6
	r11.s64 = 6;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lwz r11,10396(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10396);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// beq cr6,0x825e2918
	if (cr6.eq) goto loc_825E2918;
	// lwz r11,10440(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10440);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,10436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10436);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,17,0,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r7,r9,17
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 17;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// srawi r6,r11,17
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = r11.s32 >> 17;
	// srawi r5,r8,17
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 17;
	// srawi r4,r10,17
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 17;
	// bl 0x825dc610
	sub_825DC610(ctx, base);
loc_825E2918:
	// lwz r11,11036(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// stw r11,8(r15)
	PPC_STORE_U32(r15.u32 + 8, r11.u32);
	// bne cr6,0x825e2950
	if (!cr6.eq) goto loc_825E2950;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,1
	r11.u64 = r11.u64 | 65536;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_825E2950:
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// addi r3,r15,28
	ctx.r3.s64 = r15.s64 + 28;
	// addi r6,r1,156
	ctx.r6.s64 = ctx.r1.s64 + 156;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// bl 0x825d3770
	sub_825D3770(ctx, base);
	// addi r11,r1,136
	r11.s64 = ctx.r1.s64 + 136;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lwz r7,44(r15)
	ctx.r7.u64 = PPC_LOAD_U32(r15.u32 + 44);
	// lwz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r8,28(r15)
	ctx.r8.u64 = PPC_LOAD_U32(r15.u32 + 28);
	// lwz r10,40(r15)
	ctx.r10.u64 = PPC_LOAD_U32(r15.u32 + 40);
	// rlwinm r11,r8,10,23,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0x1FF;
	// lwz r30,48(r15)
	r30.u64 = PPC_LOAD_U32(r15.u32 + 48);
	// rlwinm r6,r10,13,0,18
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
	// lwz r29,32(r15)
	r29.u64 = PPC_LOAD_U32(r15.u32 + 32);
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r7,26,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0xF;
	// srawi r7,r6,26
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 26;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// rlwinm r9,r8,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// rlwinm r10,r30,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 21) & 0x1;
	// rlwinm r8,r30,23,30,31
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 23) & 0x3;
	// clrlwi r7,r29,26
	ctx.r7.u64 = r29.u32 & 0x3F;
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// bl 0x825d3b00
	sub_825D3B00(ctx, base);
	// lwz r11,460(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825e2a30
	if (cr6.eq) goto loc_825E2A30;
	// lwz r11,48(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 48);
	// rlwinm. r10,r11,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825e2a30
	if (cr0.eq) goto loc_825E2A30;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// lwz r30,136(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r11,r11,0,3,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1FFFF000;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
	// b 0x825e2a50
	goto loc_825E2A50;
loc_825E2A30:
	// lwz r11,32(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 32);
	// lwz r30,160(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r10,r11,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r11,r10,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
loc_825E2A50:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825e2a68
	if (!cr6.gt) goto loc_825E2A68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E2A68:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,-19240(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19240);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825e2b00
	if (cr6.eq) goto loc_825E2B00;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x825e2b28
	if (!cr6.eq) goto loc_825E2B28;
	// li r11,2609
	r11.s64 = 2609;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,1
	r11.s64 = 65536;
	// addi r9,r30,8191
	ctx.r9.s64 = r30.s64 + 8191;
	// ori r11,r11,2607
	r11.u64 = r11.u64 | 2607;
	// rlwinm r9,r9,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r8,r29,0,0,19
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFF000;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lis r7,-16380
	ctx.r7.s64 = -1073479680;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r7,r7,15360
	ctx.r7.u64 = ctx.r7.u64 | 15360;
	// li r6,2609
	ctx.r6.s64 = 2609;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r30,8
	r30.s64 = 8;
	// li r11,1480
	r11.s64 = 1480;
	// lis r29,2
	r29.s64 = 131072;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r19,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r19.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stwu r29,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r29.u32);
	r11.u32 = ea;
	// b 0x825e2b28
	goto loc_825E2B28;
loc_825E2B00:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x825e2b28
	if (!cr6.eq) goto loc_825E2B28;
	// lbz r10,11072(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// li r12,3
	r12.s64 = 3;
	// ori r10,r10,192
	ctx.r10.u64 = ctx.r10.u64 | 192;
	// rldicr r12,r12,62,1
	r12.u64 = __builtin_rotateleft64(r12.u64, 62) & 0xC000000000000000;
	// stb r10,11072(r31)
	PPC_STORE_U8(r31.u32 + 11072, ctx.r10.u8);
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | r12.u64;
	// std r10,32(r31)
	PPC_STORE_U64(r31.u32 + 32, ctx.r10.u64);
loc_825E2B28:
	// li r10,8984
	ctx.r10.s64 = 8984;
	// stw r19,10776(r31)
	PPC_STORE_U32(r31.u32 + 10776, r19.u32);
	// stw r19,10788(r31)
	PPC_STORE_U32(r31.u32 + 10788, r19.u32);
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r10,8987
	ctx.r10.s64 = 8987;
	// stwu r19,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r19.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stwu r19,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r19.u32);
	ctx.r10.u32 = ea;
	// lwz r11,11036(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// beq cr6,0x825e2b6c
	if (cr6.eq) goto loc_825E2B6C;
	// stw r11,8(r15)
	PPC_STORE_U32(r15.u32 + 8, r11.u32);
	// stw r11,12(r15)
	PPC_STORE_U32(r15.u32 + 12, r11.u32);
	// b 0x825e2bb8
	goto loc_825E2BB8;
loc_825E2B6C:
	// lwz r11,11040(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11040);
	// lwz r10,0(r15)
	ctx.r10.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e2bb8
	if (cr0.eq) goto loc_825E2BB8;
	// lwz r11,13932(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13932);
	// lwz r3,13928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 13928);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x825e2b94
	if (cr6.lt) goto loc_825E2B94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f4bc0
	sub_825F4BC0(ctx, base);
loc_825E2B94:
	// stw r20,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r20.u32);
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// rlwimi r10,r15,30,2,31
	ctx.r10.u64 = (__builtin_rotateleft32(r15.u32, 30) & 0x3FFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFC0000000);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// ld r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// stw r11,13928(r31)
	PPC_STORE_U32(r31.u32 + 13928, r11.u32);
loc_825E2BB8:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
}

__attribute__((alias("__imp__sub_825E2BC0"))) PPC_WEAK_FUNC(sub_825E2BC0);
PPC_FUNC_IMPL(__imp__sub_825E2BC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_825E2BC4"))) PPC_WEAK_FUNC(sub_825E2BC4);
PPC_FUNC_IMPL(__imp__sub_825E2BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E2BC8"))) PPC_WEAK_FUNC(sub_825E2BC8);
PPC_FUNC_IMPL(__imp__sub_825E2BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,260(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// lwz r29,252(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// bl 0x825e1a70
	sub_825E1A70(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825E2C10"))) PPC_WEAK_FUNC(sub_825E2C10);
PPC_FUNC_IMPL(__imp__sub_825E2C10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825E2C14"))) PPC_WEAK_FUNC(sub_825E2C14);
PPC_FUNC_IMPL(__imp__sub_825E2C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E2C18"))) PPC_WEAK_FUNC(sub_825E2C18);
PPC_FUNC_IMPL(__imp__sub_825E2C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,17136(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17136);
	// lbz r9,11069(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11069);
	// addi r11,r10,4800
	r11.s64 = ctx.r10.s64 + 4800;
	// ori r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 | 32;
	// addi r8,r11,-160
	ctx.r8.s64 = r11.s64 + -160;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// stb r9,11069(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11069, ctx.r9.u8);
}

__attribute__((alias("__imp__sub_825E2C3C"))) PPC_WEAK_FUNC(sub_825E2C3C);
PPC_FUNC_IMPL(__imp__sub_825E2C3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E2C40"))) PPC_WEAK_FUNC(sub_825E2C40);
PPC_FUNC_IMPL(__imp__sub_825E2C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r9,15332(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15332);
	// lwz r8,15328(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15328);
	// lwz r7,15320(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15320);
	// lwz r6,15324(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15324);
	// stw r11,13808(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13808, r11.u32);
	// stw r10,13812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13812, ctx.r10.u32);
	// stw r9,13816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13816, ctx.r9.u32);
	// stw r8,13820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13820, ctx.r8.u32);
	// stw r7,13824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13824, ctx.r7.u32);
	// stw r6,13828(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13828, ctx.r6.u32);
}

__attribute__((alias("__imp__sub_825E2C70"))) PPC_WEAK_FUNC(sub_825E2C70);
PPC_FUNC_IMPL(__imp__sub_825E2C70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E2C74"))) PPC_WEAK_FUNC(sub_825E2C74);
PPC_FUNC_IMPL(__imp__sub_825E2C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E2C78"))) PPC_WEAK_FUNC(sub_825E2C78);
PPC_FUNC_IMPL(__imp__sub_825E2C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,13812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13812);
	// lwz r10,13808(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13808);
	// lwz r9,13816(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13816);
	// addi r8,r11,-160
	ctx.r8.s64 = r11.s64 + -160;
	// lwz r7,13820(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13820);
	// lwz r6,13824(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13824);
	// lwz r5,13828(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13828);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r9,15332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15332, ctx.r9.u32);
	// stw r7,15328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15328, ctx.r7.u32);
	// stw r6,15320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15320, ctx.r6.u32);
	// stw r5,15324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15324, ctx.r5.u32);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
}

__attribute__((alias("__imp__sub_825E2CB0"))) PPC_WEAK_FUNC(sub_825E2CB0);
PPC_FUNC_IMPL(__imp__sub_825E2CB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E2CB4"))) PPC_WEAK_FUNC(sub_825E2CB4);
PPC_FUNC_IMPL(__imp__sub_825E2CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E2CB8"))) PPC_WEAK_FUNC(sub_825E2CB8);
PPC_FUNC_IMPL(__imp__sub_825E2CB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,11024(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11024);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825e2d48
	if (cr0.eq) goto loc_825E2D48;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x825e2cf8
	if (!cr6.eq) goto loc_825E2CF8;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x825e2d48
	if (!cr6.gt) goto loc_825E2D48;
loc_825E2CF8:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d0f50
	sub_825D0F50(ctx, base);
loc_825E2D08:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d1048
	sub_825D1048(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825e2d40
	if (cr0.eq) goto loc_825E2D40;
	// lwz r11,11024(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r10,r11,r30
	ctx.r10.s64 = r30.s64 - r11.s64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825e2d40
	if (cr0.eq) goto loc_825E2D40;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x825e2d08
	if (!cr6.eq) goto loc_825E2D08;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bgt cr6,0x825e2d08
	if (cr6.gt) goto loc_825E2D08;
loc_825E2D40:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d0f80
	sub_825D0F80(ctx, base);
loc_825E2D48:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825E2D4C"))) PPC_WEAK_FUNC(sub_825E2D4C);
PPC_FUNC_IMPL(__imp__sub_825E2D4C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825E2D50"))) PPC_WEAK_FUNC(sub_825E2D50);
PPC_FUNC_IMPL(__imp__sub_825E2D50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,15304(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15304);
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r9,11024(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11024);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// and r30,r10,r11
	r30.u64 = ctx.r10.u64 & r11.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r30
	cr6.compare<uint32_t>(ctx.r4.u32, r30.u32, xer);
	// lwz r11,60(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// bge cr6,0x825e2d94
	if (!cr6.lt) goto loc_825E2D94;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x825e2df0
	if (!cr6.lt) goto loc_825E2DF0;
loc_825E2D88:
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// ble cr6,0x825e2d9c
	if (!cr6.gt) goto loc_825E2D9C;
	// b 0x825e2df0
	goto loc_825E2DF0;
loc_825E2D94:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x825e2d88
	if (!cr6.lt) goto loc_825E2D88;
loc_825E2D9C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d0f50
	sub_825D0F50(ctx, base);
loc_825E2DAC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d1048
	sub_825D1048(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825e2de8
	if (cr0.eq) goto loc_825E2DE8;
	// lwz r11,11024(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 11024);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// bge cr6,0x825e2dd8
	if (!cr6.lt) goto loc_825E2DD8;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x825e2de8
	if (!cr6.lt) goto loc_825E2DE8;
	// b 0x825e2de0
	goto loc_825E2DE0;
loc_825E2DD8:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x825e2dac
	if (cr6.lt) goto loc_825E2DAC;
loc_825E2DE0:
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// ble cr6,0x825e2dac
	if (!cr6.gt) goto loc_825E2DAC;
loc_825E2DE8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d0f80
	sub_825D0F80(ctx, base);
loc_825E2DF0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825E2DF8"))) PPC_WEAK_FUNC(sub_825E2DF8);
PPC_FUNC_IMPL(__imp__sub_825E2DF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825E2DFC"))) PPC_WEAK_FUNC(sub_825E2DFC);
PPC_FUNC_IMPL(__imp__sub_825E2DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E2E00"))) PPC_WEAK_FUNC(sub_825E2E00);
PPC_FUNC_IMPL(__imp__sub_825E2E00) {
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
	// lwz r3,21940(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21940);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e2e4c
	if (cr6.eq) goto loc_825E2E4C;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,-19224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19224);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e2e4c
	if (!cr6.eq) goto loc_825E2E4C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825E2E4C:
	// lwz r11,23768(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 23768);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825e2e70
	if (cr6.eq) goto loc_825E2E70;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// li r3,1
	ctx.r3.s64 = 1;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825E2E70:
	// lwz r30,11088(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 11088);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,15304(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 15304);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r28,15300(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 15300);
	// bl 0x825e2d50
	sub_825E2D50(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825e2ecc
	if (cr6.eq) goto loc_825E2ECC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_825E2EA0:
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r30,1
	ctx.r7.s64 = r30.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// and r30,r7,r29
	r30.u64 = ctx.r7.u64 & r29.u64;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stwx r9,r8,r28
	PPC_STORE_U32(ctx.r8.u32 + r28.u32, ctx.r9.u32);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x825e2ea0
	if (cr6.lt) goto loc_825E2EA0;
loc_825E2ECC:
	// lwz r3,21940(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 21940);
	// stw r30,11088(r31)
	PPC_STORE_U32(r31.u32 + 11088, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e2eec
	if (cr6.eq) goto loc_825E2EEC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825E2EEC:
	// lwz r11,23768(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 23768);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825e2f10
	if (cr6.eq) goto loc_825E2F10;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825E2F10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825E2F14"))) PPC_WEAK_FUNC(sub_825E2F14);
PPC_FUNC_IMPL(__imp__sub_825E2F14) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825E2F18"))) PPC_WEAK_FUNC(sub_825E2F18);
PPC_FUNC_IMPL(__imp__sub_825E2F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stw r4,11088(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11088, ctx.r4.u32);
	// sync 
	// lis r11,32712
	r11.s64 = 2143813632;
	// stw r4,1812(r11)
	PPC_MM_STORE_U32(r11.u32 + 1812, ctx.r4.u32);
	// eieio 
	// sync 
}

__attribute__((alias("__imp__sub_825E2F30"))) PPC_WEAK_FUNC(sub_825E2F30);
PPC_FUNC_IMPL(__imp__sub_825E2F30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E2F34"))) PPC_WEAK_FUNC(sub_825E2F34);
PPC_FUNC_IMPL(__imp__sub_825E2F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E2F38"))) PPC_WEAK_FUNC(sub_825E2F38);
PPC_FUNC_IMPL(__imp__sub_825E2F38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
loc_825E2F38:
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x825e2f4c
	if (!cr6.lt) goto loc_825E2F4C;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_825E2F4C:
	// rldicl r9,r11,32,32
	ctx.r9.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFF;
	// cmplw cr6,r5,r9
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, xer);
	// ble cr6,0x825e2f5c
	if (!cr6.gt) goto loc_825E2F5C;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_825E2F5C:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
loc_825E2F64:
	// mfmsr r7
	// mtmsrd r13,1
	// ldarx r8,0,r3
	reserved.u64 = *(uint64_t*)(base + ctx.r3.u32);
	ctx.r8.u64 = __builtin_bswap64(reserved.u64);
	// cmpd cr6,r8,r11
	cr6.compare<int64_t>(ctx.r8.s64, r11.s64, xer);
	// bne cr6,0x825e2f88
	if (!cr6.eq) goto loc_825E2F88;
	// stdcx. r10,0,r3
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r3.u32), reserved.s64, __builtin_bswap64(ctx.r10.s64));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x825e2f64
	if (!cr0.eq) goto loc_825E2F64;
	// b 0x825e2f90
	goto loc_825E2F90;
loc_825E2F88:
	// stdcx. r8,0,r3
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r3.u32), reserved.s64, __builtin_bswap64(ctx.r8.s64));
	cr0.so = xer.so;
	// mtmsrd r7,1
loc_825E2F90:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpld cr6,r8,r11
	cr6.compare<uint64_t>(ctx.r8.u64, r11.u64, xer);
	// bne cr6,0x825e2f38
	if (!cr6.eq) goto loc_825E2F38;
}

__attribute__((alias("__imp__sub_825E2F9C"))) PPC_WEAK_FUNC(sub_825E2F9C);
PPC_FUNC_IMPL(__imp__sub_825E2F9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E2FA0"))) PPC_WEAK_FUNC(sub_825E2FA0);
PPC_FUNC_IMPL(__imp__sub_825E2FA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
loc_825E2FA0:
	// li r10,-1
	ctx.r10.s64 = -1;
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
loc_825E2FAC:
	// mfmsr r8
	// mtmsrd r13,1
	// ldarx r9,0,r3
	reserved.u64 = *(uint64_t*)(base + ctx.r3.u32);
	ctx.r9.u64 = __builtin_bswap64(reserved.u64);
	// cmpd cr6,r9,r11
	cr6.compare<int64_t>(ctx.r9.s64, r11.s64, xer);
	// bne cr6,0x825e2fd0
	if (!cr6.eq) goto loc_825E2FD0;
	// stdcx. r10,0,r3
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r3.u32), reserved.s64, __builtin_bswap64(ctx.r10.s64));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x825e2fac
	if (!cr0.eq) goto loc_825E2FAC;
	// b 0x825e2fd8
	goto loc_825E2FD8;
loc_825E2FD0:
	// stdcx. r9,0,r3
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r3.u32), reserved.s64, __builtin_bswap64(ctx.r9.s64));
	cr0.so = xer.so;
	// mtmsrd r8,1
loc_825E2FD8:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpld cr6,r9,r11
	cr6.compare<uint64_t>(ctx.r9.u64, r11.u64, xer);
	// bne cr6,0x825e2fa0
	if (!cr6.eq) goto loc_825E2FA0;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rldicl r11,r11,32,32
	r11.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_825E2FF4"))) PPC_WEAK_FUNC(sub_825E2FF4);
PPC_FUNC_IMPL(__imp__sub_825E2FF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E2FF8"))) PPC_WEAK_FUNC(sub_825E2FF8);
PPC_FUNC_IMPL(__imp__sub_825E2FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x825e3064
	if (!cr6.eq) goto loc_825E3064;
	// lwz r11,11028(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 11028);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825e302c
	if (cr6.eq) goto loc_825E302C;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825E302C:
	// addi r30,r31,11032
	r30.s64 = r31.s64 + 11032;
	// lbz r11,268(r13)
	r11.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r31,11028(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 11028);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// slw r29,r10,r11
	r29.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// bl 0x8314d16c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// andc r11,r11,r29
	r11.u64 = r11.u64 & ~r29.u64;
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8314d15c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// b 0x825e3084
	goto loc_825E3084;
loc_825E3064:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825e3084
	if (!cr6.eq) goto loc_825E3084;
	// lis r11,32712
	r11.s64 = 2143813632;
	// lwz r11,25924(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 25924);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e3084
	if (cr0.eq) goto loc_825E3084;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d1f88
	sub_825D1F88(ctx, base);
loc_825E3084:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825E3088"))) PPC_WEAK_FUNC(sub_825E3088);
PPC_FUNC_IMPL(__imp__sub_825E3088) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825E308C"))) PPC_WEAK_FUNC(sub_825E308C);
PPC_FUNC_IMPL(__imp__sub_825E308C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E3090"))) PPC_WEAK_FUNC(sub_825E3090);
PPC_FUNC_IMPL(__imp__sub_825E3090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r7,r11,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,15320(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15320);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825e3190
	if (cr0.eq) goto loc_825E3190;
	// bne cr6,0x825e30c4
	if (!cr6.eq) goto loc_825E30C4;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,68
	r11.s64 = r11.s64 + 68;
loc_825E30C4:
	// add r10,r11,r6
	ctx.r10.u64 = r11.u64 + ctx.r6.u64;
	// lwz r9,15312(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15312);
	// addi r11,r6,-1
	r11.s64 = ctx.r6.s64 + -1;
	// lwz r5,15324(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15324);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// and r31,r8,r11
	r31.u64 = ctx.r8.u64 & r11.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bgt cr6,0x825e312c
	if (cr6.gt) goto loc_825E312C;
	// lwz r10,13600(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13600);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825e3124
	if (cr6.eq) goto loc_825E3124;
	// lwz r11,13604(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13604);
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x825e311c
	if (cr6.eq) goto loc_825E311C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825e3124
	if (!cr6.eq) goto loc_825E3124;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bge cr6,0x825e3124
	if (!cr6.lt) goto loc_825E3124;
loc_825E311C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825e32b8
	goto loc_825E32B8;
loc_825E3124:
	// stw r4,15320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15320, ctx.r4.u32);
	// b 0x825e3184
	goto loc_825E3184;
loc_825E312C:
	// lwz r9,15328(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15328);
	// lwz r8,13600(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13600);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r31,r9,r11
	r31.u64 = ctx.r9.u64 & r11.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// beq cr6,0x825e3170
	if (cr6.eq) goto loc_825E3170;
	// lwz r11,13604(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13604);
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x825e311c
	if (cr6.eq) goto loc_825E311C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825e3170
	if (!cr6.eq) goto loc_825E3170;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// blt cr6,0x825e311c
	if (cr6.lt) goto loc_825E311C;
loc_825E3170:
	// lwz r11,15332(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15332);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bgt cr6,0x825e311c
	if (cr6.gt) goto loc_825E311C;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r4,15328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15328, ctx.r4.u32);
loc_825E3184:
	// bl 0x825e2cb8
	sub_825E2CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x825e32b8
	goto loc_825E32B8;
loc_825E3190:
	// bne cr6,0x825e319c
	if (!cr6.eq) goto loc_825E319C;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_825E319C:
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// rlwinm r30,r11,0,0,26
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// bne cr6,0x825e31b0
	if (!cr6.eq) goto loc_825E31B0;
	// li r7,56
	ctx.r7.s64 = 56;
loc_825E31B0:
	// lwz r11,15316(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15316);
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// ble cr6,0x825e31c4
	if (!cr6.gt) goto loc_825E31C4;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
loc_825E31C4:
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,15312(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15312);
	// add r31,r8,r30
	r31.u64 = ctx.r8.u64 + r30.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x825e31dc
	if (!cr6.gt) goto loc_825E31DC;
	// mr r31,r11
	r31.u64 = r11.u64;
loc_825E31DC:
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// lwz r10,15308(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15308);
	// lwz r6,15340(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15340);
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// subfc r9,r7,r11
	xer.ca = r11.u32 >= ctx.r7.u32;
	ctx.r9.s64 = r11.s64 - ctx.r7.s64;
	// eqv r5,r7,r11
	ctx.r5.u64 = ~(ctx.r7.u64 ^ r11.u64);
	// lwz r11,15328(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15328);
	// rlwinm r9,r5,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r5,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// ble cr6,0x825e321c
	if (!cr6.gt) goto loc_825E321C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_825E321C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x825e324c
	if (cr6.eq) goto loc_825E324C;
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// lwz r9,15324(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15324);
	// lbz r6,11070(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11070);
	// rlwinm r30,r11,0,0,26
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,15328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15328, ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// ori r11,r6,4
	r11.u64 = ctx.r6.u64 | 4;
	// stw r9,15324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15324, ctx.r9.u32);
	// add r31,r8,r30
	r31.u64 = ctx.r8.u64 + r30.u64;
	// stb r11,11070(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11070, r11.u8);
loc_825E324C:
	// lwz r8,13600(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13600);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825e3298
	if (cr6.eq) goto loc_825E3298;
	// lwz r11,13604(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13604);
	// lwz r10,15324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15324);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x825e327c
	if (cr6.eq) goto loc_825E327C;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x825e3298
	if (!cr6.eq) goto loc_825E3298;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, r31.u32, xer);
	// bge cr6,0x825e3298
	if (!cr6.lt) goto loc_825E3298;
loc_825E327C:
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x825e311c
	if (!cr6.eq) goto loc_825E311C;
	// subf r11,r30,r8
	r11.s64 = ctx.r8.s64 - r30.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x825e311c
	if (cr6.lt) goto loc_825E311C;
loc_825E3298:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,15324(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15324);
	// bl 0x825e2cb8
	sub_825E2CB8(ctx, base);
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_825E32B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825E32BC"))) PPC_WEAK_FUNC(sub_825E32BC);
PPC_FUNC_IMPL(__imp__sub_825E32BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825E32C0"))) PPC_WEAK_FUNC(sub_825E32C0);
PPC_FUNC_IMPL(__imp__sub_825E32C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e3384
	if (cr6.eq) goto loc_825E3384;
	// lwz r11,11024(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11024);
	// lwz r10,11036(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11036);
	// subf r9,r4,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r4.s64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bge cr6,0x825e3384
	if (!cr6.lt) goto loc_825E3384;
	// clrlwi. r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825e3320
	if (!cr0.eq) goto loc_825E3320;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x825e3320
	if (!cr6.eq) goto loc_825E3320;
	// lwz r11,13600(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13600);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e3384
	if (!cr6.eq) goto loc_825E3384;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E3320:
	// lwz r11,11024(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// lwz r10,11036(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - r30.s64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bge cr6,0x825e3384
	if (!cr6.lt) goto loc_825E3384;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d0f50
	sub_825D0F50(ctx, base);
	// b 0x825e3360
	goto loc_825E3360;
loc_825E3350:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d1048
	sub_825D1048(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825e337c
	if (cr0.eq) goto loc_825E337C;
loc_825E3360:
	// lwz r11,11024(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// lwz r10,11036(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - r30.s64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x825e3350
	if (cr6.lt) goto loc_825E3350;
loc_825E337C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d0f80
	sub_825D0F80(ctx, base);
loc_825E3384:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825E3388"))) PPC_WEAK_FUNC(sub_825E3388);
PPC_FUNC_IMPL(__imp__sub_825E3388) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825E338C"))) PPC_WEAK_FUNC(sub_825E338C);
PPC_FUNC_IMPL(__imp__sub_825E338C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E3390"))) PPC_WEAK_FUNC(sub_825E3390);
PPC_FUNC_IMPL(__imp__sub_825E3390) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825e33bc
	if (!cr6.eq) goto loc_825E33BC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2088);
	// b 0x825e33c4
	goto loc_825E33C4;
loc_825E33BC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2092);
loc_825E33C4:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825e32c0
	sub_825E32C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825E33EC"))) PPC_WEAK_FUNC(sub_825E33EC);
PPC_FUNC_IMPL(__imp__sub_825E33EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E33F0"))) PPC_WEAK_FUNC(sub_825E33F0);
PPC_FUNC_IMPL(__imp__sub_825E33F0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825e341c
	if (!cr6.eq) goto loc_825E341C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2088);
	// b 0x825e3424
	goto loc_825E3424;
loc_825E341C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2092);
loc_825E3424:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x825e32c0
	sub_825E32C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825E344C"))) PPC_WEAK_FUNC(sub_825E344C);
PPC_FUNC_IMPL(__imp__sub_825E344C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E3450"))) PPC_WEAK_FUNC(sub_825E3450);
PPC_FUNC_IMPL(__imp__sub_825E3450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825e3488
	if (cr6.eq) goto loc_825E3488;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// rlwinm r11,r10,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addis r11,r11,-16384
	r11.s64 = r11.s64 + -1073741824;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
loc_825E3488:
	// li r11,0
	r11.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
}

__attribute__((alias("__imp__sub_825E3490"))) PPC_WEAK_FUNC(sub_825E3490);
PPC_FUNC_IMPL(__imp__sub_825E3490) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E3494"))) PPC_WEAK_FUNC(sub_825E3494);
PPC_FUNC_IMPL(__imp__sub_825E3494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E3498"))) PPC_WEAK_FUNC(sub_825E3498);
PPC_FUNC_IMPL(__imp__sub_825E3498) {
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
	// rlwinm r10,r5,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFF;
	// lwz r30,12(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r9,r4,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFF;
	// addi r11,r10,512
	r11.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r30,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// rlwinm r7,r11,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// clrlwi r8,r5,3
	ctx.r8.u64 = ctx.r5.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r7,r9,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// lis r11,16384
	r11.s64 = 1073741824;
	// clrlwi r9,r30,3
	ctx.r9.u64 = r30.u32 & 0x1FFFFFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// clrlwi r8,r4,3
	ctx.r8.u64 = ctx.r4.u32 & 0x1FFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r6,r11,r6
	ctx.r6.s64 = ctx.r6.s64 - r11.s64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r9,r5,-4
	ctx.r9.s64 = ctx.r5.s64 + -4;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// subf r29,r11,r8
	r29.s64 = ctx.r8.s64 - r11.s64;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// subf r31,r11,r10
	r31.s64 = ctx.r10.s64 - r11.s64;
	// eieio 
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825f9198
	sub_825F9198(ctx, base);
	// stw r29,0(r30)
	PPC_MM_STORE_U32(r30.u32 + 0, r29.u32);
	// eieio 
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f9198
	sub_825F9198(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825E3534"))) PPC_WEAK_FUNC(sub_825E3534);
PPC_FUNC_IMPL(__imp__sub_825E3534) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825E3538"))) PPC_WEAK_FUNC(sub_825E3538);
PPC_FUNC_IMPL(__imp__sub_825E3538) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,11069(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11069);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e3564
	if (cr0.eq) goto loc_825E3564;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825e360c
	goto loc_825E360C;
loc_825E3564:
	// lwz r3,13920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 13920);
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x825e358c
	if (!cr6.eq) goto loc_825E358C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3090
	sub_825E3090(ctx, base);
	// b 0x825e35a8
	goto loc_825E35A8;
loc_825E358C:
	// lwz r11,152(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825e35a4
	if (cr6.eq) goto loc_825E35A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f4a08
	sub_825F4A08(ctx, base);
	// b 0x825e35a8
	goto loc_825E35A8;
loc_825E35A4:
	// bl 0x825f4d20
	sub_825F4D20(ctx, base);
loc_825E35A8:
	// lwz r11,15336(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 15336);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,15340(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 15340);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,15336(r31)
	PPC_STORE_U32(r31.u32 + 15336, r11.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x825e35f8
	if (!cr6.gt) goto loc_825E35F8;
	// lwz r11,13600(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13600);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e35f8
	if (!cr6.eq) goto loc_825E35F8;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,15328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 15328);
	// lwz r9,15308(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 15308);
	// addi r8,r11,160
	ctx.r8.s64 = r11.s64 + 160;
	// stw r8,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r8.u32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// beq cr6,0x825e35f8
	if (cr6.eq) goto loc_825E35F8;
	// lwz r11,15312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 15312);
	// stw r11,15320(r31)
	PPC_STORE_U32(r31.u32 + 15320, r11.u32);
loc_825E35F8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825e360c
	if (!cr6.eq) goto loc_825E360C;
	// lbz r11,11069(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11069);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stb r11,11069(r31)
	PPC_STORE_U8(r31.u32 + 11069, r11.u8);
loc_825E360C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825E361C"))) PPC_WEAK_FUNC(sub_825E361C);
PPC_FUNC_IMPL(__imp__sub_825E361C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E3620"))) PPC_WEAK_FUNC(sub_825E3620);
PPC_FUNC_IMPL(__imp__sub_825E3620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lbz r11,11069(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11069);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825e3668
	if (cr0.eq) goto loc_825E3668;
	// lwz r10,17136(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17136);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r10,4800
	r11.s64 = ctx.r10.s64 + 4800;
	// ori r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 | 32;
	// addi r8,r11,-160
	ctx.r8.s64 = r11.s64 + -160;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// stw r8,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r8.u32);
	// stb r9,11069(r31)
	PPC_STORE_U8(r31.u32 + 11069, ctx.r9.u8);
	// b 0x825e3784
	goto loc_825E3784;
loc_825E3668:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825e367c
	if (!cr6.eq) goto loc_825E367C;
	// mr r11,r29
	r11.u64 = r29.u64;
	// b 0x825e3684
	goto loc_825E3684;
loc_825E367C:
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_825E3684:
	// lwz r3,13920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 13920);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e36ac
	if (cr6.eq) goto loc_825E36AC;
	// lwz r10,172(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825e36ac
	if (cr6.eq) goto loc_825E36AC;
	// lwz r10,15316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 15316);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x825e36ac
	if (cr6.gt) goto loc_825E36AC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_825E36AC:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// bne 0x825e36d0
	if (!cr0.eq) goto loc_825E36D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3090
	sub_825E3090(ctx, base);
	// b 0x825e36ec
	goto loc_825E36EC;
loc_825E36D0:
	// lwz r11,152(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825e36e8
	if (cr6.eq) goto loc_825E36E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f4a08
	sub_825F4A08(ctx, base);
	// b 0x825e36ec
	goto loc_825E36EC;
loc_825E36E8:
	// bl 0x825f4d20
	sub_825F4D20(ctx, base);
loc_825E36EC:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825e371c
	if (!cr6.eq) goto loc_825E371C;
	// lwz r10,17136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 17136);
	// lbz r9,11069(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 11069);
	// addi r11,r10,4800
	r11.s64 = ctx.r10.s64 + 4800;
	// ori r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 | 32;
	// addi r8,r11,-160
	ctx.r8.s64 = r11.s64 + -160;
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// stw r8,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r8.u32);
	// stb r9,11069(r31)
	PPC_STORE_U8(r31.u32 + 11069, ctx.r9.u8);
	// b 0x825e374c
	goto loc_825E374C;
loc_825E371C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r30,-4
	r11.s64 = r30.s64 + -4;
	// stw r30,15332(r31)
	PPC_STORE_U32(r31.u32 + 15332, r30.u32);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r29,15320(r31)
	PPC_STORE_U32(r31.u32 + 15320, r29.u32);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// stw r29,15336(r31)
	PPC_STORE_U32(r31.u32 + 15336, r29.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,-160
	ctx.r10.s64 = r11.s64 + -160;
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
loc_825E374C:
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// lwz r11,24392(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24392);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825e3780
	if (!cr0.eq) goto loc_825E3780;
	// lwz r4,15344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 15344);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e3780
	if (cr6.eq) goto loc_825E3780;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e32c0
	sub_825E32C0(ctx, base);
	// stw r29,15344(r31)
	PPC_STORE_U32(r31.u32 + 15344, r29.u32);
loc_825E3780:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_825E3784:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825E3788"))) PPC_WEAK_FUNC(sub_825E3788);
PPC_FUNC_IMPL(__imp__sub_825E3788) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825E378C"))) PPC_WEAK_FUNC(sub_825E378C);
PPC_FUNC_IMPL(__imp__sub_825E378C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E3790"))) PPC_WEAK_FUNC(sub_825E3790);
PPC_FUNC_IMPL(__imp__sub_825E3790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f4
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lbz r10,11069(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11069);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// addi r11,r11,-143
	r11.s64 = r11.s64 + -143;
	// lwz r29,15304(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15304);
	// lwz r28,15300(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15300);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r21,r11,27,31,31
	r21.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// beq 0x825e3850
	if (cr0.eq) goto loc_825E3850;
	// lwz r11,21940(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21940);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825e3a58
	if (cr6.eq) goto loc_825E3A58;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x825e3a58
	if (cr6.eq) goto loc_825E3A58;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lis r19,8192
	r19.s64 = 536870912;
	// lis r23,16384
	r23.s64 = 1073741824;
	// lis r20,16640
	r20.s64 = 1090519040;
loc_825E37F4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r19
	cr6.compare<uint32_t>(r11.u32, r19.u32, xer);
	// clrlwi r5,r10,8
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFFFF;
	// subf r4,r23,r11
	ctx.r4.s64 = r11.s64 - r23.s64;
	// blt cr6,0x825e3810
	if (cr6.lt) goto loc_825E3810;
	// subf r4,r20,r11
	ctx.r4.s64 = r11.s64 - r20.s64;
loc_825E3810:
	// lwz r3,21940(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 21940);
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,21940(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 21940);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bne 0x825e37f4
	if (!cr0.eq) goto loc_825E37F4;
	// b 0x825e3a58
	goto loc_825E3A58;
loc_825E3850:
	// lwz r4,11088(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 11088);
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// beq cr6,0x825e386c
	if (cr6.eq) goto loc_825E386C;
	// mulli r11,r25,3
	r11.s64 = r25.s64 * 3;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// b 0x825e3870
	goto loc_825E3870;
loc_825E386C:
	// mulli r5,r25,3
	ctx.r5.s64 = r25.s64 * 3;
loc_825E3870:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825e2d50
	sub_825E2D50(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x825e3a00
	if (cr6.eq) goto loc_825E3A00;
	// lis r19,8192
	r19.s64 = 536870912;
	// lis r22,-31933
	r22.s64 = -2092761088;
	// lis r23,16384
	r23.s64 = 1073741824;
	// lis r20,16640
	r20.s64 = 1090519040;
loc_825E3898:
	// rlwinm r10,r26,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,21940(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 21940);
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r31,4(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r5,r9,8
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFFFF;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// beq cr6,0x825e38f4
	if (cr6.eq) goto loc_825E38F4;
	// lwz r10,-19224(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + -19224);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825e38f4
	if (!cr6.eq) goto loc_825E38F4;
	// cmplw cr6,r31,r19
	cr6.compare<uint32_t>(r31.u32, r19.u32, xer);
	// subf r4,r23,r31
	ctx.r4.s64 = r31.s64 - r23.s64;
	// blt cr6,0x825e38d8
	if (cr6.lt) goto loc_825E38D8;
	// subf r4,r20,r31
	ctx.r4.s64 = r31.s64 - r20.s64;
loc_825E38D8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825E38F4:
	// lwz r10,23768(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 23768);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825e395c
	if (cr6.eq) goto loc_825E395C;
	// cmplw cr6,r31,r19
	cr6.compare<uint32_t>(r31.u32, r19.u32, xer);
	// subf r30,r23,r31
	r30.s64 = r31.s64 - r23.s64;
	// blt cr6,0x825e3910
	if (cr6.lt) goto loc_825E3910;
	// subf r30,r20,r31
	r30.s64 = r31.s64 - r20.s64;
loc_825E3910:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// subfic r11,r21,0
	xer.ca = r21.u32 <= 0;
	r11.s64 = 0 - r21.s64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// and r11,r11,r23
	r11.u64 = r11.u64 & r23.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r6,r11,1
	ctx.r6.u64 = r11.u64 | 1;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x825e395c
	if (cr6.eq) goto loc_825E395C;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r31,r9,r10
	r31.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_825E395C:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825e39f4
	if (cr6.eq) goto loc_825E39F4;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// beq cr6,0x825e39a0
	if (cr6.eq) goto loc_825E39A0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x825e3994
	if (!cr6.eq) goto loc_825E3994;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stwx r10,r11,r28
	PPC_STORE_U32(r11.u32 + r28.u32, ctx.r10.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// and r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_825E3994:
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// ori r10,r10,14080
	ctx.r10.u64 = ctx.r10.u64 | 14080;
	// b 0x825e39a8
	goto loc_825E39A8;
loc_825E39A0:
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// ori r10,r10,16128
	ctx.r10.u64 = ctx.r10.u64 | 16128;
loc_825E39A8:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r28
	PPC_STORE_U32(r11.u32 + r28.u32, ctx.r10.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// and r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stwx r31,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + r28.u32, r31.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// and r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stwx r10,r9,r28
	PPC_STORE_U32(ctx.r9.u32 + r28.u32, ctx.r10.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// and r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_825E39F4:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(r26.u32, r25.u32, xer);
	// blt cr6,0x825e3898
	if (cr6.lt) goto loc_825E3898;
loc_825E3A00:
	// stw r11,11088(r27)
	PPC_STORE_U32(r27.u32 + 11088, r11.u32);
	// sync 
	// lis r10,32712
	ctx.r10.s64 = 2143813632;
	// stw r11,1812(r10)
	PPC_MM_STORE_U32(ctx.r10.u32 + 1812, r11.u32);
	// eieio 
	// sync 
	// lwz r3,21940(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 21940);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e3a34
	if (cr6.eq) goto loc_825E3A34;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825E3A34:
	// lwz r11,23768(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 23768);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825e3a58
	if (cr6.eq) goto loc_825E3A58;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825E3A58:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_825E3A5C"))) PPC_WEAK_FUNC(sub_825E3A5C);
PPC_FUNC_IMPL(__imp__sub_825E3A5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_825E3A60"))) PPC_WEAK_FUNC(sub_825E3A60);
PPC_FUNC_IMPL(__imp__sub_825E3A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x828e9404
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	r11.s64 = -1;
	// ld r10,12248(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 12248);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// addi r28,r3,12248
	r28.s64 = ctx.r3.s64 + 12248;
	// li r27,0
	r27.s64 = 0;
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, r11.u64, xer);
	// li r30,1
	r30.s64 = 1;
	// bne cr6,0x825e3a9c
	if (!cr6.eq) goto loc_825E3A9C;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_825E3A9C:
	// lbz r11,11070(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11070);
	// lwz r29,12256(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12256);
	// rlwinm r26,r11,30,31,31
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x825e3b10
	if (cr6.eq) goto loc_825E3B10;
	// li r25,6
	r25.s64 = 6;
loc_825E3AB4:
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3538
	sub_825E3538(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x825e3b20
	if (cr0.eq) goto loc_825E3B20;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x825e3b28
	if (cr6.eq) goto loc_825E3B28;
	// li r11,1480
	r11.s64 = 1480;
	// stw r27,12256(r31)
	PPC_STORE_U32(r31.u32 + 12256, r27.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r7.u32 = ea;
	// li r11,3584
	r11.s64 = 3584;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,3648
	ctx.r8.s64 = 3648;
	// li r5,1
	ctx.r5.s64 = 1;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r7.u32 = ea;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// stwu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
	// b 0x825e3c4c
	goto loc_825E3C4C;
loc_825E3B10:
	// add r11,r26,r30
	r11.u64 = r26.u64 + r30.u64;
	// mulli r25,r11,11
	r25.s64 = r11.s64 * 11;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x825e3ab4
	if (!cr6.eq) goto loc_825E3AB4;
loc_825E3B20:
	// stw r27,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r27.u32);
	// b 0x825e3c68
	goto loc_825E3C68;
loc_825E3B28:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x825e3bb0
	if (cr6.eq) goto loc_825E3BB0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825e2fa0
	sub_825E2FA0(ctx, base);
	// li r11,2609
	r11.s64 = 2609;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r7.u32 = ea;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,-16380
	ctx.r8.s64 = -1073479680;
	// ori r11,r9,2607
	r11.u64 = ctx.r9.u64 | 2607;
	// ori r9,r8,15360
	ctx.r9.u64 = ctx.r8.u64 | 15360;
	// li r8,3
	ctx.r8.s64 = 3;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// li r5,2609
	ctx.r5.s64 = 2609;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r7.u32 = ea;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r30,r30,0,0,19
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r7.u32 = ea;
	// stwu r30,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, r30.u32);
	ctx.r7.u32 = ea;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// stwu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
	// stwu r27,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r7.u32 = ea;
	// stwu r3,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r7.u32 = ea;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
loc_825E3BB0:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x825e3c4c
	if (cr6.eq) goto loc_825E3C4C;
	// li r11,2609
	r11.s64 = 2609;
	// lwz r9,15312(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 15312);
	// lwz r5,15308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 15308);
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r7.u32 = ea;
	// rlwinm r11,r9,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// rlwinm r10,r5,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// addi r4,r10,512
	ctx.r4.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// clrlwi r11,r9,3
	r11.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// clrlwi r9,r5,3
	ctx.r9.u64 = ctx.r5.u32 & 0x1FFFFFFF;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r8,r4,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1000;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// ori r5,r3,2607
	ctx.r5.u64 = ctx.r3.u64 | 2607;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// stwu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// lis r9,-16380
	ctx.r9.s64 = -1073479680;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// ori r9,r9,15360
	ctx.r9.u64 = ctx.r9.u64 | 15360;
	// li r8,2609
	ctx.r8.s64 = 2609;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r7.u32 = ea;
	// li r11,3
	r11.s64 = 3;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// li r4,8
	ctx.r4.s64 = 8;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r7.u32 = ea;
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// stwu r27,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r7.u32 = ea;
	// stwu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
	// stwu r4,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r7.u32 = ea;
loc_825E3C4C:
	// rlwinm r11,r6,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r6,3
	ctx.r10.u64 = ctx.r6.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// stw r25,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r25.u32);
loc_825E3C68:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825E3C6C"))) PPC_WEAK_FUNC(sub_825E3C6C);
PPC_FUNC_IMPL(__imp__sub_825E3C6C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_825E3C70"))) PPC_WEAK_FUNC(sub_825E3C70);
PPC_FUNC_IMPL(__imp__sub_825E3C70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r10,15324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15324);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// lwz r6,11036(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11036);
	// clrlwi r5,r10,30
	ctx.r5.u64 = ctx.r10.u32 & 0x3;
	// ori r3,r8,15104
	ctx.r3.u64 = ctx.r8.u64 | 15104;
	// li r7,32767
	ctx.r7.s64 = 32767;
	// lwz r8,11024(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 11024);
	// or r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 | ctx.r9.u64;
	// stw r9,13608(r11)
	PPC_STORE_U32(r11.u32 + 13608, ctx.r9.u32);
	// stw r10,13612(r11)
	PPC_STORE_U32(r11.u32 + 13612, ctx.r10.u32);
	// stwu r3,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r4.u32 = ea;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// lbz r9,11072(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 11072);
	// rlwinm. r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825e3cf4
	if (cr0.eq) goto loc_825E3CF4;
	// li r9,1480
	ctx.r9.s64 = 1480;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// ld r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 32);
	// clrldi r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFFFFFFFFFF;
	// std r9,32(r11)
	PPC_STORE_U64(r11.u32 + 32, ctx.r9.u64);
	// lbz r7,11072(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 11072);
	// lbz r9,11071(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 11071);
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// clrlwi r7,r7,25
	ctx.r7.u64 = ctx.r7.u32 & 0x7F;
	// stb r9,11071(r11)
	PPC_STORE_U8(r11.u32 + 11071, ctx.r9.u8);
	// stb r7,11072(r11)
	PPC_STORE_U8(r11.u32 + 11072, ctx.r7.u8);
	// b 0x825e3d0c
	goto loc_825E3D0C;
loc_825E3CF4:
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// lis r7,30583
	ctx.r7.s64 = 2004287488;
	// ori r9,r9,4096
	ctx.r9.u64 = ctx.r9.u64 | 4096;
	// ori r7,r7,30583
	ctx.r7.u64 = ctx.r7.u64 | 30583;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
loc_825E3D0C:
	// lis r7,-16382
	ctx.r7.s64 = -1073610752;
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// ori r4,r7,22528
	ctx.r4.u64 = ctx.r7.u64 | 22528;
	// rlwinm r7,r9,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// stwu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r10.u32 = ea;
	// clrlwi r9,r9,3
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// rlwinm r10,r7,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// li r4,3
	ctx.r4.s64 = 3;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lis r7,-16382
	ctx.r7.s64 = -1073610752;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r8,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFF;
	// ori r7,r7,22528
	ctx.r7.u64 = ctx.r7.u64 | 22528;
	// addi r31,r10,512
	r31.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r8,3
	ctx.r10.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r31,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x1000;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// lwz r10,21940(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 21940);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825e3da0
	if (!cr6.eq) goto loc_825E3DA0;
	// lbz r10,11069(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 11069);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825e3da0
	if (cr0.eq) goto loc_825E3DA0;
	// lwz r10,11024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 11024);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r10,11024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 11024);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_825E3DA0:
	// addi r10,r6,2
	ctx.r10.s64 = ctx.r6.s64 + 2;
	// stw r10,11036(r11)
	PPC_STORE_U32(r11.u32 + 11036, ctx.r10.u32);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_825E3DAC"))) PPC_WEAK_FUNC(sub_825E3DAC);
PPC_FUNC_IMPL(__imp__sub_825E3DAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E3DB0"))) PPC_WEAK_FUNC(sub_825E3DB0);
PPC_FUNC_IMPL(__imp__sub_825E3DB0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// rlwinm r29,r5,8,26,31
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0x3F;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825e3dec
	if (!cr6.eq) goto loc_825E3DEC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2088);
	// b 0x825e3df4
	goto loc_825E3DF4;
loc_825E3DEC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2092);
loc_825E3DF4:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r10,r26,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x6;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r9,11028(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 11028);
	// bne 0x825e3e08
	if (!cr0.eq) goto loc_825E3E08;
	// ori r26,r26,6
	r26.u64 = r26.u64 | 6;
loc_825E3E08:
	// lis r11,-16380
	r11.s64 = -1073479680;
	// rlwinm. r10,r26,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r7,-1
	ctx.r7.s64 = -1;
	// ori r11,r11,15360
	r11.u64 = r11.u64 | 15360;
	// beq 0x825e3fc4
	if (cr0.eq) goto loc_825E3FC4;
	// clrlwi. r10,r26,31
	ctx.r10.u64 = r26.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825e3e30
	if (cr0.eq) goto loc_825E3E30;
	// lbz r10,11072(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825e3e64
	if (cr0.eq) goto loc_825E3E64;
loc_825E3E30:
	// li r10,1480
	ctx.r10.s64 = 1480;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// stwu r10,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r30.u32 = ea;
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// clrldi r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 & 0x7FFFFFFFFFFFFFFF;
	// std r10,32(r31)
	PPC_STORE_U64(r31.u32 + 32, ctx.r10.u64);
	// lbz r8,11072(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// lbz r10,11071(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11071);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// clrlwi r8,r8,25
	ctx.r8.u64 = ctx.r8.u32 & 0x7F;
	// stb r10,11071(r31)
	PPC_STORE_U8(r31.u32 + 11071, ctx.r10.u8);
	// stb r8,11072(r31)
	PPC_STORE_U8(r31.u32 + 11072, ctx.r8.u8);
loc_825E3E64:
	// rlwinm. r6,r26,0,24,24
	ctx.r6.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x825e3e80
	if (cr0.eq) goto loc_825E3E80;
	// li r10,1404
	ctx.r10.s64 = 1404;
	// stwu r10,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r30.u32 = ea;
	// stwu r27,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r27.u32);
	r30.u32 = ea;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// b 0x825e3e98
	goto loc_825E3E98;
loc_825E3E80:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,1404
	ctx.r10.u64 = ctx.r10.u64 | 1404;
	// stwu r10,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r30.u32 = ea;
	// stwu r27,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r27.u32);
	r30.u32 = ea;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stwu r28,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r10.u32 = ea;
loc_825E3E98:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x825e3ea4
	if (!cr6.eq) goto loc_825E3EA4;
	// li r29,4
	r29.s64 = 4;
loc_825E3EA4:
	// li r5,1400
	ctx.r5.s64 = 1400;
	// rlwinm r8,r9,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// clrlwi r10,r9,3
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwu r29,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, r29.u32);
	ctx.r4.u32 = ea;
	// li r8,256
	ctx.r8.s64 = 256;
	// lwz r30,13092(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 13092);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// or r30,r30,r11
	r30.u64 = r30.u64 | r11.u64;
	// stwu r30,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, r30.u32);
	ctx.r4.u32 = ea;
	// stwu r5,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r4.u32 = ea;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// stwu r29,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, r29.u32);
	ctx.r4.u32 = ea;
	// stwu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r4.u32 = ea;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bne cr6,0x825e3f54
	if (!cr6.eq) goto loc_825E3F54;
	// lwz r8,13092(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 13092);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r10,r9,20
	ctx.r10.s64 = ctx.r9.s64 + 20;
	// or r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 | r11.u64;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r5,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r6.u32 = ea;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// li r4,19
	ctx.r4.s64 = 19;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwu r4,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r6.u32 = ea;
	// li r8,256
	ctx.r8.s64 = 256;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stwu r10,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r6.u32 = ea;
	// stwu r28,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r6.u32 = ea;
	// stwu r7,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r6.u32 = ea;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
loc_825E3F54:
	// lwz r6,13092(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 13092);
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// li r5,19
	ctx.r5.s64 = 19;
	// or r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 | r11.u64;
	// rlwinm r6,r8,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFF;
	// stwu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r10.u32 = ea;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// addi r6,r6,512
	ctx.r6.s64 = ctx.r6.s64 + 512;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// clrlwi r10,r8,3
	ctx.r10.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// rlwinm r8,r6,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	// li r6,256
	ctx.r6.s64 = 256;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// li r8,1118
	ctx.r8.s64 = 1118;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// lwz r10,13092(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13092);
	// oris r10,r10,49152
	ctx.r10.u64 = ctx.r10.u64 | 3221225472;
	// ori r10,r10,21504
	ctx.r10.u64 = ctx.r10.u64 | 21504;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r29.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stwu r29,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r29.u32);
	r30.u32 = ea;
loc_825E3FC4:
	// rlwinm. r10,r26,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825e4024
	if (cr0.eq) goto loc_825E4024;
	// lwz r10,13092(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13092);
	// li r8,19
	ctx.r8.s64 = 19;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// rlwinm r11,r9,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// stwu r10,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r30.u32 = ea;
	// addi r6,r11,512
	ctx.r6.s64 = r11.s64 + 512;
	// clrlwi r11,r9,3
	r11.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// rlwinm r10,r6,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	// li r9,256
	ctx.r9.s64 = 256;
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// li r8,1404
	ctx.r8.s64 = 1404;
	// lis r6,2989
	ctx.r6.s64 = 195887104;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r11.u32);
	r30.u32 = ea;
	// ori r6,r6,61453
	ctx.r6.u64 = ctx.r6.u64 | 61453;
	// stwu r10,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r30.u32 = ea;
	// stwu r7,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r30.u32 = ea;
	// stwu r9,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r30.u32 = ea;
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// stwu r6,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r30.u32 = ea;
loc_825E4024:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825E402C"))) PPC_WEAK_FUNC(sub_825E402C);
PPC_FUNC_IMPL(__imp__sub_825E402C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825E4030"))) PPC_WEAK_FUNC(sub_825E4030);
PPC_FUNC_IMPL(__imp__sub_825E4030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r29,16384
	r29.s64 = 1073741824;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825e4070
	if (cr6.eq) goto loc_825E4070;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r9,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r9,3
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - r29.s64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_825E4070:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// rlwinm r4,r11,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x825e3538
	sub_825E3538(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x825e40a0
	if (!cr0.eq) goto loc_825E40A0;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r31,17136(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 17136);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x825e4118
	goto loc_825E4118;
loc_825E40A0:
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825e40ec
	if (cr6.eq) goto loc_825E40EC;
	// rlwinm r10,r31,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r31,3
	ctx.r9.u64 = r31.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - r29.s64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x825e40f0
	goto loc_825E40F0;
loc_825E40EC:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
loc_825E40F0:
	// rlwinm r10,r31,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 12) & 0xFFF;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// clrlwi r9,r31,3
	ctx.r9.u64 = r31.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r3,r29,r10
	ctx.r3.s64 = ctx.r10.s64 - r29.s64;
	// add r4,r11,r3
	ctx.r4.u64 = r11.u64 + ctx.r3.u64;
	// bl 0x825f9198
	sub_825F9198(ctx, base);
loc_825E4118:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825E413C"))) PPC_WEAK_FUNC(sub_825E413C);
PPC_FUNC_IMPL(__imp__sub_825E413C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825E4140"))) PPC_WEAK_FUNC(sub_825E4140);
PPC_FUNC_IMPL(__imp__sub_825E4140) {
	PPC_FUNC_PROLOGUE();
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
	// addi r11,r6,-1
	r11.s64 = ctx.r6.s64 + -1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mullw r31,r5,r6
	r31.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// not r26,r11
	r26.u64 = ~r11.u64;
loc_825E4160:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// and r28,r11,r26
	r28.u64 = r11.u64 & r26.u64;
	// cmplw cr6,r28,r31
	cr6.compare<uint32_t>(r28.u32, r31.u32, xer);
	// ble cr6,0x825e4180
	if (!cr6.gt) goto loc_825E4180;
	// mr r28,r31
	r28.u64 = r31.u64;
loc_825E4180:
	// rlwinm r29,r28,2,0,29
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// subf. r31,r28,r31
	r31.s64 = r31.s64 - r28.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// add r27,r29,r27
	r27.u64 = r29.u64 + r27.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// beq 0x825e41b4
	if (cr0.eq) goto loc_825E41B4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e4030
	sub_825E4030(ctx, base);
	// b 0x825e4160
	goto loc_825E4160;
loc_825E41B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825E41B8"))) PPC_WEAK_FUNC(sub_825E41B8);
PPC_FUNC_IMPL(__imp__sub_825E41B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825E41BC"))) PPC_WEAK_FUNC(sub_825E41BC);
PPC_FUNC_IMPL(__imp__sub_825E41BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E41C0"))) PPC_WEAK_FUNC(sub_825E41C0);
PPC_FUNC_IMPL(__imp__sub_825E41C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,13600(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13600);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825e422c
	if (cr6.eq) goto loc_825E422C;
	// subfic r11,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	r11.s64 = 0 - ctx.r9.s64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r11,r11,0,28,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xE;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-127
	r11.s64 = r11.s64 + -127;
	// addi r3,r3,13760
	ctx.r3.s64 = ctx.r3.s64 + 13760;
	// rlwimi r30,r11,24,0,7
	r30.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF000000) | (r30.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x825e4140
	sub_825E4140(ctx, base);
	// b 0x825e4390
	goto loc_825E4390;
loc_825E422C:
	// lwz r11,11152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11152);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825e42e0
	if (cr6.eq) goto loc_825E42E0;
	// addi r24,r31,11156
	r24.s64 = r31.s64 + 11156;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8314d0ec
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,11152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11152);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825e42a0
	if (cr6.eq) goto loc_825E42A0;
	// lwz r11,11152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11152);
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// lis r11,-28928
	r11.s64 = -1895825408;
	// bne cr6,0x825e4268
	if (!cr6.eq) goto loc_825E4268;
	// lis r11,-32512
	r11.s64 = -2130706432;
loc_825E4268:
	// or r11,r11,r30
	r11.u64 = r11.u64 | r30.u64;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r27,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r27.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r10,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r10.u32);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x825e3498
	sub_825E3498(ctx, base);
	// lwz r11,11152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11152);
	// li r28,1
	r28.s64 = 1;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// stw r11,11152(r31)
	PPC_STORE_U32(r31.u32 + 11152, r11.u32);
loc_825E42A0:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8314d0cc
	__imp__KfReleaseSpinLock(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x825e42e0
	if (cr6.eq) goto loc_825E42E0;
	// lbz r11,11072(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e4390
	if (cr0.eq) goto loc_825E4390;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,24460
	ctx.r3.s64 = r31.s64 + 24460;
	// bl 0x8314d0dc
	__imp__KeSetEvent(ctx, base);
	// lbz r11,11072(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// andi. r11,r11,247
	r11.u64 = r11.u64 & 247;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,11072(r31)
	PPC_STORE_U8(r31.u32 + 11072, r11.u8);
	// b 0x825e4390
	goto loc_825E4390;
loc_825E42E0:
	// lwz r11,24392(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24392);
	// lwz r10,21940(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 21940);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x1;
	// bne cr6,0x825e4308
	if (!cr6.eq) goto loc_825E4308;
	// lwz r11,23768(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 23768);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x825e430c
	if (cr6.eq) goto loc_825E430C;
loc_825E4308:
	// li r11,1
	r11.s64 = 1;
loc_825E430C:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825e4354
	if (cr6.eq) goto loc_825E4354;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// beq cr6,0x825e4354
	if (cr6.eq) goto loc_825E4354;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825e4354
	if (cr6.eq) goto loc_825E4354;
	// lwz r11,11152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11152);
	// lis r7,-28928
	ctx.r7.s64 = -1895825408;
	// lwz r11,11152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11152);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,11152(r31)
	PPC_STORE_U32(r31.u32 + 11152, r11.u32);
	// bl 0x825fa8d0
	sub_825FA8D0(ctx, base);
	// b 0x825e4390
	goto loc_825E4390;
loc_825E4354:
	// subfic r10,r23,0
	xer.ca = r23.u32 <= 0;
	ctx.r10.s64 = 0 - r23.s64;
	// lwz r11,11152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11152);
	// lwz r11,11152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11152);
	// li r5,1
	ctx.r5.s64 = 1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// add r9,r11,r26
	ctx.r9.u64 = r11.u64 + r26.u64;
	// rlwinm r11,r10,0,28,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE;
	// stw r9,11152(r31)
	PPC_STORE_U32(r31.u32 + 11152, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-127
	r11.s64 = r11.s64 + -127;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwimi r30,r11,24,0,7
	r30.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF000000) | (r30.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x825e3790
	sub_825E3790(ctx, base);
loc_825E4390:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825E4398"))) PPC_WEAK_FUNC(sub_825E4398);
PPC_FUNC_IMPL(__imp__sub_825E4398) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_825E439C"))) PPC_WEAK_FUNC(sub_825E439C);
PPC_FUNC_IMPL(__imp__sub_825E439C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E43A0"))) PPC_WEAK_FUNC(sub_825E43A0);
PPC_FUNC_IMPL(__imp__sub_825E43A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_825E43BC"))) PPC_WEAK_FUNC(sub_825E43BC);
PPC_FUNC_IMPL(__imp__sub_825E43BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x825e4030
	sub_825E4030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E43C0"))) PPC_WEAK_FUNC(sub_825E43C0);
PPC_FUNC_IMPL(__imp__sub_825E43C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lbz r10,11069(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11069);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r30,15332(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15332);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r28,r11,4
	r28.s64 = r11.s64 + 4;
	// bne 0x825e4504
	if (!cr0.eq) goto loc_825E4504;
	// lbz r11,11068(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11068);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e445c
	if (cr0.eq) goto loc_825E445C;
	// lwz r11,13920(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13920);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825e4504
	if (cr6.eq) goto loc_825E4504;
	// lwz r11,152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e4504
	if (!cr6.eq) goto loc_825E4504;
	// subf r11,r30,r28
	r11.s64 = r28.s64 - r30.s64;
	// srawi. r29,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r29.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x825e4504
	if (cr0.eq) goto loc_825E4504;
	// lwz r11,13944(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13944);
	// lwz r3,13940(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13940);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x825e4430
	if (cr6.lt) goto loc_825E4430;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f4c70
	sub_825F4C70(ctx, base);
loc_825E4430:
	// rlwinm r11,r30,12,20,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// oris r9,r29,33024
	ctx.r9.u64 = r29.u64 | 2164260864;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r8,13940(r31)
	PPC_STORE_U32(r31.u32 + 13940, ctx.r8.u32);
	// b 0x825e4504
	goto loc_825E4504;
loc_825E445C:
	// lwz r11,13600(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13600);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825e44c0
	if (cr6.eq) goto loc_825E44C0;
	// rlwinm r11,r30,12,20,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// subf r9,r30,r28
	ctx.r9.s64 = r28.s64 - r30.s64;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// srawi. r30,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	r30.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
	// beq 0x825e4504
	if (cr0.eq) goto loc_825E4504;
	// lwz r11,13772(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13772);
	// addi r3,r31,13760
	ctx.r3.s64 = r31.s64 + 13760;
	// lwz r10,13776(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13776);
	// addi r9,r11,8
	ctx.r9.s64 = r11.s64 + 8;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x825e44a8
	if (!cr6.gt) goto loc_825E44A8;
	// bl 0x825e4030
	sub_825E4030(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825E44A8:
	// oris r10,r30,33024
	ctx.r10.u64 = r30.u64 | 2164260864;
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// addi r9,r11,8
	ctx.r9.s64 = r11.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,13772(r31)
	PPC_STORE_U32(r31.u32 + 13772, ctx.r9.u32);
	// b 0x825e4504
	goto loc_825E4504;
loc_825E44C0:
	// addi r4,r28,-4
	ctx.r4.s64 = r28.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3c70
	sub_825E3C70(ctx, base);
	// rlwinm r11,r30,12,20,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// subf r6,r30,r4
	ctx.r6.s64 = ctx.r4.s64 - r30.s64;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// addi r8,r31,13760
	ctx.r8.s64 = r31.s64 + 13760;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// srawi r6,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e41c0
	sub_825E41C0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_825E4504:
	// addi r11,r28,31
	r11.s64 = r28.s64 + 31;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// rlwinm r9,r11,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x825e4530
	if (!cr6.gt) goto loc_825E4530;
	// addi r11,r28,-4
	r11.s64 = r28.s64 + -4;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3620
	sub_825E3620(ctx, base);
	// b 0x825e4540
	goto loc_825E4540;
loc_825E4530:
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r10,r11,-4
	ctx.r10.s64 = r11.s64 + -4;
	// stw r11,15332(r31)
	PPC_STORE_U32(r31.u32 + 15332, r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
loc_825E4540:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825E4544"))) PPC_WEAK_FUNC(sub_825E4544);
PPC_FUNC_IMPL(__imp__sub_825E4544) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825E4548"))) PPC_WEAK_FUNC(sub_825E4548);
PPC_FUNC_IMPL(__imp__sub_825E4548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,13600(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13600);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825e458c
	if (cr6.eq) goto loc_825E458C;
	// addi r3,r3,13760
	ctx.r3.s64 = ctx.r3.s64 + 13760;
	// bl 0x825e4140
	sub_825E4140(ctx, base);
loc_825E4580:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e9448
	return;
loc_825E458C:
	// lwz r11,11152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11152);
	// li r24,0
	r24.s64 = 0;
	// mr r22,r24
	r22.u64 = r24.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825e4654
	if (cr6.eq) goto loc_825E4654;
	// mullw r29,r26,r25
	r29.s64 = int64_t(r26.s32) * int64_t(r25.s32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r29,2
	ctx.r4.s64 = r29.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3538
	sub_825E3538(ctx, base);
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// add r11,r29,r30
	r11.u64 = r29.u64 + r30.u64;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// addi r28,r31,11156
	r28.s64 = r31.s64 + 11156;
	// addi r29,r11,4
	r29.s64 = r11.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bl 0x8314d0ec
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,11152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11152);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825e460c
	if (cr6.eq) goto loc_825E460C;
	// addi r3,r31,13760
	ctx.r3.s64 = r31.s64 + 13760;
	// addi r5,r29,4
	ctx.r5.s64 = r29.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825e3498
	sub_825E3498(ctx, base);
	// li r22,1
	r22.s64 = 1;
loc_825E460C:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8314d0cc
	__imp__KfReleaseSpinLock(ctx, base);
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// beq cr6,0x825e4654
	if (cr6.eq) goto loc_825E4654;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// beq cr6,0x825e4580
	if (cr6.eq) goto loc_825E4580;
	// lbz r11,11072(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e4580
	if (cr0.eq) goto loc_825E4580;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,24460
	ctx.r3.s64 = r31.s64 + 24460;
	// bl 0x8314d0dc
	__imp__KeSetEvent(ctx, base);
	// lbz r11,11072(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// andi. r11,r11,247
	r11.u64 = r11.u64 & 247;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,11072(r31)
	PPC_STORE_U8(r31.u32 + 11072, r11.u8);
	// b 0x825e4580
	goto loc_825E4580;
loc_825E4654:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// beq cr6,0x825e46f4
	if (cr6.eq) goto loc_825E46F4;
	// li r11,128
	r11.s64 = 128;
	// stw r31,13780(r31)
	PPC_STORE_U32(r31.u32 + 13780, r31.u32);
	// stw r24,13764(r31)
	PPC_STORE_U32(r31.u32 + 13764, r24.u32);
	// addi r30,r31,13760
	r30.s64 = r31.s64 + 13760;
	// stw r11,13768(r31)
	PPC_STORE_U32(r31.u32 + 13768, r11.u32);
	// stw r24,13772(r31)
	PPC_STORE_U32(r31.u32 + 13772, r24.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r24,13776(r31)
	PPC_STORE_U32(r31.u32 + 13776, r24.u32);
	// stw r24,13760(r31)
	PPC_STORE_U32(r31.u32 + 13760, r24.u32);
	// bl 0x825e4030
	sub_825E4030(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x825e4140
	sub_825E4140(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e3450
	sub_825E3450(ctx, base);
	// lwz r11,11152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11152);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,11152(r31)
	PPC_STORE_U32(r31.u32 + 11152, r11.u32);
	// lwz r11,13760(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13760);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e46c0
	if (!cr6.eq) goto loc_825E46C0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// b 0x825e46d8
	goto loc_825E46D8;
loc_825E46C0:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addis r4,r11,-16384
	ctx.r4.s64 = r11.s64 + -1073741824;
loc_825E46D8:
	// lwz r11,11464(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11464);
	// li r5,0
	ctx.r5.s64 = 0;
	// mulli r11,r11,108
	r11.s64 = r11.s64 * 108;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,11608
	ctx.r3.s64 = r11.s64 + 11608;
	// bl 0x8314d17c
	__imp__KeInsertQueueDpc(ctx, base);
	// b 0x825e4580
	goto loc_825E4580;
loc_825E46F4:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_825E46F8"))) PPC_WEAK_FUNC(sub_825E46F8);
PPC_FUNC_IMPL(__imp__sub_825E46F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825e4584
	// ERROR 825E4584
	return;
}

__attribute__((alias("__imp__sub_825E46FC"))) PPC_WEAK_FUNC(sub_825E46FC);
PPC_FUNC_IMPL(__imp__sub_825E46FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E4700"))) PPC_WEAK_FUNC(sub_825E4700);
PPC_FUNC_IMPL(__imp__sub_825E4700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x825e4548
	sub_825E4548(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x825e4740
	if (!cr0.eq) goto loc_825E4740;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3790
	sub_825E3790(ctx, base);
loc_825E4740:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825E4744"))) PPC_WEAK_FUNC(sub_825E4744);
PPC_FUNC_IMPL(__imp__sub_825E4744) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825E4748"))) PPC_WEAK_FUNC(sub_825E4748);
PPC_FUNC_IMPL(__imp__sub_825E4748) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,11024(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11024);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825e4770
	if (cr6.eq) goto loc_825E4770;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_825E4770:
	// lwz r11,13600(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13600);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e47d8
	if (!cr6.eq) goto loc_825E47D8;
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825e47d8
	if (!cr0.eq) goto loc_825E47D8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3a60
	sub_825E3A60(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825e47d8
	if (cr6.eq) goto loc_825E47D8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3538
	sub_825E3538(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x825e47d8
	if (cr0.eq) goto loc_825E47D8;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r31,13760
	ctx.r8.s64 = r31.s64 + 13760;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e41c0
	sub_825E41C0(ctx, base);
loc_825E47D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e43c0
	sub_825E43C0(ctx, base);
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825e4830
	if (!cr0.eq) goto loc_825E4830;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,-19228(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19228);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825e4830
	if (cr6.eq) goto loc_825E4830;
	// lbz r11,11069(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11069);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825e4830
	if (!cr0.eq) goto loc_825E4830;
	// lwz r11,11036(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-2
	ctx.r4.s64 = r11.s64 + -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e32c0
	sub_825E32C0(ctx, base);
	// lbz r11,11069(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11069);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stb r11,11069(r31)
	PPC_STORE_U8(r31.u32 + 11069, r11.u8);
loc_825E4830:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
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

__attribute__((alias("__imp__sub_825E4848"))) PPC_WEAK_FUNC(sub_825E4848);
PPC_FUNC_IMPL(__imp__sub_825E4848) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E484C"))) PPC_WEAK_FUNC(sub_825E484C);
PPC_FUNC_IMPL(__imp__sub_825E484C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E4850"))) PPC_WEAK_FUNC(sub_825E4850);
PPC_FUNC_IMPL(__imp__sub_825E4850) {
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
	// lwz r31,11036(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11036);
	// stw r31,11056(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11056, r31.u32);
	// bl 0x825e4748
	sub_825E4748(ctx, base);
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

__attribute__((alias("__imp__sub_825E4880"))) PPC_WEAK_FUNC(sub_825E4880);
PPC_FUNC_IMPL(__imp__sub_825E4880) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E4884"))) PPC_WEAK_FUNC(sub_825E4884);
PPC_FUNC_IMPL(__imp__sub_825E4884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E4888"))) PPC_WEAK_FUNC(sub_825E4888);
PPC_FUNC_IMPL(__imp__sub_825E4888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e4900
	if (cr6.eq) goto loc_825E4900;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825e48c0
	if (!cr6.eq) goto loc_825E48C0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2088);
	// b 0x825e48c8
	goto loc_825E48C8;
loc_825E48C0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2092);
loc_825E48C8:
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,11036(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x825e48e0
	if (!cr6.eq) goto loc_825E48E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E48E0:
	// lwz r11,11024(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// lwz r10,11036(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - r30.s64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// subfc r11,r11,r9
	xer.ca = ctx.r9.u32 >= r11.u32;
	r11.s64 = ctx.r9.s64 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
loc_825E4900:
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

__attribute__((alias("__imp__sub_825E4914"))) PPC_WEAK_FUNC(sub_825E4914);
PPC_FUNC_IMPL(__imp__sub_825E4914) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E4918"))) PPC_WEAK_FUNC(sub_825E4918);
PPC_FUNC_IMPL(__imp__sub_825E4918) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
}

__attribute__((alias("__imp__sub_825E491C"))) PPC_WEAK_FUNC(sub_825E491C);
PPC_FUNC_IMPL(__imp__sub_825E491C) {
	PPC_FUNC_PROLOGUE();
	// b 0x825e4888
	sub_825E4888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E4920"))) PPC_WEAK_FUNC(sub_825E4920);
PPC_FUNC_IMPL(__imp__sub_825E4920) {
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
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825e494c
	if (!cr6.gt) goto loc_825E494C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E494C:
	// li r11,1480
	r11.s64 = 1480;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r11,3332
	r11.s64 = 3332;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825E4980"))) PPC_WEAK_FUNC(sub_825E4980);
PPC_FUNC_IMPL(__imp__sub_825E4980) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E4984"))) PPC_WEAK_FUNC(sub_825E4984);
PPC_FUNC_IMPL(__imp__sub_825E4984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E4988"))) PPC_WEAK_FUNC(sub_825E4988);
PPC_FUNC_IMPL(__imp__sub_825E4988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r30,r4,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825e49f4
	if (!cr6.gt) goto loc_825E49F4;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825e49f4
	if (!cr6.gt) goto loc_825E49F4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3620
	sub_825E3620(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x825e49f4
	if (!cr0.eq) goto loc_825E49F4;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x825e49f8
	if (cr6.gt) goto loc_825E49F8;
loc_825E49F4:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
loc_825E49F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825E49FC"))) PPC_WEAK_FUNC(sub_825E49FC);
PPC_FUNC_IMPL(__imp__sub_825E49FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825E4A00"))) PPC_WEAK_FUNC(sub_825E4A00);
PPC_FUNC_IMPL(__imp__sub_825E4A00) {
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
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825e4a2c
	if (!cr6.gt) goto loc_825E4A2C;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825E4A2C:
	// li r10,1480
	ctx.r10.s64 = 1480;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// lwz r4,11036(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// bl 0x825e32c0
	sub_825E32C0(ctx, base);
loc_825E4A58:
	// lwz r11,11152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11152);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825e4a58
	if (!cr6.eq) goto loc_825E4A58;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825E4A74"))) PPC_WEAK_FUNC(sub_825E4A74);
PPC_FUNC_IMPL(__imp__sub_825E4A74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E4A78"))) PPC_WEAK_FUNC(sub_825E4A78);
PPC_FUNC_IMPL(__imp__sub_825E4A78) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r4,48(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x825e4aac
	if (!cr6.gt) goto loc_825E4AAC;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825E4AAC:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3db0
	sub_825E3DB0(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825E4AC8"))) PPC_WEAK_FUNC(sub_825E4AC8);
PPC_FUNC_IMPL(__imp__sub_825E4AC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825E4ACC"))) PPC_WEAK_FUNC(sub_825E4ACC);
PPC_FUNC_IMPL(__imp__sub_825E4ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E4AD0"))) PPC_WEAK_FUNC(sub_825E4AD0);
PPC_FUNC_IMPL(__imp__sub_825E4AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,11036(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11036);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825e4b1c
	if (cr6.eq) goto loc_825E4B1C;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825e4b1c
	if (cr6.eq) goto loc_825E4B1C;
	// bl 0x825e4a00
	sub_825E4A00(ctx, base);
	// b 0x825e4b0c
	goto loc_825E4B0C;
loc_825E4B04:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82605c60
	sub_82605C60(ctx, base);
loc_825E4B0C:
	// lwz r10,11120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 11120);
	// lwz r11,11124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11124);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x825e4b04
	if (!cr6.eq) goto loc_825E4B04;
loc_825E4B1C:
	// lwz r11,15308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 15308);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825e4b68
	if (cr6.eq) goto loc_825E4B68;
	// lwz r8,15312(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 15312);
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r11,3
	ctx.r9.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r11,r8,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFF;
	// addi r7,r10,512
	ctx.r7.s64 = ctx.r10.s64 + 512;
	// addi r10,r11,512
	ctx.r10.s64 = r11.s64 + 512;
	// clrlwi r11,r8,3
	r11.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// rlwinm r8,r7,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lis r7,16384
	ctx.r7.s64 = 1073741824;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r4,r7,r11
	ctx.r4.s64 = r11.s64 - ctx.r7.s64;
	// subf r3,r7,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r7.s64;
	// bl 0x825f9198
	sub_825F9198(ctx, base);
loc_825E4B68:
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,15240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 15240);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,15244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 15244);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,15240(r31)
	PPC_STORE_U32(r31.u32 + 15240, r29.u32);
	// stw r29,15244(r31)
	PPC_STORE_U32(r31.u32 + 15244, r29.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r29.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r29.u32);
	// bl 0x8314d1cc
	__imp__VdSetSystemCommandBufferGpuIdentifierAddress(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x825e4bac
	if (!cr6.eq) goto loc_825E4BAC;
loc_825E4BA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825e4e90
	goto loc_825E4E90;
loc_825E4BAC:
	// lwz r25,4(r27)
	r25.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r26,8(r27)
	r26.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r28,12(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// lwz r30,16(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// bne cr6,0x825e4bd0
	if (!cr6.eq) goto loc_825E4BD0;
	// lis r25,0
	r25.s64 = 0;
	// ori r25,r25,32768
	r25.u64 = r25.u64 | 32768;
loc_825E4BD0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x825e4bdc
	if (!cr6.eq) goto loc_825E4BDC;
	// lis r28,32
	r28.s64 = 2097152;
loc_825E4BDC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e4be8
	if (!cr6.eq) goto loc_825E4BE8;
	// li r11,32
	r11.s64 = 32;
loc_825E4BE8:
	// divwu r27,r28,r11
	r27.u32 = r28.u32 / r11.u32;
	// twllei r11,0
	if (r11.u32 <= 0) __builtin_debugtrap();
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x825e4c0c
	if (!cr6.eq) goto loc_825E4C0C;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r3,15240(r31)
	PPC_STORE_U32(r31.u32 + 15240, ctx.r3.u32);
loc_825E4C0C:
	// li r24,3
	r24.s64 = 3;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x825e4c40
	if (!cr6.eq) goto loc_825E4C40;
	// lis r11,8
	r11.s64 = 524288;
	// lis r4,-30848
	ctx.r4.s64 = -2021654528;
	// subfc r11,r11,r28
	xer.ca = r28.u32 >= r11.u32;
	r11.s64 = r28.s64 - r11.s64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r24
	r11.u64 = r11.u64 & r24.u64;
	// rlwimi r4,r11,28,1,3
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 28) & 0x70000000) | (ctx.r4.u64 & 0xFFFFFFFF8FFFFFFF);
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,15244(r31)
	PPC_STORE_U32(r31.u32 + 15244, ctx.r3.u32);
loc_825E4C40:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x825e4e88
	if (cr6.eq) goto loc_825E4E88;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825e4e88
	if (cr6.eq) goto loc_825E4E88;
	// cntlzw r11,r25
	r11.u64 = r25.u32 == 0 ? 32 : __builtin_clz(r25.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// subfic r23,r11,28
	xer.ca = r11.u32 <= 28;
	r23.s64 = 28 - r11.s64;
	// bl 0x8314d1bc
	__imp__MmGetPhysicalAddress(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8314d1ac
	__imp__VdInitializeRingBuffer(ctx, base);
	// rlwinm r11,r25,23,9,31
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 23) & 0x7FFFFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subfic r4,r11,31
	xer.ca = r11.u32 <= 31;
	ctx.r4.s64 = 31 - r11.s64;
	// cmplwi cr6,r4,19
	cr6.compare<uint32_t>(ctx.r4.u32, 19, xer);
	// ble cr6,0x825e4c80
	if (!cr6.gt) goto loc_825E4C80;
	// li r4,19
	ctx.r4.s64 = 19;
loc_825E4C80:
	// lwz r11,11024(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// addi r11,r11,60
	r11.s64 = r11.s64 + 60;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x8314d19c
	__imp__VdEnableRingBufferRPtrWriteBack(ctx, base);
	// rlwinm r11,r28,0,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFC;
	// lis r9,2989
	ctx.r9.s64 = 195887104;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// ori r7,r9,61453
	ctx.r7.u64 = ctx.r9.u64 | 61453;
	// rlwinm r8,r25,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r27,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// stw r7,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r7.u32);
	// rlwinm r11,r28,30,2,31
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r9,15312(r31)
	PPC_STORE_U32(r31.u32 + 15312, ctx.r9.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r11,15340(r31)
	PPC_STORE_U32(r31.u32 + 15340, r11.u32);
	// stw r26,15300(r31)
	PPC_STORE_U32(r31.u32 + 15300, r26.u32);
	// addi r9,r30,-4
	ctx.r9.s64 = r30.s64 + -4;
	// stw r30,15308(r31)
	PPC_STORE_U32(r31.u32 + 15308, r30.u32);
	// addi r7,r10,-160
	ctx.r7.s64 = ctx.r10.s64 + -160;
	// stw r30,15328(r31)
	PPC_STORE_U32(r31.u32 + 15328, r30.u32);
	// stw r30,15332(r31)
	PPC_STORE_U32(r31.u32 + 15332, r30.u32);
	// stw r27,15316(r31)
	PPC_STORE_U32(r31.u32 + 15316, r27.u32);
	// stw r8,15304(r31)
	PPC_STORE_U32(r31.u32 + 15304, ctx.r8.u32);
	// lwz r11,11024(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// stw r29,60(r11)
	PPC_STORE_U32(r11.u32 + 60, r29.u32);
	// lwz r11,11036(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r29,11088(r31)
	PPC_STORE_U32(r31.u32 + 11088, r29.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r7,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r7.u32);
	// stw r29,15320(r31)
	PPC_STORE_U32(r31.u32 + 15320, r29.u32);
	// bne cr6,0x825e4d20
	if (!cr6.eq) goto loc_825E4D20;
	// stw r24,11036(r31)
	PPC_STORE_U32(r31.u32 + 11036, r24.u32);
loc_825E4D20:
	// lwz r11,11036(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// lwz r10,11024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,11024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// lwz r9,15324(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 15324);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r11,11024(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x8314d1cc
	__imp__VdSetSystemCommandBufferGpuIdentifierAddress(ctx, base);
	// li r11,8
	r11.s64 = 8;
	// lis r9,-16367
	ctx.r9.s64 = -1072627712;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// ori r8,r9,18432
	ctx.r8.u64 = ctx.r9.u64 | 18432;
	// addi r10,r10,-144
	ctx.r10.s64 = ctx.r10.s64 + -144;
	// li r7,1023
	ctx.r7.s64 = 1023;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r11,r10,-4
	r11.s64 = ctx.r10.s64 + -4;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
loc_825E4D88:
	// lwzu r10,4(r11)
	ea = 4 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x825e4d88
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825E4D88;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// li r11,2048
	r11.s64 = 2048;
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r29.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// sth r10,11052(r31)
	PPC_STORE_U16(r31.u32 + 11052, ctx.r10.u16);
	// sth r11,11054(r31)
	PPC_STORE_U16(r31.u32 + 11054, r11.u16);
	// li r4,19
	ctx.r4.s64 = 19;
	// sth r11,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, r11.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r10,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r10.u16);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r29.u32);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r29.u32);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r29.u32);
	// bl 0x8314d18c
	__imp__KiApcNormalRoutineNop(ctx, base);
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e2e00
	sub_825E2E00(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825e4dfc
	if (!cr6.gt) goto loc_825E4DFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E4DFC:
	// li r11,3330
	r11.s64 = 3330;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,3
	r11.s64 = 196608;
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// ori r11,r11,2562
	r11.u64 = r11.u64 | 2562;
	// lis r9,-16368
	ctx.r9.s64 = -1072693248;
	// lis r8,2032
	ctx.r8.s64 = 133169152;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,477
	ctx.r6.s64 = 477;
	// li r4,476
	ctx.r4.s64 = 476;
	// lis r30,2
	r30.s64 = 131072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r5.u32 = ea;
	// ori r30,r30,55
	r30.u64 = r30.u64 | 55;
	// stwu r9,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r5.u32 = ea;
	// stwu r8,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r5.u32 = ea;
	// stwu r7,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r5.u32 = ea;
	// stwu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r5.u32 = ea;
	// stwu r6,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r5.u32 = ea;
	// lwz r10,11028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 11028);
	// rlwinm r11,r10,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r5.u32 = ea;
	// stwu r4,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r5.u32 = ea;
	// stwu r30,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, r30.u32);
	ctx.r5.u32 = ea;
	// stw r5,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r5.u32);
	// bl 0x825e4920
	sub_825E4920(ctx, base);
	// b 0x825e4ba4
	goto loc_825E4BA4;
loc_825E4E88:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_825E4E90:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
}

__attribute__((alias("__imp__sub_825E4E94"))) PPC_WEAK_FUNC(sub_825E4E94);
PPC_FUNC_IMPL(__imp__sub_825E4E94) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_825E4E98"))) PPC_WEAK_FUNC(sub_825E4E98);
PPC_FUNC_IMPL(__imp__sub_825E4E98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r10,28
	r11.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x825e4ef4
	if (!cr6.eq) goto loc_825E4EF4;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r10,r10,23,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x3;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x825e4ec0
	if (!cr6.eq) goto loc_825E4EC0;
	// li r11,18
	r11.s64 = 18;
	// b 0x825e4f1c
	goto loc_825E4F1C;
loc_825E4EC0:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x825e4ed0
	if (!cr6.eq) goto loc_825E4ED0;
	// li r11,17
	r11.s64 = 17;
	// b 0x825e4f1c
	goto loc_825E4F1C;
loc_825E4ED0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825e4ee0
	if (!cr6.eq) goto loc_825E4EE0;
	// li r11,20
	r11.s64 = 20;
	// b 0x825e4f1c
	goto loc_825E4F1C;
loc_825E4EE0:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825e4f1c
	if (cr0.eq) goto loc_825E4F1C;
	// li r11,19
	r11.s64 = 19;
	// b 0x825e4f1c
	goto loc_825E4F1C;
loc_825E4EF4:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x825e4f1c
	if (!cr6.eq) goto loc_825E4F1C;
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825e4f1c
	if (cr0.eq) goto loc_825E4F1C;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm r10,r10,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r10,1024
	cr6.compare<uint32_t>(ctx.r10.u32, 1024, xer);
	// bne cr6,0x825e4f1c
	if (!cr6.eq) goto loc_825E4F1C;
	// li r11,16
	r11.s64 = 16;
loc_825E4F1C:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
}

__attribute__((alias("__imp__sub_825E4F20"))) PPC_WEAK_FUNC(sub_825E4F20);
PPC_FUNC_IMPL(__imp__sub_825E4F20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E4F24"))) PPC_WEAK_FUNC(sub_825E4F24);
PPC_FUNC_IMPL(__imp__sub_825E4F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E4F28"))) PPC_WEAK_FUNC(sub_825E4F28);
PPC_FUNC_IMPL(__imp__sub_825E4F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r10,r10,0,6,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3FFFFFC;
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, r11.u32);
}

__attribute__((alias("__imp__sub_825E4F54"))) PPC_WEAK_FUNC(sub_825E4F54);
PPC_FUNC_IMPL(__imp__sub_825E4F54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E4F58"))) PPC_WEAK_FUNC(sub_825E4F58);
PPC_FUNC_IMPL(__imp__sub_825E4F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r10,r10,3,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r11.u32);
}

__attribute__((alias("__imp__sub_825E4F80"))) PPC_WEAK_FUNC(sub_825E4F80);
PPC_FUNC_IMPL(__imp__sub_825E4F80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E4F84"))) PPC_WEAK_FUNC(sub_825E4F84);
PPC_FUNC_IMPL(__imp__sub_825E4F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E4F88"))) PPC_WEAK_FUNC(sub_825E4F88);
PPC_FUNC_IMPL(__imp__sub_825E4F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// rlwinm r11,r7,0,20,23
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xF00;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// bne cr6,0x825e50a8
	if (!cr6.eq) goto loc_825E50A8;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r29,-1
	r29.s64 = -65536;
	// lis r28,16384
	r28.s64 = 1073741824;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x825e5028
	if (cr6.eq) goto loc_825E5028;
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm. r9,r11,16,16,16
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0x8000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r8,r10,4,13,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x7FFF0;
	// bne 0x825e4fd8
	if (!cr0.eq) goto loc_825E4FD8;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_825E4FD8:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r9,r11,4,13,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x7FFF0;
	// bne 0x825e4fe8
	if (!cr0.eq) goto loc_825E4FE8;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_825E4FE8:
	// rlwinm. r11,r7,0,10,10
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r29,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r29.u32);
	// bne 0x825e500c
	if (!cr0.eq) goto loc_825E500C;
	// rlwinm r11,r4,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r4,3
	ctx.r10.u64 = ctx.r4.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r4,r28,r11
	ctx.r4.s64 = r11.s64 - r28.s64;
loc_825E500C:
	// rlwinm r11,r4,0,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r9,r9,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r8,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x825f9198
	sub_825F9198(ctx, base);
loc_825E5028:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825e50a8
	if (cr6.eq) goto loc_825E50A8;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x825e50a8
	if (cr6.eq) goto loc_825E50A8;
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm. r9,r11,16,16,16
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0x8000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r8,r10,4,13,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x7FFF0;
	// bne 0x825e5054
	if (!cr0.eq) goto loc_825E5054;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_825E5054:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r9,r11,4,13,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x7FFF0;
	// bne 0x825e5064
	if (!cr0.eq) goto loc_825E5064;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_825E5064:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r29,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r29.u32);
	// rlwinm. r11,r11,0,10,10
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825e508c
	if (!cr0.eq) goto loc_825E508C;
	// rlwinm r11,r31,12,20,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r31,3
	ctx.r10.u64 = r31.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r31,r28,r11
	r31.s64 = r11.s64 - r28.s64;
loc_825E508C:
	// rlwinm r11,r31,0,0,24
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r9,r9,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r8,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x825f9198
	sub_825F9198(ctx, base);
loc_825E50A8:
	// sync 
	// li r11,-256
	r11.s64 = -256;
loc_825E50B0:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r30
	reserved.u32 = *(uint32_t*)(base + r30.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r30
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r30.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x825e50b0
	if (!cr0.eq) goto loc_825E50B0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825E50D0"))) PPC_WEAK_FUNC(sub_825E50D0);
PPC_FUNC_IMPL(__imp__sub_825E50D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825E50D4"))) PPC_WEAK_FUNC(sub_825E50D4);
PPC_FUNC_IMPL(__imp__sub_825E50D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E50D8"))) PPC_WEAK_FUNC(sub_825E50D8);
PPC_FUNC_IMPL(__imp__sub_825E50D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x825e50f4
	if (!cr6.eq) goto loc_825E50F4;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x825e5118
	goto loc_825E5118;
loc_825E50F4:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x825e5114
	if (!cr6.eq) goto loc_825E5114;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm. r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825e5118
	if (!cr0.eq) goto loc_825E5118;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// b 0x825e5118
	goto loc_825E5118;
loc_825E5114:
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_825E5118:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
}

__attribute__((alias("__imp__sub_825E512C"))) PPC_WEAK_FUNC(sub_825E512C);
PPC_FUNC_IMPL(__imp__sub_825E512C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E5130"))) PPC_WEAK_FUNC(sub_825E5130);
PPC_FUNC_IMPL(__imp__sub_825E5130) {
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
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825e5160
	if (!cr6.gt) goto loc_825E5160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E5160:
	// li r10,2609
	ctx.r10.s64 = 2609;
	// rlwinm r11,r30,12,20,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// ori r9,r10,512
	ctx.r9.u64 = ctx.r10.u64 | 512;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// clrlwi r11,r30,3
	r11.u64 = r30.u32 & 0x1FFFFFFF;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// ori r9,r8,2607
	ctx.r9.u64 = ctx.r8.u64 | 2607;
	// add r10,r11,r29
	ctx.r10.u64 = r11.u64 + r29.u64;
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// addi r10,r10,4095
	ctx.r10.s64 = ctx.r10.s64 + 4095;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lis r8,-16380
	ctx.r8.s64 = -1073479680;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// ori r9,r8,15360
	ctx.r9.u64 = ctx.r8.u64 | 15360;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// li r8,3
	ctx.r8.s64 = 3;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r7,2609
	ctx.r7.s64 = 2609;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// li r5,8
	ctx.r5.s64 = 8;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825E51EC"))) PPC_WEAK_FUNC(sub_825E51EC);
PPC_FUNC_IMPL(__imp__sub_825E51EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825E51F0"))) PPC_WEAK_FUNC(sub_825E51F0);
PPC_FUNC_IMPL(__imp__sub_825E51F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_825E5204:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x825e5204
	if (!cr0.eq) goto loc_825E5204;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x825e524c
	if (!cr6.eq) goto loc_825E524C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = r11.u32 & 0xF;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x825e524c
	if (!cr6.eq) goto loc_825E524C;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e524c
	if (cr0.eq) goto loc_825E524C;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
loc_825E524C:
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

__attribute__((alias("__imp__sub_825E5260"))) PPC_WEAK_FUNC(sub_825E5260);
PPC_FUNC_IMPL(__imp__sub_825E5260) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E5264"))) PPC_WEAK_FUNC(sub_825E5264);
PPC_FUNC_IMPL(__imp__sub_825E5264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E5268"))) PPC_WEAK_FUNC(sub_825E5268);
PPC_FUNC_IMPL(__imp__sub_825E5268) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825e5298
	if (!cr6.eq) goto loc_825E5298;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2088);
	// b 0x825e52a0
	goto loc_825E52A0;
loc_825E5298:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2092);
loc_825E52A0:
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825e52b4
	if (cr6.eq) goto loc_825E52B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d13a0
	sub_825D13A0(ctx, base);
loc_825E52B4:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
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

__attribute__((alias("__imp__sub_825E52CC"))) PPC_WEAK_FUNC(sub_825E52CC);
PPC_FUNC_IMPL(__imp__sub_825E52CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E52D0"))) PPC_WEAK_FUNC(sub_825E52D0);
PPC_FUNC_IMPL(__imp__sub_825E52D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x825e5300
	if (!cr0.eq) goto loc_825E5300;
loc_825E52F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825e5390
	goto loc_825E5390;
loc_825E5300:
	// lis r30,16
	r30.s64 = 1048576;
	// rlwinm. r10,r29,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r11,3
	r11.s64 = 3;
	// ori r30,r30,1
	r30.u64 = r30.u64 | 1;
	// beq 0x825e5320
	if (cr0.eq) goto loc_825E5320;
	// lis r30,48
	r30.s64 = 3145728;
	// li r11,2
	r11.s64 = 2;
	// ori r30,r30,1
	r30.u64 = r30.u64 | 1;
loc_825E5320:
	// rlwinm. r10,r29,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825e532c
	if (cr0.eq) goto loc_825E532C;
	// oris r30,r30,64
	r30.u64 = r30.u64 | 4194304;
loc_825E532C:
	// lis r4,-32128
	ctx.r4.s64 = -2105540608;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwimi r4,r11,28,1,3
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 28) & 0x70000000) | (ctx.r4.u64 & 0xFFFFFFFF8FFFFFFF);
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x825e5354
	if (!cr0.eq) goto loc_825E5354;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// b 0x825e52f8
	goto loc_825E52F8;
loc_825E5354:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm r10,r28,0,6,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x3FFFFFC;
	// ori r9,r3,3
	ctx.r9.u64 = ctx.r3.u64 | 3;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// rlwinm r11,r11,0,4,4
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000000;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r9.u32);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// oris r11,r11,4096
	r11.u64 = r11.u64 | 268435456;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
loc_825E5390:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825E5394"))) PPC_WEAK_FUNC(sub_825E5394);
PPC_FUNC_IMPL(__imp__sub_825E5394) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825E5398"))) PPC_WEAK_FUNC(sub_825E5398);
PPC_FUNC_IMPL(__imp__sub_825E5398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
}

__attribute__((alias("__imp__sub_825E53A4"))) PPC_WEAK_FUNC(sub_825E53A4);
PPC_FUNC_IMPL(__imp__sub_825E53A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x825e4f88
	sub_825E4F88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E53A8"))) PPC_WEAK_FUNC(sub_825E53A8);
PPC_FUNC_IMPL(__imp__sub_825E53A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,32
	ctx.r3.s64 = 32;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x825e53dc
	if (!cr0.eq) goto loc_825E53DC;
loc_825E53D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825e544c
	goto loc_825E544C;
loc_825E53DC:
	// rlwinm r10,r30,29,0,2
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 29) & 0xE0000000;
	// rlwinm. r9,r29,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// oris r30,r10,16
	r30.u64 = ctx.r10.u64 | 1048576;
	// li r11,3
	r11.s64 = 3;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// beq 0x825e53fc
	if (cr0.eq) goto loc_825E53FC;
	// li r11,2
	r11.s64 = 2;
	// oris r30,r30,32
	r30.u64 = r30.u64 | 2097152;
loc_825E53FC:
	// rlwinm. r10,r29,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825e5408
	if (cr0.eq) goto loc_825E5408;
	// oris r30,r30,64
	r30.u64 = r30.u64 | 4194304;
loc_825E5408:
	// lis r4,-32128
	ctx.r4.s64 = -2105540608;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwimi r4,r11,28,1,3
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 28) & 0x70000000) | (ctx.r4.u64 & 0xFFFFFFFF8FFFFFFF);
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x825e5430
	if (!cr0.eq) goto loc_825E5430;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// b 0x825e53d4
	goto loc_825E53D4;
loc_825E5430:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r28.u32);
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_825E544C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825E5450"))) PPC_WEAK_FUNC(sub_825E5450);
PPC_FUNC_IMPL(__imp__sub_825E5450) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825E5454"))) PPC_WEAK_FUNC(sub_825E5454);
PPC_FUNC_IMPL(__imp__sub_825E5454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E5458"))) PPC_WEAK_FUNC(sub_825E5458);
PPC_FUNC_IMPL(__imp__sub_825E5458) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_825E5460"))) PPC_WEAK_FUNC(sub_825E5460);
PPC_FUNC_IMPL(__imp__sub_825E5460) {
	PPC_FUNC_PROLOGUE();
	// b 0x825e4f88
	sub_825E4F88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E5464"))) PPC_WEAK_FUNC(sub_825E5464);
PPC_FUNC_IMPL(__imp__sub_825E5464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E5468"))) PPC_WEAK_FUNC(sub_825E5468);
PPC_FUNC_IMPL(__imp__sub_825E5468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x825e54fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825E54FC;
	// bdzf 4*cr6+eq,0x825e54d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825E54D4;
	// bdzf 4*cr6+eq,0x825e5510
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825E5510;
	// bdzf 4*cr6+eq,0x825e5528
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825E5528;
	// bdzf 4*cr6+eq,0x825e553c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825E553C;
	// bdzf 4*cr6+eq,0x825e5544
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825E5544;
	// bdzf 4*cr6+eq,0x825e554c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825E554C;
	// bne cr6,0x825e554c
	if (!cr6.eq) goto loc_825E554C;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r4,12836
	ctx.r9.s64 = ctx.r4.s64 + 12836;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825E54B8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x825e54c8
	if (!cr6.eq) goto loc_825E54C8;
	// li r3,1
	ctx.r3.s64 = 1;
loc_825E54C8:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x825e54b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825E54B8;
	// blr 
	return;
loc_825E54D4:
	// li r10,26
	ctx.r10.s64 = 26;
	// addi r9,r4,12920
	ctx.r9.s64 = ctx.r4.s64 + 12920;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825E54E0:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x825e54f0
	if (!cr6.eq) goto loc_825E54F0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_825E54F0:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x825e54e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825E54E0;
	// blr 
	return;
loc_825E54FC:
	// lwz r10,12812(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12812);
loc_825E5500:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_825E5510:
	// lwz r10,12816(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12816);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x825e5520
	if (!cr6.eq) goto loc_825E5520;
	// li r3,1
	ctx.r3.s64 = 1;
loc_825E5520:
	// lwz r10,12832(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12832);
	// b 0x825e5500
	goto loc_825E5500;
loc_825E5528:
	// lwz r10,12240(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12240);
loc_825E552C:
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_825E553C:
	// lwz r10,13072(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 13072);
	// b 0x825e552c
	goto loc_825E552C;
loc_825E5544:
	// lwz r10,13068(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 13068);
	// b 0x825e552c
	goto loc_825E552C;
loc_825E554C:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_825E5550"))) PPC_WEAK_FUNC(sub_825E5550);
PPC_FUNC_IMPL(__imp__sub_825E5550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E5554"))) PPC_WEAK_FUNC(sub_825E5554);
PPC_FUNC_IMPL(__imp__sub_825E5554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E5558"))) PPC_WEAK_FUNC(sub_825E5558);
PPC_FUNC_IMPL(__imp__sub_825E5558) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,-19208(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19208);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825e5694
	if (!cr6.eq) goto loc_825E5694;
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825e5598
	if (!cr6.gt) goto loc_825E5598;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E5598:
	// lis r11,2
	r11.s64 = 131072;
	// li r10,15
	ctx.r10.s64 = 15;
	// ori r11,r11,8448
	r11.u64 = r11.u64 | 8448;
	// li r9,14
	ctx.r9.s64 = 14;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r11,16
	r11.s64 = 16;
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// li r7,256
	ctx.r7.s64 = 256;
	// ori r8,r8,15104
	ctx.r8.u64 = ctx.r8.u64 | 15104;
	// lis r6,-16368
	ctx.r6.s64 = -1072693248;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// ori r10,r6,11008
	ctx.r10.u64 = ctx.r6.u64 | 11008;
	// li r6,15
	ctx.r6.s64 = 15;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// li r5,60
	ctx.r5.s64 = 60;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// addi r4,r4,20
	ctx.r4.s64 = ctx.r4.s64 + 20;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stwu r6,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r11,r30,60
	r11.s64 = r30.s64 + 60;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1792
	ctx.r9.s64 = 117440512;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r10,8712
	ctx.r10.s64 = 8712;
	// li r7,4
	ctx.r7.s64 = 4;
	// lis r6,-16384
	ctx.r6.s64 = -1073741824;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r6,r6,13824
	ctx.r6.u64 = ctx.r6.u64 | 13824;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// ori r5,r5,129
	ctx.r5.u64 = ctx.r5.u64 | 129;
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,41,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	r11.u32 = ea;
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// rldicr r12,r12,40,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 40) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// rldicr r12,r12,39,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | r12.u64;
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
loc_825E5694:
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

__attribute__((alias("__imp__sub_825E56A8"))) PPC_WEAK_FUNC(sub_825E56A8);
PPC_FUNC_IMPL(__imp__sub_825E56A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E56AC"))) PPC_WEAK_FUNC(sub_825E56AC);
PPC_FUNC_IMPL(__imp__sub_825E56AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E56B0"))) PPC_WEAK_FUNC(sub_825E56B0);
PPC_FUNC_IMPL(__imp__sub_825E56B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r3,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,-19204(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19204);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825e5a30
	if (!cr6.eq) goto loc_825E5A30;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825e56ec
	if (!cr6.gt) goto loc_825E56EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E56EC:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// li r10,768
	ctx.r10.s64 = 768;
	// ori r11,r11,15104
	r11.u64 = r11.u64 | 15104;
	// lis r9,-16359
	ctx.r9.s64 = -1072103424;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r9,r9,11008
	ctx.r9.u64 = ctx.r9.u64 | 11008;
	// li r7,24
	ctx.r7.s64 = 24;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r5,96
	ctx.r5.s64 = 96;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// addi r29,r11,-112
	r29.s64 = r11.s64 + -112;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stwu r7,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r11,r30,96
	r11.s64 = r30.s64 + 96;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825e5758
	if (!cr6.gt) goto loc_825E5758;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E5758:
	// lis r11,-16374
	r11.s64 = -1073086464;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,11008
	r11.u64 = r11.u64 | 11008;
	// li r9,9
	ctx.r9.s64 = 9;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// addi r4,r29,96
	ctx.r4.s64 = r29.s64 + 96;
	// li r5,36
	ctx.r5.s64 = 36;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stwu r9,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825e57a4
	if (!cr6.gt) goto loc_825E57A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E57A4:
	// lis r11,1
	r11.s64 = 65536;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// ori r11,r11,8576
	r11.u64 = r11.u64 | 8576;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// li r8,8851
	ctx.r8.s64 = 8851;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// ori r9,r9,8448
	ctx.r9.u64 = ctx.r9.u64 | 8448;
	// ori r10,r7,65535
	ctx.r10.u64 = ctx.r7.u64 | 65535;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r6,r6,8708
	ctx.r6.u64 = ctx.r6.u64 | 8708;
	// lis r11,1
	r11.s64 = 65536;
	// li r4,768
	ctx.r4.s64 = 768;
	// li r31,8978
	r31.s64 = 8978;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lis r30,0
	r30.s64 = 0;
	// li r29,8205
	r29.s64 = 8205;
	// ori r30,r30,65535
	r30.u64 = r30.u64 | 65535;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r28,8704
	r28.s64 = 8704;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r23,0
	r23.s64 = 0;
	// li r10,8707
	ctx.r10.s64 = 8707;
	// lwz r25,80(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r21,0
	r21.s64 = 0;
	// li r20,8712
	r20.s64 = 8712;
	// lwz r22,84(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r19,4
	r19.s64 = 4;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// li r18,8452
	r18.s64 = 8452;
	// li r17,0
	r17.s64 = 0;
	// li r8,8832
	ctx.r8.s64 = 8832;
	// lis r27,8
	r27.s64 = 524288;
	// li r16,8962
	r16.s64 = 8962;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// ori r27,r27,8
	r27.u64 = r27.u64 | 8;
	// li r15,4
	r15.s64 = 4;
	// lis r26,2
	r26.s64 = 131072;
	// li r14,0
	r14.s64 = 0;
	// ori r26,r26,8320
	r26.u64 = r26.u64 | 8320;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// lis r24,16
	r24.s64 = 1048576;
	// ori r24,r24,16
	r24.u64 = r24.u64 | 16;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r31,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r31.u32);
	ctx.r3.u32 = ea;
	// lwz r31,260(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r29.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r21,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r21.u32);
	ctx.r3.u32 = ea;
	// stwu r20,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r20.u32);
	ctx.r3.u32 = ea;
	// stwu r19,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r19.u32);
	ctx.r3.u32 = ea;
	// stwu r18,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r18.u32);
	ctx.r3.u32 = ea;
	// stwu r17,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r17.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r16,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r16.u32);
	ctx.r3.u32 = ea;
	// stwu r15,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r15.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r14,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r14.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stwu r24,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r24.u32);
	r11.u32 = ea;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825e5904
	if (!cr6.gt) goto loc_825E5904;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E5904:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// ori r11,r11,13824
	r11.u64 = r11.u64 | 13824;
	// ori r10,r10,129
	ctx.r10.u64 = ctx.r10.u64 | 129;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r12,1
	r12.s64 = 1;
	// li r11,1
	r11.s64 = 1;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rldicr r12,r12,41,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r11,r11,35,63
	r11.u64 = __builtin_rotateleft64(r11.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// rldicr r12,r12,40,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 40) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// rldicr r12,r12,39,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// std r10,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r10.u64);
	// rldicr r12,r12,44,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// std r10,32(r31)
	PPC_STORE_U64(r31.u32 + 32, ctx.r10.u64);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | r12.u64;
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// li r12,1
	r12.s64 = 1;
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// oris r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 1048576;
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// rldicr r12,r12,54,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | r12.u64;
	// std r10,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r10.u64);
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
	// lwz r11,10436(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10436);
	// lwz r10,10440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10440);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r7,r9,17
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 17;
	// rlwinm r11,r11,17,0,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0xFFFE0000;
	// srawi r6,r10,17
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 17;
	// srawi r5,r8,17
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 17;
	// srawi r4,r11,17
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FFFF) != 0);
	ctx.r4.s64 = r11.s32 >> 17;
	// bl 0x825dc610
	sub_825DC610(ctx, base);
loc_825E5A30:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_825E5A34"))) PPC_WEAK_FUNC(sub_825E5A34);
PPC_FUNC_IMPL(__imp__sub_825E5A34) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_825E5A38"))) PPC_WEAK_FUNC(sub_825E5A38);
PPC_FUNC_IMPL(__imp__sub_825E5A38) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// clrlwi r27,r6,30
	r27.u64 = ctx.r6.u32 & 0x3;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// ble cr6,0x825e5a70
	if (!cr6.gt) goto loc_825E5A70;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_825E5A70:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825e50d8
	sub_825E50D8(ctx, base);
	// addi r11,r30,2598
	r11.s64 = r30.s64 + 2598;
	// addi r10,r30,12
	ctx.r10.s64 = r30.s64 + 12;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// li r7,1480
	ctx.r7.s64 = 1480;
	// stwx r3,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r3.u32);
	// srd r11,r9,r10
	r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// lwz r11,13904(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13904);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// bne cr6,0x825e5b08
	if (!cr6.eq) goto loc_825E5B08;
	// cmplwi cr6,r28,10
	cr6.compare<uint32_t>(r28.u32, 10, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x825e5ae4
	if (!cr6.eq) goto loc_825E5AE4;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,15
	ctx.r9.s64 = 15;
	// ori r10,r10,17920
	ctx.r10.u64 = ctx.r10.u64 | 17920;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
loc_825E5AE4:
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// bl 0x825e5558
	sub_825E5558(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825e5b08
	if (!cr6.gt) goto loc_825E5B08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825E5B08:
	// lwz r10,13904(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13904);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// stw r27,13912(r31)
	PPC_STORE_U32(r31.u32 + 13912, r27.u32);
	// stw r9,13908(r31)
	PPC_STORE_U32(r31.u32 + 13908, ctx.r9.u32);
	// stw r11,13904(r31)
	PPC_STORE_U32(r31.u32 + 13904, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825E5B28"))) PPC_WEAK_FUNC(sub_825E5B28);
PPC_FUNC_IMPL(__imp__sub_825E5B28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825E5B2C"))) PPC_WEAK_FUNC(sub_825E5B2C);
PPC_FUNC_IMPL(__imp__sub_825E5B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E5B30"))) PPC_WEAK_FUNC(sub_825E5B30);
PPC_FUNC_IMPL(__imp__sub_825E5B30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,2598
	r11.s64 = ctx.r4.s64 + 2598;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825e5b74
	if (!cr6.gt) goto loc_825E5B74;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E5B74:
	// addi r11,r29,8198
	r11.s64 = r29.s64 + 8198;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,11036(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// beq cr6,0x825e5ba0
	if (cr6.eq) goto loc_825E5BA0;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// b 0x825e5bf0
	goto loc_825E5BF0;
loc_825E5BA0:
	// lwz r11,11040(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11040);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e5bf0
	if (cr0.eq) goto loc_825E5BF0;
	// lwz r11,13932(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13932);
	// lwz r3,13928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 13928);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x825e5bc8
	if (cr6.lt) goto loc_825E5BC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f4bc0
	sub_825F4BC0(ctx, base);
loc_825E5BC8:
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// rlwimi r11,r30,30,2,31
	r11.u64 = (__builtin_rotateleft32(r30.u32, 30) & 0x3FFFFFFF) | (r11.u64 & 0xFFFFFFFFC0000000);
	// oris r11,r11,16384
	r11.u64 = r11.u64 | 1073741824;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// ld r11,144(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// stw r9,13928(r31)
	PPC_STORE_U32(r31.u32 + 13928, ctx.r9.u32);
loc_825E5BF0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x825e5c1c
	if (!cr6.eq) goto loc_825E5C1C;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// rlwinm r9,r11,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r5,r10,0,6,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3FFFFFC;
	// rlwinm r11,r9,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r9,3
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// b 0x825e5ca4
	goto loc_825E5CA4;
loc_825E5C1C:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x825e5cb8
	if (!cr6.eq) goto loc_825E5CB8;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// lwz r29,48(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r27,r11,0,0,19
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r30,r29,0,0,19
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x825d45a8
	sub_825D45A8(ctx, base);
	// rlwinm r11,r27,12,20,31
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 12) & 0xFFF;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r10,r27,3
	ctx.r10.u64 = r27.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x825e5130
	sub_825E5130(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825e5cb8
	if (cr6.eq) goto loc_825E5CB8;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r30,12,20,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
loc_825E5CA4:
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x825e5130
	sub_825E5130(ctx, base);
loc_825E5CB8:
	// lwz r11,13904(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13904);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// stw r11,13904(r31)
	PPC_STORE_U32(r31.u32 + 13904, r11.u32);
	// ble cr6,0x825e5cdc
	if (!cr6.gt) goto loc_825E5CDC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E5CDC:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// li r10,6
	ctx.r10.s64 = 6;
	// ori r11,r11,17920
	r11.u64 = r11.u64 | 17920;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,13904(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13904);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// bne cr6,0x825e5d4c
	if (!cr6.eq) goto loc_825E5D4C;
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(r28.u32, 1, xer);
	// beq cr6,0x825e5d44
	if (cr6.eq) goto loc_825E5D44;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825e5d1c
	if (!cr6.gt) goto loc_825E5D1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E5D1C:
	// li r11,1480
	r11.s64 = 1480;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(r28.u32, 2, xer);
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// beq cr6,0x825e5d54
	if (cr6.eq) goto loc_825E5D54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e56b0
	sub_825E56B0(ctx, base);
	// b 0x825e5d54
	goto loc_825E5D54;
loc_825E5D44:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825e5d54
	if (cr6.eq) goto loc_825E5D54;
loc_825E5D4C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e5558
	sub_825E5558(ctx, base);
loc_825E5D54:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825e5d6c
	if (!cr6.gt) goto loc_825E5D6C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E5D6C:
	// lwz r11,13904(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13904);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e5d88
	if (!cr6.eq) goto loc_825E5D88;
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(r28.u32, 1, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x825e5d8c
	if (cr6.eq) goto loc_825E5D8C;
loc_825E5D88:
	// li r11,0
	r11.s64 = 0;
loc_825E5D8C:
	// stw r11,13908(r31)
	PPC_STORE_U32(r31.u32 + 13908, r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_825E5D94"))) PPC_WEAK_FUNC(sub_825E5D94);
PPC_FUNC_IMPL(__imp__sub_825E5D94) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825E5D98"))) PPC_WEAK_FUNC(sub_825E5D98);
PPC_FUNC_IMPL(__imp__sub_825E5D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825e5dc8
	if (!cr6.eq) goto loc_825E5DC8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2088);
	// b 0x825e5dd0
	goto loc_825E5DD0;
loc_825E5DC8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2092);
loc_825E5DD0:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = r11.u32 & 0xF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bgt cr6,0x825e601c
	if (cr6.gt) goto loc_825E601C;
	// lis r12,-32253
	r12.s64 = -2113732608;
	// addi r12,r12,80
	r12.s64 = r12.s64 + 80;
	// lbzx r0,r12,r10
	r0.u64 = PPC_LOAD_U8(r12.u32 + ctx.r10.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32162
	r12.s64 = -2107768832;
	// nop 
	// addi r12,r12,24080
	r12.s64 = r12.s64 + 24080;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825e601c
	if (!cr0.eq) goto loc_825E601C;
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e5e38
	if (cr0.eq) goto loc_825E5E38;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r10,5120
	ctx.r10.s64 = 5120;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// divwu r4,r11,r10
	ctx.r4.u32 = r11.u32 / ctx.r10.u32;
	// clrlwi r3,r9,20
	ctx.r3.u64 = ctx.r9.u32 & 0xFFF;
	// bl 0x825f6b40
	sub_825F6B40(ctx, base);
loc_825E5E38:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e601c
	if (cr0.eq) goto loc_825E601C;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// stw r11,-19256(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19256, r11.u32);
	// b 0x825e601c
	goto loc_825E601C;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e5e78
	if (cr6.eq) goto loc_825E5E78;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e5e78
	if (cr6.eq) goto loc_825E5E78;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x825e32c0
	sub_825E32C0(ctx, base);
loc_825E5E78:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// rlwinm r3,r11,0,0,19
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r30,r10,0,0,19
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_825E5E94:
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// b 0x825e601c
	goto loc_825E601C;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e5ec4
	if (cr6.eq) goto loc_825E5EC4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e5ec4
	if (cr6.eq) goto loc_825E5EC4;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x825e32c0
	sub_825E32C0(ctx, base);
loc_825E5EC4:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x825e5e94
	goto loc_825E5E94;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e5ef4
	if (cr6.eq) goto loc_825E5EF4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e5ef4
	if (cr6.eq) goto loc_825E5EF4;
	// li r5,11
	ctx.r5.s64 = 11;
loc_825E5EE8:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// bl 0x825e32c0
	sub_825E32C0(ctx, base);
loc_825E5EF4:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// b 0x825e5e94
	goto loc_825E5E94;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e5f20
	if (cr6.eq) goto loc_825E5F20;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e5f20
	if (cr6.eq) goto loc_825E5F20;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x825e32c0
	sub_825E32C0(ctx, base);
loc_825E5F20:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// b 0x825e5e94
	goto loc_825E5E94;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e5ef4
	if (cr6.eq) goto loc_825E5EF4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e5ef4
	if (cr6.eq) goto loc_825E5EF4;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x825e5ee8
	goto loc_825E5EE8;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e5ef4
	if (cr6.eq) goto loc_825E5EF4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e5ef4
	if (cr6.eq) goto loc_825E5EF4;
	// li r5,17
	ctx.r5.s64 = 17;
	// b 0x825e5ee8
	goto loc_825E5EE8;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e5f84
	if (cr6.eq) goto loc_825E5F84;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e5f84
	if (cr6.eq) goto loc_825E5F84;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x825e32c0
	sub_825E32C0(ctx, base);
loc_825E5F84:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f4e18
	sub_825F4E18(ctx, base);
	// b 0x825e601c
	goto loc_825E601C;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e5fb4
	if (cr6.eq) goto loc_825E5FB4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e5fb4
	if (cr6.eq) goto loc_825E5FB4;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,21
	ctx.r5.s64 = 21;
	// bl 0x825e32c0
	sub_825E32C0(ctx, base);
loc_825E5FB4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f49a0
	sub_825F49A0(ctx, base);
	// b 0x825e601c
	goto loc_825E601C;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e5fe4
	if (cr6.eq) goto loc_825E5FE4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e5fe4
	if (cr6.eq) goto loc_825E5FE4;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,23
	ctx.r5.s64 = 23;
	// bl 0x825e32c0
	sub_825E32C0(ctx, base);
loc_825E5FE4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e7220
	sub_825E7220(ctx, base);
	// b 0x825e601c
	goto loc_825E601C;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e6014
	if (cr6.eq) goto loc_825E6014;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e6014
	if (cr6.eq) goto loc_825E6014;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,25
	ctx.r5.s64 = 25;
	// bl 0x825e32c0
	sub_825E32C0(ctx, base);
loc_825E6014:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e7268
	sub_825E7268(ctx, base);
loc_825E601C:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
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

__attribute__((alias("__imp__sub_825E603C"))) PPC_WEAK_FUNC(sub_825E603C);
PPC_FUNC_IMPL(__imp__sub_825E603C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E6040"))) PPC_WEAK_FUNC(sub_825E6040);
PPC_FUNC_IMPL(__imp__sub_825E6040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_825E6058:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x825e6058
	if (!cr0.eq) goto loc_825E6058;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825e60ac
	if (!cr6.eq) goto loc_825E60AC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = r11.u32 & 0xF;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x825e60a0
	if (!cr6.eq) goto loc_825E60A0;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e60a0
	if (cr0.eq) goto loc_825E60A0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_825E60A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e5d98
	sub_825E5D98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_825E60AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825E60BC"))) PPC_WEAK_FUNC(sub_825E60BC);
PPC_FUNC_IMPL(__imp__sub_825E60BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E60C0"))) PPC_WEAK_FUNC(sub_825E60C0);
PPC_FUNC_IMPL(__imp__sub_825E60C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,-19200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19200);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825e6140
	if (!cr6.eq) goto loc_825E6140;
	// clrlwi. r11,r6,31
	r11.u64 = ctx.r6.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e6110
	if (cr0.eq) goto loc_825E6110;
	// lbz r11,11072(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11072);
	// li r12,3
	r12.s64 = 3;
	// ori r11,r11,192
	r11.u64 = r11.u64 | 192;
	// rldicr r12,r12,62,1
	r12.u64 = __builtin_rotateleft64(r12.u64, 62) & 0xC000000000000000;
	// stb r11,11072(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11072, r11.u8);
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// b 0x825e6224
	goto loc_825E6224;
loc_825E6110:
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825e6128
	if (!cr6.eq) goto loc_825E6128;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2088);
	// b 0x825e6130
	goto loc_825E6130;
loc_825E6128:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2092);
loc_825E6130:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,12256(r11)
	PPC_STORE_U32(r11.u32 + 12256, ctx.r10.u32);
	// b 0x825e6224
	goto loc_825E6224;
loc_825E6140:
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825e6158
	if (!cr6.eq) goto loc_825E6158;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2088);
	// b 0x825e6160
	goto loc_825E6160;
loc_825E6158:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2092);
loc_825E6160:
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r30,12,20,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
	// add r29,r30,r29
	r29.u64 = r30.u64 + r29.u64;
	// bl 0x82605c68
	sub_82605C68(ctx, base);
	// lwz r11,11016(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11016);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x825e61a0
	if (cr6.eq) goto loc_825E61A0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,12248
	ctx.r3.s64 = r31.s64 + 12248;
	// bl 0x825e2f38
	sub_825E2F38(ctx, base);
	// b 0x825e6224
	goto loc_825E6224;
loc_825E61A0:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825e61b8
	if (!cr6.gt) goto loc_825E61B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E61B8:
	// li r11,2609
	r11.s64 = 2609;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,1
	r11.s64 = 65536;
	// addi r9,r29,4095
	ctx.r9.s64 = r29.s64 + 4095;
	// ori r11,r11,2607
	r11.u64 = r11.u64 | 2607;
	// rlwinm r8,r30,0,0,19
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r9,r9,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lis r7,-16380
	ctx.r7.s64 = -1073479680;
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// ori r9,r7,15360
	ctx.r9.u64 = ctx.r7.u64 | 15360;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,2609
	ctx.r6.s64 = 2609;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// li r11,8
	r11.s64 = 8;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_825E6224:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825E6228"))) PPC_WEAK_FUNC(sub_825E6228);
PPC_FUNC_IMPL(__imp__sub_825E6228) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825E622C"))) PPC_WEAK_FUNC(sub_825E622C);
PPC_FUNC_IMPL(__imp__sub_825E622C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E6230"))) PPC_WEAK_FUNC(sub_825E6230);
PPC_FUNC_IMPL(__imp__sub_825E6230) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bgt cr6,0x825e63c4
	if (cr6.gt) goto loc_825E63C4;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825e639c
	if (cr6.eq) goto loc_825E639C;
	// bdz 0x825e63b0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_825E63B0;
	// bdz 0x825e628c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_825E628C;
	// bdz 0x825e6288
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_825E6288;
	// bdz 0x825e63c4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_825E63C4;
	// bdz 0x825e63c4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_825E63C4;
	// bdz 0x825e63c4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_825E63C4;
	// bdz 0x825e63b0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_825E63B0;
	// b 0x825e63c4
	goto loc_825E63C4;
loc_825E6288:
	// lwz r31,24(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 24);
loc_825E628C:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,-19200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19200);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825e62a8
	if (!cr6.eq) goto loc_825E62A8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825e63b8
	goto loc_825E63B8;
loc_825E62A8:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// rlwinm r11,r11,26,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0xF;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// rlwinm r29,r10,0,0,19
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r26,r9,0,0,19
	r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// bl 0x825d3770
	sub_825D3770(ctx, base);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r9,r1,148
	ctx.r9.s64 = ctx.r1.s64 + 148;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r11,r11,-1104
	r11.s64 = r11.s64 + -1104;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// clrlwi r7,r10,26
	ctx.r7.u64 = ctx.r10.u32 & 0x3F;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// rlwinm r30,r9,10,23,31
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x1FF;
	// rlwinm r31,r7,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r10,13,0,18
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r24,r10,1,31,31
	r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// srawi r25,r25,26
	xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x3FFFFFF) != 0);
	r25.s64 = r25.s32 >> 26;
	// rlwinm r10,r8,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 21) & 0x1;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// lbzx r11,r31,r11
	r11.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r8,r8,23,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0x3;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// mullw r11,r11,r30
	r11.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// rlwinm r11,r11,2,3,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1FFFFFFC;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x825d3b00
	sub_825D3B00(ctx, base);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x825e6380
	if (cr6.eq) goto loc_825E6380;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825e6380
	if (cr6.eq) goto loc_825E6380;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825e60c0
	sub_825E60C0(ctx, base);
loc_825E6380:
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x825e63c4
	if (cr6.eq) goto loc_825E63C4;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x825e63c4
	if (cr6.eq) goto loc_825E63C4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// b 0x825e63b8
	goto loc_825E63B8;
loc_825E639C:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r5,r11,0,6,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3FFFFFC;
	// rlwinm r4,r10,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x825e63b8
	goto loc_825E63B8;
loc_825E63B0:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 28);
loc_825E63B8:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825e60c0
	sub_825E60C0(ctx, base);
loc_825E63C4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_825E63C8"))) PPC_WEAK_FUNC(sub_825E63C8);
PPC_FUNC_IMPL(__imp__sub_825E63C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825E63CC"))) PPC_WEAK_FUNC(sub_825E63CC);
PPC_FUNC_IMPL(__imp__sub_825E63CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E63D0"))) PPC_WEAK_FUNC(sub_825E63D0);
PPC_FUNC_IMPL(__imp__sub_825E63D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rldicl r11,r4,32,32
	r11.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// clrlwi r31,r11,27
	r31.u64 = r11.u32 & 0x1F;
	// beq cr6,0x825e6418
	if (cr6.eq) goto loc_825E6418;
	// lwz r11,276(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// ori r25,r11,2
	r25.u64 = r11.u64 | 2;
	// b 0x825e641c
	goto loc_825E641C;
loc_825E6418:
	// lwz r25,276(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
loc_825E641C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// clrlwi r9,r11,28
	ctx.r9.u64 = r11.u32 & 0xF;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x825e6448
	if (!cr6.eq) goto loc_825E6448;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e6448
	if (cr0.eq) goto loc_825E6448;
	// lwz r11,24(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825e6448
	if (cr6.eq) goto loc_825E6448;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_825E6448:
	// andi. r11,r25,4112
	r11.u64 = r25.u64 & 4112;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lis r28,-32256
	r28.s64 = -2113929216;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(r30.u64, 0, xer);
	// beq 0x825e649c
	if (cr0.eq) goto loc_825E649C;
	// beq cr6,0x825e6494
	if (cr6.eq) goto loc_825E6494;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825e6478
	if (!cr6.eq) goto loc_825E6478;
	// lwz r11,2088(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 2088);
	// b 0x825e647c
	goto loc_825E647C;
loc_825E6478:
	// lwz r11,2092(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 2092);
loc_825E647C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,24408(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24408);
	// rlwinm r11,r31,4,0,27
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x825e64d0
	goto loc_825E64D0;
loc_825E6494:
	// lwz r31,12(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x825e64d0
	goto loc_825E64D0;
loc_825E649C:
	// beq cr6,0x825e64cc
	if (cr6.eq) goto loc_825E64CC;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825e64b4
	if (!cr6.eq) goto loc_825E64B4;
	// lwz r11,2088(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 2088);
	// b 0x825e64b8
	goto loc_825E64B8;
loc_825E64B4:
	// lwz r11,2092(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 2092);
loc_825E64B8:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,24408(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24408);
	// lwzx r31,r11,r10
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// b 0x825e64d0
	goto loc_825E64D0;
loc_825E64CC:
	// lwz r31,8(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_825E64D0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825e6520
	if (cr6.eq) goto loc_825E6520;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825e64ec
	if (!cr6.eq) goto loc_825E64EC;
	// lwz r11,2088(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 2088);
	// b 0x825e64f0
	goto loc_825E64F0;
loc_825E64EC:
	// lwz r11,2092(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 2092);
loc_825E64F0:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(r30.u64, 0, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// bne cr6,0x825e6508
	if (!cr6.eq) goto loc_825E6508;
	// li r7,0
	ctx.r7.s64 = 0;
	// beq cr6,0x825e6510
	if (cr6.eq) goto loc_825E6510;
loc_825E6508:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x825e6514
	goto loc_825E6514;
loc_825E6510:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
loc_825E6514:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825e32c0
	sub_825E32C0(ctx, base);
loc_825E6520:
	// li r11,256
	r11.s64 = 256;
loc_825E6524:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r26
	reserved.u32 = *(uint32_t*)(base + r26.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r26
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r26.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x825e6524
	if (!cr0.eq) goto loc_825E6524;
	// lwsync 
	// andi. r11,r25,18
	r11.u64 = r25.u64 & 18;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825e6654
	if (!cr0.eq) goto loc_825E6654;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825e6564
	if (!cr6.eq) goto loc_825E6564;
	// lwz r11,2088(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 2088);
	// b 0x825e6568
	goto loc_825E6568;
loc_825E6564:
	// lwz r11,2092(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 2092);
loc_825E6568:
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,-19200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19200);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825e6594
	if (!cr6.eq) goto loc_825E6594;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e60c0
	sub_825E60C0(ctx, base);
	// b 0x825e6654
	goto loc_825E6654;
loc_825E6594:
	// rlwinm r11,r23,12,20,31
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r23,3
	ctx.r10.u64 = r23.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
	// add r29,r30,r24
	r29.u64 = r30.u64 + r24.u64;
	// bl 0x82605c68
	sub_82605C68(ctx, base);
	// lwz r11,11016(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11016);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x825e65d0
	if (cr6.eq) goto loc_825E65D0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,12248
	ctx.r3.s64 = r31.s64 + 12248;
	// bl 0x825e2f38
	sub_825E2F38(ctx, base);
	// b 0x825e6654
	goto loc_825E6654;
loc_825E65D0:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825e65e8
	if (!cr6.gt) goto loc_825E65E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E65E8:
	// li r11,2609
	r11.s64 = 2609;
	// lwz r10,284(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// addi r11,r29,4095
	r11.s64 = r29.s64 + 4095;
	// ori r9,r9,2607
	ctx.r9.u64 = ctx.r9.u64 | 2607;
	// rlwinm r8,r30,0,0,19
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// lis r7,-16380
	ctx.r7.s64 = -1073479680;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// ori r10,r7,15360
	ctx.r10.u64 = ctx.r7.u64 | 15360;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,2609
	ctx.r6.s64 = 2609;
	// li r5,0
	ctx.r5.s64 = 0;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// li r30,8
	r30.s64 = 8;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_825E6654:
	// rlwinm. r6,r25,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x825e6668
	if (!cr0.eq) goto loc_825E6668;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm. r11,r11,0,10,10
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e6734
	if (cr0.eq) goto loc_825E6734;
loc_825E6668:
	// clrlwi. r11,r25,31
	r11.u64 = r25.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825e6714
	if (!cr0.eq) goto loc_825E6714;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x825e668c
	if (cr6.eq) goto loc_825E668C;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x825e668c
	if (cr6.eq) goto loc_825E668C;
	// rlwinm r11,r22,0,0,24
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFFF80;
	// addi r7,r26,24
	ctx.r7.s64 = r26.s64 + 24;
	// b 0x825e6694
	goto loc_825E6694;
loc_825E668C:
	// rlwinm r11,r21,0,0,24
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFFFFFF80;
	// addi r7,r26,20
	ctx.r7.s64 = r26.s64 + 20;
loc_825E6694:
	// subf r11,r11,r23
	r11.s64 = r23.s64 - r11.s64;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r10,r11,r24
	ctx.r10.u64 = r11.u64 + r24.u64;
	// rlwinm r8,r11,25,7,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r10,127
	r11.s64 = ctx.r10.s64 + 127;
	// rlwinm. r4,r5,16,16,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0x8000;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// rlwinm r9,r11,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// rlwinm r11,r5,16,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// beq 0x825e66c0
	if (cr0.eq) goto loc_825E66C0;
	// rlwinm r11,r11,4,13,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x7FFF0;
loc_825E66C0:
	// rlwinm. r5,r10,0,16,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x825e66cc
	if (cr0.eq) goto loc_825E66CC;
	// rlwinm r10,r10,4,13,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x7FFF0;
loc_825E66CC:
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x825e66d8
	if (!cr6.gt) goto loc_825E66D8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_825E66D8:
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bge cr6,0x825e66e4
	if (!cr6.lt) goto loc_825E66E4;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_825E66E4:
	// cmplwi cr6,r11,32767
	cr6.compare<uint32_t>(r11.u32, 32767, xer);
	// blt cr6,0x825e66f4
	if (cr6.lt) goto loc_825E66F4;
	// addis r11,r11,8
	r11.s64 = r11.s64 + 524288;
	// rlwinm r11,r11,28,4,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
loc_825E66F4:
	// cmplwi cr6,r10,32767
	cr6.compare<uint32_t>(ctx.r10.u32, 32767, xer);
	// blt cr6,0x825e6708
	if (cr6.lt) goto loc_825E6708;
	// addis r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 524288;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
loc_825E6708:
	// rlwinm r11,r11,16,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
loc_825E6714:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825e6734
	if (cr6.eq) goto loc_825E6734;
	// rlwinm r11,r23,12,20,31
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r23,3
	ctx.r10.u64 = r23.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addis r23,r11,-16384
	r23.s64 = r11.s64 + -1073741824;
loc_825E6734:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_825E673C"))) PPC_WEAK_FUNC(sub_825E673C);
PPC_FUNC_IMPL(__imp__sub_825E673C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_825E6740"))) PPC_WEAK_FUNC(sub_825E6740);
PPC_FUNC_IMPL(__imp__sub_825E6740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r9,768
	ctx.r9.s64 = 50331648;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r7,r11,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// rlwinm r10,r10,0,6,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3FFFFFC;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825e63d0
	sub_825E63D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825E678C"))) PPC_WEAK_FUNC(sub_825E678C);
PPC_FUNC_IMPL(__imp__sub_825E678C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E6790"))) PPC_WEAK_FUNC(sub_825E6790);
PPC_FUNC_IMPL(__imp__sub_825E6790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// ori r11,r6,2
	r11.u64 = ctx.r6.u64 | 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825e63d0
	sub_825E63D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825E67D4"))) PPC_WEAK_FUNC(sub_825E67D4);
PPC_FUNC_IMPL(__imp__sub_825E67D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E67D8"))) PPC_WEAK_FUNC(sub_825E67D8);
PPC_FUNC_IMPL(__imp__sub_825E67D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,96
	ctx.r4.s64 = r11.s64 + 96;
	// li r5,304
	ctx.r5.s64 = 304;
}

__attribute__((alias("__imp__sub_825E67E8"))) PPC_WEAK_FUNC(sub_825E67E8);
PPC_FUNC_IMPL(__imp__sub_825E67E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828ea1b0
	sub_828EA1B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E67EC"))) PPC_WEAK_FUNC(sub_825E67EC);
PPC_FUNC_IMPL(__imp__sub_825E67EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E67F0"))) PPC_WEAK_FUNC(sub_825E67F0);
PPC_FUNC_IMPL(__imp__sub_825E67F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_825E6800"))) PPC_WEAK_FUNC(sub_825E6800);
PPC_FUNC_IMPL(__imp__sub_825E6800) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E6804"))) PPC_WEAK_FUNC(sub_825E6804);
PPC_FUNC_IMPL(__imp__sub_825E6804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E6808"))) PPC_WEAK_FUNC(sub_825E6808);
PPC_FUNC_IMPL(__imp__sub_825E6808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// rlwinm. r11,r3,24,8,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825e6818
	if (!cr0.eq) goto loc_825E6818;
	// li r11,0
	r11.s64 = 0;
	// b 0x825e6858
	goto loc_825E6858;
loc_825E6818:
	// rlwinm. r10,r11,0,8,11
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF00000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825e683c
	if (cr0.eq) goto loc_825E683C;
	// not r10,r11
	ctx.r10.u64 = ~r11.u64;
	// rlwinm r11,r11,3,9,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x7FFFF8;
	// rlwinm r10,r10,12,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xF;
	// subfic r10,r10,127
	xer.ca = ctx.r10.u32 <= 127;
	ctx.r10.s64 = 127 - ctx.r10.s64;
	// rlwinm r10,r10,23,0,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0xFF800000;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// b 0x825e6858
	goto loc_825E6858;
loc_825E683C:
	// rlwinm r10,r11,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFFFF000;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r10,3
	ctx.r9.s64 = ctx.r10.s64 + 3;
	// subfic r10,r10,113
	xer.ca = ctx.r10.u32 <= 113;
	ctx.r10.s64 = 113 - ctx.r10.s64;
	// slw r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwimi r11,r10,23,0,8
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 23) & 0xFF800000) | (r11.u64 & 0xFFFFFFFF007FFFFF);
loc_825E6858:
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r11.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_825E686C"))) PPC_WEAK_FUNC(sub_825E686C);
PPC_FUNC_IMPL(__imp__sub_825E686C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E6870"))) PPC_WEAK_FUNC(sub_825E6870);
PPC_FUNC_IMPL(__imp__sub_825E6870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,13948(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13948);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r11,13952(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13952);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// lwz r11,21964(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21964);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, r11.u32);
	// lwz r11,13956(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13956);
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, r11.u32);
}

__attribute__((alias("__imp__sub_825E6890"))) PPC_WEAK_FUNC(sub_825E6890);
PPC_FUNC_IMPL(__imp__sub_825E6890) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E6894"))) PPC_WEAK_FUNC(sub_825E6894);
PPC_FUNC_IMPL(__imp__sub_825E6894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E6898"))) PPC_WEAK_FUNC(sub_825E6898);
PPC_FUNC_IMPL(__imp__sub_825E6898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lbz r11,11068(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11068);
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825e68ac
	if (cr0.eq) goto loc_825E68AC;
	// lwz r10,13124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13124);
	// b 0x825e68b0
	goto loc_825E68B0;
loc_825E68AC:
	// li r10,1
	ctx.r10.s64 = 1;
loc_825E68B0:
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e68d4
	if (cr0.eq) goto loc_825E68D4;
	// lbz r11,11071(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11071);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e68cc
	if (cr0.eq) goto loc_825E68CC;
	// li r11,1
	r11.s64 = 1;
	// b 0x825e68d8
	goto loc_825E68D8;
loc_825E68CC:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// b 0x825e68d8
	goto loc_825E68D8;
loc_825E68D4:
	// li r11,0
	r11.s64 = 0;
loc_825E68D8:
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
}

__attribute__((alias("__imp__sub_825E68DC"))) PPC_WEAK_FUNC(sub_825E68DC);
PPC_FUNC_IMPL(__imp__sub_825E68DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E68E0"))) PPC_WEAK_FUNC(sub_825E68E0);
PPC_FUNC_IMPL(__imp__sub_825E68E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r11,0
	r11.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,21968(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21968);
	// addi r31,r3,21968
	r31.s64 = ctx.r3.s64 + 21968;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x825e6988
	if (!cr6.eq) goto loc_825E6988;
loc_825E690C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x825e6988
	if (!cr6.eq) goto loc_825E6988;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825e6938
	if (cr6.eq) goto loc_825E6938;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r31,r11
	r31.u64 = r11.u64;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x825e690c
	if (cr6.eq) goto loc_825E690C;
	// b 0x825e6988
	goto loc_825E6988;
loc_825E6938:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,6016
	ctx.r3.s64 = 6016;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x825e6958
	if (!cr0.eq) goto loc_825E6958;
loc_825E694C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x825e69fc
	goto loc_825E69FC;
loc_825E6958:
	// lis r4,-17280
	ctx.r4.s64 = -1132462080;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x825e6980
	if (!cr0.eq) goto loc_825E6980;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// b 0x825e694c
	goto loc_825E694C;
loc_825E6980:
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// mr r31,r30
	r31.u64 = r30.u64;
loc_825E6988:
	// li r11,0
	r11.s64 = 0;
loc_825E698C:
	// lbzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r31.u32);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bne cr6,0x825e69a4
	if (!cr6.eq) goto loc_825E69A4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x825e698c
	if (cr6.lt) goto loc_825E698C;
loc_825E69A4:
	// lbzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
loc_825E69AC:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// srw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x825e69c8
	if (cr0.eq) goto loc_825E69C8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// blt cr6,0x825e69ac
	if (cr6.lt) goto loc_825E69AC;
loc_825E69C8:
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + r31.u32);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stbx r9,r11,r31
	PPC_STORE_U8(r11.u32 + r31.u32, ctx.r9.u8);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_825E69FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825E6A00"))) PPC_WEAK_FUNC(sub_825E6A00);
PPC_FUNC_IMPL(__imp__sub_825E6A00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825E6A04"))) PPC_WEAK_FUNC(sub_825E6A04);
PPC_FUNC_IMPL(__imp__sub_825E6A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E6A08"))) PPC_WEAK_FUNC(sub_825E6A08);
PPC_FUNC_IMPL(__imp__sub_825E6A08) {
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
	// lwz r11,11044(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11044);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwimi r11,r4,12,18,19
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 12) & 0x3000) | (r11.u64 & 0xFFFFFFFFFFFFCFFF);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// stw r11,11044(r31)
	PPC_STORE_U32(r31.u32 + 11044, r11.u32);
	// ble cr6,0x825e6a40
	if (!cr6.gt) goto loc_825E6A40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E6A40:
	// li r11,1480
	r11.s64 = 1480;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r11,3841
	r11.s64 = 3841;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,11044(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11044);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825E6A74"))) PPC_WEAK_FUNC(sub_825E6A74);
PPC_FUNC_IMPL(__imp__sub_825E6A74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E6A78"))) PPC_WEAK_FUNC(sub_825E6A78);
PPC_FUNC_IMPL(__imp__sub_825E6A78) {
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
	// lbz r11,11070(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11070);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// beq cr6,0x825e6b30
	if (cr6.eq) goto loc_825E6B30;
	// bl 0x825e4a00
	sub_825E4A00(ctx, base);
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x8314d1dc
	__imp__VdEnableDisableClockGating(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x825e6b30
	if (!cr6.eq) goto loc_825E6B30;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825e6ad4
	if (!cr6.gt) goto loc_825E6AD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E6AD4:
	// lis r11,-16382
	r11.s64 = -1073610752;
	// li r10,129
	ctx.r10.s64 = 129;
	// ori r9,r11,8448
	ctx.r9.u64 = r11.u64 | 8448;
	// li r11,-1
	r11.s64 = -1;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// lis r11,-16382
	r11.s64 = -1073610752;
	// li r6,130
	ctx.r6.s64 = 130;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// ori r5,r11,8448
	ctx.r5.u64 = r11.u64 | 8448;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// lwz r11,-13696(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13696);
	// oris r11,r11,32769
	r11.u64 = r11.u64 | 2147549184;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// lwz r11,-13692(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13692);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_825E6B30:
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
	// lbz r10,11070(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11070);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwimi r10,r11,27,31,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 27) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// stb r10,11070(r31)
	PPC_STORE_U8(r31.u32 + 11070, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_825E6B58"))) PPC_WEAK_FUNC(sub_825E6B58);
PPC_FUNC_IMPL(__imp__sub_825E6B58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E6B5C"))) PPC_WEAK_FUNC(sub_825E6B5C);
PPC_FUNC_IMPL(__imp__sub_825E6B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E6B60"))) PPC_WEAK_FUNC(sub_825E6B60);
PPC_FUNC_IMPL(__imp__sub_825E6B60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x825e6b9c
	if (!cr6.eq) goto loc_825E6B9C;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x825e6b9c
	if (!cr0.eq) goto loc_825E6B9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825e6bd0
	goto loc_825E6BD0;
loc_825E6B9C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825e6bd8
	if (cr6.eq) goto loc_825E6BD8;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_825E6BA8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r3,480
	ctx.r4.s64 = ctx.r3.s64 + 480;
	// bl 0x825f9198
	sub_825F9198(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
loc_825E6BD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_825E6BD8:
	// lis r4,-23936
	ctx.r4.s64 = -1568669696;
	// li r3,480
	ctx.r3.s64 = 480;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// bne 0x825e6ba8
	if (!cr0.eq) goto loc_825E6BA8;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
}

__attribute__((alias("__imp__sub_825E6BFC"))) PPC_WEAK_FUNC(sub_825E6BFC);
PPC_FUNC_IMPL(__imp__sub_825E6BFC) {
	PPC_FUNC_PROLOGUE();
	// b 0x825e6b94
	// ERROR 825E6B94
	return;
}

__attribute__((alias("__imp__sub_825E6C00"))) PPC_WEAK_FUNC(sub_825E6C00);
PPC_FUNC_IMPL(__imp__sub_825E6C00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,120
	ctx.r4.s64 = 120;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825e4988
	sub_825E4988(ctx, base);
	// li r11,486
	r11.s64 = 486;
	// lbz r10,3(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 3);
	// li r9,917
	ctx.r9.s64 = 917;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r7,918
	ctx.r7.s64 = 918;
	// rlwinm r8,r10,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// li r11,3528
	r11.s64 = 3528;
	// li r6,3529
	ctx.r6.s64 = 3529;
	// li r5,3530
	ctx.r5.s64 = 3530;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r4,3531
	ctx.r4.s64 = 3531;
	// lbz r27,7(r30)
	r27.u64 = PPC_LOAD_U8(r30.u32 + 7);
	// li r29,3144
	r29.s64 = 3144;
	// li r28,3145
	r28.s64 = 3145;
	// or r8,r27,r8
	ctx.r8.u64 = r27.u64 | ctx.r8.u64;
	// li r10,3146
	ctx.r10.s64 = 3146;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r25,r8,0,0,23
	r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// li r26,3147
	r26.s64 = 3147;
	// li r27,3656
	r27.s64 = 3656;
	// li r24,3659
	r24.s64 = 3659;
	// li r9,3662
	ctx.r9.s64 = 3662;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// li r23,3665
	r23.s64 = 3665;
	// lbz r8,11(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 11);
	// li r22,3208
	r22.s64 = 3208;
	// or r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 | r25.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r25,r8,0,0,23
	r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lbz r8,15(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 15);
	// or r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 | r25.u64;
	// li r25,4100
	r25.s64 = 4100;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r8,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lbz r11,19(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 19);
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// li r7,3209
	ctx.r7.s64 = 3209;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,23(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 23);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r5,3224
	ctx.r5.s64 = 3224;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,27(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 27);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r4,3225
	ctx.r4.s64 = 3225;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,31(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 31);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r29.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r29,3226
	r29.s64 = 3226;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,35(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 35);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r28,3227
	r28.s64 = 3227;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,39(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 39);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// li r8,3210
	ctx.r8.s64 = 3210;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// rlwinm r6,r11,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r10,3211
	ctx.r10.s64 = 3211;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,43(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 43);
	// or r11,r11,r6
	r11.u64 = r11.u64 | ctx.r6.u64;
	// rlwinm r6,r11,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r26,3677
	r26.s64 = 3677;
	// lbz r11,47(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 47);
	// or r11,r11,r6
	r11.u64 = r11.u64 | ctx.r6.u64;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// rlwinm r6,r11,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,51(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 51);
	// or r11,r11,r6
	r11.u64 = r11.u64 | ctx.r6.u64;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// rlwinm r6,r11,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,55(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 55);
	// or r11,r11,r6
	r11.u64 = r11.u64 | ctx.r6.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r6,r11,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,59(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 59);
	// or r11,r11,r6
	r11.u64 = r11.u64 | ctx.r6.u64;
	// li r6,3668
	ctx.r6.s64 = 3668;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,63(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 63);
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,67(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 67);
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r7,3592
	ctx.r7.s64 = 3592;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,71(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 71);
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r8,3589
	ctx.r8.s64 = 3589;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,75(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 75);
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,79(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 79);
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// li r9,4103
	ctx.r9.s64 = 4103;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r5,3671
	ctx.r5.s64 = 3671;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r11,3674
	r11.s64 = 3674;
	// lbz r27,83(r30)
	r27.u64 = PPC_LOAD_U8(r30.u32 + 83);
	// or r10,r27,r10
	ctx.r10.u64 = r27.u64 | ctx.r10.u64;
	// li r27,3680
	r27.s64 = 3680;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// rlwinm r24,r10,0,0,23
	r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,87(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 87);
	// or r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 | r24.u64;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r29.u32);
	ctx.r3.u32 = ea;
	// rlwinm r4,r10,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,91(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 91);
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// rlwinm r4,r10,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,95(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 95);
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// rlwinm r4,r10,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,99(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 99);
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r4,r10,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,103(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 103);
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// li r8,3686
	ctx.r8.s64 = 3686;
	// li r4,3698
	ctx.r4.s64 = 3698;
	// li r29,3701
	r29.s64 = 3701;
	// li r28,3704
	r28.s64 = 3704;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,107(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 107);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,111(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 111);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// li r6,3692
	ctx.r6.s64 = 3692;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,115(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 115);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// li r5,3695
	ctx.r5.s64 = 3695;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,119(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 119);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// li r11,3683
	r11.s64 = 3683;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,123(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 123);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// li r9,3689
	ctx.r9.s64 = 3689;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r10,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,127(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 127);
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r10,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,131(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 131);
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r10,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r11,135(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 135);
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,139(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 139);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,143(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 143);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,147(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 147);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,151(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 151);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,155(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 155);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r29.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,159(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 159);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r9,3707
	ctx.r9.s64 = 3707;
	// lbz r11,163(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 163);
	// li r8,3618
	ctx.r8.s64 = 3618;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// li r10,3615
	ctx.r10.s64 = 3615;
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r7,3624
	ctx.r7.s64 = 3624;
	// li r6,3627
	ctx.r6.s64 = 3627;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r5,3633
	ctx.r5.s64 = 3633;
	// lbz r4,167(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 167);
	// li r11,3636
	r11.s64 = 3636;
	// li r29,3642
	r29.s64 = 3642;
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
	// li r4,3645
	ctx.r4.s64 = 3645;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// rlwinm r28,r9,0,0,23
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF00;
	// li r27,3540
	r27.s64 = 3540;
	// li r10,3844
	ctx.r10.s64 = 3844;
	// li r26,3845
	r26.s64 = 3845;
	// li r25,3846
	r25.s64 = 3846;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// li r24,3847
	r24.s64 = 3847;
	// lbz r21,171(r30)
	r21.u64 = PPC_LOAD_U8(r30.u32 + 171);
	// li r23,2069
	r23.s64 = 2069;
	// li r22,2133
	r22.s64 = 2133;
	// or r28,r21,r28
	r28.u64 = r21.u64 | r28.u64;
	// li r9,2584
	ctx.r9.s64 = 2584;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r21,r28,0,0,23
	r21.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// lbz r8,175(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 175);
	// or r8,r8,r21
	ctx.r8.u64 = ctx.r8.u64 | r21.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r28,r8,0,0,23
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lbz r8,179(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 179);
	// or r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 | r28.u64;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r8,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// li r6,2590
	ctx.r6.s64 = 2590;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lbz r8,183(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 183);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r8,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// li r5,72
	ctx.r5.s64 = 72;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lbz r8,187(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 187);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r8,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lbz r11,191(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 191);
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// li r7,2587
	ctx.r7.s64 = 2587;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r29.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,195(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 195);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,199(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 199);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,203(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 203);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,207(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 207);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,211(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 211);
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,215(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 215);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,219(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 219);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,223(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 223);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,227(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 227);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,231(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 231);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,235(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 235);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,239(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 239);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// ble cr6,0x825e71cc
	if (!cr6.gt) goto loc_825E71CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E71CC:
	// li r11,501
	r11.s64 = 501;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r11,8697
	r11.s64 = 8697;
	// li r9,23
	ctx.r9.s64 = 23;
	// li r8,501
	ctx.r8.s64 = 501;
	// li r7,1
	ctx.r7.s64 = 1;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825E7204"))) PPC_WEAK_FUNC(sub_825E7204);
PPC_FUNC_IMPL(__imp__sub_825E7204) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_825E7208"))) PPC_WEAK_FUNC(sub_825E7208);
PPC_FUNC_IMPL(__imp__sub_825E7208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825e7218
	if (!cr6.eq) {
		sub_825E7218(ctx, base);
		return;
	}
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7218"))) PPC_WEAK_FUNC(sub_825E7218);
PPC_FUNC_IMPL(__imp__sub_825E7218) {
	PPC_FUNC_PROLOGUE();
	// b 0x825e4888
	sub_825E4888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E721C"))) PPC_WEAK_FUNC(sub_825E721C);
PPC_FUNC_IMPL(__imp__sub_825E721C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

