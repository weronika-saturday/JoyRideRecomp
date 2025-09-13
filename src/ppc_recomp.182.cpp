#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82627804"))) PPC_WEAK_FUNC(sub_82627804);
PPC_FUNC_IMPL(__imp__sub_82627804) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82627808"))) PPC_WEAK_FUNC(sub_82627808);
PPC_FUNC_IMPL(__imp__sub_82627808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8262782c
	if (!cr6.lt) goto loc_8262782C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// blr 
	return;
loc_8262782C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// beq cr6,0x826278ac
	if (cr6.eq) goto loc_826278AC;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// addi r11,r4,-8
	r11.s64 = ctx.r4.s64 + -8;
loc_82627848:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82627894
	if (cr6.eq) goto loc_82627894;
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r7,r10,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r7,r10,24,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r6,r9,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwimi r7,r10,8,8,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r6,r9,24,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// rlwimi r6,r9,8,8,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// clrldi r10,r7,32
	ctx.r10.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwimi r6,r9,24,0,7
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0xFF000000) | (ctx.r6.u64 & 0xFFFFFFFF00FFFFFF);
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// b 0x82627898
	goto loc_82627898;
loc_82627894:
	// ldu r10,8(r11)
	ea = 8 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U64(ea);
	r11.u32 = ea;
loc_82627898:
	// stdu r10,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r8.u32 = ea;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// bdnz 0x82627848
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82627848;
loc_826278AC:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_826278B0"))) PPC_WEAK_FUNC(sub_826278B0);
PPC_FUNC_IMPL(__imp__sub_826278B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826278B4"))) PPC_WEAK_FUNC(sub_826278B4);
PPC_FUNC_IMPL(__imp__sub_826278B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826278B8"))) PPC_WEAK_FUNC(sub_826278B8);
PPC_FUNC_IMPL(__imp__sub_826278B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bge cr6,0x826278dc
	if (!cr6.lt) goto loc_826278DC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// blr 
	return;
loc_826278DC:
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_826278E8"))) PPC_WEAK_FUNC(sub_826278E8);
PPC_FUNC_IMPL(__imp__sub_826278E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826278EC"))) PPC_WEAK_FUNC(sub_826278EC);
PPC_FUNC_IMPL(__imp__sub_826278EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826278F0"))) PPC_WEAK_FUNC(sub_826278F0);
PPC_FUNC_IMPL(__imp__sub_826278F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r11,1
	r11.s64 = 1;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82627560
	sub_82627560(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82627930
	if (cr0.lt) goto loc_82627930;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_82627930:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82627944"))) PPC_WEAK_FUNC(sub_82627944);
PPC_FUNC_IMPL(__imp__sub_82627944) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82627948"))) PPC_WEAK_FUNC(sub_82627948);
PPC_FUNC_IMPL(__imp__sub_82627948) {
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
	// li r11,2
	r11.s64 = 2;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826275b0
	sub_826275B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82627974"))) PPC_WEAK_FUNC(sub_82627974);
PPC_FUNC_IMPL(__imp__sub_82627974) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82627978"))) PPC_WEAK_FUNC(sub_82627978);
PPC_FUNC_IMPL(__imp__sub_82627978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82627560
	sub_82627560(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x826279ac
	if (cr0.lt) goto loc_826279AC;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_826279AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826279C0"))) PPC_WEAK_FUNC(sub_826279C0);
PPC_FUNC_IMPL(__imp__sub_826279C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826279C4"))) PPC_WEAK_FUNC(sub_826279C4);
PPC_FUNC_IMPL(__imp__sub_826279C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826279C8"))) PPC_WEAK_FUNC(sub_826279C8);
PPC_FUNC_IMPL(__imp__sub_826279C8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_826279C8"))) PPC_WEAK_FUNC(sub_826279C8);
PPC_FUNC_IMPL(__imp__sub_826279C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82627560
	sub_82627560(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826279CC"))) PPC_WEAK_FUNC(sub_826279CC);
PPC_FUNC_IMPL(__imp__sub_826279CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826279D0"))) PPC_WEAK_FUNC(sub_826279D0);
PPC_FUNC_IMPL(__imp__sub_826279D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,64
	cr6.compare<uint32_t>(ctx.r4.u32, 64, xer);
	// bge cr6,0x82627a40
	if (!cr6.lt) goto loc_82627A40;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bgt cr6,0x82627a40
	if (cr6.gt) goto loc_82627A40;
	// rlwinm r11,r4,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82627a00
	if (cr0.eq) goto loc_82627A00;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_82627A00:
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82627a28
	if (cr6.eq) goto loc_82627A28;
	// lbz r8,1(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82627a28
	if (cr0.eq) goto loc_82627A28;
	// clrldi r8,r5,32
	ctx.r8.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// sld r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r8.u8 & 0x7F));
	// divdu r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 / ctx.r8.u64;
	// tdllei r8,0
	if (ctx.r8.u64 <= 0) __builtin_debugtrap();
loc_82627A28:
	// rlwimi r5,r10,31,0,29
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0xFFFFFFFC) | (ctx.r5.u64 & 0xFFFFFFFF00000003);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// std r6,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r6.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_82627A40:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
}

__attribute__((alias("__imp__sub_82627A48"))) PPC_WEAK_FUNC(sub_82627A48);
PPC_FUNC_IMPL(__imp__sub_82627A48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82627A4C"))) PPC_WEAK_FUNC(sub_82627A4C);
PPC_FUNC_IMPL(__imp__sub_82627A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82627A50"))) PPC_WEAK_FUNC(sub_82627A50);
PPC_FUNC_IMPL(__imp__sub_82627A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,64
	cr6.compare<uint32_t>(ctx.r4.u32, 64, xer);
	// blt cr6,0x82627a64
	if (cr6.lt) goto loc_82627A64;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82627A64:
	// rlwinm r11,r4,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82627a94
	if (cr0.eq) goto loc_82627A94;
	// rlwinm. r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82627a94
	if (!cr0.eq) goto loc_82627A94;
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
loc_82627A94:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
}

__attribute__((alias("__imp__sub_82627A9C"))) PPC_WEAK_FUNC(sub_82627A9C);
PPC_FUNC_IMPL(__imp__sub_82627A9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82627AA0"))) PPC_WEAK_FUNC(sub_82627AA0);
PPC_FUNC_IMPL(__imp__sub_82627AA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,64
	cr6.compare<uint32_t>(ctx.r4.u32, 64, xer);
	// blt cr6,0x82627ab8
	if (cr6.lt) goto loc_82627AB8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82627AB8:
	// cmplwi cr6,r4,63
	cr6.compare<uint32_t>(ctx.r4.u32, 63, xer);
	// bne cr6,0x82627ac8
	if (!cr6.eq) goto loc_82627AC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82627AC8:
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r10,r9
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm. r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82627af0
	if (cr0.eq) goto loc_82627AF0;
	// rlwinm. r8,r11,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82627af0
	if (cr0.eq) goto loc_82627AF0;
	// rlwinm r11,r11,0,2,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r11.u32);
	// blr 
	return;
loc_82627AF0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
}

__attribute__((alias("__imp__sub_82627AF8"))) PPC_WEAK_FUNC(sub_82627AF8);
PPC_FUNC_IMPL(__imp__sub_82627AF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82627AFC"))) PPC_WEAK_FUNC(sub_82627AFC);
PPC_FUNC_IMPL(__imp__sub_82627AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82627B00"))) PPC_WEAK_FUNC(sub_82627B00);
PPC_FUNC_IMPL(__imp__sub_82627B00) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x82626258
	sub_82626258(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82627bf8
	if (cr0.lt) goto loc_82627BF8;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// clrlwi r10,r11,26
	ctx.r10.u64 = r11.u32 & 0x3F;
	// cmplwi cr6,r10,63
	cr6.compare<uint32_t>(ctx.r10.u32, 63, xer);
	// beq cr6,0x82627bf8
	if (cr6.eq) goto loc_82627BF8;
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82627bd0
	if (cr0.eq) goto loc_82627BD0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82627948
	sub_82627948(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82627bf8
	if (cr0.lt) goto loc_82627BF8;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x82626678
	sub_82626678(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82627bf8
	if (cr0.lt) goto loc_82627BF8;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// clrlwi r10,r29,30
	ctx.r10.u64 = r29.u32 & 0x3;
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// bge cr6,0x82627c00
	if (!cr6.lt) goto loc_82627C00;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bgt cr6,0x82627c00
	if (cr6.gt) goto loc_82627C00;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r9,r9,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82627bb4
	if (cr0.eq) goto loc_82627BB4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82627bf8
	goto loc_82627BF8;
loc_82627BB4:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r10,r8,31,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 31) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// std r9,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r9.u64);
loc_82627BD0:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// clrlwi r4,r11,26
	ctx.r4.u64 = r11.u32 & 0x3F;
	// bl 0x82627a50
	sub_82627A50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82627bf8
	if (cr0.lt) goto loc_82627BF8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r11,8(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_82627BF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9464
	return;
loc_82627C00:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
}

__attribute__((alias("__imp__sub_82627C08"))) PPC_WEAK_FUNC(sub_82627C08);
PPC_FUNC_IMPL(__imp__sub_82627C08) {
	PPC_FUNC_PROLOGUE();
	// b 0x82627bf8
	// ERROR 82627BF8
	return;
}

__attribute__((alias("__imp__sub_82627C0C"))) PPC_WEAK_FUNC(sub_82627C0C);
PPC_FUNC_IMPL(__imp__sub_82627C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82627C10"))) PPC_WEAK_FUNC(sub_82627C10);
PPC_FUNC_IMPL(__imp__sub_82627C10) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// li r10,1
	ctx.r10.s64 = 1;
	// add r31,r11,r3
	r31.u64 = r11.u64 + ctx.r3.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// slw r6,r10,r11
	ctx.r6.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x82627518
	sub_82627518(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82627cc8
	if (cr6.lt) goto loc_82627CC8;
	// beq cr6,0x82627cac
	if (cr6.eq) goto loc_82627CAC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82627c90
	if (cr6.lt) goto loc_82627C90;
	// bne cr6,0x82627ce4
	if (!cr6.eq) goto loc_82627CE4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82627808
	sub_82627808(ctx, base);
	// b 0x82627ce0
	goto loc_82627CE0;
loc_82627C90:
	// ld r11,176(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82627780
	sub_82627780(ctx, base);
	// b 0x82627ce0
	goto loc_82627CE0;
loc_82627CAC:
	// ld r11,176(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, r11.u16);
	// bl 0x82627700
	sub_82627700(ctx, base);
	// b 0x82627ce0
	goto loc_82627CE0;
loc_82627CC8:
	// ld r11,176(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82627688
	sub_82627688(ctx, base);
loc_82627CE0:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82627CE4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82627CFC"))) PPC_WEAK_FUNC(sub_82627CFC);
PPC_FUNC_IMPL(__imp__sub_82627CFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82627D00"))) PPC_WEAK_FUNC(sub_82627D00);
PPC_FUNC_IMPL(__imp__sub_82627D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r3.u32);
}

__attribute__((alias("__imp__sub_82627D0C"))) PPC_WEAK_FUNC(sub_82627D0C);
PPC_FUNC_IMPL(__imp__sub_82627D0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82627D10"))) PPC_WEAK_FUNC(sub_82627D10);
PPC_FUNC_IMPL(__imp__sub_82627D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
}

__attribute__((alias("__imp__sub_82627D1C"))) PPC_WEAK_FUNC(sub_82627D1C);
PPC_FUNC_IMPL(__imp__sub_82627D1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82627D20"))) PPC_WEAK_FUNC(sub_82627D20);
PPC_FUNC_IMPL(__imp__sub_82627D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
}

__attribute__((alias("__imp__sub_82627D2C"))) PPC_WEAK_FUNC(sub_82627D2C);
PPC_FUNC_IMPL(__imp__sub_82627D2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82627D30"))) PPC_WEAK_FUNC(sub_82627D30);
PPC_FUNC_IMPL(__imp__sub_82627D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r30,r4,r5
	r30.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// addi r9,r31,-1
	ctx.r9.s64 = r31.s64 + -1;
	// addi r8,r11,15
	ctx.r8.s64 = r11.s64 + 15;
	// andc r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// subf r6,r3,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r3.s64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r29,-16(r7)
	PPC_STORE_U32(ctx.r7.u32 + -16, r29.u32);
	// stw r30,-12(r7)
	PPC_STORE_U32(ctx.r7.u32 + -12, r30.u32);
	// stw r6,-8(r7)
	PPC_STORE_U32(ctx.r7.u32 + -8, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82627D84"))) PPC_WEAK_FUNC(sub_82627D84);
PPC_FUNC_IMPL(__imp__sub_82627D84) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82627D88"))) PPC_WEAK_FUNC(sub_82627D88);
PPC_FUNC_IMPL(__imp__sub_82627D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -12);
	// lwz r9,-8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + -8);
	// stw r10,-16(r4)
	PPC_STORE_U32(ctx.r4.u32 + -16, ctx.r10.u32);
	// addi r5,r11,16
	ctx.r5.s64 = r11.s64 + 16;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r4,r9,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r9.s64;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
}

__attribute__((alias("__imp__sub_82627DB4"))) PPC_WEAK_FUNC(sub_82627DB4);
PPC_FUNC_IMPL(__imp__sub_82627DB4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82627DB8"))) PPC_WEAK_FUNC(sub_82627DB8);
PPC_FUNC_IMPL(__imp__sub_82627DB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82627DBC"))) PPC_WEAK_FUNC(sub_82627DBC);
PPC_FUNC_IMPL(__imp__sub_82627DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82627DC0"))) PPC_WEAK_FUNC(sub_82627DC0);
PPC_FUNC_IMPL(__imp__sub_82627DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
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

__attribute__((alias("__imp__sub_82627E14"))) PPC_WEAK_FUNC(sub_82627E14);
PPC_FUNC_IMPL(__imp__sub_82627E14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82627E18"))) PPC_WEAK_FUNC(sub_82627E18);
PPC_FUNC_IMPL(__imp__sub_82627E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,-12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + -12);
	// addi r4,r4,-16
	ctx.r4.s64 = ctx.r4.s64 + -16;
	// stw r9,-16(r11)
	PPC_STORE_U32(r11.u32 + -16, ctx.r9.u32);
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
}

__attribute__((alias("__imp__sub_82627E44"))) PPC_WEAK_FUNC(sub_82627E44);
PPC_FUNC_IMPL(__imp__sub_82627E44) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82627E48"))) PPC_WEAK_FUNC(sub_82627E48);
PPC_FUNC_IMPL(__imp__sub_82627E48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82627E4C"))) PPC_WEAK_FUNC(sub_82627E4C);
PPC_FUNC_IMPL(__imp__sub_82627E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82627E50"))) PPC_WEAK_FUNC(sub_82627E50);
PPC_FUNC_IMPL(__imp__sub_82627E50) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,48(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82627ED8"))) PPC_WEAK_FUNC(sub_82627ED8);
PPC_FUNC_IMPL(__imp__sub_82627ED8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82627EDC"))) PPC_WEAK_FUNC(sub_82627EDC);
PPC_FUNC_IMPL(__imp__sub_82627EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82627EE0"))) PPC_WEAK_FUNC(sub_82627EE0);
PPC_FUNC_IMPL(__imp__sub_82627EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
}

__attribute__((alias("__imp__sub_82627F04"))) PPC_WEAK_FUNC(sub_82627F04);
PPC_FUNC_IMPL(__imp__sub_82627F04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82627F08"))) PPC_WEAK_FUNC(sub_82627F08);
PPC_FUNC_IMPL(__imp__sub_82627F08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82627f44
	if (!cr6.gt) goto loc_82627F44;
	// lis r9,32640
	ctx.r9.s64 = 2139095040;
loc_82627F1C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r7,r8,0,1,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x82627f50
	if (cr6.eq) goto loc_82627F50;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// blt cr6,0x82627f1c
	if (cr6.lt) goto loc_82627F1C;
loc_82627F44:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82627F50:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82627F5C"))) PPC_WEAK_FUNC(sub_82627F5C);
PPC_FUNC_IMPL(__imp__sub_82627F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82627F60"))) PPC_WEAK_FUNC(sub_82627F60);
PPC_FUNC_IMPL(__imp__sub_82627F60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,32640
	ctx.r9.s64 = 2139095040;
loc_82627F6C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r7,r8,0,1,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x82627fa0
	if (cr6.eq) goto loc_82627FA0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// blt cr6,0x82627f6c
	if (cr6.lt) goto loc_82627F6C;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82627FA0:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
}

__attribute__((alias("__imp__sub_82627FA8"))) PPC_WEAK_FUNC(sub_82627FA8);
PPC_FUNC_IMPL(__imp__sub_82627FA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82627FAC"))) PPC_WEAK_FUNC(sub_82627FAC);
PPC_FUNC_IMPL(__imp__sub_82627FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82627FB0"))) PPC_WEAK_FUNC(sub_82627FB0);
PPC_FUNC_IMPL(__imp__sub_82627FB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,32640
	ctx.r9.s64 = 2139095040;
loc_82627FBC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r7,r8,0,1,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x82627ff0
	if (cr6.eq) goto loc_82627FF0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x82627fbc
	if (cr6.lt) goto loc_82627FBC;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82627FF0:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
}

__attribute__((alias("__imp__sub_82627FF8"))) PPC_WEAK_FUNC(sub_82627FF8);
PPC_FUNC_IMPL(__imp__sub_82627FF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82627FFC"))) PPC_WEAK_FUNC(sub_82627FFC);
PPC_FUNC_IMPL(__imp__sub_82627FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82628000"))) PPC_WEAK_FUNC(sub_82628000);
PPC_FUNC_IMPL(__imp__sub_82628000) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82627f60
	sub_82627F60(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82628054
	if (cr6.eq) goto loc_82628054;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stvewx v13,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-25600(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f1
	cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// blt cr6,0x82628058
	if (cr6.lt) goto loc_82628058;
loc_82628054:
	// li r11,0
	r11.s64 = 0;
loc_82628058:
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r11.u8);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8262806C"))) PPC_WEAK_FUNC(sub_8262806C);
PPC_FUNC_IMPL(__imp__sub_8262806C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82628070"))) PPC_WEAK_FUNC(sub_82628070);
PPC_FUNC_IMPL(__imp__sub_82628070) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82627fb0
	sub_82627FB0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826280c4
	if (cr6.eq) goto loc_826280C4;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// vmsum4fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stvewx v13,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-25600(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f1
	cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// blt cr6,0x826280c8
	if (cr6.lt) goto loc_826280C8;
loc_826280C4:
	// li r11,0
	r11.s64 = 0;
loc_826280C8:
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r11.u8);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826280DC"))) PPC_WEAK_FUNC(sub_826280DC);
PPC_FUNC_IMPL(__imp__sub_826280DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826280E0"))) PPC_WEAK_FUNC(sub_826280E0);
PPC_FUNC_IMPL(__imp__sub_826280E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r11,16
	r11.s64 = 16;
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v12,r0,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vspltw v11,v0,1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// li r10,32
	ctx.r10.s64 = 32;
	// vspltw v10,v0,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// li r9,48
	ctx.r9.s64 = 48;
	// vmulfp128 v9,v12,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v8,r4,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r4.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r4,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r4,r9
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmaddfp v5,v8,v11,v9
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v4,v7,v10,v5
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v5.f32)));
	// vaddfp v3,v4,v6
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v6.f32)));
	// stvx128 v3,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_82628120"))) PPC_WEAK_FUNC(sub_82628120);
PPC_FUNC_IMPL(__imp__sub_82628120) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82628124"))) PPC_WEAK_FUNC(sub_82628124);
PPC_FUNC_IMPL(__imp__sub_82628124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82628128"))) PPC_WEAK_FUNC(sub_82628128);
PPC_FUNC_IMPL(__imp__sub_82628128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,48
	r11.s64 = 48;
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r9,32
	ctx.r9.s64 = 32;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lvx128 v12,r4,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32 + r11.u32) & ~0xF), VectorMaskL));
	// addi r7,r8,7520
	ctx.r7.s64 = ctx.r8.s64 + 7520;
	// vsubfp v11,v0,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v10,r4,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r4,r9
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v8,v10,v11
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32), 0xEF));
	// vmsum3fp128 v7,v9,v11
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32), 0xEF));
	// vmsum3fp128 v6,v13,v11
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32), 0xEF));
	// vmrghw v5,v8,v0
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// vmrghw v4,v6,v7
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// vmrghw v3,v4,v5
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// stvx128 v3,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_82628174"))) PPC_WEAK_FUNC(sub_82628174);
PPC_FUNC_IMPL(__imp__sub_82628174) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82628178"))) PPC_WEAK_FUNC(sub_82628178);
PPC_FUNC_IMPL(__imp__sub_82628178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r11,16
	r11.s64 = 16;
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v12,r0,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vspltw v11,v0,1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// li r10,32
	ctx.r10.s64 = 32;
	// vspltw v10,v0,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v9,v12,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v8,r4,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r4.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r4,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmaddfp v6,v8,v11,v9
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v5,v7,v10,v6
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v6.f32)));
	// stvx128 v5,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_826281AC"))) PPC_WEAK_FUNC(sub_826281AC);
PPC_FUNC_IMPL(__imp__sub_826281AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826281B0"))) PPC_WEAK_FUNC(sub_826281B0);
PPC_FUNC_IMPL(__imp__sub_826281B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r11,16
	r11.s64 = 16;
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v12,r0,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vspltw v11,v0,1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// li r10,32
	ctx.r10.s64 = 32;
	// vspltw v10,v0,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v9,v12,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v8,r4,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r4.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r4,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmaddfp v6,v8,v11,v9
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v5,v7,v10,v6
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v6.f32)));
	// stvx128 v5,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_826281E4"))) PPC_WEAK_FUNC(sub_826281E4);
PPC_FUNC_IMPL(__imp__sub_826281E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826281E8"))) PPC_WEAK_FUNC(sub_826281E8);
PPC_FUNC_IMPL(__imp__sub_826281E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v31{};
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v12,r0,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,7648
	ctx.r8.s64 = ctx.r9.s64 + 7648;
	// lvx128 v9,r4,r10
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v8,v12,v9
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v9.f32)));
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v0,3
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vpermwi128 v11,v0,135
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// lvx128 v12,r0,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v10,v0,99
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vmaddfp v12,v13,v13,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmsum3fp128 v7,v0,v8
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// vpermwi128 v6,v8,99
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x9C));
	// vpermwi128 v5,v8,135
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x78));
	// vmulfp128 v4,v11,v6
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v6.f32)));
	// vmulfp128 v12,v8,v12
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v3,v10,v5
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v5.f32)));
	// vspltw v11,v7,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), 0xFF));
	// vsubfp v10,v3,v4
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v4.f32)));
	// vmaddfp v0,v11,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v13,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vaddfp v2,v0,v0
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v2,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v1,r0,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vaddfp v31,v2,v1
	_mm_store_ps(v31.f32, _mm_add_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v1.f32)));
	// stvx128 v31,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_82628258"))) PPC_WEAK_FUNC(sub_82628258);
PPC_FUNC_IMPL(__imp__sub_82628258) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262825C"))) PPC_WEAK_FUNC(sub_8262825C);
PPC_FUNC_IMPL(__imp__sub_8262825C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82628260"))) PPC_WEAK_FUNC(sub_82628260);
PPC_FUNC_IMPL(__imp__sub_82628260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// vsubfp v11,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r10,7648
	ctx.r8.s64 = ctx.r10.s64 + 7648;
	// addi r7,r9,7536
	ctx.r7.s64 = ctx.r9.s64 + 7536;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r6,32
	ctx.r6.s64 = 32;
	// vspltw v13,v0,3
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vpermwi128 v10,v0,99
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// lvx128 v12,r0,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v9,v0,135
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vmaddfp v12,v13,v13,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmsum3fp128 v8,v0,v11
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32), 0xEF));
	// vpermwi128 v7,v11,135
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x78));
	// vpermwi128 v6,v11,99
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x9C));
	// vmulfp128 v5,v7,v10
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v4,v6,v9
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v12,v11,v12
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)));
	// vspltw v11,v8,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xFF));
	// vsubfp v10,v4,v5
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v5.f32)));
	// vmaddfp v0,v11,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v13,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vaddfp v3,v0,v0
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v3,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r7
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r4,r6
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// vrefp v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v11,v0,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v11,v0,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v2,v3,v0
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v2,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826282EC"))) PPC_WEAK_FUNC(sub_826282EC);
PPC_FUNC_IMPL(__imp__sub_826282EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826282F0"))) PPC_WEAK_FUNC(sub_826282F0);
PPC_FUNC_IMPL(__imp__sub_826282F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826282F4"))) PPC_WEAK_FUNC(sub_826282F4);
PPC_FUNC_IMPL(__imp__sub_826282F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826282F8"))) PPC_WEAK_FUNC(sub_826282F8);
PPC_FUNC_IMPL(__imp__sub_826282F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826282FC"))) PPC_WEAK_FUNC(sub_826282FC);
PPC_FUNC_IMPL(__imp__sub_826282FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82628300"))) PPC_WEAK_FUNC(sub_82628300);
PPC_FUNC_IMPL(__imp__sub_82628300) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82628308"))) PPC_WEAK_FUNC(sub_82628308);
PPC_FUNC_IMPL(__imp__sub_82628308) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82628360
	if (cr6.eq) goto loc_82628360;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r10,r11,-12796
	ctx.r10.s64 = r11.s64 + -12796;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// beq cr6,0x82628360
	if (cr6.eq) goto loc_82628360;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82629090
	sub_82629090(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82628360
	if (cr6.eq) goto loc_82628360;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82629be0
	sub_82629BE0(ctx, base);
loc_82628360:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82628364"))) PPC_WEAK_FUNC(sub_82628364);
PPC_FUNC_IMPL(__imp__sub_82628364) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82628368"))) PPC_WEAK_FUNC(sub_82628368);
PPC_FUNC_IMPL(__imp__sub_82628368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
}

__attribute__((alias("__imp__sub_82628380"))) PPC_WEAK_FUNC(sub_82628380);
PPC_FUNC_IMPL(__imp__sub_82628380) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82628384"))) PPC_WEAK_FUNC(sub_82628384);
PPC_FUNC_IMPL(__imp__sub_82628384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82628388"))) PPC_WEAK_FUNC(sub_82628388);
PPC_FUNC_IMPL(__imp__sub_82628388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
}

__attribute__((alias("__imp__sub_826283BC"))) PPC_WEAK_FUNC(sub_826283BC);
PPC_FUNC_IMPL(__imp__sub_826283BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826283C0"))) PPC_WEAK_FUNC(sub_826283C0);
PPC_FUNC_IMPL(__imp__sub_826283C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826283C4"))) PPC_WEAK_FUNC(sub_826283C4);
PPC_FUNC_IMPL(__imp__sub_826283C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826283C8"))) PPC_WEAK_FUNC(sub_826283C8);
PPC_FUNC_IMPL(__imp__sub_826283C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-13048
	ctx.r3.s64 = r11.s64 + -13048;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826283D4"))) PPC_WEAK_FUNC(sub_826283D4);
PPC_FUNC_IMPL(__imp__sub_826283D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826283D8"))) PPC_WEAK_FUNC(sub_826283D8);
PPC_FUNC_IMPL(__imp__sub_826283D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,52
	ctx.r9.s64 = 52;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x826289a0
	sub_826289A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82628418"))) PPC_WEAK_FUNC(sub_82628418);
PPC_FUNC_IMPL(__imp__sub_82628418) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262841C"))) PPC_WEAK_FUNC(sub_8262841C);
PPC_FUNC_IMPL(__imp__sub_8262841C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82628420"))) PPC_WEAK_FUNC(sub_82628420);
PPC_FUNC_IMPL(__imp__sub_82628420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,-12800(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -12800);
	// stw r3,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r3.u32);
}

__attribute__((alias("__imp__sub_8262842C"))) PPC_WEAK_FUNC(sub_8262842C);
PPC_FUNC_IMPL(__imp__sub_8262842C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82628430"))) PPC_WEAK_FUNC(sub_82628430);
PPC_FUNC_IMPL(__imp__sub_82628430) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,-12800(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -12800);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82628498
	if (!cr6.eq) goto loc_82628498;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,52
	ctx.r9.s64 = 52;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x826289a0
	sub_826289A0(ctx, base);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// bl 0x82628918
	sub_82628918(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82628498:
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826284AC"))) PPC_WEAK_FUNC(sub_826284AC);
PPC_FUNC_IMPL(__imp__sub_826284AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826284B0"))) PPC_WEAK_FUNC(sub_826284B0);
PPC_FUNC_IMPL(__imp__sub_826284B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,-12800(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -12800);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826284C0"))) PPC_WEAK_FUNC(sub_826284C0);
PPC_FUNC_IMPL(__imp__sub_826284C0) {
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
	// lwz r28,0(r13)
	r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,8
	r29.s64 = 8;
	// lis r11,9183
	r11.s64 = 601817088;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// ori r30,r11,17748
	r30.u64 = r11.u64 | 17748;
	// lwzx r9,r29,r28
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// lwz r31,-12800(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12800);
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, xer);
	// bne cr6,0x82628504
	if (!cr6.eq) goto loc_82628504;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_82628504:
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stwx r30,r29,r28
	PPC_STORE_U32(r29.u32 + r28.u32, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8262851C"))) PPC_WEAK_FUNC(sub_8262851C);
PPC_FUNC_IMPL(__imp__sub_8262851C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82628520"))) PPC_WEAK_FUNC(sub_82628520);
PPC_FUNC_IMPL(__imp__sub_82628520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,-12800(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -12800);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// bgtlr 
	if (cr0.gt) return;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
}

__attribute__((alias("__imp__sub_8262854C"))) PPC_WEAK_FUNC(sub_8262854C);
PPC_FUNC_IMPL(__imp__sub_8262854C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82628550"))) PPC_WEAK_FUNC(sub_82628550);
PPC_FUNC_IMPL(__imp__sub_82628550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82628554"))) PPC_WEAK_FUNC(sub_82628554);
PPC_FUNC_IMPL(__imp__sub_82628554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82628558"))) PPC_WEAK_FUNC(sub_82628558);
PPC_FUNC_IMPL(__imp__sub_82628558) {
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
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826285fc
	if (cr6.eq) goto loc_826285FC;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r31,-12800(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -12800);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x826285f0
	if (!cr6.eq) goto loc_826285F0;
	// lwz r26,0(r13)
	r26.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r27,8
	r27.s64 = 8;
	// lis r11,9183
	r11.s64 = 601817088;
	// ori r30,r11,17748
	r30.u64 = r11.u64 | 17748;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x826285f0
	if (cr6.eq) goto loc_826285F0;
	// addi r29,r31,24
	r29.s64 = r31.s64 + 24;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stwx r30,r27,r26
	PPC_STORE_U32(r27.u32 + r26.u32, r30.u32);
	// lhz r11,6(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 6);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// sth r9,6(r28)
	PPC_STORE_U16(r28.u32 + 6, ctx.r9.u16);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addic. r11,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	r11.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bgt 0x826285fc
	if (cr0.gt) goto loc_826285FC;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stwx r11,r27,r26
	PPC_STORE_U32(r27.u32 + r26.u32, r11.u32);
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_826285F0:
	// lhz r11,6(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,6(r28)
	PPC_STORE_U16(r28.u32 + 6, ctx.r10.u16);
loc_826285FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82628600"))) PPC_WEAK_FUNC(sub_82628600);
PPC_FUNC_IMPL(__imp__sub_82628600) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82628604"))) PPC_WEAK_FUNC(sub_82628604);
PPC_FUNC_IMPL(__imp__sub_82628604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82628608"))) PPC_WEAK_FUNC(sub_82628608);
PPC_FUNC_IMPL(__imp__sub_82628608) {
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
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826286dc
	if (cr6.eq) goto loc_826286DC;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82628658
	if (!cr6.eq) goto loc_82628658;
	// li r11,0
	r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_82628658:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r31,-12800(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12800);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x826286d4
	if (!cr6.eq) goto loc_826286D4;
	// lwz r26,0(r13)
	r26.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r27,8
	r27.s64 = 8;
	// lis r10,9183
	ctx.r10.s64 = 601817088;
	// ori r30,r10,17748
	r30.u64 = ctx.r10.u64 | 17748;
	// lwzx r9,r27,r26
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, xer);
	// beq cr6,0x826286d4
	if (cr6.eq) goto loc_826286D4;
	// addi r28,r31,24
	r28.s64 = r31.s64 + 24;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stwx r30,r27,r26
	PPC_STORE_U32(r27.u32 + r26.u32, r30.u32);
	// lhz r11,6(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 6);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// sth r9,6(r29)
	PPC_STORE_U16(r29.u32 + 6, ctx.r9.u16);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addic. r11,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	r11.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bgt 0x826286dc
	if (cr0.gt) goto loc_826286DC;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stwx r11,r27,r26
	PPC_STORE_U32(r27.u32 + r26.u32, r11.u32);
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_826286D4:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// sth r11,6(r29)
	PPC_STORE_U16(r29.u32 + 6, r11.u16);
loc_826286DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826286E0"))) PPC_WEAK_FUNC(sub_826286E0);
PPC_FUNC_IMPL(__imp__sub_826286E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826286E4"))) PPC_WEAK_FUNC(sub_826286E4);
PPC_FUNC_IMPL(__imp__sub_826286E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826286E8"))) PPC_WEAK_FUNC(sub_826286E8);
PPC_FUNC_IMPL(__imp__sub_826286E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r28,-12800(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + -12800);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826287a0
	if (cr6.eq) goto loc_826287A0;
	// lwz r25,0(r13)
	r25.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r26,8
	r26.s64 = 8;
	// lis r11,9183
	r11.s64 = 601817088;
	// ori r31,r11,17748
	r31.u64 = r11.u64 | 17748;
	// lwzx r10,r26,r25
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + r25.u32);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// beq cr6,0x826287a0
	if (cr6.eq) goto loc_826287A0;
	// addi r27,r28,24
	r27.s64 = r28.s64 + 24;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r11,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r11.u32);
	// stwx r31,r26,r25
	PPC_STORE_U32(r26.u32 + r25.u32, r31.u32);
	// ble cr6,0x82628778
	if (!cr6.gt) goto loc_82628778;
	// mtctr r30
	ctr.u64 = r30.u64;
loc_82628754:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82628770
	if (cr6.eq) goto loc_82628770;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r9.u16);
loc_82628770:
	// add r29,r29,r24
	r29.u64 = r29.u64 + r24.u64;
	// bdnz 0x82628754
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82628754;
loc_82628778:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r11.u32);
	// bgt 0x826287d0
	if (cr0.gt) goto loc_826287D0;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stwx r11,r26,r25
	PPC_STORE_U32(r26.u32 + r25.u32, r11.u32);
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_826287A0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x826287d0
	if (!cr6.gt) goto loc_826287D0;
	// mtctr r30
	ctr.u64 = r30.u64;
loc_826287AC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826287c8
	if (cr6.eq) goto loc_826287C8;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r9.u16);
loc_826287C8:
	// add r29,r29,r24
	r29.u64 = r29.u64 + r24.u64;
	// bdnz 0x826287ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826287AC;
loc_826287D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_826287D4"))) PPC_WEAK_FUNC(sub_826287D4);
PPC_FUNC_IMPL(__imp__sub_826287D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826287D8"))) PPC_WEAK_FUNC(sub_826287D8);
PPC_FUNC_IMPL(__imp__sub_826287D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r28,-12800(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + -12800);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826288b0
	if (cr6.eq) goto loc_826288B0;
	// lwz r26,0(r13)
	r26.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r25,8
	r25.s64 = 8;
	// lis r11,9183
	r11.s64 = 601817088;
	// ori r31,r11,17748
	r31.u64 = r11.u64 | 17748;
	// lwzx r10,r25,r26
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + r26.u32);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// beq cr6,0x826288b0
	if (cr6.eq) goto loc_826288B0;
	// addi r27,r28,24
	r27.s64 = r28.s64 + 24;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r11,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r11.u32);
	// stwx r31,r25,r26
	PPC_STORE_U32(r25.u32 + r26.u32, r31.u32);
	// ble cr6,0x82628888
	if (!cr6.gt) goto loc_82628888;
loc_82628840:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8262887c
	if (cr6.eq) goto loc_8262887C;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8262887c
	if (!cr6.eq) goto loc_8262887C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8262887C:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r29,r29,r24
	r29.u64 = r29.u64 + r24.u64;
	// bne 0x82628840
	if (!cr0.eq) goto loc_82628840;
loc_82628888:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r11.u32);
	// bgt 0x82628900
	if (cr0.gt) goto loc_82628900;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stwx r11,r25,r26
	PPC_STORE_U32(r25.u32 + r26.u32, r11.u32);
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_826288B0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82628900
	if (!cr6.gt) goto loc_82628900;
loc_826288B8:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826288f4
	if (cr6.eq) goto loc_826288F4;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x826288f4
	if (!cr6.eq) goto loc_826288F4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826288F4:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r29,r29,r24
	r29.u64 = r29.u64 + r24.u64;
	// bne 0x826288b8
	if (!cr0.eq) goto loc_826288B8;
loc_82628900:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82628904"))) PPC_WEAK_FUNC(sub_82628904);
PPC_FUNC_IMPL(__imp__sub_82628904) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82628908"))) PPC_WEAK_FUNC(sub_82628908);
PPC_FUNC_IMPL(__imp__sub_82628908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,-12800(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -12800);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82628918"))) PPC_WEAK_FUNC(sub_82628918);
PPC_FUNC_IMPL(__imp__sub_82628918) {
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
	// lis r31,-31933
	r31.s64 = -2092761088;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-12800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -12800);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82628980
	if (cr6.eq) goto loc_82628980;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82628980
	if (cr6.eq) goto loc_82628980;
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r3,6
	r11.s64 = ctx.r3.s64 + 6;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82628980
	if (!cr6.eq) goto loc_82628980;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82628980:
	// stw r30,-12800(r31)
	PPC_STORE_U32(r31.u32 + -12800, r30.u32);
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

__attribute__((alias("__imp__sub_82628998"))) PPC_WEAK_FUNC(sub_82628998);
PPC_FUNC_IMPL(__imp__sub_82628998) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262899C"))) PPC_WEAK_FUNC(sub_8262899C);
PPC_FUNC_IMPL(__imp__sub_8262899C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826289A0"))) PPC_WEAK_FUNC(sub_826289A0);
PPC_FUNC_IMPL(__imp__sub_826289A0) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,5396
	ctx.r10.s64 = r11.s64 + 5396;
	// li r28,1
	r28.s64 = 1;
	// li r9,-47
	ctx.r9.s64 = -47;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r29,0
	r29.s64 = 0;
	// sth r28,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r28.u16);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// sth r29,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, r29.u16);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// bl 0x8262a2b8
	sub_8262A2B8(ctx, base);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8262a218
	sub_8262A218(ctx, base);
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826289FC"))) PPC_WEAK_FUNC(sub_826289FC);
PPC_FUNC_IMPL(__imp__sub_826289FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82628A00"))) PPC_WEAK_FUNC(sub_82628A00);
PPC_FUNC_IMPL(__imp__sub_82628A00) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8262a2e8
	sub_8262A2E8(ctx, base);
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

__attribute__((alias("__imp__sub_82628A2C"))) PPC_WEAK_FUNC(sub_82628A2C);
PPC_FUNC_IMPL(__imp__sub_82628A2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82628A30"))) PPC_WEAK_FUNC(sub_82628A30);
PPC_FUNC_IMPL(__imp__sub_82628A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lis r11,-32250
	r11.s64 = -2113536000;
	// vaddfp v0,v13,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vpermwi128 v10,v13,99
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// addi r10,r11,7536
	ctx.r10.s64 = r11.s64 + 7536;
	// vspltw v9,v13,3
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// vpermwi128 v7,v13,135
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r7,r9,-12736
	ctx.r7.s64 = ctx.r9.s64 + -12736;
	// li r6,32
	ctx.r6.s64 = 32;
	// lvx128 v5,r0,r10
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lvx128 v13,r7,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r7,r6
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v6,v0,99
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vmulfp128 v4,v10,v0
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)));
	// vpermwi128 v2,v0,135
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vmulfp128 v3,v6,v9
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v9.f32)));
	// vnmsubfp v5,v10,v6,v5
	_mm_store_ps(ctx.v5.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v5.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v11,v2,v9,v4
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v4.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v7,v0,v3
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v3.f32)));
	// vnmsubfp v1,v7,v2,v5
	_mm_store_ps(ctx.v1.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v5.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vsel v4,v11,v0,v13
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vsel v7,v0,v1,v13
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v1.u8))));
	// vsel v13,v1,v11,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v1.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vsel v9,v4,v1,v12
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v4.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v1.u8))));
	// vsel v10,v7,v11,v12
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vsel v12,v13,v0,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// stvx128 v9,r3,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r3,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_82628AB4"))) PPC_WEAK_FUNC(sub_82628AB4);
PPC_FUNC_IMPL(__imp__sub_82628AB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82628AB8"))) PPC_WEAK_FUNC(sub_82628AB8);
PPC_FUNC_IMPL(__imp__sub_82628AB8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262b5e0
	sub_8262B5E0(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r8,r10,7536
	ctx.r8.s64 = ctx.r10.s64 + 7536;
	// addi r7,r9,-12736
	ctx.r7.s64 = ctx.r9.s64 + -12736;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r6,128
	ctx.r6.s64 = 128;
	// vaddfp v13,v0,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vpermwi128 v10,v0,99
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vspltw v9,v0,3
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// li r5,32
	ctx.r5.s64 = 32;
	// lvx128 v5,r0,r8
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v7,v0,135
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// lvx128 v12,r7,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v6,v13,99
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// vmulfp128 v4,v10,v13
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)));
	// vpermwi128 v2,v13,135
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// lvx128 v0,r7,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v3,v6,v9
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v9.f32)));
	// vnmsubfp v5,v10,v6,v5
	_mm_store_ps(ctx.v5.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v5.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v11,v2,v9,v4
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v4.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v7,v13,v3
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v3.f32)));
	// vnmsubfp v1,v7,v2,v5
	_mm_store_ps(ctx.v1.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v5.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vsel v4,v11,v13,v0
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vsel v7,v13,v1,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v1.u8))));
	// vsel v0,v1,v11,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v1.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vsel v9,v4,v1,v12
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v4.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v1.u8))));
	// vsel v10,v7,v11,v12
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vsel v12,v0,v13,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvx128 v9,r31,r3
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r31,r4
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82628B6C"))) PPC_WEAK_FUNC(sub_82628B6C);
PPC_FUNC_IMPL(__imp__sub_82628B6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82628B70"))) PPC_WEAK_FUNC(sub_82628B70);
PPC_FUNC_IMPL(__imp__sub_82628B70) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stvewx v13,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,-25600(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// lfs f13,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f1
	cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// ble cr6,0x82628ba8
	if (!cr6.gt) goto loc_82628BA8;
loc_82628B9C:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82628BA8:
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v12,v13,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v12,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f1
	cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// bgt cr6,0x82628b9c
	if (cr6.gt) goto loc_82628B9C;
	// addi r11,r4,32
	r11.s64 = ctx.r4.s64 + 32;
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v12,v13,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v12,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f1
	cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// bgt cr6,0x82628b9c
	if (cr6.gt) goto loc_82628B9C;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v12,v0,135
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v11,v0,99
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v9,v13,99
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// lis r11,-32250
	r11.s64 = -2113536000;
	// vpermwi128 v8,v13,135
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,5456
	ctx.r9.s64 = r11.s64 + 5456;
	// stfs f1,-16(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// vspltisw v7,-1
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// vmulfp128 v6,v12,v9
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v9.f32)));
	// li r7,224
	ctx.r7.s64 = 224;
	// vmulfp128 v5,v11,v8
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v8.f32)));
	// addi r6,r8,-12480
	ctx.r6.s64 = ctx.r8.s64 + -12480;
	// lvx128 v4,r0,r10
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v3,v4,0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), 0xFF));
	// vsubfp v2,v5,v6
	_mm_store_ps(ctx.v2.f32, _mm_sub_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v6.f32)));
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r6,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vsubfp v1,v2,v10
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v10.f32)));
	// vand v31,v1,v0
	_mm_store_si128((__m128i*)v31.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcmpgefp v30,v3,v31
	_mm_store_ps(v30.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(v31.f32)));
	// vor v29,v30,v13
	_mm_store_si128((__m128i*)v29.u8, _mm_or_si128(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vcmpequw. v28,v29,v7
	_mm_store_si128((__m128i*)v28.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v29.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	cr6.setFromMask(_mm_load_ps(v28.f32), 0xF);
	// mfocrf r5,2
	ctx.r5.u64 = (cr6.lt << 7) | (cr6.gt << 6) | (cr6.eq << 5) | (cr6.so << 4);
	// rlwinm r4,r5,25,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
}

__attribute__((alias("__imp__sub_82628C6C"))) PPC_WEAK_FUNC(sub_82628C6C);
PPC_FUNC_IMPL(__imp__sub_82628C6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82628C70"))) PPC_WEAK_FUNC(sub_82628C70);
PPC_FUNC_IMPL(__imp__sub_82628C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCVRegister v31{};
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262b9e0
	sub_8262B9E0(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r8,r10,7536
	ctx.r8.s64 = ctx.r10.s64 + 7536;
	// addi r7,r9,-12736
	ctx.r7.s64 = ctx.r9.s64 + -12736;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r6,128
	ctx.r6.s64 = 128;
	// vaddfp v13,v0,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vpermwi128 v11,v0,99
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vspltw v8,v0,3
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// li r5,32
	ctx.r5.s64 = 32;
	// lvx128 v5,r0,r8
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v6,v0,135
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// lvx128 v12,r7,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v3,v13,99
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// vmulfp128 v4,v11,v13
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)));
	// vpermwi128 v2,v13,135
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// lvx128 v0,r7,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// vor v9,v3,v3
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// vmulfp128 v3,v3,v8
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v8.f32)));
	// vnmsubfp v5,v11,v9,v5
	_mm_store_ps(ctx.v5.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v5.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v10,v2,v8,v4
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v4.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v1,v6,v13,v3
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v3.f32)));
	// vnmsubfp v31,v6,v2,v5
	_mm_store_ps(v31.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v5.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vsel v4,v10,v1,v0
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v10.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v1.u8))));
	// vsel v7,v1,v31,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v1.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)v31.u8))));
	// vsel v0,v31,v10,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)v31.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// vsel v9,v4,v31,v12
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v4.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)v31.u8))));
	// vsel v10,v7,v10,v12
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// vsel v12,v0,v1,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v1.u8))));
	// stvx128 v9,r31,r3
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r31,r4
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82628D2C"))) PPC_WEAK_FUNC(sub_82628D2C);
PPC_FUNC_IMPL(__imp__sub_82628D2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82628D30"))) PPC_WEAK_FUNC(sub_82628D30);
PPC_FUNC_IMPL(__imp__sub_82628D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,15395
	ctx.r10.s64 = 1008926720;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// ori r8,r10,55050
	ctx.r8.u64 = ctx.r10.u64 | 55050;
	// addi r6,r11,5472
	ctx.r6.s64 = r11.s64 + 5472;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// bge cr6,0x82628d5c
	if (!cr6.lt) goto loc_82628D5C;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82628D5C:
	// lis r8,17240
	ctx.r8.s64 = 1129840640;
	// addi r11,r6,1024
	r11.s64 = ctx.r6.s64 + 1024;
	// ori r7,r8,52429
	ctx.r7.u64 = ctx.r8.u64 | 52429;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// ble cr6,0x82628d78
	if (!cr6.gt) goto loc_82628D78;
	// addi r10,r6,512
	ctx.r10.s64 = ctx.r6.s64 + 512;
	// b 0x82628d7c
	goto loc_82628D7C;
loc_82628D78:
	// addi r11,r6,512
	r11.s64 = ctx.r6.s64 + 512;
loc_82628D7C:
	// rlwinm r7,r11,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r10,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// ble cr6,0x82628d9c
	if (!cr6.gt) goto loc_82628D9C;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82628da0
	goto loc_82628DA0;
loc_82628D9C:
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82628DA0:
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// ble cr6,0x82628dc0
	if (!cr6.gt) goto loc_82628DC0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82628dc4
	goto loc_82628DC4;
loc_82628DC0:
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82628DC4:
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// ble cr6,0x82628de4
	if (!cr6.gt) goto loc_82628DE4;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82628de8
	goto loc_82628DE8;
loc_82628DE4:
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82628DE8:
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// ble cr6,0x82628e08
	if (!cr6.gt) goto loc_82628E08;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82628e0c
	goto loc_82628E0C;
loc_82628E08:
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82628E0C:
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// ble cr6,0x82628e2c
	if (!cr6.gt) goto loc_82628E2C;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82628e30
	goto loc_82628E30;
loc_82628E2C:
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82628E30:
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// ble cr6,0x82628e50
	if (!cr6.gt) goto loc_82628E50;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82628e54
	goto loc_82628E54;
loc_82628E50:
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82628E54:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// ble cr6,0x82628e7c
	if (!cr6.gt) goto loc_82628E7C;
	// addi r10,r6,1020
	ctx.r10.s64 = ctx.r6.s64 + 1020;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82628e7c
	if (!cr6.lt) goto loc_82628E7C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82628E7C:
	// subf r11,r6,r11
	r11.s64 = r11.s64 - ctx.r6.s64;
	// srawi r10,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r10.s64 = r11.s32 >> 2;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
}

__attribute__((alias("__imp__sub_82628E88"))) PPC_WEAK_FUNC(sub_82628E88);
PPC_FUNC_IMPL(__imp__sub_82628E88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82628E8C"))) PPC_WEAK_FUNC(sub_82628E8C);
PPC_FUNC_IMPL(__imp__sub_82628E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82628E90"))) PPC_WEAK_FUNC(sub_82628E90);
PPC_FUNC_IMPL(__imp__sub_82628E90) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82628f10
	if (cr6.eq) goto loc_82628F10;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262c548
	sub_8262C548(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// beq cr6,0x82628ef4
	if (cr6.eq) goto loc_82628EF4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_82628EF4:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82628F10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82628F14"))) PPC_WEAK_FUNC(sub_82628F14);
PPC_FUNC_IMPL(__imp__sub_82628F14) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82628F18"))) PPC_WEAK_FUNC(sub_82628F18);
PPC_FUNC_IMPL(__imp__sub_82628F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mullw r5,r28,r27
	ctx.r5.s64 = int64_t(r28.s32) * int64_t(r27.s32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mullw r7,r29,r27
	ctx.r7.s64 = int64_t(r29.s32) * int64_t(r27.s32);
	// lwz r6,20(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82628F88"))) PPC_WEAK_FUNC(sub_82628F88);
PPC_FUNC_IMPL(__imp__sub_82628F88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82628F8C"))) PPC_WEAK_FUNC(sub_82628F8C);
PPC_FUNC_IMPL(__imp__sub_82628F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82628F90"))) PPC_WEAK_FUNC(sub_82628F90);
PPC_FUNC_IMPL(__imp__sub_82628F90) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82629010
	if (cr6.eq) goto loc_82629010;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262c548
	sub_8262C548(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// beq cr6,0x82628ff4
	if (cr6.eq) goto loc_82628FF4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_82628FF4:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82629010:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82629014"))) PPC_WEAK_FUNC(sub_82629014);
PPC_FUNC_IMPL(__imp__sub_82629014) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82629018"))) PPC_WEAK_FUNC(sub_82629018);
PPC_FUNC_IMPL(__imp__sub_82629018) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82628f90
	sub_82628F90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262902C"))) PPC_WEAK_FUNC(sub_8262902C);
PPC_FUNC_IMPL(__imp__sub_8262902C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82629030"))) PPC_WEAK_FUNC(sub_82629030);
PPC_FUNC_IMPL(__imp__sub_82629030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8262cce0
	sub_8262CCE0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82629074
	if (cr6.eq) goto loc_82629074;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82628f90
	sub_82628F90(ctx, base);
loc_82629074:
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

__attribute__((alias("__imp__sub_82629088"))) PPC_WEAK_FUNC(sub_82629088);
PPC_FUNC_IMPL(__imp__sub_82629088) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262908C"))) PPC_WEAK_FUNC(sub_8262908C);
PPC_FUNC_IMPL(__imp__sub_8262908C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82629090"))) PPC_WEAK_FUNC(sub_82629090);
PPC_FUNC_IMPL(__imp__sub_82629090) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826290e0
	if (cr6.eq) goto loc_826290E0;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r30,r11,-12796
	r30.s64 = r11.s64 + -12796;
loc_826290B4:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x826290e0
	if (cr6.eq) goto loc_826290E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262c2a8
	sub_8262C2A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x826290f4
	if (cr6.gt) goto loc_826290F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262bfb8
	sub_8262BFB8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826290b4
	if (!cr6.eq) goto loc_826290B4;
loc_826290E0:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826290F4:
	// li r11,1
	r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82629104"))) PPC_WEAK_FUNC(sub_82629104);
PPC_FUNC_IMPL(__imp__sub_82629104) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82629108"))) PPC_WEAK_FUNC(sub_82629108);
PPC_FUNC_IMPL(__imp__sub_82629108) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8262917c
	if (cr6.eq) goto loc_8262917C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8262d5c0
	sub_8262D5C0(ctx, base);
	// addi r28,r3,1
	r28.s64 = ctx.r3.s64 + 1;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8262917C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82629180"))) PPC_WEAK_FUNC(sub_82629180);
PPC_FUNC_IMPL(__imp__sub_82629180) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82629184"))) PPC_WEAK_FUNC(sub_82629184);
PPC_FUNC_IMPL(__imp__sub_82629184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82629188"))) PPC_WEAK_FUNC(sub_82629188);
PPC_FUNC_IMPL(__imp__sub_82629188) {
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
	// lbz r3,13(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826291ec
	if (cr6.eq) goto loc_826291EC;
	// bl 0x8262ec70
	sub_8262EC70(ctx, base);
	// lhz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x826291f0
	if (cr6.gt) goto loc_826291F0;
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(r11.u32, 25, xer);
	// bne cr6,0x826291ec
	if (!cr6.eq) goto loc_826291EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262ed28
	sub_8262ED28(ctx, base);
	// bl 0x8262c538
	sub_8262C538(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826291EC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_826291F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82629200"))) PPC_WEAK_FUNC(sub_82629200);
PPC_FUNC_IMPL(__imp__sub_82629200) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82629204"))) PPC_WEAK_FUNC(sub_82629204);
PPC_FUNC_IMPL(__imp__sub_82629204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82629208"))) PPC_WEAK_FUNC(sub_82629208);
PPC_FUNC_IMPL(__imp__sub_82629208) {
	PPC_FUNC_PROLOGUE();
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x8262c2a8
	sub_8262C2A8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82629290
	if (!cr6.gt) goto loc_82629290;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r28,r11,14076
	r28.s64 = r11.s64 + 14076;
loc_8262923C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8262c2b0
	sub_8262C2B0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8262d370
	sub_8262D370(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82629284
	if (!cr6.eq) goto loc_82629284;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262f8c0
	sub_8262F8C0(ctx, base);
	// lbz r11,12(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// cmpwi cr6,r11,29
	cr6.compare<int32_t>(r11.s32, 29, xer);
	// beq cr6,0x826292c8
	if (cr6.eq) goto loc_826292C8;
	// cmpwi cr6,r11,33
	cr6.compare<int32_t>(r11.s32, 33, xer);
	// beq cr6,0x8262929c
	if (cr6.eq) goto loc_8262929C;
loc_82629284:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(r30.s32, r26.s32, xer);
	// blt cr6,0x8262923c
	if (cr6.lt) goto loc_8262923C;
loc_82629290:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82629294:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8262929C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262f9f0
	sub_8262F9F0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r3,r11,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82629294
	if (!cr6.eq) goto loc_82629294;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,5832
	ctx.r3.s64 = r11.s64 + 5832;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_826292C8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262f9e0
	sub_8262F9E0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82629294
	if (!cr6.eq) goto loc_82629294;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,5832
	ctx.r3.s64 = r11.s64 + 5832;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826292EC"))) PPC_WEAK_FUNC(sub_826292EC);
PPC_FUNC_IMPL(__imp__sub_826292EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826292F0"))) PPC_WEAK_FUNC(sub_826292F0);
PPC_FUNC_IMPL(__imp__sub_826292F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r2{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r19{};
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
	// lhz r11,16(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,23,9,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x7FFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826293c4
	if (!cr6.eq) goto loc_826293C4;
	// lbz r11,12(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// bgt cr6,0x826293e4
	if (cr6.gt) goto loc_826293E4;
	// lis r12,-32157
	r12.s64 = -2107441152;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-27840
	r12.s64 = r12.s64 + -27840;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_826293C4;
	case 1:
		goto loc_826293C4;
	case 2:
		goto loc_826293C4;
	case 3:
		goto loc_826293C4;
	case 4:
		goto loc_826293C4;
	case 5:
		goto loc_826293C4;
	case 6:
		goto loc_826293C4;
	case 7:
		goto loc_826293C4;
	case 8:
		goto loc_826293C4;
	case 9:
		goto loc_826293C4;
	case 10:
		goto loc_826293C4;
	case 11:
		goto loc_826293C4;
	case 12:
		goto loc_826293C4;
	case 13:
		goto loc_826293C4;
	case 14:
		goto loc_826293C4;
	case 15:
		goto loc_826293C4;
	case 16:
		goto loc_826293C4;
	case 17:
		goto loc_826293C4;
	case 18:
		goto loc_826293E4;
	case 19:
		goto loc_826293E4;
	case 20:
		goto loc_826293C4;
	case 21:
		goto loc_826293E4;
	case 22:
		goto loc_826293E4;
	case 23:
		goto loc_826293C4;
	case 24:
		goto loc_826293CC;
	case 25:
		goto loc_826293E4;
	case 26:
		goto loc_826293E4;
	case 27:
		goto loc_826293E4;
	case 28:
		goto loc_826293E4;
	case 29:
		goto loc_826293C4;
	case 30:
		goto loc_826293C4;
	case 31:
		goto loc_826293C4;
	case 32:
		goto loc_826293E4;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-27708(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27708);
	// lwz r19,-27708(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27708);
	// lwz r19,-27708(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27708);
	// lwz r19,-27708(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27708);
	// lwz r19,-27708(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27708);
	// lwz r19,-27708(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27708);
	// lwz r19,-27708(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27708);
	// lwz r19,-27708(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27708);
	// lwz r19,-27708(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27708);
	// lwz r19,-27708(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27708);
	// lwz r19,-27708(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27708);
	// lwz r19,-27708(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27708);
	// lwz r19,-27708(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27708);
	// lwz r19,-27708(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27708);
	// lwz r19,-27708(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27708);
	// lwz r19,-27708(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27708);
	// lwz r19,-27708(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27708);
	// lwz r19,-27708(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27708);
	// lwz r19,-27676(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27676);
	// lwz r19,-27676(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27676);
	// lwz r19,-27708(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27708);
	// lwz r19,-27676(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27676);
	// lwz r19,-27676(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27676);
	// lwz r19,-27708(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27708);
	// lwz r19,-27700(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27700);
	// lwz r19,-27676(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27676);
	// lwz r19,-27676(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27676);
	// lwz r19,-27676(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27676);
	// lwz r19,-27676(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27676);
	// lwz r19,-27708(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27708);
	// lwz r19,-27708(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27708);
	// lwz r19,-27708(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27708);
	// lwz r19,-27676(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27676);
loc_826293C4:
	// li r11,1
	r11.s64 = 1;
	// b 0x826293e8
	goto loc_826293E8;
loc_826293CC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8262ed28
	sub_8262ED28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82629490
	sub_82629490(ctx, base);
	// b 0x826293ec
	goto loc_826293EC;
loc_826293E4:
	// li r11,0
	r11.s64 = 0;
loc_826293E8:
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
loc_826293EC:
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

__attribute__((alias("__imp__sub_82629400"))) PPC_WEAK_FUNC(sub_82629400);
PPC_FUNC_IMPL(__imp__sub_82629400) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82629404"))) PPC_WEAK_FUNC(sub_82629404);
PPC_FUNC_IMPL(__imp__sub_82629404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82629408"))) PPC_WEAK_FUNC(sub_82629408);
PPC_FUNC_IMPL(__imp__sub_82629408) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8262c2a8
	sub_8262C2A8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82629464
	if (!cr6.gt) goto loc_82629464;
loc_82629434:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8262c2b0
	sub_8262C2B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826292f0
	sub_826292F0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82629478
	if (cr6.eq) goto loc_82629478;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// blt cr6,0x82629434
	if (cr6.lt) goto loc_82629434;
loc_82629464:
	// li r11,1
	r11.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r11,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_82629478:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r11,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82629488"))) PPC_WEAK_FUNC(sub_82629488);
PPC_FUNC_IMPL(__imp__sub_82629488) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8262948C"))) PPC_WEAK_FUNC(sub_8262948C);
PPC_FUNC_IMPL(__imp__sub_8262948C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82629490"))) PPC_WEAK_FUNC(sub_82629490);
PPC_FUNC_IMPL(__imp__sub_82629490) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_826294AC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82629408
	sub_82629408(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826294fc
	if (cr6.eq) goto loc_826294FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262bfb8
	sub_8262BFB8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826294ac
	if (!cr6.eq) goto loc_826294AC;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
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
	// blr 
	return;
loc_826294FC:
	// li r11,0
	r11.s64 = 0;
}

__attribute__((alias("__imp__sub_82629500"))) PPC_WEAK_FUNC(sub_82629500);
PPC_FUNC_IMPL(__imp__sub_82629500) {
	PPC_FUNC_PROLOGUE();
	// b 0x826294dc
	// ERROR 826294DC
	return;
}

__attribute__((alias("__imp__sub_82629504"))) PPC_WEAK_FUNC(sub_82629504);
PPC_FUNC_IMPL(__imp__sub_82629504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82629508"))) PPC_WEAK_FUNC(sub_82629508);
PPC_FUNC_IMPL(__imp__sub_82629508) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x826295dc
	if (cr6.eq) goto loc_826295DC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82629490
	sub_82629490(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826295dc
	if (!cr6.eq) goto loc_826295DC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8262c538
	sub_8262C538(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262c548
	sub_8262C548(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826295a4
	if (cr6.eq) goto loc_826295A4;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x826295dc
	if (!cr6.gt) goto loc_826295DC;
loc_82629570:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r31,r27,r31
	r31.u64 = r27.u64 + r31.u64;
	// bne 0x82629570
	if (!cr0.eq) goto loc_82629570;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_826295A4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x826295dc
	if (!cr6.gt) goto loc_826295DC;
loc_826295AC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r31,r27,r31
	r31.u64 = r27.u64 + r31.u64;
	// bne 0x826295ac
	if (!cr0.eq) goto loc_826295AC;
loc_826295DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826295E0"))) PPC_WEAK_FUNC(sub_826295E0);
PPC_FUNC_IMPL(__imp__sub_826295E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826295E4"))) PPC_WEAK_FUNC(sub_826295E4);
PPC_FUNC_IMPL(__imp__sub_826295E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826295E8"))) PPC_WEAK_FUNC(sub_826295E8);
PPC_FUNC_IMPL(__imp__sub_826295E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r2{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r19{};
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82629744
	if (!cr6.gt) goto loc_82629744;
	// lbz r11,13(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// addi r11,r11,-20
	r11.s64 = r11.s64 + -20;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// bgt cr6,0x82629744
	if (cr6.gt) goto loc_82629744;
	// lis r12,-32157
	r12.s64 = -2107441152;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-27084
	r12.s64 = r12.s64 + -27084;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_8262966C;
	case 1:
		goto loc_82629744;
	case 2:
		goto loc_82629744;
	case 3:
		goto loc_82629744;
	case 4:
		goto loc_82629744;
	case 5:
		goto loc_826296C4;
	case 6:
		goto loc_82629744;
	case 7:
		goto loc_82629744;
	case 8:
		goto loc_82629744;
	case 9:
		goto loc_826296F4;
	case 10:
		goto loc_82629744;
	case 11:
		goto loc_82629744;
	case 12:
		goto loc_82629744;
	case 13:
		goto loc_82629720;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-27028(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -27028);
	// lwz r19,-26812(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -26812);
	// lwz r19,-26812(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -26812);
	// lwz r19,-26812(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -26812);
	// lwz r19,-26812(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -26812);
	// lwz r19,-26940(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -26940);
	// lwz r19,-26812(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -26812);
	// lwz r19,-26812(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -26812);
	// lwz r19,-26812(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -26812);
	// lwz r19,-26892(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -26892);
	// lwz r19,-26812(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -26812);
	// lwz r19,-26812(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -26812);
	// lwz r19,-26812(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -26812);
	// lwz r19,-26848(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -26848);
loc_8262966C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8262ed28
	sub_8262ED28(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82629744
	if (cr6.eq) goto loc_82629744;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82629744
	if (!cr6.gt) goto loc_82629744;
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
loc_8262968C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82629208
	sub_82629208(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826296a4
	if (!cr6.eq) goto loc_826296A4;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_826296A4:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwzu r4,4(r30)
	ea = 4 + r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	r30.u32 = ea;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82628e90
	sub_82628E90(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8262968c
	if (!cr0.eq) goto loc_8262968C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_826296C4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8262ed28
	sub_8262ED28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82629744
	if (cr6.eq) goto loc_82629744;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82629508
	sub_82629508(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_826296F4:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82629744
	if (!cr6.gt) goto loc_82629744;
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
loc_82629700:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwzu r4,4(r30)
	ea = 4 + r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	r30.u32 = ea;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82629108
	sub_82629108(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82629700
	if (!cr0.eq) goto loc_82629700;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_82629720:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82629744
	if (!cr6.gt) goto loc_82629744;
loc_82629728:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8262d0b0
	sub_8262D0B0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82629728
	if (!cr0.eq) goto loc_82629728;
loc_82629744:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82629748"))) PPC_WEAK_FUNC(sub_82629748);
PPC_FUNC_IMPL(__imp__sub_82629748) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8262974C"))) PPC_WEAK_FUNC(sub_8262974C);
PPC_FUNC_IMPL(__imp__sub_8262974C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82629750"))) PPC_WEAK_FUNC(sub_82629750);
PPC_FUNC_IMPL(__imp__sub_82629750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r2{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x828e93f8
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82629bd8
	if (cr6.eq) goto loc_82629BD8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8262c2a8
	sub_8262C2A8(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// li r23,0
	r23.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82629bd8
	if (!cr6.gt) goto loc_82629BD8;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r22,r11,7696
	r22.s64 = r11.s64 + 7696;
loc_82629790:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8262c2b0
	sub_8262C2B0(ctx, base);
	// lhz r11,16(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,23,9,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x7FFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82629bcc
	if (!cr6.eq) goto loc_82629BCC;
	// lbz r11,12(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// addi r11,r11,-20
	r11.s64 = r11.s64 + -20;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// bgt cr6,0x82629bcc
	if (cr6.gt) goto loc_82629BCC;
	// lis r12,-32157
	r12.s64 = -2107441152;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-26660
	r12.s64 = r12.s64 + -26660;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82629B3C;
	case 1:
		goto loc_82629BCC;
	case 2:
		goto loc_8262991C;
	case 3:
		goto loc_82629BCC;
	case 4:
		goto loc_82629BCC;
	case 5:
		goto loc_82629BA4;
	case 6:
		goto loc_826299E8;
	case 7:
		goto loc_82629A8C;
	case 8:
		goto loc_82629B74;
	case 9:
		goto loc_82629814;
	case 10:
		goto loc_82629BCC;
	case 11:
		goto loc_82629BCC;
	case 12:
		goto loc_82629BCC;
	case 13:
		goto loc_82629898;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-25796(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -25796);
	// lwz r19,-25652(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -25652);
	// lwz r19,-26340(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -26340);
	// lwz r19,-25652(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -25652);
	// lwz r19,-25652(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -25652);
	// lwz r19,-25692(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -25692);
	// lwz r19,-26136(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -26136);
	// lwz r19,-25972(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -25972);
	// lwz r19,-25740(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -25740);
	// lwz r19,-26604(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -26604);
	// lwz r19,-25652(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -25652);
	// lwz r19,-25652(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -25652);
	// lwz r19,-25652(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -25652);
	// lwz r19,-26472(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -26472);
loc_82629814:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262f8c0
	sub_8262F8C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262ed40
	sub_8262ED40(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x8262985c
	if (cr6.gt) goto loc_8262985C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262f9e0
	sub_8262F9E0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82629108
	sub_82629108(ctx, base);
	// b 0x82629bcc
	goto loc_82629BCC;
loc_8262985C:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82629bcc
	if (!cr6.gt) goto loc_82629BCC;
loc_82629868:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262f9e0
	sub_8262F9E0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82629108
	sub_82629108(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(r29.s32, r28.s32, xer);
	// blt cr6,0x82629868
	if (cr6.lt) goto loc_82629868;
	// b 0x82629bcc
	goto loc_82629BCC;
loc_82629898:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8262f8c0
	sub_8262F8C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262ed40
	sub_8262ED40(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x826298e0
	if (cr6.gt) goto loc_826298E0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8262f9f0
	sub_8262F9F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8262d0b0
	sub_8262D0B0(ctx, base);
	// b 0x82629bcc
	goto loc_82629BCC;
loc_826298E0:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82629bcc
	if (!cr6.gt) goto loc_82629BCC;
loc_826298EC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r27,0(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8262f9f0
	sub_8262F9F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8262d0b0
	sub_8262D0B0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(r29.s32, r28.s32, xer);
	// blt cr6,0x826298ec
	if (cr6.lt) goto loc_826298EC;
	// b 0x82629bcc
	goto loc_82629BCC;
loc_8262991C:
	// lhz r11,18(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 18);
	// add r29,r11,r24
	r29.u64 = r11.u64 + r24.u64;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82629940
	if (cr6.eq) goto loc_82629940;
	// lbz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82629bcc
	if (cr6.eq) goto loc_82629BCC;
loc_82629940:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,4(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// clrlwi r25,r11,2
	r25.u64 = r11.u32 & 0x3FFFFFFF;
	// bl 0x82629188
	sub_82629188(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82629bcc
	if (cr6.lt) goto loc_82629BCC;
	// lbz r11,13(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 13);
	// addi r11,r11,-20
	r11.s64 = r11.s64 + -20;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r10,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r26,r11
	r26.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82629998
	if (cr6.eq) goto loc_82629998;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// b 0x8262999c
	goto loc_8262999C;
loc_82629998:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8262999C:
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82628f18
	sub_82628F18(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826295e8
	sub_826295E8(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82629bcc
	if (cr6.eq) goto loc_82629BCC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82629bcc
	goto loc_82629BCC;
loc_826299E8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8262f8c0
	sub_8262F8C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8262fb10
	sub_8262FB10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// bl 0x82629188
	sub_82629188(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82629bcc
	if (cr6.lt) goto loc_82629BCC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,100(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r27,96(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82628f18
	sub_82628F18(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826295e8
	sub_826295E8(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82629bcc
	goto loc_82629BCC;
loc_82629A8C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8262f8c0
	sub_8262F8C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8262fb20
	sub_8262FB20(ctx, base);
	// lwz r29,8(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r27,4(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82629bcc
	if (!cr6.gt) goto loc_82629BCC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82629bcc
	if (cr6.eq) goto loc_82629BCC;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82629bcc
	if (cr6.eq) goto loc_82629BCC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r26,0(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8262c538
	sub_8262C538(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// bl 0x82628f18
	sub_82628F18(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82629508
	sub_82629508(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82629bcc
	goto loc_82629BCC;
loc_82629B3C:
	// lbz r11,13(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 13);
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(r11.u32, 25, xer);
	// bne cr6,0x82629bcc
	if (!cr6.eq) goto loc_82629BCC;
	// lhz r11,18(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 18);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r29,r11,r24
	r29.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// bl 0x8262ed28
	sub_8262ED28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82628e90
	sub_82628E90(ctx, base);
	// b 0x82629bcc
	goto loc_82629BCC;
loc_82629B74:
	// lhz r11,18(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 18);
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82629bcc
	if (cr6.eq) goto loc_82629BCC;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82629bcc
	if (cr6.eq) goto loc_82629BCC;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82628e90
	sub_82628E90(ctx, base);
	// b 0x82629bcc
	goto loc_82629BCC;
loc_82629BA4:
	// lhz r11,18(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 18);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r31,r11,r24
	r31.u64 = r11.u64 + r24.u64;
	// bl 0x8262ed28
	sub_8262ED28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82628f90
	sub_82628F90(ctx, base);
loc_82629BCC:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// cmpw cr6,r23,r20
	cr6.compare<int32_t>(r23.s32, r20.s32, xer);
	// blt cr6,0x82629790
	if (cr6.lt) goto loc_82629790;
loc_82629BD8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_82629BDC"))) PPC_WEAK_FUNC(sub_82629BDC);
PPC_FUNC_IMPL(__imp__sub_82629BDC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_82629BE0"))) PPC_WEAK_FUNC(sub_82629BE0);
PPC_FUNC_IMPL(__imp__sub_82629BE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82629c24
	if (cr6.eq) goto loc_82629C24;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_82629C00:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82629750
	sub_82629750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262bfb8
	sub_8262BFB8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82629c00
	if (!cr6.eq) goto loc_82629C00;
loc_82629C24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82629C28"))) PPC_WEAK_FUNC(sub_82629C28);
PPC_FUNC_IMPL(__imp__sub_82629C28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82629C2C"))) PPC_WEAK_FUNC(sub_82629C2C);
PPC_FUNC_IMPL(__imp__sub_82629C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82629C30"))) PPC_WEAK_FUNC(sub_82629C30);
PPC_FUNC_IMPL(__imp__sub_82629C30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8262cce0
	sub_8262CCE0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82629c88
	if (cr6.eq) goto loc_82629C88;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82629c88
	if (cr6.eq) goto loc_82629C88;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82629C64:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82629750
	sub_82629750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262bfb8
	sub_8262BFB8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82629c64
	if (!cr6.eq) goto loc_82629C64;
loc_82629C88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82629C8C"))) PPC_WEAK_FUNC(sub_82629C8C);
PPC_FUNC_IMPL(__imp__sub_82629C8C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82629C90"))) PPC_WEAK_FUNC(sub_82629C90);
PPC_FUNC_IMPL(__imp__sub_82629C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82629CA4"))) PPC_WEAK_FUNC(sub_82629CA4);
PPC_FUNC_IMPL(__imp__sub_82629CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82629CA8"))) PPC_WEAK_FUNC(sub_82629CA8);
PPC_FUNC_IMPL(__imp__sub_82629CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-12796
	ctx.r3.s64 = r11.s64 + -12796;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82629CB4"))) PPC_WEAK_FUNC(sub_82629CB4);
PPC_FUNC_IMPL(__imp__sub_82629CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82629CB8"))) PPC_WEAK_FUNC(sub_82629CB8);
PPC_FUNC_IMPL(__imp__sub_82629CB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-13040
	ctx.r10.s64 = r11.s64 + -13040;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82629CD0"))) PPC_WEAK_FUNC(sub_82629CD0);
PPC_FUNC_IMPL(__imp__sub_82629CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-13040
	ctx.r3.s64 = r11.s64 + -13040;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82629CDC"))) PPC_WEAK_FUNC(sub_82629CDC);
PPC_FUNC_IMPL(__imp__sub_82629CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82629CE0"))) PPC_WEAK_FUNC(sub_82629CE0);
PPC_FUNC_IMPL(__imp__sub_82629CE0) {
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
loc_82629CFC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82629d18
	if (cr6.eq) goto loc_82629D18;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8262d370
	sub_8262D370(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82629d2c
	if (cr6.eq) goto loc_82629D2C;
loc_82629D18:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82629d34
	if (cr6.eq) goto loc_82629D34;
	// mr r31,r11
	r31.u64 = r11.u64;
	// b 0x82629cfc
	goto loc_82629CFC;
loc_82629D2C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82629d38
	goto loc_82629D38;
loc_82629D34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82629D38:
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

__attribute__((alias("__imp__sub_82629D4C"))) PPC_WEAK_FUNC(sub_82629D4C);
PPC_FUNC_IMPL(__imp__sub_82629D4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82629D50"))) PPC_WEAK_FUNC(sub_82629D50);
PPC_FUNC_IMPL(__imp__sub_82629D50) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8262ffe0
	sub_8262FFE0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82629da8
	if (cr6.eq) goto loc_82629DA8;
loc_82629D8C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8262fcf8
	sub_8262FCF8(ctx, base);
	// lwz r30,8(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82629d8c
	if (!cr6.eq) goto loc_82629D8C;
loc_82629DA8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82629e00
	if (cr6.eq) goto loc_82629E00;
loc_82629DB0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826300a8
	sub_826300A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82629df4
	if (cr6.eq) goto loc_82629DF4;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82629df4
	if (cr6.eq) goto loc_82629DF4;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82628368
	sub_82628368(ctx, base);
loc_82629DF4:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82629db0
	if (!cr6.eq) goto loc_82629DB0;
loc_82629E00:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82630048
	sub_82630048(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82629E1C"))) PPC_WEAK_FUNC(sub_82629E1C);
PPC_FUNC_IMPL(__imp__sub_82629E1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82629E20"))) PPC_WEAK_FUNC(sub_82629E20);
PPC_FUNC_IMPL(__imp__sub_82629E20) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8262ffe0
	sub_8262FFE0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82629e70
	if (cr6.eq) goto loc_82629E70;
loc_82629E54:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8262fcf8
	sub_8262FCF8(ctx, base);
	// lwz r30,8(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82629e54
	if (!cr6.eq) goto loc_82629E54;
loc_82629E70:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82629ebc
	if (cr6.eq) goto loc_82629EBC;
loc_82629E78:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826300a8
	sub_826300A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82629eb0
	if (cr6.eq) goto loc_82629EB0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82629ea8
	if (cr6.eq) goto loc_82629EA8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82628388
	sub_82628388(ctx, base);
loc_82629EA8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
loc_82629EB0:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82629e78
	if (!cr6.eq) goto loc_82629E78;
loc_82629EBC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82630048
	sub_82630048(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82629EC8"))) PPC_WEAK_FUNC(sub_82629EC8);
PPC_FUNC_IMPL(__imp__sub_82629EC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82629ECC"))) PPC_WEAK_FUNC(sub_82629ECC);
PPC_FUNC_IMPL(__imp__sub_82629ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82629ED0"))) PPC_WEAK_FUNC(sub_82629ED0);
PPC_FUNC_IMPL(__imp__sub_82629ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82629f20
	if (cr6.eq) goto loc_82629F20;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// bl 0x8262a2b8
	sub_8262A2B8(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r3,-12744(r11)
	PPC_STORE_U32(r11.u32 + -12744, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82629F20:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// stw r11,-12744(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12744, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82629F38"))) PPC_WEAK_FUNC(sub_82629F38);
PPC_FUNC_IMPL(__imp__sub_82629F38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82629F3C"))) PPC_WEAK_FUNC(sub_82629F3C);
PPC_FUNC_IMPL(__imp__sub_82629F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82629F40"))) PPC_WEAK_FUNC(sub_82629F40);
PPC_FUNC_IMPL(__imp__sub_82629F40) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,-31
	r28.s64 = -31;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bgt cr6,0x82629f84
	if (cr6.gt) goto loc_82629F84;
	// cmpwi cr6,r11,-31
	cr6.compare<int32_t>(r11.s32, -31, xer);
	// beq cr6,0x82629fa0
	if (cr6.eq) goto loc_82629FA0;
	// cmpwi cr6,r11,-63
	cr6.compare<int32_t>(r11.s32, -63, xer);
	// beq cr6,0x82629fa0
	if (cr6.eq) goto loc_82629FA0;
	// cmpwi cr6,r11,-47
	cr6.compare<int32_t>(r11.s32, -47, xer);
	// bne cr6,0x82629f8c
	if (!cr6.eq) goto loc_82629F8C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_82629F84:
	// cmpwi cr6,r11,-15
	cr6.compare<int32_t>(r11.s32, -15, xer);
	// beq cr6,0x82629fa0
	if (cr6.eq) goto loc_82629FA0;
loc_82629F8C:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r31,r11,-12744
	r31.s64 = r11.s64 + -12744;
	// lwz r3,-12744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -12744);
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// b 0x82629fc4
	goto loc_82629FC4;
loc_82629FA0:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r31,r11,-12744
	r31.s64 = r11.s64 + -12744;
	// lwz r3,-12744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -12744);
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// mr r11,r28
	r11.u64 = r28.u64;
	// beq cr6,0x82629fc0
	if (cr6.eq) goto loc_82629FC0;
	// li r11,-63
	r11.s64 = -63;
loc_82629FC0:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82629FC4:
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// lhz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 6);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r9,r10,1,16,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFE;
	// sth r8,4(r30)
	PPC_STORE_U16(r30.u32 + 4, ctx.r8.u16);
	// sth r9,6(r30)
	PPC_STORE_U16(r30.u32 + 6, ctx.r9.u16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82629FE8"))) PPC_WEAK_FUNC(sub_82629FE8);
PPC_FUNC_IMPL(__imp__sub_82629FE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82629FEC"))) PPC_WEAK_FUNC(sub_82629FEC);
PPC_FUNC_IMPL(__imp__sub_82629FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82629FF0"))) PPC_WEAK_FUNC(sub_82629FF0);
PPC_FUNC_IMPL(__imp__sub_82629FF0) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-47
	cr6.compare<int32_t>(r11.s32, -47, xer);
	// beq cr6,0x8262a064
	if (cr6.eq) goto loc_8262A064;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r30,-12744(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + -12744);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// bl 0x82630380
	sub_82630380(ctx, base);
	// lhz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// rotlwi r6,r9,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// rlwimi r6,r8,0,31,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFFFF0001) | (ctx.r6.u64 & 0xFFFE);
	// rotlwi r11,r3,0
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// sth r5,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r5.u16);
	// sth r6,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r6.u16);
	// cmpwi cr6,r7,-15
	cr6.compare<int32_t>(ctx.r7.s32, -15, xer);
	// bne cr6,0x8262a05c
	if (!cr6.eq) goto loc_8262A05C;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8262A05C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8262A064:
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

__attribute__((alias("__imp__sub_8262A078"))) PPC_WEAK_FUNC(sub_8262A078);
PPC_FUNC_IMPL(__imp__sub_8262A078) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262A07C"))) PPC_WEAK_FUNC(sub_8262A07C);
PPC_FUNC_IMPL(__imp__sub_8262A07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262A080"))) PPC_WEAK_FUNC(sub_8262A080);
PPC_FUNC_IMPL(__imp__sub_8262A080) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-47
	cr6.compare<int32_t>(r11.s32, -47, xer);
	// beq cr6,0x8262a0d0
	if (cr6.eq) goto loc_8262A0D0;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r31,-12744(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -12744);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// bl 0x82630380
	sub_82630380(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rotlwi r9,r3,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8262a0d8
	if (!cr6.eq) goto loc_8262A0D8;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8262A0D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8262a0e0
	goto loc_8262A0E0;
loc_8262A0D8:
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8262A0E0:
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

__attribute__((alias("__imp__sub_8262A0F4"))) PPC_WEAK_FUNC(sub_8262A0F4);
PPC_FUNC_IMPL(__imp__sub_8262A0F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262A0F8"))) PPC_WEAK_FUNC(sub_8262A0F8);
PPC_FUNC_IMPL(__imp__sub_8262A0F8) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-47
	cr6.compare<int32_t>(r11.s32, -47, xer);
	// beq cr6,0x8262a160
	if (cr6.eq) goto loc_8262A160;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r30,-12744(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + -12744);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lhz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sth r8,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r8.u16);
	// sth r6,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r6.u16);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x8262a158
	if (!cr6.eq) goto loc_8262A158;
	// li r11,-15
	r11.s64 = -15;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8262A158:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8262A160:
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

__attribute__((alias("__imp__sub_8262A174"))) PPC_WEAK_FUNC(sub_8262A174);
PPC_FUNC_IMPL(__imp__sub_8262A174) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262A178"))) PPC_WEAK_FUNC(sub_8262A178);
PPC_FUNC_IMPL(__imp__sub_8262A178) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-47
	cr6.compare<int32_t>(r11.s32, -47, xer);
	// beq cr6,0x8262a1e0
	if (cr6.eq) goto loc_8262A1E0;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r30,-12744(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + -12744);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lhz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sth r8,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r8.u16);
	// sth r6,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r6.u16);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x8262a1d8
	if (!cr6.eq) goto loc_8262A1D8;
	// li r11,-15
	r11.s64 = -15;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8262A1D8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8262A1E0:
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

__attribute__((alias("__imp__sub_8262A1F4"))) PPC_WEAK_FUNC(sub_8262A1F4);
PPC_FUNC_IMPL(__imp__sub_8262A1F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262A1F8"))) PPC_WEAK_FUNC(sub_8262A1F8);
PPC_FUNC_IMPL(__imp__sub_8262A1F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262A1FC"))) PPC_WEAK_FUNC(sub_8262A1FC);
PPC_FUNC_IMPL(__imp__sub_8262A1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262A200"))) PPC_WEAK_FUNC(sub_8262A200);
PPC_FUNC_IMPL(__imp__sub_8262A200) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262A204"))) PPC_WEAK_FUNC(sub_8262A204);
PPC_FUNC_IMPL(__imp__sub_8262A204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262A208"))) PPC_WEAK_FUNC(sub_8262A208);
PPC_FUNC_IMPL(__imp__sub_8262A208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,-47
	r11.s64 = -47;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_8262A210"))) PPC_WEAK_FUNC(sub_8262A210);
PPC_FUNC_IMPL(__imp__sub_8262A210) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262A214"))) PPC_WEAK_FUNC(sub_8262A214);
PPC_FUNC_IMPL(__imp__sub_8262A214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262A218"))) PPC_WEAK_FUNC(sub_8262A218);
PPC_FUNC_IMPL(__imp__sub_8262A218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,-47
	cr6.compare<int32_t>(r11.s32, -47, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,-15
	r11.s64 = -15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
}

__attribute__((alias("__imp__sub_8262A234"))) PPC_WEAK_FUNC(sub_8262A234);
PPC_FUNC_IMPL(__imp__sub_8262A234) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262A238"))) PPC_WEAK_FUNC(sub_8262A238);
PPC_FUNC_IMPL(__imp__sub_8262A238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,-47
	ctx.r10.s64 = -47;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
}

__attribute__((alias("__imp__sub_8262A24C"))) PPC_WEAK_FUNC(sub_8262A24C);
PPC_FUNC_IMPL(__imp__sub_8262A24C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262A250"))) PPC_WEAK_FUNC(sub_8262A250);
PPC_FUNC_IMPL(__imp__sub_8262A250) {
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
	// lis r30,-31933
	r30.s64 = -2092761088;
	// lwz r31,-12744(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + -12744);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8262a29c
	if (cr6.eq) goto loc_8262A29C;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-12744(r30)
	PPC_STORE_U32(r30.u32 + -12744, r11.u32);
loc_8262A29C:
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

__attribute__((alias("__imp__sub_8262A2B0"))) PPC_WEAK_FUNC(sub_8262A2B0);
PPC_FUNC_IMPL(__imp__sub_8262A2B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262A2B4"))) PPC_WEAK_FUNC(sub_8262A2B4);
PPC_FUNC_IMPL(__imp__sub_8262A2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262A2B8"))) PPC_WEAK_FUNC(sub_8262A2B8);
PPC_FUNC_IMPL(__imp__sub_8262A2B8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8314d7bc
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
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

__attribute__((alias("__imp__sub_8262A2E4"))) PPC_WEAK_FUNC(sub_8262A2E4);
PPC_FUNC_IMPL(__imp__sub_8262A2E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262A2E8"))) PPC_WEAK_FUNC(sub_8262A2E8);
PPC_FUNC_IMPL(__imp__sub_8262A2E8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82627f60
	sub_82627F60(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8262a34c
	if (cr6.eq) goto loc_8262A34C;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x82627f60
	sub_82627F60(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8262a34c
	if (cr6.eq) goto loc_8262A34C;
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x82627f60
	sub_82627F60(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x8262a350
	if (!cr6.eq) goto loc_8262A350;
loc_8262A34C:
	// li r11,0
	r11.s64 = 0;
loc_8262A350:
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
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

__attribute__((alias("__imp__sub_8262A36C"))) PPC_WEAK_FUNC(sub_8262A36C);
PPC_FUNC_IMPL(__imp__sub_8262A36C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262A370"))) PPC_WEAK_FUNC(sub_8262A370);
PPC_FUNC_IMPL(__imp__sub_8262A370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-12160
	ctx.r3.s64 = r11.s64 + -12160;
}

__attribute__((alias("__imp__sub_8262A378"))) PPC_WEAK_FUNC(sub_8262A378);
PPC_FUNC_IMPL(__imp__sub_8262A378) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262A37C"))) PPC_WEAK_FUNC(sub_8262A37C);
PPC_FUNC_IMPL(__imp__sub_8262A37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262A380"))) PPC_WEAK_FUNC(sub_8262A380);
PPC_FUNC_IMPL(__imp__sub_8262A380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f10,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,36(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f10,24(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
}

__attribute__((alias("__imp__sub_8262A3B0"))) PPC_WEAK_FUNC(sub_8262A3B0);
PPC_FUNC_IMPL(__imp__sub_8262A3B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262A3B4"))) PPC_WEAK_FUNC(sub_8262A3B4);
PPC_FUNC_IMPL(__imp__sub_8262A3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262A3B8"))) PPC_WEAK_FUNC(sub_8262A3B8);
PPC_FUNC_IMPL(__imp__sub_8262A3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f12,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f11,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,32(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f7,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f6,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,36(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
}

__attribute__((alias("__imp__sub_8262A414"))) PPC_WEAK_FUNC(sub_8262A414);
PPC_FUNC_IMPL(__imp__sub_8262A414) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262A418"))) PPC_WEAK_FUNC(sub_8262A418);
PPC_FUNC_IMPL(__imp__sub_8262A418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// lvx128 v13,r0,r3
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// vmulfp128 v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v12,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v9,v10,v11
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v9,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r0,r4
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v6,v7,v8
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v6,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_8262A450"))) PPC_WEAK_FUNC(sub_8262A450);
PPC_FUNC_IMPL(__imp__sub_8262A450) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262A454"))) PPC_WEAK_FUNC(sub_8262A454);
PPC_FUNC_IMPL(__imp__sub_8262A454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262A458"))) PPC_WEAK_FUNC(sub_8262A458);
PPC_FUNC_IMPL(__imp__sub_8262A458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// fneg f12,f0
	ctx.f12.u64 = f0.u64 ^ 0x8000000000000000;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f0,-12(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// stfs f9,-16(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f10,-8(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fneg f6,f8
	ctx.f6.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f0,-8(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// stfs f6,-12(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f7,-16(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvx128 v12,r0,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r3,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_8262A4E0"))) PPC_WEAK_FUNC(sub_8262A4E0);
PPC_FUNC_IMPL(__imp__sub_8262A4E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262A4E4"))) PPC_WEAK_FUNC(sub_8262A4E4);
PPC_FUNC_IMPL(__imp__sub_8262A4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262A4E8"))) PPC_WEAK_FUNC(sub_8262A4E8);
PPC_FUNC_IMPL(__imp__sub_8262A4E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r11,32
	r11.s64 = 32;
	// vmulfp128 v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v12,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r5,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v9,v10,v11
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v9,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r0,r4
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r5,r11
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r5.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v6,v7,v8
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v6,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_8262A520"))) PPC_WEAK_FUNC(sub_8262A520);
PPC_FUNC_IMPL(__imp__sub_8262A520) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262A524"))) PPC_WEAK_FUNC(sub_8262A524);
PPC_FUNC_IMPL(__imp__sub_8262A524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262A528"))) PPC_WEAK_FUNC(sub_8262A528);
PPC_FUNC_IMPL(__imp__sub_8262A528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lvx128 v12,r0,r3
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// vmaddfp v0,v13,v0,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// li r8,32
	ctx.r8.s64 = 32;
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r5,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v12,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r5,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v12,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_8262A574"))) PPC_WEAK_FUNC(sub_8262A574);
PPC_FUNC_IMPL(__imp__sub_8262A574) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262A578"))) PPC_WEAK_FUNC(sub_8262A578);
PPC_FUNC_IMPL(__imp__sub_8262A578) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r9,r11,5456
	ctx.r9.s64 = r11.s64 + 5456;
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// li r7,224
	ctx.r7.s64 = 224;
	// vspltisw v0,-1
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r6,r8,-12480
	ctx.r6.s64 = ctx.r8.s64 + -12480;
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v10,v11,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vand v9,v12,v13
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// lvx128 v12,r6,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vcmpgefp v8,v10,v9
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v9.f32)));
	// vor v7,v8,v12
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vcmpequw. v6,v7,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	cr6.setFromMask(_mm_load_ps(ctx.v6.f32), 0xF);
	// bge cr6,0x8262a634
	if (!cr6.lt) goto loc_8262A634;
	// li r11,16
	r11.s64 = 16;
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v11,r5,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r5.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r4,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v9,v10,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v8,r0,r10
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v7,v8,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xFF));
	// vand v6,v9,v13
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vcmpgefp v5,v7,v6
	_mm_store_ps(ctx.v5.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v6.f32)));
	// vor v4,v5,v12
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vcmpequw. v3,v4,v0
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	cr6.setFromMask(_mm_load_ps(ctx.v3.f32), 0xF);
	// bge cr6,0x8262a634
	if (!cr6.lt) goto loc_8262A634;
	// li r11,32
	r11.s64 = 32;
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v11,r5,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r5.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r4,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32 + r11.u32) & ~0xF), VectorMaskL));
	// li r11,1
	r11.s64 = 1;
	// vsubfp v9,v10,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v8,r0,r10
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v7,v8,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xFF));
	// vand v6,v9,v13
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vcmpgefp v5,v7,v6
	_mm_store_ps(ctx.v5.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v6.f32)));
	// vor v4,v5,v12
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vcmpequw. v3,v4,v0
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	cr6.setFromMask(_mm_load_ps(ctx.v3.f32), 0xF);
	// blt cr6,0x8262a638
	if (cr6.lt) goto loc_8262A638;
loc_8262A634:
	// li r11,0
	r11.s64 = 0;
loc_8262A638:
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
}

__attribute__((alias("__imp__sub_8262A63C"))) PPC_WEAK_FUNC(sub_8262A63C);
PPC_FUNC_IMPL(__imp__sub_8262A63C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262A640"))) PPC_WEAK_FUNC(sub_8262A640);
PPC_FUNC_IMPL(__imp__sub_8262A640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f7,128(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f5,132(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x8262a578
	sub_8262A578(ctx, base);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8262A6D4"))) PPC_WEAK_FUNC(sub_8262A6D4);
PPC_FUNC_IMPL(__imp__sub_8262A6D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262A6D8"))) PPC_WEAK_FUNC(sub_8262A6D8);
PPC_FUNC_IMPL(__imp__sub_8262A6D8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// lvx128 v12,r0,r3
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// vor v10,v12,v12
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// fmuls f0,f1,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v8,v10,135
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x78));
	// lvx128 v7,r0,r9
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v13,v0,99
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vpermwi128 v11,v0,135
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vor v9,v0,v0
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vpermwi128 v5,v7,135
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), 0x78));
	// vor v4,v7,v7
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// vpermwi128 v3,v7,99
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), 0x9C));
	// vpermwi128 v6,v10,99
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x9C));
	// vpermwi128 v2,v9,99
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x9C));
	// vmulfp128 v31,v5,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v31.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)));
	// fmuls f13,f0,f1
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(f0.f64 * ctx.f1.f64));
	// vmulfp128 v29,v3,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v29.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v11.f32)));
	// vpermwi128 v1,v9,135
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x78));
	// vpermwi128 v30,v4,135
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), 0x78));
	// vpermwi128 v28,v4,99
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), 0x9C));
	// vmulfp128 v13,v2,v8
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v11,v1,v6
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v6.f32)));
	// vmulfp128 v9,v6,v30
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(v30.f32)));
	// vmulfp128 v8,v8,v28
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(v28.f32)));
	// vsubfp v10,v29,v31
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(v29.f32), _mm_load_ps(v31.f32)));
	// vmsum3fp128 v12,v12,v10
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// stvewx v12,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x8262a7e8
	if (!cr6.gt) goto loc_8262A7E8;
	// vrefp v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v12.f32)));
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// vsubfp v7,v13,v11
	_mm_store_ps(ctx.v7.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// addi r7,r8,7536
	ctx.r7.s64 = ctx.r8.s64 + 7536;
	// vsubfp v6,v9,v8
	_mm_store_ps(ctx.v6.f32, _mm_sub_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)));
	// addi r5,r6,-25600
	ctx.r5.s64 = ctx.r6.s64 + -25600;
	// li r3,0
	ctx.r3.s64 = 0;
	// lvx128 v11,r0,r7
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvlx v5,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v4,v5,0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0xFF));
	// vnmsubfp v11,v0,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v11,v0,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v3,v4,v0
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v2,v7,v3
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v1,v10,v3
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v31,v6,v3
	_mm_store_ps(v31.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v3.f32)));
	// stvx128 v2,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v1,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v31,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f10,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,36(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// stfs f10,24(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// blr 
	return;
loc_8262A7E8:
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_8262A7EC"))) PPC_WEAK_FUNC(sub_8262A7EC);
PPC_FUNC_IMPL(__imp__sub_8262A7EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262A7F0"))) PPC_WEAK_FUNC(sub_8262A7F0);
PPC_FUNC_IMPL(__imp__sub_8262A7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// lvx128 v12,r0,r3
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// vor v10,v12,v12
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v7,v10,135
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x78));
	// lvx128 v8,r0,r10
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v13,v0,99
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vpermwi128 v11,v0,135
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vor v9,v0,v0
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vpermwi128 v6,v8,135
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x78));
	// vor v5,v8,v8
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// vpermwi128 v4,v8,99
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x9C));
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// vpermwi128 v3,v10,99
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x9C));
	// vpermwi128 v2,v9,99
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x9C));
	// vmulfp128 v1,v6,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v13.f32)));
	// vpermwi128 v31,v9,135
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x78));
	// vmulfp128 v30,v4,v11
	_mm_store_ps(v30.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v11.f32)));
	// vpermwi128 v29,v5,135
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0x78));
	// vpermwi128 v28,v5,99
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0x9C));
	// vmulfp128 v27,v2,v7
	_mm_store_ps(v27.f32, _mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v26,v31,v3
	_mm_store_ps(v26.f32, _mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v25,v3,v29
	_mm_store_ps(v25.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(v29.f32)));
	// vmulfp128 v24,v7,v28
	_mm_store_ps(v24.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(v28.f32)));
	// vsubfp v23,v30,v1
	_mm_store_ps(v23.f32, _mm_sub_ps(_mm_load_ps(v30.f32), _mm_load_ps(ctx.v1.f32)));
	// vsubfp v22,v27,v26
	_mm_store_ps(v22.f32, _mm_sub_ps(_mm_load_ps(v27.f32), _mm_load_ps(v26.f32)));
	// vsubfp v21,v25,v24
	_mm_store_ps(v21.f32, _mm_sub_ps(_mm_load_ps(v25.f32), _mm_load_ps(v24.f32)));
	// vmsum3fp128 v20,v12,v23
	_mm_store_ps(v20.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v23.f32), 0xEF));
	// stvewx v20,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, v20.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,-25600(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,7804(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7804);
	f0.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fsel f10,f11,f0,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// fdivs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// stfs f9,-16(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx v19,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)v19.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v18,v19,0
	_mm_store_si128((__m128i*)v18.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v19.u32), 0xFF));
	// vmulfp128 v17,v23,v18
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v17.f32, _mm_mul_ps(_mm_load_ps(v23.f32), _mm_load_ps(v18.f32)));
	// vmulfp128 v16,v22,v18
	_mm_store_ps(v16.f32, _mm_mul_ps(_mm_load_ps(v22.f32), _mm_load_ps(v18.f32)));
	// vmulfp128 v15,v21,v18
	_mm_store_ps(v15.f32, _mm_mul_ps(_mm_load_ps(v21.f32), _mm_load_ps(v18.f32)));
	// stvx128 v17,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v17.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v16,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v16.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v15,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v15.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_8262A8B0"))) PPC_WEAK_FUNC(sub_8262A8B0);
PPC_FUNC_IMPL(__imp__sub_8262A8B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

