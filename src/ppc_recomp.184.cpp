#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8262D7D4"))) PPC_WEAK_FUNC(sub_8262D7D4);
PPC_FUNC_IMPL(__imp__sub_8262D7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262D7D8"))) PPC_WEAK_FUNC(sub_8262D7D8);
PPC_FUNC_IMPL(__imp__sub_8262D7D8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8262D7D8"))) PPC_WEAK_FUNC(sub_8262D7D8);
PPC_FUNC_IMPL(__imp__sub_8262D7D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828eab60
	sub_828EAB60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262D7DC"))) PPC_WEAK_FUNC(sub_8262D7DC);
PPC_FUNC_IMPL(__imp__sub_8262D7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262D7E0"))) PPC_WEAK_FUNC(sub_8262D7E0);
PPC_FUNC_IMPL(__imp__sub_8262D7E0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8262D7E0"))) PPC_WEAK_FUNC(sub_8262D7E0);
PPC_FUNC_IMPL(__imp__sub_8262D7E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828ec890
	sub_828EC890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262D7E4"))) PPC_WEAK_FUNC(sub_8262D7E4);
PPC_FUNC_IMPL(__imp__sub_8262D7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262D7E8"))) PPC_WEAK_FUNC(sub_8262D7E8);
PPC_FUNC_IMPL(__imp__sub_8262D7E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// add r9,r11,r5
	ctx.r9.u64 = r11.u64 + ctx.r5.u64;
loc_8262D800:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r3,r7,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x8262d800
	if (!cr6.eq) goto loc_8262D800;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262D824"))) PPC_WEAK_FUNC(sub_8262D824);
PPC_FUNC_IMPL(__imp__sub_8262D824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262D828"))) PPC_WEAK_FUNC(sub_8262D828);
PPC_FUNC_IMPL(__imp__sub_8262D828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8262d860
	if (cr6.eq) goto loc_8262D860;
	// subf r9,r5,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r5.s64;
loc_8262D840:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// bne cr6,0x8262d86c
	if (!cr6.eq) goto loc_8262D86C;
	// lbzu r10,1(r11)
	ea = 1 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	r11.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8262d840
	if (!cr6.eq) goto loc_8262D840;
loc_8262D860:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_8262D86C:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262D878"))) PPC_WEAK_FUNC(sub_8262D878);
PPC_FUNC_IMPL(__imp__sub_8262D878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_8262D87C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8262d87c
	if (!cr6.eq) goto loc_8262D87C;
	// subf r10,r4,r11
	ctx.r10.s64 = r11.s64 - ctx.r4.s64;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8262D89C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8262d89c
	if (!cr6.eq) goto loc_8262D89C;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bge cr6,0x8262d8cc
	if (!cr6.lt) goto loc_8262D8CC;
loc_8262D8C0:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_8262D8CC:
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8262d8fc
	if (!cr6.gt) goto loc_8262D8FC;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
loc_8262D8E0:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// lbzx r7,r11,r5
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + ctx.r5.u32);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8262d8c0
	if (!cr6.eq) goto loc_8262D8C0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8262d8e0
	if (cr6.lt) goto loc_8262D8E0;
loc_8262D8FC:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262D908"))) PPC_WEAK_FUNC(sub_8262D908);
PPC_FUNC_IMPL(__imp__sub_8262D908) {
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
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x828ee960
	sub_828EE960(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r3,r31,r3
	ctx.r3.s64 = ctx.r3.s64 - r31.s64;
	// bne cr6,0x8262d934
	if (!cr6.eq) goto loc_8262D934;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8262D934:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8262D944"))) PPC_WEAK_FUNC(sub_8262D944);
PPC_FUNC_IMPL(__imp__sub_8262D944) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262D948"))) PPC_WEAK_FUNC(sub_8262D948);
PPC_FUNC_IMPL(__imp__sub_8262D948) {
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
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82627e18
	sub_82627E18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8262D97C"))) PPC_WEAK_FUNC(sub_8262D97C);
PPC_FUNC_IMPL(__imp__sub_8262D97C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262D980"))) PPC_WEAK_FUNC(sub_8262D980);
PPC_FUNC_IMPL(__imp__sub_8262D980) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82627ee0
	sub_82627EE0(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8262D9A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8262d9a8
	if (!cr6.eq) goto loc_8262D9A8;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r31,r11,0
	r31.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// ble cr6,0x8262d9d0
	if (!cr6.gt) goto loc_8262D9D0;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8262D9D0:
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// bl 0x82627dc0
	sub_82627DC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x8262d9f0
	if (cr6.eq) goto loc_8262D9F0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x828ecd48
	sub_828ECD48(ctx, base);
loc_8262D9F0:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stbx r11,r30,r31
	PPC_STORE_U8(r30.u32 + r31.u32, r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8262DA00"))) PPC_WEAK_FUNC(sub_8262DA00);
PPC_FUNC_IMPL(__imp__sub_8262DA00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8262DA04"))) PPC_WEAK_FUNC(sub_8262DA04);
PPC_FUNC_IMPL(__imp__sub_8262DA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262DA08"))) PPC_WEAK_FUNC(sub_8262DA08);
PPC_FUNC_IMPL(__imp__sub_8262DA08) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82627ee0
	sub_82627EE0(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x8262d638
	sub_8262D638(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8262DA48"))) PPC_WEAK_FUNC(sub_8262DA48);
PPC_FUNC_IMPL(__imp__sub_8262DA48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262DA4C"))) PPC_WEAK_FUNC(sub_8262DA4C);
PPC_FUNC_IMPL(__imp__sub_8262DA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262DA50"))) PPC_WEAK_FUNC(sub_8262DA50);
PPC_FUNC_IMPL(__imp__sub_8262DA50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// bge cr6,0x8262da90
	if (!cr6.lt) goto loc_8262DA90;
loc_8262DA64:
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(r11.s32, ctx.r6.s32, xer);
	// bge cr6,0x8262da90
	if (!cr6.lt) goto loc_8262DA90;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsb r8,r4
	ctx.r8.s64 = ctx.r4.s8;
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// cmpw cr6,r5,r8
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, xer);
	// beq cr6,0x8262da98
	if (cr6.eq) goto loc_8262DA98;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8262da64
	if (cr6.lt) goto loc_8262DA64;
loc_8262DA90:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8262DA98:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262DAA0"))) PPC_WEAK_FUNC(sub_8262DAA0);
PPC_FUNC_IMPL(__imp__sub_8262DAA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// ble cr6,0x8262dab4
	if (!cr6.gt) goto loc_8262DAB4;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
loc_8262DAB4:
	// addi r11,r6,-1
	r11.s64 = ctx.r6.s64 + -1;
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// blt cr6,0x8262dae4
	if (cr6.lt) goto loc_8262DAE4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
loc_8262DAC8:
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// beq cr6,0x8262daec
	if (cr6.eq) goto loc_8262DAEC;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// bge cr6,0x8262dac8
	if (!cr6.lt) goto loc_8262DAC8;
loc_8262DAE4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8262DAEC:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262DAF4"))) PPC_WEAK_FUNC(sub_8262DAF4);
PPC_FUNC_IMPL(__imp__sub_8262DAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262DAF8"))) PPC_WEAK_FUNC(sub_8262DAF8);
PPC_FUNC_IMPL(__imp__sub_8262DAF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// addic. r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
loc_8262DB08:
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + r11.u32);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,97
	cr6.compare<int32_t>(ctx.r10.s32, 97, xer);
	// blt cr6,0x8262db2c
	if (cr6.lt) goto loc_8262DB2C;
	// cmpwi cr6,r10,122
	cr6.compare<int32_t>(ctx.r10.s32, 122, xer);
	// bgt cr6,0x8262db2c
	if (cr6.gt) goto loc_8262DB2C;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
loc_8262DB2C:
	// stbx r9,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8262db08
	if (cr6.lt) goto loc_8262DB08;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262DB48"))) PPC_WEAK_FUNC(sub_8262DB48);
PPC_FUNC_IMPL(__imp__sub_8262DB48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// addic. r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
loc_8262DB58:
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + r11.u32);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// blt cr6,0x8262db7c
	if (cr6.lt) goto loc_8262DB7C;
	// cmpwi cr6,r10,90
	cr6.compare<int32_t>(ctx.r10.s32, 90, xer);
	// bgt cr6,0x8262db7c
	if (cr6.gt) goto loc_8262DB7C;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
loc_8262DB7C:
	// stbx r9,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8262db58
	if (cr6.lt) goto loc_8262DB58;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262DB98"))) PPC_WEAK_FUNC(sub_8262DB98);
PPC_FUNC_IMPL(__imp__sub_8262DB98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8262dbdc
	if (cr6.eq) goto loc_8262DBDC;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8262DBB0:
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8262dbe8
	if (!cr6.lt) goto loc_8262DBE8;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbzx r8,r11,r5
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + ctx.r5.u32);
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x8262dbe8
	if (!cr6.eq) goto loc_8262DBE8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbzx r9,r11,r5
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8262dbb0
	if (!cr6.eq) goto loc_8262DBB0;
loc_8262DBDC:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_8262DBE8:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262DBF4"))) PPC_WEAK_FUNC(sub_8262DBF4);
PPC_FUNC_IMPL(__imp__sub_8262DBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262DBF8"))) PPC_WEAK_FUNC(sub_8262DBF8);
PPC_FUNC_IMPL(__imp__sub_8262DBF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bge cr6,0x8262dc1c
	if (!cr6.lt) goto loc_8262DC1C;
loc_8262DC10:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_8262DC1C:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8262dc54
	if (!cr6.gt) goto loc_8262DC54;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8262DC38:
	// lbzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + r11.u32);
	// lbzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x8262dc10
	if (!cr6.eq) goto loc_8262DC10;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x8262dc38
	if (cr6.lt) goto loc_8262DC38;
loc_8262DC54:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262DC60"))) PPC_WEAK_FUNC(sub_8262DC60);
PPC_FUNC_IMPL(__imp__sub_8262DC60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_8262DC64:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8262dc64
	if (!cr6.eq) goto loc_8262DC64;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addic. r11,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	r11.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8262dc9c
	if (!cr0.lt) goto loc_8262DC9C;
loc_8262DC90:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_8262DC9C:
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8262dcd8
	if (cr6.eq) goto loc_8262DCD8;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
loc_8262DCB4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// bne cr6,0x8262dc90
	if (!cr6.eq) goto loc_8262DC90;
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8262dcb4
	if (!cr6.eq) goto loc_8262DCB4;
loc_8262DCD8:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262DCE4"))) PPC_WEAK_FUNC(sub_8262DCE4);
PPC_FUNC_IMPL(__imp__sub_8262DCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262DCE8"))) PPC_WEAK_FUNC(sub_8262DCE8);
PPC_FUNC_IMPL(__imp__sub_8262DCE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// addic. r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blelr 
	if (!cr0.gt) return;
	// extsb r8,r5
	ctx.r8.s64 = ctx.r5.s8;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8262DD04:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// cmpw cr6,r5,r8
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, xer);
	// bne cr6,0x8262dd28
	if (!cr6.eq) goto loc_8262DD28;
	// stbx r6,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r6.u8);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// beqlr cr6
	if (cr6.eq) return;
loc_8262DD28:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8262dd04
	if (cr6.lt) goto loc_8262DD04;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262DD40"))) PPC_WEAK_FUNC(sub_8262DD40);
PPC_FUNC_IMPL(__imp__sub_8262DD40) {
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
	// lwz r11,4(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// addi r26,r11,-1
	r26.s64 = r11.s64 + -1;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// li r29,0
	r29.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// addi r24,r10,-1
	r24.s64 = ctx.r10.s64 + -1;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8262ddf8
	if (!cr6.gt) goto loc_8262DDF8;
loc_8262DD88:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x8262dd9c
	if (!cr6.eq) goto loc_8262DD9C;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8262ddb8
	goto loc_8262DDB8;
loc_8262DD9C:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r30,r26,r8
	r30.s64 = ctx.r8.s64 - r26.s64;
loc_8262DDB8:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r29,r22
	ctx.r4.u64 = r29.u64 + r22.u64;
	// add r3,r28,r25
	ctx.r3.u64 = r28.u64 + r25.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// add r28,r30,r28
	r28.u64 = r30.u64 + r28.u64;
	// add r11,r30,r26
	r11.u64 = r30.u64 + r26.u64;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// add r3,r28,r25
	ctx.r3.u64 = r28.u64 + r25.u64;
	// add r29,r11,r29
	r29.u64 = r11.u64 + r29.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r28,r24,r28
	r28.u64 = r24.u64 + r28.u64;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8262dd88
	if (cr6.lt) goto loc_8262DD88;
loc_8262DDF8:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r29,r22
	ctx.r4.u64 = r29.u64 + r22.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r28,r25
	ctx.r3.u64 = r28.u64 + r25.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// subf r9,r10,r21
	ctx.r9.s64 = r21.s64 - ctx.r10.s64;
	// subf r5,r26,r9
	ctx.r5.s64 = ctx.r9.s64 - r26.s64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8262DE20"))) PPC_WEAK_FUNC(sub_8262DE20);
PPC_FUNC_IMPL(__imp__sub_8262DE20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_8262DE24"))) PPC_WEAK_FUNC(sub_8262DE24);
PPC_FUNC_IMPL(__imp__sub_8262DE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262DE28"))) PPC_WEAK_FUNC(sub_8262DE28);
PPC_FUNC_IMPL(__imp__sub_8262DE28) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_8262DE4C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8262de4c
	if (!cr6.eq) goto loc_8262DE4C;
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rotlwi r23,r11,0
	r23.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x828eb9d8
	sub_828EB9D8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r10,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r10.u8);
	// beq cr6,0x8262def8
	if (cr6.eq) goto loc_8262DEF8;
	// li r25,1
	r25.s64 = 1;
loc_8262DE8C:
	// stb r25,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r25.u8);
	// subf r29,r27,r30
	r29.s64 = r30.s64 - r27.s64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x8262debc
	if (!cr6.eq) goto loc_8262DEBC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8262DEBC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r29.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x8262def8
	if (cr6.eq) goto loc_8262DEF8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r3,r30,r23
	ctx.r3.u64 = r30.u64 + r23.u64;
	// bl 0x828eb9d8
	sub_828EB9D8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8262de8c
	if (!cr6.eq) goto loc_8262DE8C;
loc_8262DEF8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8262DF00"))) PPC_WEAK_FUNC(sub_8262DF00);
PPC_FUNC_IMPL(__imp__sub_8262DF00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8262DF04"))) PPC_WEAK_FUNC(sub_8262DF04);
PPC_FUNC_IMPL(__imp__sub_8262DF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262DF08"))) PPC_WEAK_FUNC(sub_8262DF08);
PPC_FUNC_IMPL(__imp__sub_8262DF08) {
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
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpwi cr6,r10,63
	cr6.compare<int32_t>(ctx.r10.s32, 63, xer);
	// bge cr6,0x8262df78
	if (!cr6.lt) goto loc_8262DF78;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpwi cr6,r11,256
	cr6.compare<int32_t>(r11.s32, 256, xer);
	// bge cr6,0x8262df78
	if (!cr6.lt) goto loc_8262DF78;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r5,256
	cr6.compare<int32_t>(ctx.r5.s32, 256, xer);
	// bgt cr6,0x8262df6c
	if (cr6.gt) goto loc_8262DF6C;
	// li r5,256
	ctx.r5.s64 = 256;
loc_8262DF6C:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8262DF78:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8262DF88:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi r30,r11,2
	r30.u64 = r11.u32 & 0x3FFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x828ee088
	sub_828EE088(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8262dff8
	if (cr6.lt) goto loc_8262DFF8;
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, r30.s32, xer);
	// blt cr6,0x8262e04c
	if (cr6.lt) goto loc_8262E04C;
	// addi r30,r3,1
	r30.s64 = ctx.r3.s64 + 1;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x8262dff0
	if (!cr6.lt) goto loc_8262DFF0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x8262dfe0
	if (cr6.lt) goto loc_8262DFE0;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8262DFE0:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8262DFF0:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// b 0x8262df88
	goto loc_8262DF88;
loc_8262DFF8:
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// bgt cr6,0x8262e008
	if (cr6.gt) goto loc_8262E008;
	// li r11,255
	r11.s64 = 255;
loc_8262E008:
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x8262dff0
	if (!cr6.lt) goto loc_8262DFF0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x8262dfe0
	if (cr6.lt) goto loc_8262DFE0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// b 0x8262df88
	goto loc_8262DF88;
loc_8262E04C:
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r9,r10,2
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bge cr6,0x8262e080
	if (!cr6.lt) goto loc_8262E080;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632f50
	sub_82632F50(ctx, base);
loc_8262E080:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8262E084"))) PPC_WEAK_FUNC(sub_8262E084);
PPC_FUNC_IMPL(__imp__sub_8262E084) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8262E088"))) PPC_WEAK_FUNC(sub_8262E088);
PPC_FUNC_IMPL(__imp__sub_8262E088) {
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r28,r11,-1
	r28.s64 = r11.s64 + -1;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r27,r11,-1
	r27.s64 = r11.s64 + -1;
	// add r11,r28,r27
	r11.u64 = r28.u64 + r27.u64;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x8262e0ec
	if (!cr6.lt) goto loc_8262E0EC;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x8262e0dc
	if (cr6.lt) goto loc_8262E0DC;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8262E0DC:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8262E0EC:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r5,r28,1
	ctx.r5.s64 = r28.s64 + 1;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8262E10C"))) PPC_WEAK_FUNC(sub_8262E10C);
PPC_FUNC_IMPL(__imp__sub_8262E10C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8262E110"))) PPC_WEAK_FUNC(sub_8262E110);
PPC_FUNC_IMPL(__imp__sub_8262E110) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r27,r10,-1
	r27.s64 = ctx.r10.s64 + -1;
loc_8262E130:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8262e130
	if (!cr6.eq) goto loc_8262E130;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r29,r11,0
	r29.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r11,r29,r27
	r11.u64 = r29.u64 + r27.u64;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r10,2
	r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x8262e18c
	if (!cr6.lt) goto loc_8262E18C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x8262e17c
	if (cr6.lt) goto loc_8262E17C;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8262E17C:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8262E18C:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r5,r29,1
	ctx.r5.s64 = r29.s64 + 1;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8262E1AC"))) PPC_WEAK_FUNC(sub_8262E1AC);
PPC_FUNC_IMPL(__imp__sub_8262E1AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8262E1B0"))) PPC_WEAK_FUNC(sub_8262E1B0);
PPC_FUNC_IMPL(__imp__sub_8262E1B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r31,r11,-1
	r31.s64 = r11.s64 + -1;
	// addi r28,r10,-1
	r28.s64 = ctx.r10.s64 + -1;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// add r30,r28,r31
	r30.u64 = r28.u64 + r31.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r5,r28,1
	ctx.r5.s64 = r28.s64 + 1;
	// add r3,r29,r31
	ctx.r3.u64 = r29.u64 + r31.u64;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// stw r29,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r29.u32);
	// stw r30,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r30.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r30,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8262E230"))) PPC_WEAK_FUNC(sub_8262E230);
PPC_FUNC_IMPL(__imp__sub_8262E230) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8262E234"))) PPC_WEAK_FUNC(sub_8262E234);
PPC_FUNC_IMPL(__imp__sub_8262E234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262E238"))) PPC_WEAK_FUNC(sub_8262E238);
PPC_FUNC_IMPL(__imp__sub_8262E238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// addi r28,r10,-1
	r28.s64 = ctx.r10.s64 + -1;
loc_8262E25C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8262e25c
	if (!cr6.eq) goto loc_8262E25C;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r26,r11,0
	r26.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r30,r26,r28
	r30.u64 = r26.u64 + r28.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r5,r26,1
	ctx.r5.s64 = r26.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r29,r28
	ctx.r3.u64 = r29.u64 + r28.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8262E2D0"))) PPC_WEAK_FUNC(sub_8262E2D0);
PPC_FUNC_IMPL(__imp__sub_8262E2D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8262E2D4"))) PPC_WEAK_FUNC(sub_8262E2D4);
PPC_FUNC_IMPL(__imp__sub_8262E2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262E2D8"))) PPC_WEAK_FUNC(sub_8262E2D8);
PPC_FUNC_IMPL(__imp__sub_8262E2D8) {
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
	// lwz r29,4(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// addic. r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble 0x8262e364
	if (!cr0.gt) goto loc_8262E364;
loc_8262E320:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,97
	cr6.compare<int32_t>(ctx.r10.s32, 97, xer);
	// blt cr6,0x8262e348
	if (cr6.lt) goto loc_8262E348;
	// cmpwi cr6,r10,122
	cr6.compare<int32_t>(ctx.r10.s32, 122, xer);
	// bgt cr6,0x8262e348
	if (cr6.gt) goto loc_8262E348;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// b 0x8262e34c
	goto loc_8262E34C;
loc_8262E348:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8262E34C:
	// stbx r10,r11,r8
	PPC_STORE_U8(r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8262e320
	if (cr6.lt) goto loc_8262E320;
loc_8262E364:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + r11.u64;
	// stb r10,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r10.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// stw r8,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8262E38C"))) PPC_WEAK_FUNC(sub_8262E38C);
PPC_FUNC_IMPL(__imp__sub_8262E38C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8262E390"))) PPC_WEAK_FUNC(sub_8262E390);
PPC_FUNC_IMPL(__imp__sub_8262E390) {
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
	// lwz r29,4(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// addic. r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble 0x8262e41c
	if (!cr0.gt) goto loc_8262E41C;
loc_8262E3D8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// blt cr6,0x8262e400
	if (cr6.lt) goto loc_8262E400;
	// cmpwi cr6,r10,90
	cr6.compare<int32_t>(ctx.r10.s32, 90, xer);
	// bgt cr6,0x8262e400
	if (cr6.gt) goto loc_8262E400;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// b 0x8262e404
	goto loc_8262E404;
loc_8262E400:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8262E404:
	// stbx r10,r11,r8
	PPC_STORE_U8(r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8262e3d8
	if (cr6.lt) goto loc_8262E3D8;
loc_8262E41C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + r11.u64;
	// stb r10,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r10.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// stw r8,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8262E444"))) PPC_WEAK_FUNC(sub_8262E444);
PPC_FUNC_IMPL(__imp__sub_8262E444) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8262E448"))) PPC_WEAK_FUNC(sub_8262E448);
PPC_FUNC_IMPL(__imp__sub_8262E448) {
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
	// lwz r30,4(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// addic. r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble 0x8262e4dc
	if (!cr0.gt) goto loc_8262E4DC;
	// extsb r9,r29
	ctx.r9.s64 = r29.s8;
loc_8262E4AC:
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r30.u32);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bne cr6,0x8262e4c8
	if (!cr6.eq) goto loc_8262E4C8;
	// stbx r27,r11,r30
	PPC_STORE_U8(r11.u32 + r30.u32, r27.u8);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x8262e4dc
	if (cr6.eq) goto loc_8262E4DC;
loc_8262E4C8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8262e4ac
	if (cr6.lt) goto loc_8262E4AC;
loc_8262E4DC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + r11.u64;
	// stb r10,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r10.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r8,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r8.u32);
	// stw r8,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8262E504"))) PPC_WEAK_FUNC(sub_8262E504);
PPC_FUNC_IMPL(__imp__sub_8262E504) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8262E508"))) PPC_WEAK_FUNC(sub_8262E508);
PPC_FUNC_IMPL(__imp__sub_8262E508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x8262de28
	sub_8262DE28(ctx, base);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// beq cr6,0x8262e5b4
	if (cr6.eq) goto loc_8262E5B4;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x8262dd40
	sub_8262DD40(ctx, base);
	// b 0x8262e5b8
	goto loc_8262E5B8;
loc_8262E5B4:
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_8262E5B8:
	// add r11,r29,r28
	r11.u64 = r29.u64 + r28.u64;
	// stw r29,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r29.u32);
	// stw r28,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r28.u32);
	// stw r28,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r28.u32);
	// stb r25,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, r25.u8);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8262e604
	if (!cr6.eq) goto loc_8262E604;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8262E604:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8262E60C"))) PPC_WEAK_FUNC(sub_8262E60C);
PPC_FUNC_IMPL(__imp__sub_8262E60C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8262E610"))) PPC_WEAK_FUNC(sub_8262E610);
PPC_FUNC_IMPL(__imp__sub_8262E610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// ori r9,r11,12
	ctx.r9.u64 = r11.u64 | 12;
	// li r26,0
	r26.s64 = 0;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x8262de28
	sub_8262DE28(ctx, base);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8262e780
	if (cr6.eq) goto loc_8262E780;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x8262e6b0
	if (!cr6.gt) goto loc_8262E6B0;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8262e6b4
	goto loc_8262E6B4;
loc_8262E6B0:
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8262E6B4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8262dd40
	sub_8262DD40(ctx, base);
	// add r11,r29,r30
	r11.u64 = r29.u64 + r30.u64;
	// stb r26,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, r26.u8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x8262e738
	if (cr6.eq) goto loc_8262E738;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r26,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r26.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8262e720
	if (!cr6.eq) goto loc_8262E720;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8262E720:
	// li r11,1
	r11.s64 = 1;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stb r11,0(r25)
	PPC_STORE_U8(r25.u32 + 0, r11.u8);
	// b 0x8262e784
	goto loc_8262E784;
loc_8262E738:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x8262e770
	if (!cr6.lt) goto loc_8262E770;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x8262e760
	if (cr6.lt) goto loc_8262E760;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8262E760:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8262E770:
	// li r11,1
	r11.s64 = 1;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stb r11,0(r25)
	PPC_STORE_U8(r25.u32 + 0, r11.u8);
	// b 0x8262e784
	goto loc_8262E784;
loc_8262E780:
	// stb r26,0(r25)
	PPC_STORE_U8(r25.u32 + 0, r26.u8);
loc_8262E784:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8262e7bc
	if (!cr6.eq) goto loc_8262E7BC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8262E7BC:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8262E7C4"))) PPC_WEAK_FUNC(sub_8262E7C4);
PPC_FUNC_IMPL(__imp__sub_8262E7C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8262E7C8"))) PPC_WEAK_FUNC(sub_8262E7C8);
PPC_FUNC_IMPL(__imp__sub_8262E7C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32767
	r11.s64 = 2147418112;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r26,0
	r26.s64 = 0;
	// ori r21,r11,65535
	r21.u64 = r11.u64 | 65535;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addic. r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r28,r26
	r28.u64 = r26.u64;
	// lis r22,-32768
	r22.s64 = -2147483648;
	// li r20,1
	r20.s64 = 1;
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// mr r11,r26
	r11.u64 = r26.u64;
	// ble 0x8262ea78
	if (!cr0.gt) goto loc_8262EA78;
loc_8262E808:
	// cmpw cr6,r11,r21
	cr6.compare<int32_t>(r11.s32, r21.s32, xer);
	// bge cr6,0x8262ea78
	if (!cr6.lt) goto loc_8262EA78;
	// lwz r29,0(r24)
	r29.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// extsb r23,r10
	r23.s64 = ctx.r10.s8;
	// lbzx r7,r29,r11
	ctx.r7.u64 = PPC_LOAD_U8(r29.u32 + r11.u32);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// cmpw cr6,r6,r23
	cr6.compare<int32_t>(ctx.r6.s32, r23.s32, xer);
	// beq cr6,0x8262e838
	if (cr6.eq) goto loc_8262E838;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x8262e808
	if (cr6.lt) goto loc_8262E808;
	// b 0x8262ea78
	goto loc_8262EA78;
loc_8262E838:
	// mr r25,r11
	r25.u64 = r11.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8262ea78
	if (cr6.eq) goto loc_8262EA78;
loc_8262E844:
	// subf r11,r28,r9
	r11.s64 = ctx.r9.s64 - r28.s64;
	// subf r31,r28,r25
	r31.s64 = r25.s64 - r28.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// ble cr6,0x8262e85c
	if (!cr6.gt) goto loc_8262E85C;
	// mr r31,r11
	r31.u64 = r11.u64;
loc_8262E85C:
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// addi r30,r31,1
	r30.s64 = r31.s64 + 1;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x8262e8a4
	if (!cr6.lt) goto loc_8262E8A4;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x8262e894
	if (cr6.lt) goto loc_8262E894;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8262E894:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8262E8A4:
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r4,r29,r28
	ctx.r4.u64 = r29.u64 + r28.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stbx r26,r11,r31
	PPC_STORE_U8(r11.u32 + r31.u32, r26.u8);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// clrlwi r8,r10,2
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bne cr6,0x8262e8e8
	if (!cr6.eq) goto loc_8262E8E8;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8262E8E8:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r31,r11,r9
	r31.u64 = r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8262e978
	if (cr0.eq) goto loc_8262E978;
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
	// stw r26,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r26.u32);
	// stw r22,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r22.u32);
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r20.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bne cr6,0x8262e948
	if (!cr6.eq) goto loc_8262E948;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_8262E948:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// ble cr6,0x8262e978
	if (!cr6.gt) goto loc_8262E978;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8262e978
	if (cr6.eq) goto loc_8262E978;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8262E970:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8262e970
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8262E970;
loc_8262E978:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r8.u32);
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r9
	r30.u64 = r11.u64 + ctx.r9.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r6,2
	r11.u64 = ctx.r6.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x8262e9d4
	if (!cr6.lt) goto loc_8262E9D4;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8262e9c4
	if (cr6.lt) goto loc_8262E9C4;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8262E9C4:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8262E9D4:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8262ea20
	if (!cr6.eq) goto loc_8262EA20;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8262EA20:
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// addi r28,r25,1
	r28.s64 = r25.s64 + 1;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(r28.s32, ctx.r10.s32, xer);
	// bge cr6,0x8262ea78
	if (!cr6.lt) goto loc_8262EA78;
loc_8262EA40:
	// cmpw cr6,r11,r21
	cr6.compare<int32_t>(r11.s32, r21.s32, xer);
	// bge cr6,0x8262ea78
	if (!cr6.lt) goto loc_8262EA78;
	// lwz r29,0(r24)
	r29.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lbzx r8,r29,r11
	ctx.r8.u64 = PPC_LOAD_U8(r29.u32 + r11.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpw cr6,r7,r23
	cr6.compare<int32_t>(ctx.r7.s32, r23.s32, xer);
	// beq cr6,0x8262ea6c
	if (cr6.eq) goto loc_8262EA6C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8262ea40
	if (cr6.lt) goto loc_8262EA40;
	// b 0x8262ea78
	goto loc_8262EA78;
loc_8262EA6C:
	// mr r25,r11
	r25.u64 = r11.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x8262e844
	if (!cr6.eq) goto loc_8262E844;
loc_8262EA78:
	// lwz r29,0(r24)
	r29.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lbzx r11,r29,r28
	r11.u64 = PPC_LOAD_U8(r29.u32 + r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8262ec64
	if (cr6.eq) goto loc_8262EC64;
	// subf r11,r28,r9
	r11.s64 = ctx.r9.s64 - r28.s64;
	// mr r30,r21
	r30.u64 = r21.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r11,r21
	cr6.compare<int32_t>(r11.s32, r21.s32, xer);
	// bge cr6,0x8262eaa0
	if (!cr6.lt) goto loc_8262EAA0;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8262EAA0:
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r26.u32);
	// addi r31,r30,1
	r31.s64 = r30.s64 + 1;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r26.u32);
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r22.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x8262eae8
	if (!cr6.lt) goto loc_8262EAE8;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8262ead8
	if (cr6.lt) goto loc_8262EAD8;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8262EAD8:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8262EAE8:
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r29,r28
	ctx.r4.u64 = r29.u64 + r28.u64;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stbx r26,r11,r30
	PPC_STORE_U8(r11.u32 + r30.u32, r26.u8);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// clrlwi r8,r10,2
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bne cr6,0x8262eb2c
	if (!cr6.eq) goto loc_8262EB2C;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8262EB2C:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r31,r11,r9
	r31.u64 = r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8262ebbc
	if (cr0.eq) goto loc_8262EBBC;
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
	// stw r26,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r26.u32);
	// stw r22,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r22.u32);
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r20.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bne cr6,0x8262eb8c
	if (!cr6.eq) goto loc_8262EB8C;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_8262EB8C:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// ble cr6,0x8262ebbc
	if (!cr6.gt) goto loc_8262EBBC;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8262ebbc
	if (cr6.eq) goto loc_8262EBBC;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8262EBB4:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8262ebb4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8262EBB4;
loc_8262EBBC:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// lwz r31,108(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r8.u32);
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r9
	r30.u64 = r11.u64 + ctx.r9.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r6,2
	r11.u64 = ctx.r6.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x8262ec18
	if (!cr6.lt) goto loc_8262EC18;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8262ec08
	if (cr6.lt) goto loc_8262EC08;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8262EC08:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8262EC18:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r26.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8262ec64
	if (!cr6.eq) goto loc_8262EC64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8262EC64:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8262EC68"))) PPC_WEAK_FUNC(sub_8262EC68);
PPC_FUNC_IMPL(__imp__sub_8262EC68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_8262EC6C"))) PPC_WEAK_FUNC(sub_8262EC6C);
PPC_FUNC_IMPL(__imp__sub_8262EC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262EC70"))) PPC_WEAK_FUNC(sub_8262EC70);
PPC_FUNC_IMPL(__imp__sub_8262EC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r3,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// addi r10,r10,-6920
	ctx.r10.s64 = ctx.r10.s64 + -6920;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
}

__attribute__((alias("__imp__sub_8262EC88"))) PPC_WEAK_FUNC(sub_8262EC88);
PPC_FUNC_IMPL(__imp__sub_8262EC88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262EC8C"))) PPC_WEAK_FUNC(sub_8262EC8C);
PPC_FUNC_IMPL(__imp__sub_8262EC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262EC90"))) PPC_WEAK_FUNC(sub_8262EC90);
PPC_FUNC_IMPL(__imp__sub_8262EC90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8262ecd4
	if (cr6.lt) goto loc_8262ECD4;
	// cmpwi cr6,r3,20
	cr6.compare<int32_t>(ctx.r3.s32, 20, xer);
	// blt cr6,0x8262ecc8
	if (cr6.lt) goto loc_8262ECC8;
	// cmpwi cr6,r3,28
	cr6.compare<int32_t>(ctx.r3.s32, 28, xer);
	// beq cr6,0x8262ecc8
	if (cr6.eq) goto loc_8262ECC8;
	// cmpwi cr6,r3,30
	cr6.compare<int32_t>(ctx.r3.s32, 30, xer);
	// beq cr6,0x8262ecc8
	if (cr6.eq) goto loc_8262ECC8;
	// cmpwi cr6,r3,29
	cr6.compare<int32_t>(ctx.r3.s32, 29, xer);
	// beq cr6,0x8262ecc8
	if (cr6.eq) goto loc_8262ECC8;
	// cmpwi cr6,r3,32
	cr6.compare<int32_t>(ctx.r3.s32, 32, xer);
	// beq cr6,0x8262ecc8
	if (cr6.eq) goto loc_8262ECC8;
	// cmpwi cr6,r3,33
	cr6.compare<int32_t>(ctx.r3.s32, 33, xer);
	// bne cr6,0x8262ecd4
	if (!cr6.eq) goto loc_8262ECD4;
loc_8262ECC8:
	// li r11,1
	r11.s64 = 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
loc_8262ECD4:
	// li r11,0
	r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
}

__attribute__((alias("__imp__sub_8262ECDC"))) PPC_WEAK_FUNC(sub_8262ECDC);
PPC_FUNC_IMPL(__imp__sub_8262ECDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262ECE0"))) PPC_WEAK_FUNC(sub_8262ECE0);
PPC_FUNC_IMPL(__imp__sub_8262ECE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r11,r9,-6920
	r11.s64 = ctx.r9.s64 + -6920;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x8262ed14
	if (!cr6.eq) goto loc_8262ED14;
	// addi r6,r11,4
	ctx.r6.s64 = r11.s64 + 4;
	// lwzx r4,r7,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// b 0x82631ff8
	sub_82631FF8(ctx, base);
	return;
loc_8262ED14:
	// addi r5,r11,4
	ctx.r5.s64 = r11.s64 + 4;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// addi r4,r4,7980
	ctx.r4.s64 = ctx.r4.s64 + 7980;
	// lwzx r5,r7,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// b 0x826320d0
	sub_826320D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262ED28"))) PPC_WEAK_FUNC(sub_8262ED28);
PPC_FUNC_IMPL(__imp__sub_8262ED28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
}

__attribute__((alias("__imp__sub_8262ED2C"))) PPC_WEAK_FUNC(sub_8262ED2C);
PPC_FUNC_IMPL(__imp__sub_8262ED2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262ED30"))) PPC_WEAK_FUNC(sub_8262ED30);
PPC_FUNC_IMPL(__imp__sub_8262ED30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
}

__attribute__((alias("__imp__sub_8262ED34"))) PPC_WEAK_FUNC(sub_8262ED34);
PPC_FUNC_IMPL(__imp__sub_8262ED34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262ED38"))) PPC_WEAK_FUNC(sub_8262ED38);
PPC_FUNC_IMPL(__imp__sub_8262ED38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
}

__attribute__((alias("__imp__sub_8262ED3C"))) PPC_WEAK_FUNC(sub_8262ED3C);
PPC_FUNC_IMPL(__imp__sub_8262ED3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262ED40"))) PPC_WEAK_FUNC(sub_8262ED40);
PPC_FUNC_IMPL(__imp__sub_8262ED40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,14(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r3,r11
	ctx.r3.s64 = r11.s16;
}

__attribute__((alias("__imp__sub_8262ED48"))) PPC_WEAK_FUNC(sub_8262ED48);
PPC_FUNC_IMPL(__imp__sub_8262ED48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262ED4C"))) PPC_WEAK_FUNC(sub_8262ED4C);
PPC_FUNC_IMPL(__imp__sub_8262ED4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262ED50"))) PPC_WEAK_FUNC(sub_8262ED50);
PPC_FUNC_IMPL(__imp__sub_8262ED50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262ED58"))) PPC_WEAK_FUNC(sub_8262ED58);
PPC_FUNC_IMPL(__imp__sub_8262ED58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8262ed68
	if (cr6.eq) goto loc_8262ED68;
	// b 0x8262bf30
	sub_8262BF30(ctx, base);
	return;
loc_8262ED68:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262ED70"))) PPC_WEAK_FUNC(sub_8262ED70);
PPC_FUNC_IMPL(__imp__sub_8262ED70) {
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
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// li r11,-1
	r11.s64 = -1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bgt cr6,0x8262eecc
	if (cr6.gt) goto loc_8262EECC;
	// lis r12,-32157
	r12.s64 = -2107441152;
	// rlwinm r0,r9,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-4692
	r12.s64 = r12.s64 + -4692;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_8262EE30;
	case 1:
		goto loc_8262EE30;
	case 2:
		goto loc_8262EE30;
	case 3:
		goto loc_8262EE30;
	case 4:
		goto loc_8262EE30;
	case 5:
		goto loc_8262EE30;
	case 6:
		goto loc_8262EE30;
	case 7:
		goto loc_8262EE30;
	case 8:
		goto loc_8262EE30;
	case 9:
		goto loc_8262EE30;
	case 10:
		goto loc_8262EE30;
	case 11:
		goto loc_8262EE30;
	case 12:
		goto loc_8262EE30;
	case 13:
		goto loc_8262EE30;
	case 14:
		goto loc_8262EE30;
	case 15:
		goto loc_8262EE30;
	case 16:
		goto loc_8262EE30;
	case 17:
		goto loc_8262EE30;
	case 18:
		goto loc_8262EECC;
	case 19:
		goto loc_8262EE30;
	case 20:
		goto loc_8262EE30;
	case 21:
		goto loc_8262EE30;
	case 22:
		goto loc_8262EECC;
	case 23:
		goto loc_8262EE6C;
	case 24:
		goto loc_8262EEAC;
	case 25:
		goto loc_8262EE30;
	case 26:
		goto loc_8262EE30;
	case 27:
		goto loc_8262EE30;
	case 28:
		goto loc_8262EE30;
	case 29:
		goto loc_8262EE30;
	case 30:
		goto loc_8262EE6C;
	case 31:
		goto loc_8262EE30;
	case 32:
		goto loc_8262EE30;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4404(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4404);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4404(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4404);
	// lwz r19,-4500(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4500);
	// lwz r19,-4436(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4436);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4500(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4500);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
	// lwz r19,-4560(r2)
	r19.u64 = PPC_LOAD_U32(r2.u32 + -4560);
loc_8262EE30:
	// lhz r11,14(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r9,r11
	ctx.r9.s64 = r11.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8262ee44
	if (!cr6.eq) goto loc_8262EE44;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8262EE44:
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r8,-31964
	ctx.r8.s64 = -2094792704;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r8,-6920
	r11.s64 = ctx.r8.s64 + -6920;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,8
	ctx.r5.s64 = r11.s64 + 8;
	// lhzx r4,r6,r5
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mullw r11,r3,r9
	r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// b 0x8262eecc
	goto loc_8262EECC;
loc_8262EE6C:
	// lhz r11,14(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r8,r11
	ctx.r8.s64 = r11.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x8262ee80
	if (!cr6.eq) goto loc_8262EE80;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8262EE80:
	// lbz r11,13(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 1);
	// addi r10,r10,-6920
	ctx.r10.s64 = ctx.r10.s64 + -6920;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r7.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mullw r11,r4,r8
	r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// b 0x8262eecc
	goto loc_8262EECC;
loc_8262EEAC:
	// lhz r11,14(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r31,r11
	r31.s64 = r11.s16;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x8262eec0
	if (!cr6.eq) goto loc_8262EEC0;
	// li r31,1
	r31.s64 = 1;
loc_8262EEC0:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8262c538
	sub_8262C538(ctx, base);
	// mullw r11,r3,r31
	r11.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
loc_8262EECC:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8262EEE0"))) PPC_WEAK_FUNC(sub_8262EEE0);
PPC_FUNC_IMPL(__imp__sub_8262EEE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262EEE4"))) PPC_WEAK_FUNC(sub_8262EEE4);
PPC_FUNC_IMPL(__imp__sub_8262EEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262EEE8"))) PPC_WEAK_FUNC(sub_8262EEE8);
PPC_FUNC_IMPL(__imp__sub_8262EEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,16(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// rlwinm r10,r11,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262EEF8"))) PPC_WEAK_FUNC(sub_8262EEF8);
PPC_FUNC_IMPL(__imp__sub_8262EEF8) {
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
	// lbz r11,12(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(r11.s32, 24, xer);
	// beq cr6,0x8262ef1c
	if (cr6.eq) goto loc_8262EF1C;
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// bne cr6,0x8262ef20
	if (!cr6.eq) goto loc_8262EF20;
loc_8262EF1C:
	// lbz r11,13(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 13);
loc_8262EF20:
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(r11.s32, 25, xer);
	// bne cr6,0x8262ef88
	if (!cr6.eq) goto loc_8262EF88;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r29,1
	r29.s64 = 1;
	// li r31,0
	r31.s64 = 0;
	// bl 0x8262c210
	sub_8262C210(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8262ef80
	if (!cr6.gt) goto loc_8262EF80;
loc_8262EF40:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8262c238
	sub_8262C238(ctx, base);
	// bl 0x8262eef8
	sub_8262EEF8(ctx, base);
	// cmpw cr6,r3,r29
	cr6.compare<int32_t>(ctx.r3.s32, r29.s32, xer);
	// ble cr6,0x8262ef6c
	if (!cr6.gt) goto loc_8262EF6C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8262c238
	sub_8262C238(ctx, base);
	// bl 0x8262eef8
	sub_8262EEF8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8262EF6C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x8262c210
	sub_8262C210(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x8262ef40
	if (cr6.lt) goto loc_8262EF40;
loc_8262EF80:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8262efa8
	goto loc_8262EFA8;
loc_8262EF88:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r9,-6920
	r11.s64 = ctx.r9.s64 + -6920;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,10
	ctx.r6.s64 = r11.s64 + 10;
	// lhzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
loc_8262EFA8:
	// lhz r11,16(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 16);
	// rlwinm r10,r11,0,23,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x180;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8262efdc
	if (cr6.eq) goto loc_8262EFDC;
	// rlwinm r11,r11,24,24,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFF;
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// ble cr6,0x8262efdc
	if (!cr6.gt) goto loc_8262EFDC;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_8262EFDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8262EFE0"))) PPC_WEAK_FUNC(sub_8262EFE0);
PPC_FUNC_IMPL(__imp__sub_8262EFE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8262EFE4"))) PPC_WEAK_FUNC(sub_8262EFE4);
PPC_FUNC_IMPL(__imp__sub_8262EFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262EFE8"))) PPC_WEAK_FUNC(sub_8262EFE8);
PPC_FUNC_IMPL(__imp__sub_8262EFE8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,13(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
}

__attribute__((alias("__imp__sub_8262EFEC"))) PPC_WEAK_FUNC(sub_8262EFEC);
PPC_FUNC_IMPL(__imp__sub_8262EFEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262EFF0"))) PPC_WEAK_FUNC(sub_8262EFF0);
PPC_FUNC_IMPL(__imp__sub_8262EFF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,13(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(r11.u32, 24, xer);
	// beq cr6,0x8262f038
	if (cr6.eq) goto loc_8262F038;
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(r11.u32, 31, xer);
	// beq cr6,0x8262f038
	if (cr6.eq) goto loc_8262F038;
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(r11.u32, 25, xer);
	// beq cr6,0x8262f030
	if (cr6.eq) goto loc_8262F030;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r9,-6920
	r11.s64 = ctx.r9.s64 + -6920;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// lhzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// blr 
	return;
loc_8262F030:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8262c538
	sub_8262C538(ctx, base);
	return;
loc_8262F038:
	// li r3,-1
	ctx.r3.s64 = -1;
}

__attribute__((alias("__imp__sub_8262F03C"))) PPC_WEAK_FUNC(sub_8262F03C);
PPC_FUNC_IMPL(__imp__sub_8262F03C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262F040"))) PPC_WEAK_FUNC(sub_8262F040);
PPC_FUNC_IMPL(__imp__sub_8262F040) {
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
	// li r30,0
	r30.s64 = 0;
	// bl 0x8262ed70
	sub_8262ED70(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8262f08c
	if (cr6.eq) goto loc_8262F08C;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8262f080
	if (cr6.eq) goto loc_8262F080;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x8262f098
	if (!cr6.eq) goto loc_8262F098;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8262f09c
	goto loc_8262F09C;
loc_8262F080:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// extsh r3,r11
	ctx.r3.s64 = r11.s16;
	// b 0x8262f09c
	goto loc_8262F09C;
loc_8262F08C:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// b 0x8262f09c
	goto loc_8262F09C;
loc_8262F098:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8262F09C:
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

__attribute__((alias("__imp__sub_8262F0B0"))) PPC_WEAK_FUNC(sub_8262F0B0);
PPC_FUNC_IMPL(__imp__sub_8262F0B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262F0B4"))) PPC_WEAK_FUNC(sub_8262F0B4);
PPC_FUNC_IMPL(__imp__sub_8262F0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262F0B8"))) PPC_WEAK_FUNC(sub_8262F0B8);
PPC_FUNC_IMPL(__imp__sub_8262F0B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8262ed70
	sub_8262ED70(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8262f100
	if (cr6.eq) goto loc_8262F100;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8262f0f8
	if (cr6.eq) goto loc_8262F0F8;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x8262f104
	if (!cr6.eq) goto loc_8262F104;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x8262f104
	goto loc_8262F104;
loc_8262F0F8:
	// sth r30,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r30.u16);
	// b 0x8262f104
	goto loc_8262F104;
loc_8262F100:
	// stb r30,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r30.u8);
loc_8262F104:
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

__attribute__((alias("__imp__sub_8262F118"))) PPC_WEAK_FUNC(sub_8262F118);
PPC_FUNC_IMPL(__imp__sub_8262F118) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262F11C"))) PPC_WEAK_FUNC(sub_8262F11C);
PPC_FUNC_IMPL(__imp__sub_8262F11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262F120"))) PPC_WEAK_FUNC(sub_8262F120);
PPC_FUNC_IMPL(__imp__sub_8262F120) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,8044
	ctx.r4.s64 = r11.s64 + 8044;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8262d3a0
	sub_8262D3A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8262f154
	if (!cr6.eq) goto loc_8262F154;
	// li r3,24
	ctx.r3.s64 = 24;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e946c
	return;
loc_8262F154:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,8036
	ctx.r4.s64 = r11.s64 + 8036;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262d3a0
	sub_8262D3A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8262f17c
	if (!cr6.eq) goto loc_8262F17C;
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e946c
	return;
loc_8262F17C:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,8024
	ctx.r4.s64 = r11.s64 + 8024;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262d3a0
	sub_8262D3A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8262f1a4
	if (!cr6.eq) goto loc_8262F1A4;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e946c
	return;
loc_8262F1A4:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r11,8008
	ctx.r4.s64 = r11.s64 + 8008;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262d3a0
	sub_8262D3A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8262f1cc
	if (!cr6.eq) goto loc_8262F1CC;
	// li r3,26
	ctx.r3.s64 = 26;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e946c
	return;
loc_8262F1CC:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,8000
	ctx.r4.s64 = r11.s64 + 8000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262d3a0
	sub_8262D3A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8262f1f4
	if (!cr6.eq) goto loc_8262F1F4;
	// li r3,29
	ctx.r3.s64 = 29;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e946c
	return;
loc_8262F1F4:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r11,7988
	ctx.r4.s64 = r11.s64 + 7988;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262d3a0
	sub_8262D3A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8262f21c
	if (!cr6.eq) goto loc_8262F21C;
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e946c
	return;
loc_8262F21C:
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262d630
	sub_8262D630(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8262f248
	if (cr6.eq) goto loc_8262F248;
	// lbz r11,1(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8262f248
	if (!cr6.eq) goto loc_8262F248;
	// li r3,20
	ctx.r3.s64 = 20;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e946c
	return;
loc_8262F248:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826326b8
	sub_826326B8(ctx, base);
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262d628
	sub_8262D628(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8262f278
	if (cr6.eq) goto loc_8262F278;
	// subf r5,r31,r3
	ctx.r5.s64 = ctx.r3.s64 - r31.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826323b0
	sub_826323B0(ctx, base);
loc_8262F278:
	// lis r11,-31964
	r11.s64 = -2094792704;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,-6920
	r29.s64 = r11.s64 + -6920;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
loc_8262F288:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82631a80
	sub_82631A80(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8262f2c4
	if (!cr6.eq) goto loc_8262F2C4;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// addi r11,r29,412
	r11.s64 = r29.s64 + 412;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8262f288
	if (cr6.lt) goto loc_8262F288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262f730
	sub_8262F730(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e946c
	return;
loc_8262F2C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262f730
	sub_8262F730(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8262F2D4"))) PPC_WEAK_FUNC(sub_8262F2D4);
PPC_FUNC_IMPL(__imp__sub_8262F2D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8262F2D8"))) PPC_WEAK_FUNC(sub_8262F2D8);
PPC_FUNC_IMPL(__imp__sub_8262F2D8) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,8024
	ctx.r4.s64 = r11.s64 + 8024;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8262d3a0
	sub_8262D3A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8262f340
	if (!cr6.eq) goto loc_8262F340;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262d5c0
	sub_8262D5C0(ctx, base);
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82632830
	sub_82632830(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8262f120
	sub_8262F120(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8262f730
	sub_8262F730(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8262f3f0
	goto loc_8262F3F0;
loc_8262F340:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r11,8008
	ctx.r4.s64 = r11.s64 + 8008;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262d3a0
	sub_8262D3A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8262f394
	if (!cr6.eq) goto loc_8262F394;
	// addi r31,r31,14
	r31.s64 = r31.s64 + 14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262d5c0
	sub_8262D5C0(ctx, base);
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82632830
	sub_82632830(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8262f120
	sub_8262F120(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262f730
	sub_8262F730(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8262f3f0
	goto loc_8262F3F0;
loc_8262F394:
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262d628
	sub_8262D628(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8262f3ec
	if (cr6.eq) goto loc_8262F3EC;
	// li r4,93
	ctx.r4.s64 = 93;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262d628
	sub_8262D628(ctx, base);
	// subf r11,r30,r3
	r11.s64 = ctx.r3.s64 - r30.s64;
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// bl 0x82632830
	sub_82632830(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8262d5e8
	sub_8262D5E8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8262f730
	sub_8262F730(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8262f3f0
	goto loc_8262F3F0;
loc_8262F3EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8262F3F0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8262F404"))) PPC_WEAK_FUNC(sub_8262F404);
PPC_FUNC_IMPL(__imp__sub_8262F404) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262F408"))) PPC_WEAK_FUNC(sub_8262F408);
PPC_FUNC_IMPL(__imp__sub_8262F408) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r30,r11,-29908
	r30.s64 = r11.s64 + -29908;
	// lbz r31,12(r29)
	r31.u64 = PPC_LOAD_U8(r29.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8262f444
	if (cr6.eq) goto loc_8262F444;
	// bl 0x8262bfb0
	sub_8262BFB0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x8262f448
	goto loc_8262F448;
loc_8262F444:
	// mr r28,r30
	r28.u64 = r30.u64;
loc_8262F448:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8262f458
	if (cr6.eq) goto loc_8262F458;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8262F458:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262f7a8
	sub_8262F7A8(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x8262f4a0
	if (cr6.lt) goto loc_8262F4A0;
	// cmpwi cr6,r31,20
	cr6.compare<int32_t>(r31.s32, 20, xer);
	// blt cr6,0x8262f498
	if (cr6.lt) goto loc_8262F498;
	// cmpwi cr6,r31,28
	cr6.compare<int32_t>(r31.s32, 28, xer);
	// beq cr6,0x8262f498
	if (cr6.eq) goto loc_8262F498;
	// cmpwi cr6,r31,30
	cr6.compare<int32_t>(r31.s32, 30, xer);
	// beq cr6,0x8262f498
	if (cr6.eq) goto loc_8262F498;
	// cmpwi cr6,r31,29
	cr6.compare<int32_t>(r31.s32, 29, xer);
	// beq cr6,0x8262f498
	if (cr6.eq) goto loc_8262F498;
	// cmpwi cr6,r31,32
	cr6.compare<int32_t>(r31.s32, 32, xer);
	// beq cr6,0x8262f498
	if (cr6.eq) goto loc_8262F498;
	// cmpwi cr6,r31,33
	cr6.compare<int32_t>(r31.s32, 33, xer);
	// bne cr6,0x8262f4a0
	if (!cr6.eq) goto loc_8262F4A0;
loc_8262F498:
	// li r11,1
	r11.s64 = 1;
	// b 0x8262f4a4
	goto loc_8262F4A4;
loc_8262F4A0:
	// li r11,0
	r11.s64 = 0;
loc_8262F4A4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8262f650
	if (!cr6.eq) goto loc_8262F650;
	// cmpwi cr6,r31,27
	cr6.compare<int32_t>(r31.s32, 27, xer);
	// beq cr6,0x8262f650
	if (cr6.eq) goto loc_8262F650;
	// cmpwi cr6,r31,20
	cr6.compare<int32_t>(r31.s32, 20, xer);
	// bne cr6,0x8262f518
	if (!cr6.eq) goto loc_8262F518;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8262f4e8
	if (cr6.eq) goto loc_8262F4E8;
	// bl 0x8262bfb0
	sub_8262BFB0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,8200
	ctx.r4.s64 = r11.s64 + 8200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826320d0
	sub_826320D0(ctx, base);
	// b 0x8262f69c
	goto loc_8262F69C;
loc_8262F4E8:
	// lbz r11,13(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 13);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x8262f508
	if (!cr6.eq) goto loc_8262F508;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r4,r11,8000
	ctx.r4.s64 = r11.s64 + 8000;
	// bl 0x82631ff8
	sub_82631FF8(ctx, base);
	// b 0x8262f69c
	goto loc_8262F69C;
loc_8262F508:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r4,r11,8192
	ctx.r4.s64 = r11.s64 + 8192;
	// bl 0x82631ff8
	sub_82631FF8(ctx, base);
	// b 0x8262f69c
	goto loc_8262F69C;
loc_8262F518:
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(r31.s32, 22, xer);
	// beq cr6,0x8262f5a4
	if (cr6.eq) goto loc_8262F5A4;
	// cmpwi cr6,r31,26
	cr6.compare<int32_t>(r31.s32, 26, xer);
	// beq cr6,0x8262f5a4
	if (cr6.eq) goto loc_8262F5A4;
	// cmpwi cr6,r31,24
	cr6.compare<int32_t>(r31.s32, 24, xer);
	// bne cr6,0x8262f548
	if (!cr6.eq) goto loc_8262F548;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,8184
	ctx.r4.s64 = r11.s64 + 8184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826320d0
	sub_826320D0(ctx, base);
	// b 0x8262f69c
	goto loc_8262F69C;
loc_8262F548:
	// cmpwi cr6,r31,31
	cr6.compare<int32_t>(r31.s32, 31, xer);
	// bne cr6,0x8262f568
	if (!cr6.eq) goto loc_8262F568;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,8172
	ctx.r4.s64 = r11.s64 + 8172;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826320d0
	sub_826320D0(ctx, base);
	// b 0x8262f69c
	goto loc_8262F69C;
loc_8262F568:
	// cmpwi cr6,r31,25
	cr6.compare<int32_t>(r31.s32, 25, xer);
	// bne cr6,0x8262f69c
	if (!cr6.eq) goto loc_8262F69C;
	// lhz r11,14(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 14);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// extsh r6,r11
	ctx.r6.s64 = r11.s16;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x8262f598
	if (!cr6.eq) goto loc_8262F598;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r4,r11,8160
	ctx.r4.s64 = r11.s64 + 8160;
	// bl 0x826320d0
	sub_826320D0(ctx, base);
	// b 0x8262f69c
	goto loc_8262F69C;
loc_8262F598:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r4,r11,8144
	ctx.r4.s64 = r11.s64 + 8144;
	// b 0x8262f698
	goto loc_8262F698;
loc_8262F5A4:
	// lbz r10,13(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 13);
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(r31.s32, 22, xer);
	// bne cr6,0x8262f5bc
	if (!cr6.eq) goto loc_8262F5BC;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r5,r11,8136
	ctx.r5.s64 = r11.s64 + 8136;
	// b 0x8262f5c4
	goto loc_8262F5C4;
loc_8262F5BC:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r5,r11,8120
	ctx.r5.s64 = r11.s64 + 8120;
loc_8262F5C4:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8262ec90
	sub_8262EC90(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8262f600
	if (cr6.eq) goto loc_8262F600;
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r9,-6920
	r11.s64 = ctx.r9.s64 + -6920;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,4
	ctx.r6.s64 = r11.s64 + 4;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// addi r4,r4,8104
	ctx.r4.s64 = ctx.r4.s64 + 8104;
	// lwzx r6,r7,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// b 0x8262f694
	goto loc_8262F694;
loc_8262F600:
	// cmpwi cr6,r10,20
	cr6.compare<int32_t>(ctx.r10.s32, 20, xer);
	// bne cr6,0x8262f638
	if (!cr6.eq) goto loc_8262F638;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8262f628
	if (cr6.eq) goto loc_8262F628;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r4,r11,8088
	ctx.r4.s64 = r11.s64 + 8088;
	// b 0x8262f698
	goto loc_8262F698;
loc_8262F628:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r4,r11,8072
	ctx.r4.s64 = r11.s64 + 8072;
	// bl 0x826320d0
	sub_826320D0(ctx, base);
	// b 0x8262f69c
	goto loc_8262F69C;
loc_8262F638:
	// cmpwi cr6,r10,25
	cr6.compare<int32_t>(ctx.r10.s32, 25, xer);
	// bne cr6,0x8262f69c
	if (!cr6.eq) goto loc_8262F69C;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r4,r11,8052
	ctx.r4.s64 = r11.s64 + 8052;
	// b 0x8262f694
	goto loc_8262F694;
loc_8262F650:
	// lhz r11,14(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 14);
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// extsh r6,r11
	ctx.r6.s64 = r11.s16;
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// add r9,r31,r11
	ctx.r9.u64 = r31.u64 + r11.u64;
	// addi r11,r10,-6920
	r11.s64 = ctx.r10.s64 + -6920;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// bne cr6,0x8262f688
	if (!cr6.eq) goto loc_8262F688;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r8,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x82631ff8
	sub_82631FF8(ctx, base);
	// b 0x8262f69c
	goto loc_8262F69C;
loc_8262F688:
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// addi r4,r5,7980
	ctx.r4.s64 = ctx.r5.s64 + 7980;
	// lwzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
loc_8262F694:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_8262F698:
	// bl 0x826320d0
	sub_826320D0(ctx, base);
loc_8262F69C:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8262d5b0
	sub_8262D5B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8262f730
	sub_8262F730(ctx, base);
	// addi r3,r31,-1
	ctx.r3.s64 = r31.s64 + -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8262F6C0"))) PPC_WEAK_FUNC(sub_8262F6C0);
PPC_FUNC_IMPL(__imp__sub_8262F6C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8262F6C4"))) PPC_WEAK_FUNC(sub_8262F6C4);
PPC_FUNC_IMPL(__imp__sub_8262F6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262F6C8"))) PPC_WEAK_FUNC(sub_8262F6C8);
PPC_FUNC_IMPL(__imp__sub_8262F6C8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r4,1
	r31.s64 = ctx.r4.s64 + 1;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x8262f718
	if (!cr6.lt) goto loc_8262F718;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8262f708
	if (cr6.lt) goto loc_8262F708;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8262F708:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8262F718:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// stbx r10,r11,r29
	PPC_STORE_U8(r11.u32 + r29.u32, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8262F72C"))) PPC_WEAK_FUNC(sub_8262F72C);
PPC_FUNC_IMPL(__imp__sub_8262F72C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8262F730"))) PPC_WEAK_FUNC(sub_8262F730);
PPC_FUNC_IMPL(__imp__sub_8262F730) {
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
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8262f784
	if (!cr6.eq) goto loc_8262F784;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8262F784:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_8262F7A4"))) PPC_WEAK_FUNC(sub_8262F7A4);
PPC_FUNC_IMPL(__imp__sub_8262F7A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262F7A8"))) PPC_WEAK_FUNC(sub_8262F7A8);
PPC_FUNC_IMPL(__imp__sub_8262F7A8) {
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
	// lis r11,-32768
	r11.s64 = -2147483648;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// ori r9,r11,32
	ctx.r9.u64 = r11.u64 | 32;
	// li r30,0
	r30.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r8,2
	r11.u64 = ctx.r8.u32 & 0x3FFFFFFF;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x8262f810
	if (!cr6.lt) goto loc_8262F810;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bgt cr6,0x8262f804
	if (cr6.gt) goto loc_8262F804;
	// li r5,1
	ctx.r5.s64 = 1;
loc_8262F804:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8262F810:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stb r30,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r30.u8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stb r30,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r30.u8);
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

__attribute__((alias("__imp__sub_8262F840"))) PPC_WEAK_FUNC(sub_8262F840);
PPC_FUNC_IMPL(__imp__sub_8262F840) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262F844"))) PPC_WEAK_FUNC(sub_8262F844);
PPC_FUNC_IMPL(__imp__sub_8262F844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262F848"))) PPC_WEAK_FUNC(sub_8262F848);
PPC_FUNC_IMPL(__imp__sub_8262F848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,18(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 18);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262F85C"))) PPC_WEAK_FUNC(sub_8262F85C);
PPC_FUNC_IMPL(__imp__sub_8262F85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262F860"))) PPC_WEAK_FUNC(sub_8262F860);
PPC_FUNC_IMPL(__imp__sub_8262F860) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8262c338
	sub_8262C338(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8262f8a8
	if (cr6.eq) goto loc_8262F8A8;
	// lhz r11,18(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8262F8A8:
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

__attribute__((alias("__imp__sub_8262F8BC"))) PPC_WEAK_FUNC(sub_8262F8BC);
PPC_FUNC_IMPL(__imp__sub_8262F8BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262F8C0"))) PPC_WEAK_FUNC(sub_8262F8C0);
PPC_FUNC_IMPL(__imp__sub_8262F8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,18(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 18);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_8262F8D0"))) PPC_WEAK_FUNC(sub_8262F8D0);
PPC_FUNC_IMPL(__imp__sub_8262F8D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262F8D4"))) PPC_WEAK_FUNC(sub_8262F8D4);
PPC_FUNC_IMPL(__imp__sub_8262F8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262F8D8"))) PPC_WEAK_FUNC(sub_8262F8D8);
PPC_FUNC_IMPL(__imp__sub_8262F8D8) {
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
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// lwz r30,0(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8262c338
	sub_8262C338(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8262f920
	if (cr6.eq) goto loc_8262F920;
	// lhz r11,18(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8262F920:
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

__attribute__((alias("__imp__sub_8262F938"))) PPC_WEAK_FUNC(sub_8262F938);
PPC_FUNC_IMPL(__imp__sub_8262F938) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262F93C"))) PPC_WEAK_FUNC(sub_8262F93C);
PPC_FUNC_IMPL(__imp__sub_8262F93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262F940"))) PPC_WEAK_FUNC(sub_8262F940);
PPC_FUNC_IMPL(__imp__sub_8262F940) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8262c338
	sub_8262C338(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8262f988
	if (cr6.eq) goto loc_8262F988;
	// lhz r11,18(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8262F988:
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

__attribute__((alias("__imp__sub_8262F9A0"))) PPC_WEAK_FUNC(sub_8262F9A0);
PPC_FUNC_IMPL(__imp__sub_8262F9A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262F9A4"))) PPC_WEAK_FUNC(sub_8262F9A4);
PPC_FUNC_IMPL(__imp__sub_8262F9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262F9A8"))) PPC_WEAK_FUNC(sub_8262F9A8);
PPC_FUNC_IMPL(__imp__sub_8262F9A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
}

__attribute__((alias("__imp__sub_8262F9B8"))) PPC_WEAK_FUNC(sub_8262F9B8);
PPC_FUNC_IMPL(__imp__sub_8262F9B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262F9BC"))) PPC_WEAK_FUNC(sub_8262F9BC);
PPC_FUNC_IMPL(__imp__sub_8262F9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262F9C0"))) PPC_WEAK_FUNC(sub_8262F9C0);
PPC_FUNC_IMPL(__imp__sub_8262F9C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
}

__attribute__((alias("__imp__sub_8262F9C4"))) PPC_WEAK_FUNC(sub_8262F9C4);
PPC_FUNC_IMPL(__imp__sub_8262F9C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262F9C8"))) PPC_WEAK_FUNC(sub_8262F9C8);
PPC_FUNC_IMPL(__imp__sub_8262F9C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
}

__attribute__((alias("__imp__sub_8262F9CC"))) PPC_WEAK_FUNC(sub_8262F9CC);
PPC_FUNC_IMPL(__imp__sub_8262F9CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262F9D0"))) PPC_WEAK_FUNC(sub_8262F9D0);
PPC_FUNC_IMPL(__imp__sub_8262F9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
}

__attribute__((alias("__imp__sub_8262F9DC"))) PPC_WEAK_FUNC(sub_8262F9DC);
PPC_FUNC_IMPL(__imp__sub_8262F9DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262F9E0"))) PPC_WEAK_FUNC(sub_8262F9E0);
PPC_FUNC_IMPL(__imp__sub_8262F9E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
}

__attribute__((alias("__imp__sub_8262F9EC"))) PPC_WEAK_FUNC(sub_8262F9EC);
PPC_FUNC_IMPL(__imp__sub_8262F9EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262F9F0"))) PPC_WEAK_FUNC(sub_8262F9F0);
PPC_FUNC_IMPL(__imp__sub_8262F9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
}

__attribute__((alias("__imp__sub_8262F9FC"))) PPC_WEAK_FUNC(sub_8262F9FC);
PPC_FUNC_IMPL(__imp__sub_8262F9FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FA00"))) PPC_WEAK_FUNC(sub_8262FA00);
PPC_FUNC_IMPL(__imp__sub_8262FA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r3,r11,r4
	ctx.r3.u64 = r11.u64 + ctx.r4.u64;
}

__attribute__((alias("__imp__sub_8262FA08"))) PPC_WEAK_FUNC(sub_8262FA08);
PPC_FUNC_IMPL(__imp__sub_8262FA08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FA0C"))) PPC_WEAK_FUNC(sub_8262FA0C);
PPC_FUNC_IMPL(__imp__sub_8262FA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262FA10"))) PPC_WEAK_FUNC(sub_8262FA10);
PPC_FUNC_IMPL(__imp__sub_8262FA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
}

__attribute__((alias("__imp__sub_8262FA1C"))) PPC_WEAK_FUNC(sub_8262FA1C);
PPC_FUNC_IMPL(__imp__sub_8262FA1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FA20"))) PPC_WEAK_FUNC(sub_8262FA20);
PPC_FUNC_IMPL(__imp__sub_8262FA20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FA30"))) PPC_WEAK_FUNC(sub_8262FA30);
PPC_FUNC_IMPL(__imp__sub_8262FA30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
}

__attribute__((alias("__imp__sub_8262FA3C"))) PPC_WEAK_FUNC(sub_8262FA3C);
PPC_FUNC_IMPL(__imp__sub_8262FA3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FA40"))) PPC_WEAK_FUNC(sub_8262FA40);
PPC_FUNC_IMPL(__imp__sub_8262FA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
}

__attribute__((alias("__imp__sub_8262FA4C"))) PPC_WEAK_FUNC(sub_8262FA4C);
PPC_FUNC_IMPL(__imp__sub_8262FA4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FA50"))) PPC_WEAK_FUNC(sub_8262FA50);
PPC_FUNC_IMPL(__imp__sub_8262FA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FA60"))) PPC_WEAK_FUNC(sub_8262FA60);
PPC_FUNC_IMPL(__imp__sub_8262FA60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FA70"))) PPC_WEAK_FUNC(sub_8262FA70);
PPC_FUNC_IMPL(__imp__sub_8262FA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
}

__attribute__((alias("__imp__sub_8262FA7C"))) PPC_WEAK_FUNC(sub_8262FA7C);
PPC_FUNC_IMPL(__imp__sub_8262FA7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FA80"))) PPC_WEAK_FUNC(sub_8262FA80);
PPC_FUNC_IMPL(__imp__sub_8262FA80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
}

__attribute__((alias("__imp__sub_8262FA8C"))) PPC_WEAK_FUNC(sub_8262FA8C);
PPC_FUNC_IMPL(__imp__sub_8262FA8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FA90"))) PPC_WEAK_FUNC(sub_8262FA90);
PPC_FUNC_IMPL(__imp__sub_8262FA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
}

__attribute__((alias("__imp__sub_8262FA9C"))) PPC_WEAK_FUNC(sub_8262FA9C);
PPC_FUNC_IMPL(__imp__sub_8262FA9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FAA0"))) PPC_WEAK_FUNC(sub_8262FAA0);
PPC_FUNC_IMPL(__imp__sub_8262FAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r3,r11,r4
	ctx.r3.u64 = r11.u64 + ctx.r4.u64;
}

__attribute__((alias("__imp__sub_8262FAA8"))) PPC_WEAK_FUNC(sub_8262FAA8);
PPC_FUNC_IMPL(__imp__sub_8262FAA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FAAC"))) PPC_WEAK_FUNC(sub_8262FAAC);
PPC_FUNC_IMPL(__imp__sub_8262FAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262FAB0"))) PPC_WEAK_FUNC(sub_8262FAB0);
PPC_FUNC_IMPL(__imp__sub_8262FAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r3,r11,r4
	ctx.r3.u64 = r11.u64 + ctx.r4.u64;
}

__attribute__((alias("__imp__sub_8262FAB8"))) PPC_WEAK_FUNC(sub_8262FAB8);
PPC_FUNC_IMPL(__imp__sub_8262FAB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FABC"))) PPC_WEAK_FUNC(sub_8262FABC);
PPC_FUNC_IMPL(__imp__sub_8262FABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262FAC0"))) PPC_WEAK_FUNC(sub_8262FAC0);
PPC_FUNC_IMPL(__imp__sub_8262FAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
}

__attribute__((alias("__imp__sub_8262FACC"))) PPC_WEAK_FUNC(sub_8262FACC);
PPC_FUNC_IMPL(__imp__sub_8262FACC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FAD0"))) PPC_WEAK_FUNC(sub_8262FAD0);
PPC_FUNC_IMPL(__imp__sub_8262FAD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
}

__attribute__((alias("__imp__sub_8262FAE4"))) PPC_WEAK_FUNC(sub_8262FAE4);
PPC_FUNC_IMPL(__imp__sub_8262FAE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FAE8"))) PPC_WEAK_FUNC(sub_8262FAE8);
PPC_FUNC_IMPL(__imp__sub_8262FAE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
}

__attribute__((alias("__imp__sub_8262FAF4"))) PPC_WEAK_FUNC(sub_8262FAF4);
PPC_FUNC_IMPL(__imp__sub_8262FAF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FAF8"))) PPC_WEAK_FUNC(sub_8262FAF8);
PPC_FUNC_IMPL(__imp__sub_8262FAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
}

__attribute__((alias("__imp__sub_8262FB0C"))) PPC_WEAK_FUNC(sub_8262FB0C);
PPC_FUNC_IMPL(__imp__sub_8262FB0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FB10"))) PPC_WEAK_FUNC(sub_8262FB10);
PPC_FUNC_IMPL(__imp__sub_8262FB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
}

__attribute__((alias("__imp__sub_8262FB1C"))) PPC_WEAK_FUNC(sub_8262FB1C);
PPC_FUNC_IMPL(__imp__sub_8262FB1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FB20"))) PPC_WEAK_FUNC(sub_8262FB20);
PPC_FUNC_IMPL(__imp__sub_8262FB20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
}

__attribute__((alias("__imp__sub_8262FB34"))) PPC_WEAK_FUNC(sub_8262FB34);
PPC_FUNC_IMPL(__imp__sub_8262FB34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FB38"))) PPC_WEAK_FUNC(sub_8262FB38);
PPC_FUNC_IMPL(__imp__sub_8262FB38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
}

__attribute__((alias("__imp__sub_8262FB44"))) PPC_WEAK_FUNC(sub_8262FB44);
PPC_FUNC_IMPL(__imp__sub_8262FB44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FB48"))) PPC_WEAK_FUNC(sub_8262FB48);
PPC_FUNC_IMPL(__imp__sub_8262FB48) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
}

__attribute__((alias("__imp__sub_8262FB4C"))) PPC_WEAK_FUNC(sub_8262FB4C);
PPC_FUNC_IMPL(__imp__sub_8262FB4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FB50"))) PPC_WEAK_FUNC(sub_8262FB50);
PPC_FUNC_IMPL(__imp__sub_8262FB50) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8262ed28
	sub_8262ED28(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8262c338
	sub_8262C338(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8262fb9c
	if (cr6.eq) goto loc_8262FB9C;
	// lhz r11,18(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8262FB9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8262FBA4"))) PPC_WEAK_FUNC(sub_8262FBA4);
PPC_FUNC_IMPL(__imp__sub_8262FBA4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8262FBA8"))) PPC_WEAK_FUNC(sub_8262FBA8);
PPC_FUNC_IMPL(__imp__sub_8262FBA8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
}

__attribute__((alias("__imp__sub_8262FBB0"))) PPC_WEAK_FUNC(sub_8262FBB0);
PPC_FUNC_IMPL(__imp__sub_8262FBB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FBB4"))) PPC_WEAK_FUNC(sub_8262FBB4);
PPC_FUNC_IMPL(__imp__sub_8262FBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262FBB8"))) PPC_WEAK_FUNC(sub_8262FBB8);
PPC_FUNC_IMPL(__imp__sub_8262FBB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8262FBC8"))) PPC_WEAK_FUNC(sub_8262FBC8);
PPC_FUNC_IMPL(__imp__sub_8262FBC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FBCC"))) PPC_WEAK_FUNC(sub_8262FBCC);
PPC_FUNC_IMPL(__imp__sub_8262FBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262FBD0"))) PPC_WEAK_FUNC(sub_8262FBD0);
PPC_FUNC_IMPL(__imp__sub_8262FBD0) {
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
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8262ed28
	sub_8262ED28(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_8262FC18"))) PPC_WEAK_FUNC(sub_8262FC18);
PPC_FUNC_IMPL(__imp__sub_8262FC18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FC1C"))) PPC_WEAK_FUNC(sub_8262FC1C);
PPC_FUNC_IMPL(__imp__sub_8262FC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262FC20"))) PPC_WEAK_FUNC(sub_8262FC20);
PPC_FUNC_IMPL(__imp__sub_8262FC20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8262FC38:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// ble cr6,0x8262fc38
	if (!cr6.gt) goto loc_8262FC38;
}

__attribute__((alias("__imp__sub_8262FC54"))) PPC_WEAK_FUNC(sub_8262FC54);
PPC_FUNC_IMPL(__imp__sub_8262FC54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FC58"))) PPC_WEAK_FUNC(sub_8262FC58);
PPC_FUNC_IMPL(__imp__sub_8262FC58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8262FC70"))) PPC_WEAK_FUNC(sub_8262FC70);
PPC_FUNC_IMPL(__imp__sub_8262FC70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FC74"))) PPC_WEAK_FUNC(sub_8262FC74);
PPC_FUNC_IMPL(__imp__sub_8262FC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262FC78"))) PPC_WEAK_FUNC(sub_8262FC78);
PPC_FUNC_IMPL(__imp__sub_8262FC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r9,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r4
	ctx.r8.u64 = r11.u64 + ctx.r4.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8262FC94"))) PPC_WEAK_FUNC(sub_8262FC94);
PPC_FUNC_IMPL(__imp__sub_8262FC94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FC98"))) PPC_WEAK_FUNC(sub_8262FC98);
PPC_FUNC_IMPL(__imp__sub_8262FC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r9,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r4
	ctx.r8.u64 = r11.u64 + ctx.r4.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r5.u32);
}

__attribute__((alias("__imp__sub_8262FCB4"))) PPC_WEAK_FUNC(sub_8262FCB4);
PPC_FUNC_IMPL(__imp__sub_8262FCB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FCB8"))) PPC_WEAK_FUNC(sub_8262FCB8);
PPC_FUNC_IMPL(__imp__sub_8262FCB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r3,r9
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_8262FCD8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r3,r9
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, xer);
	// ble cr6,0x8262fcd8
	if (!cr6.gt) goto loc_8262FCD8;
}

__attribute__((alias("__imp__sub_8262FCF4"))) PPC_WEAK_FUNC(sub_8262FCF4);
PPC_FUNC_IMPL(__imp__sub_8262FCF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FCF8"))) PPC_WEAK_FUNC(sub_8262FCF8);
PPC_FUNC_IMPL(__imp__sub_8262FCF8) {
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
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8262fd48
	if (cr6.eq) goto loc_8262FD48;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_8262FD28:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// subf r11,r11,r7
	r11.s64 = ctx.r7.s64 - r11.s64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8262fd28
	if (!cr6.eq) goto loc_8262FD28;
loc_8262FD48:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r28,r11,1
	r28.u64 = r11.u32 & 0x7FFFFFFF;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// ble cr6,0x8262fd70
	if (!cr6.gt) goto loc_8262FD70;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82630110
	sub_82630110(ctx, base);
loc_8262FD70:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// and r30,r11,r28
	r30.u64 = r11.u64 & r28.u64;
	// rlwinm r29,r30,2,0,29
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x8262fddc
	if (cr6.eq) goto loc_8262FDDC;
loc_8262FD8C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, xer);
	// bne cr6,0x8262fdbc
	if (!cr6.eq) goto loc_8262FDBC;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x8262d370
	sub_8262D370(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8262fde8
	if (cr6.eq) goto loc_8262FDE8;
loc_8262FDBC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// and r30,r10,r11
	r30.u64 = ctx.r10.u64 & r11.u64;
	// rlwinm r29,r30,2,0,29
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r29,r9
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// bne cr6,0x8262fd8c
	if (!cr6.eq) goto loc_8262FD8C;
loc_8262FDDC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_8262FDE8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stwx r28,r29,r11
	PPC_STORE_U32(r29.u32 + r11.u32, r28.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, r27.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// rlwinm r11,r6,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r30
	ctx.r5.u64 = r11.u64 + r30.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r4,r7
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8262FE28"))) PPC_WEAK_FUNC(sub_8262FE28);
PPC_FUNC_IMPL(__imp__sub_8262FE28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8262FE2C"))) PPC_WEAK_FUNC(sub_8262FE2C);
PPC_FUNC_IMPL(__imp__sub_8262FE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262FE30"))) PPC_WEAK_FUNC(sub_8262FE30);
PPC_FUNC_IMPL(__imp__sub_8262FE30) {
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
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8262fe7c
	if (cr6.eq) goto loc_8262FE7C;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_8262FE5C:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// subf r11,r11,r7
	r11.s64 = ctx.r7.s64 - r11.s64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8262fe5c
	if (!cr6.eq) goto loc_8262FE5C;
loc_8262FE7C:
	// clrlwi r29,r11,1
	r29.u64 = r11.u32 & 0x7FFFFFFF;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// and r31,r11,r29
	r31.u64 = r11.u64 & r29.u64;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x8262fee4
	if (cr6.eq) goto loc_8262FEE4;
loc_8262FE9C:
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, xer);
	// bne cr6,0x8262fec4
	if (!cr6.eq) goto loc_8262FEC4;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x8262d370
	sub_8262D370(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8262fef0
	if (cr6.eq) goto loc_8262FEF0;
loc_8262FEC4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r9,r31,1
	ctx.r9.s64 = r31.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// and r31,r9,r11
	r31.u64 = ctx.r9.u64 & r11.u64;
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x8262fe9c
	if (!cr6.eq) goto loc_8262FE9C;
loc_8262FEE4:
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8262FEF0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8262FEF8"))) PPC_WEAK_FUNC(sub_8262FEF8);
PPC_FUNC_IMPL(__imp__sub_8262FEF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8262FEFC"))) PPC_WEAK_FUNC(sub_8262FEFC);
PPC_FUNC_IMPL(__imp__sub_8262FEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262FF00"))) PPC_WEAK_FUNC(sub_8262FF00);
PPC_FUNC_IMPL(__imp__sub_8262FF00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// addic. r9,r11,1
	xer.ca = r11.u32 > 4294967294;
	ctx.r9.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// ble 0x8262ff3c
	if (!cr0.gt) goto loc_8262FF3C;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_8262FF1C:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r8,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// blt cr6,0x8262ff1c
	if (cr6.lt) goto loc_8262FF1C;
loc_8262FF3C:
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
}

__attribute__((alias("__imp__sub_8262FF40"))) PPC_WEAK_FUNC(sub_8262FF40);
PPC_FUNC_IMPL(__imp__sub_8262FF40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FF44"))) PPC_WEAK_FUNC(sub_8262FF44);
PPC_FUNC_IMPL(__imp__sub_8262FF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262FF48"))) PPC_WEAK_FUNC(sub_8262FF48);
PPC_FUNC_IMPL(__imp__sub_8262FF48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r10,r5,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// srawi r9,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = r11.s32 >> 31;
	// subfc r8,r5,r11
	xer.ca = r11.u32 >= ctx.r5.u32;
	ctx.r8.s64 = r11.s64 - ctx.r5.s64;
	// adde r11,r10,r9
	temp.u8 = (ctx.r10.u32 + ctx.r9.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	r11.u64 = ctx.r10.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
}

__attribute__((alias("__imp__sub_8262FF60"))) PPC_WEAK_FUNC(sub_8262FF60);
PPC_FUNC_IMPL(__imp__sub_8262FF60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FF64"))) PPC_WEAK_FUNC(sub_8262FF64);
PPC_FUNC_IMPL(__imp__sub_8262FF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262FF68"))) PPC_WEAK_FUNC(sub_8262FF68);
PPC_FUNC_IMPL(__imp__sub_8262FF68) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8262fe30
	sub_8262FE30(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8262ffc0
	if (cr6.gt) goto loc_8262FFC0;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
	// b 0x8262ffc4
	goto loc_8262FFC4;
loc_8262FFC0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8262FFC4:
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

__attribute__((alias("__imp__sub_8262FFD8"))) PPC_WEAK_FUNC(sub_8262FFD8);
PPC_FUNC_IMPL(__imp__sub_8262FFD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262FFDC"))) PPC_WEAK_FUNC(sub_8262FFDC);
PPC_FUNC_IMPL(__imp__sub_8262FFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262FFE0"))) PPC_WEAK_FUNC(sub_8262FFE0);
PPC_FUNC_IMPL(__imp__sub_8262FFE0) {
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
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,192
	ctx.r4.s64 = 192;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x8262d7e0
	sub_8262D7E0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82630044"))) PPC_WEAK_FUNC(sub_82630044);
PPC_FUNC_IMPL(__imp__sub_82630044) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630048"))) PPC_WEAK_FUNC(sub_82630048);
PPC_FUNC_IMPL(__imp__sub_82630048) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_826300A4"))) PPC_WEAK_FUNC(sub_826300A4);
PPC_FUNC_IMPL(__imp__sub_826300A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826300A8"))) PPC_WEAK_FUNC(sub_826300A8);
PPC_FUNC_IMPL(__imp__sub_826300A8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8262fe30
	sub_8262FE30(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bgt cr6,0x826300f4
	if (cr6.gt) goto loc_826300F4;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r9,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r3
	ctx.r8.u64 = r11.u64 + ctx.r3.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// b 0x826300f8
	goto loc_826300F8;
loc_826300F4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_826300F8:
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

__attribute__((alias("__imp__sub_8263010C"))) PPC_WEAK_FUNC(sub_8263010C);
PPC_FUNC_IMPL(__imp__sub_8263010C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630110"))) PPC_WEAK_FUNC(sub_82630110);
PPC_FUNC_IMPL(__imp__sub_82630110) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r27,0(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r29,1,0,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x8262d7e0
	sub_8262D7E0(ctx, base);
	// addi r8,r29,-1
	ctx.r8.s64 = r29.s64 + -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x826301c8
	if (!cr6.gt) goto loc_826301C8;
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r27
	r26.u64 = r27.u64;
	// add r28,r11,r27
	r28.u64 = r11.u64 + r27.u64;
loc_8263018C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x826301b4
	if (cr6.eq) goto loc_826301B4;
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// bl 0x8262fcf8
	sub_8262FCF8(ctx, base);
loc_826301B4:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// blt cr6,0x8263018c
	if (cr6.lt) goto loc_8263018C;
loc_826301C8:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826301F4"))) PPC_WEAK_FUNC(sub_826301F4);
PPC_FUNC_IMPL(__imp__sub_826301F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826301F8"))) PPC_WEAK_FUNC(sub_826301F8);
PPC_FUNC_IMPL(__imp__sub_826301F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_82630200"))) PPC_WEAK_FUNC(sub_82630200);
PPC_FUNC_IMPL(__imp__sub_82630200) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630204"))) PPC_WEAK_FUNC(sub_82630204);
PPC_FUNC_IMPL(__imp__sub_82630204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82630208"))) PPC_WEAK_FUNC(sub_82630208);
PPC_FUNC_IMPL(__imp__sub_82630208) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82630234
	if (cr6.eq) goto loc_82630234;
	// bl 0x82605300
	sub_82605300(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82630234:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82630244"))) PPC_WEAK_FUNC(sub_82630244);
PPC_FUNC_IMPL(__imp__sub_82630244) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630248"))) PPC_WEAK_FUNC(sub_82630248);
PPC_FUNC_IMPL(__imp__sub_82630248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r17{};
	PPCRegister r20{};
	PPCRegister r24{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r24,-10852(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + -10852);
	// lwz r17,-13712(r3)
	r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13712);
	// mflr r12
	// bl 0x828e941c
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r8,r31,80
	ctx.r8.s64 = r31.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82607788
	sub_82607788(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826302a0
	if (!cr6.eq) goto loc_826302A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x828e946c
	return;
loc_826302A0:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// stw r9,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r9.u32);
	// std r11,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r11.u64);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r3,16493
	ctx.r3.s64 = 1080885248;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,5000
	ctx.r3.u64 = ctx.r3.u64 | 5000;
	// bl 0x82bb92d8
	sub_82BB92D8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82630250"))) PPC_WEAK_FUNC(sub_82630250);
PPC_FUNC_IMPL(__imp__sub_82630250) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r8,r31,80
	ctx.r8.s64 = r31.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82607788
	sub_82607788(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826302a0
	if (!cr6.eq) goto loc_826302A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x828e946c
	return;
loc_826302A0:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// stw r9,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r9.u32);
	// std r11,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r11.u64);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r3,16493
	ctx.r3.s64 = 1080885248;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,5000
	ctx.r3.u64 = ctx.r3.u64 | 5000;
	// bl 0x82bb92d8
	sub_82BB92D8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x828e946c
	return;
	// lis r11,16493
	r11.s64 = 1080885248;
	// ori r10,r11,5000
	ctx.r10.u64 = r11.u64 | 5000;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq cr6,0x8263031c
	if (cr6.eq) goto loc_8263031C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8263031C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
}

__attribute__((alias("__imp__sub_826302FC"))) PPC_WEAK_FUNC(sub_826302FC);
PPC_FUNC_IMPL(__imp__sub_826302FC) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,16493
	r11.s64 = 1080885248;
	// ori r10,r11,5000
	ctx.r10.u64 = r11.u64 | 5000;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq cr6,0x8263031c
	if (cr6.eq) goto loc_8263031C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8263031C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630324"))) PPC_WEAK_FUNC(sub_82630324);
PPC_FUNC_IMPL(__imp__sub_82630324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82630328"))) PPC_WEAK_FUNC(sub_82630328);
PPC_FUNC_IMPL(__imp__sub_82630328) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82630354
	if (!cr6.eq) goto loc_82630354;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82630354:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82605db8
	sub_82605DB8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,-259
	ctx.r10.s64 = r11.s64 + -259;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82630378"))) PPC_WEAK_FUNC(sub_82630378);
PPC_FUNC_IMPL(__imp__sub_82630378) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263037C"))) PPC_WEAK_FUNC(sub_8263037C);
PPC_FUNC_IMPL(__imp__sub_8263037C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82630380"))) PPC_WEAK_FUNC(sub_82630380);
PPC_FUNC_IMPL(__imp__sub_82630380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82605c68
	sub_82605C68(ctx, base);
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826303A0"))) PPC_WEAK_FUNC(sub_826303A0);
PPC_FUNC_IMPL(__imp__sub_826303A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826303A4"))) PPC_WEAK_FUNC(sub_826303A4);
PPC_FUNC_IMPL(__imp__sub_826303A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826303A8"))) PPC_WEAK_FUNC(sub_826303A8);
PPC_FUNC_IMPL(__imp__sub_826303A8) {
	PPC_FUNC_PROLOGUE();
	// ld r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826303B0"))) PPC_WEAK_FUNC(sub_826303B0);
PPC_FUNC_IMPL(__imp__sub_826303B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826303B8"))) PPC_WEAK_FUNC(sub_826303B8);
PPC_FUNC_IMPL(__imp__sub_826303B8) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826303e4
	if (cr6.eq) goto loc_826303E4;
	// bl 0x82605300
	sub_82605300(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_826303E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826303F4"))) PPC_WEAK_FUNC(sub_826303F4);
PPC_FUNC_IMPL(__imp__sub_826303F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826303F8"))) PPC_WEAK_FUNC(sub_826303F8);
PPC_FUNC_IMPL(__imp__sub_826303F8) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630400"))) PPC_WEAK_FUNC(sub_82630400);
PPC_FUNC_IMPL(__imp__sub_82630400) {
	PPC_FUNC_PROLOGUE();
	// stvx128 v1,r3,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630408"))) PPC_WEAK_FUNC(sub_82630408);
PPC_FUNC_IMPL(__imp__sub_82630408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lvx128 v13,r0,r3
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// vrlimi128 v13,v0,1,0
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 228), 1));
	// li r11,48
	r11.s64 = 48;
	// addi r7,r8,7536
	ctx.r7.s64 = ctx.r8.s64 + 7536;
	// stvx128 v13,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r3,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vrlimi128 v12,v0,1,0
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 228), 1));
	// stvx128 v12,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r3,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vrlimi128 v11,v0,1,0
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 228), 1));
	// stvx128 v11,r4,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r3,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r3.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vrlimi128 v10,v0,1,0
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 228), 1));
	// stvx128 v10,r4,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_82630454"))) PPC_WEAK_FUNC(sub_82630454);
PPC_FUNC_IMPL(__imp__sub_82630454) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630458"))) PPC_WEAK_FUNC(sub_82630458);
PPC_FUNC_IMPL(__imp__sub_82630458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// vrlimi128 v13,v0,1,0
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 228), 1));
	// li r11,48
	r11.s64 = 48;
	// addi r7,r8,7536
	ctx.r7.s64 = ctx.r8.s64 + 7536;
	// stvx128 v13,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r4,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vrlimi128 v12,v0,1,0
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 228), 1));
	// stvx128 v12,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r4,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vrlimi128 v11,v0,1,0
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 228), 1));
	// stvx128 v11,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r4,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vrlimi128 v10,v0,1,0
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 228), 1));
	// stvx128 v10,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_826304A4"))) PPC_WEAK_FUNC(sub_826304A4);
PPC_FUNC_IMPL(__imp__sub_826304A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826304A8"))) PPC_WEAK_FUNC(sub_826304A8);
PPC_FUNC_IMPL(__imp__sub_826304A8) {
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
	// addi r4,r4,48
	ctx.r4.s64 = ctx.r4.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82627f60
	sub_82627F60(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826304f8
	if (cr6.eq) goto loc_826304F8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x82628a00
	sub_82628A00(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x826304fc
	if (!cr6.eq) goto loc_826304FC;
loc_826304F8:
	// li r11,0
	r11.s64 = 0;
loc_826304FC:
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

__attribute__((alias("__imp__sub_82630518"))) PPC_WEAK_FUNC(sub_82630518);
PPC_FUNC_IMPL(__imp__sub_82630518) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263051C"))) PPC_WEAK_FUNC(sub_8263051C);
PPC_FUNC_IMPL(__imp__sub_8263051C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82630520"))) PPC_WEAK_FUNC(sub_82630520);
PPC_FUNC_IMPL(__imp__sub_82630520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8262a578
	sub_8262A578(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826305ac
	if (cr6.eq) goto loc_826305AC;
	// li r11,48
	r11.s64 = 48;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// vspltisw v13,-1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r10,5456
	ctx.r8.s64 = ctx.r10.s64 + 5456;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lvx128 v12,r30,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r30.u32 + r11.u32) & ~0xF), VectorMaskL));
	// li r6,224
	ctx.r6.s64 = 224;
	// lvx128 v11,r31,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r31.u32 + r11.u32) & ~0xF), VectorMaskL));
	// addi r5,r7,-12480
	ctx.r5.s64 = ctx.r7.s64 + -12480;
	// vsubfp v10,v11,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v9,r0,r9
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vspltw v8,v9,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// vand v7,v10,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v0,r5,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// li r11,1
	r11.s64 = 1;
	// vcmpgefp v6,v8,v7
	_mm_store_ps(ctx.v6.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v7.f32)));
	// vor v5,v6,v0
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcmpequw. v4,v5,v13
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	cr6.setFromMask(_mm_load_ps(ctx.v4.f32), 0xF);
	// blt cr6,0x826305b0
	if (cr6.lt) goto loc_826305B0;
loc_826305AC:
	// li r11,0
	r11.s64 = 0;
loc_826305B0:
	// stb r11,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r11.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_826305C0"))) PPC_WEAK_FUNC(sub_826305C0);
PPC_FUNC_IMPL(__imp__sub_826305C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826305C4"))) PPC_WEAK_FUNC(sub_826305C4);
PPC_FUNC_IMPL(__imp__sub_826305C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826305C8"))) PPC_WEAK_FUNC(sub_826305C8);
PPC_FUNC_IMPL(__imp__sub_826305C8) {
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
	// bl 0x8262a3b8
	sub_8262A3B8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lvx128 v8,r0,r31
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// li r11,48
	r11.s64 = 48;
	// addi r9,r10,8976
	ctx.r9.s64 = ctx.r10.s64 + 8976;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// lvx128 v11,r30,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r30.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vxor v9,v11,v0
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v12,r31,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r31.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r31,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vspltw v7,v9,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// vspltw v10,v9,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xAA));
	// vspltw v0,v9,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x55));
	// vmulfp128 v11,v8,v7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v12,v12,v10,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r31,r11
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82630644"))) PPC_WEAK_FUNC(sub_82630644);
PPC_FUNC_IMPL(__imp__sub_82630644) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630648"))) PPC_WEAK_FUNC(sub_82630648);
PPC_FUNC_IMPL(__imp__sub_82630648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v11,r0,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r7,32
	ctx.r7.s64 = 32;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r5,48
	r11.s64 = ctx.r5.s64 + 48;
	// subf r9,r5,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r5.s64;
	// lvx128 v10,r4,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r4,r7
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8263066C:
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v12,v0,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v13,v0,1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v12,v11,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v10,v13,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v9,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r9,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bdnz 0x8263066c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8263066C;
	// addi r11,r3,48
	r11.s64 = ctx.r3.s64 + 48;
	// li r10,48
	ctx.r10.s64 = 48;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r4,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vaddfp v12,v0,v13
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

