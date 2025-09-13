#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825B6F00"))) PPC_WEAK_FUNC(sub_825B6F00);
PPC_FUNC_IMPL(__imp__sub_825B6F00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B6F04"))) PPC_WEAK_FUNC(sub_825B6F04);
PPC_FUNC_IMPL(__imp__sub_825B6F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B6F08"))) PPC_WEAK_FUNC(sub_825B6F08);
PPC_FUNC_IMPL(__imp__sub_825B6F08) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4352
	ctx.r10.s64 = r11.s64 + -4352;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825b6fe0
	sub_825B6FE0(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-4380
	ctx.r8.s64 = ctx.r9.s64 + -4380;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B6F5C"))) PPC_WEAK_FUNC(sub_825B6F5C);
PPC_FUNC_IMPL(__imp__sub_825B6F5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B6F60"))) PPC_WEAK_FUNC(sub_825B6F60);
PPC_FUNC_IMPL(__imp__sub_825B6F60) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4352
	ctx.r10.s64 = r11.s64 + -4352;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825b6fe0
	sub_825B6FE0(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-4380
	ctx.r8.s64 = ctx.r9.s64 + -4380;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825b6fc4
	if (cr6.eq) goto loc_825B6FC4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825B6FC4:
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

__attribute__((alias("__imp__sub_825B6FD8"))) PPC_WEAK_FUNC(sub_825B6FD8);
PPC_FUNC_IMPL(__imp__sub_825B6FD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B6FDC"))) PPC_WEAK_FUNC(sub_825B6FDC);
PPC_FUNC_IMPL(__imp__sub_825B6FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B6FE0"))) PPC_WEAK_FUNC(sub_825B6FE0);
PPC_FUNC_IMPL(__imp__sub_825B6FE0) {
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
	// beq cr6,0x825b70c4
	if (cr6.eq) goto loc_825B70C4;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b7054
	if (!cr6.eq) goto loc_825B7054;
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
	// beq cr6,0x825b70c4
	if (cr6.eq) goto loc_825B70C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x825b6de0
	sub_825B6DE0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x825b70c4
	goto loc_825B70C4;
loc_825B7054:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825b6ea8
	sub_825B6EA8(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x825b7080
	if (!cr6.gt) goto loc_825B7080;
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
loc_825B7080:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825b3488
	sub_825B3488(ctx, base);
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
	// bl 0x825b6f08
	sub_825B6F08(ctx, base);
loc_825B70C4:
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

__attribute__((alias("__imp__sub_825B70D8"))) PPC_WEAK_FUNC(sub_825B70D8);
PPC_FUNC_IMPL(__imp__sub_825B70D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B70DC"))) PPC_WEAK_FUNC(sub_825B70DC);
PPC_FUNC_IMPL(__imp__sub_825B70DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B70E0"))) PPC_WEAK_FUNC(sub_825B70E0);
PPC_FUNC_IMPL(__imp__sub_825B70E0) {
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
	// bl 0x825b6d48
	sub_825B6D48(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b7118
	if (cr6.eq) goto loc_825B7118;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825B7118:
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

__attribute__((alias("__imp__sub_825B712C"))) PPC_WEAK_FUNC(sub_825B712C);
PPC_FUNC_IMPL(__imp__sub_825B712C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B7130"))) PPC_WEAK_FUNC(sub_825B7130);
PPC_FUNC_IMPL(__imp__sub_825B7130) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r3,216
	ctx.r3.s64 = ctx.r3.s64 + 216;
	// addi r10,r11,-4284
	ctx.r10.s64 = r11.s64 + -4284;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb340
	sub_825BB340(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B7170"))) PPC_WEAK_FUNC(sub_825B7170);
PPC_FUNC_IMPL(__imp__sub_825B7170) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B7174"))) PPC_WEAK_FUNC(sub_825B7174);
PPC_FUNC_IMPL(__imp__sub_825B7174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B7178"))) PPC_WEAK_FUNC(sub_825B7178);
PPC_FUNC_IMPL(__imp__sub_825B7178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,260(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r10,256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bltlr cr6
	if (cr6.lt) return;
}

__attribute__((alias("__imp__sub_825B7188"))) PPC_WEAK_FUNC(sub_825B7188);
PPC_FUNC_IMPL(__imp__sub_825B7188) {
	PPC_FUNC_PROLOGUE();
	// b 0x825bb0c8
	sub_825BB0C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B718C"))) PPC_WEAK_FUNC(sub_825B718C);
PPC_FUNC_IMPL(__imp__sub_825B718C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B7190"))) PPC_WEAK_FUNC(sub_825B7190);
PPC_FUNC_IMPL(__imp__sub_825B7190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// stb r10,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r10.u8);
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B71A8"))) PPC_WEAK_FUNC(sub_825B71A8);
PPC_FUNC_IMPL(__imp__sub_825B71A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,244(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,248(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 248);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b71d4
	if (cr6.eq) goto loc_825B71D4;
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,252(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_825B71D4:
	// lwz r11,260(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stb r10,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r10.u8);
	// stw r9,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B71EC"))) PPC_WEAK_FUNC(sub_825B71EC);
PPC_FUNC_IMPL(__imp__sub_825B71EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B71F0"))) PPC_WEAK_FUNC(sub_825B71F0);
PPC_FUNC_IMPL(__imp__sub_825B71F0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r8,r11,84
	ctx.r8.s64 = r11.s64 + 84;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// addi r5,r6,-4636
	ctx.r5.s64 = ctx.r6.s64 + -4636;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 256);
	// addic r31,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	r31.s64 = ctx.r7.s64 + -1;
	// lwz r9,260(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// addi r6,r11,20
	ctx.r6.s64 = r11.s64 + 20;
	// subfe r7,r31,r7
	temp.u8 = (~r31.u32 + ctx.r7.u32 < ~r31.u32) | (~r31.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~r31.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B724C"))) PPC_WEAK_FUNC(sub_825B724C);
PPC_FUNC_IMPL(__imp__sub_825B724C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B7250"))) PPC_WEAK_FUNC(sub_825B7250);
PPC_FUNC_IMPL(__imp__sub_825B7250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r11,0
	r11.s64 = 0;
	// li r30,-1
	r30.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// addi r5,r3,20
	ctx.r5.s64 = ctx.r3.s64 + 20;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r11.u8);
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r11.u32);
	// stb r11,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, r11.u8);
	// stw r9,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// lbz r8,5(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// lwz r7,260(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,256(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r8,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r8.u8);
	// stw r7,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r7.u32);
	// stw r6,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// bl 0x822e6810
	sub_822E6810(ctx, base);
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_825B72E4"))) PPC_WEAK_FUNC(sub_825B72E4);
PPC_FUNC_IMPL(__imp__sub_825B72E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825B72E8"))) PPC_WEAK_FUNC(sub_825B72E8);
PPC_FUNC_IMPL(__imp__sub_825B72E8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb0b0
	sub_825BB0B0(ctx, base);
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r10,104
	r29.s64 = ctx.r10.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19292(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19292);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b7354
	if (!cr6.eq) goto loc_825B7354;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b7354
	if (!cr6.eq) goto loc_825B7354;
	// lwz r11,19292(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19292);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825B7354:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825B7358"))) PPC_WEAK_FUNC(sub_825B7358);
PPC_FUNC_IMPL(__imp__sub_825B7358) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825B735C"))) PPC_WEAK_FUNC(sub_825B735C);
PPC_FUNC_IMPL(__imp__sub_825B735C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B7360"))) PPC_WEAK_FUNC(sub_825B7360);
PPC_FUNC_IMPL(__imp__sub_825B7360) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb0a0
	sub_825BB0A0(ctx, base);
	// lis r11,-32165
	r11.s64 = -2107965440;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r30,r11,29096
	r30.s64 = r11.s64 + 29096;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,3168
	ctx.r3.s64 = ctx.r9.s64 + 3168;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r29,r11,104
	r29.s64 = r11.s64 + 104;
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
	// lwz r11,19292(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19292);
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
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825B73D0"))) PPC_WEAK_FUNC(sub_825B73D0);
PPC_FUNC_IMPL(__imp__sub_825B73D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825B73D4"))) PPC_WEAK_FUNC(sub_825B73D4);
PPC_FUNC_IMPL(__imp__sub_825B73D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B73D8"))) PPC_WEAK_FUNC(sub_825B73D8);
PPC_FUNC_IMPL(__imp__sub_825B73D8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r3,r10,-4616
	ctx.r3.s64 = ctx.r10.s64 + -4616;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b7468
	if (cr6.eq) goto loc_825B7468;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b746c
	if (!cr6.eq) goto loc_825B746C;
loc_825B7468:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825B746C:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r10,-4588
	ctx.r3.s64 = ctx.r10.s64 + -4588;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b74f4
	if (cr6.eq) goto loc_825B74F4;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b74f8
	if (!cr6.eq) goto loc_825B74F8;
loc_825B74F4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_825B74F8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r11.u32);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825b752c
	if (!cr6.eq) goto loc_825B752C;
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x825b7540
	if (!cr6.gt) goto loc_825B7540;
loc_825B752C:
	// lwz r11,256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r10.u8);
	// stw r11,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r11.u32);
	// b 0x825b7548
	goto loc_825B7548;
loc_825B7540:
	// li r11,1
	r11.s64 = 1;
	// stb r11,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r11.u8);
loc_825B7548:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B755C"))) PPC_WEAK_FUNC(sub_825B755C);
PPC_FUNC_IMPL(__imp__sub_825B755C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B7560"))) PPC_WEAK_FUNC(sub_825B7560);
PPC_FUNC_IMPL(__imp__sub_825B7560) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825bb3b8
	sub_825BB3B8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// addi r10,r11,-4284
	ctx.r10.s64 = r11.s64 + -4284;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-4504
	ctx.r3.s64 = ctx.r8.s64 + -4504;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r7.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r5,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r5.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stb r28,248(r31)
	PPC_STORE_U8(r31.u32 + 248, r28.u8);
	// addi r29,r11,-4244
	r29.s64 = r11.s64 + -4244;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r4,r27,24
	ctx.r4.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825b76fc
	if (cr6.eq) goto loc_825B76FC;
	// li r11,1
	r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,248(r31)
	PPC_STORE_U8(r31.u32 + 248, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x825b3140
	sub_825B3140(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825b7694
	if (cr6.eq) goto loc_825B7694;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822c88c0
	sub_822C88C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,252(r31)
	PPC_STORE_U32(r31.u32 + 252, ctx.r10.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// b 0x825b76fc
	goto loc_825B76FC;
loc_825B7694:
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x825b33b8
	sub_825B33B8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b76fc
	if (cr6.eq) goto loc_825B76FC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stw r29,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r29.u32);
loc_825B76FC:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-4528
	ctx.r3.s64 = r11.s64 + -4528;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825b7760
	if (cr6.eq) goto loc_825B7760;
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
	// beq cr6,0x825b7760
	if (cr6.eq) goto loc_825B7760;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b7768
	if (!cr6.eq) goto loc_825B7768;
loc_825B7760:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r11,r11,20600
	r11.s64 = r11.s64 + 20600;
loc_825B7768:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r28.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825B7784"))) PPC_WEAK_FUNC(sub_825B7784);
PPC_FUNC_IMPL(__imp__sub_825B7784) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825B7788"))) PPC_WEAK_FUNC(sub_825B7788);
PPC_FUNC_IMPL(__imp__sub_825B7788) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b7874
	if (cr6.eq) goto loc_825B7874;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-4616
	ctx.r3.s64 = ctx.r10.s64 + -4616;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r31,5
	ctx.r5.s64 = r31.s64 + 5;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x823298c8
	sub_823298C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-4588
	ctx.r3.s64 = ctx.r9.s64 + -4588;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r31,260
	ctx.r5.s64 = r31.s64 + 260;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r7.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825B7874:
	// li r11,0
	r11.s64 = 0;
	// stb r11,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B788C"))) PPC_WEAK_FUNC(sub_825B788C);
PPC_FUNC_IMPL(__imp__sub_825B788C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B7890"))) PPC_WEAK_FUNC(sub_825B7890);
PPC_FUNC_IMPL(__imp__sub_825B7890) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r3,216
	ctx.r3.s64 = ctx.r3.s64 + 216;
	// addi r10,r11,-4284
	ctx.r10.s64 = r11.s64 + -4284;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb340
	sub_825BB340(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825b78e0
	if (cr6.eq) goto loc_825B78E0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825B78E0:
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

__attribute__((alias("__imp__sub_825B78F4"))) PPC_WEAK_FUNC(sub_825B78F4);
PPC_FUNC_IMPL(__imp__sub_825B78F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B78F8"))) PPC_WEAK_FUNC(sub_825B78F8);
PPC_FUNC_IMPL(__imp__sub_825B78F8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r3,216
	ctx.r3.s64 = ctx.r3.s64 + 216;
	// addi r10,r11,-4232
	ctx.r10.s64 = r11.s64 + -4232;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb340
	sub_825BB340(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B7938"))) PPC_WEAK_FUNC(sub_825B7938);
PPC_FUNC_IMPL(__imp__sub_825B7938) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B793C"))) PPC_WEAK_FUNC(sub_825B793C);
PPC_FUNC_IMPL(__imp__sub_825B793C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B7940"))) PPC_WEAK_FUNC(sub_825B7940);
PPC_FUNC_IMPL(__imp__sub_825B7940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,5(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,272(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// lwz r10,268(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bltlr cr6
	if (cr6.lt) return;
}

__attribute__((alias("__imp__sub_825B795C"))) PPC_WEAK_FUNC(sub_825B795C);
PPC_FUNC_IMPL(__imp__sub_825B795C) {
	PPC_FUNC_PROLOGUE();
	// b 0x825bb0c8
	sub_825BB0C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B7960"))) PPC_WEAK_FUNC(sub_825B7960);
PPC_FUNC_IMPL(__imp__sub_825B7960) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B7964"))) PPC_WEAK_FUNC(sub_825B7964);
PPC_FUNC_IMPL(__imp__sub_825B7964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B7968"))) PPC_WEAK_FUNC(sub_825B7968);
PPC_FUNC_IMPL(__imp__sub_825B7968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// stb r10,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r10.u8);
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B7980"))) PPC_WEAK_FUNC(sub_825B7980);
PPC_FUNC_IMPL(__imp__sub_825B7980) {
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,244(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825b7a9c
	if (!cr6.eq) goto loc_825B7A9C;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// bl 0x825bb1d0
	sub_825BB1D0(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lbz r8,248(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 248);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwz r10,-19512(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -19512);
	// lwz r9,-19508(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19508);
	// beq cr6,0x825b7a20
	if (cr6.eq) goto loc_825B7A20;
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r8,252(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825b79f4
	if (!cr6.eq) goto loc_825B79F4;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// ble cr6,0x825b7a20
	if (!cr6.gt) goto loc_825B7A20;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825b7a20
	goto loc_825B7A20;
loc_825B79F4:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bne cr6,0x825b7a10
	if (!cr6.eq) goto loc_825B7A10;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bge cr6,0x825b7a20
	if (!cr6.lt) goto loc_825B7A20;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825b7a20
	goto loc_825B7A20;
loc_825B7A10:
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - r11.s64;
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 & ctx.r3.u64;
loc_825B7A20:
	// lbz r11,249(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 249);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b7a7c
	if (cr6.eq) goto loc_825B7A7C;
	// lwz r11,264(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// bne cr6,0x825b7a50
	if (!cr6.eq) goto loc_825B7A50;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x825b7a7c
	if (!cr6.gt) goto loc_825B7A7C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825b7a7c
	goto loc_825B7A7C;
loc_825B7A50:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bne cr6,0x825b7a6c
	if (!cr6.eq) goto loc_825B7A6C;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x825b7a7c
	if (!cr6.lt) goto loc_825B7A7C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825b7a7c
	goto loc_825B7A7C;
loc_825B7A6C:
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 & ctx.r3.u64;
loc_825B7A7C:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b7a9c
	if (cr6.eq) goto loc_825B7A9C;
	// lwz r11,272(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stb r10,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r10.u8);
	// stw r9,272(r31)
	PPC_STORE_U32(r31.u32 + 272, ctx.r9.u32);
loc_825B7A9C:
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

__attribute__((alias("__imp__sub_825B7AB0"))) PPC_WEAK_FUNC(sub_825B7AB0);
PPC_FUNC_IMPL(__imp__sub_825B7AB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B7AB4"))) PPC_WEAK_FUNC(sub_825B7AB4);
PPC_FUNC_IMPL(__imp__sub_825B7AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B7AB8"))) PPC_WEAK_FUNC(sub_825B7AB8);
PPC_FUNC_IMPL(__imp__sub_825B7AB8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r8,r11,84
	ctx.r8.s64 = r11.s64 + 84;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// addi r5,r6,-4636
	ctx.r5.s64 = ctx.r6.s64 + -4636;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 268);
	// addic r31,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	r31.s64 = ctx.r7.s64 + -1;
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 272);
	// addi r6,r11,20
	ctx.r6.s64 = r11.s64 + 20;
	// subfe r7,r31,r7
	temp.u8 = (~r31.u32 + ctx.r7.u32 < ~r31.u32) | (~r31.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~r31.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B7B14"))) PPC_WEAK_FUNC(sub_825B7B14);
PPC_FUNC_IMPL(__imp__sub_825B7B14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B7B18"))) PPC_WEAK_FUNC(sub_825B7B18);
PPC_FUNC_IMPL(__imp__sub_825B7B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r11,0
	r11.s64 = 0;
	// li r30,-1
	r30.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// addi r5,r3,20
	ctx.r5.s64 = ctx.r3.s64 + 20;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r11.u8);
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r11.u32);
	// stb r11,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, r11.u8);
	// stw r9,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// lbz r8,5(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// lwz r7,272(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,268(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r8,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r8.u8);
	// stw r7,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r7.u32);
	// stw r6,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// bl 0x822e6810
	sub_822E6810(ctx, base);
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_825B7BAC"))) PPC_WEAK_FUNC(sub_825B7BAC);
PPC_FUNC_IMPL(__imp__sub_825B7BAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825B7BB0"))) PPC_WEAK_FUNC(sub_825B7BB0);
PPC_FUNC_IMPL(__imp__sub_825B7BB0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb0b0
	sub_825BB0B0(ctx, base);
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r10,104
	r29.s64 = ctx.r10.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19276(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19276);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b7c1c
	if (!cr6.eq) goto loc_825B7C1C;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b7c1c
	if (!cr6.eq) goto loc_825B7C1C;
	// lwz r11,19276(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19276);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825B7C1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825B7C20"))) PPC_WEAK_FUNC(sub_825B7C20);
PPC_FUNC_IMPL(__imp__sub_825B7C20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825B7C24"))) PPC_WEAK_FUNC(sub_825B7C24);
PPC_FUNC_IMPL(__imp__sub_825B7C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B7C28"))) PPC_WEAK_FUNC(sub_825B7C28);
PPC_FUNC_IMPL(__imp__sub_825B7C28) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb0a0
	sub_825BB0A0(ctx, base);
	// lis r11,-32165
	r11.s64 = -2107965440;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r30,r11,31104
	r30.s64 = r11.s64 + 31104;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,3388
	ctx.r3.s64 = ctx.r9.s64 + 3388;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r29,r11,104
	r29.s64 = r11.s64 + 104;
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
	// lwz r11,19276(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19276);
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
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825B7C98"))) PPC_WEAK_FUNC(sub_825B7C98);
PPC_FUNC_IMPL(__imp__sub_825B7C98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825B7C9C"))) PPC_WEAK_FUNC(sub_825B7C9C);
PPC_FUNC_IMPL(__imp__sub_825B7C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B7CA0"))) PPC_WEAK_FUNC(sub_825B7CA0);
PPC_FUNC_IMPL(__imp__sub_825B7CA0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r3,r10,-4616
	ctx.r3.s64 = ctx.r10.s64 + -4616;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b7d30
	if (cr6.eq) goto loc_825B7D30;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b7d34
	if (!cr6.eq) goto loc_825B7D34;
loc_825B7D30:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825B7D34:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r10,-4588
	ctx.r3.s64 = ctx.r10.s64 + -4588;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b7dbc
	if (cr6.eq) goto loc_825B7DBC;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b7dc0
	if (!cr6.eq) goto loc_825B7DC0;
loc_825B7DBC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_825B7DC0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r11.u32);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825b7df4
	if (!cr6.eq) goto loc_825B7DF4;
	// lwz r11,272(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x825b7e08
	if (!cr6.gt) goto loc_825B7E08;
loc_825B7DF4:
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r10.u8);
	// stw r11,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r11.u32);
	// b 0x825b7e10
	goto loc_825B7E10;
loc_825B7E08:
	// li r11,1
	r11.s64 = 1;
	// stb r11,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r11.u8);
loc_825B7E10:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B7E24"))) PPC_WEAK_FUNC(sub_825B7E24);
PPC_FUNC_IMPL(__imp__sub_825B7E24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B7E28"))) PPC_WEAK_FUNC(sub_825B7E28);
PPC_FUNC_IMPL(__imp__sub_825B7E28) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825bb3b8
	sub_825BB3B8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// addi r10,r11,-4232
	ctx.r10.s64 = r11.s64 + -4232;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r9.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r8,260(r31)
	PPC_STORE_U32(r31.u32 + 260, ctx.r8.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r11,-4504
	r29.s64 = r11.s64 + -4504;
	// stw r7,264(r31)
	PPC_STORE_U32(r31.u32 + 264, ctx.r7.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r6,r28,24
	ctx.r6.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825b7eec
	if (cr6.eq) goto loc_825B7EEC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825B7EEC:
	// li r26,0
	r26.s64 = 0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stb r26,248(r31)
	PPC_STORE_U8(r31.u32 + 248, r26.u8);
	// addi r29,r11,-4512
	r29.s64 = r11.s64 + -4512;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r28,1
	r28.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r27,r11,-19516
	r27.s64 = r11.s64 + -19516;
	// beq cr6,0x825b8058
	if (cr6.eq) goto loc_825B8058;
	// stb r28,248(r31)
	PPC_STORE_U8(r31.u32 + 248, r28.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x825b3140
	sub_825B3140(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b7fb4
	if (cr6.eq) goto loc_825B7FB4;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822c88c0
	sub_822C88C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,252(r31)
	PPC_STORE_U32(r31.u32 + 252, ctx.r10.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// b 0x825b801c
	goto loc_825B801C;
loc_825B7FB4:
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x825b33b8
	sub_825B33B8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b801c
	if (cr6.eq) goto loc_825B801C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stw r29,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r29.u32);
loc_825B801C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-4176
	ctx.r3.s64 = r11.s64 + -4176;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x822d8158
	sub_822D8158(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,260(r31)
	PPC_STORE_U32(r31.u32 + 260, ctx.r9.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825B8058:
	// stb r26,249(r31)
	PPC_STORE_U8(r31.u32 + 249, r26.u8);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r11,-4520
	r29.s64 = r11.s64 + -4520;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b81b4
	if (cr6.eq) goto loc_825B81B4;
	// stb r28,249(r31)
	PPC_STORE_U8(r31.u32 + 249, r28.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x825b3140
	sub_825B3140(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b8110
	if (cr6.eq) goto loc_825B8110;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822c88c0
	sub_822C88C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,256(r31)
	PPC_STORE_U32(r31.u32 + 256, ctx.r10.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// b 0x825b8178
	goto loc_825B8178;
loc_825B8110:
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x825b33b8
	sub_825B33B8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b8178
	if (cr6.eq) goto loc_825B8178;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stw r29,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r29.u32);
loc_825B8178:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-4192
	ctx.r3.s64 = r11.s64 + -4192;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x822d8158
	sub_822D8158(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,264(r31)
	PPC_STORE_U32(r31.u32 + 264, ctx.r9.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825B81B4:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-4528
	ctx.r3.s64 = r11.s64 + -4528;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825b8218
	if (cr6.eq) goto loc_825B8218;
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
	// beq cr6,0x825b8218
	if (cr6.eq) goto loc_825B8218;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b8220
	if (!cr6.eq) goto loc_825B8220;
loc_825B8218:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r11,r11,20600
	r11.s64 = r11.s64 + 20600;
loc_825B8220:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r26,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r26.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_825B823C"))) PPC_WEAK_FUNC(sub_825B823C);
PPC_FUNC_IMPL(__imp__sub_825B823C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825B8240"))) PPC_WEAK_FUNC(sub_825B8240);
PPC_FUNC_IMPL(__imp__sub_825B8240) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b832c
	if (cr6.eq) goto loc_825B832C;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-4616
	ctx.r3.s64 = ctx.r10.s64 + -4616;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r31,5
	ctx.r5.s64 = r31.s64 + 5;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x823298c8
	sub_823298C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-4588
	ctx.r3.s64 = ctx.r9.s64 + -4588;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r31,272
	ctx.r5.s64 = r31.s64 + 272;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r7.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825B832C:
	// li r11,0
	r11.s64 = 0;
	// stb r11,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B8344"))) PPC_WEAK_FUNC(sub_825B8344);
PPC_FUNC_IMPL(__imp__sub_825B8344) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B8348"))) PPC_WEAK_FUNC(sub_825B8348);
PPC_FUNC_IMPL(__imp__sub_825B8348) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r3,216
	ctx.r3.s64 = ctx.r3.s64 + 216;
	// addi r10,r11,-4232
	ctx.r10.s64 = r11.s64 + -4232;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb340
	sub_825BB340(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825b8398
	if (cr6.eq) goto loc_825B8398;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825B8398:
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

__attribute__((alias("__imp__sub_825B83AC"))) PPC_WEAK_FUNC(sub_825B83AC);
PPC_FUNC_IMPL(__imp__sub_825B83AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B83B0"))) PPC_WEAK_FUNC(sub_825B83B0);
PPC_FUNC_IMPL(__imp__sub_825B83B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// li r11,0
	r11.s64 = 0;
	// lfs f1,248(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f1.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r10,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r10.u8);
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, r11.u32);
	// addi r3,r3,300
	ctx.r3.s64 = ctx.r3.s64 + 300;
	// b 0x82483668
	sub_82483668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B83D4"))) PPC_WEAK_FUNC(sub_825B83D4);
PPC_FUNC_IMPL(__imp__sub_825B83D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B83D8"))) PPC_WEAK_FUNC(sub_825B83D8);
PPC_FUNC_IMPL(__imp__sub_825B83D8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r8,r11,84
	ctx.r8.s64 = r11.s64 + 84;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// addi r5,r6,-4636
	ctx.r5.s64 = ctx.r6.s64 + -4636;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 268);
	// addic r31,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	r31.s64 = ctx.r7.s64 + -1;
	// lwz r9,296(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 296);
	// addi r6,r11,20
	ctx.r6.s64 = r11.s64 + 20;
	// subfe r7,r31,r7
	temp.u8 = (~r31.u32 + ctx.r7.u32 < ~r31.u32) | (~r31.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~r31.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B8434"))) PPC_WEAK_FUNC(sub_825B8434);
PPC_FUNC_IMPL(__imp__sub_825B8434) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B8438"))) PPC_WEAK_FUNC(sub_825B8438);
PPC_FUNC_IMPL(__imp__sub_825B8438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r11,0
	r11.s64 = 0;
	// li r30,-1
	r30.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// addi r5,r3,20
	ctx.r5.s64 = ctx.r3.s64 + 20;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r11.u8);
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r11.u32);
	// stb r11,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, r11.u8);
	// stw r9,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// lbz r8,5(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// lwz r7,296(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,268(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r8,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r8.u8);
	// stw r7,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r7.u32);
	// stw r6,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// bl 0x822e6810
	sub_822E6810(ctx, base);
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_825B84CC"))) PPC_WEAK_FUNC(sub_825B84CC);
PPC_FUNC_IMPL(__imp__sub_825B84CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825B84D0"))) PPC_WEAK_FUNC(sub_825B84D0);
PPC_FUNC_IMPL(__imp__sub_825B84D0) {
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
	// lwz r11,268(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,296(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// blt cr6,0x825b84fc
	if (cr6.lt) goto loc_825B84FC;
	// bl 0x825bb0c8
	sub_825BB0C8(ctx, base);
loc_825B84FC:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825b8518
	if (cr6.eq) goto loc_825B8518;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b851c
	if (!cr6.eq) goto loc_825B851C;
loc_825B8518:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B851C:
	// addi r31,r30,300
	r31.s64 = r30.s64 + 300;
	// bl 0x8231dab8
	sub_8231DAB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82483678
	sub_82483678(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824836d0
	sub_824836D0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bne cr6,0x825b855c
	if (!cr6.eq) goto loc_825B855C;
	// li r11,0
	r11.s64 = 0;
	// lfs f1,248(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 248);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,296(r30)
	PPC_STORE_U32(r30.u32 + 296, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82483668
	sub_82483668(ctx, base);
loc_825B855C:
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

__attribute__((alias("__imp__sub_825B8570"))) PPC_WEAK_FUNC(sub_825B8570);
PPC_FUNC_IMPL(__imp__sub_825B8570) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B8574"))) PPC_WEAK_FUNC(sub_825B8574);
PPC_FUNC_IMPL(__imp__sub_825B8574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B8578"))) PPC_WEAK_FUNC(sub_825B8578);
PPC_FUNC_IMPL(__imp__sub_825B8578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r9,284(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// addi r11,r3,272
	r11.s64 = ctx.r3.s64 + 272;
	// lwz r10,276(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mulli r9,r9,68
	ctx.r9.s64 = ctx.r9.s64 * 68;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bge cr6,0x825b8724
	if (!cr6.lt) goto loc_825B8724;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
loc_825B85B0:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r11,1
	r11.s64 = 1;
	// lbz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// subf r7,r5,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r5.s64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 & r11.u64;
	// beq cr6,0x825b861c
	if (cr6.eq) goto loc_825B861C;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825b860c
	if (cr6.eq) goto loc_825B860C;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
loc_825B85EC:
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// beq cr6,0x825b8608
	if (cr6.eq) goto loc_825B8608;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825b85ec
	if (!cr6.eq) goto loc_825B85EC;
	// b 0x825b860c
	goto loc_825B860C;
loc_825B8608:
	// li r7,1
	ctx.r7.s64 = 1;
loc_825B860C:
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 & ctx.r6.u64;
loc_825B861C:
	// lbz r11,20(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b8670
	if (cr6.eq) goto loc_825B8670;
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825b8660
	if (cr6.eq) goto loc_825B8660;
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
loc_825B8640:
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// beq cr6,0x825b865c
	if (cr6.eq) goto loc_825B865C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825b8640
	if (!cr6.eq) goto loc_825B8640;
	// b 0x825b8660
	goto loc_825B8660;
loc_825B865C:
	// li r7,1
	ctx.r7.s64 = 1;
loc_825B8660:
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 & ctx.r6.u64;
loc_825B8670:
	// lbz r11,36(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b86c4
	if (cr6.eq) goto loc_825B86C4;
	// lwz r10,40(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825b86b4
	if (cr6.eq) goto loc_825B86B4;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
loc_825B8694:
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// beq cr6,0x825b86b0
	if (cr6.eq) goto loc_825B86B0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825b8694
	if (!cr6.eq) goto loc_825B8694;
	// b 0x825b86b4
	goto loc_825B86B4;
loc_825B86B0:
	// li r7,1
	ctx.r7.s64 = 1;
loc_825B86B4:
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 & ctx.r6.u64;
loc_825B86C4:
	// lbz r11,52(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b86e8
	if (cr6.eq) goto loc_825B86E8;
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,56(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r10,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 & ctx.r6.u64;
loc_825B86E8:
	// lbz r11,60(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b870c
	if (cr6.eq) goto loc_825B870C;
	// lwz r11,32(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r10,64(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r10,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 & ctx.r6.u64;
loc_825B870C:
	// clrlwi r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b8730
	if (!cr6.eq) goto loc_825B8730;
	// addi r8,r8,68
	ctx.r8.s64 = ctx.r8.s64 + 68;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// blt cr6,0x825b85b0
	if (cr6.lt) goto loc_825B85B0;
loc_825B8724:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_825B8730:
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_825B8738"))) PPC_WEAK_FUNC(sub_825B8738);
PPC_FUNC_IMPL(__imp__sub_825B8738) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B873C"))) PPC_WEAK_FUNC(sub_825B873C);
PPC_FUNC_IMPL(__imp__sub_825B873C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B8740"))) PPC_WEAK_FUNC(sub_825B8740);
PPC_FUNC_IMPL(__imp__sub_825B8740) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb0b0
	sub_825BB0B0(ctx, base);
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r10,104
	r29.s64 = ctx.r10.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19276(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19276);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b87ac
	if (!cr6.eq) goto loc_825B87AC;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b87ac
	if (!cr6.eq) goto loc_825B87AC;
	// lwz r11,19276(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19276);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825B87AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825B87B0"))) PPC_WEAK_FUNC(sub_825B87B0);
PPC_FUNC_IMPL(__imp__sub_825B87B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825B87B4"))) PPC_WEAK_FUNC(sub_825B87B4);
PPC_FUNC_IMPL(__imp__sub_825B87B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B87B8"))) PPC_WEAK_FUNC(sub_825B87B8);
PPC_FUNC_IMPL(__imp__sub_825B87B8) {
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
	// lwz r11,268(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,296(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,1
	r29.s64 = 1;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x825b880c
	if (!cr6.lt) goto loc_825B880C;
	// bl 0x825b8578
	sub_825B8578(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b880c
	if (cr6.eq) goto loc_825B880C;
	// li r11,0
	r11.s64 = 0;
	// lfs f1,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 248);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r11.u32);
	// addi r3,r31,300
	ctx.r3.s64 = r31.s64 + 300;
	// bl 0x82483668
	sub_82483668(ctx, base);
	// stb r29,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r29.u8);
loc_825B880C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825b8898
	if (!cr6.eq) goto loc_825B8898;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb1d0
	sub_825BB1D0(ctx, base);
	// lbz r11,252(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 252);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b884c
	if (cr6.eq) goto loc_825B884C;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 & ctx.r3.u64;
loc_825B884C:
	// lbz r11,260(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 260);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b8870
	if (cr6.eq) goto loc_825B8870;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 & ctx.r3.u64;
loc_825B8870:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b8898
	if (cr6.eq) goto loc_825B8898;
	// lwz r11,296(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,300
	ctx.r3.s64 = r31.s64 + 300;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r11.u32);
	// bl 0x824836c8
	sub_824836C8(ctx, base);
	// stb r29,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r29.u8);
loc_825B8898:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825B889C"))) PPC_WEAK_FUNC(sub_825B889C);
PPC_FUNC_IMPL(__imp__sub_825B889C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825B88A0"))) PPC_WEAK_FUNC(sub_825B88A0);
PPC_FUNC_IMPL(__imp__sub_825B88A0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb0a0
	sub_825BB0A0(ctx, base);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r30,r11,-30792
	r30.s64 = r11.s64 + -30792;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,3388
	ctx.r3.s64 = ctx.r9.s64 + 3388;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r29,r11,104
	r29.s64 = r11.s64 + 104;
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
	// lwz r11,19276(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19276);
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
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825B8910"))) PPC_WEAK_FUNC(sub_825B8910);
PPC_FUNC_IMPL(__imp__sub_825B8910) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825B8914"))) PPC_WEAK_FUNC(sub_825B8914);
PPC_FUNC_IMPL(__imp__sub_825B8914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B8918"))) PPC_WEAK_FUNC(sub_825B8918);
PPC_FUNC_IMPL(__imp__sub_825B8918) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r3,r10,-4616
	ctx.r3.s64 = ctx.r10.s64 + -4616;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b89a4
	if (cr6.eq) goto loc_825B89A4;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b89a8
	if (!cr6.eq) goto loc_825B89A8;
loc_825B89A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_825B89A8:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825b8a58
	if (cr6.eq) goto loc_825B8A58;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r10,-4588
	ctx.r3.s64 = ctx.r10.s64 + -4588;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b8a3c
	if (cr6.eq) goto loc_825B8A3C;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b8a40
	if (!cr6.eq) goto loc_825B8A40;
loc_825B8A3C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_825B8A40:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r11.u32);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
loc_825B8A58:
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b8a74
	if (!cr6.eq) goto loc_825B8A74;
	// lwz r11,296(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x825b8a88
	if (!cr6.gt) goto loc_825B8A88;
loc_825B8A74:
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r10.u8);
	// stw r11,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r11.u32);
	// b 0x825b8a90
	goto loc_825B8A90;
loc_825B8A88:
	// li r11,1
	r11.s64 = 1;
	// stb r11,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r11.u8);
loc_825B8A90:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B8AA4"))) PPC_WEAK_FUNC(sub_825B8AA4);
PPC_FUNC_IMPL(__imp__sub_825B8AA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B8AA8"))) PPC_WEAK_FUNC(sub_825B8AA8);
PPC_FUNC_IMPL(__imp__sub_825B8AA8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b8b94
	if (cr6.eq) goto loc_825B8B94;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-4616
	ctx.r3.s64 = ctx.r10.s64 + -4616;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r31,5
	ctx.r5.s64 = r31.s64 + 5;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x823298c8
	sub_823298C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-4588
	ctx.r3.s64 = ctx.r9.s64 + -4588;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r31,296
	ctx.r5.s64 = r31.s64 + 296;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r7.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825B8B94:
	// li r11,0
	r11.s64 = 0;
	// stb r11,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B8BAC"))) PPC_WEAK_FUNC(sub_825B8BAC);
PPC_FUNC_IMPL(__imp__sub_825B8BAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B8BB0"))) PPC_WEAK_FUNC(sub_825B8BB0);
PPC_FUNC_IMPL(__imp__sub_825B8BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r3,1220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1220, ctx.r3.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825bb3b8
	sub_825BB3B8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r26,216
	ctx.r3.s64 = r26.s64 + 216;
	// addi r10,r11,-4132
	ctx.r10.s64 = r11.s64 + -4132;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// li r31,0
	r31.s64 = 0;
	// addi r7,r8,-4144
	ctx.r7.s64 = ctx.r8.s64 + -4144;
	// addi r27,r26,272
	r27.s64 = r26.s64 + 272;
	// stw r9,244(r26)
	PPC_STORE_U32(r26.u32 + 244, ctx.r9.u32);
	// stw r31,276(r26)
	PPC_STORE_U32(r26.u32 + 276, r31.u32);
	// stw r31,284(r26)
	PPC_STORE_U32(r26.u32 + 284, r31.u32);
	// stw r31,280(r26)
	PPC_STORE_U32(r26.u32 + 280, r31.u32);
	// stw r31,288(r26)
	PPC_STORE_U32(r26.u32 + 288, r31.u32);
	// stw r7,272(r26)
	PPC_STORE_U32(r26.u32 + 272, ctx.r7.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r6,288(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 288);
	// addi r29,r26,300
	r29.s64 = r26.s64 + 300;
	// or r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 | ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r5,288(r26)
	PPC_STORE_U32(r26.u32 + 288, ctx.r5.u32);
	// bl 0x82483648
	sub_82483648(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r28,r11,-4504
	r28.s64 = r11.s64 + -4504;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r28.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r3.u32);
	// addi r5,r1,244
	ctx.r5.s64 = ctx.r1.s64 + 244;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r4,r25,24
	ctx.r4.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825b8ca4
	if (cr6.eq) goto loc_825B8CA4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r3.u32);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,244(r26)
	PPC_STORE_U32(r26.u32 + 244, ctx.r10.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825B8CA4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r28,r11,10460
	r28.s64 = r11.s64 + 10460;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b8d1c
	if (cr6.eq) goto loc_825B8D1C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r3.u32);
	// addi r5,r1,268
	ctx.r5.s64 = ctx.r1.s64 + 268;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822daa00
	sub_822DAA00(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,248(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 248, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// b 0x825b8d28
	goto loc_825B8D28;
loc_825B8D1C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,248(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 248, temp.u32);
loc_825B8D28:
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,248(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 248);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82483668
	sub_82483668(ctx, base);
	// stb r31,252(r26)
	PPC_STORE_U8(r26.u32 + 252, r31.u8);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r11,-4512
	r29.s64 = r11.s64 + -4512;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r29,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r29.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// li r28,1
	r28.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b8e60
	if (cr6.eq) goto loc_825B8E60;
	// stb r28,252(r26)
	PPC_STORE_U8(r26.u32 + 252, r28.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// addi r5,r1,276
	ctx.r5.s64 = ctx.r1.s64 + 276;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x825b3140
	sub_825B3140(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b8df8
	if (cr6.eq) goto loc_825B8DF8;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822c88c0
	sub_822C88C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,256(r26)
	PPC_STORE_U32(r26.u32 + 256, ctx.r10.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// b 0x825b8e60
	goto loc_825B8E60;
loc_825B8DF8:
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r3.u32);
	// addi r5,r1,284
	ctx.r5.s64 = ctx.r1.s64 + 284;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x825b33b8
	sub_825B33B8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b8e60
	if (cr6.eq) goto loc_825B8E60;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stw r29,256(r26)
	PPC_STORE_U32(r26.u32 + 256, r29.u32);
loc_825B8E60:
	// stb r31,260(r26)
	PPC_STORE_U8(r26.u32 + 260, r31.u8);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r11,-4520
	r29.s64 = r11.s64 + -4520;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r29,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, r29.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
	// addi r5,r1,292
	ctx.r5.s64 = ctx.r1.s64 + 292;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b8f84
	if (cr6.eq) goto loc_825B8F84;
	// stb r28,260(r26)
	PPC_STORE_U8(r26.u32 + 260, r28.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x825b3140
	sub_825B3140(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b8f1c
	if (cr6.eq) goto loc_825B8F1C;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r3.u32);
	// addi r5,r1,300
	ctx.r5.s64 = ctx.r1.s64 + 300;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822c88c0
	sub_822C88C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,264(r26)
	PPC_STORE_U32(r26.u32 + 264, ctx.r10.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// b 0x825b8f84
	goto loc_825B8F84;
loc_825B8F1C:
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r3.u32);
	// addi r5,r1,308
	ctx.r5.s64 = ctx.r1.s64 + 308;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x825b33b8
	sub_825B33B8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b8f84
	if (cr6.eq) goto loc_825B8F84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stw r29,264(r26)
	PPC_STORE_U32(r26.u32 + 264, r29.u32);
loc_825B8F84:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-4528
	ctx.r3.s64 = r11.s64 + -4528;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// addi r5,r1,236
	ctx.r5.s64 = ctx.r1.s64 + 236;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r29,r11,20600
	r29.s64 = r11.s64 + 20600;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// beq cr6,0x825b8ff4
	if (cr6.eq) goto loc_825B8FF4;
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
	// beq cr6,0x825b8ff4
	if (cr6.eq) goto loc_825B8FF4;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b8ff8
	if (!cr6.eq) goto loc_825B8FF8;
loc_825B8FF4:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_825B8FF8:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,268(r26)
	PPC_STORE_U32(r26.u32 + 268, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r11,-4548
	r29.s64 = r11.s64 + -4548;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825b9edc
	if (cr6.eq) goto loc_825B9EDC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r3.u32);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r30.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825b90ac
	if (!cr6.gt) goto loc_825B90AC;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825B90AC:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x825b9edc
	if (!cr6.gt) goto loc_825B9EDC;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r14,r10,-13328
	r14.s64 = ctx.r10.s64 + -13328;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// stw r14,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, r14.u32);
	// addi r10,r8,27744
	ctx.r10.s64 = ctx.r8.s64 + 27744;
	// addi r8,r5,-25328
	ctx.r8.s64 = ctx.r5.s64 + -25328;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r11,r11,16804
	r11.s64 = r11.s64 + 16804;
	// addi r5,r4,-4560
	ctx.r5.s64 = ctx.r4.s64 + -4560;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// li r19,16
	r19.s64 = 16;
	// li r20,34
	r20.s64 = 34;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r17,-31934
	r17.s64 = -2092826624;
	// addi r16,r9,-13220
	r16.s64 = ctx.r9.s64 + -13220;
	// addi r18,r7,27264
	r18.s64 = ctx.r7.s64 + 27264;
	// addi r21,r6,4776
	r21.s64 = ctx.r6.s64 + 4776;
	// addi r15,r3,-28152
	r15.s64 = ctx.r3.s64 + -28152;
loc_825B9120:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r1,248
	ctx.r5.s64 = ctx.r1.s64 + 248;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, r11.u32);
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r19,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, r19.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r31,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, r31.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r20,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, r20.u32);
	// addi r5,r1,392
	ctx.r5.s64 = ctx.r1.s64 + 392;
	// stw r31,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, r31.u32);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// stw r31,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, r31.u32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// stw r10,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r10.u32);
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, r31.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r19,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, r19.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r31,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, r31.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r20,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, r20.u32);
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// stw r31,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, r31.u32);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// stw r31,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, r31.u32);
	// mr r27,r31
	r27.u64 = r31.u64;
	// stw r24,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, r24.u32);
	// stw r31,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, r31.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// stw r19,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, r19.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r31,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, r31.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r20,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, r20.u32);
	// addi r5,r1,408
	ctx.r5.s64 = ctx.r1.s64 + 408;
	// stw r31,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, r31.u32);
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// stw r31,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, r31.u32);
	// mr r25,r31
	r25.u64 = r31.u64;
	// stw r22,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, r22.u32);
	// stw r31,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, r31.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r29,188(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stw r23,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, r23.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r3.u32);
	// addi r5,r1,280
	ctx.r5.s64 = ctx.r1.s64 + 280;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r9,r28,24
	ctx.r9.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825b92b4
	if (cr6.eq) goto loc_825B92B4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// addi r5,r1,196
	ctx.r5.s64 = ctx.r1.s64 + 196;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r10.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825B92B4:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stb r31,324(r1)
	PPC_STORE_U8(ctx.r1.u32 + 324, r31.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b9400
	if (cr6.eq) goto loc_825B9400;
	// li r11,1
	r11.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stb r11,324(r1)
	PPC_STORE_U8(ctx.r1.u32 + 324, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca5e8
	sub_826CA5E8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x825b9400
	if (!cr6.gt) goto loc_825B9400;
loc_825B932C:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r3.u32);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r30.u32);
	// addi r5,r1,296
	ctx.r5.s64 = ctx.r1.s64 + 296;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// addi r5,r1,212
	ctx.r5.s64 = ctx.r1.s64 + 212;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// lwz r14,4(r24)
	r14.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// stw r19,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, r19.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, r31.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r31,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r20,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, r20.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r31,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, r31.u32);
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// stw r31,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, r31.u32);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r10,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r10.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r24.u32);
	// stw r14,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r14.u32);
	// beq 0x825b93bc
	if (cr0.eq) goto loc_825B93BC;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_825B93BC:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// subf r8,r30,r9
	ctx.r8.s64 = ctx.r9.s64 - r30.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// blt cr6,0x825b9eec
	if (cr6.lt) goto loc_825B9EEC;
	// stw r11,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r11.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r30,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, r30.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// blt cr6,0x825b932c
	if (cr6.lt) goto loc_825B932C;
	// lwz r14,264(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
loc_825B9400:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stb r31,340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 340, r31.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// addi r5,r1,220
	ctx.r5.s64 = ctx.r1.s64 + 220;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b95b0
	if (cr6.eq) goto loc_825B95B0;
	// li r11,1
	r11.s64 = 1;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stb r11,340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 340, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r3.u32);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca5e8
	sub_826CA5E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x825b95b0
	if (!cr6.gt) goto loc_825B95B0;
loc_825B9478:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// addi r5,r1,228
	ctx.r5.s64 = ctx.r1.s64 + 228;
	// stw r27,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r27.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b94f0
	if (cr6.eq) goto loc_825B94F0;
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
	// beq cr6,0x825b94f0
	if (cr6.eq) goto loc_825B94F0;
	// bl 0x822d80c0
	sub_822D80C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b94f0
	if (cr6.eq) goto loc_825B94F0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825b9518
	goto loc_825B9518;
loc_825B94F0:
	// lwz r11,27268(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 27268);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825b9514
	if (!cr6.eq) goto loc_825B9514;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,27268(r17)
	PPC_STORE_U32(r17.u32 + 27268, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_825B9514:
	// mr r30,r18
	r30.u64 = r18.u64;
loc_825B9518:
	// lwz r28,4(r22)
	r28.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r19,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, r19.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, r31.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r31,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, r31.u32);
	// addi r5,r1,424
	ctx.r5.s64 = ctx.r1.s64 + 424;
	// stw r20,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, r20.u32);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// stw r31,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, r31.u32);
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, r31.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r10,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r10.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r22.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// beq 0x825b9570
	if (cr0.eq) goto loc_825B9570;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_825B9570:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// subf r8,r27,r9
	ctx.r8.s64 = ctx.r9.s64 - r27.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// blt cr6,0x825b9ef8
	if (cr6.lt) goto loc_825B9EF8;
	// stw r11,4(r22)
	PPC_STORE_U32(r22.u32 + 4, r11.u32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r27,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, r27.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmpw cr6,r27,r29
	cr6.compare<int32_t>(r27.s32, r29.s32, xer);
	// blt cr6,0x825b9478
	if (cr6.lt) goto loc_825B9478;
loc_825B95B0:
	// lwz r27,156(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stb r31,356(r1)
	PPC_STORE_U8(ctx.r1.u32 + 356, r31.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b97f4
	if (cr6.eq) goto loc_825B97F4;
	// li r11,1
	r11.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r11,356(r1)
	PPC_STORE_U8(ctx.r1.u32 + 356, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca5e8
	sub_826CA5E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x825b97f4
	if (!cr6.gt) goto loc_825B97F4;
loc_825B962C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// stw r25,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r25.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b9734
	if (cr6.eq) goto loc_825B9734;
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b9734
	if (cr6.eq) goto loc_825B9734;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lwz r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b96b8
	if (cr6.eq) goto loc_825B96B8;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// b 0x825b9724
	goto loc_825B9724;
loc_825B96B8:
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b9734
	if (cr6.eq) goto loc_825B9734;
	// addi r30,r3,60
	r30.s64 = ctx.r3.s64 + 60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b9720
	if (cr6.eq) goto loc_825B9720;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822d7bb0
	sub_822D7BB0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b9720
	if (cr6.eq) goto loc_825B9720;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x825b9724
	goto loc_825B9724;
loc_825B9720:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825B9724:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b9734
	if (cr6.eq) goto loc_825B9734;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825b975c
	goto loc_825B975C;
loc_825B9734:
	// lwz r11,27268(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 27268);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825b9758
	if (!cr6.eq) goto loc_825B9758;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,27268(r17)
	PPC_STORE_U32(r17.u32 + 27268, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_825B9758:
	// mr r30,r18
	r30.u64 = r18.u64;
loc_825B975C:
	// lwz r28,4(r23)
	r28.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r19,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, r19.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, r31.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r31,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, r31.u32);
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// stw r20,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, r20.u32);
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// stw r31,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, r31.u32);
	// stw r31,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, r31.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r10,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r10.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// beq 0x825b97b4
	if (cr0.eq) goto loc_825B97B4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_825B97B4:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// subf r8,r25,r9
	ctx.r8.s64 = ctx.r9.s64 - r25.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// blt cr6,0x825b9f04
	if (cr6.lt) goto loc_825B9F04;
	// stw r11,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r11.u32);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// stw r25,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, r25.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmpw cr6,r25,r29
	cr6.compare<int32_t>(r25.s32, r29.s32, xer);
	// blt cr6,0x825b962c
	if (cr6.lt) goto loc_825B962C;
loc_825B97F4:
	// lwz r29,200(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stb r31,372(r1)
	PPC_STORE_U8(ctx.r1.u32 + 372, r31.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b9adc
	if (cr6.eq) goto loc_825B9ADC;
	// li r11,1
	r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,372(r1)
	PPC_STORE_U8(ctx.r1.u32 + 372, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// addi r5,r1,216
	ctx.r5.s64 = ctx.r1.s64 + 216;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825b9940
	if (cr6.eq) goto loc_825B9940;
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b9940
	if (cr6.eq) goto loc_825B9940;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b98bc
	if (cr6.eq) goto loc_825B98BC;
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	r30.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b9944
	goto loc_825B9944;
loc_825B98BC:
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b9930
	if (cr6.eq) goto loc_825B9930;
	// addi r30,r3,60
	r30.s64 = ctx.r3.s64 + 60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b9930
	if (cr6.eq) goto loc_825B9930;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822c8308
	sub_822C8308(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b9930
	if (cr6.eq) goto loc_825B9930;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// subfe r30,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r30.u64 = ~ctx.r10.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b9944
	goto loc_825B9944;
loc_825B9930:
	// addic r10,r31,-1
	xer.ca = r31.u32 > 0;
	ctx.r10.s64 = r31.s64 + -1;
	// mr r11,r31
	r11.u64 = r31.u64;
	// subfe r30,r10,r31
	temp.u8 = (~ctx.r10.u32 + r31.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r31.u32 + xer.ca < xer.ca);
	r30.u64 = ~ctx.r10.u64 + r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b9944
	goto loc_825B9944;
loc_825B9940:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_825B9944:
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b99cc
	if (cr6.eq) goto loc_825B99CC;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b99b4
	if (cr6.eq) goto loc_825B99B4;
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
	// beq cr6,0x825b99b4
	if (cr6.eq) goto loc_825B99B4;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b99b8
	if (!cr6.eq) goto loc_825B99B8;
loc_825B99B4:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_825B99B8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// stw r11,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// b 0x825b9adc
	goto loc_825B9ADC;
loc_825B99CC:
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r3.u32);
	// addi r5,r1,232
	ctx.r5.s64 = ctx.r1.s64 + 232;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b9a28
	if (cr6.eq) goto loc_825B9A28;
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
	// beq cr6,0x825b9a28
	if (cr6.eq) goto loc_825B9A28;
	// bl 0x822d80c0
	sub_822D80C0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// subfe r30,r11,r3
	temp.u8 = (~r11.u32 + ctx.r3.u32 < ~r11.u32) | (~r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r30.u64 = ~r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b9a2c
	goto loc_825B9A2C;
loc_825B9A28:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_825B9A2C:
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b9adc
	if (cr6.eq) goto loc_825B9ADC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b9aa4
	if (cr6.eq) goto loc_825B9AA4;
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
	// beq cr6,0x825b9aa4
	if (cr6.eq) goto loc_825B9AA4;
	// bl 0x822d80c0
	sub_822D80C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b9aa4
	if (cr6.eq) goto loc_825B9AA4;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x825b9acc
	goto loc_825B9ACC;
loc_825B9AA4:
	// lwz r11,27268(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 27268);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825b9ac8
	if (!cr6.eq) goto loc_825B9AC8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,27268(r17)
	PPC_STORE_U32(r17.u32 + 27268, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_825B9AC8:
	// mr r11,r18
	r11.u64 = r18.u64;
loc_825B9ACC:
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stw r30,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, r30.u32);
loc_825B9ADC:
	// lwz r29,252(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// stb r31,380(r1)
	PPC_STORE_U8(ctx.r1.u32 + 380, r31.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// addi r5,r1,260
	ctx.r5.s64 = ctx.r1.s64 + 260;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b9dc4
	if (cr6.eq) goto loc_825B9DC4;
	// li r11,1
	r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,380(r1)
	PPC_STORE_U8(ctx.r1.u32 + 380, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825b9c28
	if (cr6.eq) goto loc_825B9C28;
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b9c28
	if (cr6.eq) goto loc_825B9C28;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b9ba4
	if (cr6.eq) goto loc_825B9BA4;
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	r30.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b9c2c
	goto loc_825B9C2C;
loc_825B9BA4:
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b9c18
	if (cr6.eq) goto loc_825B9C18;
	// addi r30,r3,60
	r30.s64 = ctx.r3.s64 + 60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b9c18
	if (cr6.eq) goto loc_825B9C18;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822c8308
	sub_822C8308(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b9c18
	if (cr6.eq) goto loc_825B9C18;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// subfe r30,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r30.u64 = ~ctx.r10.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b9c2c
	goto loc_825B9C2C;
loc_825B9C18:
	// addic r10,r31,-1
	xer.ca = r31.u32 > 0;
	ctx.r10.s64 = r31.s64 + -1;
	// mr r11,r31
	r11.u64 = r31.u64;
	// subfe r30,r10,r31
	temp.u8 = (~ctx.r10.u32 + r31.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r31.u32 + xer.ca < xer.ca);
	r30.u64 = ~ctx.r10.u64 + r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b9c2c
	goto loc_825B9C2C;
loc_825B9C28:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_825B9C2C:
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b9cb4
	if (cr6.eq) goto loc_825B9CB4;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b9c9c
	if (cr6.eq) goto loc_825B9C9C;
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
	// beq cr6,0x825b9c9c
	if (cr6.eq) goto loc_825B9C9C;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b9ca0
	if (!cr6.eq) goto loc_825B9CA0;
loc_825B9C9C:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_825B9CA0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// stw r11,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// b 0x825b9dc4
	goto loc_825B9DC4;
loc_825B9CB4:
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b9d10
	if (cr6.eq) goto loc_825B9D10;
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
	// beq cr6,0x825b9d10
	if (cr6.eq) goto loc_825B9D10;
	// bl 0x822d80c0
	sub_822D80C0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// subfe r30,r11,r3
	temp.u8 = (~r11.u32 + ctx.r3.u32 < ~r11.u32) | (~r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r30.u64 = ~r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b9d14
	goto loc_825B9D14;
loc_825B9D10:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_825B9D14:
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b9dc4
	if (cr6.eq) goto loc_825B9DC4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b9d8c
	if (cr6.eq) goto loc_825B9D8C;
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
	// beq cr6,0x825b9d8c
	if (cr6.eq) goto loc_825B9D8C;
	// bl 0x822d80c0
	sub_822D80C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b9d8c
	if (cr6.eq) goto loc_825B9D8C;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x825b9db4
	goto loc_825B9DB4;
loc_825B9D8C:
	// lwz r11,27268(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 27268);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825b9db0
	if (!cr6.eq) goto loc_825B9DB0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,27268(r17)
	PPC_STORE_U32(r17.u32 + 27268, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_825B9DB0:
	// mr r11,r18
	r11.u64 = r18.u64;
loc_825B9DB4:
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stw r30,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, r30.u32);
loc_825B9DC4:
	// lwz r11,1220(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1220);
	// addi r30,r11,272
	r30.s64 = r11.s64 + 272;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825b9df4
	if (!cr6.gt) goto loc_825B9DF4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825B9DF4:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mulli r10,r11,68
	ctx.r10.s64 = r11.s64 * 68;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add. r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// beq 0x825b9e24
	if (cr0.eq) goto loc_825B9E24;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// bl 0x825b31b0
	sub_825B31B0(ctx, base);
	// lwz r23,360(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r22,344(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r24,328(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
loc_825B9E24:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// stw r23,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r23.u32);
	// stw r31,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, r31.u32);
	// cmplw cr6,r3,r23
	cr6.compare<uint32_t>(ctx.r3.u32, r23.u32, xer);
	// stw r23,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r23.u32);
	// beq cr6,0x825b9e50
	if (cr6.eq) goto loc_825B9E50;
loc_825B9E3C:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r23
	cr6.compare<uint32_t>(r30.u32, r23.u32, xer);
	// bne cr6,0x825b9e3c
	if (!cr6.eq) goto loc_825B9E3C;
loc_825B9E50:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// stw r22,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r22.u32);
	// stw r31,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, r31.u32);
	// cmplw cr6,r3,r22
	cr6.compare<uint32_t>(ctx.r3.u32, r22.u32, xer);
	// stw r22,4(r22)
	PPC_STORE_U32(r22.u32 + 4, r22.u32);
	// beq cr6,0x825b9e84
	if (cr6.eq) goto loc_825B9E84;
loc_825B9E70:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r22
	cr6.compare<uint32_t>(r30.u32, r22.u32, xer);
	// bne cr6,0x825b9e70
	if (!cr6.eq) goto loc_825B9E70;
loc_825B9E84:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// stw r24,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r24.u32);
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, r31.u32);
	// cmplw cr6,r3,r24
	cr6.compare<uint32_t>(ctx.r3.u32, r24.u32, xer);
	// stw r24,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r24.u32);
	// beq cr6,0x825b9eb8
	if (cr6.eq) goto loc_825B9EB8;
loc_825B9EA4:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r24
	cr6.compare<uint32_t>(r30.u32, r24.u32, xer);
	// bne cr6,0x825b9ea4
	if (!cr6.eq) goto loc_825B9EA4;
loc_825B9EB8:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x825b9120
	if (cr6.lt) goto loc_825B9120;
	// lwz r26,1220(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1220);
loc_825B9EDC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r31,296(r26)
	PPC_STORE_U32(r26.u32 + 296, r31.u32);
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x828e9430
	return;
loc_825B9EEC:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-27344
	ctx.r3.s64 = r11.s64 + -27344;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_825B9EF8:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-27344
	ctx.r3.s64 = r11.s64 + -27344;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_825B9F04:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-27344
	ctx.r3.s64 = r11.s64 + -27344;
}

__attribute__((alias("__imp__sub_825B9F0C"))) PPC_WEAK_FUNC(sub_825B9F0C);
PPC_FUNC_IMPL(__imp__sub_825B9F0C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// bl 0x828e9128
	sub_828E9128(ctx, base);
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r3,300
	ctx.r3.s64 = ctx.r3.s64 + 300;
	// addi r10,r11,-4132
	ctx.r10.s64 = r11.s64 + -4132;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82483660
	sub_82483660(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r30,r31,272
	r30.s64 = r31.s64 + 272;
	// addi r8,r9,-4144
	ctx.r8.s64 = ctx.r9.s64 + -4144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,272(r31)
	PPC_STORE_U32(r31.u32 + 272, ctx.r8.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825ba140
	sub_825BA140(ctx, base);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r6,r7,-4156
	ctx.r6.s64 = ctx.r7.s64 + -4156;
	// stw r6,272(r31)
	PPC_STORE_U32(r31.u32 + 272, ctx.r6.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb340
	sub_825BB340(ctx, base);
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

__attribute__((alias("__imp__sub_825B9F10"))) PPC_WEAK_FUNC(sub_825B9F10);
PPC_FUNC_IMPL(__imp__sub_825B9F10) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r3,300
	ctx.r3.s64 = ctx.r3.s64 + 300;
	// addi r10,r11,-4132
	ctx.r10.s64 = r11.s64 + -4132;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82483660
	sub_82483660(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r30,r31,272
	r30.s64 = r31.s64 + 272;
	// addi r8,r9,-4144
	ctx.r8.s64 = ctx.r9.s64 + -4144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,272(r31)
	PPC_STORE_U32(r31.u32 + 272, ctx.r8.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825ba140
	sub_825BA140(ctx, base);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r6,r7,-4156
	ctx.r6.s64 = ctx.r7.s64 + -4156;
	// stw r6,272(r31)
	PPC_STORE_U32(r31.u32 + 272, ctx.r6.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb340
	sub_825BB340(ctx, base);
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

__attribute__((alias("__imp__sub_825B9F9C"))) PPC_WEAK_FUNC(sub_825B9F9C);
PPC_FUNC_IMPL(__imp__sub_825B9F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B9FA0"))) PPC_WEAK_FUNC(sub_825B9FA0);
PPC_FUNC_IMPL(__imp__sub_825B9FA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x825ba140
	sub_825BA140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B9FA0"))) PPC_WEAK_FUNC(sub_825B9FA0);
PPC_FUNC_IMPL(__imp__sub_825B9FA0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825B9FA4"))) PPC_WEAK_FUNC(sub_825B9FA4);
PPC_FUNC_IMPL(__imp__sub_825B9FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B9FA8"))) PPC_WEAK_FUNC(sub_825B9FA8);
PPC_FUNC_IMPL(__imp__sub_825B9FA8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4156
	ctx.r10.s64 = r11.s64 + -4156;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825b9fec
	if (cr6.eq) goto loc_825B9FEC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825B9FEC:
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

__attribute__((alias("__imp__sub_825BA000"))) PPC_WEAK_FUNC(sub_825BA000);
PPC_FUNC_IMPL(__imp__sub_825BA000) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BA004"))) PPC_WEAK_FUNC(sub_825BA004);
PPC_FUNC_IMPL(__imp__sub_825BA004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BA008"))) PPC_WEAK_FUNC(sub_825BA008);
PPC_FUNC_IMPL(__imp__sub_825BA008) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-4144
	ctx.r9.s64 = ctx.r10.s64 + -4144;
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

__attribute__((alias("__imp__sub_825BA060"))) PPC_WEAK_FUNC(sub_825BA060);
PPC_FUNC_IMPL(__imp__sub_825BA060) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BA064"))) PPC_WEAK_FUNC(sub_825BA064);
PPC_FUNC_IMPL(__imp__sub_825BA064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BA068"))) PPC_WEAK_FUNC(sub_825BA068);
PPC_FUNC_IMPL(__imp__sub_825BA068) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4144
	ctx.r10.s64 = r11.s64 + -4144;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825ba140
	sub_825BA140(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-4156
	ctx.r8.s64 = ctx.r9.s64 + -4156;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825BA0BC"))) PPC_WEAK_FUNC(sub_825BA0BC);
PPC_FUNC_IMPL(__imp__sub_825BA0BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BA0C0"))) PPC_WEAK_FUNC(sub_825BA0C0);
PPC_FUNC_IMPL(__imp__sub_825BA0C0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4144
	ctx.r10.s64 = r11.s64 + -4144;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825ba140
	sub_825BA140(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-4156
	ctx.r8.s64 = ctx.r9.s64 + -4156;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825ba124
	if (cr6.eq) goto loc_825BA124;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825BA124:
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

__attribute__((alias("__imp__sub_825BA138"))) PPC_WEAK_FUNC(sub_825BA138);
PPC_FUNC_IMPL(__imp__sub_825BA138) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BA13C"))) PPC_WEAK_FUNC(sub_825BA13C);
PPC_FUNC_IMPL(__imp__sub_825BA13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BA140"))) PPC_WEAK_FUNC(sub_825BA140);
PPC_FUNC_IMPL(__imp__sub_825BA140) {
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
	// beq cr6,0x825ba224
	if (cr6.eq) goto loc_825BA224;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825ba1b4
	if (!cr6.eq) goto loc_825BA1B4;
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
	// beq cr6,0x825ba224
	if (cr6.eq) goto loc_825BA224;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x825b6de0
	sub_825B6DE0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x825ba224
	goto loc_825BA224;
loc_825BA1B4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825ba008
	sub_825BA008(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x825ba1e0
	if (!cr6.gt) goto loc_825BA1E0;
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
loc_825BA1E0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825b3488
	sub_825B3488(ctx, base);
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
	// bl 0x825ba068
	sub_825BA068(ctx, base);
loc_825BA224:
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

__attribute__((alias("__imp__sub_825BA238"))) PPC_WEAK_FUNC(sub_825BA238);
PPC_FUNC_IMPL(__imp__sub_825BA238) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BA23C"))) PPC_WEAK_FUNC(sub_825BA23C);
PPC_FUNC_IMPL(__imp__sub_825BA23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BA240"))) PPC_WEAK_FUNC(sub_825BA240);
PPC_FUNC_IMPL(__imp__sub_825BA240) {
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
	// bl 0x825b9f10
	sub_825B9F10(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ba278
	if (cr6.eq) goto loc_825BA278;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825BA278:
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

__attribute__((alias("__imp__sub_825BA28C"))) PPC_WEAK_FUNC(sub_825BA28C);
PPC_FUNC_IMPL(__imp__sub_825BA28C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BA290"))) PPC_WEAK_FUNC(sub_825BA290);
PPC_FUNC_IMPL(__imp__sub_825BA290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,284(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// lwz r10,280(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bltlr cr6
	if (cr6.lt) return;
}

__attribute__((alias("__imp__sub_825BA2A0"))) PPC_WEAK_FUNC(sub_825BA2A0);
PPC_FUNC_IMPL(__imp__sub_825BA2A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x825bb0c8
	sub_825BB0C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BA2A4"))) PPC_WEAK_FUNC(sub_825BA2A4);
PPC_FUNC_IMPL(__imp__sub_825BA2A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BA2A8"))) PPC_WEAK_FUNC(sub_825BA2A8);
PPC_FUNC_IMPL(__imp__sub_825BA2A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// stb r10,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r10.u8);
	// stw r11,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BA2C0"))) PPC_WEAK_FUNC(sub_825BA2C0);
PPC_FUNC_IMPL(__imp__sub_825BA2C0) {
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
	// lwz r11,300(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,292(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// addi r31,r3,288
	r31.s64 = ctx.r3.s64 + 288;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r11,r10
	r11.s64 = ctx.r10.s32;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x825ba310
	if (!cr6.lt) goto loc_825BA310;
loc_825BA2F8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r9,r30
	cr6.compare<int32_t>(ctx.r9.s32, r30.s32, xer);
	// beq cr6,0x825ba374
	if (cr6.eq) goto loc_825BA374;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x825ba2f8
	if (cr6.lt) goto loc_825BA2F8;
loc_825BA310:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825ba338
	if (!cr6.gt) goto loc_825BA338;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825BA338:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825ba358
	if (cr0.eq) goto loc_825BA358;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_825BA358:
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_825BA374:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_825BA378"))) PPC_WEAK_FUNC(sub_825BA378);
PPC_FUNC_IMPL(__imp__sub_825BA378) {
	PPC_FUNC_PROLOGUE();
	// b 0x825ba35c
	// ERROR 825BA35C
	return;
}

__attribute__((alias("__imp__sub_825BA37C"))) PPC_WEAK_FUNC(sub_825BA37C);
PPC_FUNC_IMPL(__imp__sub_825BA37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BA380"))) PPC_WEAK_FUNC(sub_825BA380);
PPC_FUNC_IMPL(__imp__sub_825BA380) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r8,r11,84
	ctx.r8.s64 = r11.s64 + 84;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// addi r5,r6,-4636
	ctx.r5.s64 = ctx.r6.s64 + -4636;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 280);
	// addic r31,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	r31.s64 = ctx.r7.s64 + -1;
	// lwz r9,284(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 284);
	// addi r6,r11,20
	ctx.r6.s64 = r11.s64 + 20;
	// subfe r7,r31,r7
	temp.u8 = (~r31.u32 + ctx.r7.u32 < ~r31.u32) | (~r31.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~r31.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825BA3DC"))) PPC_WEAK_FUNC(sub_825BA3DC);
PPC_FUNC_IMPL(__imp__sub_825BA3DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BA3E0"))) PPC_WEAK_FUNC(sub_825BA3E0);
PPC_FUNC_IMPL(__imp__sub_825BA3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r11,0
	r11.s64 = 0;
	// li r30,-1
	r30.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// addi r5,r3,20
	ctx.r5.s64 = ctx.r3.s64 + 20;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r11.u8);
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r11.u32);
	// stb r11,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, r11.u8);
	// stw r9,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// lbz r8,5(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// lwz r7,284(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,280(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r8,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r8.u8);
	// stw r7,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r7.u32);
	// stw r6,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// bl 0x822e6810
	sub_822E6810(ctx, base);
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_825BA474"))) PPC_WEAK_FUNC(sub_825BA474);
PPC_FUNC_IMPL(__imp__sub_825BA474) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825BA478"))) PPC_WEAK_FUNC(sub_825BA478);
PPC_FUNC_IMPL(__imp__sub_825BA478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,272(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825ba548
	if (!cr6.eq) goto loc_825BA548;
	// addi r30,r4,12
	r30.s64 = ctx.r4.s64 + 12;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825bb1d0
	sub_825BB1D0(ctx, base);
	// lbz r10,276(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 276);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825ba4c8
	if (cr6.eq) goto loc_825BA4C8;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// b 0x825ba500
	goto loc_825BA500;
loc_825BA4C8:
	// lbz r10,277(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 277);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825ba4dc
	if (cr6.eq) goto loc_825BA4DC;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// b 0x825ba500
	goto loc_825BA500;
loc_825BA4DC:
	// lbz r10,278(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 278);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825ba4f0
	if (cr6.eq) goto loc_825BA4F0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x825ba500
	goto loc_825BA500;
loc_825BA4F0:
	// lbz r10,279(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 279);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825ba504
	if (cr6.eq) goto loc_825BA504;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
loc_825BA500:
	// li r11,1
	r11.s64 = 1;
loc_825BA504:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ba548
	if (cr6.eq) goto loc_825BA548;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825ba2c0
	sub_825BA2C0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r28
	ctx.r7.u64 = ctx.r8.u64 & r28.u64;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825ba548
	if (cr6.eq) goto loc_825BA548;
	// lwz r11,284(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 284);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stb r10,6(r29)
	PPC_STORE_U8(r29.u32 + 6, ctx.r10.u8);
	// stw r9,284(r29)
	PPC_STORE_U32(r29.u32 + 284, ctx.r9.u32);
loc_825BA548:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825BA54C"))) PPC_WEAK_FUNC(sub_825BA54C);
PPC_FUNC_IMPL(__imp__sub_825BA54C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825BA550"))) PPC_WEAK_FUNC(sub_825BA550);
PPC_FUNC_IMPL(__imp__sub_825BA550) {
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,272(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825ba5dc
	if (!cr6.eq) goto loc_825BA5DC;
	// lbz r9,279(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 279);
	// li r30,1
	r30.s64 = 1;
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825ba598
	if (cr6.eq) goto loc_825BA598;
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_825BA598:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825ba5dc
	if (cr6.eq) goto loc_825BA5DC;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ba2c0
	sub_825BA2C0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 & r30.u64;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825ba5dc
	if (cr6.eq) goto loc_825BA5DC;
	// lwz r11,284(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// stb r30,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r30.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r11.u32);
loc_825BA5DC:
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

__attribute__((alias("__imp__sub_825BA5F0"))) PPC_WEAK_FUNC(sub_825BA5F0);
PPC_FUNC_IMPL(__imp__sub_825BA5F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BA5F4"))) PPC_WEAK_FUNC(sub_825BA5F4);
PPC_FUNC_IMPL(__imp__sub_825BA5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BA5F8"))) PPC_WEAK_FUNC(sub_825BA5F8);
PPC_FUNC_IMPL(__imp__sub_825BA5F8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r3,288
	ctx.r3.s64 = ctx.r3.s64 + 288;
	// addi r10,r11,-4088
	ctx.r10.s64 = r11.s64 + -4088;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82458d00
	sub_82458D00(ctx, base);
	// addi r3,r31,244
	ctx.r3.s64 = r31.s64 + 244;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb340
	sub_825BB340(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825BA648"))) PPC_WEAK_FUNC(sub_825BA648);
PPC_FUNC_IMPL(__imp__sub_825BA648) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BA64C"))) PPC_WEAK_FUNC(sub_825BA64C);
PPC_FUNC_IMPL(__imp__sub_825BA64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BA650"))) PPC_WEAK_FUNC(sub_825BA650);
PPC_FUNC_IMPL(__imp__sub_825BA650) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb0b0
	sub_825BB0B0(ctx, base);
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r10,104
	r29.s64 = ctx.r10.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19292(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19292);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r31,244
	ctx.r4.s64 = r31.s64 + 244;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825ba6bc
	if (!cr6.eq) goto loc_825BA6BC;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825ba6bc
	if (!cr6.eq) goto loc_825BA6BC;
	// lwz r11,19292(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19292);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825BA6BC:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,104
	r29.s64 = r11.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19276(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19276);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825ba714
	if (!cr6.eq) goto loc_825BA714;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825ba714
	if (!cr6.eq) goto loc_825BA714;
	// lwz r11,19276(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19276);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825BA714:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825BA718"))) PPC_WEAK_FUNC(sub_825BA718);
PPC_FUNC_IMPL(__imp__sub_825BA718) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825BA71C"))) PPC_WEAK_FUNC(sub_825BA71C);
PPC_FUNC_IMPL(__imp__sub_825BA71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BA720"))) PPC_WEAK_FUNC(sub_825BA720);
PPC_FUNC_IMPL(__imp__sub_825BA720) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb0a0
	sub_825BB0A0(ctx, base);
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lis r11,-32164
	r11.s64 = -2107899904;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r28,r10,-3784
	r28.s64 = ctx.r10.s64 + -3784;
	// addi r30,r11,-23432
	r30.s64 = r11.s64 + -23432;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r9,3388
	ctx.r3.s64 = ctx.r9.s64 + 3388;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r29,r11,104
	r29.s64 = r11.s64 + 104;
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
	// lwz r11,19276(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19276);
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
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r30,r11,-23216
	r30.s64 = r11.s64 + -23216;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r7,3168
	ctx.r3.s64 = ctx.r7.s64 + 3168;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r29,r11,104
	r29.s64 = r11.s64 + 104;
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
	// lwz r11,19292(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 19292);
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
	// addi r4,r31,244
	ctx.r4.s64 = r31.s64 + 244;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825BA7E8"))) PPC_WEAK_FUNC(sub_825BA7E8);
PPC_FUNC_IMPL(__imp__sub_825BA7E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825BA7EC"))) PPC_WEAK_FUNC(sub_825BA7EC);
PPC_FUNC_IMPL(__imp__sub_825BA7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BA7F0"))) PPC_WEAK_FUNC(sub_825BA7F0);
PPC_FUNC_IMPL(__imp__sub_825BA7F0) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r3,r10,-4616
	ctx.r3.s64 = ctx.r10.s64 + -4616;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ba878
	if (cr6.eq) goto loc_825BA878;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825ba87c
	if (!cr6.eq) goto loc_825BA87C;
loc_825BA878:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825BA87C:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r10,-4588
	ctx.r3.s64 = ctx.r10.s64 + -4588;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ba908
	if (cr6.eq) goto loc_825BA908;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825ba90c
	if (!cr6.eq) goto loc_825BA90C;
loc_825BA908:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
loc_825BA90C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r11.u32);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lwz r10,300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// addi r29,r31,288
	r29.s64 = r31.s64 + 288;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x825ba94c
	if (!cr6.gt) goto loc_825BA94C;
loc_825BA934:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x825ba934
	if (cr6.gt) goto loc_825BA934;
loc_825BA94C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825bab14
	if (cr6.eq) goto loc_825BAB14;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r27,r11,-4048
	r27.s64 = r11.s64 + -4048;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// clrlwi r9,r28,24
	ctx.r9.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825bab14
	if (cr6.eq) goto loc_825BAB14;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// bl 0x826ca9a8
	sub_826CA9A8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// ble cr6,0x825baa50
	if (!cr6.gt) goto loc_825BAA50;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825BAA50:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x825bab14
	if (!cr6.gt) goto loc_825BAB14;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r29,r11,20600
	r29.s64 = r11.s64 + 20600;
loc_825BAA60:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825baae0
	if (cr6.eq) goto loc_825BAAE0;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825baae4
	if (!cr6.eq) goto loc_825BAAE4;
loc_825BAAE0:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_825BAAE4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x825ba2c0
	sub_825BA2C0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// blt cr6,0x825baa60
	if (cr6.lt) goto loc_825BAA60;
loc_825BAB14:
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825bab30
	if (!cr6.eq) goto loc_825BAB30;
	// lwz r11,284(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// lwz r10,280(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x825bab48
	if (!cr6.gt) goto loc_825BAB48;
loc_825BAB30:
	// lwz r11,280(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r10.u8);
	// stw r11,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x828e9464
	return;
loc_825BAB48:
	// li r11,1
	r11.s64 = 1;
	// stb r11,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r11.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_825BAB54"))) PPC_WEAK_FUNC(sub_825BAB54);
PPC_FUNC_IMPL(__imp__sub_825BAB54) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825BAB58"))) PPC_WEAK_FUNC(sub_825BAB58);
PPC_FUNC_IMPL(__imp__sub_825BAB58) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825bb3b8
	sub_825BB3B8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r28,216
	ctx.r3.s64 = r28.s64 + 216;
	// addi r10,r11,-4088
	ctx.r10.s64 = r11.s64 + -4088;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r28,244
	ctx.r3.s64 = r28.s64 + 244;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r27,0
	r27.s64 = 0;
	// addi r7,r8,-21492
	ctx.r7.s64 = ctx.r8.s64 + -21492;
	// addi r31,r28,288
	r31.s64 = r28.s64 + 288;
	// stw r9,272(r28)
	PPC_STORE_U32(r28.u32 + 272, ctx.r9.u32);
	// stw r27,292(r28)
	PPC_STORE_U32(r28.u32 + 292, r27.u32);
	// stw r27,300(r28)
	PPC_STORE_U32(r28.u32 + 300, r27.u32);
	// stw r27,296(r28)
	PPC_STORE_U32(r28.u32 + 296, r27.u32);
	// stw r27,304(r28)
	PPC_STORE_U32(r28.u32 + 304, r27.u32);
	// stw r7,288(r28)
	PPC_STORE_U32(r28.u32 + 288, ctx.r7.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r6,304(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 304);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// or r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 | ctx.r3.u64;
	// addi r29,r11,-4504
	r29.s64 = r11.s64 + -4504;
	// stw r5,304(r28)
	PPC_STORE_U32(r28.u32 + 304, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r4,r26,24
	ctx.r4.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825bac40
	if (cr6.eq) goto loc_825BAC40;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,272(r28)
	PPC_STORE_U32(r28.u32 + 272, ctx.r10.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825BAC40:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-4528
	ctx.r3.s64 = r11.s64 + -4528;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825baca4
	if (cr6.eq) goto loc_825BACA4;
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
	// beq cr6,0x825baca4
	if (cr6.eq) goto loc_825BACA4;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825bacac
	if (!cr6.eq) goto loc_825BACAC;
loc_825BACA4:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r11,r11,20600
	r11.s64 = r11.s64 + 20600;
loc_825BACAC:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,280(r28)
	PPC_STORE_U32(r28.u32 + 280, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lwz r4,280(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 280);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825bace0
	if (!cr6.gt) goto loc_825BACE0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825BACE0:
	// stb r27,276(r28)
	PPC_STORE_U8(r28.u32 + 276, r27.u8);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stb r27,277(r28)
	PPC_STORE_U8(r28.u32 + 277, r27.u8);
	// stb r27,278(r28)
	PPC_STORE_U8(r28.u32 + 278, r27.u8);
	// addi r31,r11,-4032
	r31.s64 = r11.s64 + -4032;
	// stb r27,279(r28)
	PPC_STORE_U8(r28.u32 + 279, r27.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bae80
	if (cr6.eq) goto loc_825BAE80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-28152
	ctx.r9.s64 = ctx.r10.s64 + -28152;
	// li r10,116
	ctx.r10.s64 = 116;
loc_825BAD70:
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
	// bne cr6,0x825bad70
	if (!cr6.eq) goto loc_825BAD70;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x825badac
	if (!cr6.eq) goto loc_825BADAC;
	// li r11,1
	r11.s64 = 1;
	// stw r27,284(r28)
	PPC_STORE_U32(r28.u32 + 284, r27.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r11,276(r28)
	PPC_STORE_U8(r28.u32 + 276, r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e9460
	return;
loc_825BADAC:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-4560
	ctx.r9.s64 = ctx.r10.s64 + -4560;
	// li r10,100
	ctx.r10.s64 = 100;
loc_825BADBC:
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
	// bne cr6,0x825badbc
	if (!cr6.eq) goto loc_825BADBC;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x825badf8
	if (!cr6.eq) goto loc_825BADF8;
	// li r11,1
	r11.s64 = 1;
	// stw r27,284(r28)
	PPC_STORE_U32(r28.u32 + 284, r27.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r11,277(r28)
	PPC_STORE_U8(r28.u32 + 277, r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e9460
	return;
loc_825BADF8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-25328
	ctx.r9.s64 = ctx.r10.s64 + -25328;
	// li r10,103
	ctx.r10.s64 = 103;
loc_825BAE08:
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
	// bne cr6,0x825bae08
	if (!cr6.eq) goto loc_825BAE08;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x825bae44
	if (!cr6.eq) goto loc_825BAE44;
	// li r11,1
	r11.s64 = 1;
	// stw r27,284(r28)
	PPC_STORE_U32(r28.u32 + 284, r27.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r11,278(r28)
	PPC_STORE_U8(r28.u32 + 278, r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e9460
	return;
loc_825BAE44:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-4244
	ctx.r9.s64 = ctx.r10.s64 + -4244;
	// li r10,112
	ctx.r10.s64 = 112;
loc_825BAE54:
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
	// bne cr6,0x825bae54
	if (!cr6.eq) goto loc_825BAE54;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x825bae80
	if (!cr6.eq) goto loc_825BAE80;
	// li r11,1
	r11.s64 = 1;
	// stb r11,279(r28)
	PPC_STORE_U8(r28.u32 + 279, r11.u8);
loc_825BAE80:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,284(r28)
	PPC_STORE_U32(r28.u32 + 284, r27.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_825BAE8C"))) PPC_WEAK_FUNC(sub_825BAE8C);
PPC_FUNC_IMPL(__imp__sub_825BAE8C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825BAE90"))) PPC_WEAK_FUNC(sub_825BAE90);
PPC_FUNC_IMPL(__imp__sub_825BAE90) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bb010
	if (cr6.eq) goto loc_825BB010;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-4616
	ctx.r3.s64 = ctx.r10.s64 + -4616;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r31,5
	ctx.r5.s64 = r31.s64 + 5;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x823298c8
	sub_823298C8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-4588
	ctx.r3.s64 = ctx.r9.s64 + -4588;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r31,284
	ctx.r5.s64 = r31.s64 + 284;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// li r25,0
	r25.s64 = 0;
	// mr r30,r25
	r30.u64 = r25.u64;
	// lwz r27,300(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x825bb004
	if (!cr6.gt) goto loc_825BB004;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r29,r25
	r29.u64 = r25.u64;
	// addi r26,r11,-4048
	r26.s64 = r11.s64 + -4048;
loc_825BAF7C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// add r28,r11,r29
	r28.u64 = r11.u64 + r29.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(r30.s32, r27.s32, xer);
	// blt cr6,0x825baf7c
	if (cr6.lt) goto loc_825BAF7C;
loc_825BB004:
	// stb r25,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r25.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x828e945c
	return;
loc_825BB010:
	// li r11,0
	r11.s64 = 0;
	// stb r11,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r11.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_825BB01C"))) PPC_WEAK_FUNC(sub_825BB01C);
PPC_FUNC_IMPL(__imp__sub_825BB01C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825BB020"))) PPC_WEAK_FUNC(sub_825BB020);
PPC_FUNC_IMPL(__imp__sub_825BB020) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r3,288
	ctx.r3.s64 = ctx.r3.s64 + 288;
	// addi r10,r11,-4088
	ctx.r10.s64 = r11.s64 + -4088;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82458d00
	sub_82458D00(ctx, base);
	// addi r3,r31,244
	ctx.r3.s64 = r31.s64 + 244;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb340
	sub_825BB340(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825bb080
	if (cr6.eq) goto loc_825BB080;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825BB080:
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

__attribute__((alias("__imp__sub_825BB094"))) PPC_WEAK_FUNC(sub_825BB094);
PPC_FUNC_IMPL(__imp__sub_825BB094) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BB098"))) PPC_WEAK_FUNC(sub_825BB098);
PPC_FUNC_IMPL(__imp__sub_825BB098) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BB09C"))) PPC_WEAK_FUNC(sub_825BB09C);
PPC_FUNC_IMPL(__imp__sub_825BB09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BB0A0"))) PPC_WEAK_FUNC(sub_825BB0A0);
PPC_FUNC_IMPL(__imp__sub_825BB0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
}

__attribute__((alias("__imp__sub_825BB0A8"))) PPC_WEAK_FUNC(sub_825BB0A8);
PPC_FUNC_IMPL(__imp__sub_825BB0A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BB0AC"))) PPC_WEAK_FUNC(sub_825BB0AC);
PPC_FUNC_IMPL(__imp__sub_825BB0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BB0B0"))) PPC_WEAK_FUNC(sub_825BB0B0);
PPC_FUNC_IMPL(__imp__sub_825BB0B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
}

__attribute__((alias("__imp__sub_825BB0B8"))) PPC_WEAK_FUNC(sub_825BB0B8);
PPC_FUNC_IMPL(__imp__sub_825BB0B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BB0BC"))) PPC_WEAK_FUNC(sub_825BB0BC);
PPC_FUNC_IMPL(__imp__sub_825BB0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BB0C0"))) PPC_WEAK_FUNC(sub_825BB0C0);
PPC_FUNC_IMPL(__imp__sub_825BB0C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BB0C8"))) PPC_WEAK_FUNC(sub_825BB0C8);
PPC_FUNC_IMPL(__imp__sub_825BB0C8) {
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
	// li r11,1
	r11.s64 = 1;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, r11.u8);
	// li r31,5381
	r31.s64 = 5381;
	// lbz r11,20(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825bb120
	if (cr6.eq) goto loc_825BB120;
loc_825BB104:
	// rlwinm r8,r31,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// add r31,r8,r11
	r31.u64 = ctx.r8.u64 + r11.u64;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825bb104
	if (!cr6.eq) goto loc_825BB104;
loc_825BB120:
	// lwz r3,212(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 212);
	// lwz r30,8(r7)
	r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// bl 0x825bbde8
	sub_825BBDE8(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// lwz r11,19280(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19280);
	// lwz r3,-14368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x825bb164
	if (cr6.eq) goto loc_825BB164;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825bb168
	if (!cr6.eq) goto loc_825BB168;
loc_825BB164:
	// li r11,0
	r11.s64 = 0;
loc_825BB168:
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
	// beq cr6,0x825bb1b4
	if (cr6.eq) goto loc_825BB1B4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825bb1b4
	if (!cr6.eq) goto loc_825BB1B4;
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
loc_825BB1B4:
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

__attribute__((alias("__imp__sub_825BB1C8"))) PPC_WEAK_FUNC(sub_825BB1C8);
PPC_FUNC_IMPL(__imp__sub_825BB1C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BB1CC"))) PPC_WEAK_FUNC(sub_825BB1CC);
PPC_FUNC_IMPL(__imp__sub_825BB1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BB1D0"))) PPC_WEAK_FUNC(sub_825BB1D0);
PPC_FUNC_IMPL(__imp__sub_825BB1D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lbz r11,148(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bb22c
	if (cr6.eq) goto loc_825BB22C;
	// lwz r10,152(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 152);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825bb21c
	if (cr6.eq) goto loc_825BB21C;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_825BB1FC:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// beq cr6,0x825bb218
	if (cr6.eq) goto loc_825BB218;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825bb1fc
	if (!cr6.eq) goto loc_825BB1FC;
	// b 0x825bb21c
	goto loc_825BB21C;
loc_825BB218:
	// li r8,1
	ctx.r8.s64 = 1;
loc_825BB21C:
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
loc_825BB22C:
	// lbz r11,164(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bb280
	if (cr6.eq) goto loc_825BB280;
	// lwz r10,168(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 168);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825bb270
	if (cr6.eq) goto loc_825BB270;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_825BB250:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// beq cr6,0x825bb26c
	if (cr6.eq) goto loc_825BB26C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825bb250
	if (!cr6.eq) goto loc_825BB250;
	// b 0x825bb270
	goto loc_825BB270;
loc_825BB26C:
	// li r8,1
	ctx.r8.s64 = 1;
loc_825BB270:
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
loc_825BB280:
	// lbz r11,180(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 180);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bb2d4
	if (cr6.eq) goto loc_825BB2D4;
	// lwz r10,184(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 184);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825bb2c4
	if (cr6.eq) goto loc_825BB2C4;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_825BB2A4:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// beq cr6,0x825bb2c0
	if (cr6.eq) goto loc_825BB2C0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825bb2a4
	if (!cr6.eq) goto loc_825BB2A4;
	// b 0x825bb2c4
	goto loc_825BB2C4;
loc_825BB2C0:
	// li r8,1
	ctx.r8.s64 = 1;
loc_825BB2C4:
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
loc_825BB2D4:
	// lbz r11,196(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 196);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,200(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 200);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825bb328
	if (cr6.eq) goto loc_825BB328;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
loc_825BB2F8:
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x825bb324
	if (cr6.eq) goto loc_825BB324;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825bb2f8
	if (!cr6.eq) goto loc_825BB2F8;
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
	// blr 
	return;
loc_825BB324:
	// li r8,1
	ctx.r8.s64 = 1;
loc_825BB328:
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
}

__attribute__((alias("__imp__sub_825BB338"))) PPC_WEAK_FUNC(sub_825BB338);
PPC_FUNC_IMPL(__imp__sub_825BB338) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BB33C"))) PPC_WEAK_FUNC(sub_825BB33C);
PPC_FUNC_IMPL(__imp__sub_825BB33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BB340"))) PPC_WEAK_FUNC(sub_825BB340);
PPC_FUNC_IMPL(__imp__sub_825BB340) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r3,200
	ctx.r3.s64 = ctx.r3.s64 + 200;
	// addi r10,r11,-4016
	ctx.r10.s64 = r11.s64 + -4016;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x825b2ff8
	sub_825B2FF8(ctx, base);
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x825b2ff8
	sub_825B2FF8(ctx, base);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x825b2ff8
	sub_825B2FF8(ctx, base);
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x825b2ff8
	sub_825B2FF8(ctx, base);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825BB3B0"))) PPC_WEAK_FUNC(sub_825BB3B0);
PPC_FUNC_IMPL(__imp__sub_825BB3B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BB3B4"))) PPC_WEAK_FUNC(sub_825BB3B4);
PPC_FUNC_IMPL(__imp__sub_825BB3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BB3B8"))) PPC_WEAK_FUNC(sub_825BB3B8);
PPC_FUNC_IMPL(__imp__sub_825BB3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// addi r10,r11,-4016
	ctx.r10.s64 = r11.s64 + -4016;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r28,r22,152
	r28.s64 = r22.s64 + 152;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,12(r22)
	PPC_STORE_U32(r22.u32 + 12, ctx.r8.u32);
	// stw r31,16(r22)
	PPC_STORE_U32(r22.u32 + 16, r31.u32);
	// bl 0x82332bb8
	sub_82332BB8(ctx, base);
	// addi r24,r22,168
	r24.s64 = r22.s64 + 168;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82332bb8
	sub_82332BB8(ctx, base);
	// addi r21,r22,184
	r21.s64 = r22.s64 + 184;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82332bb8
	sub_82332BB8(ctx, base);
	// addi r3,r22,200
	ctx.r3.s64 = r22.s64 + 200;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82332bb8
	sub_82332BB8(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// li r16,1
	r16.s64 = 1;
	// stw r30,8(r22)
	PPC_STORE_U32(r22.u32 + 8, r30.u32);
	// stb r31,4(r22)
	PPC_STORE_U8(r22.u32 + 4, r31.u8);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// stb r31,5(r22)
	PPC_STORE_U8(r22.u32 + 5, r31.u8);
	// stb r16,6(r22)
	PPC_STORE_U8(r22.u32 + 6, r16.u8);
	// addi r3,r7,-3944
	ctx.r3.s64 = ctx.r7.s64 + -3944;
	// stw r29,212(r22)
	PPC_STORE_U32(r22.u32 + 212, r29.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x826cae68
	sub_826CAE68(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r5,12(r22)
	PPC_STORE_U32(r22.u32 + 12, ctx.r5.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stb r31,20(r22)
	PPC_STORE_U8(r22.u32 + 20, r31.u8);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r30,r22,20
	r30.s64 = r22.s64 + 20;
	// addi r29,r11,-3960
	r29.s64 = r11.s64 + -3960;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// addi r5,r1,196
	ctx.r5.s64 = ctx.r1.s64 + 196;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r4,r27,24
	ctx.r4.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825bb528
	if (cr6.eq) goto loc_825BB528;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822d81c8
	sub_822D81C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825BB528:
	// stb r31,84(r22)
	PPC_STORE_U8(r22.u32 + 84, r31.u8);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r30,r22,84
	r30.s64 = r22.s64 + 84;
	// addi r29,r11,-3976
	r29.s64 = r11.s64 + -3976;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bb5b0
	if (cr6.eq) goto loc_825BB5B0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822d81c8
	sub_822D81C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825BB5B0:
	// stb r31,148(r22)
	PPC_STORE_U8(r22.u32 + 148, r31.u8);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r27,r11,-28152
	r27.s64 = r11.s64 + -28152;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r14,16
	r14.s64 = 16;
	// li r15,34
	r15.s64 = 34;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r17,r11,4776
	r17.s64 = r11.s64 + 4776;
	// beq cr6,0x825bb71c
	if (cr6.eq) goto loc_825BB71C;
	// stb r16,148(r22)
	PPC_STORE_U8(r22.u32 + 148, r16.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca5e8
	sub_826CA5E8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r29,r31
	r29.u64 = r31.u64;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// ble cr6,0x825bb71c
	if (!cr6.gt) goto loc_825BB71C;
loc_825BB640:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,57
	ctx.r7.s64 = 57;
	// lwz r20,4(r30)
	r20.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r5,r1,216
	ctx.r5.s64 = ctx.r1.s64 + 216;
	// stw r14,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r14.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r31.u32);
	// stw r15,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, r15.u32);
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, r31.u32);
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, r31.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r31.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r10,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r10.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r20,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r20.u32);
	// beq 0x825bb6d4
	if (cr0.eq) goto loc_825BB6D4;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_825BB6D4:
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// ori r8,r9,65534
	ctx.r8.u64 = ctx.r9.u64 | 65534;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// blt cr6,0x825bb9a8
	if (cr6.lt) goto loc_825BB9A8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r25
	cr6.compare<int32_t>(r29.s32, r25.s32, xer);
	// blt cr6,0x825bb640
	if (cr6.lt) goto loc_825BB640;
loc_825BB71C:
	// stb r31,164(r22)
	PPC_STORE_U8(r22.u32 + 164, r31.u8);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r27,r11,-4560
	r27.s64 = r11.s64 + -4560;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bb878
	if (cr6.eq) goto loc_825BB878;
	// stb r16,164(r22)
	PPC_STORE_U8(r22.u32 + 164, r16.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca5e8
	sub_826CA5E8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r29,r31
	r29.u64 = r31.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x825bb878
	if (!cr6.gt) goto loc_825BB878;
loc_825BB79C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// lwz r30,0(r24)
	r30.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,57
	ctx.r7.s64 = 57;
	// lwz r25,4(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// stw r14,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r14.u32);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, r31.u32);
	// stw r15,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, r15.u32);
	// stw r31,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, r31.u32);
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, r31.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r31.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r10,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r10.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r25,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r25.u32);
	// beq 0x825bb830
	if (cr0.eq) goto loc_825BB830;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_825BB830:
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// ori r8,r9,65534
	ctx.r8.u64 = ctx.r9.u64 | 65534;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// blt cr6,0x825bb9b4
	if (cr6.lt) goto loc_825BB9B4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,4(r24)
	PPC_STORE_U32(r24.u32 + 4, ctx.r10.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r26
	cr6.compare<int32_t>(r29.s32, r26.s32, xer);
	// blt cr6,0x825bb79c
	if (cr6.lt) goto loc_825BB79C;
loc_825BB878:
	// stb r31,180(r22)
	PPC_STORE_U8(r22.u32 + 180, r31.u8);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r27,r11,-25328
	r27.s64 = r11.s64 + -25328;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r7,r30,24
	ctx.r7.u64 = r30.u32 & 0xFF;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// lis r20,-31934
	r20.s64 = -2092826624;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// addi r24,r11,27264
	r24.s64 = r11.s64 + 27264;
	// addi r19,r10,-13328
	r19.s64 = ctx.r10.s64 + -13328;
	// addi r25,r9,-13220
	r25.s64 = ctx.r9.s64 + -13220;
	// addi r18,r8,27744
	r18.s64 = ctx.r8.s64 + 27744;
	// beq cr6,0x825bbb14
	if (cr6.eq) goto loc_825BBB14;
	// stb r16,180(r22)
	PPC_STORE_U8(r22.u32 + 180, r16.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca5e8
	sub_826CA5E8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r28,r31
	r28.u64 = r31.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x825bbb14
	if (!cr6.gt) goto loc_825BBB14;
loc_825BB91C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bba3c
	if (cr6.eq) goto loc_825BBA3C;
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bba3c
	if (cr6.eq) goto loc_825BBA3C;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bb9c0
	if (cr6.eq) goto loc_825BB9C0;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// b 0x825bba2c
	goto loc_825BBA2C;
loc_825BB9A8:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-27344
	ctx.r3.s64 = r11.s64 + -27344;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_825BB9B4:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-27344
	ctx.r3.s64 = r11.s64 + -27344;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_825BB9C0:
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bba3c
	if (cr6.eq) goto loc_825BBA3C;
	// addi r30,r3,60
	r30.s64 = ctx.r3.s64 + 60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bba28
	if (cr6.eq) goto loc_825BBA28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822d7bb0
	sub_822D7BB0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bba28
	if (cr6.eq) goto loc_825BBA28;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x825bba2c
	goto loc_825BBA2C;
loc_825BBA28:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825BBA2C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bba3c
	if (cr6.eq) goto loc_825BBA3C;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x825bba64
	goto loc_825BBA64;
loc_825BBA3C:
	// lwz r11,27268(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 27268);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825bba60
	if (!cr6.eq) goto loc_825BBA60;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,27268(r20)
	PPC_STORE_U32(r20.u32 + 27268, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
loc_825BBA60:
	// mr r29,r24
	r29.u64 = r24.u64;
loc_825BBA64:
	// lwz r30,0(r21)
	r30.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,57
	ctx.r7.s64 = 57;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r14,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r14.u32);
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, r31.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, r31.u32);
	// stw r15,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, r15.u32);
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, r31.u32);
	// stw r31,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, r31.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, r31.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// addic. r10,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r10.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// beq 0x825bbac8
	if (cr0.eq) goto loc_825BBAC8;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_825BBAC8:
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// ori r8,r9,65534
	ctx.r8.u64 = ctx.r9.u64 | 65534;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// blt cr6,0x825bbc20
	if (cr6.lt) goto loc_825BBC20;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,4(r21)
	PPC_STORE_U32(r21.u32 + 4, ctx.r10.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// li r14,16
	r14.s64 = 16;
	// cmpw cr6,r28,r26
	cr6.compare<int32_t>(r28.s32, r26.s32, xer);
	// blt cr6,0x825bb91c
	if (cr6.lt) goto loc_825BB91C;
loc_825BBB14:
	// stb r31,196(r22)
	PPC_STORE_U8(r22.u32 + 196, r31.u8);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r26,r11,20096
	r26.s64 = r11.s64 + 20096;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bbd78
	if (cr6.eq) goto loc_825BBD78;
	// stb r16,196(r22)
	PPC_STORE_U8(r22.u32 + 196, r16.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca5e8
	sub_826CA5E8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r28,r31
	r28.u64 = r31.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x825bbd78
	if (!cr6.gt) goto loc_825BBD78;
loc_825BBB94:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bbca8
	if (cr6.eq) goto loc_825BBCA8;
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bbca8
	if (cr6.eq) goto loc_825BBCA8;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bbc2c
	if (cr6.eq) goto loc_825BBC2C;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// b 0x825bbc98
	goto loc_825BBC98;
loc_825BBC20:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-27344
	ctx.r3.s64 = r11.s64 + -27344;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_825BBC2C:
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bbca8
	if (cr6.eq) goto loc_825BBCA8;
	// addi r30,r3,60
	r30.s64 = ctx.r3.s64 + 60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bbc94
	if (cr6.eq) goto loc_825BBC94;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822d7bb0
	sub_822D7BB0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bbc94
	if (cr6.eq) goto loc_825BBC94;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x825bbc98
	goto loc_825BBC98;
loc_825BBC94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825BBC98:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bbca8
	if (cr6.eq) goto loc_825BBCA8;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x825bbcd0
	goto loc_825BBCD0;
loc_825BBCA8:
	// lwz r11,27268(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 27268);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825bbccc
	if (!cr6.eq) goto loc_825BBCCC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,27268(r20)
	PPC_STORE_U32(r20.u32 + 27268, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
loc_825BBCCC:
	// mr r29,r24
	r29.u64 = r24.u64;
loc_825BBCD0:
	// lwz r30,200(r22)
	r30.u64 = PPC_LOAD_U32(r22.u32 + 200);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,57
	ctx.r7.s64 = 57;
	// addi r5,r1,232
	ctx.r5.s64 = ctx.r1.s64 + 232;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// lwz r16,4(r30)
	r16.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r14,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r14.u32);
	// addi r21,r22,200
	r21.s64 = r22.s64 + 200;
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, r31.u32);
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, r31.u32);
	// stw r15,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, r15.u32);
	// stw r31,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, r31.u32);
	// stw r31,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, r31.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, r31.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r10,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r10.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r16,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r16.u32);
	// beq 0x825bbd30
	if (cr0.eq) goto loc_825BBD30;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_825BBD30:
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// ori r8,r9,65534
	ctx.r8.u64 = ctx.r9.u64 | 65534;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// blt cr6,0x825bbd84
	if (cr6.lt) goto loc_825BBD84;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,4(r21)
	PPC_STORE_U32(r21.u32 + 4, ctx.r10.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r27
	cr6.compare<int32_t>(r28.s32, r27.s32, xer);
	// blt cr6,0x825bbb94
	if (cr6.lt) goto loc_825BBB94;
loc_825BBD78:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x828e9430
	return;
loc_825BBD84:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-27344
	ctx.r3.s64 = r11.s64 + -27344;
}

__attribute__((alias("__imp__sub_825BBD8C"))) PPC_WEAK_FUNC(sub_825BBD8C);
PPC_FUNC_IMPL(__imp__sub_825BBD8C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// bl 0x828e9128
	sub_828E9128(ctx, base);
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
	// bl 0x825bb340
	sub_825BB340(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bbdc8
	if (cr6.eq) goto loc_825BBDC8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825BBDC8:
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

__attribute__((alias("__imp__sub_825BBD90"))) PPC_WEAK_FUNC(sub_825BBD90);
PPC_FUNC_IMPL(__imp__sub_825BBD90) {
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
	// bl 0x825bb340
	sub_825BB340(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bbdc8
	if (cr6.eq) goto loc_825BBDC8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825BBDC8:
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

__attribute__((alias("__imp__sub_825BBDE0"))) PPC_WEAK_FUNC(sub_825BBDE0);
PPC_FUNC_IMPL(__imp__sub_825BBDE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BBDE8"))) PPC_WEAK_FUNC(sub_825BBDE8);
PPC_FUNC_IMPL(__imp__sub_825BBDE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
}

__attribute__((alias("__imp__sub_825BBDEC"))) PPC_WEAK_FUNC(sub_825BBDEC);
PPC_FUNC_IMPL(__imp__sub_825BBDEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BBDF0"))) PPC_WEAK_FUNC(sub_825BBDF0);
PPC_FUNC_IMPL(__imp__sub_825BBDF0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bbe8c
	if (cr6.eq) goto loc_825BBE8C;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r27,1
	r27.s64 = 1;
	// lwz r11,84(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// addi r30,r3,80
	r30.s64 = ctx.r3.s64 + 80;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r11
	r31.s64 = r11.s32;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x825bbe78
	if (cr6.eq) goto loc_825BBE78;
loc_825BBE34:
	// lwz r26,0(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,5(r26)
	ctx.r9.u64 = PPC_LOAD_U8(r26.u32 + 5);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// and r29,r5,r29
	r29.u64 = ctx.r5.u64 & r29.u64;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, xer);
	// bne cr6,0x825bbe34
	if (!cr6.eq) goto loc_825BBE34;
loc_825BBE78:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bbe8c
	if (cr6.eq) goto loc_825BBE8C;
	// stb r27,5(r28)
	PPC_STORE_U8(r28.u32 + 5, r27.u8);
	// stb r27,6(r28)
	PPC_STORE_U8(r28.u32 + 6, r27.u8);
loc_825BBE8C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825BBE90"))) PPC_WEAK_FUNC(sub_825BBE90);
PPC_FUNC_IMPL(__imp__sub_825BBE90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825BBE94"))) PPC_WEAK_FUNC(sub_825BBE94);
PPC_FUNC_IMPL(__imp__sub_825BBE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BBE98"))) PPC_WEAK_FUNC(sub_825BBE98);
PPC_FUNC_IMPL(__imp__sub_825BBE98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addi r11,r3,80
	r11.s64 = ctx.r3.s64 + 80;
	// lwz r8,84(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x825bbeec
	if (cr6.eq) goto loc_825BBEEC;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
loc_825BBECC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825bbee0
	if (cr6.eq) goto loc_825BBEE0;
	// li r7,1
	ctx.r7.s64 = 1;
loc_825BBEE0:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x825bbecc
	if (!cr6.eq) goto loc_825BBECC;
loc_825BBEEC:
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825bbf08
	if (!cr6.eq) goto loc_825BBF08;
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x825bbf0c
	if (cr6.eq) goto loc_825BBF0C;
loc_825BBF08:
	// li r11,1
	r11.s64 = 1;
loc_825BBF0C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
}

__attribute__((alias("__imp__sub_825BBF10"))) PPC_WEAK_FUNC(sub_825BBF10);
PPC_FUNC_IMPL(__imp__sub_825BBF10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BBF14"))) PPC_WEAK_FUNC(sub_825BBF14);
PPC_FUNC_IMPL(__imp__sub_825BBF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BBF18"))) PPC_WEAK_FUNC(sub_825BBF18);
PPC_FUNC_IMPL(__imp__sub_825BBF18) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r10
	r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addi r29,r3,80
	r29.s64 = ctx.r3.s64 + 80;
	// li r30,0
	r30.s64 = 0;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x825bbf8c
	if (cr6.eq) goto loc_825BBF8C;
loc_825BBF50:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r5,r30,r27
	ctx.r5.s64 = r27.s64 - r30.s64;
	// add r4,r30,r28
	ctx.r4.u64 = r30.u64 + r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// bne cr6,0x825bbf50
	if (!cr6.eq) goto loc_825BBF50;
loc_825BBF8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825BBF90"))) PPC_WEAK_FUNC(sub_825BBF90);
PPC_FUNC_IMPL(__imp__sub_825BBF90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825BBF94"))) PPC_WEAK_FUNC(sub_825BBF94);
PPC_FUNC_IMPL(__imp__sub_825BBF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BBF98"))) PPC_WEAK_FUNC(sub_825BBF98);
PPC_FUNC_IMPL(__imp__sub_825BBF98) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// addi r30,r3,80
	r30.s64 = ctx.r3.s64 + 80;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r10
	r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x825bbffc
	if (cr6.eq) goto loc_825BBFFC;
loc_825BBFC8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// bne cr6,0x825bbfc8
	if (!cr6.eq) goto loc_825BBFC8;
loc_825BBFFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825BC000"))) PPC_WEAK_FUNC(sub_825BC000);
PPC_FUNC_IMPL(__imp__sub_825BC000) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825BC004"))) PPC_WEAK_FUNC(sub_825BC004);
PPC_FUNC_IMPL(__imp__sub_825BC004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BC008"))) PPC_WEAK_FUNC(sub_825BC008);
PPC_FUNC_IMPL(__imp__sub_825BC008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// addi r10,r3,180
	ctx.r10.s64 = ctx.r3.s64 + 180;
	// lwz r9,184(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// mulli r8,r11,52
	ctx.r8.s64 = r11.s64 * 52;
	// extsw r11,r9
	r11.s64 = ctx.r9.s32;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x825bc154
	if (!cr6.lt) goto loc_825BC154;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r9,r9,52
	ctx.r9.s64 = ctx.r9.s64 * 52;
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_825BC040:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// subf r7,r5,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r5.s64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 & ctx.r10.u64;
	// beq cr6,0x825bc07c
	if (cr6.eq) goto loc_825BC07C;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
loc_825BC07C:
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825bc0a0
	if (cr6.eq) goto loc_825BC0A0;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
loc_825BC0A0:
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825bc0f4
	if (cr6.eq) goto loc_825BC0F4;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x825bc0e4
	if (cr6.eq) goto loc_825BC0E4;
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
loc_825BC0C4:
	// lwz r31,8(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, r31.u32, xer);
	// beq cr6,0x825bc0e0
	if (cr6.eq) goto loc_825BC0E0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x825bc0c4
	if (!cr6.eq) goto loc_825BC0C4;
	// b 0x825bc0e4
	goto loc_825BC0E4;
loc_825BC0E0:
	// li r6,1
	ctx.r6.s64 = 1;
loc_825BC0E4:
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// subfic r8,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r10.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 & ctx.r9.u64;
loc_825BC0F4:
	// lbz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825bc118
	if (cr6.eq) goto loc_825BC118;
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
loc_825BC118:
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825bc13c
	if (cr6.eq) goto loc_825BC13C;
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
loc_825BC13C:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825bc160
	if (!cr6.eq) goto loc_825BC160;
	// addi r11,r11,52
	r11.s64 = r11.s64 + 52;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// blt cr6,0x825bc040
	if (cr6.lt) goto loc_825BC040;
loc_825BC154:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_825BC160:
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_825BC168"))) PPC_WEAK_FUNC(sub_825BC168);
PPC_FUNC_IMPL(__imp__sub_825BC168) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BC16C"))) PPC_WEAK_FUNC(sub_825BC16C);
PPC_FUNC_IMPL(__imp__sub_825BC16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BC170"))) PPC_WEAK_FUNC(sub_825BC170);
PPC_FUNC_IMPL(__imp__sub_825BC170) {
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
	// li r28,0
	r28.s64 = 0;
	// lwz r30,84(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r28,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r28.u8);
	// rotlwi r10,r30,0
	ctx.r10.u64 = __builtin_rotateleft32(r30.u32, 0);
	// lwz r11,92(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addi r29,r3,80
	r29.s64 = ctx.r3.s64 + 80;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x825bc1d8
	if (cr6.eq) goto loc_825BC1D8;
loc_825BC1A8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// bne cr6,0x825bc1a8
	if (!cr6.eq) goto loc_825BC1A8;
loc_825BC1D8:
	// lis r26,-31934
	r26.s64 = -2092826624;
	// addi r27,r31,104
	r27.s64 = r31.s64 + 104;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r29,r31,204
	r29.s64 = r31.s64 + 204;
	// lwz r11,19276(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 19276);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c7aa8
	sub_826C7AA8(ctx, base);
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r9,212(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// lwz r8,208(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// stw r7,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r7.u32);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// stw r28,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r28.u32);
	// stw r28,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r28.u32);
	// stw r28,216(r31)
	PPC_STORE_U32(r31.u32 + 216, r28.u32);
	// lwz r6,44(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r6,r29
	cr6.compare<uint32_t>(ctx.r6.u32, r29.u32, xer);
	// bne cr6,0x825bc250
	if (!cr6.eq) goto loc_825BC250;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// stb r10,48(r30)
	PPC_STORE_U8(r30.u32 + 48, ctx.r10.u8);
loc_825BC250:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825bc27c
	if (!cr6.eq) goto loc_825BC27C;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825bc27c
	if (!cr6.eq) goto loc_825BC27C;
	// lwz r11,19276(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 19276);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825BC27C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825BC280"))) PPC_WEAK_FUNC(sub_825BC280);
PPC_FUNC_IMPL(__imp__sub_825BC280) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825BC284"))) PPC_WEAK_FUNC(sub_825BC284);
PPC_FUNC_IMPL(__imp__sub_825BC284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BC288"))) PPC_WEAK_FUNC(sub_825BC288);
PPC_FUNC_IMPL(__imp__sub_825BC288) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825bc008
	sub_825BC008(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bc300
	if (cr6.eq) goto loc_825BC300;
	// li r11,1
	r11.s64 = 1;
	// lwz r31,84(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 84);
	// addi r30,r29,80
	r30.s64 = r29.s64 + 80;
	// stb r11,6(r29)
	PPC_STORE_U8(r29.u32 + 6, r11.u8);
	// rotlwi r11,r31,0
	r11.u64 = __builtin_rotateleft32(r31.u32, 0);
	// lwz r10,92(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x825bc300
	if (cr6.eq) goto loc_825BC300;
loc_825BC2D0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// bne cr6,0x825bc2d0
	if (!cr6.eq) goto loc_825BC2D0;
loc_825BC300:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825BC304"))) PPC_WEAK_FUNC(sub_825BC304);
PPC_FUNC_IMPL(__imp__sub_825BC304) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825BC308"))) PPC_WEAK_FUNC(sub_825BC308);
PPC_FUNC_IMPL(__imp__sub_825BC308) {
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
	// li r11,1
	r11.s64 = 1;
	// lwz r31,84(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// rotlwi r11,r31,0
	r11.u64 = __builtin_rotateleft32(r31.u32, 0);
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// addi r30,r3,80
	r30.s64 = ctx.r3.s64 + 80;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x825bc370
	if (cr6.eq) goto loc_825BC370;
loc_825BC340:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// bne cr6,0x825bc340
	if (!cr6.eq) goto loc_825BC340;
loc_825BC370:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lis r11,-32164
	r11.s64 = -2107899904;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,3388
	ctx.r3.s64 = ctx.r9.s64 + 3388;
	// addi r31,r11,-15736
	r31.s64 = r11.s64 + -15736;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,104
	ctx.r3.s64 = r29.s64 + 104;
	// lwz r11,19276(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19276);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r29,204
	ctx.r4.s64 = r29.s64 + 204;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825BC3C4"))) PPC_WEAK_FUNC(sub_825BC3C4);
PPC_FUNC_IMPL(__imp__sub_825BC3C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825BC3C8"))) PPC_WEAK_FUNC(sub_825BC3C8);
PPC_FUNC_IMPL(__imp__sub_825BC3C8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r31,r29,20
	r31.s64 = r29.s64 + 20;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x8253c560
	sub_8253C560(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r30,r11,-4616
	r30.s64 = r11.s64 + -4616;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// bl 0x826ca8e8
	sub_826CA8E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,16(r29)
	PPC_STORE_U8(r29.u32 + 16, ctx.r8.u8);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bc488
	if (cr6.eq) goto loc_825BC488;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825bc48c
	if (!cr6.eq) goto loc_825BC48C;
loc_825BC488:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825BC48C:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lwz r10,92(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// lwz r11,84(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 84);
	// addi r30,r29,80
	r30.s64 = r29.s64 + 80;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r11
	r31.s64 = r11.s32;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x825bc4ec
	if (cr6.eq) goto loc_825BC4EC;
loc_825BC4BC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// bne cr6,0x825bc4bc
	if (!cr6.eq) goto loc_825BC4BC;
loc_825BC4EC:
	// li r11,1
	r11.s64 = 1;
	// stb r11,6(r29)
	PPC_STORE_U8(r29.u32 + 6, r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825BC4F8"))) PPC_WEAK_FUNC(sub_825BC4F8);
PPC_FUNC_IMPL(__imp__sub_825BC4F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825BC4FC"))) PPC_WEAK_FUNC(sub_825BC4FC);
PPC_FUNC_IMPL(__imp__sub_825BC4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BC500"))) PPC_WEAK_FUNC(sub_825BC500);
PPC_FUNC_IMPL(__imp__sub_825BC500) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// bl 0x825bbe98
	sub_825BBE98(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bc5c0
	if (cr6.eq) goto loc_825BC5C0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-4616
	ctx.r3.s64 = r11.s64 + -4616;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r28,r29,20
	r28.s64 = r29.s64 + 20;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r29,5
	ctx.r5.s64 = r29.s64 + 5;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x823298c8
	sub_823298C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lwz r10,92(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// lwz r11,84(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 84);
	// addi r30,r29,80
	r30.s64 = r29.s64 + 80;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r11
	r31.s64 = r11.s32;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x825bc5b0
	if (cr6.eq) goto loc_825BC5B0;
loc_825BC580:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// bne cr6,0x825bc580
	if (!cr6.eq) goto loc_825BC580;
loc_825BC5B0:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8253c4c8
	sub_8253C4C8(ctx, base);
loc_825BC5C0:
	// li r11,0
	r11.s64 = 0;
	// stb r11,6(r29)
	PPC_STORE_U8(r29.u32 + 6, r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825BC5CC"))) PPC_WEAK_FUNC(sub_825BC5CC);
PPC_FUNC_IMPL(__imp__sub_825BC5CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825BC5D0"))) PPC_WEAK_FUNC(sub_825BC5D0);
PPC_FUNC_IMPL(__imp__sub_825BC5D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-944(r1)
	ea = -944 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r3,964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 964, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r23,r3,20
	r23.s64 = ctx.r3.s64 + 20;
	// addi r10,r11,-3836
	ctx.r10.s64 = r11.s64 + -3836;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x826cb378
	sub_826CB378(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r30,0
	r30.s64 = 0;
	// addi r8,r9,-3908
	ctx.r8.s64 = ctx.r9.s64 + -3908;
	// stw r30,84(r28)
	PPC_STORE_U32(r28.u32 + 84, r30.u32);
	// addi r31,r28,80
	r31.s64 = r28.s64 + 80;
	// stw r30,92(r28)
	PPC_STORE_U32(r28.u32 + 92, r30.u32);
	// stw r30,88(r28)
	PPC_STORE_U32(r28.u32 + 88, r30.u32);
	// stw r30,96(r28)
	PPC_STORE_U32(r28.u32 + 96, r30.u32);
	// stw r8,80(r28)
	PPC_STORE_U32(r28.u32 + 80, ctx.r8.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r7,96(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 96);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r28,104
	ctx.r3.s64 = r28.s64 + 104;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r5,96(r28)
	PPC_STORE_U32(r28.u32 + 96, ctx.r5.u32);
	// bl 0x826c7c98
	sub_826C7C98(ctx, base);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// stw r30,184(r28)
	PPC_STORE_U32(r28.u32 + 184, r30.u32);
	// addi r29,r28,180
	r29.s64 = r28.s64 + 180;
	// addi r3,r4,-3896
	ctx.r3.s64 = ctx.r4.s64 + -3896;
	// stw r30,192(r28)
	PPC_STORE_U32(r28.u32 + 192, r30.u32);
	// stw r30,188(r28)
	PPC_STORE_U32(r28.u32 + 188, r30.u32);
	// stw r30,196(r28)
	PPC_STORE_U32(r28.u32 + 196, r30.u32);
	// stw r3,180(r28)
	PPC_STORE_U32(r28.u32 + 180, ctx.r3.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r11,196(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 196);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r28,204
	ctx.r3.s64 = r28.s64 + 204;
	// or r9,r11,r10
	ctx.r9.u64 = r11.u64 | ctx.r10.u64;
	// stw r9,196(r28)
	PPC_STORE_U32(r28.u32 + 196, ctx.r9.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r24,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r24.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r27,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r27.u32);
	// stb r30,4(r28)
	PPC_STORE_U8(r28.u32 + 4, r30.u8);
	// addi r29,r11,-3852
	r29.s64 = r11.s64 + -3852;
	// stb r30,5(r28)
	PPC_STORE_U8(r28.u32 + 5, r30.u8);
	// stb r8,6(r28)
	PPC_STORE_U8(r28.u32 + 6, ctx.r8.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r30,16(r28)
	PPC_STORE_U8(r28.u32 + 16, r30.u8);
	// stb r30,17(r28)
	PPC_STORE_U8(r28.u32 + 17, r30.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r7,r27,24
	ctx.r7.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825bc750
	if (cr6.eq) goto loc_825BC750;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// addi r5,r1,212
	ctx.r5.s64 = ctx.r1.s64 + 212;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,1540
	ctx.r3.s64 = r11.s64 + 1540;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822cb4c8
	sub_822CB4C8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,17(r28)
	PPC_STORE_U8(r28.u32 + 17, ctx.r9.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825BC750:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r11,-3864
	r29.s64 = r11.s64 + -3864;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// addi r5,r1,220
	ctx.r5.s64 = ctx.r1.s64 + 220;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bc968
	if (cr6.eq) goto loc_825BC968;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825bc7ec
	if (!cr6.gt) goto loc_825BC7EC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825BC7EC:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r25,r30
	r25.u64 = r30.u64;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// ble cr6,0x825bc968
	if (!cr6.gt) goto loc_825BC968;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r26,-31933
	r26.s64 = -2092761088;
	// addi r18,r11,18440
	r18.s64 = r11.s64 + 18440;
	// addi r22,r10,-3880
	r22.s64 = ctx.r10.s64 + -3880;
	// addi r21,r9,-3888
	r21.s64 = ctx.r9.s64 + -3888;
loc_825BC820:
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r25.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r25,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r25.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bc8a4
	if (cr6.eq) goto loc_825BC8A4;
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
	// beq cr6,0x825bc8a4
	if (cr6.eq) goto loc_825BC8A4;
	// bl 0x822ba4c0
	sub_822BA4C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne cr6,0x825bc8a8
	if (!cr6.eq) goto loc_825BC8A8;
loc_825BC8A4:
	// mr r28,r18
	r28.u64 = r18.u64;
loc_825BC8A8:
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// lwz r29,-19504(r26)
	r29.u64 = PPC_LOAD_U32(r26.u32 + -19504);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r7,964(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 964);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// bl 0x825bf1c0
	sub_825BF1C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x825bc938
	if (!cr6.gt) goto loc_825BC938;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825BC938:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825bc958
	if (cr0.eq) goto loc_825BC958;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
loc_825BC958:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmpw cr6,r25,r19
	cr6.compare<int32_t>(r25.s32, r19.s32, xer);
	// blt cr6,0x825bc820
	if (cr6.lt) goto loc_825BC820;
	// lwz r28,964(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 964);
loc_825BC968:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r31,r11,-4548
	r31.s64 = r11.s64 + -4548;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r3.u32);
	// addi r5,r1,248
	ctx.r5.s64 = ctx.r1.s64 + 248;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bd300
	if (cr6.eq) goto loc_825BD300;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r29,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r29.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// lwz r10,188(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 188);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r11,r28,180
	r11.s64 = r28.s64 + 180;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// ble cr6,0x825bca10
	if (!cr6.gt) goto loc_825BCA10;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825BCA10:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x825bd300
	if (!cr6.gt) goto loc_825BD300;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lwz r16,784(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r15,776(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 776);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// addi r14,r8,-4520
	r14.s64 = ctx.r8.s64 + -4520;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,20600
	r11.s64 = r11.s64 + 20600;
	// stw r14,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r14.u32);
	// addi r10,r10,27264
	ctx.r10.s64 = ctx.r10.s64 + 27264;
	// addi r8,r7,-4512
	ctx.r8.s64 = ctx.r7.s64 + -4512;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r31,r6,-25328
	r31.s64 = ctx.r6.s64 + -25328;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r25,r5,-4560
	r25.s64 = ctx.r5.s64 + -4560;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r26,r4,-28152
	r26.s64 = ctx.r4.s64 + -28152;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r28,r3,-4504
	r28.s64 = ctx.r3.s64 + -4504;
	// stw r25,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r25.u32);
	// li r21,16
	r21.s64 = 16;
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r26.u32);
	// li r22,34
	r22.s64 = 34;
	// stw r28,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, r28.u32);
	// addi r24,r9,4776
	r24.s64 = ctx.r9.s64 + 4776;
	// b 0x825bcaac
	goto loc_825BCAAC;
loc_825BCA98:
	// lwz r26,144(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r29,200(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r31,100(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r25,152(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r28,252(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
loc_825BCAAC:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r11.u32);
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r17,0(r3)
	r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r19,0(r3)
	r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r20,0(r3)
	r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r21,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, r21.u32);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, r30.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r22,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, r22.u32);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// stw r30,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, r30.u32);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// stw r30,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, r30.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r30,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, r30.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r27.u32);
	// stw r27,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r27.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r10,r23,24
	ctx.r10.u64 = r23.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825bcb98
	if (cr6.eq) goto loc_825BCB98;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r17,0(r11)
	r17.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825BCB98:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r18,r30
	r18.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r3.u32);
	// addi r5,r1,244
	ctx.r5.s64 = ctx.r1.s64 + 244;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bcc08
	if (cr6.eq) goto loc_825BCC08;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r18,1
	r18.s64 = 1;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// lwz r19,0(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825BCC08:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r23,r30
	r23.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// addi r5,r1,216
	ctx.r5.s64 = ctx.r1.s64 + 216;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bcc78
	if (cr6.eq) goto loc_825BCC78;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r23,1
	r23.s64 = 1;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// lwz r20,0(r11)
	r20.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825BCC78:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r25,r30
	r25.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// addi r5,r1,260
	ctx.r5.s64 = ctx.r1.s64 + 260;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bce3c
	if (cr6.eq) goto loc_825BCE3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r25,1
	r25.s64 = 1;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca5e8
	sub_826CA5E8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r28,r30
	r28.u64 = r30.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x825bce3c
	if (!cr6.gt) goto loc_825BCE3C;
	// b 0x825bccf8
	goto loc_825BCCF8;
loc_825BCCF4:
	// lwz r31,100(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_825BCCF8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r28.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bcd70
	if (cr6.eq) goto loc_825BCD70;
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
	// beq cr6,0x825bcd70
	if (cr6.eq) goto loc_825BCD70;
	// bl 0x822d80c0
	sub_822D80C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bcd70
	if (cr6.eq) goto loc_825BCD70;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x825bcda4
	goto loc_825BCDA4;
loc_825BCD70:
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r11,27268(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27268);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825bcda0
	if (!cr6.eq) goto loc_825BCDA0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,27268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27268, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x825bcda4
	goto loc_825BCDA4;
loc_825BCDA0:
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_825BCDA4:
	// lwz r14,4(r27)
	r14.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// stw r21,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, r21.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, r30.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r30,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, r30.u32);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// stw r22,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, r22.u32);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// stw r30,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, r30.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r30,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, r30.u32);
	// stw r30,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, r30.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r10,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r10.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// stw r14,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r14.u32);
	// beq 0x825bcdfc
	if (cr0.eq) goto loc_825BCDFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_825BCDFC:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// subf r8,r28,r9
	ctx.r8.s64 = ctx.r9.s64 - r28.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// blt cr6,0x825bd30c
	if (cr6.lt) goto loc_825BD30C;
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r26
	cr6.compare<int32_t>(r28.s32, r26.s32, xer);
	// blt cr6,0x825bccf4
	if (cr6.lt) goto loc_825BCCF4;
	// lwz r14,148(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
loc_825BCE3C:
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r26,r30
	r26.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bd008
	if (cr6.eq) goto loc_825BD008;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r26,1
	r26.s64 = 1;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bcee0
	if (cr6.eq) goto loc_825BCEE0;
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
	// beq cr6,0x825bcee0
	if (cr6.eq) goto loc_825BCEE0;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// subfe r31,r11,r3
	temp.u8 = (~r11.u32 + ctx.r3.u32 < ~r11.u32) | (~r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r31.u64 = ~r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825bcee4
	goto loc_825BCEE4;
loc_825BCEE0:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_825BCEE4:
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bcf64
	if (cr6.eq) goto loc_825BCF64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bcf58
	if (cr6.eq) goto loc_825BCF58;
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
	// beq cr6,0x825bcf58
	if (cr6.eq) goto loc_825BCF58;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825bcf5c
	if (!cr6.eq) goto loc_825BCF5C;
loc_825BCF58:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_825BCF5C:
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// b 0x825bd000
	goto loc_825BD000;
loc_825BCF64:
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bcfc0
	if (cr6.eq) goto loc_825BCFC0;
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
	// beq cr6,0x825bcfc0
	if (cr6.eq) goto loc_825BCFC0;
	// bl 0x822d80c0
	sub_822D80C0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// subfe r31,r11,r3
	temp.u8 = (~r11.u32 + ctx.r3.u32 < ~r11.u32) | (~r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r31.u64 = ~r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825bcfc4
	goto loc_825BCFC4;
loc_825BCFC0:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_825BCFC4:
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bd008
	if (cr6.eq) goto loc_825BD008;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
loc_825BD000:
	// lwz r15,0(r11)
	r15.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825BD008:
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// mr r28,r30
	r28.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// addi r5,r1,196
	ctx.r5.s64 = ctx.r1.s64 + 196;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bd1d0
	if (cr6.eq) goto loc_825BD1D0;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bd0a8
	if (cr6.eq) goto loc_825BD0A8;
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
	// beq cr6,0x825bd0a8
	if (cr6.eq) goto loc_825BD0A8;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// subfe r31,r11,r3
	temp.u8 = (~r11.u32 + ctx.r3.u32 < ~r11.u32) | (~r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r31.u64 = ~r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825bd0ac
	goto loc_825BD0AC;
loc_825BD0A8:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_825BD0AC:
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bd12c
	if (cr6.eq) goto loc_825BD12C;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bd120
	if (cr6.eq) goto loc_825BD120;
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
	// beq cr6,0x825bd120
	if (cr6.eq) goto loc_825BD120;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825bd124
	if (!cr6.eq) goto loc_825BD124;
loc_825BD120:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_825BD124:
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// b 0x825bd1c8
	goto loc_825BD1C8;
loc_825BD12C:
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bd188
	if (cr6.eq) goto loc_825BD188;
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
	// beq cr6,0x825bd188
	if (cr6.eq) goto loc_825BD188;
	// bl 0x822d80c0
	sub_822D80C0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// subfe r31,r11,r3
	temp.u8 = (~r11.u32 + ctx.r3.u32 < ~r11.u32) | (~r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r31.u64 = ~r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825bd18c
	goto loc_825BD18C;
loc_825BD188:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_825BD18C:
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bd1d0
	if (cr6.eq) goto loc_825BD1D0;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
loc_825BD1C8:
	// lwz r16,0(r11)
	r16.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825BD1D0:
	// lwz r11,964(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 964);
	// addi r29,r11,180
	r29.s64 = r11.s64 + 180;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825bd200
	if (!cr6.gt) goto loc_825BD200;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825BD200:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r9,r11,52
	ctx.r9.s64 = r11.s64 * 52;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add. r31,r9,r10
	r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// beq 0x825bd2b4
	if (cr0.eq) goto loc_825BD2B4;
	// stw r17,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r17.u32);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// stb r18,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r18.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r19,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r19.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stb r23,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r23.u8);
	// addi r5,r1,296
	ctx.r5.s64 = ctx.r1.s64 + 296;
	// stw r20,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r20.u32);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// stb r25,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r25.u8);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r29,r31,24
	r29.s64 = r31.s64 + 24;
	// stw r21,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, r21.u32);
	// stw r30,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, r30.u32);
	// stw r30,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r30.u32);
	// stw r22,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, r22.u32);
	// stw r30,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, r30.u32);
	// stw r30,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, r30.u32);
	// stw r30,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, r30.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x825b3068
	sub_825B3068(ctx, base);
	// stb r26,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r26.u8);
	// stw r15,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r15.u32);
	// stb r28,44(r31)
	PPC_STORE_U8(r31.u32 + 44, r28.u8);
	// stw r16,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r16.u32);
loc_825BD2B4:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r27,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r27.u32);
	// stw r27,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r27.u32);
	// cmplw cr6,r3,r27
	cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, xer);
	// beq cr6,0x825bd2dc
	if (cr6.eq) goto loc_825BD2DC;
loc_825BD2C8:
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// bne cr6,0x825bd2c8
	if (!cr6.eq) goto loc_825BD2C8;
loc_825BD2DC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x825bca98
	if (cr6.lt) goto loc_825BCA98;
	// lwz r28,964(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 964);
loc_825BD300:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// b 0x828e9430
	return;
loc_825BD30C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-27344
	ctx.r3.s64 = r11.s64 + -27344;
}

__attribute__((alias("__imp__sub_825BD314"))) PPC_WEAK_FUNC(sub_825BD314);
PPC_FUNC_IMPL(__imp__sub_825BD314) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// bl 0x828e9128
	sub_828E9128(ctx, base);
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r30,84(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r10,r11,-3836
	ctx.r10.s64 = r11.s64 + -3836;
	// rotlwi r11,r30,0
	r11.u64 = __builtin_rotateleft32(r30.u32, 0);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r31,r3,80
	r31.s64 = ctx.r3.s64 + 80;
	// lwz r9,92(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// beq cr6,0x825bd390
	if (cr6.eq) goto loc_825BD390;
loc_825BD354:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bd374
	if (cr6.eq) goto loc_825BD374;
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
loc_825BD374:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x825bd354
	if (!cr6.eq) goto loc_825BD354;
loc_825BD390:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825bd3b4
	if (!cr6.gt) goto loc_825BD3B4;
loc_825BD39C:
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
	// bgt cr6,0x825bd39c
	if (cr6.gt) goto loc_825BD39C;
loc_825BD3B4:
	// addi r3,r29,204
	ctx.r3.s64 = r29.s64 + 204;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r30,r29,180
	r30.s64 = r29.s64 + 180;
	// addi r10,r11,-3896
	ctx.r10.s64 = r11.s64 + -3896;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,180(r29)
	PPC_STORE_U32(r29.u32 + 180, ctx.r10.u32);
	// bl 0x825bd7e8
	sub_825BD7E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825bdae8
	sub_825BDAE8(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r8,r9,-3920
	ctx.r8.s64 = ctx.r9.s64 + -3920;
	// stw r8,180(r29)
	PPC_STORE_U32(r29.u32 + 180, ctx.r8.u32);
	// bl 0x825bd7e8
	sub_825BD7E8(ctx, base);
	// addi r3,r29,104
	ctx.r3.s64 = r29.s64 + 104;
	// bl 0x826c7d40
	sub_826C7D40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bd560
	sub_825BD560(ctx, base);
	// addi r3,r29,20
	ctx.r3.s64 = r29.s64 + 20;
	// bl 0x826cb960
	sub_826CB960(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825BD318"))) PPC_WEAK_FUNC(sub_825BD318);
PPC_FUNC_IMPL(__imp__sub_825BD318) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r30,84(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r10,r11,-3836
	ctx.r10.s64 = r11.s64 + -3836;
	// rotlwi r11,r30,0
	r11.u64 = __builtin_rotateleft32(r30.u32, 0);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r31,r3,80
	r31.s64 = ctx.r3.s64 + 80;
	// lwz r9,92(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// beq cr6,0x825bd390
	if (cr6.eq) goto loc_825BD390;
loc_825BD354:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bd374
	if (cr6.eq) goto loc_825BD374;
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
loc_825BD374:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x825bd354
	if (!cr6.eq) goto loc_825BD354;
loc_825BD390:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825bd3b4
	if (!cr6.gt) goto loc_825BD3B4;
loc_825BD39C:
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
	// bgt cr6,0x825bd39c
	if (cr6.gt) goto loc_825BD39C;
loc_825BD3B4:
	// addi r3,r29,204
	ctx.r3.s64 = r29.s64 + 204;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r30,r29,180
	r30.s64 = r29.s64 + 180;
	// addi r10,r11,-3896
	ctx.r10.s64 = r11.s64 + -3896;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,180(r29)
	PPC_STORE_U32(r29.u32 + 180, ctx.r10.u32);
	// bl 0x825bd7e8
	sub_825BD7E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825bdae8
	sub_825BDAE8(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r8,r9,-3920
	ctx.r8.s64 = ctx.r9.s64 + -3920;
	// stw r8,180(r29)
	PPC_STORE_U32(r29.u32 + 180, ctx.r8.u32);
	// bl 0x825bd7e8
	sub_825BD7E8(ctx, base);
	// addi r3,r29,104
	ctx.r3.s64 = r29.s64 + 104;
	// bl 0x826c7d40
	sub_826C7D40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bd560
	sub_825BD560(ctx, base);
	// addi r3,r29,20
	ctx.r3.s64 = r29.s64 + 20;
	// bl 0x826cb960
	sub_826CB960(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825BD414"))) PPC_WEAK_FUNC(sub_825BD414);
PPC_FUNC_IMPL(__imp__sub_825BD414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BD418"))) PPC_WEAK_FUNC(sub_825BD418);
PPC_FUNC_IMPL(__imp__sub_825BD418) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825BD418"))) PPC_WEAK_FUNC(sub_825BD418);
PPC_FUNC_IMPL(__imp__sub_825BD418) {
	PPC_FUNC_PROLOGUE();
	// b 0x825bd648
	sub_825BD648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BD41C"))) PPC_WEAK_FUNC(sub_825BD41C);
PPC_FUNC_IMPL(__imp__sub_825BD41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BD420"))) PPC_WEAK_FUNC(sub_825BD420);
PPC_FUNC_IMPL(__imp__sub_825BD420) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825BD420"))) PPC_WEAK_FUNC(sub_825BD420);
PPC_FUNC_IMPL(__imp__sub_825BD420) {
	PPC_FUNC_PROLOGUE();
	// b 0x825bdae8
	sub_825BDAE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BD424"))) PPC_WEAK_FUNC(sub_825BD424);
PPC_FUNC_IMPL(__imp__sub_825BD424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BD428"))) PPC_WEAK_FUNC(sub_825BD428);
PPC_FUNC_IMPL(__imp__sub_825BD428) {
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
	// mulli r3,r10,52
	ctx.r3.s64 = ctx.r10.s64 * 52;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825BD48C"))) PPC_WEAK_FUNC(sub_825BD48C);
PPC_FUNC_IMPL(__imp__sub_825BD48C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BD490"))) PPC_WEAK_FUNC(sub_825BD490);
PPC_FUNC_IMPL(__imp__sub_825BD490) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-3932
	ctx.r9.s64 = r11.s64 + -3932;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x825bd4d4
	if (!cr6.gt) goto loc_825BD4D4;
loc_825BD4BC:
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
	// bgt cr6,0x825bd4bc
	if (cr6.gt) goto loc_825BD4BC;
loc_825BD4D4:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bd4ec
	if (cr6.eq) goto loc_825BD4EC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825BD4EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825BD4FC"))) PPC_WEAK_FUNC(sub_825BD4FC);
PPC_FUNC_IMPL(__imp__sub_825BD4FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BD500"))) PPC_WEAK_FUNC(sub_825BD500);
PPC_FUNC_IMPL(__imp__sub_825BD500) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-3908
	ctx.r9.s64 = ctx.r10.s64 + -3908;
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

__attribute__((alias("__imp__sub_825BD558"))) PPC_WEAK_FUNC(sub_825BD558);
PPC_FUNC_IMPL(__imp__sub_825BD558) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BD55C"))) PPC_WEAK_FUNC(sub_825BD55C);
PPC_FUNC_IMPL(__imp__sub_825BD55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BD560"))) PPC_WEAK_FUNC(sub_825BD560);
PPC_FUNC_IMPL(__imp__sub_825BD560) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-3908
	ctx.r9.s64 = r11.s64 + -3908;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x825bd5a4
	if (!cr6.gt) goto loc_825BD5A4;
loc_825BD58C:
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
	// bgt cr6,0x825bd58c
	if (cr6.gt) goto loc_825BD58C;
loc_825BD5A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bd648
	sub_825BD648(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,-3932
	ctx.r10.s64 = r11.s64 + -3932;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x825bd5e0
	if (!cr6.gt) goto loc_825BD5E0;
loc_825BD5C8:
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
	// bgt cr6,0x825bd5c8
	if (cr6.gt) goto loc_825BD5C8;
loc_825BD5E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825BD5F0"))) PPC_WEAK_FUNC(sub_825BD5F0);
PPC_FUNC_IMPL(__imp__sub_825BD5F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BD5F4"))) PPC_WEAK_FUNC(sub_825BD5F4);
PPC_FUNC_IMPL(__imp__sub_825BD5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BD5F8"))) PPC_WEAK_FUNC(sub_825BD5F8);
PPC_FUNC_IMPL(__imp__sub_825BD5F8) {
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
	// bl 0x825bd560
	sub_825BD560(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bd630
	if (cr6.eq) goto loc_825BD630;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825BD630:
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

__attribute__((alias("__imp__sub_825BD644"))) PPC_WEAK_FUNC(sub_825BD644);
PPC_FUNC_IMPL(__imp__sub_825BD644) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BD648"))) PPC_WEAK_FUNC(sub_825BD648);
PPC_FUNC_IMPL(__imp__sub_825BD648) {
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
	// beq cr6,0x825bd72c
	if (cr6.eq) goto loc_825BD72C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825bd6bc
	if (!cr6.eq) goto loc_825BD6BC;
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
	// beq cr6,0x825bd72c
	if (cr6.eq) goto loc_825BD72C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x826fa838
	sub_826FA838(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x825bd72c
	goto loc_825BD72C;
loc_825BD6BC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825bd500
	sub_825BD500(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x825bd6e8
	if (!cr6.gt) goto loc_825BD6E8;
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
loc_825BD6E8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824b28c8
	sub_824B28C8(ctx, base);
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
	// bl 0x825bd560
	sub_825BD560(ctx, base);
loc_825BD72C:
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

__attribute__((alias("__imp__sub_825BD740"))) PPC_WEAK_FUNC(sub_825BD740);
PPC_FUNC_IMPL(__imp__sub_825BD740) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BD744"))) PPC_WEAK_FUNC(sub_825BD744);
PPC_FUNC_IMPL(__imp__sub_825BD744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BD748"))) PPC_WEAK_FUNC(sub_825BD748);
PPC_FUNC_IMPL(__imp__sub_825BD748) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r3,24
	r30.s64 = ctx.r3.s64 + 24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lbz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 4);
	// stb r10,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r10.u8);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// lbz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U8(r29.u32 + 12);
	// stb r8,12(r31)
	PPC_STORE_U8(r31.u32 + 12, ctx.r8.u8);
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// lbz r6,20(r29)
	ctx.r6.u64 = PPC_LOAD_U8(r29.u32 + 20);
	// stb r6,20(r31)
	PPC_STORE_U8(r31.u32 + 20, ctx.r6.u8);
	// bl 0x82332bb8
	sub_82332BB8(ctx, base);
	// lwz r6,24(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x825b3068
	sub_825B3068(ctx, base);
	// lbz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U8(r29.u32 + 36);
	// stb r3,36(r31)
	PPC_STORE_U8(r31.u32 + 36, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lbz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// stb r10,44(r31)
	PPC_STORE_U8(r31.u32 + 44, ctx.r10.u8);
	// lwz r9,48(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825BD7E0"))) PPC_WEAK_FUNC(sub_825BD7E0);
PPC_FUNC_IMPL(__imp__sub_825BD7E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825BD7E4"))) PPC_WEAK_FUNC(sub_825BD7E4);
PPC_FUNC_IMPL(__imp__sub_825BD7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BD7E8"))) PPC_WEAK_FUNC(sub_825BD7E8);
PPC_FUNC_IMPL(__imp__sub_825BD7E8) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825bd874
	if (!cr6.gt) goto loc_825BD874;
	// li r28,0
	r28.s64 = 0;
loc_825BD808:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// lwz r9,-28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + -28);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,-28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + -28);
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// lwz r7,-28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + -28);
	// cmplw cr6,r3,r7
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, xer);
	// stw r28,-24(r31)
	PPC_STORE_U32(r31.u32 + -24, r28.u32);
	// beq cr6,0x825bd854
	if (cr6.eq) goto loc_825BD854;
loc_825BD83C:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r11,-28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -28);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x825bd83c
	if (!cr6.eq) goto loc_825BD83C;
loc_825BD854:
	// lwz r3,-28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -28);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x825bd808
	if (cr6.gt) goto loc_825BD808;
loc_825BD874:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825BD878"))) PPC_WEAK_FUNC(sub_825BD878);
PPC_FUNC_IMPL(__imp__sub_825BD878) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825BD87C"))) PPC_WEAK_FUNC(sub_825BD87C);
PPC_FUNC_IMPL(__imp__sub_825BD87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BD880"))) PPC_WEAK_FUNC(sub_825BD880);
PPC_FUNC_IMPL(__imp__sub_825BD880) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-3920
	ctx.r10.s64 = r11.s64 + -3920;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825bd7e8
	sub_825BD7E8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825bd8c4
	if (cr6.eq) goto loc_825BD8C4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825BD8C4:
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

__attribute__((alias("__imp__sub_825BD8D8"))) PPC_WEAK_FUNC(sub_825BD8D8);
PPC_FUNC_IMPL(__imp__sub_825BD8D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BD8DC"))) PPC_WEAK_FUNC(sub_825BD8DC);
PPC_FUNC_IMPL(__imp__sub_825BD8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BD8E0"))) PPC_WEAK_FUNC(sub_825BD8E0);
PPC_FUNC_IMPL(__imp__sub_825BD8E0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x825bd7e8
	sub_825BD7E8(ctx, base);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x825bd91c
	if (!cr6.gt) goto loc_825BD91C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825BD91C:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x825bd9a0
	if (cr6.eq) goto loc_825BD9A0;
loc_825BD938:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825bd960
	if (!cr6.gt) goto loc_825BD960;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825BD960:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r10,r11,52
	ctx.r10.s64 = r11.s64 * 52;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add. r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// beq 0x825bd984
	if (cr0.eq) goto loc_825BD984;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825bd748
	sub_825BD748(ctx, base);
loc_825BD984:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r30,r30,52
	r30.s64 = r30.s64 + 52;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x825bd938
	if (!cr6.eq) goto loc_825BD938;
loc_825BD9A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825BD9A4"))) PPC_WEAK_FUNC(sub_825BD9A4);
PPC_FUNC_IMPL(__imp__sub_825BD9A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825BD9A8"))) PPC_WEAK_FUNC(sub_825BD9A8);
PPC_FUNC_IMPL(__imp__sub_825BD9A8) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-3896
	ctx.r9.s64 = ctx.r10.s64 + -3896;
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

__attribute__((alias("__imp__sub_825BDA00"))) PPC_WEAK_FUNC(sub_825BDA00);
PPC_FUNC_IMPL(__imp__sub_825BDA00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BDA04"))) PPC_WEAK_FUNC(sub_825BDA04);
PPC_FUNC_IMPL(__imp__sub_825BDA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BDA08"))) PPC_WEAK_FUNC(sub_825BDA08);
PPC_FUNC_IMPL(__imp__sub_825BDA08) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-3896
	ctx.r10.s64 = r11.s64 + -3896;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825bd7e8
	sub_825BD7E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825bdae8
	sub_825BDAE8(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-3920
	ctx.r8.s64 = ctx.r9.s64 + -3920;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x825bd7e8
	sub_825BD7E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825BDA5C"))) PPC_WEAK_FUNC(sub_825BDA5C);
PPC_FUNC_IMPL(__imp__sub_825BDA5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BDA60"))) PPC_WEAK_FUNC(sub_825BDA60);
PPC_FUNC_IMPL(__imp__sub_825BDA60) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-3896
	ctx.r10.s64 = r11.s64 + -3896;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825bd7e8
	sub_825BD7E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825bdae8
	sub_825BDAE8(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-3920
	ctx.r8.s64 = ctx.r9.s64 + -3920;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x825bd7e8
	sub_825BD7E8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825bdac4
	if (cr6.eq) goto loc_825BDAC4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825BDAC4:
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

__attribute__((alias("__imp__sub_825BDAD8"))) PPC_WEAK_FUNC(sub_825BDAD8);
PPC_FUNC_IMPL(__imp__sub_825BDAD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BDADC"))) PPC_WEAK_FUNC(sub_825BDADC);
PPC_FUNC_IMPL(__imp__sub_825BDADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BDAE0"))) PPC_WEAK_FUNC(sub_825BDAE0);
PPC_FUNC_IMPL(__imp__sub_825BDAE0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BDAE8"))) PPC_WEAK_FUNC(sub_825BDAE8);
PPC_FUNC_IMPL(__imp__sub_825BDAE8) {
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
	// beq cr6,0x825bdbcc
	if (cr6.eq) goto loc_825BDBCC;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825bdb5c
	if (!cr6.eq) goto loc_825BDB5C;
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
	// beq cr6,0x825bdbcc
	if (cr6.eq) goto loc_825BDBCC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x825bd428
	sub_825BD428(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x825bdbcc
	goto loc_825BDBCC;
loc_825BDB5C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825bd9a8
	sub_825BD9A8(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x825bdb88
	if (!cr6.gt) goto loc_825BDB88;
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
loc_825BDB88:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825bd8e0
	sub_825BD8E0(ctx, base);
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
	// bl 0x825bda08
	sub_825BDA08(ctx, base);
loc_825BDBCC:
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

__attribute__((alias("__imp__sub_825BDBE0"))) PPC_WEAK_FUNC(sub_825BDBE0);
PPC_FUNC_IMPL(__imp__sub_825BDBE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BDBE4"))) PPC_WEAK_FUNC(sub_825BDBE4);
PPC_FUNC_IMPL(__imp__sub_825BDBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BDBE8"))) PPC_WEAK_FUNC(sub_825BDBE8);
PPC_FUNC_IMPL(__imp__sub_825BDBE8) {
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
	// bl 0x825bd318
	sub_825BD318(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bdc20
	if (cr6.eq) goto loc_825BDC20;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825BDC20:
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

__attribute__((alias("__imp__sub_825BDC34"))) PPC_WEAK_FUNC(sub_825BDC34);
PPC_FUNC_IMPL(__imp__sub_825BDC34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BDC38"))) PPC_WEAK_FUNC(sub_825BDC38);
PPC_FUNC_IMPL(__imp__sub_825BDC38) {
	PPC_FUNC_PROLOGUE();
	// b 0x825bf068
	sub_825BF068(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BDC38"))) PPC_WEAK_FUNC(sub_825BDC38);
PPC_FUNC_IMPL(__imp__sub_825BDC38) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825BDC3C"))) PPC_WEAK_FUNC(sub_825BDC3C);
PPC_FUNC_IMPL(__imp__sub_825BDC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BDC40"))) PPC_WEAK_FUNC(sub_825BDC40);
PPC_FUNC_IMPL(__imp__sub_825BDC40) {
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
	// li r31,-1
	r31.s64 = -1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r8.u32);
	// stw r9,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_825BDCAC"))) PPC_WEAK_FUNC(sub_825BDCAC);
PPC_FUNC_IMPL(__imp__sub_825BDCAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BDCB0"))) PPC_WEAK_FUNC(sub_825BDCB0);
PPC_FUNC_IMPL(__imp__sub_825BDCB0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1144);
	// li r29,0
	r29.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r29
	r27.u64 = r29.u64;
	// stb r29,1148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1148, r29.u8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x825bdcf0
	if (cr6.lt) goto loc_825BDCF0;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r11,52
	ctx.r9.s64 = r11.s64 + 52;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,18436(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18436);
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lwz r27,80(r7)
	r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
loc_825BDCF0:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825bddac
	if (!cr6.gt) goto loc_825BDDAC;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_825BDD04:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825bdd98
	if (cr6.eq) goto loc_825BDD98;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bdd44
	if (cr6.eq) goto loc_825BDD44;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x825bdd34
	if (cr6.eq) goto loc_825BDD34;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x825bc500
	sub_825BC500(ctx, base);
loc_825BDD34:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// bl 0x825bc170
	sub_825BC170(ctx, base);
loc_825BDD44:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bdd78
	if (cr6.eq) goto loc_825BDD78;
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
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// stw r29,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, r29.u32);
loc_825BDD78:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825bdd98
	if (cr6.eq) goto loc_825BDD98;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stwx r29,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, r29.u32);
loc_825BDD98:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x825bdd04
	if (cr6.lt) goto loc_825BDD04;
loc_825BDDAC:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825bddd0
	if (!cr6.gt) goto loc_825BDDD0;
loc_825BDDB8:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x825bddb8
	if (cr6.gt) goto loc_825BDDB8;
loc_825BDDD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825BDDD4"))) PPC_WEAK_FUNC(sub_825BDDD4);
PPC_FUNC_IMPL(__imp__sub_825BDDD4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

